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
  AQUA_INSN_INVALID, AQUA_INSN_ADD, AQUA_INSN_SUB, AQUA_INSN_SHL
 , AQUA_INSN_SHR, AQUA_INSN_SAR, AQUA_INSN_AND, AQUA_INSN_OR
 , AQUA_INSN_XOR, AQUA_INSN_CMPULT, AQUA_INSN_CMPULE, AQUA_INSN_CMPNE
 , AQUA_INSN_CMPEQ, AQUA_INSN_CMPLT, AQUA_INSN_CMPLE, AQUA_INSN_FCMPLT
 , AQUA_INSN_FCMPLE
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID AQUA_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) AQUA_INSN_FCMPLE + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_opcode;
  long f_rx;
  long f_ra;
  long f_rb;
  long f_prediction;
  long f_literal;
  long f_tag;
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
