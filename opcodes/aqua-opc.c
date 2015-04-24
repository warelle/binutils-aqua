/* Instruction opcode table for aqua.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#include "sysdep.h"
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "aqua-desc.h"
#include "aqua-opc.h"
#include "libiberty.h"

/* -- opc.c */
/* -- */
/* The hash functions are recorded here to help keep assembler code out of
   the disassembler and vice versa.  */

static int asm_hash_insn_p        (const CGEN_INSN *);
static unsigned int asm_hash_insn (const char *);
static int dis_hash_insn_p        (const CGEN_INSN *);
static unsigned int dis_hash_insn (const char *, CGEN_INSN_INT);

/* Instruction formats.  */

#define F(f) & aqua_cgen_ifld_table[AQUA_##f]
static const CGEN_IFMT ifmt_empty ATTRIBUTE_UNUSED = {
  0, 0, 0x0, { { 0 } }
};

static const CGEN_IFMT ifmt_add ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007ff, { { F (F_OPCODE) }, { F (F_RD) }, { F (F_RA) }, { F (F_RB) }, { F (F_FUNC2) }, { F (F_FUNC1) }, { 0 } }
};

static const CGEN_IFMT ifmt_addi ATTRIBUTE_UNUSED = {
  32, 36, 0xfc00000f, { { F (F_OPCODE) }, { F (F_RD) }, { F (F_RA) }, { F (F_IMM16_L) }, { F (F_FUNC1) }, { 0 } }
};

static const CGEN_IFMT ifmt_sysenter ATTRIBUTE_UNUSED = {
  32, 32, 0xffff000f, { { F (F_OPCODE) }, { F (F_RD) }, { F (F_RA) }, { F (F_IMM12_I) }, { F (F_FUNC1) }, { 0 } }
};

static const CGEN_IFMT ifmt_li ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_RD) }, { F (F_IMM21_N) }, { 0 } }
};

static const CGEN_IFMT ifmt_lih ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_RD) }, { F (F_IMM21_N) }, { 0 } }
};

static const CGEN_IFMT ifmt_jl ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_RD) }, { F (F_IMM21_N) }, { 0 } }
};

static const CGEN_IFMT ifmt_load ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_RD) }, { F (F_RA) }, { F (F_IMM16_L) }, { 0 } }
};

static const CGEN_IFMT ifmt_store ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_RB) }, { F (F_IMM16_S) }, { 0 } }
};

static const CGEN_IFMT ifmt_jr ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_IMM21_C) }, { 0 } }
};

static const CGEN_IFMT ifmt_nop ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_OPCODE) }, { F (F_RD) }, { F (F_RA) }, { F (F_RB) }, { F (F_FUNC2) }, { F (F_FUNC1) }, { 0 } }
};

#undef F

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) AQUA_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The instruction table.  */

static const CGEN_OPCODE aqua_cgen_insn_opcode_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { { 0, 0, 0, 0 }, {{0}}, 0, {0}},
/* add $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x4000000 }
  },
/* addi $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x0 }
  },
/* sub $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x4000001 }
  },
/* subi $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x1 }
  },
/* sll $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x4000002 }
  },
/* slli $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x2 }
  },
/* srl $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x4000003 }
  },
/* srli $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x3 }
  },
/* sra $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x4000004 }
  },
/* srai $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x4 }
  },
/* and $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x4000005 }
  },
/* andi $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x5 }
  },
/* or $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x4000006 }
  },
/* ori $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x6 }
  },
/* xor $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x4000007 }
  },
/* xori $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x7 }
  },
/* addx4 $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x4000008 }
  },
/* addx4i $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x8 }
  },
/* subx4 $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x4000009 }
  },
/* subx4i $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x9 }
  },
/* mul $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x400000a }
  },
/* muli $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0xa }
  },
/* mulh $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x400000b }
  },
/* mulhi $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0xb }
  },
/* eq $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x1c000000 }
  },
/* eqi $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x18000000 }
  },
/* ne $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x1c000001 }
  },
/* nei $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x18000001 }
  },
/* lt $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x1c000002 }
  },
/* lti $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x18000002 }
  },
/* le $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x1c000003 }
  },
/* lei $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x18000003 }
  },
/* ult $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x1c000004 }
  },
/* ulti $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x18000004 }
  },
/* ule $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x1c000005 }
  },
/* ulei $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x18000005 }
  },
/* gt $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x1c000006 }
  },
/* gti $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x18000006 }
  },
/* ugt $rd,$ra,$rb */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_add, { 0x1c000007 }
  },
/* ugti $rd,$ra,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (IMM16L), 0 } },
    & ifmt_addi, { 0x18000007 }
  },
/* sysenter $imm12i */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IMM12I), 0 } },
    & ifmt_sysenter, { 0x78000000 }
  },
/* sysexit $imm12i */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IMM12I), 0 } },
    & ifmt_sysenter, { 0x78000001 }
  },
/* li $rd,$imm21n-low */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM21N), '-', 'l', 'o', 'w', 0 } },
    & ifmt_li, { 0x48000000 }
  },
/* lih $rd,$imm21n-high */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM21N), '-', 'h', 'i', 'g', 'h', 0 } },
    & ifmt_lih, { 0x4c000000 }
  },
/* jl $rd,$imm21n */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM21N), 0 } },
    & ifmt_jl, { 0x80000000 }
  },
/* load $rd,$imm16l */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM16L), 0 } },
    & ifmt_load, { 0x60000000 }
  },
/* store $rd,$imm16s */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM16S), 0 } },
    & ifmt_store, { 0x64000000 }
  },
/* jr $rd,$imm16s */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM16S), 0 } },
    & ifmt_jr, { 0x84000000 }
  },
/* jeq $rd,$imm16s */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM16S), 0 } },
    & ifmt_jr, { 0xa0000000 }
  },
/* jne $rd,$imm16s */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM16S), 0 } },
    & ifmt_jr, { 0xa4000000 }
  },
/* jlt $rd,$imm16s */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM16S), 0 } },
    & ifmt_jr, { 0xa8000000 }
  },
/* jle $rd,$imm16s */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM16S), 0 } },
    & ifmt_jr, { 0xac000000 }
  },
/* jgt $rd,$imm16s */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM16S), 0 } },
    & ifmt_jr, { 0xb0000000 }
  },
/* jge $rd,$imm16s */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM16S), 0 } },
    & ifmt_jr, { 0xb4000000 }
  },
/* nop */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x0 }
  },
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

/* Formats for ALIAS macro-insns.  */

#define F(f) & aqua_cgen_ifld_table[AQUA_##f]
#undef F

/* Each non-simple macro entry points to an array of expansion possibilities.  */

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) AQUA_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The macro instruction table.  */

static const CGEN_IBASE aqua_cgen_macro_insn_table[] =
{
};

/* The macro instruction opcode table.  */

static const CGEN_OPCODE aqua_cgen_macro_insn_opcode_table[] =
{
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

#ifndef CGEN_ASM_HASH_P
#define CGEN_ASM_HASH_P(insn) 1
#endif

#ifndef CGEN_DIS_HASH_P
#define CGEN_DIS_HASH_P(insn) 1
#endif

/* Return non-zero if INSN is to be added to the hash table.
   Targets are free to override CGEN_{ASM,DIS}_HASH_P in the .opc file.  */

static int
asm_hash_insn_p (insn)
     const CGEN_INSN *insn ATTRIBUTE_UNUSED;
{
  return CGEN_ASM_HASH_P (insn);
}

static int
dis_hash_insn_p (insn)
     const CGEN_INSN *insn;
{
  /* If building the hash table and the NO-DIS attribute is present,
     ignore.  */
  if (CGEN_INSN_ATTR_VALUE (insn, CGEN_INSN_NO_DIS))
    return 0;
  return CGEN_DIS_HASH_P (insn);
}

#ifndef CGEN_ASM_HASH
#define CGEN_ASM_HASH_SIZE 127
#ifdef CGEN_MNEMONIC_OPERANDS
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE)
#else
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE) /*FIXME*/
#endif
#endif

/* It doesn't make much sense to provide a default here,
   but while this is under development we do.
   BUFFER is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

#ifndef CGEN_DIS_HASH
#define CGEN_DIS_HASH_SIZE 256
#define CGEN_DIS_HASH(buf, value) (*(unsigned char *) (buf))
#endif

/* The result is the hash value of the insn.
   Targets are free to override CGEN_{ASM,DIS}_HASH in the .opc file.  */

static unsigned int
asm_hash_insn (mnem)
     const char * mnem;
{
  return CGEN_ASM_HASH (mnem);
}

/* BUF is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

static unsigned int
dis_hash_insn (buf, value)
     const char * buf ATTRIBUTE_UNUSED;
     CGEN_INSN_INT value ATTRIBUTE_UNUSED;
{
  return CGEN_DIS_HASH (buf, value);
}

/* Set the recorded length of the insn in the CGEN_FIELDS struct.  */

static void
set_fields_bitsize (CGEN_FIELDS *fields, int size)
{
  CGEN_FIELDS_BITSIZE (fields) = size;
}

/* Function to call before using the operand instance table.
   This plugs the opcode entries and macro instructions into the cpu table.  */

void
aqua_cgen_init_opcode_table (CGEN_CPU_DESC cd)
{
  int i;
  int num_macros = (sizeof (aqua_cgen_macro_insn_table) /
		    sizeof (aqua_cgen_macro_insn_table[0]));
  const CGEN_IBASE *ib = & aqua_cgen_macro_insn_table[0];
  const CGEN_OPCODE *oc = & aqua_cgen_macro_insn_opcode_table[0];
  CGEN_INSN *insns = xmalloc (num_macros * sizeof (CGEN_INSN));

  /* This test has been added to avoid a warning generated
     if memset is called with a third argument of value zero.  */
  if (num_macros >= 1)
    memset (insns, 0, num_macros * sizeof (CGEN_INSN));
  for (i = 0; i < num_macros; ++i)
    {
      insns[i].base = &ib[i];
      insns[i].opcode = &oc[i];
      aqua_cgen_build_insn_regex (& insns[i]);
    }
  cd->macro_insn_table.init_entries = insns;
  cd->macro_insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->macro_insn_table.num_init_entries = num_macros;

  oc = & aqua_cgen_insn_opcode_table[0];
  insns = (CGEN_INSN *) cd->insn_table.init_entries;
  for (i = 0; i < MAX_INSNS; ++i)
    {
      insns[i].opcode = &oc[i];
      aqua_cgen_build_insn_regex (& insns[i]);
    }

  cd->sizeof_fields = sizeof (CGEN_FIELDS);
  cd->set_fields_bitsize = set_fields_bitsize;

  cd->asm_hash_p = asm_hash_insn_p;
  cd->asm_hash = asm_hash_insn;
  cd->asm_hash_size = CGEN_ASM_HASH_SIZE;

  cd->dis_hash_p = dis_hash_insn_p;
  cd->dis_hash = dis_hash_insn;
  cd->dis_hash_size = CGEN_DIS_HASH_SIZE;
}
