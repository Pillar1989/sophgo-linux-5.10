// $Module: fmux_gpio $
// $RegisterBank Version: V 1.0.00 $
// $Author: ghost $
// $Date: Fri, 27 Aug 2021 08:47:09 PM $
//

//GEN REG ADDR/OFFSET/MASK

#ifndef __CV181X_REG_FMUX_GPIO_H__
#define __CV181X_REG_FMUX_GPIO_H__

#define  FMUX_GPIO_REG_IOCTRL_CAM_MCLK0  0x0
#define  FMUX_GPIO_REG_IOCTRL_CAM_PD0  0x4
#define  FMUX_GPIO_REG_IOCTRL_CAM_RST0  0x8
#define  FMUX_GPIO_REG_IOCTRL_CAM_MCLK1  0xc
#define  FMUX_GPIO_REG_IOCTRL_CAM_PD1  0x10
#define  FMUX_GPIO_REG_IOCTRL_IIC3_SCL  0x14
#define  FMUX_GPIO_REG_IOCTRL_IIC3_SDA  0x18
#define  FMUX_GPIO_REG_IOCTRL_SD0_CLK  0x1c
#define  FMUX_GPIO_REG_IOCTRL_SD0_CMD  0x20
#define  FMUX_GPIO_REG_IOCTRL_SD0_D0  0x24
#define  FMUX_GPIO_REG_IOCTRL_SD0_D1  0x28
#define  FMUX_GPIO_REG_IOCTRL_SD0_D2  0x2c
#define  FMUX_GPIO_REG_IOCTRL_SD0_D3  0x30
#define  FMUX_GPIO_REG_IOCTRL_SD0_CD  0x34
#define  FMUX_GPIO_REG_IOCTRL_SD0_PWR_EN  0x38
#define  FMUX_GPIO_REG_IOCTRL_SPK_EN  0x3c
#define  FMUX_GPIO_REG_IOCTRL_UART0_TX  0x40
#define  FMUX_GPIO_REG_IOCTRL_UART0_RX  0x44
#define  FMUX_GPIO_REG_IOCTRL_EMMC_RSTN  0x48
#define  FMUX_GPIO_REG_IOCTRL_EMMC_DAT2  0x4c
#define  FMUX_GPIO_REG_IOCTRL_EMMC_CLK  0x50
#define  FMUX_GPIO_REG_IOCTRL_EMMC_DAT0  0x54
#define  FMUX_GPIO_REG_IOCTRL_EMMC_DAT3  0x58
#define  FMUX_GPIO_REG_IOCTRL_EMMC_CMD  0x5c
#define  FMUX_GPIO_REG_IOCTRL_EMMC_DAT1  0x60
#define  FMUX_GPIO_REG_IOCTRL_JTAG_CPU_TMS  0x64
#define  FMUX_GPIO_REG_IOCTRL_JTAG_CPU_TCK  0x68
#define  FMUX_GPIO_REG_IOCTRL_JTAG_CPU_TRST  0x6c
#define  FMUX_GPIO_REG_IOCTRL_IIC0_SCL  0x70
#define  FMUX_GPIO_REG_IOCTRL_IIC0_SDA  0x74
#define  FMUX_GPIO_REG_IOCTRL_AUX0  0x78
#define  FMUX_GPIO_REG_IOCTRL_PWR_VBAT_DET  0x7c
#define  FMUX_GPIO_REG_IOCTRL_PWR_RSTN  0x80
#define  FMUX_GPIO_REG_IOCTRL_PWR_SEQ1  0x84
#define  FMUX_GPIO_REG_IOCTRL_PWR_SEQ2  0x88
#define  FMUX_GPIO_REG_IOCTRL_PWR_SEQ3  0x8c
#define  FMUX_GPIO_REG_IOCTRL_PWR_WAKEUP0  0x90
#define  FMUX_GPIO_REG_IOCTRL_PWR_WAKEUP1  0x94
#define  FMUX_GPIO_REG_IOCTRL_PWR_BUTTON1  0x98
#define  FMUX_GPIO_REG_IOCTRL_PWR_ON  0x9c
#define  FMUX_GPIO_REG_IOCTRL_XTAL_XIN  0xa0
#define  FMUX_GPIO_REG_IOCTRL_PWR_GPIO0  0xa4
#define  FMUX_GPIO_REG_IOCTRL_PWR_GPIO1  0xa8
#define  FMUX_GPIO_REG_IOCTRL_PWR_GPIO2  0xac
#define  FMUX_GPIO_REG_IOCTRL_CLK32K  0xb0
#define  FMUX_GPIO_REG_IOCTRL_CLK25M  0xb4
#define  FMUX_GPIO_REG_IOCTRL_IIC2_SCL  0xb8
#define  FMUX_GPIO_REG_IOCTRL_IIC2_SDA  0xbc
#define  FMUX_GPIO_REG_IOCTRL_UART2_TX  0xc0
#define  FMUX_GPIO_REG_IOCTRL_UART2_RTS  0xc4
#define  FMUX_GPIO_REG_IOCTRL_UART2_RX  0xc8
#define  FMUX_GPIO_REG_IOCTRL_UART2_CTS  0xcc
#define  FMUX_GPIO_REG_IOCTRL_SD1_D3  0xd0
#define  FMUX_GPIO_REG_IOCTRL_SD1_D2  0xd4
#define  FMUX_GPIO_REG_IOCTRL_SD1_D1  0xd8
#define  FMUX_GPIO_REG_IOCTRL_SD1_D0  0xdc
#define  FMUX_GPIO_REG_IOCTRL_SD1_CMD  0xe0
#define  FMUX_GPIO_REG_IOCTRL_SD1_CLK  0xe4
#define  FMUX_GPIO_REG_IOCTRL_RSTN  0xe8
#define  FMUX_GPIO_REG_IOCTRL_PWM0_BUCK  0xec
#define  FMUX_GPIO_REG_IOCTRL_ADC3  0xf0
#define  FMUX_GPIO_REG_IOCTRL_ADC2  0xf4
#define  FMUX_GPIO_REG_IOCTRL_ADC1  0xf8
#define  FMUX_GPIO_REG_IOCTRL_USB_ID  0xfc
#define  FMUX_GPIO_REG_IOCTRL_USB_VBUS_EN  0x100
#define  FMUX_GPIO_REG_IOCTRL_PKG_TYPE0  0x104
#define  FMUX_GPIO_REG_IOCTRL_USB_VBUS_DET  0x108
#define  FMUX_GPIO_REG_IOCTRL_PKG_TYPE1  0x10c
#define  FMUX_GPIO_REG_IOCTRL_PKG_TYPE2  0x110
#define  FMUX_GPIO_REG_IOCTRL_MUX_SPI1_MISO  0x114
#define  FMUX_GPIO_REG_IOCTRL_MUX_SPI1_MOSI  0x118
#define  FMUX_GPIO_REG_IOCTRL_MUX_SPI1_CS  0x11c
#define  FMUX_GPIO_REG_IOCTRL_MUX_SPI1_SCK  0x120
#define  FMUX_GPIO_REG_IOCTRL_PAD_ETH_TXP  0x124
#define  FMUX_GPIO_REG_IOCTRL_PAD_ETH_TXM  0x128
#define  FMUX_GPIO_REG_IOCTRL_PAD_ETH_RXP  0x12c
#define  FMUX_GPIO_REG_IOCTRL_PAD_ETH_RXM  0x130
#define  FMUX_GPIO_REG_IOCTRL_VIVO_D10  0x134
#define  FMUX_GPIO_REG_IOCTRL_VIVO_D9  0x138
#define  FMUX_GPIO_REG_IOCTRL_VIVO_D8  0x13c
#define  FMUX_GPIO_REG_IOCTRL_VIVO_D7  0x140
#define  FMUX_GPIO_REG_IOCTRL_VIVO_D6  0x144
#define  FMUX_GPIO_REG_IOCTRL_VIVO_D5  0x148
#define  FMUX_GPIO_REG_IOCTRL_VIVO_D4  0x14c
#define  FMUX_GPIO_REG_IOCTRL_VIVO_D3  0x150
#define  FMUX_GPIO_REG_IOCTRL_VIVO_D2  0x154
#define  FMUX_GPIO_REG_IOCTRL_VIVO_D1  0x158
#define  FMUX_GPIO_REG_IOCTRL_VIVO_D0  0x15c
#define  FMUX_GPIO_REG_IOCTRL_VIVO_CLK  0x160
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX5N  0x164
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX5P  0x168
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX4N  0x16c
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX4P  0x170
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX3N  0x174
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX3P  0x178
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX2N  0x17c
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX2P  0x180
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX1N  0x184
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX1P  0x188
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX0N  0x18c
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPIRX0P  0x190
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPI_TXM4  0x194
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPI_TXP4  0x198
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPI_TXM3  0x19c
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPI_TXP3  0x1a0
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPI_TXM2  0x1a4
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPI_TXP2  0x1a8
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPI_TXM1  0x1ac
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPI_TXP1  0x1b0
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPI_TXM0  0x1b4
#define  FMUX_GPIO_REG_IOCTRL_PAD_MIPI_TXP0  0x1b8
#define  FMUX_GPIO_REG_IOCTRL_PAD_AUD_AINL_MIC  0x1bc
#define  FMUX_GPIO_REG_IOCTRL_PAD_AUD_AINR_MIC  0x1c0
#define  FMUX_GPIO_REG_IOCTRL_PAD_AUD_AOUTL  0x1c4
#define  FMUX_GPIO_REG_IOCTRL_PAD_AUD_AOUTR  0x1c8
#define  FMUX_GPIO_REG_IOCTRL_GPIO_RTX  0x1cc
#define  FMUX_GPIO_REG_IOCTRL_GPIO_ZQ  0x1d0
#define  FMUX_GPIO_FUNCSEL_CAM_MCLK0   0x0
#define  FMUX_GPIO_FUNCSEL_CAM_MCLK0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_CAM_MCLK0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_CAM_PD0   0x4
#define  FMUX_GPIO_FUNCSEL_CAM_PD0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_CAM_PD0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_CAM_RST0   0x8
#define  FMUX_GPIO_FUNCSEL_CAM_RST0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_CAM_RST0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_CAM_MCLK1   0xc
#define  FMUX_GPIO_FUNCSEL_CAM_MCLK1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_CAM_MCLK1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_CAM_PD1   0x10
#define  FMUX_GPIO_FUNCSEL_CAM_PD1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_CAM_PD1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_IIC3_SCL   0x14
#define  FMUX_GPIO_FUNCSEL_IIC3_SCL_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_IIC3_SCL_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_IIC3_SDA   0x18
#define  FMUX_GPIO_FUNCSEL_IIC3_SDA_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_IIC3_SDA_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD0_CLK   0x1c
#define  FMUX_GPIO_FUNCSEL_SD0_CLK_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD0_CLK_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD0_CMD   0x20
#define  FMUX_GPIO_FUNCSEL_SD0_CMD_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD0_CMD_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD0_D0   0x24
#define  FMUX_GPIO_FUNCSEL_SD0_D0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD0_D0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD0_D1   0x28
#define  FMUX_GPIO_FUNCSEL_SD0_D1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD0_D1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD0_D2   0x2c
#define  FMUX_GPIO_FUNCSEL_SD0_D2_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD0_D2_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD0_D3   0x30
#define  FMUX_GPIO_FUNCSEL_SD0_D3_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD0_D3_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD0_CD   0x34
#define  FMUX_GPIO_FUNCSEL_SD0_CD_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD0_CD_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD0_PWR_EN   0x38
#define  FMUX_GPIO_FUNCSEL_SD0_PWR_EN_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD0_PWR_EN_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SPK_EN   0x3c
#define  FMUX_GPIO_FUNCSEL_SPK_EN_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SPK_EN_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_UART0_TX   0x40
#define  FMUX_GPIO_FUNCSEL_UART0_TX_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_UART0_TX_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_UART0_RX   0x44
#define  FMUX_GPIO_FUNCSEL_UART0_RX_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_UART0_RX_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_EMMC_RSTN   0x48
#define  FMUX_GPIO_FUNCSEL_EMMC_RSTN_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_EMMC_RSTN_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT2   0x4c
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT2_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT2_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_EMMC_CLK   0x50
#define  FMUX_GPIO_FUNCSEL_EMMC_CLK_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_EMMC_CLK_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT0   0x54
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT3   0x58
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT3_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT3_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_EMMC_CMD   0x5c
#define  FMUX_GPIO_FUNCSEL_EMMC_CMD_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_EMMC_CMD_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT1   0x60
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_EMMC_DAT1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_JTAG_CPU_TMS   0x64
#define  FMUX_GPIO_FUNCSEL_JTAG_CPU_TMS_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_JTAG_CPU_TMS_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_JTAG_CPU_TCK   0x68
#define  FMUX_GPIO_FUNCSEL_JTAG_CPU_TCK_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_JTAG_CPU_TCK_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_JTAG_CPU_TRST   0x6c
#define  FMUX_GPIO_FUNCSEL_JTAG_CPU_TRST_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_JTAG_CPU_TRST_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_IIC0_SCL   0x70
#define  FMUX_GPIO_FUNCSEL_IIC0_SCL_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_IIC0_SCL_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_IIC0_SDA   0x74
#define  FMUX_GPIO_FUNCSEL_IIC0_SDA_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_IIC0_SDA_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_AUX0   0x78
#define  FMUX_GPIO_FUNCSEL_AUX0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_AUX0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_VBAT_DET   0x7c
#define  FMUX_GPIO_FUNCSEL_PWR_VBAT_DET_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_VBAT_DET_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_RSTN   0x80
#define  FMUX_GPIO_FUNCSEL_PWR_RSTN_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_RSTN_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_SEQ1   0x84
#define  FMUX_GPIO_FUNCSEL_PWR_SEQ1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_SEQ1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_SEQ2   0x88
#define  FMUX_GPIO_FUNCSEL_PWR_SEQ2_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_SEQ2_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_SEQ3   0x8c
#define  FMUX_GPIO_FUNCSEL_PWR_SEQ3_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_SEQ3_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_WAKEUP0   0x90
#define  FMUX_GPIO_FUNCSEL_PWR_WAKEUP0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_WAKEUP0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_WAKEUP1   0x94
#define  FMUX_GPIO_FUNCSEL_PWR_WAKEUP1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_WAKEUP1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_BUTTON1   0x98
#define  FMUX_GPIO_FUNCSEL_PWR_BUTTON1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_BUTTON1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_ON   0x9c
#define  FMUX_GPIO_FUNCSEL_PWR_ON_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_ON_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_XTAL_XIN   0xa0
#define  FMUX_GPIO_FUNCSEL_XTAL_XIN_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_XTAL_XIN_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_GPIO0   0xa4
#define  FMUX_GPIO_FUNCSEL_PWR_GPIO0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_GPIO0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_GPIO1   0xa8
#define  FMUX_GPIO_FUNCSEL_PWR_GPIO1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_GPIO1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWR_GPIO2   0xac
#define  FMUX_GPIO_FUNCSEL_PWR_GPIO2_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWR_GPIO2_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_CLK32K   0xb0
#define  FMUX_GPIO_FUNCSEL_CLK32K_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_CLK32K_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_CLK25M   0xb4
#define  FMUX_GPIO_FUNCSEL_CLK25M_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_CLK25M_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_IIC2_SCL   0xb8
#define  FMUX_GPIO_FUNCSEL_IIC2_SCL_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_IIC2_SCL_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_IIC2_SDA   0xbc
#define  FMUX_GPIO_FUNCSEL_IIC2_SDA_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_IIC2_SDA_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_UART2_TX   0xc0
#define  FMUX_GPIO_FUNCSEL_UART2_TX_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_UART2_TX_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_UART2_RTS   0xc4
#define  FMUX_GPIO_FUNCSEL_UART2_RTS_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_UART2_RTS_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_UART2_RX   0xc8
#define  FMUX_GPIO_FUNCSEL_UART2_RX_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_UART2_RX_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_UART2_CTS   0xcc
#define  FMUX_GPIO_FUNCSEL_UART2_CTS_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_UART2_CTS_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD1_D3   0xd0
#define  FMUX_GPIO_FUNCSEL_SD1_D3_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD1_D3_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD1_D2   0xd4
#define  FMUX_GPIO_FUNCSEL_SD1_D2_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD1_D2_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD1_D1   0xd8
#define  FMUX_GPIO_FUNCSEL_SD1_D1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD1_D1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD1_D0   0xdc
#define  FMUX_GPIO_FUNCSEL_SD1_D0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD1_D0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD1_CMD   0xe0
#define  FMUX_GPIO_FUNCSEL_SD1_CMD_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD1_CMD_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_SD1_CLK   0xe4
#define  FMUX_GPIO_FUNCSEL_SD1_CLK_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_SD1_CLK_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_RSTN   0xe8
#define  FMUX_GPIO_FUNCSEL_RSTN_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_RSTN_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PWM0_BUCK   0xec
#define  FMUX_GPIO_FUNCSEL_PWM0_BUCK_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PWM0_BUCK_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_ADC3   0xf0
#define  FMUX_GPIO_FUNCSEL_ADC3_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_ADC3_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_ADC2   0xf4
#define  FMUX_GPIO_FUNCSEL_ADC2_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_ADC2_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_ADC1   0xf8
#define  FMUX_GPIO_FUNCSEL_ADC1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_ADC1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_USB_ID   0xfc
#define  FMUX_GPIO_FUNCSEL_USB_ID_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_USB_ID_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_USB_VBUS_EN   0x100
#define  FMUX_GPIO_FUNCSEL_USB_VBUS_EN_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_USB_VBUS_EN_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PKG_TYPE0   0x104
#define  FMUX_GPIO_FUNCSEL_PKG_TYPE0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PKG_TYPE0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_USB_VBUS_DET   0x108
#define  FMUX_GPIO_FUNCSEL_USB_VBUS_DET_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_USB_VBUS_DET_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PKG_TYPE1   0x10c
#define  FMUX_GPIO_FUNCSEL_PKG_TYPE1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PKG_TYPE1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PKG_TYPE2   0x110
#define  FMUX_GPIO_FUNCSEL_PKG_TYPE2_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PKG_TYPE2_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_MISO   0x114
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_MISO_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_MISO_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_MOSI   0x118
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_MOSI_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_MOSI_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_CS   0x11c
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_CS_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_CS_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_SCK   0x120
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_SCK_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_MUX_SPI1_SCK_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_TXP   0x124
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_TXP_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_TXP_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_TXM   0x128
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_TXM_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_TXM_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_RXP   0x12c
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_RXP_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_RXP_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_RXM   0x130
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_RXM_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_ETH_RXM_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_D10   0x134
#define  FMUX_GPIO_FUNCSEL_VIVO_D10_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_D10_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_D9   0x138
#define  FMUX_GPIO_FUNCSEL_VIVO_D9_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_D9_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_D8   0x13c
#define  FMUX_GPIO_FUNCSEL_VIVO_D8_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_D8_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_D7   0x140
#define  FMUX_GPIO_FUNCSEL_VIVO_D7_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_D7_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_D6   0x144
#define  FMUX_GPIO_FUNCSEL_VIVO_D6_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_D6_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_D5   0x148
#define  FMUX_GPIO_FUNCSEL_VIVO_D5_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_D5_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_D4   0x14c
#define  FMUX_GPIO_FUNCSEL_VIVO_D4_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_D4_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_D3   0x150
#define  FMUX_GPIO_FUNCSEL_VIVO_D3_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_D3_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_D2   0x154
#define  FMUX_GPIO_FUNCSEL_VIVO_D2_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_D2_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_D1   0x158
#define  FMUX_GPIO_FUNCSEL_VIVO_D1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_D1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_D0   0x15c
#define  FMUX_GPIO_FUNCSEL_VIVO_D0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_D0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_VIVO_CLK   0x160
#define  FMUX_GPIO_FUNCSEL_VIVO_CLK_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_VIVO_CLK_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX5N   0x164
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX5N_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX5N_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX5P   0x168
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX5P_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX5P_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX4N   0x16c
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX4N_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX4N_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX4P   0x170
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX4P_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX4P_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX3N   0x174
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX3N_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX3N_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX3P   0x178
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX3P_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX3P_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX2N   0x17c
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX2N_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX2N_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX2P   0x180
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX2P_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX2P_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX1N   0x184
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX1N_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX1N_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX1P   0x188
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX1P_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX1P_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX0N   0x18c
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX0N_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX0N_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX0P   0x190
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX0P_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPIRX0P_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM4   0x194
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM4_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM4_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP4   0x198
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP4_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP4_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM3   0x19c
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM3_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM3_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP3   0x1a0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP3_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP3_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM2   0x1a4
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM2_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM2_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP2   0x1a8
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP2_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP2_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM1   0x1ac
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP1   0x1b0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP1_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP1_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM0   0x1b4
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXM0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP0   0x1b8
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP0_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_MIPI_TXP0_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AINL_MIC   0x1bc
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AINL_MIC_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AINL_MIC_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AINR_MIC   0x1c0
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AINR_MIC_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AINR_MIC_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AOUTL   0x1c4
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AOUTL_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AOUTL_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AOUTR   0x1c8
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AOUTR_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_PAD_AUD_AOUTR_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_GPIO_RTX   0x1cc
#define  FMUX_GPIO_FUNCSEL_GPIO_RTX_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_GPIO_RTX_MASK   0x7
#define  FMUX_GPIO_FUNCSEL_GPIO_ZQ   0x1d0
#define  FMUX_GPIO_FUNCSEL_GPIO_ZQ_OFFSET 0
#define  FMUX_GPIO_FUNCSEL_GPIO_ZQ_MASK   0x7


#endif /* __CV181X_REG_FMUX_GPIO_H__ */
