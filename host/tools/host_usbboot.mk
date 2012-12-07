##
## Copyright (C) 2010 The Android Open Source Project
## All rights reserved.
##
## Redistribution and use in source and binary forms, with or without
## modification, are permitted provided that the following conditions
## are met:
##  * Redistributions of source code must retain the above copyright
##    notice, this list of conditions and the following disclaimer.
##  * Redistributions in binary form must reproduce the above copyright
##    notice, this list of conditions and the following disclaimer in
##    the documentation and/or other materials provided with the 
##    distribution.
##
## THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
## "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
## LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
## FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
## COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
## INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
## BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
## OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED 
## AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
## OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
## OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
## SUCH DAMAGE.

include build/rules.mk

M_NAME := usbboot
M_OBJS := host/tools/usbboot.o
M_OBJS += host/tools/usb_linux.o
M_OBJS += 2ndstage.o
M_OBJS += iboot_gp.o
ifneq ("$(MSHIELD)", "")
ifeq ("$(MACH)", "omap4")
M_OBJS += iboot_hs_4430_ES2.o
M_OBJS += iboot_hs_4460_ES1.o
M_OBJS += iboot_hs_4470_ES1.o
else ifeq ("$(MACH)", "omap5")
M_OBJS += iboot_hs_5430_ES1.o
M_OBJS += iboot_hs_5430_ES2.o
endif
endif
ifeq ($(DUAL_STAGE), 1)
M_OBJS += sboot-bin.o
endif
include build/host-executable.mk

M_NAME := mkheader
M_OBJS := host/tools/mkheader.o
include build/host-executable.mk

M_NAME := bin2c
M_OBJS := host/tools/bin2c.o
include build/host-executable.mk
