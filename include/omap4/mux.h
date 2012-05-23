/* 
 * mux.h
 *
 * Copyright(c) 2010 Texas Instruments.   All rights reserved.
 *
 * Texas Instruments, <www.ti.com>
 * Syed Rafiuddin <rafiuddin.syed@ti.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name Texas Instruments nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef _OMAP4430_MUX_H_
#define _OMAP4430_MUX_H_

/*
 * OFF_PD       - Off mode pull type down
 * OFF_PU       - Off mode pull type up
 * OFF_OUT_PTD  - Off Mode Mux low for OUT
 * OFF_OUT_PTU  - Off Mode Mux high for OUT
 * OFF_IN       - Off Mode Mux set to IN
 * OFF_OUT      - Off Mode Mux set to OUT
 * OFF_EN       - Off Mode Mux Enable
 * IEN          - Input Enable
 * IDIS         - Input Disable
 * PTD          - Pull type Down
 * PTU          - Pull type Up
 * DIS          - Pull type selection is inactive
 * EN           - Pull type selection is active
 * M0           - Mode 0
 */
#ifdef CONFIG_OFF_PADCONF
#define OFF_PD          (1 << 12)
#define OFF_PU          (3 << 12)
#define OFF_OUT_PTD     (0 << 10)
#define OFF_OUT_PTU     (2 << 10)
#define OFF_IN          (1 << 10)
#define OFF_OUT         (0 << 10)
#define OFF_EN          (1 << 9)
#else
#define OFF_PD          (0 << 12)
#define OFF_PU          (0 << 12)
#define OFF_OUT_PTD     (0 << 10)
#define OFF_OUT_PTU     (0 << 10)
#define OFF_IN          (0 << 10)
#define OFF_OUT         (0 << 10)
#define OFF_EN          (0 << 9)
#endif

#define IEN             (1 << 8)
#define IDIS            (0 << 8)
#define PTU             (3 << 3)
#define PTD             (1 << 3)
#define EN              (1 << 3)
#define DIS             (0 << 3)

#define M0              0
#define M1              1
#define M2              2
#define M3              3
#define M4              4
#define M5              5
#define M6              6
#define M7              7

#ifdef CONFIG_OFF_PADCONF
#define OFF_IN_PD       (OFF_PD | OFF_IN | OFF_EN)
#define OFF_IN_PU       (OFF_PU | OFF_IN | OFF_EN)
#define OFF_OUT_PD      (OFF_OUT_PTD | OFF_OUT | OFF_EN)
#define OFF_OUT_PU      (OFF_OUT_PTU | OFF_OUT | OFF_EN)
#else
#define OFF_IN_PD       0
#define OFF_IN_PU       0
#define OFF_OUT_PD      0
#define OFF_OUT_PU      0
#endif /* #ifdef CONFIG_OFF_PADCONF */

/*
 * To get the actual address the offset has to added
 * with OMAP44XX_CTRL_PADCONF_CORE_BASE to get the actual address
 */

/* OMAP4 SPECIFIC PADCONF REGISTERS */

#define CONTROL_PADCONF_CORE_REVISION		0x0000
#define CONTROL_PADCONF_CORE_HWINFO		0x0004
#define CONTROL_PADCONF_CORE_SYSCONFIG		0x0010
#define CONTROL_PADCONF_GPMC_AD0		0x0040
#define CONTROL_PADCONF_GPMC_AD1		0x0042
#define CONTROL_PADCONF_GPMC_AD2		0x0044
#define CONTROL_PADCONF_GPMC_AD3		0x0046
#define CONTROL_PADCONF_GPMC_AD4		0x0048
#define CONTROL_PADCONF_GPMC_AD5		0x004A
#define CONTROL_PADCONF_GPMC_AD6		0x004C
#define CONTROL_PADCONF_GPMC_AD7		0x004E
#define CONTROL_PADCONF_GPMC_AD8		0x0050
#define CONTROL_PADCONF_GPMC_AD9		0x0052
#define CONTROL_PADCONF_GPMC_AD10		0x0054
#define CONTROL_PADCONF_GPMC_AD11		0x0056
#define CONTROL_PADCONF_GPMC_AD12		0x0058
#define CONTROL_PADCONF_GPMC_AD13		0x005A
#define CONTROL_PADCONF_GPMC_AD14		0x005C
#define CONTROL_PADCONF_GPMC_AD15		0x005E
#define CONTROL_PADCONF_GPMC_A16		0x0060
#define CONTROL_PADCONF_GPMC_A17		0x0062
#define CONTROL_PADCONF_GPMC_A18		0x0064
#define CONTROL_PADCONF_GPMC_A19		0x0066
#define CONTROL_PADCONF_GPMC_A20		0x0068
#define CONTROL_PADCONF_GPMC_A21		0x006A
#define CONTROL_PADCONF_GPMC_A22		0x006C
#define CONTROL_PADCONF_GPMC_A23		0x006E
#define CONTROL_PADCONF_GPMC_A24		0x0070
#define CONTROL_PADCONF_GPMC_A25		0x0072
#define CONTROL_PADCONF_GPMC_NCS0		0x0074
#define CONTROL_PADCONF_GPMC_NCS1		0x0076
#define CONTROL_PADCONF_GPMC_NCS2		0x0078
#define CONTROL_PADCONF_GPMC_NCS3		0x007A
#define CONTROL_PADCONF_GPMC_NWP		0x007C
#define CONTROL_PADCONF_GPMC_CLK		0x007E
#define CONTROL_PADCONF_GPMC_NADV_ALE		0x0080
#define CONTROL_PADCONF_GPMC_NOE		0x0082
#define CONTROL_PADCONF_GPMC_NWE		0x0084
#define CONTROL_PADCONF_GPMC_NBE0_CLE		0x0086
#define CONTROL_PADCONF_GPMC_NBE1		0x0088
#define CONTROL_PADCONF_GPMC_WAIT0		0x008A
#define CONTROL_PADCONF_GPMC_WAIT1		0x008C
#define CONTROL_PADCONF_C2C_DATA11		0x008E
#define CONTROL_PADCONF_C2C_DATA12		0x0090
#define CONTROL_PADCONF_C2C_DATA13		0x0092
#define CONTROL_PADCONF_C2C_DATA14		0x0094
#define CONTROL_PADCONF_C2C_DATA15		0x0096
#define CONTROL_PADCONF_HDMI_HPD		0x0098
#define CONTROL_PADCONF_HDMI_CEC		0x009A
#define CONTROL_PADCONF_HDMI_DDC_SCL		0x009C
#define CONTROL_PADCONF_HDMI_DDC_SDA		0x009E
#define CONTROL_PADCONF_CSI21_DX0		0x00A0
#define CONTROL_PADCONF_CSI21_DY0		0x00A2
#define CONTROL_PADCONF_CSI21_DX1		0x00A4
#define CONTROL_PADCONF_CSI21_DY1		0x00A6
#define CONTROL_PADCONF_CSI21_DX2		0x00A8
#define CONTROL_PADCONF_CSI21_DY2		0x00AA
#define CONTROL_PADCONF_CSI21_DX3		0x00AC
#define CONTROL_PADCONF_CSI21_DY3		0x00AE
#define CONTROL_PADCONF_CSI21_DX4		0x00B0
#define CONTROL_PADCONF_CSI21_DY4		0x00B2
#define CONTROL_PADCONF_CSI22_DX0		0x00B4
#define CONTROL_PADCONF_CSI22_DY0		0x00B6
#define CONTROL_PADCONF_CSI22_DX1		0x00B8
#define CONTROL_PADCONF_CSI22_DY1		0x00BA
#define CONTROL_PADCONF_CAM_SHUTTER		0x00BC
#define CONTROL_PADCONF_CAM_STROBE		0x00BE
#define CONTROL_PADCONF_CAM_GLOBALRESET		0x00C0
#define CONTROL_PADCONF_USBB1_ULPITLL_CLK	0x00C2
#define CONTROL_PADCONF_USBB1_ULPITLL_STP	0x00C4
#define CONTROL_PADCONF_USBB1_ULPITLL_DIR	0x00C6
#define CONTROL_PADCONF_USBB1_ULPITLL_NXT	0x00C8
#define CONTROL_PADCONF_USBB1_ULPITLL_DAT0	0x00CA
#define CONTROL_PADCONF_USBB1_ULPITLL_DAT1	0x00CC
#define CONTROL_PADCONF_USBB1_ULPITLL_DAT2	0x00CE
#define CONTROL_PADCONF_USBB1_ULPITLL_DAT3	0x00D0
#define CONTROL_PADCONF_USBB1_ULPITLL_DAT4	0x00D2
#define CONTROL_PADCONF_USBB1_ULPITLL_DAT5	0x00D4
#define CONTROL_PADCONF_USBB1_ULPITLL_DAT6	0x00D6
#define CONTROL_PADCONF_USBB1_ULPITLL_DAT7	0x00D8
#define CONTROL_PADCONF_USBB1_HSIC_DATA		0x00DA
#define CONTROL_PADCONF_USBB1_HSIC_STROBE	0x00DC
#define CONTROL_PADCONF_USBC1_ICUSB_DP		0x00DE
#define CONTROL_PADCONF_USBC1_ICUSB_DM		0x00E0
#define CONTROL_PADCONF_SDMMC1_CLK		0x00E2
#define CONTROL_PADCONF_SDMMC1_CMD		0x00E4
#define CONTROL_PADCONF_SDMMC1_DAT0		0x00E6
#define CONTROL_PADCONF_SDMMC1_DAT1		0x00E8
#define CONTROL_PADCONF_SDMMC1_DAT2		0x00EA
#define CONTROL_PADCONF_SDMMC1_DAT3		0x00EC
#define CONTROL_PADCONF_SDMMC1_DAT4		0x00EE
#define CONTROL_PADCONF_SDMMC1_DAT5		0x00F0
#define CONTROL_PADCONF_SDMMC1_DAT6		0x00F2
#define CONTROL_PADCONF_SDMMC1_DAT7		0x00F4
#define CONTROL_PADCONF_ABE_MCBSP2_CLKX		0x00F6
#define CONTROL_PADCONF_ABE_MCBSP2_DR		0x00F8
#define CONTROL_PADCONF_ABE_MCBSP2_DX		0x00FA
#define CONTROL_PADCONF_ABE_MCBSP2_FSX		0x00FC
#define CONTROL_PADCONF_ABE_MCBSP1_CLKX		0x00FE
#define CONTROL_PADCONF_ABE_MCBSP1_DR		0x0100
#define CONTROL_PADCONF_ABE_MCBSP1_DX		0x0102
#define CONTROL_PADCONF_ABE_MCBSP1_FSX		0x0104
#define CONTROL_PADCONF_ABE_PDM_UL_DATA		0x0106
#define CONTROL_PADCONF_ABE_PDM_DL_DATA		0x0108
#define CONTROL_PADCONF_ABE_PDM_FRAME		0x010A
#define CONTROL_PADCONF_ABE_PDM_LB_CLK		0x010C
#define CONTROL_PADCONF_ABE_CLKS		0x010E
#define CONTROL_PADCONF_ABE_DMIC_CLK1		0x0110
#define CONTROL_PADCONF_ABE_DMIC_DIN1		0x0112
#define CONTROL_PADCONF_ABE_DMIC_DIN2		0x0114
#define CONTROL_PADCONF_ABE_DMIC_DIN3		0x0116
#define CONTROL_PADCONF_UART2_CTS		0x0118
#define CONTROL_PADCONF_UART2_RTS		0x011A
#define CONTROL_PADCONF_UART2_RX		0x011C
#define CONTROL_PADCONF_UART2_TX		0x011E
#define CONTROL_PADCONF_HDQ_SIO			0x0120
#define CONTROL_PADCONF_I2C1_SCL		0x0122
#define CONTROL_PADCONF_I2C1_SDA		0x0124
#define CONTROL_PADCONF_I2C2_SCL		0x0126
#define CONTROL_PADCONF_I2C2_SDA		0x0128
#define CONTROL_PADCONF_I2C3_SCL		0x012A
#define CONTROL_PADCONF_I2C3_SDA		0x012C
#define CONTROL_PADCONF_I2C4_SCL		0x012E
#define CONTROL_PADCONF_I2C4_SDA		0x0130
#define CONTROL_PADCONF_MCSPI1_CLK		0x0132
#define CONTROL_PADCONF_MCSPI1_SOMI		0x0134
#define CONTROL_PADCONF_MCSPI1_SIMO		0x0136
#define CONTROL_PADCONF_MCSPI1_CS0		0x0138
#define CONTROL_PADCONF_MCSPI1_CS1		0x013A
#define CONTROL_PADCONF_MCSPI1_CS2		0x013C
#define CONTROL_PADCONF_MCSPI1_CS3		0x013E
#define CONTROL_PADCONF_UART3_CTS_RCTX		0x0140
#define CONTROL_PADCONF_UART3_RTS_SD		0x0142
#define CONTROL_PADCONF_UART3_RX_IRRX		0x0144
#define CONTROL_PADCONF_UART3_TX_IRTX		0x0146
#define CONTROL_PADCONF_SDMMC5_CLK		0x0148
#define CONTROL_PADCONF_SDMMC5_CMD		0x014A
#define CONTROL_PADCONF_SDMMC5_DAT0		0x014C
#define CONTROL_PADCONF_SDMMC5_DAT1		0x014E
#define CONTROL_PADCONF_SDMMC5_DAT2		0x0150
#define CONTROL_PADCONF_SDMMC5_DAT3		0x0152
#define CONTROL_PADCONF_MCSPI4_CLK		0x0154
#define CONTROL_PADCONF_MCSPI4_SIMO		0x0156
#define CONTROL_PADCONF_MCSPI4_SOMI		0x0158
#define CONTROL_PADCONF_MCSPI4_CS0		0x015A
#define CONTROL_PADCONF_UART4_RX		0x015C
#define CONTROL_PADCONF_UART4_TX		0x015E
#define CONTROL_PADCONF_USBB2_ULPITLL_CLK	0x0160
#define CONTROL_PADCONF_USBB2_ULPITLL_STP	0x0162
#define CONTROL_PADCONF_USBB2_ULPITLL_DIR	0x0164
#define CONTROL_PADCONF_USBB2_ULPITLL_NXT	0x0166
#define CONTROL_PADCONF_USBB2_ULPITLL_DAT0	0x0168
#define CONTROL_PADCONF_USBB2_ULPITLL_DAT1	0x016A
#define CONTROL_PADCONF_USBB2_ULPITLL_DAT2	0x016C
#define CONTROL_PADCONF_USBB2_ULPITLL_DAT3	0x016E
#define CONTROL_PADCONF_USBB2_ULPITLL_DAT4	0x0170
#define CONTROL_PADCONF_USBB2_ULPITLL_DAT5	0x0172
#define CONTROL_PADCONF_USBB2_ULPITLL_DAT6	0x0174
#define CONTROL_PADCONF_USBB2_ULPITLL_DAT7	0x0176
#define CONTROL_PADCONF_USBB2_HSIC_DATA		0x0178
#define CONTROL_PADCONF_USBB2_HSIC_STROBE	0x017A
#define CONTROL_PADCONF_UNIPRO_TX0		0x017C
#define CONTROL_PADCONF_UNIPRO_TY0		0x017E
#define CONTROL_PADCONF_UNIPRO_TX1		0x0180
#define CONTROL_PADCONF_UNIPRO_TY1		0x0182
#define CONTROL_PADCONF_UNIPRO_TX2		0x0184
#define CONTROL_PADCONF_UNIPRO_TY2		0x0186
#define CONTROL_PADCONF_UNIPRO_RX0		0x0188
#define CONTROL_PADCONF_UNIPRO_RY0		0x018A
#define CONTROL_PADCONF_UNIPRO_RX1		0x018C
#define CONTROL_PADCONF_UNIPRO_RY1		0x018E
#define CONTROL_PADCONF_UNIPRO_RX2		0x0190
#define CONTROL_PADCONF_UNIPRO_RY2		0x0192
#define CONTROL_PADCONF_USBA0_OTG_CE		0x0194
#define CONTROL_PADCONF_USBA0_OTG_DP		0x0196
#define CONTROL_PADCONF_USBA0_OTG_DM		0x0198
#define CONTROL_PADCONF_FREF_CLK1_OUT		0x019A
#define CONTROL_PADCONF_FREF_CLK2_OUT		0x019C
#define CONTROL_PADCONF_SYS_NIRQ1		0x019E
#define CONTROL_PADCONF_SYS_NIRQ2		0x01A0
#define CONTROL_PADCONF_SYS_BOOT0		0x01A2
#define CONTROL_PADCONF_SYS_BOOT1		0x01A4
#define CONTROL_PADCONF_SYS_BOOT2		0x01A6
#define CONTROL_PADCONF_SYS_BOOT3		0x01A8
#define CONTROL_PADCONF_SYS_BOOT4		0x01AA
#define CONTROL_PADCONF_SYS_BOOT5		0x01AC
#define CONTROL_PADCONF_DPM_EMU0		0x01AE
#define CONTROL_PADCONF_DPM_EMU1		0x01B0
#define CONTROL_PADCONF_DPM_EMU2		0x01B2
#define CONTROL_PADCONF_DPM_EMU3		0x01B4
#define CONTROL_PADCONF_DPM_EMU4		0x01B6
#define CONTROL_PADCONF_DPM_EMU5		0x01B8
#define CONTROL_PADCONF_DPM_EMU6		0x01BA
#define CONTROL_PADCONF_DPM_EMU7		0x01BC
#define CONTROL_PADCONF_DPM_EMU8		0x01BE
#define CONTROL_PADCONF_DPM_EMU9		0x01C0
#define CONTROL_PADCONF_DPM_EMU10		0x01C2
#define CONTROL_PADCONF_DPM_EMU11		0x01C4
#define CONTROL_PADCONF_DPM_EMU12		0x01C6
#define CONTROL_PADCONF_DPM_EMU13		0x01C8
#define CONTROL_PADCONF_DPM_EMU14		0x01CA
#define CONTROL_PADCONF_DPM_EMU15		0x01CC
#define CONTROL_PADCONF_DPM_EMU16		0x01CE
#define CONTROL_PADCONF_DPM_EMU17		0x01D0
#define CONTROL_PADCONF_DPM_EMU18		0x01D2
#define CONTROL_PADCONF_DPM_EMU19		0x01D4
#define CONTROL_PADCONF_WAKEUPEVENT_1		0x01DC
#define CONTROL_PADCONF_WAKEUPEVENT_2		0x01E0
#define CONTROL_PADCONF_WAKEUPEVENT_3		0x01E4
#define CONTROL_PADCONF_WAKEUPEVENT_4		0x01E8
#define CONTROL_PADCONF_WAKEUPEVENT_5		0x01EC
#define CONTROL_PADCONF_WAKEUPEVENT_6		0x01F0

#define CONTROL_PADCONF_GLOBAL			0x05A2
#define CONTROL_PADCONF_MODE			0x05A4
#define CONTROL_SMART1IO_PADCONF_0		0x05A8
#define CONTROL_SMART1IO_PADCONF_1		0x05AC
#define CONTROL_SMART2IO_PADCONF_0		0x05B0
#define CONTROL_SMART2IO_PADCONF_1		0x05B4
#define CONTROL_SMART3IO_PADCONF_0		0x05B8
#define CONTROL_SMART3IO_PADCONF_1		0x05BC
#define CONTROL_SMART3IO_PADCONF_2		0x05C0
#define CONTROL_USBB_HSIC			0x05C4
#define CONTROL_SLIMBUS				0x05C8
#define CONTROL_PBIASLITE			0x0600
#define CONTROL_I2C_0				0x0604
#define CONTROL_CAMERA_RX			0x0608
#define CONTROL_AVDAC				0x060C
#define CONTROL_HDMI_TX_PHY			0x0610
#define CONTROL_MMC2				0x0614
#define CONTROL_DSIPHY				0x0618
#define CONTROL_MCBSPLP				0x061C
#define CONTROL_USB2PHYCORE			0x0620
#define CONTROL_I2C_1				0x0624
#define CONTROL_MMC1				0x0628
#define CONTROL_HSI				0x062C
#define CONTROL_USB				0x0630
#define CONTROL_HDQ				0x0634
#define CONTROL_LPDDR2IO1_0			0x0638
#define CONTROL_LPDDR2IO1_1			0x063C
#define CONTROL_LPDDR2IO1_2			0x0640
#define CONTROL_LPDDR2IO1_3			0x0644
#define CONTROL_LPDDR2IO2_0			0x0648
#define CONTROL_LPDDR2IO2_1			0x064C
#define CONTROL_LPDDR2IO2_2			0x0650
#define CONTROL_LPDDR2IO2_3			0x0654
#define CONTROL_BUS_HOLD			0x0658
#define CONTROL_C2C				0x065C
#define CONTROL_CORE_CONTROL_SPARE_RW		0x0660
#define CONTROL_CORE_CONTROL_SPARE_R		0x0664
#define CONTROL_CORE_CONTROL_SPARE_R_C0		0x0668
#define CONTROL_EFUSE_1				0x0700
#define CONTROL_EFUSE_2				0x0704
#define CONTROL_EFUSE_3				0x0708
#define CONTROL_EFUSE_4				0x070C

#define CONTROL_PADCONF_WKUP_REVISION		0x0000
#define CONTROL_PADCONF_WKUP_HWINFO		0x0004
#define CONTROL_PADCONF_WKUP_SYSCONFIG		0x0010
#define CONTROL_WKUP_PAD0_SIM_IO		0x0040
#define CONTROL_WKUP_PAD1_SIM_CLK		0x0042
#define CONTROL_WKUP_PAD0_SIM_RESET		0x0044
#define CONTROL_WKUP_PAD1_SIM_CD		0x0046
#define CONTROL_WKUP_PAD0_SIM_PWRCTRL		0x0048
#define CONTROL_WKUP_PAD1_SR_SCL		0x004A
#define CONTROL_WKUP_PAD0_SR_SDA		0x004C
#define CONTROL_WKUP_PAD1_FREF_XTAL_IN		0x004E
#define CONTROL_WKUP_PAD0_FREF_SLICER_IN	0x0050
#define CONTROL_WKUP_PAD1_FREF_CLK_IOREQ	0x0052
#define CONTROL_WKUP_PAD0_FREF_CLK0_OUT		0x0054
#define CONTROL_WKUP_PAD1_FREF_CLK3_REQ		0x0056
#define CONTROL_WKUP_PAD0_FREF_CLK3_OUT		0x0058
#define CONTROL_WKUP_PAD1_FREF_CLK4_REQ		0x005A
#define CONTROL_WKUP_PAD0_FREF_CLK4_OUT		0x005C
#define CONTROL_WKUP_PAD1_SYS_32K		0x005E
#define CONTROL_WKUP_PAD0_SYS_NRESPWRON		0x0060
#define CONTROL_WKUP_PAD1_SYS_NRESWARM		0x0062
#define CONTROL_WKUP_PAD0_SYS_PWR_REQ		0x0064
#define CONTROL_WKUP_PAD1_SYS_PWRON_RESET	0x0066
#define CONTROL_WKUP_PAD0_SYS_BOOT6		0x0068
#define CONTROL_WKUP_PAD1_SYS_BOOT7		0x006A
#define CONTROL_WKUP_PAD0_JTAG_NTRST		0x006C
#define CONTROL_WKUP_PAD1_JTAG_TCK		0x006D
#define CONTROL_WKUP_PAD0_JTAG_RTCK		0x0070
#define CONTROL_WKUP_PAD1_JTAG_TMS_TMSC		0x0072
#define CONTROL_WKUP_PAD0_JTAG_TDI		0x0074
#define CONTROL_WKUP_PAD1_JTAG_TDO		0x0076
#define CONTROL_PADCONF_WAKEUPEVENT_0		0x007C
#define CONTROL_SMART1NOPMIO_PADCONF_0		0x05A0
#define CONTROL_SMART1NOPMIO_PADCONF_1		0x05A4
#define CONTROL_XTAL_OSCILLATOR			0x05AC
#define CONTROL_CONTROL_I2C_2			0x0604
#define CONTROL_CONTROL_JTAG			0x0608
#define CONTROL_CONTROL_SYS			0x060C
#define CONTROL_WKUP_CONTROL_SPARE_RW		0x0614
#define CONTROL_WKUP_CONTROL_SPARE_R		0x0618
#define CONTROL_WKUP_CONTROL_SPARE_R_C0		0x061C


#define setup_core(OFFSET, VALUE)\
        writew((VALUE), OMAP44XX_CTRL_PADCONF_CORE_BASE + (OFFSET));

#define setup_wakeup(OFFSET, VALUE)\
        writew((VALUE), OMAP44XX_WKUP_CTRL_BASE + (OFFSET));

#endif
