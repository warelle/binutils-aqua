/* CPU data for aqua.

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
#include <stdio.h>
#include <stdarg.h>
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "aqua-desc.h"
#include "aqua-opc.h"
#include "opintl.h"
#include "libiberty.h"
#include "xregex.h"

/* Attributes.  */

static const CGEN_ATTR_ENTRY bool_attr[] =
{
  { "#f", 0 },
  { "#t", 1 },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY MACH_attr[] ATTRIBUTE_UNUSED =
{
  { "base", MACH_BASE },
  { "aqua", MACH_AQUA },
  { "max", MACH_MAX },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY ISA_attr[] ATTRIBUTE_UNUSED =
{
  { "aqua", ISA_AQUA },
  { "max", ISA_MAX },
  { 0, 0 }
};

const CGEN_ATTR_TABLE aqua_cgen_ifield_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "RESERVED", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE aqua_cgen_hardware_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "CACHE-ADDR", &bool_attr[0], &bool_attr[0] },
  { "PC", &bool_attr[0], &bool_attr[0] },
  { "PROFILE", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE aqua_cgen_operand_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { "NEGATIVE", &bool_attr[0], &bool_attr[0] },
  { "RELAX", &bool_attr[0], &bool_attr[0] },
  { "SEM-ONLY", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE aqua_cgen_insn_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ALIAS", &bool_attr[0], &bool_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "UNCOND-CTI", &bool_attr[0], &bool_attr[0] },
  { "COND-CTI", &bool_attr[0], &bool_attr[0] },
  { "SKIP-CTI", &bool_attr[0], &bool_attr[0] },
  { "DELAY-SLOT", &bool_attr[0], &bool_attr[0] },
  { "RELAXABLE", &bool_attr[0], &bool_attr[0] },
  { "RELAXED", &bool_attr[0], &bool_attr[0] },
  { "NO-DIS", &bool_attr[0], &bool_attr[0] },
  { "PBB", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

/* Instruction set variants.  */

static const CGEN_ISA aqua_cgen_isa_table[] = {
  { "aqua", 32, 32, 32, 32 },
  { 0, 0, 0, 0, 0 }
};

/* Machine variants.  */

static const CGEN_MACH aqua_cgen_mach_table[] = {
  { "aqua", "aqua", MACH_AQUA, 0 },
  { 0, 0, 0, 0 }
};

static CGEN_KEYWORD_ENTRY aqua_cgen_opval_h_gr_entries[] =
{
  { "sp", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "ra", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "tp", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "rzero", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "r0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "r1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "r2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "r3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "r4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "r5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "r6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "r7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "r8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "r9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "r10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "r11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "r12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "r13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "r14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "r15", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "r16", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "r17", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "r18", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "r19", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "r20", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "r21", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "r22", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "r23", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "r24", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "r25", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "r26", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "r27", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "r28", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "r29", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "r30", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "r31", 31, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD aqua_cgen_opval_h_gr =
{
  & aqua_cgen_opval_h_gr_entries[0],
  36,
  0, 0, 0, 0, ""
};


/* The hardware table.  */

#define A(a) (1 << CGEN_HW_##a)

const CGEN_HW_ENTRY aqua_cgen_hw_table[] =
{
  { "h-memory", HW_H_MEMORY, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-sint", HW_H_SINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-uint", HW_H_UINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-addr", HW_H_ADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-iaddr", HW_H_IADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-pc", HW_H_PC, CGEN_ASM_NONE, 0, { 0|A(PC), { { { (1<<MACH_BASE), 0 } } } } },
  { "h-gr", HW_H_GR, CGEN_ASM_KEYWORD, (PTR) & aqua_cgen_opval_h_gr, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-int21", HW_H_INT21, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-int16", HW_H_INT16, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-int12", HW_H_INT12, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-uint7", HW_H_UINT7, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-uint4", HW_H_UINT4, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { 0, 0, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A


/* The instruction field table.  */

#define A(a) (1 << CGEN_IFLD_##a)

const CGEN_IFLD aqua_cgen_ifld_table[] =
{
  { AQUA_F_NIL, "f-nil", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_ANYOF, "f-anyof", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_OPCODE, "f-opcode", 0, 32, 31, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_RA, "f-ra", 0, 32, 25, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_RB, "f-rb", 0, 32, 20, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_RX, "f-rx", 0, 32, 4, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_LIT, "f-lit", 0, 32, 20, 12, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_DISP_N, "f-disp-n", 0, 32, 25, 21, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_DISP_L, "f-disp-l", 0, 32, 20, 16, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_DISP_C, "f-disp-c", 0, 32, 20, 21, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_DISP_S, "f-disp-s", 0, 32, 15, 16, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_FUNC, "f-func", 0, 32, 15, 7, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AQUA_F_TAG, "f-tag", 0, 32, 8, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { 0, 0, 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A



/* multi ifield declarations */



/* multi ifield definitions */


/* The operand table.  */

#define A(a) (1 << CGEN_OPERAND_##a)
#define OPERAND(op) AQUA_OPERAND_##op

const CGEN_OPERAND aqua_cgen_operand_table[] =
{
/* pc: program counter */
  { "pc", AQUA_OPERAND_PC, HW_H_PC, 0, 0,
    { 0, { (const PTR) &aqua_cgen_ifld_table[AQUA_F_NIL] } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } } } }  },
/* rx: destination register */
  { "rx", AQUA_OPERAND_RX, HW_H_GR, 4, 5,
    { 0, { (const PTR) &aqua_cgen_ifld_table[AQUA_F_RX] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* ra: source register 1 */
  { "ra", AQUA_OPERAND_RA, HW_H_GR, 25, 5,
    { 0, { (const PTR) &aqua_cgen_ifld_table[AQUA_F_RA] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* rb: source register 2 */
  { "rb", AQUA_OPERAND_RB, HW_H_GR, 20, 5,
    { 0, { (const PTR) &aqua_cgen_ifld_table[AQUA_F_RB] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm21n: 21bit immediate value n-form */
  { "imm21n", AQUA_OPERAND_IMM21N, HW_H_INT21, 25, 21,
    { 0, { (const PTR) &aqua_cgen_ifld_table[AQUA_F_DISP_N] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm16l: 16bit immediate value l-form */
  { "imm16l", AQUA_OPERAND_IMM16L, HW_H_INT16, 20, 16,
    { 0, { (const PTR) &aqua_cgen_ifld_table[AQUA_F_DISP_L] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm21c: 21bit immediate value c-form */
  { "imm21c", AQUA_OPERAND_IMM21C, HW_H_INT21, 20, 21,
    { 0, { (const PTR) &aqua_cgen_ifld_table[AQUA_F_DISP_C] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm16s: 16bit immediate value s-form */
  { "imm16s", AQUA_OPERAND_IMM16S, HW_H_INT16, 15, 16,
    { 0, { (const PTR) &aqua_cgen_ifld_table[AQUA_F_DISP_S] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* lit: 12bit literal value i-form */
  { "lit", AQUA_OPERAND_LIT, HW_H_INT12, 20, 12,
    { 0, { (const PTR) &aqua_cgen_ifld_table[AQUA_F_LIT] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* func: func */
  { "func", AQUA_OPERAND_FUNC, HW_H_UINT7, 15, 7,
    { 0, { (const PTR) &aqua_cgen_ifld_table[AQUA_F_FUNC] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* tag: tag */
  { "tag", AQUA_OPERAND_TAG, HW_H_UINT4, 8, 4,
    { 0, { (const PTR) &aqua_cgen_ifld_table[AQUA_F_TAG] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* sentinel */
  { 0, 0, 0, 0, 0,
    { 0, { (const PTR) 0 } },
    { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A


/* The instruction table.  */

#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))
#define A(a) (1 << CGEN_INSN_##a)

static const CGEN_IBASE aqua_cgen_insn_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
/* add $ra,$rb,$rx */
  {
    AQUA_INSN_ADD, "add", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addi $ra,$lit,$rx */
  {
    AQUA_INSN_ADDI, "addi", "addi", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub $ra,$rb,$rx */
  {
    AQUA_INSN_SUB, "sub", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subi $ra,$lit,$rx */
  {
    AQUA_INSN_SUBI, "subi", "subi", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sll $ra,$rb,$rx */
  {
    AQUA_INSN_SLL, "sll", "sll", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* slli $ra,$lit,$rx */
  {
    AQUA_INSN_SLLI, "slli", "slli", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* srl $ra,$rb,$rx */
  {
    AQUA_INSN_SRL, "srl", "srl", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* srli $ra,$lit,$rx */
  {
    AQUA_INSN_SRLI, "srli", "srli", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sra $ra,$rb,$rx */
  {
    AQUA_INSN_SRA, "sra", "sra", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* srai $ra,$lit,$rx */
  {
    AQUA_INSN_SRAI, "srai", "srai", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* and $ra,$rb,$rx */
  {
    AQUA_INSN_AND, "and", "and", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* andi $ra,$lit,$rx */
  {
    AQUA_INSN_ANDI, "andi", "andi", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ior $ra,$rb,$rx */
  {
    AQUA_INSN_IOR, "ior", "ior", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* iori $ra,$lit,$rx */
  {
    AQUA_INSN_IORI, "iori", "iori", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* xor $ra,$rb,$rx */
  {
    AQUA_INSN_XOR, "xor", "xor", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* xori $ra,$lit,$rx */
  {
    AQUA_INSN_XORI, "xori", "xori", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* eq $ra,$rb,$rx */
  {
    AQUA_INSN_EQ, "eq", "eq", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* eqi $ra,$lit,$rx */
  {
    AQUA_INSN_EQI, "eqi", "eqi", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ne $ra,$rb,$rx */
  {
    AQUA_INSN_NE, "ne", "ne", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* nei $ra,$lit,$rx */
  {
    AQUA_INSN_NEI, "nei", "nei", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lt $ra,$rb,$rx */
  {
    AQUA_INSN_LT, "lt", "lt", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lti $ra,$lit,$rx */
  {
    AQUA_INSN_LTI, "lti", "lti", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* le $ra,$rb,$rx */
  {
    AQUA_INSN_LE, "le", "le", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lei $ra,$lit,$rx */
  {
    AQUA_INSN_LEI, "lei", "lei", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ult $ra,$rb,$rx */
  {
    AQUA_INSN_ULT, "ult", "ult", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ulti $ra,$lit,$rx */
  {
    AQUA_INSN_ULTI, "ulti", "ulti", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ule $ra,$rb,$rx */
  {
    AQUA_INSN_ULE, "ule", "ule", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ulei $ra,$lit,$rx */
  {
    AQUA_INSN_ULEI, "ulei", "ulei", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* gt $ra,$rb,$rx */
  {
    AQUA_INSN_GT, "gt", "gt", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* gti $ra,$lit,$rx */
  {
    AQUA_INSN_GTI, "gti", "gti", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ugt $ra,$rb,$rx */
  {
    AQUA_INSN_UGT, "ugt", "ugt", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ugti $ra,$lit,$rx */
  {
    AQUA_INSN_UGTI, "ugti", "ugti", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* il $imm21n,$rx */
  {
    AQUA_INSN_IL, "il", "il", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ih $imm21n,$rx */
  {
    AQUA_INSN_IH, "ih", "ih", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* load $ra,$imm16l,$rx */
  {
    AQUA_INSN_LOAD, "load", "load", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* store $ra,$rb,$imm16s */
  {
    AQUA_INSN_STORE, "store", "store", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lr $ra,$rx */
  {
    AQUA_INSN_LR, "lr", "lr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sc $ra,$rb,$rx */
  {
    AQUA_INSN_SC, "sc", "sc", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jl $rx,$imm21n */
  {
    AQUA_INSN_JL, "jl", "jl", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jr $ra,$rx */
  {
    AQUA_INSN_JR, "jr", "jr", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* beq $ra,$imm21c */
  {
    AQUA_INSN_BEQ, "beq", "beq", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bne $ra,$imm21c */
  {
    AQUA_INSN_BNE, "bne", "bne", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* blt $ra,$imm21c */
  {
    AQUA_INSN_BLT, "blt", "blt", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ble $ra,$imm21c */
  {
    AQUA_INSN_BLE, "ble", "ble", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bgt $ra,$imm21c */
  {
    AQUA_INSN_BGT, "bgt", "bgt", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bge $ra,$imm21c */
  {
    AQUA_INSN_BGE, "bge", "bge", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* syscall $ra,$tag,$rx */
  {
    AQUA_INSN_SYSCALL, "syscall", "syscall", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sysret $ra,$tag,$rx */
  {
    AQUA_INSN_SYSRET, "sysret", "sysret", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sysr $ra,$tag,$rx */
  {
    AQUA_INSN_SYSR, "sysr", "sysr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sysw $ra,$tag,$rx */
  {
    AQUA_INSN_SYSW, "sysw", "sysw", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sync $tag */
  {
    AQUA_INSN_SYNC, "sync", "sync", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sync.v $tag */
  {
    AQUA_INSN_SYNC_V, "sync.v", "sync.v", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sync.i $tag */
  {
    AQUA_INSN_SYNC_I, "sync.i", "sync.i", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* nop */
  {
    AQUA_INSN_NOP, "nop", "nop", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
};

#undef OP
#undef A

/* Initialize anything needed to be done once, before any cpu_open call.  */

static void
init_tables (void)
{
}

static const CGEN_MACH * lookup_mach_via_bfd_name (const CGEN_MACH *, const char *);
static void build_hw_table      (CGEN_CPU_TABLE *);
static void build_ifield_table  (CGEN_CPU_TABLE *);
static void build_operand_table (CGEN_CPU_TABLE *);
static void build_insn_table    (CGEN_CPU_TABLE *);
static void aqua_cgen_rebuild_tables (CGEN_CPU_TABLE *);

/* Subroutine of aqua_cgen_cpu_open to look up a mach via its bfd name.  */

static const CGEN_MACH *
lookup_mach_via_bfd_name (const CGEN_MACH *table, const char *name)
{
  while (table->name)
    {
      if (strcmp (name, table->bfd_name) == 0)
	return table;
      ++table;
    }
  abort ();
}

/* Subroutine of aqua_cgen_cpu_open to build the hardware table.  */

static void
build_hw_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_HW_ENTRY *init = & aqua_cgen_hw_table[0];
  /* MAX_HW is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_HW_ENTRY **selected =
    (const CGEN_HW_ENTRY **) xmalloc (MAX_HW * sizeof (CGEN_HW_ENTRY *));

  cd->hw_table.init_entries = init;
  cd->hw_table.entry_size = sizeof (CGEN_HW_ENTRY);
  memset (selected, 0, MAX_HW * sizeof (CGEN_HW_ENTRY *));
  /* ??? For now we just use machs to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_HW_ATTR_VALUE (&init[i], CGEN_HW_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->hw_table.entries = selected;
  cd->hw_table.num_entries = MAX_HW;
}

/* Subroutine of aqua_cgen_cpu_open to build the hardware table.  */

static void
build_ifield_table (CGEN_CPU_TABLE *cd)
{
  cd->ifld_table = & aqua_cgen_ifld_table[0];
}

/* Subroutine of aqua_cgen_cpu_open to build the hardware table.  */

static void
build_operand_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_OPERAND *init = & aqua_cgen_operand_table[0];
  /* MAX_OPERANDS is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_OPERAND **selected = xmalloc (MAX_OPERANDS * sizeof (* selected));

  cd->operand_table.init_entries = init;
  cd->operand_table.entry_size = sizeof (CGEN_OPERAND);
  memset (selected, 0, MAX_OPERANDS * sizeof (CGEN_OPERAND *));
  /* ??? For now we just use mach to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_OPERAND_ATTR_VALUE (&init[i], CGEN_OPERAND_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->operand_table.entries = selected;
  cd->operand_table.num_entries = MAX_OPERANDS;
}

/* Subroutine of aqua_cgen_cpu_open to build the hardware table.
   ??? This could leave out insns not supported by the specified mach/isa,
   but that would cause errors like "foo only supported by bar" to become
   "unknown insn", so for now we include all insns and require the app to
   do the checking later.
   ??? On the other hand, parsing of such insns may require their hardware or
   operand elements to be in the table [which they mightn't be].  */

static void
build_insn_table (CGEN_CPU_TABLE *cd)
{
  int i;
  const CGEN_IBASE *ib = & aqua_cgen_insn_table[0];
  CGEN_INSN *insns = xmalloc (MAX_INSNS * sizeof (CGEN_INSN));

  memset (insns, 0, MAX_INSNS * sizeof (CGEN_INSN));
  for (i = 0; i < MAX_INSNS; ++i)
    insns[i].base = &ib[i];
  cd->insn_table.init_entries = insns;
  cd->insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->insn_table.num_init_entries = MAX_INSNS;
}

/* Subroutine of aqua_cgen_cpu_open to rebuild the tables.  */

static void
aqua_cgen_rebuild_tables (CGEN_CPU_TABLE *cd)
{
  int i;
  CGEN_BITSET *isas = cd->isas;
  unsigned int machs = cd->machs;

  cd->int_insn_p = CGEN_INT_INSN_P;

  /* Data derived from the isa spec.  */
#define UNSET (CGEN_SIZE_UNKNOWN + 1)
  cd->default_insn_bitsize = UNSET;
  cd->base_insn_bitsize = UNSET;
  cd->min_insn_bitsize = 65535; /* Some ridiculously big number.  */
  cd->max_insn_bitsize = 0;
  for (i = 0; i < MAX_ISAS; ++i)
    if (cgen_bitset_contains (isas, i))
      {
	const CGEN_ISA *isa = & aqua_cgen_isa_table[i];

	/* Default insn sizes of all selected isas must be
	   equal or we set the result to 0, meaning "unknown".  */
	if (cd->default_insn_bitsize == UNSET)
	  cd->default_insn_bitsize = isa->default_insn_bitsize;
	else if (isa->default_insn_bitsize == cd->default_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->default_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Base insn sizes of all selected isas must be equal
	   or we set the result to 0, meaning "unknown".  */
	if (cd->base_insn_bitsize == UNSET)
	  cd->base_insn_bitsize = isa->base_insn_bitsize;
	else if (isa->base_insn_bitsize == cd->base_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->base_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Set min,max insn sizes.  */
	if (isa->min_insn_bitsize < cd->min_insn_bitsize)
	  cd->min_insn_bitsize = isa->min_insn_bitsize;
	if (isa->max_insn_bitsize > cd->max_insn_bitsize)
	  cd->max_insn_bitsize = isa->max_insn_bitsize;
      }

  /* Data derived from the mach spec.  */
  for (i = 0; i < MAX_MACHS; ++i)
    if (((1 << i) & machs) != 0)
      {
	const CGEN_MACH *mach = & aqua_cgen_mach_table[i];

	if (mach->insn_chunk_bitsize != 0)
	{
	  if (cd->insn_chunk_bitsize != 0 && cd->insn_chunk_bitsize != mach->insn_chunk_bitsize)
	    {
	      fprintf (stderr, "aqua_cgen_rebuild_tables: conflicting insn-chunk-bitsize values: `%d' vs. `%d'\n",
		       cd->insn_chunk_bitsize, mach->insn_chunk_bitsize);
	      abort ();
	    }

 	  cd->insn_chunk_bitsize = mach->insn_chunk_bitsize;
	}
      }

  /* Determine which hw elements are used by MACH.  */
  build_hw_table (cd);

  /* Build the ifield table.  */
  build_ifield_table (cd);

  /* Determine which operands are used by MACH/ISA.  */
  build_operand_table (cd);

  /* Build the instruction table.  */
  build_insn_table (cd);
}

/* Initialize a cpu table and return a descriptor.
   It's much like opening a file, and must be the first function called.
   The arguments are a set of (type/value) pairs, terminated with
   CGEN_CPU_OPEN_END.

   Currently supported values:
   CGEN_CPU_OPEN_ISAS:    bitmap of values in enum isa_attr
   CGEN_CPU_OPEN_MACHS:   bitmap of values in enum mach_attr
   CGEN_CPU_OPEN_BFDMACH: specify 1 mach using bfd name
   CGEN_CPU_OPEN_ENDIAN:  specify endian choice
   CGEN_CPU_OPEN_END:     terminates arguments

   ??? Simultaneous multiple isas might not make sense, but it's not (yet)
   precluded.  */

CGEN_CPU_DESC
aqua_cgen_cpu_open (enum cgen_cpu_open_arg arg_type, ...)
{
  CGEN_CPU_TABLE *cd = (CGEN_CPU_TABLE *) xmalloc (sizeof (CGEN_CPU_TABLE));
  static int init_p;
  CGEN_BITSET *isas = 0;  /* 0 = "unspecified" */
  unsigned int machs = 0; /* 0 = "unspecified" */
  enum cgen_endian endian = CGEN_ENDIAN_UNKNOWN;
  va_list ap;

  if (! init_p)
    {
      init_tables ();
      init_p = 1;
    }

  memset (cd, 0, sizeof (*cd));

  va_start (ap, arg_type);
  while (arg_type != CGEN_CPU_OPEN_END)
    {
      switch (arg_type)
	{
	case CGEN_CPU_OPEN_ISAS :
	  isas = va_arg (ap, CGEN_BITSET *);
	  break;
	case CGEN_CPU_OPEN_MACHS :
	  machs = va_arg (ap, unsigned int);
	  break;
	case CGEN_CPU_OPEN_BFDMACH :
	  {
	    const char *name = va_arg (ap, const char *);
	    const CGEN_MACH *mach =
	      lookup_mach_via_bfd_name (aqua_cgen_mach_table, name);

	    machs |= 1 << mach->num;
	    break;
	  }
	case CGEN_CPU_OPEN_ENDIAN :
	  endian = va_arg (ap, enum cgen_endian);
	  break;
	default :
	  fprintf (stderr, "aqua_cgen_cpu_open: unsupported argument `%d'\n",
		   arg_type);
	  abort (); /* ??? return NULL? */
	}
      arg_type = va_arg (ap, enum cgen_cpu_open_arg);
    }
  va_end (ap);

  /* Mach unspecified means "all".  */
  if (machs == 0)
    machs = (1 << MAX_MACHS) - 1;
  /* Base mach is always selected.  */
  machs |= 1;
  if (endian == CGEN_ENDIAN_UNKNOWN)
    {
      /* ??? If target has only one, could have a default.  */
      fprintf (stderr, "aqua_cgen_cpu_open: no endianness specified\n");
      abort ();
    }

  cd->isas = cgen_bitset_copy (isas);
  cd->machs = machs;
  cd->endian = endian;
  /* FIXME: for the sparc case we can determine insn-endianness statically.
     The worry here is where both data and insn endian can be independently
     chosen, in which case this function will need another argument.
     Actually, will want to allow for more arguments in the future anyway.  */
  cd->insn_endian = endian;

  /* Table (re)builder.  */
  cd->rebuild_tables = aqua_cgen_rebuild_tables;
  aqua_cgen_rebuild_tables (cd);

  /* Default to not allowing signed overflow.  */
  cd->signed_overflow_ok_p = 0;
  
  return (CGEN_CPU_DESC) cd;
}

/* Cover fn to aqua_cgen_cpu_open to handle the simple case of 1 isa, 1 mach.
   MACH_NAME is the bfd name of the mach.  */

CGEN_CPU_DESC
aqua_cgen_cpu_open_1 (const char *mach_name, enum cgen_endian endian)
{
  return aqua_cgen_cpu_open (CGEN_CPU_OPEN_BFDMACH, mach_name,
			       CGEN_CPU_OPEN_ENDIAN, endian,
			       CGEN_CPU_OPEN_END);
}

/* Close a cpu table.
   ??? This can live in a machine independent file, but there's currently
   no place to put this file (there's no libcgen).  libopcodes is the wrong
   place as some simulator ports use this but they don't use libopcodes.  */

void
aqua_cgen_cpu_close (CGEN_CPU_DESC cd)
{
  unsigned int i;
  const CGEN_INSN *insns;

  if (cd->macro_insn_table.init_entries)
    {
      insns = cd->macro_insn_table.init_entries;
      for (i = 0; i < cd->macro_insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX ((insns)))
	  regfree (CGEN_INSN_RX (insns));
    }

  if (cd->insn_table.init_entries)
    {
      insns = cd->insn_table.init_entries;
      for (i = 0; i < cd->insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX (insns))
	  regfree (CGEN_INSN_RX (insns));
    }  

  if (cd->macro_insn_table.init_entries)
    free ((CGEN_INSN *) cd->macro_insn_table.init_entries);

  if (cd->insn_table.init_entries)
    free ((CGEN_INSN *) cd->insn_table.init_entries);

  if (cd->hw_table.entries)
    free ((CGEN_HW_ENTRY *) cd->hw_table.entries);

  if (cd->operand_table.entries)
    free ((CGEN_HW_ENTRY *) cd->operand_table.entries);

  free (cd);
}

