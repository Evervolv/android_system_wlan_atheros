/*------------------------------------------------------------------------------ */
/* Copyright (c) 2004-2010 Atheros Communications Inc. */
/* All rights reserved. */
/* */
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
/* */
/* Author(s): ="Atheros" */
/*------------------------------------------------------------------------------ */

#ifndef _CONFIG_LINUX_H_
#define _CONFIG_LINUX_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <linux/version.h>

/*
 * Host-side GPIO support is optional.
 * If run-time access to GPIO pins is not required, then
 * this should be changed to #undef.
 */
#define CONFIG_HOST_GPIO_SUPPORT

/*
 * Host side Test Command support
 * Note: when HCI SDIO is enabled, a low stack IRQ or statck overflow is
 *       hit on FC10. So with HCI SDIO, minimize the stack allocation by 
 *       mutually exclude TCMD_SUPPORT, which allocates large buffers 
 *       in AR_TCMD_RESP in AR_SOFTC_T
 *
 */
#ifndef HCI_TRANSPORT_SDIO
#define CONFIG_HOST_TCMD_SUPPORT
#endif

#define USE_4BYTE_REGISTER_ACCESS

/* Host-side support for Target-side profiling */
#undef CONFIG_TARGET_PROFILE_SUPPORT

/* IP/TCP checksum offload */
/* Checksum offload is currently not supported for 64 bit platforms */
#ifndef __LP64__
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,25)
#define CONFIG_CHECKSUM_OFFLOAD
#endif
#endif /* __LP64__ */

#ifdef __cplusplus
}
#endif

#endif
