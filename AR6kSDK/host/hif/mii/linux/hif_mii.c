/*------------------------------------------------------------------------------ */
/* <copyright file="hif_mii.c" company="Atheros"> */
/*    Copyright (c) 2010 Atheros Corporation.  All rights reserved. */
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
/* HIF implementation for Media-Independent-Interface */
/* */
/* Author(s): ="Atheros" */
/*============================================================================== */

#include "hif_mii_internal.h"

#ifdef DEBUG

ATH_DEBUG_INSTANTIATE_MODULE_VAR(hif,
                                 "hif",
                                 "Linux MII Host Interconnect Framework",
                                 ATH_DEBUG_MASK_DEFAULTS,
                                 0,
                                 NULL);
                                 
#endif

/* TODO : stubs for now ... */


A_STATUS HIFExchangeBMIMsg(HIF_DEVICE *device, 
                           A_UINT8    *pSendMessage, 
                           A_UINT32   Length, 
                           A_UINT8    *pResponseMessage,
                           A_UINT32   *pResponseLength,
                           A_UINT32   TimeoutMS)
{
   
    /* TODO */
    return A_ERROR;
}

A_STATUS HIFDiagReadAccess(HIF_DEVICE *hifDevice, A_UINT32 address, A_UINT32 *data)
{
    /* TODO */   
    return A_ERROR;
}


A_STATUS  HIFDiagWriteAccess(HIF_DEVICE *hifDevice, A_UINT32 address, A_UINT32 data)
{
    /* TODO */    
   return A_ERROR;
}

A_STATUS HIFGetPipeId(HIF_DEVICE *hifDevice, A_UINT16 ServiceId, A_INT32 *pId)
{
    /* TODO */
    return A_ERROR;    
}

A_STATUS HIFEnablePipes(HIF_DEVICE *hifDevice)
{
    /* TODO */    
    return A_ERROR;
}

void HIFReturnRecvMsgObjects(HIF_DEVICE *hifDevice, HIF_MSG_OBJ *pMessageObj)
{
    
    /* TODO */
}

void HIFSetMsgRecvHandler(HIF_DEVICE            *hifDevice,
                          HIF_MSG_RECV_CALLBACK Callback,
                          void                  *pContext)
{
    
    /* TODO */
}

A_STATUS HIFSendMessages(HIF_DEVICE *hifDevice, HIF_MSG_OBJ *pMessages)
{
    /* TODO */
    return A_ERROR;
}

A_STATUS HIFInit(OSDRV_CALLBACKS *callbacks)
{
    /* TODO, save callbacks, perform any global data structures and instance tracking structures
     * */
    AR_DEBUG_PRINTF(ATH_DEBUG_TRACE, ("+HIF MII: HIFInit\n"));
    
    AR_DEBUG_PRINTF(ATH_DEBUG_ERR, ("HIF MII: Not Implemented!!! \n"));
    
    AR_DEBUG_PRINTF(ATH_DEBUG_TRACE, ("-HIF MII: HIFInit\n"));
    return A_OK;
}

void HIFShutDownDevice(HIF_DEVICE *device)
{
    /* TODO */    
    
}

A_STATUS HIFConfigureDevice(HIF_DEVICE *device, HIF_DEVICE_CONFIG_OPCODE opcode,
                            void *config, A_UINT32 configLen)
{
    
    /* TODO, implement any message-based HIF specific configuration */
    return A_ERROR;
}

void HIFClaimDevice(HIF_DEVICE *device, void *claimedContext)
{
    /* TODO */
}

void HIFReleaseDevice(HIF_DEVICE *device)
{
    /* TODO */    
}



