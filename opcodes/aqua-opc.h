/* Instruction opcode header for aqua.

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

#ifndef AQUA_OPC_H
#define AQUA_OPC_H

/* -- opc.h */
/* -- */
/* Enum declaration for aqua instruction types.  */
typedef enum cgen_insn_type {
  AQUA_INSN_INVALID, AQUA_INSN_ADD, AQUA_INSN_ADDI, AQUA_INSN_SUB
 , AQUA_INSN_SUBI, AQUA_INSN_SLL, AQUA_INSN_SLLI, AQUA_INSN_SRL
 , AQUA_INSN_SRLI, AQUA_INSN_SRA, AQUA_INSN_SRAI, AQUA_INSN_AND
 , AQUA_INSN_ANDI, AQUA_INSN_OR, AQUA_INSN_ORI, AQUA_INSN_XOR
 , AQUA_INSN_XORI, AQUA_INSN_ADDX4, AQUA_INSN_ADDX4I, AQUA_INSN_SUBX4
 , AQUA_INSN_SUBX4I, AQUA_INSN_MUL, AQUA_INSN_MULI, AQUA_INSN_MULH
 , AQUA_INSN_MULHI, AQUA_INSN_EQ, AQUA_INSN_EQI, AQUA_INSN_NE
 , AQUA_INSN_NEI, AQUA_INSN_LT, AQUA_INSN_LTI, AQUA_INSN_LE
 , AQUA_INSN_LEI, AQUA_INSN_ULT, AQUA_INSN_ULTI, AQUA_INSN_ULE
 , AQUA_INSN_ULEI, AQUA_INSN_GT, AQUA_INSN_GTI, AQUA_INSN_UGT
 , AQUA_INSN_UGTI, AQUA_INSN_SYSENTER, AQUA_INSN_SYSEXIT, AQUA_INSN_LI
 , AQUA_INSN_LIH, AQUA_INSN_JL, AQUA_INSN_LOAD, AQUA_INSN_STORE
 , AQUA_INSN_JR, AQUA_INSN_JEQ, AQUA_INSN_JNE, AQUA_INSN_JLT
 , AQUA_INSN_JLE, AQUA_INSN_JGT, AQUA_INSN_JGE, AQUA_INSN_NOP
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID AQUA_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) AQUA_INSN_NOP + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_opcode;
  long f_rd;
  long f_ra;
  long f_rb;
  long f_func1;
  long f_func2;
  long f_imm21_n;
  long f_imm16_l;
  long f_imm12_i;
  long f_imm21_c_high;
  long f_imm21_c_low;
  long f_imm21_c;
  long f_imm16_s_high;
  long f_imm16_s_low;
  long f_imm16_s;
};

#define CGEN_INIT_PARSE(od) \
{\
}
#define CGEN_INIT_INSERT(od) \
{\
}
#define CGEN_INIT_EXTRACT(od) \
{\
}
#define CGEN_INIT_PRINT(od) \
{\
}


#endif /* AQUA_OPC_H */
