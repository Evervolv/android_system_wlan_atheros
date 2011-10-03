/*------------------------------------------------------------------------------ */
/* Copyright (c) 2004-2010 Atheros Corporation.  All rights reserved. */
/*  */
/* This program is free software; you can redistribute it and/or modify */
/* it under the terms of the GNU General Public License version 2 as */
/* published by the Free Software Foundation; */
/* */
/* Software distributed under the License is distributed on an "AS */
/* IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or */
/* implied. See the License for the specific language governing */
/* rights and limitations under the License. */
/* */
/* */
/*------------------------------------------------------------------------------ */
/*============================================================================== */
/* Author(s): ="Atheros" */
/*============================================================================== */

#ifndef __ADDRS_H__
#define __ADDRS_H__

/*
 * Special AR6002 Addresses that may be needed by special
 * applications (e.g. ART) on the Host as well as Target.
 */

#if defined(AR6002_REV2)
#define AR6K_RAM_START 0x00500000
#define TARG_RAM_OFFSET(vaddr) ((A_UINT32)(vaddr) & 0xfffff)
#define TARG_RAM_SZ (184*1024)
#define TARG_ROM_SZ (80*1024)
#endif
#if defined(AR6002_REV4) || defined(AR6003)
#define AR6K_RAM_START 0x00540000
#define TARG_RAM_OFFSET(vaddr) (((A_UINT32)(vaddr) & 0xfffff) - 0x40000)
#define TARG_RAM_SZ (256*1024)
#define TARG_ROM_SZ (256*1024)
#endif
#if defined(AR6002_REV6) || defined(AR6004)
#define AR6K_RAM_START 0x00400000
#define TARG_RAM_OFFSET(vaddr) (((A_UINT32)(vaddr) & 0x3fffff))
#define TARG_RAM_SZ (256*1024)
#define TARG_ROM_SZ (512*1024)

#define TARG_IRAM_START 0x00998000
#define TARG_IRAM_SZ ((128+32)*1024)

#define TARG_RAM_ACS_RESERVE  32

#endif

#define AR6002_BOARD_DATA_SZ 768
#define AR6002_BOARD_EXT_DATA_SZ 0
#define AR6003_BOARD_DATA_SZ 1024
/* Reserve 1024 bytes for extended board data */
#if defined(AR6002_REV43)
#define AR6003_BOARD_EXT_DATA_SZ 1024
#else
#define AR6003_BOARD_EXT_DATA_SZ 768
#endif
#define MCKINLEY_BOARD_DATA_SZ 1024
#define MCKINLEY_BOARD_EXT_DATA_SZ 0

#define AR6K_RAM_ADDR(byte_offset) (AR6K_RAM_START+(byte_offset))
#define TARG_RAM_ADDRS(byte_offset) AR6K_RAM_ADDR(byte_offset)

#if defined(AR6002_REV2) || defined(AR6002_REV4)
#define AR6K_ROM_START 0x004e0000
#define TARG_ROM_OFFSET(vaddr) (((A_UINT32)(vaddr) & 0x1fffff) - 0xe0000)
#endif /* AR6002_REV2 || AR6002_REV4 */
#if defined(AR6002_REV6)
#define AR6K_ROM_START 0x00900000
#define TARG_ROM_OFFSET(vaddr) ((A_UINT32)(vaddr) & 0xfffff)
#endif /* AR6002_REV6 */
#define AR6K_ROM_ADDR(byte_offset) (AR6K_ROM_START+(byte_offset))
#define TARG_ROM_ADDRS(byte_offset) AR6K_ROM_ADDR(byte_offset)

/*
 * At this ROM address is a pointer to the start of the ROM DataSet Index.
 * If there are no ROM DataSets, there's a 0 at this address.
 */
#define ROM_DATASET_INDEX_ADDR          (TARG_ROM_ADDRS(TARG_ROM_SZ)-8)
#define ROM_MBIST_CKSUM_ADDR            (TARG_ROM_ADDRS(TARG_ROM_SZ)-4)

/*
 * The API A_BOARD_DATA_ADDR() is the proper way to get a read pointer to
 * board data.
 */

/* Size of Board Data, in bytes */
#if defined(AR6002_REV4) || defined(AR6003)
#define BOARD_DATA_SZ (AR6003_BOARD_DATA_SZ + AR6003_BOARD_EXT_DATA_SZ)
#endif
#if defined(AR6002_REV6)
#define BOARD_DATA_SZ MCKINLEY_BOARD_DATA_SZ
#endif
#if !defined(BOARD_DATA_SZ)
#define BOARD_DATA_SZ AR6002_BOARD_DATA_SZ
#endif


/*
 * Constants used by ASM code to access fields of host_interest_s,
 * which is at a fixed location in RAM.
 */
#if defined(AR6002_REV4) || defined(AR6003) || defined(AR6002_REV6)
#define HOST_INTEREST_FLASH_IS_PRESENT_ADDR  (AR6K_RAM_START + 0x60c)
#endif
#if !defined(HOST_INTEREST_FLASH_IS_PRESENT_ADDR)
#define HOST_INTEREST_FLASH_IS_PRESENT_ADDR  (AR6K_RAM_START + 0x40c)
#endif
#define FLASH_IS_PRESENT_TARGADDR       HOST_INTEREST_FLASH_IS_PRESENT_ADDR

#endif /* __ADDRS_H__ */



