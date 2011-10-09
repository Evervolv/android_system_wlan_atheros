#
#  Local Makefile includes for tool and kernel source paths
# 
#  Copyright 2004-2010 Atheros Communications, Inc.
#
# When creating a new build type, use the following template:
#  	ifeq ($(ATH_BUILD_TYPE),<platform name>) 
#       ATH_ARCH_CPU_TYPE :=  < cpu architecture >
#       ATH_CROSS_COMPILE_TYPE := < cross compiler path >
#       ATH_LINUXPATH := < kernel source path >

ATH_BSP_TYPE=tenderloin
ATH_ANDROID_ROOT=/media/data/downloads/android/cyanogenmod

  # Kernel path
ifeq ($(ATH_BSP_TYPE),$(filter $(ATH_BSP_TYPE),qsd8250_surf qsd8250_ffa msm7627_surf msm7627_ffa msm7625_ffa msm7625_surf msm7630_surf GT-I5500 ventana))
ATH_ARCH_CPU_TYPE := arm
ATH_LINUXPATH := $(ATH_ANDROID_ROOT)/out/target/product/$(ATH_BSP_TYPE)/obj/KERNEL
ATH_CROSS_COMPILE_TYPE := $(ATH_ANDROID_ROOT)/prebuilt/linux-x86/toolchain/arm-eabi-4.3.1/bin/arm-eabi-
endif

ifndef ATH_LINUXPATH
# Check for Nvidia-base platform
ifeq ($(ATH_BSP_TYPE),harmony)
ATH_ARCH_CPU_TYPE := arm
ATH_LINUXPATH := $(ATH_ANDROID_ROOT)/out/target/product/$(ATH_BSP_TYPE)/obj/KERNEL
ATH_CROSS_COMPILE_TYPE := $(ATH_ANDROID_ROOT)/prebuilt/linux-x86/toolchain/arm-eabi-4.4.0/bin/arm-eabi-
endif
endif

ATH_ARCH_CPU_TYPE := arm
ATH_LINUXPATH := /media/data/downloads/android/hp-kernel-tenderloin
ATH_CROSS_COMPILE_TYPE := /media/data/downloads/android/android-ndk-r6/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-

ifndef ATH_LINUXPATH
# Comment out the following variable for your platform 
# Link your kernel into android SDK directory as 'kernel' directory
# export  ATH_LINUXPATH= [Your android/kernel path ]
$(error define your kernel path here)
endif

  $(info *************************)
  $(info PLATFORM: $(ATH_BUILD_TYPE))
  $(info BSP:      $(ATH_BSP_TYPE))
  $(info *************************)
  # Some environment settings
  ATH_BUILD_TYPE=$(ATH_BSP_TYPE)_ARM_NATIVEMMC
  ATH_ANDROID_ENV := yes
  ATH_SOFTMAC_FILE_USED := no
  ATH_DEBUG_DRIVER := yes
  ATH_HTC_RAW_INT_ENV :=yes
  ATH_AR6K_OTA_TEST_MODE := no

  # Some common variable
  ATH_BUS_TYPE := SDIO
  ATH_OS_SUB_TYPE := linux_2_6
  ATH_BUS_SUBTYPE := linux_sdio
  ATH_BUILD_3RDPARTY := no
  ATH_CFG80211_ENV := no
  ATH_BUILD_SYSTEM_TOOLS := no

