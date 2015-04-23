/* CPU data header for aqua.

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

#ifndef AQUA_CPU_H
#define AQUA_CPU_H

#define CGEN_ARCH aqua

/* Given symbol S, return aqua_cgen_<S>.  */
#define CGEN_SYM(s) aqua##_cgen_##s


/* Selected cpu families.  */
#define HAVE_CPU_AQUA

#define CGEN_INSN_LSB0_P 1

/* Minimum size of any insn (in bytes).  */
#define CGEN_MIN_INSN_SIZE 4

/* Maximum size of any insn (in bytes).  */
#define CGEN_MAX_INSN_SIZE 5

#define CGEN_INT_INSN_P 0

/* Maximum number of syntax elements in an instruction.  */
#define CGEN_ACTUAL_MAX_SYNTAX_ELEMENTS 14

/* CGEN_MNEMONIC_OPERANDS is defined if mnemonics have operands.
   e.g. In "b,a foo" the ",a" is an operand.  If mnemonics have operands
   we can't hash on everything up to the space.  */
#define CGEN_MNEMONIC_OPERANDS

/* Maximum number of fields in an instruction.  */
#define CGEN_ACTUAL_MAX_IFMT_OPERANDS 6

/* Enums.  */

/* Enum declaration for insn format enums.  */
typedef enum insn_op {
  OP_0, OP_1, OP_2, OP_3
 , OP_4, OP_5, OP_6, OP_7
 , OP_8, OP_9, OP_10, OP_11
 , OP_12, OP_13, OP_14, OP_15
 , OP_16, OP_17, OP_18, OP_19
 , OP_20, OP_21, OP_22, OP_23
 , OP_24, OP_25, OP_26, OP_27
 , OP_28, OP_29, OP_30, OP_31
 , OP_32, OP_33, OP_34, OP_35
 , OP_36, OP_37, OP_38, OP_39
 , OP_40, OP_41, OP_42, OP_43
 , OP_44, OP_45, OP_46, OP_47
 , OP_48, OP_49, OP_50, OP_51
 , OP_52, OP_53, OP_54, OP_55
 , OP_56, OP_57, OP_58, OP_59
 , OP_60, OP_61, OP_62, OP_63
} INSN_OP;

/* Enum declaration for insn format enums.  */
typedef enum func1_op {
  FUNC1_0, FUNC1_1, FUNC1_2, FUNC1_3
 , FUNC1_4, FUNC1_5, FUNC1_6, FUNC1_7
 , FUNC1_8, FUNC1_9, FUNC1_10, FUNC1_11
 , FUNC1_12, FUNC1_13, FUNC1_14, FUNC1_15
} FUNC1_OP;

/* Enum declaration for insn format enums.  */
typedef enum func2_op {
  FUNC2_0, FUNC2_1, FUNC2_2, FUNC2_3
 , FUNC2_4, FUNC2_5, FUNC2_6, FUNC2_7
 , FUNC2_8, FUNC2_9, FUNC2_10, FUNC2_11
 , FUNC2_12, FUNC2_13, FUNC2_14, FUNC2_15
 , FUNC2_16, FUNC2_17, FUNC2_18, FUNC2_19
 , FUNC2_20, FUNC2_21, FUNC2_22, FUNC2_23
 , FUNC2_24, FUNC2_25, FUNC2_26, FUNC2_27
 , FUNC2_28, FUNC2_29, FUNC2_30, FUNC2_31
 , FUNC2_32, FUNC2_33, FUNC2_34, FUNC2_35
 , FUNC2_36, FUNC2_37, FUNC2_38, FUNC2_39
 , FUNC2_40, FUNC2_41, FUNC2_42, FUNC2_43
 , FUNC2_44, FUNC2_45, FUNC2_46, FUNC2_47
 , FUNC2_48, FUNC2_49, FUNC2_50, FUNC2_51
 , FUNC2_52, FUNC2_53, FUNC2_54, FUNC2_55
 , FUNC2_56, FUNC2_57, FUNC2_58, FUNC2_59
 , FUNC2_60, FUNC2_61, FUNC2_62, FUNC2_63
} FUNC2_OP;

/* Enum declaration for insn format enums.  */
typedef enum rd_op {
  RD_0
} RD_OP;

/* Enum declaration for insn format enums.  */
typedef enum ra_op {
  RA_0
} RA_OP;

/* Enum declaration for insn format enums.  */
typedef enum rb_op {
  RB_0
} RB_OP;

/* Enum declaration for insn format enums.  */
typedef enum limm12_op {
  L_IMM12_0
} LIMM12_OP;

/* Attributes.  */

/* Enum declaration for machine type selection.  */
typedef enum mach_attr {
  MACH_BASE, MACH_AQUA, MACH_MAX
} MACH_ATTR;

/* Enum declaration for instruction set selection.  */
typedef enum isa_attr {
  ISA_AQUA, ISA_MAX
} ISA_ATTR;

/* Number of architecture variants.  */
#define MAX_ISAS  1
#define MAX_MACHS ((int) MACH_MAX)

/* Ifield support.  */

/* Ifield attribute indices.  */

/* Enum declaration for cgen_ifld attrs.  */
typedef enum cgen_ifld_attr {
  CGEN_IFLD_VIRTUAL, CGEN_IFLD_PCREL_ADDR, CGEN_IFLD_ABS_ADDR, CGEN_IFLD_RESERVED
 , CGEN_IFLD_SIGN_OPT, CGEN_IFLD_SIGNED, CGEN_IFLD_END_BOOLS, CGEN_IFLD_START_NBOOLS = 31
 , CGEN_IFLD_MACH, CGEN_IFLD_END_NBOOLS
} CGEN_IFLD_ATTR;

/* Number of non-boolean elements in cgen_ifld_attr.  */
#define CGEN_IFLD_NBOOL_ATTRS (CGEN_IFLD_END_NBOOLS - CGEN_IFLD_START_NBOOLS - 1)

/* cgen_ifld attribute accessor macros.  */
#define CGEN_ATTR_CGEN_IFLD_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_IFLD_MACH-CGEN_IFLD_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_IFLD_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_IFLD_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_IFLD_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_IFLD_RESERVED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_RESERVED)) != 0)
#define CGEN_ATTR_CGEN_IFLD_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_IFLD_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_SIGNED)) != 0)

/* Enum declaration for aqua ifield types.  */
typedef enum ifield_type {
  AQUA_F_NIL, AQUA_F_ANYOF, AQUA_F_OPCODE, AQUA_F_RD
 , AQUA_F_RA, AQUA_F_RB, AQUA_F_FUNC1, AQUA_F_FUNC2
 , AQUA_F_IMM21_N, AQUA_F_IMM16_L, AQUA_F_IMM12_I, AQUA_F_IMM21_C_HIGH
 , AQUA_F_IMM21_C_LOW, AQUA_F_IMM21_C, AQUA_F_IMM16_S_HIGH, AQUA_F_IMM16_S_LOW
 , AQUA_F_IMM16_S, AQUA_F_MAX
} IFIELD_TYPE;

#define MAX_IFLD ((int) AQUA_F_MAX)

/* Hardware attribute indices.  */

/* Enum declaration for cgen_hw attrs.  */
typedef enum cgen_hw_attr {
  CGEN_HW_VIRTUAL, CGEN_HW_CACHE_ADDR, CGEN_HW_PC, CGEN_HW_PROFILE
 , CGEN_HW_END_BOOLS, CGEN_HW_START_NBOOLS = 31, CGEN_HW_MACH, CGEN_HW_END_NBOOLS
} CGEN_HW_ATTR;

/* Number of non-boolean elements in cgen_hw_attr.  */
#define CGEN_HW_NBOOL_ATTRS (CGEN_HW_END_NBOOLS - CGEN_HW_START_NBOOLS - 1)

/* cgen_hw attribute accessor macros.  */
#define CGEN_ATTR_CGEN_HW_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_HW_MACH-CGEN_HW_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_HW_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_HW_CACHE_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_CACHE_ADDR)) != 0)
#define CGEN_ATTR_CGEN_HW_PC_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PC)) != 0)
#define CGEN_ATTR_CGEN_HW_PROFILE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PROFILE)) != 0)

/* Enum declaration for aqua hardware types.  */
typedef enum cgen_hw_type {
  HW_H_MEMORY, HW_H_SINT, HW_H_UINT, HW_H_ADDR
 , HW_H_IADDR, HW_H_PC, HW_H_GR, HW_H_INT21
 , HW_H_INT16, HW_H_INT12, HW_H_UINT7, HW_H_UINT4
 , HW_MAX
} CGEN_HW_TYPE;

#define MAX_HW ((int) HW_MAX)

/* Operand attribute indices.  */

/* Enum declaration for cgen_operand attrs.  */
typedef enum cgen_operand_attr {
  CGEN_OPERAND_VIRTUAL, CGEN_OPERAND_PCREL_ADDR, CGEN_OPERAND_ABS_ADDR, CGEN_OPERAND_SIGN_OPT
 , CGEN_OPERAND_SIGNED, CGEN_OPERAND_NEGATIVE, CGEN_OPERAND_RELAX, CGEN_OPERAND_SEM_ONLY
 , CGEN_OPERAND_END_BOOLS, CGEN_OPERAND_START_NBOOLS = 31, CGEN_OPERAND_MACH, CGEN_OPERAND_END_NBOOLS
} CGEN_OPERAND_ATTR;

/* Number of non-boolean elements in cgen_operand_attr.  */
#define CGEN_OPERAND_NBOOL_ATTRS (CGEN_OPERAND_END_NBOOLS - CGEN_OPERAND_START_NBOOLS - 1)

/* cgen_operand attribute accessor macros.  */
#define CGEN_ATTR_CGEN_OPERAND_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_OPERAND_MACH-CGEN_OPERAND_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_OPERAND_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGNED)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_NEGATIVE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_NEGATIVE)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_RELAX_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_RELAX)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SEM_ONLY_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SEM_ONLY)) != 0)

/* Enum declaration for aqua operand types.  */
typedef enum cgen_operand_type {
  AQUA_OPERAND_PC, AQUA_OPERAND_RD, AQUA_OPERAND_RA, AQUA_OPERAND_RB
 , AQUA_OPERAND_IMM21C, AQUA_OPERAND_IMM16L, AQUA_OPERAND_IMM16S, AQUA_OPERAND_IMM12I
 , AQUA_OPERAND_FUNC1, AQUA_OPERAND_FUNC2, AQUA_OPERAND_IMM21N, AQUA_OPERAND_IMM21N_LOW
 , AQUA_OPERAND_IMM21N_HIGH, AQUA_OPERAND_MAX
} CGEN_OPERAND_TYPE;

/* Number of operands types.  */
#define MAX_OPERANDS 13

/* Maximum number of operands referenced by any insn.  */
#define MAX_OPERAND_INSTANCES 8

/* Insn attribute indices.  */

/* Enum declaration for cgen_insn attrs.  */
typedef enum cgen_insn_attr {
  CGEN_INSN_ALIAS, CGEN_INSN_VIRTUAL, CGEN_INSN_UNCOND_CTI, CGEN_INSN_COND_CTI
 , CGEN_INSN_SKIP_CTI, CGEN_INSN_DELAY_SLOT, CGEN_INSN_RELAXABLE, CGEN_INSN_RELAXED
 , CGEN_INSN_NO_DIS, CGEN_INSN_PBB, CGEN_INSN_END_BOOLS, CGEN_INSN_START_NBOOLS = 31
 , CGEN_INSN_MACH, CGEN_INSN_END_NBOOLS
} CGEN_INSN_ATTR;

/* Number of non-boolean elements in cgen_insn_attr.  */
#define CGEN_INSN_NBOOL_ATTRS (CGEN_INSN_END_NBOOLS - CGEN_INSN_START_NBOOLS - 1)

/* cgen_insn attribute accessor macros.  */
#define CGEN_ATTR_CGEN_INSN_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_INSN_MACH-CGEN_INSN_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_INSN_ALIAS_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_ALIAS)) != 0)
#define CGEN_ATTR_CGEN_INSN_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_INSN_UNCOND_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_UNCOND_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_COND_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_COND_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_SKIP_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_SKIP_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_DELAY_SLOT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_DELAY_SLOT)) != 0)
#define CGEN_ATTR_CGEN_INSN_RELAXABLE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_RELAXABLE)) != 0)
#define CGEN_ATTR_CGEN_INSN_RELAXED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_RELAXED)) != 0)
#define CGEN_ATTR_CGEN_INSN_NO_DIS_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_NO_DIS)) != 0)
#define CGEN_ATTR_CGEN_INSN_PBB_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_PBB)) != 0)

/* cgen.h uses things we just defined.  */
#include "opcode/cgen.h"

extern const struct cgen_ifld aqua_cgen_ifld_table[];

/* Attributes.  */
extern const CGEN_ATTR_TABLE aqua_cgen_hardware_attr_table[];
extern const CGEN_ATTR_TABLE aqua_cgen_ifield_attr_table[];
extern const CGEN_ATTR_TABLE aqua_cgen_operand_attr_table[];
extern const CGEN_ATTR_TABLE aqua_cgen_insn_attr_table[];

/* Hardware decls.  */

extern CGEN_KEYWORD aqua_cgen_opval_h_gr;

extern const CGEN_HW_ENTRY aqua_cgen_hw_table[];



#endif /* AQUA_CPU_H */
