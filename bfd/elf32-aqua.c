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

static reloc_howto_type aqua_elf_howto_table[] =
{
  /* No relocation.  */
  HOWTO (R_AQUA_NONE,		/* type */
	 0,			/* rightshift */
	 2,			/* size (0 = byte, 1 = short, 2 = long) */
	 32,			/* bitsize */
	 FALSE,			/* pc_relative */
	 0,			/* bitpos */
	 complain_overflow_dont, /* complain_on_overflow */
	 bfd_elf_generic_reloc,	        /* special_function */
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
	 bfd_elf_generic_reloc,		/* special_function */
	 "R_AQUA_32",		/* name */
	 FALSE,			/* partial_inplace */
	 0x00000000,		/* src_mask */
	 0xffffffff,		/* dst_mask */
	 FALSE),		/* pcrel_offset */

/* 16 bit absolute relocation. */
  HOWTO (R_AQUA_16,	        /* type */
	 0,			/* rightshift */
	 2,			/* size (0 = byte, 1 = short, 2 = long) */
	 16,			/* bitsize */
	 FALSE,			/* pc_relative */
	 0,			/* bitpos */
	 complain_overflow_bitfield, /* complain_on_overflow */
	 bfd_elf_generic_reloc,		/* special_function */
	 "R_AQUA_16",		/* name */
	 FALSE,			/* partial_inplace */
	 0x00000000,		/* src_mask */
	 0x0000ffff,		/* dst_mask */
	 FALSE),		/* pcrel_offset */

/* 21 bit high absolute relocation. */
  HOWTO (R_AQUA_21,	        /* type */
	 0,			/* rightshift */
	 2,			/* size (0 = byte, 1 = short, 2 = long) */
	 21,			/* bitsize */
	 FALSE,			/* pc_relative */
	 0,			/* bitpos */
	 complain_overflow_bitfield, /* complain_on_overflow */
	 bfd_elf_generic_reloc,		/* special_function */
	 "R_AQUA_21",		/* name */
	 FALSE,			/* partial_inplace */
	 0x00000000,		/* src_mask */
	 0x001fffff,		/* dst_mask */
	 FALSE),		/* pcrel_offset */

//  /* 16 bit high absolute relocation. */
//  HOWTO (R_AQUA_16_HIGH,	        /* type */
//	 16,			/* rightshift */
//	 2,			/* size (0 = byte, 1 = short, 2 = long) */
//	 16,			/* bitsize */
//	 FALSE,			/* pc_relative */
//	 0,			/* bitpos */
//	 complain_overflow_bitfield, /* complain_on_overflow */
//	 bfd_elf_generic_reloc,		/* special_function */
//	 "R_AQUA_16_HIGH",		/* name */
//	 FALSE,			/* partial_inplace */
//	 0x00000000,		/* src_mask */
//	 0x0000ffff,		/* dst_mask */
//	 FALSE),		/* pcrel_offset */
//
//  /* 16 bit low absolute relocation. */
//  HOWTO (R_AQUA_16_LOW,	        /* type */
//	 0,			/* rightshift */
//	 2,			/* size (0 = byte, 1 = short, 2 = long) */
//	 16,			/* bitsize */
//	 FALSE,			/* pc_relative */
//	 0,			/* bitpos */
//	 complain_overflow_bitfield, /* complain_on_overflow */
//	 bfd_elf_generic_reloc,		/* special_function */
//	 "R_AQUA_16_LOW",		/* name */
//	 FALSE,			/* partial_inplace */
//	 0x00000000,		/* src_mask */
//	 0x0000ffff,		/* dst_mask */
//	 FALSE),		/* pcrel_offset */

//  /* 21 bit high absolute relocation. */
//  HOWTO (R_AQUA_21_HIGH,	        /* type */
//	 11,			/* rightshift */
//	 2,			/* size (0 = byte, 1 = short, 2 = long) */
//	 21,			/* bitsize */
//	 FALSE,			/* pc_relative */
//	 0,			/* bitpos */
//	 complain_overflow_bitfield, /* complain_on_overflow */
//	 bfd_elf_generic_reloc,		/* special_function */
//	 "R_AQUA_21_HIGH",		/* name */
//	 FALSE,			/* partial_inplace */
//	 0x00000000,		/* src_mask */
//	 0x001fffff,		/* dst_mask */
//	 FALSE),		/* pcrel_offset */
//
//  /* 21 bit low absolute relocation. */
//  HOWTO (R_AQUA_21_LOW,	        /* type */
//	 0,			/* rightshift */
//	 2,			/* size (0 = byte, 1 = short, 2 = long) */
//	 21,			/* bitsize */
//	 FALSE,			/* pc_relative */
//	 0,			/* bitpos */
//	 complain_overflow_bitfield, /* complain_on_overflow */
//	 bfd_elf_generic_reloc,		/* special_function */
//	 "R_AQUA_21_LOW",		/* name */
//	 FALSE,			/* partial_inplace */
//	 0x00000000,		/* src_mask */
//	 0x001fffff,		/* dst_mask */
//	 FALSE)		/* pcrel_offset */
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
    { BFD_RELOC_32, 		  R_AQUA_32 },
    { BFD_RELOC_AQUA_16,  R_AQUA_16 },
    { BFD_RELOC_AQUA_21,  R_AQUA_21 },
//    { BFD_RELOC_HI16,   R_AQUA_16_HIGH },
//    { BFD_RELOC_LO16,   R_AQUA_16_LOW  },
//    { BFD_RELOC_AQUA_HI21, R_AQUA_21_HIGH },
//    { BFD_RELOC_AQUA_LO21, R_AQUA_21_LOW  }
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

/* Perform a single relocation.  By default we use the standard BFD
   routines, but a few relocs, we have to do them ourselves.  */
static bfd_reloc_status_type
aqua_final_link_relocate (reloc_howto_type *howto,
			   bfd *input_bfd,
			   asection *input_section,
			   bfd_byte *contents,
			   Elf_Internal_Rela *rel,
			   bfd_vma relocation)
{
  bfd_reloc_status_type r = bfd_reloc_ok;

  switch (howto->type)
  {
    default:
      r = _bfd_final_link_relocate (howto, input_bfd, input_section,
          contents, rel->r_offset,
          relocation, rel->r_addend);
  }

  return r;
}

/* Relocate an AQUA ELF section.

   The RELOCATE_SECTION function is called by the new ELF backend linker
   to handle the relocations for a section.

   The relocs are always passed as Rela structures; if the section
   actually uses Rel structures, the r_addend field will always be
   zero.

   This function is responsible for adjusting the section contents as
   necessary, and (if using Rela relocs and generating a relocatable
   output file) adjusting the reloc addend as necessary.

   This function does not have to worry about setting the reloc
   address or the reloc symbol index.

   LOCAL_SYMS is a pointer to the swapped in local symbols.

   LOCAL_SECTIONS is an array giving the section in the input file
   corresponding to the st_shndx field of each local symbol.

   The global hash table entry for the global symbols can be found
   via elf_sym_hashes (input_bfd).

   When generating relocatable output, this function must handle
   STB_LOCAL/STT_SECTION symbols specially.  The output symbol is
   going to be the section symbol corresponding to the output
   section, which means that the addend must be adjusted
   accordingly.  */
static bfd_boolean
aqua_elf_relocate_section (bfd *output_bfd,
			    struct bfd_link_info *info,
			    bfd *input_bfd,
			    asection *input_section,
			    bfd_byte *contents,
			    Elf_Internal_Rela *relocs,
			    Elf_Internal_Sym *local_syms,
			    asection **local_sections)
{
  Elf_Internal_Shdr *symtab_hdr;
  struct elf_link_hash_entry **sym_hashes;
  Elf_Internal_Rela *rel;
  Elf_Internal_Rela *relend;

  symtab_hdr = & elf_tdata (input_bfd)->symtab_hdr;
  sym_hashes = elf_sym_hashes (input_bfd);
  relend     = relocs + input_section->reloc_count;

  for (rel = relocs; rel < relend; rel ++)
  {
    reloc_howto_type *howto;
    unsigned long r_symndx;
    Elf_Internal_Sym *sym;
    asection *sec;
    struct elf_link_hash_entry *h;
    bfd_vma relocation;
    bfd_reloc_status_type r;
    const char *name;
    int r_type;

    r_type = ELF32_R_TYPE (rel->r_info);
    r_symndx = ELF32_R_SYM (rel->r_info);
    howto  = aqua_elf_howto_table + r_type;
    h      = NULL;
    sym    = NULL;
    sec    = NULL;

    if (r_symndx < symtab_hdr->sh_info)
    {
      sym = local_syms + r_symndx;
      sec = local_sections [r_symndx];
      relocation = _bfd_elf_rela_local_sym (output_bfd, sym, &sec, rel);

      name = bfd_elf_string_from_elf_section
        (input_bfd, symtab_hdr->sh_link, sym->st_name);
      name = (name == NULL) ? bfd_section_name (input_bfd, sec) : name;
    }
    else
    {
      bfd_boolean unresolved_reloc, warned, ignored;

      RELOC_FOR_GLOBAL_SYMBOL (info, input_bfd, input_section, rel,
          r_symndx, symtab_hdr, sym_hashes,
          h, sec, relocation,
          unresolved_reloc, warned, ignored);

      name = h->root.root.string;
    }

    if (sec != NULL && discarded_section (sec))
      RELOC_AGAINST_DISCARDED_SECTION (info, input_bfd, input_section,
          rel, 1, relend, howto, 0, contents);

    if (info->relocatable)
      continue;

    r = aqua_final_link_relocate (howto, input_bfd, input_section,
        contents, rel, relocation);

    if (r != bfd_reloc_ok)
    {
      const char * msg = NULL;

      switch (r)
      {
        case bfd_reloc_overflow:
          r = info->callbacks->reloc_overflow
            (info, (h ? &h->root : NULL), name, howto->name,
             (bfd_vma) 0, input_bfd, input_section, rel->r_offset);
          break;

        case bfd_reloc_undefined:
          r = info->callbacks->undefined_symbol
            (info, name, input_bfd, input_section, rel->r_offset,
             TRUE);
          break;

        case bfd_reloc_outofrange:
          msg = _("internal error: out of range error");
          break;

        case bfd_reloc_notsupported:
          msg = _("internal error: unsupported relocation error");
          break;

        case bfd_reloc_dangerous:
          msg = _("internal error: dangerous relocation");
          break;

        default:
          msg = _("internal error: unknown error");
          break;
      }

      if (msg)
        r = info->callbacks->warning
          (info, msg, name, input_bfd, input_section, rel->r_offset);

      if (! r)
        return FALSE;
    }
  }

  return TRUE;
}

/* Return the section that should be marked against GC for a given relocation.  */
static asection *
aqua_elf_gc_mark_hook (asection *sec,
			struct bfd_link_info *info,
			Elf_Internal_Rela *rel,
			struct elf_link_hash_entry *h,
			Elf_Internal_Sym *sym)
{
  return _bfd_elf_gc_mark_hook (sec, info, rel, h, sym);
}

static bfd_boolean
aqua_elf_check_relocs (bfd *abfd,
			struct bfd_link_info *info,
			asection *sec,
			const Elf_Internal_Rela *relocs)
{
  Elf_Internal_Shdr *symtab_hdr;
  struct elf_link_hash_entry **sym_hashes;
  const Elf_Internal_Rela *rel;
  const Elf_Internal_Rela *rel_end;

  if (info->relocatable)
    return TRUE;

  symtab_hdr = &elf_tdata (abfd)->symtab_hdr;
  sym_hashes = elf_sym_hashes (abfd);

  rel_end = relocs + sec->reloc_count;
  for (rel = relocs; rel < rel_end; rel++)
  {
    struct elf_link_hash_entry *h;
    unsigned long r_symndx;

    r_symndx = ELF32_R_SYM (rel->r_info);
    if (r_symndx < symtab_hdr->sh_info)
      h = NULL;
    else
    {
      h = sym_hashes[r_symndx - symtab_hdr->sh_info];
      while (h->root.type == bfd_link_hash_indirect
          || h->root.type == bfd_link_hash_warning)
        h = (struct elf_link_hash_entry *) h->root.u.i.link;

      /* PR15323, ref flags aren't set for references in the same
         object.  */
      h->root.non_ir_ref = 1;
    }
  }

  return TRUE;
}

#define TARGET_BIG_SYM		aqua_elf32_vec
#define TARGET_BIG_NAME		"elf32-aqua"
#define ELF_ARCH		bfd_arch_aqua
#define ELF_MACHINE_CODE	EM_AQUA
#define ELF_MAXPAGESIZE  	1
#define bfd_elf32_bfd_reloc_type_lookup aqua_elf_reloc_type_lookup
#define bfd_elf32_bfd_reloc_name_lookup aqua_elf_reloc_name_lookup
#define elf_info_to_howto_rel			NULL
#define elf_info_to_howto		            aqua_elf_info_to_howto
#define elf_backend_relocate_section		aqua_elf_relocate_section
#define elf_backend_gc_mark_hook		    aqua_elf_gc_mark_hook
#define elf_backend_check_relocs        aqua_elf_check_relocs

#define elf_backend_can_gc_sections	1
#define elf_backend_rela_normal			1

#include "elf32-target.h"
