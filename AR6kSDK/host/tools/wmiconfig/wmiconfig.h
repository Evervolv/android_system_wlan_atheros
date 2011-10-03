/*
 * Copyright (c) 2004-2009 Atheros Communications Inc.
 * All rights reserved.
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
 * This file contains the definitions for wmiconfig utility
 */

#ifndef _WMI_CONFIG_H_
#define _WMI_CONFIG_H_

#ifdef __cplusplus
extern "C" {
#endif

enum {
    WMI_GET_VERSION=501,     /* something that doesn't collide with ascii */
    WMI_SET_POWER_MODE,
    WMI_SET_IBSS_PM_CAPS,
    WMI_SET_PM_PARAMS,
    WMI_SET_SCAN_PARAMS,
    WMI_SET_LISTEN_INTERVAL,
    WMI_SET_BMISS_TIME,
    WMI_SET_BSS_FILTER,
    WMI_SET_RSSI_THRESHOLDS,
    WMI_SET_CHANNEL,
    WMI_SET_SSID,
    WMI_SET_BADAP,
    WMI_DELETE_BADAP,
    WMI_CREATE_QOS,
    WMI_DELETE_QOS,
    WMI_GET_QOS_QUEUE,
    WMI_GET_TARGET_STATS,
    WMI_SET_TARGET_ERROR_REPORTING_BITMASK,
    WMI_SET_AC_PARAMS,
    WMI_SET_ASSOC_IE,
    WMI_SET_DISC_TIMEOUT,
    WMI_SET_ADHOC_BSSID,
    WMI_SET_OPT_MODE,
    WMI_OPT_SEND_FRAME,
    WMI_SET_BEACON_INT,
    WMI_SET_VOICE_PKT_SIZE,
    WMI_SET_MAX_SP,
    WMI_GET_ROAM_TBL,
    WMI_SET_ROAM_CTRL,
    WMI_SET_POWERSAVE_TIMERS,
    WMI_SET_POWERSAVE_TIMERS_PSPOLLTIMEOUT,
    WMI_SET_POWERSAVE_TIMERS_TRIGGERTIMEOUT,
    WMI_GET_POWER_MODE,
    WMI_SET_WLAN_STATE,
    WMI_GET_WLAN_STATE,
    WMI_GET_ROAM_DATA,
    WMI_SET_BT_STATUS,
    WMI_SET_BT_PARAMS,
    WMI_SET_BTCOEX_FE_ANT,
    WMI_SET_BTCOEX_COLOCATED_BT_DEV,
    WMI_SET_BTCOEX_SCO_CONFIG,
    WMI_SET_BTCOEX_A2DP_CONFIG,
    WMI_SET_BTCOEX_ACLCOEX_CONFIG,
    WMI_SET_BTCOEX_BTINQUIRY_PAGE_CONFIG,
    WMI_SET_BTCOEX_DEBUG,
    WMI_SET_BTCOEX_BT_OPERATING_STATUS,
    WMI_GET_BTCOEX_CONFIG,
    WMI_GET_BTCOEX_STATS,
    WMI_SET_RETRYLIMITS,
    WMI_START_SCAN,
    WMI_SET_FIX_RATES,
    WMI_GET_FIX_RATES,
    WMI_SET_SNR_THRESHOLDS,
    WMI_CLR_RSSISNR,
    WMI_SET_LQ_THRESHOLDS,
    WMI_SET_AUTH_MODE,
    WMI_SET_REASSOC_MODE,
    WMI_SET_LPREAMBLE,
    WMI_SET_RTS,
    WMI_SET_WMM,
#ifdef USER_KEYS
    USER_SETKEYS,
#endif
    WMI_APSD_TIM_POLICY,
    WMI_SET_ERROR_DETECTION,
    WMI_GET_HB_CHALLENGE_RESP,
    WMI_SET_TXOP,
    DIAG_ADDR,
    DIAG_DATA,
    DIAG_READ,
    DIAG_WRITE,
    WMI_GET_RD,
    WMI_SET_KEEPALIVE,
    WMI_GET_KEEPALIVE,
    WMI_SET_APPIE,
    WMI_SET_MGMT_FRM_RX_FILTER,
    WMI_DBGLOG_CFG_MODULE,
    WMI_DBGLOG_GET_DEBUG_LOGS,
    WMI_SET_HOST_SLEEP_MODE,
    WMI_SET_WOW_MODE,
    WMI_GET_WOW_LIST,
    WMI_ADD_WOW_PATTERN,
    WMI_DEL_WOW_PATTERN,
    DIAG_DUMP_CHIP_MEM,
    WMI_SET_CONNECT_CTRL_FLAGS,
    DUMP_HTC_CREDITS,
    USER_SETKEYS_INITRSC,
    WMI_SCAN_DFSCH_ACT_TIME,
    WMI_SIMULATED_APSD_TIM_POLICY,
    WMI_SET_AKMP_INFO,
    WMI_AKMP_MULTI_PMKID,
    WMI_NUM_PMKID,
    WMI_PMKID_ENTRY,
    WMI_SET_PMKID_LIST,
    WMI_GET_PMKID_LIST,
    WMI_SET_IEMASK,
    WMI_SCAN_CHANNEL_LIST,
    WMI_SET_BSS_PMKID_INFO,
    WMI_BSS_PMKID_ENTRY,
    WMI_BSSID,
    WMI_ABORT_SCAN,
    WMI_TARGET_EVENT_REPORT,
    WMI_AP_GET_STA_LIST,    /* AP mode */
    WMI_AP_HIDDEN_SSID,     /* AP mode */
    WMI_AP_SET_NUM_STA,     /* AP mode */
    WMI_AP_ACL_POLICY,      /* AP mode */
    WMI_AP_ACL_MAC_LIST1,   /* AP mode */
    WMI_AP_ACL_MAC_LIST2,   /* AP mode */
    WMI_AP_GET_ACL_LIST,    /* AP mode */
    WMI_AP_COMMIT_CONFIG,   /* AP mode */
    WMI_AP_INACT_TIME,      /* AP mode */
    WMI_AP_PROT_TIME,       /* AP mode */    
    WMI_AP_SET_MLME,        /* AP mode */
    WMI_AP_SET_COUNTRY,     /* AP mode */
    WMI_AP_GET_COUNTRY_LIST,/* AP mode */
    WMI_AP_DISABLE_REGULATORY, /* AP mode */
    WMI_AP_SET_DTIM,        /* AP mode */    
    WMI_AP_INTRA_BSS,       /* AP mode */    
    WMI_AP_INTER_BSS,       /* AP mode */    
    WMI_GET_IP,
    WMI_SET_MCAST_FILTER,
    WMI_DEL_MCAST_FILTER,
    WMI_MCAST_FILTER,
    WMI_DUMP_RCV_AGGR_STATS,
    WMI_SETUP_AGGR,
    WMI_CFG_ALLOW_AGGR,
    WMI_CFG_DELE_AGGR,
    WMI_SET_HT_CAP,
    WMI_SET_HT_OP,
    WMI_AP_GET_STAT,        /* AP mode */
    WMI_AP_CLR_STAT,        /* AP mode */
    WMI_SET_TX_SELECT_RATES,
    WMI_SCAN_MAXACT_PER_SSID,
    WMI_AP_GET_HIDDEN_SSID, /* AP mode */
    WMI_AP_GET_COUNTRY,     /* AP mode */
    WMI_AP_GET_WMODE,       /* AP mode */
    WMI_AP_GET_DTIM,        /* AP mode */
    WMI_AP_GET_BINTVL,      /* AP mode */    
    WMI_GET_RTS,
    DIAG_FETCH_TARGET_REGS,
#ifdef ATH_INCLUDE_PAL
    WMI_SEND_PAL_CMD,
    WMI_SEND_PAL_DATA,
#endif
    WMI_SET_WLAN_CONN_PRECDNCE,
    WMI_SET_AP_RATESET,     /* AP mode */
    WMI_SET_TX_WAKEUP_POLICY,
    WMI_SET_TX_NUM_FRAMES_TO_WAKEUP,
    WMI_SET_AP_PS,
    WMI_SET_AP_PS_PSTYPE,
    WMI_SET_AP_PS_IDLE_TIME,
    WMI_SET_AP_PS_PS_PERIOD,
    WMI_SET_AP_PS_SLEEP_PERIOD,
    WMI_SEND_CONNECT_CMD,
    WMI_SEND_CONNECT_CMD1,
    WMI_SEND_CONNECT_CMD2,
    WMI_SET_WOW_FILTER,
    WMI_SET_WOW_HOST_REQ_DELAY,
    WMI_SET_QOS_SUPP,
    WMI_SET_AC_VAL,
    WMI_AP_SET_DFS, /* AP mode */
    BT_HW_POWER_STATE,
    SET_BT_HW_POWER_STATE,
    GET_BT_HW_POWER_STATE,
    DIAG_DUMP_CHIP_MEM_VENUS,
    WMI_SET_TX_SGI_PARAM,
    WMI_SGI_MASK,
    WMI_PER_SGI,
    WMI_WAC_ENABLE,
    WMI_SET_WPA_OFFLOAD_STATE,
    WMI_AP_ACS_DISABLE_HI_CHANNELS,
    WMI_SET_DIVERSITY_PARAM,
};

/*
***************************************************************************
**  How to form a regcode from CountryCode, Regulatory domain or WWR code:
**
**  WWR code is nothing but a special case of Regulatory domain.
**
**      code is of type U_INT32
**
**      Bit-31  Bit-30      Bit11-0
**        0       0          xxxx    -> Bit11-0 is a Regulatory Domain
**        0       1          xxxx    -> Bit11-0 is a WWR code
**        1       X          xxxx    -> Bit11-0 is a Country code
**  
***************************************************************************
*/
#define REGCODE_IS_CC_BITSET(x)     ((x) & 0x80000000)
#define REGCODE_GET_CODE(x)         ((x) & 0xFFF)
#define REGCODE_IS_WWR_BITSET(x)    ((x) & 0x40000000)
#ifdef ATH_INCLUDE_PAL
#define MAX_BUFFER_SIZE             1512    
#endif

typedef struct {
    A_UINT32        numPMKIDUser;          /* PMKIDs user wants to enter */
    WMI_SET_PMKID_LIST_CMD  *pmkidInfo;
} pmkidUserInfo_t;

#define KEYTYPE_PSK     1
#define KEYTYPE_PHRASE  2

typedef struct {
    char ssid[WMI_MAX_SSID_LEN];
    A_UINT8 ssid_len;
    A_UINT8 wpa;
    A_UINT8 ucipher;
    A_UINT8 mcipher;
    char    psk[64];
    A_UINT8 psk_type;
    A_UINT8 pmk[WMI_PMK_LEN];
    A_UINT8 auth;
    A_UINT8 wep_key[4][26];
    A_UINT8 def_wep_key;
} profile_t;

#ifdef __cplusplus
}
#endif

#endif /* _WMI_CONFIG_H_ */
