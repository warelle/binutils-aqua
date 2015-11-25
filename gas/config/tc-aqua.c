/* tc-aqua.c -- Assemble code for aqua

   This file is part of GAS, the GNU Assembler.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS; see the file COPYING.  If not, write to
   the Free Software Foundation, 51 Franklin Street - Fifth Floor,
   Boston, MA 02110-1301, USA.  */

#include "as.h"
#include "safe-ctype.h"
#include "subsegs.h"
#include "symcat.h"
#include "opcodes/aqua-desc.h"
#include "opcodes/aqua-opc.h"
#include "cgen.h"

typedef struct aqua_insn aqua_insn;

struct aqua_insn
{
  const CGEN_INSN *	insn;
  const CGEN_INSN *	orig_insn;
  CGEN_FIELDS		fields;
#if CGEN_INT_INSN_P
  CGEN_INSN_INT         buffer [1];
#define INSN_VALUE(buf) (*(buf))
#else
  unsigned char         buffer [CGEN_MAX_INSN_SIZE];
#define INSN_VALUE(buf) (buf)
#endif
  char *		addr;
  fragS *		frag;
  int                   num_fixups;
  fixS *                fixups [GAS_CGEN_MAX_FIXUPS];
  int                   indices [MAX_OPERAND_INSTANCES];
};

const char comment_chars[]        = "#";
const char line_separator_chars[] = ";";
const char line_comment_chars[]   = "#";

const pseudo_typeS md_pseudo_table[] =
{
  {0, 0, 0}
};

const char FLT_CHARS[] = "rRsSfFdDxXpP";
const char EXP_CHARS[] = "eE";

void
md_operand (expressionS *op __attribute__((unused)))
{
  /* Empty for now. */
}

/* This function is called once, at assembler startup time. */
void
md_begin (void)
{
  /* Initialize the `cgen' interface.  */
  /* Set the machine number and endian.  */
  gas_cgen_cpu_desc = aqua_cgen_cpu_open (
              CGEN_CPU_OPEN_MACHS,
              0,
					    CGEN_CPU_OPEN_ENDIAN,
					    CGEN_ENDIAN_BIG,
					    CGEN_CPU_OPEN_END
  );

  aqua_cgen_init_asm(gas_cgen_cpu_desc);

  /* This is a callback from cgen to gas to parse operands.  */
  cgen_set_parse_operand_fn(gas_cgen_cpu_desc, gas_cgen_parse_operand);

  bfd_set_arch_mach(stdoutput, TARGET_ARCH, 0);
}

/* This is the machine-dependent assembler using cgen. */
void
md_assemble (char *str)
{
  aqua_insn insn;
  char *errmsg;

  /* Initialize GAS's cgen interface for a new instruction.  */
  gas_cgen_init_parse();

  insn.insn = aqua_cgen_assemble_insn(gas_cgen_cpu_desc, str, & insn.fields, insn.buffer, & errmsg);

  if (!insn.insn)
    {
      as_bad ("%s", errmsg);
      return;
    }

  /* Doesn't really matter what we pass for RELAX_P here.  */
  gas_cgen_finish_insn (insn.insn, insn.buffer, CGEN_FIELDS_BITSIZE (& insn.fields), 1, NULL);
}

/* Turn a string in input_line_pointer into a floating point constant
   of type type, and store the appropriate bytes in *LITP.  The number
   of LITTLENUMS emitted is stored in *SIZEP .  An error message is
   returned, or NULL on OK.  */
char *
md_atof (int type, char *litP, int *sizeP)
{
  int prec;
  LITTLENUM_TYPE words[4];
  char *t;
  int i;

  switch (type)
    {
    case 'f':
      prec = 2;
      break;

    case 'd':
      prec = 4;
      break;

    default:
      *sizeP = 0;
      return _("bad call to md_atof");
    }

  t = atof_ieee (input_line_pointer, type, words);
  if (t)
    input_line_pointer = t;

  *sizeP = prec * 2;

  for (i = prec - 1; i >= 0; i--)
    {
      md_number_to_chars (litP, (valueT) words[i], 2);
      litP += 2;
    }

  return NULL;
}

const char *md_shortopts = "";

struct option md_longopts[] =
{
  {NULL, no_argument, NULL, 0}
};
size_t md_longopts_size = sizeof (md_longopts);

/* We have no target specific options yet, so these next two functions are empty.  */
int
md_parse_option (int c ATTRIBUTE_UNUSED, char *arg ATTRIBUTE_UNUSED)
{
  return 0;
}

void
md_show_usage (FILE *stream ATTRIBUTE_UNUSED)
{
}

/* Put number into target byte order (big endian).  */
void
md_number_to_chars (char *ptr, valueT use, int nbytes)
{
  number_to_chars_bigendian (ptr, use, nbytes);
}

valueT
md_section_align (segT segment, valueT size)
{
  int align = bfd_get_section_alignment (stdoutput, segment);
  return ((size + (1 << align) - 1) & (-1 << align));
}

/* The location from which a PC relative jump should be calculated, given a PC relative reloc. */
long
md_pcrel_from_section (fixS * fixP, segT sec)
{
  if (fixP->fx_addsy != (symbolS *) NULL
      && (! S_IS_DEFINED (fixP->fx_addsy)
	  || S_GET_SEGMENT (fixP->fx_addsy) != sec
          || S_IS_EXTERNAL (fixP->fx_addsy)
          || S_IS_WEAK (fixP->fx_addsy)))
    {
      if (S_GET_SEGMENT (fixP->fx_addsy) != sec
          && S_IS_DEFINED (fixP->fx_addsy)
          && ! S_IS_EXTERNAL (fixP->fx_addsy)
          && ! S_IS_WEAK (fixP->fx_addsy))
        return fixP->fx_offset;

    /* The symbol is undefined (or is defined but not in this section).
       Let the linker figure it out. */
    return 0;
  }

  return (fixP->fx_frag->fr_address + fixP->fx_where) & ~3;
}

/* Return the bfd reloc type for OPERAND of INSN at fixup FIXP.
   Returns BFD_RELOC_NONE if no reloc type can be found.
   *FIXP may be modified if desired. */

bfd_reloc_code_real_type
md_cgen_lookup_reloc (const CGEN_INSN *    insn ATTRIBUTE_UNUSED,
		      const CGEN_OPERAND * operand,
		      fixS *               fixP)
{
  fixP->fx_pcrel = 0;

  switch (operand->type)
  {
  //case AQUA_OPERAND_IMM21N_LOW:
  //  return BFD_RELOC_AQUA_LO21;
  //case AQUA_OPERAND_IMM21N_HIGH:
  //  return BFD_RELOC_AQUA_HI21;
  default:
    break;
  }

  return BFD_RELOC_NONE;
}
