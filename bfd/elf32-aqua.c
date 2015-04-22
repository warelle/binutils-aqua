/* aqua support for 32-bit ELF

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston,
   MA 02110-1301, USA.  */

#include "sysdep.h"
#include "bfd.h"
#include "libbfd.h"
#include "elf-bfd.h"
#include "elf/aqua.h"

/* This function is used for normal relocs. */
static bfd_reloc_status_type
aqua_elf_reloc (bfd *abfd,
		 arelent *reloc_entry,
		 asymbol *symbol_in,
		 void * data,
		 asection *input_section,
		 bfd *output_bfd,
		 char **error_message ATTRIBUTE_UNUSED)
{
  unsigned long insn;
  bfd_vma sym_value;
  enum elf_aqua_reloc_type r_type;
  bfd_vma addr = reloc_entry->address;
  bfd_byte *hit_data = addr + (bfd_byte *) data;

  r_type = (enum elf_aqua_reloc_type) reloc_entry->howto->type;

  if (output_bfd != NULL)
    {
      /* Partial linking--do nothing.  */
      reloc_entry->address += input_section->output_offset;
      return bfd_reloc_ok;
    }

  if (symbol_in != NULL
      && bfd_is_und_section (symbol_in->section))
    return bfd_reloc_undefined;

  if (bfd_is_com_section (symbol_in->section))
    sym_value = 0;
  else
    sym_value = (symbol_in->value +
		 symbol_in->section->output_section->vma +
		 symbol_in->section->output_offset);

  switch (r_type)
    {
    case R_AQUA_32:
      insn = bfd_get_32 (abfd, hit_data);
      insn += sym_value + reloc_entry->addend;
      bfd_put_32 (abfd, (bfd_vma) insn, hit_data);
      break;

    default:
      abort ();
      break;
    }

  return bfd_reloc_ok;
}

static reloc_howto_type aqua_elf_howto_table[] =
{
  /* No relocation.  */
  HOWTO (R_AQUA_NONE,		/* type */
	 0,			/* rightshift */
	 0,			/* size (0 = byte, 1 = short, 2 = long) */
	 0,			/* bitsize */
	 FALSE,			/* pc_relative */
	 0,			/* bitpos */
	 complain_overflow_dont, /* complain_on_overflow */
	 aqua_elf_reloc,	        /* special_function */
	 "R_AQUA_NONE",	        /* name */
	 FALSE,			/* partial_inplace */
	 0,			/* src_mask */
	 0,			/* dst_mask */
	 FALSE),		/* pcrel_offset */

  /* 32 bit absolute relocation. */
  HOWTO (R_AQUA_32,	        /* type */
	 0,			/* rightshift */
	 2,			/* size (0 = byte, 1 = short, 2 = long) */
	 32,			/* bitsize */
	 FALSE,			/* pc_relative */
	 0,			/* bitpos */
	 complain_overflow_bitfield, /* complain_on_overflow */
	 aqua_elf_reloc,		/* special_function */
	 "R_AQUA_32",		/* name */
	 FALSE,			/* partial_inplace */
	 0x00000000,		/* src_mask */
	 0xffffffff,		/* dst_mask */
	 FALSE),		/* pcrel_offset */
};

/* This structure is used to map BFD reloc codes to aqua elf relocs.  */

struct elf_reloc_map
{
  bfd_reloc_code_real_type bfd_reloc_val;
  unsigned char elf_reloc_val;
};

/* An array mapping BFD reloc codes to aqua elf relocs.  */

static const struct elf_reloc_map aqua_reloc_map[] =
{
    { BFD_RELOC_NONE, 		R_AQUA_NONE  },
    { BFD_RELOC_32, 		R_AQUA_32      }
};

/* Given a BFD reloc code, return the howto structure for the
   corresponding aqua elf reloc.  */
static reloc_howto_type *
aqua_elf_reloc_type_lookup (bfd *abfd ATTRIBUTE_UNUSED,
			     bfd_reloc_code_real_type code)
{
  unsigned int i;

  for (i = 0; i < sizeof (aqua_reloc_map) / sizeof (struct elf_reloc_map); i++)
    if (aqua_reloc_map[i].bfd_reloc_val == code)
      return & aqua_elf_howto_table[(int) aqua_reloc_map[i].elf_reloc_val];

  return NULL;
}

static reloc_howto_type *
aqua_elf_reloc_name_lookup (bfd *abfd ATTRIBUTE_UNUSED,
			  const char *r_name)
{
  unsigned int i;

  for (i = 0; i < sizeof (aqua_elf_howto_table) / sizeof (aqua_elf_howto_table[0]); i++)
    if (aqua_elf_howto_table[i].name != NULL && strcasecmp (aqua_elf_howto_table[i].name, r_name) == 0)
      return &aqua_elf_howto_table[i];

  return NULL;
}

/* Given an ELF reloc, fill in the howto field of a relent.  */
static void
aqua_elf_info_to_howto (bfd *abfd ATTRIBUTE_UNUSED,
		      arelent *cache_ptr,
		      Elf_Internal_Rela *dst)
{
  unsigned int r;

  r = ELF32_R_TYPE (dst->r_info);

  //BFD_ASSERT (r < (unsigned int) R_GGX_max);
  cache_ptr->howto = &aqua_elf_howto_table[r];
}

#define TARGET_BIG_SYM		aqua_elf32_vec
#define TARGET_BIG_NAME		"elf32-aqua"
#define ELF_ARCH		bfd_arch_aqua
#define ELF_MACHINE_CODE	EM_AQUA
#define ELF_MAXPAGESIZE  	1
#define bfd_elf32_bfd_reloc_type_lookup aqua_elf_reloc_type_lookup
#define bfd_elf32_bfd_reloc_name_lookup aqua_elf_reloc_name_lookup
#define elf_info_to_howto		            aqua_elf_info_to_howto

#include "elf32-target.h"
