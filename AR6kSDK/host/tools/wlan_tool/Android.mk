#------------------------------------------------------------------------------
# <copyright file="makefile" company="Atheros">
#    Copyright (c) 2005-2010 Atheros Corporation.  All rights reserved.
# 
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation;
#
# Software distributed under the License is distributed on an "AS
# IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
# implied. See the License for the specific language governing
# rights and limitations under the License.
#
#
#------------------------------------------------------------------------------
#==============================================================================
# Author(s): ="Atheros"
#==============================================================================

ifneq ($(TARGET_SIMULATOR),true)

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

ALL_PREBUILT += $(TARGET_OUT)/bin/wlan_tool

$(TARGET_OUT)/bin/wlan_tool : $(LOCAL_PATH)/wlan_tool | $(ACP)
	$(transform-prebuilt-to-target)

# Add a seprate script for ar6102
ALL_PREBUILT += $(TARGET_OUT)/bin/wlan_tool_6102

$(TARGET_OUT)/bin/wlan_tool_6102 : $(LOCAL_PATH)/wlan_tool_6102 | $(ACP)
	$(transform-prebuilt-to-target)


endif
