/* gcore ELF support for BFD.

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.  */

#ifndef _ELF_AQUA_H
#define _ELF_AQUA_H

#include "elf/reloc-macros.h"

/* Relocation types.  */
START_RELOC_NUMBERS (elf_aqua_reloc_type)
  RELOC_NUMBER (R_AQUA_NONE, 0)
  RELOC_NUMBER (R_AQUA_32, 1)
  RELOC_NUMBER (R_AQUA_16, 2)
  RELOC_NUMBER (R_AQUA_21, 3)
//  RELOC_NUMBER (R_AQUA_16_HIGH, 2)
//  RELOC_NUMBER (R_AQUA_16_LOW,  3)
//  RELOC_NUMBER (R_AQUA_21_HIGH, 4)
//  RELOC_NUMBER (R_AQUA_21_LOW,  5)
END_RELOC_NUMBERS (R_AQUA_max)

#endif
