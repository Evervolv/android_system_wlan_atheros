/*
 * Copyright (c) 2008 Atheros Communications, Inc.
 * All rights reserved.
 *
 *
 * 
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation;
//
// Software distributed under the License is distributed on an "AS
// IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
// implied. See the License for the specific language governing
// rights and limitations under the License.
//
//
 *
 */

#if defined(AR6002_HEADERS_DEF) || defined(ATHR_WIN_DEF)
#define AR6002 1
#define AR6002_REV 2

#define UNDEFINED                          0x0fffffff

#include "common_drv.h"
#include "AR6002/hw2.0/hw/apb_map.h"
#include "AR6002/hw2.0/hw/gpio_reg.h"
#include "AR6002/hw2.0/hw/rtc_reg.h"
#include "AR6002/hw2.0/hw/si_reg.h"
#include "AR6002/hw2.0/hw/mbox_reg.h"
#include "AR6002/hw2.0/hw/mbox_host_reg.h"

#define MY_TARGET_DEF AR6002_TARGETdef
#define MY_HOST_DEF AR6002_HOSTdef
#define MY_TARGET_BOARD_DATA_SZ AR6002_BOARD_DATA_SZ
#define MY_TARGET_BOARD_EXT_DATA_SZ AR6002_BOARD_EXT_DATA_SZ
#define RTC_WMAC_BASE_ADDRESS              RTC_BASE_ADDRESS
#define RTC_SOC_BASE_ADDRESS               RTC_BASE_ADDRESS
#define WLAN_SYSTEM_SLEEP_OFFSET           SYSTEM_SLEEP_OFFSET
#define WLAN_SYSTEM_SLEEP_DISABLE_LSB      SYSTEM_SLEEP_DISABLE_LSB
#define WLAN_SYSTEM_SLEEP_DISABLE_MASK     SYSTEM_SLEEP_DISABLE_MASK
#define WLAN_RESET_CONTROL_OFFSET          RESET_CONTROL_OFFSET
#define WLAN_RESET_CONTROL_COLD_RST_MASK   RESET_CONTROL_COLD_RST_MASK
#define WLAN_RESET_CONTROL_WARM_RST_MASK   RESET_CONTROL_WARM_RST_MASK


/* Should not be used for AR6002 */
#define CLOCK_GPIO_OFFSET                  UNDEFINED
#define CLOCK_GPIO_BT_CLK_OUT_EN_LSB       UNDEFINED
#define CLOCK_GPIO_BT_CLK_OUT_EN_MASK      UNDEFINED

#include "targetdef.h"
#include "hostdef.h"
#else
#include "common_drv.h"
#include "targetdef.h"
#include "hostdef.h"
struct targetdef_s *AR6002_TARGETdef=NULL;
struct hostdef_s *AR6002_HOSTdef=NULL;
#endif /* AR6002_HEADERS_DEF */
