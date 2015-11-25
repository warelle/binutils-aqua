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
  32, 32, 0xfc00ffe0, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_RB) }, { F (F_FUNC) }, { F (F_TAG) }, { F (F_RX) }, { 0 } }
};

static const CGEN_IFMT ifmt_addi ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0001e0, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_LIT) }, { F (F_TAG) }, { F (F_RX) }, { 0 } }
};

static const CGEN_IFMT ifmt_il ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_DISP_N) }, { F (F_RX) }, { 0 } }
};

static const CGEN_IFMT ifmt_load ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_DISP_L) }, { F (F_RX) }, { 0 } }
};

static const CGEN_IFMT ifmt_store ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_RB) }, { F (F_DISP_S) }, { 0 } }
};

static const CGEN_IFMT ifmt_lr ATTRIBUTE_UNUSED = {
  32, 32, 0xfc1fffe0, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_RB) }, { F (F_FUNC) }, { F (F_TAG) }, { F (F_RX) }, { 0 } }
};

static const CGEN_IFMT ifmt_jr ATTRIBUTE_UNUSED = {
  32, 32, 0xfc1fffe0, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_LIT) }, { F (F_TAG) }, { F (F_RX) }, { 0 } }
};

static const CGEN_IFMT ifmt_beq ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_DISP_C) }, { 0 } }
};

static const CGEN_IFMT ifmt_syscall ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_LIT) }, { F (F_TAG) }, { F (F_RX) }, { 0 } }
};

static const CGEN_IFMT ifmt_sysr ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffe0, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_LIT) }, { F (F_TAG) }, { F (F_RX) }, { 0 } }
};

static const CGEN_IFMT ifmt_sysw ATTRIBUTE_UNUSED = {
  32, 32, 0xfc1fffff, { { F (F_OPCODE) }, { F (F_RA) }, { F (F_LIT) }, { F (F_TAG) }, { F (F_RX) }, { 0 } }
};

static const CGEN_IFMT ifmt_nop ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00001f, { { F (F_OPCODE) }, { F (F_DISP_N) }, { F (F_RX) }, { 0 } }
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
/* add $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe4000400 }
  },
/* addi $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xc8000000 }
  },
/* sub $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe4000420 }
  },
/* subi $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xc8000020 }
  },
/* sll $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe4000440 }
  },
/* slli $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xc8000040 }
  },
/* srl $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe4000460 }
  },
/* srli $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xc8000060 }
  },
/* sra $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe4000480 }
  },
/* srai $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xc8000080 }
  },
/* and $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe40004a0 }
  },
/* andi $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xc80000a0 }
  },
/* ior $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe40004c0 }
  },
/* iori $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xc80000c0 }
  },
/* xor $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe40004e0 }
  },
/* xori $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xc80000e0 }
  },
/* eq $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe4000600 }
  },
/* eqi $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xcc000000 }
  },
/* ne $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe4000620 }
  },
/* nei $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xcc000020 }
  },
/* lt $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe4000640 }
  },
/* lti $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xcc000040 }
  },
/* le $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe4000660 }
  },
/* lei $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xcc000060 }
  },
/* ult $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe4000680 }
  },
/* ulti $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xcc000080 }
  },
/* ule $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe40006a0 }
  },
/* ulei $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xcc0000a0 }
  },
/* gt $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe40006c0 }
  },
/* gti $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xcc0000c0 }
  },
/* ugt $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xe40006e0 }
  },
/* ugti $ra,$lit,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (LIT), ',', OP (RX), 0 } },
    & ifmt_addi, { 0xcc0000e0 }
  },
/* il $imm21n,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IMM21N), ',', OP (RX), 0 } },
    & ifmt_il, { 0x88000000 }
  },
/* ih $imm21n,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IMM21N), ',', OP (RX), 0 } },
    & ifmt_il, { 0x8c000000 }
  },
/* load $ra,$imm16l,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (IMM16L), ',', OP (RX), 0 } },
    & ifmt_load, { 0xd8000000 }
  },
/* store $ra,$rb,$imm16s */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (IMM16S), 0 } },
    & ifmt_store, { 0x7c000000 }
  },
/* lr $ra,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RX), 0 } },
    & ifmt_lr, { 0xf8000000 }
  },
/* sc $ra,$rb,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (RX), 0 } },
    & ifmt_add, { 0xfc000000 }
  },
/* jl $rx,$imm21n */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RX), ',', OP (IMM21N), 0 } },
    & ifmt_il, { 0x80000000 }
  },
/* jr $ra,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RX), 0 } },
    & ifmt_jr, { 0xc0000000 }
  },
/* beq $ra,$imm21c */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (IMM21C), 0 } },
    & ifmt_beq, { 0x44000000 }
  },
/* bne $ra,$imm21c */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (IMM21C), 0 } },
    & ifmt_beq, { 0x54000000 }
  },
/* blt $ra,$imm21c */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (IMM21C), 0 } },
    & ifmt_beq, { 0x48000000 }
  },
/* ble $ra,$imm21c */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (IMM21C), 0 } },
    & ifmt_beq, { 0x4c000000 }
  },
/* bgt $ra,$imm21c */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (IMM21C), 0 } },
    & ifmt_beq, { 0x5c000000 }
  },
/* bge $ra,$imm21c */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (IMM21C), 0 } },
    & ifmt_beq, { 0x58000000 }
  },
/* syscall $ra,$tag,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (TAG), ',', OP (RX), 0 } },
    & ifmt_syscall, { 0xc4000000 }
  },
/* sysret $ra,$tag,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (TAG), ',', OP (RX), 0 } },
    & ifmt_syscall, { 0xc4000020 }
  },
/* sysr $ra,$tag,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (TAG), ',', OP (RX), 0 } },
    & ifmt_sysr, { 0xc4000100 }
  },
/* sysw $ra,$tag,$rx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (TAG), ',', OP (RX), 0 } },
    & ifmt_sysw, { 0xc4000120 }
  },
/* sync $tag */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (TAG), 0 } },
    & ifmt_syscall, { 0xc000000 }
  },
/* sync.v $tag */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (TAG), 0 } },
    & ifmt_syscall, { 0xc000100 }
  },
/* sync.i $tag */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (TAG), 0 } },
    & ifmt_syscall, { 0xc0001e0 }
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
