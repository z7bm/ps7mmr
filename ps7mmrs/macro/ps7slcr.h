//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_SLCR
//*
//*      Version 1.0
//*
//*      Copyright (c) 2017, emb-lib Project Team
//*
//*      This file is part of the zynq7000 library project.
//*      Visit https://github.com/emb-lib/zynq7000 for new versions.
//*
//*      Permission is hereby granted, free of charge, to any person obtaining
//*      a copy of this software and associated documentation files (the
//*      "Software"), to deal in the Software without restriction, including
//*      without limitation the rights to use, copy, modify, merge, publish,
//*      distribute, sublicense, and/or sell copies of the Software, and to
//*      permit persons to whom the Software is furnished to do so, subject to
//*      the following conditions:
//*
//*      The above copyright notice and this permission notice shall be included
//*      in all copies or substantial portions of the Software.
//*
//*      THE SOFTWARE  IS PROVIDED  "AS IS", WITHOUT  WARRANTY OF  ANY KIND,
//*      EXPRESS  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//*      MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//*      IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
//*      CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
//*      TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
//*      THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//*
//------------------------------------------------------------------------------

#ifndef PS7_SLCR_H
#define PS7_SLCR_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    SLCR MMRs
//
//      Name                          Address                     Width   Type     Reset Value   Description
#define SCL_REG                      (SLCR_ADDR + 0x00000000UL) //  32    rw       0x00000000    Secure Configuration Lock
#define SLCR_LOCK_REG                (SLCR_ADDR + 0x00000004UL) //  32    wo       0x00000000    SLCR Write Protection Lock
#define SLCR_UNLOCK_REG              (SLCR_ADDR + 0x00000008UL) //  32    wo       0x00000000    SLCR Write Protection Unlock
#define SLCR_LOCKSTA_REG             (SLCR_ADDR + 0x0000000CUL) //  32    ro       0x00000001    SLCR Write Protection Status
#define ARM_PLL_CTRL_REG             (SLCR_ADDR + 0x00000100UL) //  32    rw       0x0001A008    ARM PLL Control
#define DDR_PLL_CTRL_REG             (SLCR_ADDR + 0x00000104UL) //  32    rw       0x0001A008    DDR PLL Control
#define IO_PLL_CTRL_REG              (SLCR_ADDR + 0x00000108UL) //  32    rw       0x0001A008    IO PLL Control
#define PLL_STATUS_REG               (SLCR_ADDR + 0x0000010CUL) //  32    ro       0x0000003F    PLL Status
#define ARM_PLL_CFG_REG              (SLCR_ADDR + 0x00000110UL) //  32    rw       0x00177EA0    ARM PLL Configuration
#define DDR_PLL_CFG_REG              (SLCR_ADDR + 0x00000114UL) //  32    rw       0x00177EA0    DDR PLL Configuration
#define IO_PLL_CFG_REG               (SLCR_ADDR + 0x00000118UL) //  32    rw       0x00177EA0    IO PLL Configuration
#define ARM_CLK_CTRL_REG             (SLCR_ADDR + 0x00000120UL) //  32    rw       0x1F000400    CPU Clock Control
#define DDR_CLK_CTRL_REG             (SLCR_ADDR + 0x00000124UL) //  32    rw       0x18400003    DDR Clock Control
#define DCI_CLK_CTRL_REG             (SLCR_ADDR + 0x00000128UL) //  32    rw       0x01E03201    DCI clock control
#define APER_CLK_CTRL_REG            (SLCR_ADDR + 0x0000012CUL) //  32    rw       0x01FFCCCD    AMBA Peripheral Clock Control
#define USB0_CLK_CTRL_REG            (SLCR_ADDR + 0x00000130UL) //  32    rw       0x00101941    USB 0 ULPI Clock Control
#define USB1_CLK_CTRL_REG            (SLCR_ADDR + 0x00000134UL) //  32    rw       0x00101941    USB 1 ULPI Clock Control
#define GEM0_RCLK_CTRL_REG           (SLCR_ADDR + 0x00000138UL) //  32    rw       0x00000001    GigE 0 Rx Clock and Rx Signals Select
#define GEM1_RCLK_CTRL_REG           (SLCR_ADDR + 0x0000013CUL) //  32    rw       0x00000001    GigE 1 Rx Clock and Rx Signals Select
#define GEM0_CLK_CTRL_REG            (SLCR_ADDR + 0x00000140UL) //  32    rw       0x00003C01    GigE 0 Ref Clock Control
#define GEM1_CLK_CTRL_REG            (SLCR_ADDR + 0x00000144UL) //  32    rw       0x00003C01    GigE 1 Ref Clock Control
#define SMC_CLK_CTRL_REG             (SLCR_ADDR + 0x00000148UL) //  32    rw       0x00003C21    SMC Ref Clock Control
#define LQSPI_CLK_CTRL_REG           (SLCR_ADDR + 0x0000014CUL) //  32    rw       0x00002821    Quad SPI Ref Clock Control
#define SDIO_CLK_CTRL_REG            (SLCR_ADDR + 0x00000150UL) //  32    rw       0x00001E03    SDIO Ref Clock Control
#define UART_CLK_CTRL_REG            (SLCR_ADDR + 0x00000154UL) //  32    rw       0x00003F03    UART Ref Clock Control
#define SPI_CLK_CTRL_REG             (SLCR_ADDR + 0x00000158UL) //  32    rw       0x00003F03    SPI Ref Clock Control
#define CAN_CLK_CTRL_REG             (SLCR_ADDR + 0x0000015CUL) //  32    rw       0x00501903    CAN Ref Clock Control
#define CAN_MIOCLK_CTRL_REG          (SLCR_ADDR + 0x00000160UL) //  32    rw       0x00000000    CAN MIO Clock Control
#define DBG_CLK_CTRL_REG             (SLCR_ADDR + 0x00000164UL) //  32    rw       0x00000F03    SoC Debug Clock Control
#define PCAP_CLK_CTRL_REG            (SLCR_ADDR + 0x00000168UL) //  32    rw       0x00000F01    PCAP Clock Control
#define TOPSW_CLK_CTRL_REG           (SLCR_ADDR + 0x0000016CUL) //  32    rw       0x00000000    Central Interconnect Clock Control
#define FPGA0_CLK_CTRL_REG           (SLCR_ADDR + 0x00000170UL) //  32    rw       0x00101800    PL Clock 0 Output control
#define FPGA0_THR_CTRL_REG           (SLCR_ADDR + 0x00000174UL) //  32    rw       0x00000000    PL Clock 0 Throttle control
#define FPGA0_THR_CNT_REG            (SLCR_ADDR + 0x00000178UL) //  32    rw       0x00000000    PL Clock 0 Throttle Count control
#define FPGA0_THR_STA_REG            (SLCR_ADDR + 0x0000017CUL) //  32    ro       0x00010000    PL Clock 0 Throttle Status read
#define FPGA1_CLK_CTRL_REG           (SLCR_ADDR + 0x00000180UL) //  32    rw       0x00101800    PL Clock 1 Output control
#define FPGA1_THR_CTRL_REG           (SLCR_ADDR + 0x00000184UL) //  32    rw       0x00000000    PL Clock 1 Throttle control
#define FPGA1_THR_CNT_REG            (SLCR_ADDR + 0x00000188UL) //  32    rw       0x00000000    PL Clock 1 Throttle Count
#define FPGA1_THR_STA_REG            (SLCR_ADDR + 0x0000018CUL) //  32    ro       0x00010000    PL Clock 1 Throttle Status control
#define FPGA2_CLK_CTRL_REG           (SLCR_ADDR + 0x00000190UL) //  32    rw       0x00101800    PL Clock 2 output control
#define FPGA2_THR_CTRL_REG           (SLCR_ADDR + 0x00000194UL) //  32    rw       0x00000000    PL Clock 2 Throttle Control
#define FPGA2_THR_CNT_REG            (SLCR_ADDR + 0x00000198UL) //  32    rw       0x00000000    PL Clock 2 Throttle Count
#define FPGA2_THR_STA_REG            (SLCR_ADDR + 0x0000019CUL) //  32    ro       0x00010000    PL Clock 2 Throttle Status
#define FPGA3_CLK_CTRL_REG           (SLCR_ADDR + 0x000001A0UL) //  32    rw       0x00101800    PL Clock 3 output control
#define FPGA3_THR_CTRL_REG           (SLCR_ADDR + 0x000001A4UL) //  32    rw       0x00000000    PL Clock 3 Throttle Control
#define FPGA3_THR_CNT_REG            (SLCR_ADDR + 0x000001A8UL) //  32    rw       0x00000000    PL Clock 3 Throttle Count
#define FPGA3_THR_STA_REG            (SLCR_ADDR + 0x000001ACUL) //  32    ro       0x00010000    PL Clock 3 Throttle Status
#define CLK_621_TRUE_REG             (SLCR_ADDR + 0x000001C4UL) //  32    rw       0x00000001    CPU Clock Ratio Mode select
#define PSS_RST_CTRL_REG             (SLCR_ADDR + 0x00000200UL) //  32    rw       0x00000000    PS Software Reset Control
#define DDR_RST_CTRL_REG             (SLCR_ADDR + 0x00000204UL) //  32    rw       0x00000000    DDR Software Reset Control
#define TOPSW_RST_CTRL_REG           (SLCR_ADDR + 0x00000208UL) //  32    rw       0x00000000    Central Interconnect Reset Control
#define DMAC_RST_CTRL_REG            (SLCR_ADDR + 0x0000020CUL) //  32    rw       0x00000000    DMAC Software Reset Control
#define USB_RST_CTRL_REG             (SLCR_ADDR + 0x00000210UL) //  32    rw       0x00000000    USB Software Reset Control
#define GEM_RST_CTRL_REG             (SLCR_ADDR + 0x00000214UL) //  32    rw       0x00000000    Gigabit Ethernet SW Reset Control
#define SDIO_RST_CTRL_REG            (SLCR_ADDR + 0x00000218UL) //  32    rw       0x00000000    SDIO Software Reset Control
#define SPI_RST_CTRL_REG             (SLCR_ADDR + 0x0000021CUL) //  32    rw       0x00000000    SPI Software Reset Control
#define CAN_RST_CTRL_REG             (SLCR_ADDR + 0x00000220UL) //  32    rw       0x00000000    CAN Software Reset Control
#define I2C_RST_CTRL_REG             (SLCR_ADDR + 0x00000224UL) //  32    rw       0x00000000    I2C Software Reset Control
#define UART_RST_CTRL_REG            (SLCR_ADDR + 0x00000228UL) //  32    rw       0x00000000    UART Software Reset Control
#define GPIO_RST_CTRL_REG            (SLCR_ADDR + 0x0000022CUL) //  32    rw       0x00000000    GPIO Software Reset Control
#define LQSPI_RST_CTRL_REG           (SLCR_ADDR + 0x00000230UL) //  32    rw       0x00000000    Quad SPI Software Reset Control
#define SMC_RST_CTRL_REG             (SLCR_ADDR + 0x00000234UL) //  32    rw       0x00000000    SMC Software Reset Control
#define OCM_RST_CTRL_REG             (SLCR_ADDR + 0x00000238UL) //  32    rw       0x00000000    OCM Software Reset Control
#define FPGA_RST_CTRL_REG            (SLCR_ADDR + 0x00000240UL) //  32    rw       0x01F33F0F    FPGA Software Reset Control
#define A9_CPU_RST_CTRL_REG          (SLCR_ADDR + 0x00000244UL) //  32    rw       0x00000000    CPU Reset and Clock control
#define RS_AWDT_CTRL_REG             (SLCR_ADDR + 0x0000024CUL) //  32    rw       0x00000000    Watchdog Timer Reset Control
#define REBOOT_STATUS_REG            (SLCR_ADDR + 0x00000258UL) //  32    rw       0x00400000    Reboot Status
#define BOOT_MODE_REG                (SLCR_ADDR + 0x0000025CUL) //  32    mixed    x             Boot Mode Strapping Pins
#define APU_CTRL_REG                 (SLCR_ADDR + 0x00000300UL) //  32    rw       0x00000000    APU Control
#define WDT_CLK_SEL_REG              (SLCR_ADDR + 0x00000304UL) //  32    rw       0x00000000    SWDT clock source select
#define TZ_DMA_NS_REG                (SLCR_ADDR + 0x00000440UL) //  32    rw       0x00000000    DMAC TrustZone Config
#define TZ_DMA_IRQ_NS_REG            (SLCR_ADDR + 0x00000444UL) //  32    rw       0x00000000    DMAC TrustZone Config for Interrupts
#define TZ_DMA_PERIPH_NS_REG         (SLCR_ADDR + 0x00000448UL) //  32    rw       0x00000000    DMAC TrustZone Config for Peripherals
#define PSS_IDCODE_REG               (SLCR_ADDR + 0x00000530UL) //  32    ro       x             PS IDCODE
#define DDR_URGENT_REG               (SLCR_ADDR + 0x00000600UL) //  32    rw       0x00000000    DDR Urgent Control
#define DDR_CAL_START_REG            (SLCR_ADDR + 0x0000060CUL) //  32    mixed    0x00000000    DDR Calibration Start Triggers
#define DDR_REF_START_REG            (SLCR_ADDR + 0x00000614UL) //  32    mixed    0x00000000    DDR Refresh Start Triggers
#define DDR_CMD_STA_REG              (SLCR_ADDR + 0x00000618UL) //  32    mixed    0x00000000    DDR Command Store Status
#define DDR_URGENT_SEL_REG           (SLCR_ADDR + 0x0000061CUL) //  32    rw       0x00000000    DDR Urgent Select
#define DDR_DFI_STATUS_REG           (SLCR_ADDR + 0x00000620UL) //  32    mixed    0x00000000    DDR DFI status
#define MIO_PIN_00_REG               (SLCR_ADDR + 0x00000700UL) //  32    rw       0x00001601    MIO Pin 0 Control
#define MIO_PIN_01_REG               (SLCR_ADDR + 0x00000704UL) //  32    rw       0x00001601    MIO Pin 1 Control
#define MIO_PIN_02_REG               (SLCR_ADDR + 0x00000708UL) //  32    rw       0x00000601    MIO Pin 2 Control
#define MIO_PIN_03_REG               (SLCR_ADDR + 0x0000070CUL) //  32    rw       0x00000601    MIO Pin 3 Control
#define MIO_PIN_04_REG               (SLCR_ADDR + 0x00000710UL) //  32    rw       0x00000601    MIO Pin 4 Control
#define MIO_PIN_05_REG               (SLCR_ADDR + 0x00000714UL) //  32    rw       0x00000601    MIO Pin 5 Control
#define MIO_PIN_06_REG               (SLCR_ADDR + 0x00000718UL) //  32    rw       0x00000601    MIO Pin 6 Control
#define MIO_PIN_07_REG               (SLCR_ADDR + 0x0000071CUL) //  32    rw       0x00000601    MIO Pin 7 Control
#define MIO_PIN_08_REG               (SLCR_ADDR + 0x00000720UL) //  32    rw       0x00000601    MIO Pin 8 Control
#define MIO_PIN_09_REG               (SLCR_ADDR + 0x00000724UL) //  32    rw       0x00001601    MIO Pin 9 Control
#define MIO_PIN_10_REG               (SLCR_ADDR + 0x00000728UL) //  32    rw       0x00001601    MIO Pin 10 Control
#define MIO_PIN_11_REG               (SLCR_ADDR + 0x0000072CUL) //  32    rw       0x00001601    MIO Pin 11 Control
#define MIO_PIN_12_REG               (SLCR_ADDR + 0x00000730UL) //  32    rw       0x00001601    MIO Pin 12 Control
#define MIO_PIN_13_REG               (SLCR_ADDR + 0x00000734UL) //  32    rw       0x00001601    MIO Pin 13 Control
#define MIO_PIN_14_REG               (SLCR_ADDR + 0x00000738UL) //  32    rw       0x00001601    MIO Pin 14 Control
#define MIO_PIN_15_REG               (SLCR_ADDR + 0x0000073CUL) //  32    rw       0x00001601    MIO Pin 15 Control
#define MIO_PIN_16_REG               (SLCR_ADDR + 0x00000740UL) //  32    rw       0x00001601    MIO Pin 16 Control
#define MIO_PIN_17_REG               (SLCR_ADDR + 0x00000744UL) //  32    rw       0x00001601    MIO Pin 17 Control
#define MIO_PIN_18_REG               (SLCR_ADDR + 0x00000748UL) //  32    rw       0x00001601    MIO Pin 18 Control
#define MIO_PIN_19_REG               (SLCR_ADDR + 0x0000074CUL) //  32    rw       0x00001601    MIO Pin 19 Control
#define MIO_PIN_20_REG               (SLCR_ADDR + 0x00000750UL) //  32    rw       0x00001601    MIO Pin 20 Control
#define MIO_PIN_21_REG               (SLCR_ADDR + 0x00000754UL) //  32    rw       0x00001601    MIO Pin 21 Control
#define MIO_PIN_22_REG               (SLCR_ADDR + 0x00000758UL) //  32    rw       0x00001601    MIO Pin 22 Control
#define MIO_PIN_23_REG               (SLCR_ADDR + 0x0000075CUL) //  32    rw       0x00001601    MIO Pin 23 Control
#define MIO_PIN_24_REG               (SLCR_ADDR + 0x00000760UL) //  32    rw       0x00001601    MIO Pin 24 Control
#define MIO_PIN_25_REG               (SLCR_ADDR + 0x00000764UL) //  32    rw       0x00001601    MIO Pin 25 Control
#define MIO_PIN_26_REG               (SLCR_ADDR + 0x00000768UL) //  32    rw       0x00001601    MIO Pin 26 Control
#define MIO_PIN_27_REG               (SLCR_ADDR + 0x0000076CUL) //  32    rw       0x00001601    MIO Pin 27 Control
#define MIO_PIN_28_REG               (SLCR_ADDR + 0x00000770UL) //  32    rw       0x00001601    MIO Pin 28 Control
#define MIO_PIN_29_REG               (SLCR_ADDR + 0x00000774UL) //  32    rw       0x00001601    MIO Pin 29 Control
#define MIO_PIN_30_REG               (SLCR_ADDR + 0x00000778UL) //  32    rw       0x00001601    MIO Pin 30 Control
#define MIO_PIN_31_REG               (SLCR_ADDR + 0x0000077CUL) //  32    rw       0x00001601    MIO Pin 31 Control
#define MIO_PIN_32_REG               (SLCR_ADDR + 0x00000780UL) //  32    rw       0x00001601    MIO Pin 32 Control
#define MIO_PIN_33_REG               (SLCR_ADDR + 0x00000784UL) //  32    rw       0x00001601    MIO Pin 33 Control
#define MIO_PIN_34_REG               (SLCR_ADDR + 0x00000788UL) //  32    rw       0x00001601    MIO Pin 34 Control
#define MIO_PIN_35_REG               (SLCR_ADDR + 0x0000078CUL) //  32    rw       0x00001601    MIO Pin 35 Control
#define MIO_PIN_36_REG               (SLCR_ADDR + 0x00000790UL) //  32    rw       0x00001601    MIO Pin 36 Control
#define MIO_PIN_37_REG               (SLCR_ADDR + 0x00000794UL) //  32    rw       0x00001601    MIO Pin 37 Control
#define MIO_PIN_38_REG               (SLCR_ADDR + 0x00000798UL) //  32    rw       0x00001601    MIO Pin 38 Control
#define MIO_PIN_39_REG               (SLCR_ADDR + 0x0000079CUL) //  32    rw       0x00001601    MIO Pin 39 Control
#define MIO_PIN_40_REG               (SLCR_ADDR + 0x000007A0UL) //  32    rw       0x00001601    MIO Pin 40 Control
#define MIO_PIN_41_REG               (SLCR_ADDR + 0x000007A4UL) //  32    rw       0x00001601    MIO Pin 41 Control
#define MIO_PIN_42_REG               (SLCR_ADDR + 0x000007A8UL) //  32    rw       0x00001601    MIO Pin 42 Control
#define MIO_PIN_43_REG               (SLCR_ADDR + 0x000007ACUL) //  32    rw       0x00001601    MIO Pin 43 Control
#define MIO_PIN_44_REG               (SLCR_ADDR + 0x000007B0UL) //  32    rw       0x00001601    MIO Pin 44 Control
#define MIO_PIN_45_REG               (SLCR_ADDR + 0x000007B4UL) //  32    rw       0x00001601    MIO Pin 45 Control
#define MIO_PIN_46_REG               (SLCR_ADDR + 0x000007B8UL) //  32    rw       0x00001601    MIO Pin 46 Control
#define MIO_PIN_47_REG               (SLCR_ADDR + 0x000007BCUL) //  32    rw       0x00001601    MIO Pin 47 Control
#define MIO_PIN_48_REG               (SLCR_ADDR + 0x000007C0UL) //  32    rw       0x00001601    MIO Pin 48 Control
#define MIO_PIN_49_REG               (SLCR_ADDR + 0x000007C4UL) //  32    rw       0x00001601    MIO Pin 49 Control
#define MIO_PIN_50_REG               (SLCR_ADDR + 0x000007C8UL) //  32    rw       0x00001601    MIO Pin 50 Control
#define MIO_PIN_51_REG               (SLCR_ADDR + 0x000007CCUL) //  32    rw       0x00001601    MIO Pin 51 Control
#define MIO_PIN_52_REG               (SLCR_ADDR + 0x000007D0UL) //  32    rw       0x00001601    MIO Pin 52 Control
#define MIO_PIN_53_REG               (SLCR_ADDR + 0x000007D4UL) //  32    rw       0x00001601    MIO Pin 53 Control
#define MIO_LOOPBACK_REG             (SLCR_ADDR + 0x00000804UL) //  32    rw       0x00000000    Loopback function within MIO
#define MIO_MST_TRI0_REG             (SLCR_ADDR + 0x0000080CUL) //  32    rw       0xFFFFFFFF    MIO pin Tri-state Enables
#define MIO_MST_TRI1_REG             (SLCR_ADDR + 0x00000810UL) //  32    rw       0x003FFFFF    MIO pin Tri-state Enables
#define SD0_WP_CD_SEL_REG            (SLCR_ADDR + 0x00000830UL) //  32    rw       0x00000000    SDIO 0 WP CD select
#define SD1_WP_CD_SEL_REG            (SLCR_ADDR + 0x00000834UL) //  32    rw       0x00000000    SDIO 1 WP CD select
#define LVL_SHFTR_EN_REG             (SLCR_ADDR + 0x00000900UL) //  32    rw       0x00000000    Level Shifters Enable
#define OCM_CFG_REG                  (SLCR_ADDR + 0x00000910UL) //  32    rw       0x00000000    OCM Address Mapping
#define RESERVED_REG                 (SLCR_ADDR + 0x00000A1CUL) //  32    rw       0x00010101    Reserved
#define GPIOB_CTRL_REG               (SLCR_ADDR + 0x00000B00UL) //  32    rw       0x00000000    PS IO Buffer Control
#define GPIOB_CFG_CMOS18_REG         (SLCR_ADDR + 0x00000B04UL) //  32    rw       0x00000000    MIO GPIOB CMOS 1
#define GPIOB_CFG_CMOS25_REG         (SLCR_ADDR + 0x00000B08UL) //  32    rw       0x00000000    MIO GPIOB CMOS 2
#define GPIOB_CFG_CMOS33_REG         (SLCR_ADDR + 0x00000B0CUL) //  32    rw       0x00000000    MIO GPIOB CMOS 3
#define GPIOB_CFG_HSTL_REG           (SLCR_ADDR + 0x00000B14UL) //  32    rw       0x00000000    MIO GPIOB HSTL config
#define GPIOB_DRVR_BIAS_CTRL_REG     (SLCR_ADDR + 0x00000B18UL) //  32    mixed    0x00000000    MIO GPIOB Driver Bias Control
#define DDRIOB_ADDR0_REG             (SLCR_ADDR + 0x00000B40UL) //  32    rw       0x00000800    DDR IOB Config for A
#define DDRIOB_ADDR1_REG             (SLCR_ADDR + 0x00000B44UL) //  32    rw       0x00000800    DDR IOB Config for BA
#define DDRIOB_DATA0_REG             (SLCR_ADDR + 0x00000B48UL) //  32    rw       0x00000800    DDR IOB Config for Data 15
#define DDRIOB_DATA1_REG             (SLCR_ADDR + 0x00000B4CUL) //  32    rw       0x00000800    DDR IOB Config for Data 31
#define DDRIOB_DIFF0_REG             (SLCR_ADDR + 0x00000B50UL) //  32    rw       0x00000800    DDR IOB Config for DQS 1
#define DDRIOB_DIFF1_REG             (SLCR_ADDR + 0x00000B54UL) //  32    rw       0x00000800    DDR IOB Config for DQS 3
#define DDRIOB_CLOCK_REG             (SLCR_ADDR + 0x00000B58UL) //  32    rw       0x00000800    DDR IOB Config for Clock Output
#define DDRIOB_DRIVE_SLEW_ADDR_REG   (SLCR_ADDR + 0x00000B5CUL) //  32    rw       0x00000000    Drive and Slew controls for Address and Command pins of the DDR Interface
#define DDRIOB_DRIVE_SLEW_DATA_REG   (SLCR_ADDR + 0x00000B60UL) //  32    rw       0x00000000    Drive and Slew controls for DQ pins of the DDR Interface
#define DDRIOB_DRIVE_SLEW_DIFF_REG   (SLCR_ADDR + 0x00000B64UL) //  32    rw       0x00000000    Drive and Slew controls for DQS pins of the DDR Interface
#define DDRIOB_DRIVE_SLEW_CLOCK_REG  (SLCR_ADDR + 0x00000B68UL) //  32    rw       0x00000000    Drive and Slew controls for Clock pins of the DDR Interface
#define DDRIOB_DDR_CTRL_REG          (SLCR_ADDR + 0x00000B6CUL) //  32    rw       0x00000000    DDR IOB Buffer Control
#define DDRIOB_DCI_CTRL_REG          (SLCR_ADDR + 0x00000B70UL) //  32    rw       0x00000020    DDR IOB DCI Config
#define DDRIOB_DCI_STATUS_REG        (SLCR_ADDR + 0x00000B74UL) //  32    mixed    0x00000000    DDR IO Buffer DCI Status
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (SLCR) SLCR_SCL
//
// Name                    SCL_REG
// Relative Address        0x00000000
// Absolute Address        0xF8000000
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Secure Configuration Lock
//
// Register SCL_REG Details
//
// RESERVED                                    Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define SLCR_SCL_LOCK_MASK  0x00000001UL    // Secure configuration lock for these slcr registers:
#define SLCR_SCL_LOCK_BPOS  0UL             // SCL, PSS_RST_CTRL, APU_CTRL, and
                                            // WDT_CLK_SEL.
                                            // Read:
                                            // 0: unlocked, Secure writes to secure configuration
                                            // registers are enabled.
                                            // 1: locked, all writes to secure configuration
                                            // registers are ignored.
                                            // Write:
                                            // 0: noaffect.
                                            // 1: lock the secure configuration registers.
                                            // Once the secure registers are locked, they remain
                                            // locked until a power-on reset cycle (PS_POR_B).


//------------------------------------------------------------------------------
//
// Register (SLCR) SLCR_LOCK
//
// Name                    SLCR_LOCK_REG
// Relative Address        0x00000004
// Absolute Address        0xF8000004
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             SLCR Write Protection Lock
//
// Register SLCR_LOCK_REG Details
//
// RESERVED                                         Properties: Bits: 31:16, Type: wo, Reset Value: 0x0

                                                 // Properties: Bits: 15:0, Type: wo, Reset Value: 0x0
#define SLCR_LOCK_LOCK_KEY_MASK  0x0000FFFFUL    // Write the lock key, 0x767B, to write protect the slcr
#define SLCR_LOCK_LOCK_KEY_BPOS  0UL             // registers: all slcr registers, 0xF800_0000 to
                                                 // 0xF800_0B74, are write protected until the unlock
                                                 // key is written to the SLCR_UNLOCK register. A
                                                 // read of this register returns zero.


//------------------------------------------------------------------------------
//
// Register (SLCR) SLCR_UNLOCK
//
// Name                    SLCR_UNLOCK_REG
// Relative Address        0x00000008
// Absolute Address        0xF8000008
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             SLCR Write Protection Unlock
//
// Register SLCR_UNLOCK_REG Details
//
// RESERVED                                             Properties: Bits: 31:16, Type: wo, Reset Value: 0x0

                                                     // Properties: Bits: 15:0, Type: wo, Reset Value: 0x0
#define SLCR_UNLOCK_UNLOCK_KEY_MASK  0x0000FFFFUL    // Write the unlock key, 0xDF0D, to enable writes to
#define SLCR_UNLOCK_UNLOCK_KEY_BPOS  0UL             // the slcr registers. All slcr registers, 0xF800_0000 to
                                                     // 0xF800_0B74, are writeable until locked using the
                                                     // SLCR_LOCK register. A read of this register
                                                     // returns zero.


//------------------------------------------------------------------------------
//
// Register (SLCR) SLCR_LOCKSTA
//
// Name                    SLCR_LOCKSTA_REG
// Relative Address        0x0000000C
// Absolute Address        0xF800000C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000001
// Description             SLCR Write Protection Status
//
// Register SLCR_LOCKSTA_REG Details
//
// RESERVED                                               Properties: Bits: 31:1, Type: ro, Reset Value: 0x0

                                                       // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define SLCR_LOCKSTA_LOCK_STATUS_MASK  0x00000001UL    // Current state of write protection mode of SLCR:
#define SLCR_LOCKSTA_LOCK_STATUS_BPOS  0UL             // : Registers are writeable. Use the
                                                       // lcr.SLCR_LOCK register to lock the slcr registers.
                                                       // : Registers are not writeable.
                                                       // ny attempt to write to an slcr register is ignored,
                                                       // ut reads will return valid register values.
                                                       // se the slcr.SLCR_UNLOCK register to unlock
                                                       // he slcr registers.


//------------------------------------------------------------------------------
//
// Register (SLCR) ARM_PLL_CTRL
//
// Name                    ARM_PLL_CTRL_REG
// Relative Address        0x00000100
// Absolute Address        0xF8000100
// Width                   32 bits
// Access Type             rw
// Reset Value             0x0001A008
// Description             ARM PLL Control
//
// Register ARM_PLL_CTRL_REG Details
//
// RESERVED                                                    Properties: Bits: 31:19, Type: rw, Reset Value: 0x0

                                                            // Properties: Bits: 18:12, Type: rw, Reset Value: 0x1A
#define ARM_PLL_CTRL_PLL_FDIV_MASK          0x0007F000UL    // Provide the feedback divisor for the PLL. Note:
#define ARM_PLL_CTRL_PLL_FDIV_BPOS          12UL            // Before changing this value, the PLL must first be
                                                            // bypassed and then put into reset mode. Refer to
                                                            // the Zynq-7000 TRM, UG585, Clocks chapter for
                                                            // CP/RES/CNT values for the PLL.

// RESERVED                                                    Properties: Bits: 11:5, Type: rw, Reset Value: 0x0

                                                            // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define ARM_PLL_CTRL_PLL_BYPASS_FORCE_MASK  0x00000010UL    // ARM PLL Bypass override control:
#define ARM_PLL_CTRL_PLL_BYPASS_FORCE_BPOS  4UL             // PLL_BYPASS_QUAL = 0:
                                                            // 0: enabled, not bypassed.
                                                            // 1: bypassed.
                                                            // PLL_BYPASS_QUAL = 1 (QUAL bit default
                                                            // value):
                                                            // 0: PLL mode is set based on pin strap setting.
                                                            // 1: PLL bypassed regardless of the pin strapping.

                                                            // Properties: Bit: 3, Type: rw, Reset Value: 0x1
#define ARM_PLL_CTRL_PLL_BYPASS_QUAL_MASK   0x00000008UL    // Select the source for the ARM PLL Bypass
#define ARM_PLL_CTRL_PLL_BYPASS_QUAL_BPOS   3UL             // Control:
                                                            // 0: controlled by the PLL_BYPASS_FORCE bit, bit
                                                            // 4.
                                                            // 1: controlled by the value of the sampled
                                                            // BOOT_MODE pin strapping resistor
                                                            // PLL_BYPASS. This can be read using the
                                                            // BOOT_MODE[4] bit.

// RESERVED                                                    Properties: Bit: 2, Type: rw, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define ARM_PLL_CTRL_PLL_PWRDWN_MASK        0x00000002UL    // PLL Power-down control:
#define ARM_PLL_CTRL_PLL_PWRDWN_BPOS        1UL             // 0: PLL powered up
                                                            // 1: PLL powered down

                                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define ARM_PLL_CTRL_PLL_RESET_MASK         0x00000001UL    // PLL reset control:
#define ARM_PLL_CTRL_PLL_RESET_BPOS         0UL             // 0: de-assert (PLL operating)
                                                            // 1: assert (PLL held in reset)


//------------------------------------------------------------------------------
//
// Register (SLCR) DDR_PLL_CTRL
//
// Name                    DDR_PLL_CTRL_REG
// Relative Address        0x00000104
// Absolute Address        0xF8000104
// Width                   32 bits
// Access Type             rw
// Reset Value             0x0001A008
// Description             DDR PLL Control
//
// Register DDR_PLL_CTRL_REG Details
//
// RESERVED                                                    Properties: Bits: 31:19, Type: rw, Reset Value: 0x0

                                                            // Properties: Bits: 18:12, Type: rw, Reset Value: 0x1A
#define DDR_PLL_CTRL_PLL_FDIV_MASK          0x0007F000UL    // Provide the feedback divisor for the PLL. Note:
#define DDR_PLL_CTRL_PLL_FDIV_BPOS          12UL            // Before changing this value, the PLL must first be
                                                            // bypassed and then put into reset mode. Refer to
                                                            // the Zynq-7000 TRM, UG585, Clocks chapter for
                                                            // CP/RES/CNT values for the PLL.

// RESERVED                                                    Properties: Bits: 11:5, Type: rw, Reset Value: 0x0

                                                            // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define DDR_PLL_CTRL_PLL_BYPASS_FORCE_MASK  0x00000010UL    // DDR PLL Bypass override control:
#define DDR_PLL_CTRL_PLL_BYPASS_FORCE_BPOS  4UL             // PLL_BYPASS_QUAL = 0
                                                            // 0: enabled, not bypassed.
                                                            // 1: bypassed.
                                                            // PLL_BYPASS_QUAL = 1 (QUAL bit default
                                                            // value)
                                                            // 0: PLL mode is set based on pin strap setting.
                                                            // 1: PLL bypass is enabled regardless of the pin
                                                            // strapping.

                                                            // Properties: Bit: 3, Type: rw, Reset Value: 0x1
#define DDR_PLL_CTRL_PLL_BYPASS_QUAL_MASK   0x00000008UL    // Select the source for the DDR PLL Bypass:
#define DDR_PLL_CTRL_PLL_BYPASS_QUAL_BPOS   3UL             // 0: controlled by the PLL_BYPASS_FORCE bit.
                                                            // 1: controlled by the value of the sampled
                                                            // BOOT_MODE pin strapping resistor
                                                            // PLL_BYPASS. This can be read using the
                                                            // slcr.BOOT_MODE[4] bit.

// RESERVED                                                    Properties: Bit: 2, Type: rw, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define DDR_PLL_CTRL_PLL_PWRDWN_MASK        0x00000002UL    // PLL Power-down control:
#define DDR_PLL_CTRL_PLL_PWRDWN_BPOS        1UL             // 0: PLL powered up
                                                            // 1: PLL powered down

                                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define DDR_PLL_CTRL_PLL_RESET_MASK         0x00000001UL    // PLL reset control:
#define DDR_PLL_CTRL_PLL_RESET_BPOS         0UL             // 0: de-assert (PLL operating)
                                                            // 1: assert (PLL held in reset)


//------------------------------------------------------------------------------
//
// Register (SLCR) IO_PLL_CTRL
//
// Name                    IO_PLL_CTRL_REG
// Relative Address        0x00000108
// Absolute Address        0xF8000108
// Width                   32 bits
// Access Type             rw
// Reset Value             0x0001A008
// Description             IO PLL Control
//
// Register IO_PLL_CTRL_REG Details
//
// RESERVED                                                   Properties: Bits: 31:19, Type: rw, Reset Value: 0x0

                                                           // Properties: Bits: 18:12, Type: rw, Reset Value: 0x1A
#define IO_PLL_CTRL_PLL_FDIV_MASK          0x0007F000UL    // Provide the feedback divisor for the PLL. Note:
#define IO_PLL_CTRL_PLL_FDIV_BPOS          12UL            // Before changing this value, the PLL must first be
                                                           // bypassed and then put into reset mode. Refer to
                                                           // the Zynq-7000 TRM, UG585, Clocks chapter for
                                                           // CP/RES/CNT values for programming the PLL.

// RESERVED                                                   Properties: Bits: 11:5, Type: rw, Reset Value: 0x0

                                                           // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define IO_PLL_CTRL_PLL_BYPASS_FORCE_MASK  0x00000010UL    // IO PLL Bypass override control:
#define IO_PLL_CTRL_PLL_BYPASS_FORCE_BPOS  4UL             // LL_BYPASS_QUAL = 0
                                                           // : enabled, not bypassed.
                                                           // : bypassed.
                                                           // LL_BYPASS_QUAL = 1 (QUAL bit default
                                                           // alue)
                                                           // : PLL mode is set based on pin strap setting.
                                                           // : PLL bypass is enabled regardless of the pin
                                                           // trapping.

                                                           // Properties: Bit: 3, Type: rw, Reset Value: 0x1
#define IO_PLL_CTRL_PLL_BYPASS_QUAL_MASK   0x00000008UL    // Select the source for the IO PLL Bypass:
#define IO_PLL_CTRL_PLL_BYPASS_QUAL_BPOS   3UL             // : controlled by the PLL_BYPASS_FORCE bit.
                                                           // : controlled by the value of the sampled
                                                           // OOT_MODE pin strapping resistor
                                                           // LL_BYPASS. This can be read using the
                                                           // lcr.BOOT_MODE[4] bit.

// RESERVED                                                   Properties: Bit: 2, Type: rw, Reset Value: 0x0

                                                           // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define IO_PLL_CTRL_PLL_PWRDWN_MASK        0x00000002UL    // PLL Power-down control:
#define IO_PLL_CTRL_PLL_PWRDWN_BPOS        1UL             // 0: PLL powered up
                                                           // 1: PLL powered down

                                                           // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define IO_PLL_CTRL_PLL_RESET_MASK         0x00000001UL    // PLL Reset control:
#define IO_PLL_CTRL_PLL_RESET_BPOS         0UL             // 0: de-assert (PLL operating)
                                                           // 1: assert (PLL held in reset)


//------------------------------------------------------------------------------
//
// Register (SLCR) PLL_STATUS
//
// Name                     PLL_STATUS_REG
// Relative Address         0x0000010C
// Absolute Address         0xF800010C
// Width                    32 bits
// Access Type              ro
// Reset Value              0x0000003F
// Description               PLL Status
//
// Register PLL_STATUS_REG Details
//         Note: Reset condition is actually 0, but will read a 1 by the time this register can be read by software if PLLs
//         are enabled by BOOT_MODE.
//
// RESERVED                                                Properties: Bits: 31:6, Type: ro, Reset Value: 0x0

                                                        // Properties: Bit: 5, Type: ro, Reset Value: 0x1
#define PLL_STATUS_IO_PLL_STABLE_MASK   0x00000020UL    // IO PLL clock stable status:
#define PLL_STATUS_IO_PLL_STABLE_BPOS   5UL             // 0: not locked and not in bypass
                                                        // 1: locked or bypassed

                                                        // Properties: Bit: 4, Type: ro, Reset Value: 0x1
#define PLL_STATUS_DDR_PLL_STABLE_MASK  0x00000010UL    // DDR PLL clock stable status:
#define PLL_STATUS_DDR_PLL_STABLE_BPOS  4UL             // 0: not locked and not in bypass
                                                        // 1: locked or bypassed

                                                        // Properties: Bit: 3, Type: ro, Reset Value: 0x1
#define PLL_STATUS_ARM_PLL_STABLE_MASK  0x00000008UL    // ARM PLL clock stable status:
#define PLL_STATUS_ARM_PLL_STABLE_BPOS  3UL             // 0: not locked and not in bypass
                                                        // 1: locked or bypassed

                                                        // Properties: Bit: 2, Type: ro, Reset Value: 0x1
#define PLL_STATUS_IO_PLL_LOCK_MASK     0x00000004UL    // IO PLL lock status:
#define PLL_STATUS_IO_PLL_LOCK_BPOS     2UL             // 0: not locked, 1: locked

                                                        // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define PLL_STATUS_DDR_PLL_LOCK_MASK    0x00000002UL    // DDR PLL lock status:
#define PLL_STATUS_DDR_PLL_LOCK_BPOS    1UL             // 0: not locked, 1: locked

                                                        // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define PLL_STATUS_ARM_PLL_LOCK_MASK    0x00000001UL    // ARM PLL lock status:
#define PLL_STATUS_ARM_PLL_LOCK_BPOS    0UL             // 0: not locked, 1: locked


//------------------------------------------------------------------------------
//
// Register (SLCR) ARM_PLL_CFG
//
// Name                     ARM_PLL_CFG_REG
// Relative Address          0x00000110
// Absolute Address         0xF8000110
// Width                    32 bits
// Access Type              rw
// Reset Value             0x00177EA0
// Description             ARM PLL Configuration
//
// Register ARM_PLL_CFG_REG Details
//
// RESERVED                                           Properties: Bits: 31:22, Type: rw, Reset Value: 0x0

                                                   // Properties: Bits: 21:12, Type: rw, Reset Value: 0x177
#define ARM_PLL_CFG_LOCK_CNT_MASK  0x003FF000UL    // Drive the LOCK_CNT[9:0] input of the PLL to set
#define ARM_PLL_CFG_LOCK_CNT_BPOS  12UL            // the number of clock cycles the PLL needs to have
                                                   // clkref and clkfb aligned with a certain window
                                                   // before syaing locked.

                                                   // Properties: Bits: 11:8, Type: rw, Reset Value: 0xE
#define ARM_PLL_CFG_PLL_CP_MASK    0x00000F00UL    // Drive the PLL_CP[3:0] input of the PLL to set the
#define ARM_PLL_CFG_PLL_CP_BPOS    8UL             // PLL charge pump control

                                                   // Properties: Bits: 7:4, Type: rw, Reset Value: 0xA
#define ARM_PLL_CFG_PLL_RES_MASK   0x000000F0UL    // Drive the PLL_RES[3:0] input of the PLL to set the
#define ARM_PLL_CFG_PLL_RES_BPOS   4UL             // PLL loop filter resistor control

// RESERVED                                           Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDR_PLL_CFG
//
// Name                    DDR_PLL_CFG_REG
// Relative Address        0x00000114
// Absolute Address        0xF8000114
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00177EA0
// Description             DDR PLL Configuration
//
// Register DDR_PLL_CFG_REG Details
//
// RESERVED                                           Properties: Bits: 31:22, Type: rw, Reset Value: 0x0

                                                   // Properties: Bits: 21:12, Type: rw, Reset Value: 0x177
#define DDR_PLL_CFG_LOCK_CNT_MASK  0x003FF000UL    // Drive the LOCK_CNT[9:0] input of the PLL to set
#define DDR_PLL_CFG_LOCK_CNT_BPOS  12UL            // the number of clock cycles the PLL needs to have
                                                   // clkref and clkfb aligned with a certain window
                                                   // before staying locked.

                                                   // Properties: Bits: 11:8, Type: rw, Reset Value: 0xE
#define DDR_PLL_CFG_PLL_CP_MASK    0x00000F00UL    // Drive the PLL_CP[3:0] input of the PLL to set the
#define DDR_PLL_CFG_PLL_CP_BPOS    8UL             // PLL charge pump control.

                                                   // Properties: Bits: 7:4, Type: rw, Reset Value: 0xA
#define DDR_PLL_CFG_PLL_RES_MASK   0x000000F0UL    // Drive the PLL_RES[3:0] input of the PLL to set the
#define DDR_PLL_CFG_PLL_RES_BPOS   4UL             // PLL loop filter resistor control.

// RESERVED                                           Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) IO_PLL_CFG
//
// Name                    IO_PLL_CFG_REG
// Relative Address        0x00000118
// Absolute Address        0xF8000118
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00177EA0
// Description             IO PLL Configuration
//
// Register IO_PLL_CFG_REG Details
//
// RESERVED                                          Properties: Bits: 31:22, Type: rw, Reset Value: 0x0

                                                  // Properties: Bits: 21:12, Type: rw, Reset Value: 0x177
#define IO_PLL_CFG_LOCK_CNT_MASK  0x003FF000UL    // Drive the LOCK_CNT[9:0] input of the PLL to set
#define IO_PLL_CFG_LOCK_CNT_BPOS  12UL            // the number of clock cycles the PLL needs to have
                                                  // clkref and clkfb aligned with a certain window
                                                  // before staying locked.

                                                  // Properties: Bits: 11:8, Type: rw, Reset Value: 0xE
#define IO_PLL_CFG_PLL_CP_MASK    0x00000F00UL    // Drive the PLL_CP[3:0] input of the PLL to set the
#define IO_PLL_CFG_PLL_CP_BPOS    8UL             // PLL charge pump control.

                                                  // Properties: Bits: 7:4, Type: rw, Reset Value: 0xA
#define IO_PLL_CFG_PLL_RES_MASK   0x000000F0UL    // Drive the PLL_RES[3:0] input of the PLL to set the
#define IO_PLL_CFG_PLL_RES_BPOS   4UL             // PLL loop filter resistor control.

// RESERVED                                          Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) ARM_CLK_CTRL
//
// Name                    ARM_CLK_CTRL_REG
// Relative Address        0x00000120
// Absolute Address        0xF8000120
// Width                   32 bits
// Access Type             rw
// Reset Value             0x1F000400
// Description             CPU Clock Control
//
// Register ARM_CLK_CTRL_REG Details
//
// RESERVED                                                   Properties: Bits: 31:29, Type: rw, Reset Value: 0x0

                                                           // Properties: Bit: 28, Type: rw, Reset Value: 0x1
#define ARM_CLK_CTRL_CPU_PERI_CLKACT_MASK  0x10000000UL    // Clock active:
#define ARM_CLK_CTRL_CPU_PERI_CLKACT_BPOS  28UL            // : Clock is disabled
                                                           // : Clock is enabled

                                                           // Properties: Bit: 27, Type: rw, Reset Value: 0x1
#define ARM_CLK_CTRL_CPU_1XCLKACT_MASK     0x08000000UL    // CPU_1x Clock control:
#define ARM_CLK_CTRL_CPU_1XCLKACT_BPOS     27UL            // 0: disable, 1: enable

                                                           // Properties: Bit: 26, Type: rw, Reset Value: 0x1
#define ARM_CLK_CTRL_CPU_2XCLKACT_MASK     0x04000000UL    // CPU_2x Clock control:
#define ARM_CLK_CTRL_CPU_2XCLKACT_BPOS     26UL            // 0: disable, 1: enable

                                                           // Properties: Bit: 25, Type: rw, Reset Value: 0x1
#define ARM_CLK_CTRL_CPU_3OR2XCLKACT_MASK  0x02000000UL    // CPU_3x2x Clock control:
#define ARM_CLK_CTRL_CPU_3OR2XCLKACT_BPOS  25UL            // 0: disable, 1: enable

                                                           // Properties: Bit: 24, Type: rw, Reset Value: 0x1
#define ARM_CLK_CTRL_CPU_6OR4XCLKACT_MASK  0x01000000UL    // CPU_6x4x Clock control:
#define ARM_CLK_CTRL_CPU_6OR4XCLKACT_BPOS  24UL            // 0: disable, 1: enable

// RESERVED                                                   Properties: Bits: 23:14, Type: rw, Reset Value: 0x0

                                                           // Properties: Bits: 13:8, Type: rw, Reset Value: 0x4
#define ARM_CLK_CTRL_DIVISOR_MASK          0x00003F00UL    // Frequency divisor for the CPU clock source.
#define ARM_CLK_CTRL_DIVISOR_BPOS          8UL             // (When PLL is being used, 1&3 are illegal values)

// RESERVED                                                   Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                           // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
#define ARM_CLK_CTRL_SRCSEL_MASK           0x00000030UL    // Select the source used to generate the CPU clock:
#define ARM_CLK_CTRL_SRCSEL_BPOS           4UL             // 0x: ARM PLL
                                                           // 10: DDR PLL
                                                           // 11: IO PLL
                                                           // This field is reset by POR only.

// RESERVED                                                   Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDR_CLK_CTRL
//
// Name                    DDR_CLK_CTRL_REG
// Relative Address        0x00000124
// Absolute Address        0xF8000124
// Width                   32 bits
// Access Type             rw
// Reset Value             0x18400003
// Description             DDR Clock Control
//
// Register DDR_CLK_CTRL_REG Details
//         Note: the DDR_3x and DDR_2x clocks are asynchronous to each other and without a fixed frequency ratio.
//         The frequency of each DDR clock is independently programed. Generally, the DDR_3x clock runs faster
//         than the DDR2x clock.
//
                                                             // Properties: Bits: 31:26, Type: rw, Reset Value: 0x6
#define DDR_CLK_CTRL_DDR_2XCLK_DIVISOR_MASK  0xFC000000UL    // Frequency divisor for the ddr_2x clock
#define DDR_CLK_CTRL_DDR_2XCLK_DIVISOR_BPOS  26UL            // 

                                                             // Properties: Bits: 25:20, Type: rw, Reset Value: 0x4
#define DDR_CLK_CTRL_DDR_3XCLK_DIVISOR_MASK  0x03F00000UL    // Frequency divisor for the ddr_3x clock. (Only
#define DDR_CLK_CTRL_DDR_3XCLK_DIVISOR_BPOS  20UL            // even divisors are allowed)

// RESERVED                                                     Properties: Bits: 19:2, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 1, Type: rw, Reset Value: 0x1
#define DDR_CLK_CTRL_DDR_2XCLKACT_MASK       0x00000002UL    // DDR_2x Clock control:
#define DDR_CLK_CTRL_DDR_2XCLKACT_BPOS       1UL             // 0: disable, 1: enable

                                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define DDR_CLK_CTRL_DDR_3XCLKACT_MASK       0x00000001UL    // DDR_3x Clock control:
#define DDR_CLK_CTRL_DDR_3XCLKACT_BPOS       0UL             // 0: disable, 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) DCI_CLK_CTRL
//
// Name                    DCI_CLK_CTRL_REG
// Relative Address        0x00000128
// Absolute Address        0xF8000128
// Width                   32 bits
// Access Type             rw
// Reset Value             0x01E03201
// Description             DCI clock control
//
// Register DCI_CLK_CTRL_REG Details
//
// RESERVED                                            Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 25:20, Type: rw, Reset Value: 0x1E
#define DCI_CLK_CTRL_DIVISOR1_MASK  0x03F00000UL    // Provides the divisor used to divide the source
#define DCI_CLK_CTRL_DIVISOR1_BPOS  20UL            // clock to generate the required generated clock
                                                    // frequency. Second cascade divider

// RESERVED                                            Properties: Bits: 19:14, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 13:8, Type: rw, Reset Value: 0x32
#define DCI_CLK_CTRL_DIVISOR0_MASK  0x00003F00UL    // Provides the divisor used to divide the source
#define DCI_CLK_CTRL_DIVISOR0_BPOS  8UL             // clock to generate the required generated clock
                                                    // frequency.

// RESERVED                                            Properties: Bits: 7:1, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define DCI_CLK_CTRL_CLKACT_MASK    0x00000001UL    // DCI clock control
#define DCI_CLK_CTRL_CLKACT_BPOS    0UL             // 0: Disable
                                                    // 1: Enable


//------------------------------------------------------------------------------
//
// Register (SLCR) APER_CLK_CTRL
//
// Name                    APER_CLK_CTRL_REG
// Relative Address        0x0000012C
// Absolute Address        0xF800012C
// Width                   32 bits
// Access Type              rw
// Reset Value              0x01FFCCCD
// Description              AMBA Peripheral Clock Control
//
// Register APER_CLK_CTRL_REG Details
//         Please note that these clocks must be enabled if you want to read from the peripheral register space.
//
// RESERVED                                                       Properties: Bits: 31:25, Type: rw, Reset Value: 0x0

                                                               // Properties: Bit: 24, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_SMC_CPU_1XCLKACT_MASK    0x01000000UL    // SMC AMBA Clock control
#define APER_CLK_CTRL_SMC_CPU_1XCLKACT_BPOS    24UL            // 0: disable, 1: enable

                                                               // Properties: Bit: 23, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_LQSPI_CPU_1XCLKACT_MASK  0x00800000UL    // Quad SPI AMBA Clock control
#define APER_CLK_CTRL_LQSPI_CPU_1XCLKACT_BPOS  23UL            // 0: disable, 1: enable

                                                               // Properties: Bit: 22, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_GPIO_CPU_1XCLKACT_MASK   0x00400000UL    // GPIO AMBA Clock control
#define APER_CLK_CTRL_GPIO_CPU_1XCLKACT_BPOS   22UL            // 0: disable, 1: enable

                                                               // Properties: Bit: 21, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_UART1_CPU_1XCLKACT_MASK  0x00200000UL    // UART 1 AMBA Clock control
#define APER_CLK_CTRL_UART1_CPU_1XCLKACT_BPOS  21UL            // 0: disable, 1: enable

                                                               // Properties: Bit: 20, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_UART0_CPU_1XCLKACT_MASK  0x00100000UL    // UART 0 AMBA Clock control
#define APER_CLK_CTRL_UART0_CPU_1XCLKACT_BPOS  20UL            // 0: disable, 1: enable

                                                               // Properties: Bit: 19, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_I2C1_CPU_1XCLKACT_MASK   0x00080000UL    // I2C 1 AMBA Clock control
#define APER_CLK_CTRL_I2C1_CPU_1XCLKACT_BPOS   19UL            // 0: disable, 1: enable

                                                               // Properties: Bit: 18, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_I2C0_CPU_1XCLKACT_MASK   0x00040000UL    // I2C 0 AMBA Clock control
#define APER_CLK_CTRL_I2C0_CPU_1XCLKACT_BPOS   18UL            // 0: disable, 1: enable

                                                               // Properties: Bit: 17, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_CAN1_CPU_1XCLKACT_MASK   0x00020000UL    // CAN 1 AMBA Clock control
#define APER_CLK_CTRL_CAN1_CPU_1XCLKACT_BPOS   17UL            // 0: disable, 1: enable

                                                               // Properties: Bit: 16, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_CAN0_CPU_1XCLKACT_MASK   0x00010000UL    // CAN 0 AMBA Clock control
#define APER_CLK_CTRL_CAN0_CPU_1XCLKACT_BPOS   16UL            // 0: disable, 1: enable

                                                               // Properties: Bit: 15, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_SPI1_CPU_1XCLKACT_MASK   0x00008000UL    // SPI 1 AMBA Clock control
#define APER_CLK_CTRL_SPI1_CPU_1XCLKACT_BPOS   15UL            // 0: disable, 1: enable

                                                               // Properties: Bit: 14, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_SPI0_CPU_1XCLKACT_MASK   0x00004000UL    // SPI 0 AMBA Clock control
#define APER_CLK_CTRL_SPI0_CPU_1XCLKACT_BPOS   14UL            // 0: disable, 1: enable

// RESERVED                                                       Properties: Bit: 13, Type: rw, Reset Value: 0x0

// RESERVED                                                       Properties: Bit: 12, Type: rw, Reset Value: 0x0

                                                               // Properties: Bit: 11, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_SDI1_CPU_1XCLKACT_MASK   0x00000800UL    // SDIO controller 1 AMBA Clock control
#define APER_CLK_CTRL_SDI1_CPU_1XCLKACT_BPOS   11UL            // 0: disable, 1: enable

                                                               // Properties: Bit: 10, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_SDI0_CPU_1XCLKACT_MASK   0x00000400UL    // SDIO controller 0 AMBA Clock
#define APER_CLK_CTRL_SDI0_CPU_1XCLKACT_BPOS   10UL            // 0: disable,
                                                               // 1: enable

// RESERVED                                                       Properties: Bit: 9, Type: rw, Reset Value: 0x0

// RESERVED                                                       Properties: Bit: 8, Type: rw, Reset Value: 0x0

                                                               // Properties: Bit: 7, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_GEM1_CPU_1XCLKACT_MASK   0x00000080UL    // Gigabit Ethernet 1 AMBA Clock control
#define APER_CLK_CTRL_GEM1_CPU_1XCLKACT_BPOS   7UL             // 0: disable, 1: enable

                                                               // Properties: Bit: 6, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_GEM0_CPU_1XCLKACT_MASK   0x00000040UL    // Gigabit Ethernet 0 AMBA Clock control
#define APER_CLK_CTRL_GEM0_CPU_1XCLKACT_BPOS   6UL             // 0: disable, 1: enable

// RESERVED                                                       Properties: Bit: 5, Type: rw, Reset Value: 0x0

// RESERVED                                                       Properties: Bit: 4, Type: rw, Reset Value: 0x0

                                                               // Properties: Bit: 3, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_USB1_CPU_1XCLKACT_MASK   0x00000008UL    // USB controller 1 AMBA Clock control
#define APER_CLK_CTRL_USB1_CPU_1XCLKACT_BPOS   3UL             // 0: disable, 1: enable

                                                               // Properties: Bit: 2, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_USB0_CPU_1XCLKACT_MASK   0x00000004UL    // USB controller 0 AMBA Clock control
#define APER_CLK_CTRL_USB0_CPU_1XCLKACT_BPOS   2UL             // 0: disable, 1: enable

// RESERVED                                                       Properties: Bit: 1, Type: rw, Reset Value: 0x0

                                                               // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define APER_CLK_CTRL_DMA_CPU_2XCLKACT_MASK    0x00000001UL    // DMA controller AMBA Clock control
#define APER_CLK_CTRL_DMA_CPU_2XCLKACT_BPOS    0UL             // 0: disable, 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) USB0_CLK_CTRL
//
// Name                    USB0_CLK_CTRL_REG
// Relative Address        0x00000130
// Absolute Address        0xF8000130
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00101941
// Description             USB 0 ULPI Clock Control
//
// Register USB0_CLK_CTRL_REG Details
//
// RESERVED                                           Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

// RESERVED                                           Properties: Bits: 25:20, Type: rw, Reset Value: 0x1

// RESERVED                                           Properties: Bits: 19:14, Type: rw, Reset Value: 0x0

// RESERVED                                           Properties: Bits: 13:8, Type: rw, Reset Value: 0x19

// RESERVED                                           Properties: Bit: 7, Type: rw, Reset Value: 0x0

                                                   // Properties: Bits: 6:4, Type: rw, Reset Value: 0x4
#define USB0_CLK_CTRL_SRCSEL_MASK  0x00000070UL    // Select the source to generate USB controller 0
#define USB0_CLK_CTRL_SRCSEL_BPOS  4UL             // ULPI clock:
                                                   // 1xx: USB 0 MIO ULPI clock (top level MIO ULPI
                                                   // clock is an input)

// RESERVED                                           Properties: Bits: 3:1, Type: rw, Reset Value: 0x0

// RESERVED                                           Properties: Bit: 0, Type: rw, Reset Value: 0x1


//------------------------------------------------------------------------------
//
// Register (SLCR) USB1_CLK_CTRL
//
// Name                    USB1_CLK_CTRL_REG
// Relative Address        0x00000134
// Absolute Address        0xF8000134
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00101941
// Description             USB 1 ULPI Clock Control
//
// Register USB1_CLK_CTRL_REG Details
//
// RESERVED                                           Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

// RESERVED                                           Properties: Bits: 25:20, Type: rw, Reset Value: 0x1

// RESERVED                                           Properties: Bits: 19:14, Type: rw, Reset Value: 0x0

// RESERVED                                           Properties: Bits: 13:8, Type: rw, Reset Value: 0x19

// RESERVED                                           Properties: Bit: 7, Type: rw, Reset Value: 0x0

                                                   // Properties: Bits: 6:4, Type: rw, Reset Value: 0x4
#define USB1_CLK_CTRL_SRCSEL_MASK  0x00000070UL    // Select the source to generate USB controller 1
#define USB1_CLK_CTRL_SRCSEL_BPOS  4UL             // ULPI clock:
                                                   // 1xx: USB 1 MIO ULPI clock (top level MIO ULPI
                                                   // clock is an input)

// RESERVED                                           Properties: Bits: 3:1, Type: rw, Reset Value: 0x0

// RESERVED                                           Properties: Bit: 0, Type: rw, Reset Value: 0x1


//------------------------------------------------------------------------------
//
// Register (SLCR) GEM0_RCLK_CTRL
//
// Name                    GEM0_RCLK_CTRL_REG_REG
// Relative Address        0x00000138
// Absolute Address        0xF8000138
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000001
// Description             GigE 0 Rx Clock and Rx Signals Select
//
// Register GEM0_RCLK_CTRL_REG_REG Details
//
// RESERVED                                            Properties: Bits: 31:5, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define GEM0_RCLK_CTRL_SRCSEL_MASK  0x00000010UL    // Select the source of the Rx clock, control and data
#define GEM0_RCLK_CTRL_SRCSEL_BPOS  4UL             // signals:
                                                    // 0: MIO
                                                    // 1: EMIO

// RESERVED                                            Properties: Bits: 3:1, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define GEM0_RCLK_CTRL_CLKACT_MASK  0x00000001UL    // Ethernet Controler 0 Rx Clock control
#define GEM0_RCLK_CTRL_CLKACT_BPOS  0UL             // 0: disable, 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) GEM1_RCLK_CTRL
//
// Name                    GEM1_RCLK_CTRL_REG_REG
// Relative Address        0x0000013C
// Absolute Address        0xF800013C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000001
// Description             GigE 1 Rx Clock and Rx Signals Select
//
// Register GEM1_RCLK_CTRL_REG_REG Details
//
// RESERVED                                            Properties: Bits: 31:5, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define GEM1_RCLK_CTRL_SRCSEL_MASK  0x00000010UL    // Select the source of the Rx clock, control and data
#define GEM1_RCLK_CTRL_SRCSEL_BPOS  4UL             // signals:
                                                    // 0: MIO
                                                    // 1: EMIO

// RESERVED                                            Properties: Bits: 3:1, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define GEM1_RCLK_CTRL_CLKACT_MASK  0x00000001UL    // Ethernet Controller 1 Rx Clock control
#define GEM1_RCLK_CTRL_CLKACT_BPOS  0UL             // 0: disable, 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) GEM0_CLK_CTRL
//
// Name                    GEM0_CLK_CTRL_REG_REG
// Relative Address        0x00000140
// Absolute Address        0xF8000140
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00003C01
// Description             GigE 0 Ref Clock Control
//
// Register GEM0_CLK_CTRL_REG_REG Details
//
// RESERVED                                             Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 25:20, Type: rw, Reset Value: 0x0
#define GEM0_CLK_CTRL_DIVISOR1_MASK  0x03F00000UL    // Second divisor for Ethernet controller 0 source
#define GEM0_CLK_CTRL_DIVISOR1_BPOS  20UL            // clock.

// RESERVED                                             Properties: Bits: 19:14, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 13:8, Type: rw, Reset Value: 0x3C
#define GEM0_CLK_CTRL_DIVISOR_MASK   0x00003F00UL    // First divisor for Ethernet controller 0 source clock.
#define GEM0_CLK_CTRL_DIVISOR_BPOS   8UL             // 

// RESERVED                                             Properties: Bit: 7, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 6:4, Type: rw, Reset Value: 0x0
#define GEM0_CLK_CTRL_SRCSEL_MASK    0x00000070UL    // Selects the source to generate the reference clock
#define GEM0_CLK_CTRL_SRCSEL_BPOS    4UL             // 00x: IO PLL.
                                                     // 010: ARM PLL.
                                                     // 011: DDR PLL
                                                     // 1xx: Ethernet controller 0 EMIO clock

// RESERVED                                             Properties: Bits: 3:1, Type: rw, Reset Value: 0x0

                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define GEM0_CLK_CTRL_CLKACT_MASK    0x00000001UL    // Ethernet Controller 0 Reference Clock control
#define GEM0_CLK_CTRL_CLKACT_BPOS    0UL             // 0: disable, 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) GEM1_CLK_CTRL
//
// Name                    GEM1_CLK_CTRL_REG_REG
// Relative Address        0x00000144
// Absolute Address        0xF8000144
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00003C01
// Description             GigE 1 Ref Clock Control
//
// Register GEM1_CLK_CTRL_REG_REG Details
//
// RESERVED                                             Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 25:20, Type: rw, Reset Value: 0x0
#define GEM1_CLK_CTRL_DIVISOR1_MASK  0x03F00000UL    // Second divisor for Ethernet controller 1 source
#define GEM1_CLK_CTRL_DIVISOR1_BPOS  20UL            // clock.

// RESERVED                                             Properties: Bits: 19:14, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 13:8, Type: rw, Reset Value: 0x3C
#define GEM1_CLK_CTRL_DIVISOR_MASK   0x00003F00UL    // First divisor for Ethernet controller 1 source clock.
#define GEM1_CLK_CTRL_DIVISOR_BPOS   8UL             // 

// RESERVED                                             Properties: Bit: 7, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 6:4, Type: rw, Reset Value: 0x0
#define GEM1_CLK_CTRL_SRCSEL_MASK    0x00000070UL    // Selects the source to generate the reference clock
#define GEM1_CLK_CTRL_SRCSEL_BPOS    4UL             // 00x: IO PLL.
                                                     // 010: ARM PLL.
                                                     // 011: DDR PLL
                                                     // 1xx: Ethernet controller 1 EMIO clock

// RESERVED                                             Properties: Bits: 3:1, Type: rw, Reset Value: 0x0

                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define GEM1_CLK_CTRL_CLKACT_MASK    0x00000001UL    // Ethernet Controller 1 Reference Clock control
#define GEM1_CLK_CTRL_CLKACT_BPOS    0UL             // 0: disable, 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) SMC_CLK_CTRL
//
// Name                    SMC_CLK_CTRL_REG
// Relative Address        0x00000148
// Absolute Address        0xF8000148
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00003C21
// Description             SMC Ref Clock Control
//
// Register SMC_CLK_CTRL_REG Details
//
// RESERVED                                           Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                   // Properties: Bits: 13:8, Type: rw, Reset Value: 0x3C
#define SMC_CLK_CTRL_DIVISOR_MASK  0x00003F00UL    // Divisor for SMC source clock.
#define SMC_CLK_CTRL_DIVISOR_BPOS  8UL             // 

// RESERVED                                           Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                   // Properties: Bits: 5:4, Type: rw, Reset Value: 0x2
#define SMC_CLK_CTRL_SRCSEL_MASK   0x00000030UL    // Select clock source generate SMC clock:
#define SMC_CLK_CTRL_SRCSEL_BPOS   4UL             // 0x: IO PLL, 10: ARM PLL, 11: DDR PLL

// RESERVED                                           Properties: Bits: 3:1, Type: rw, Reset Value: 0x0

                                                   // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define SMC_CLK_CTRL_CLKACT_MASK   0x00000001UL    // SMC Reference Clock control
#define SMC_CLK_CTRL_CLKACT_BPOS   0UL             // : disable, 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) LQSPI_CLK_CTRL
//
// Name                    LQSPI_CLK_CTRL_REG
// Relative Address        0x0000014C
// Absolute Address        0xF800014C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00002821
// Description             Quad SPI Ref Clock Control
//
// Register LQSPI_CLK_CTRL_REG Details
//
// RESERVED                                             Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 13:8, Type: rw, Reset Value: 0x28
#define LQSPI_CLK_CTRL_DIVISOR_MASK  0x00003F00UL    // Divisor for Quad SPI Controller source clock.
#define LQSPI_CLK_CTRL_DIVISOR_BPOS  8UL             // 

// RESERVED                                             Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 5:4, Type: rw, Reset Value: 0x2
#define LQSPI_CLK_CTRL_SRCSEL_MASK   0x00000030UL    // Select clock source generate Quad SPI clock:
#define LQSPI_CLK_CTRL_SRCSEL_BPOS   4UL             // 0x: IO PLL, 10: ARM PLL, 11: DDR PLL

// RESERVED                                             Properties: Bits: 3:1, Type: rw, Reset Value: 0x0

                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define LQSPI_CLK_CTRL_CLKACT_MASK   0x00000001UL    // Quad SPI Controller Reference Clock control
#define LQSPI_CLK_CTRL_CLKACT_BPOS   0UL             // 0: disable, 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) SDIO_CLK_CTRL
//
// Name                    SDIO_CLK_CTRL_REG
// Relative Address        0x00000150
// Absolute Address        0xF8000150
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001E03
// Description             SDIO Ref Clock Control
//
// Register SDIO_CLK_CTRL_REG Details
//
// RESERVED                                            Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 13:8, Type: rw, Reset Value: 0x1E
#define SDIO_CLK_CTRL_DIVISOR_MASK  0x00003F00UL    // Provides the divisor used to divide the source
#define SDIO_CLK_CTRL_DIVISOR_BPOS  8UL             // clock to generate the required generated clock
                                                    // frequency.

// RESERVED                                            Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
#define SDIO_CLK_CTRL_SRCSEL_MASK   0x00000030UL    // Select the source used to generate the clock.
#define SDIO_CLK_CTRL_SRCSEL_BPOS   4UL             // 0x: Source for generated clock is IO PLL.
                                                    // 10: Source for generated clock is ARM PLL.
                                                    // 11: Source for generated clock is DDR PLL.

// RESERVED                                            Properties: Bits: 3:2, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 1, Type: rw, Reset Value: 0x1
#define SDIO_CLK_CTRL_CLKACT1_MASK  0x00000002UL    // SDIO Controller 1 Clock control.
#define SDIO_CLK_CTRL_CLKACT1_BPOS  1UL             // 0: disable, 1: enable

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define SDIO_CLK_CTRL_CLKACT0_MASK  0x00000001UL    // SDIO Controller 0 Clock control.
#define SDIO_CLK_CTRL_CLKACT0_BPOS  0UL             // 0: disable, 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) UART_CLK_CTRL
//
// Name                    UART_CLK_CTRL_REG
// Relative Address        0x00000154
// Absolute Address        0xF8000154
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00003F03
// Description             UART Ref Clock Control
//
// Register UART_CLK_CTRL_REG Details
//
// RESERVED                                            Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 13:8, Type: rw, Reset Value: 0x3F
#define UART_CLK_CTRL_DIVISOR_MASK  0x00003F00UL    // Divisor for UART Controller source clock.
#define UART_CLK_CTRL_DIVISOR_BPOS  8UL             // 

// RESERVED                                            Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
#define UART_CLK_CTRL_SRCSEL_MASK   0x00000030UL    // Selects the PLL source
#define UART_CLK_CTRL_SRCSEL_BPOS   4UL             // to generate the clock.
                                                    // 0x: IO PLL
                                                    // 10: ARM PLL
                                                    // 11: DDR PLL

// RESERVED                                            Properties: Bits: 3:2, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 1, Type: rw, Reset Value: 0x1
#define UART_CLK_CTRL_CLKACT1_MASK  0x00000002UL    // UART 1 reference clock active:
#define UART_CLK_CTRL_CLKACT1_BPOS  1UL             // 0: Clock is disabled
                                                    // 1: Clock is enabled

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define UART_CLK_CTRL_CLKACT0_MASK  0x00000001UL    // UART 0 Reference clock control.
#define UART_CLK_CTRL_CLKACT0_BPOS  0UL             // : disable, 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) SPI_CLK_CTRL
//
// Name                    SPI_CLK_CTRL_REG
// Relative Address        0x00000158
// Absolute Address        0xF8000158
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00003F03
// Description             SPI Ref Clock Control
//
// Register SPI_CLK_CTRL_REG Details
//
// RESERVED                                           Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                   // Properties: Bits: 13:8, Type: rw, Reset Value: 0x3F
#define SPI_CLK_CTRL_DIVISOR_MASK  0x00003F00UL    // Provides the divisor used to divide the source
#define SPI_CLK_CTRL_DIVISOR_BPOS  8UL             // clock to generate the required generated clock
                                                   // frequency.

// RESERVED                                           Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                   // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
#define SPI_CLK_CTRL_SRCSEL_MASK   0x00000030UL    // Select the source used to generate the clock:
#define SPI_CLK_CTRL_SRCSEL_BPOS   4UL             // 0x: Source for generated clock is IO PLL.
                                                   // 10: Source for generated clock is ARM PLL.
                                                   // 11: Source for generated clock is DDR PLL.

// RESERVED                                           Properties: Bits: 3:2, Type: rw, Reset Value: 0x0

                                                   // Properties: Bit: 1, Type: rw, Reset Value: 0x1
#define SPI_CLK_CTRL_CLKACT1_MASK  0x00000002UL    // SPI 1 reference clock active:
#define SPI_CLK_CTRL_CLKACT1_BPOS  1UL             // 0: Clock is disabled
                                                   // 1: Clock is enabled

                                                   // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define SPI_CLK_CTRL_CLKACT0_MASK  0x00000001UL    // SPI 0 reference clock active:
#define SPI_CLK_CTRL_CLKACT0_BPOS  0UL             // 0: Clock is disabled
                                                   // 1: Clock is enabled


//------------------------------------------------------------------------------
//
// Register (SLCR) CAN_CLK_CTRL
//
// Name                    CAN_CLK_CTRL_REG
// Relative Address        0x0000015C
// Absolute Address        0xF800015C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00501903
// Description             CAN Ref Clock Control
//
// Register CAN_CLK_CTRL_REG Details
//
// RESERVED                                            Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 25:20, Type: rw, Reset Value: 0x5
#define CAN_CLK_CTRL_DIVISOR1_MASK  0x03F00000UL    // Provides the divisor used to divide the source
#define CAN_CLK_CTRL_DIVISOR1_BPOS  20UL            // clock to generate the required generated clock
                                                    // frequency. Second cascade divider.

// RESERVED                                            Properties: Bits: 19:14, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 13:8, Type: rw, Reset Value: 0x19
#define CAN_CLK_CTRL_DIVISOR0_MASK  0x00003F00UL    // Provides the divisor used to divide the source
#define CAN_CLK_CTRL_DIVISOR0_BPOS  8UL             // clock to generate the required generated clock
                                                    // frequency. First cascade divider

// RESERVED                                            Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
#define CAN_CLK_CTRL_SRCSEL_MASK    0x00000030UL    // Select the source used to generate the clock:
#define CAN_CLK_CTRL_SRCSEL_BPOS    4UL             // 0x: Source for generated clock is IO PLL.
                                                    // 10: Source for generated clock is ARM PLL.
                                                    // 11: Source for generated clock is DDR PLL.

// RESERVED                                            Properties: Bits: 3:2, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 1, Type: rw, Reset Value: 0x1
#define CAN_CLK_CTRL_CLKACT1_MASK   0x00000002UL    // CAN 1 Reference Clock active:
#define CAN_CLK_CTRL_CLKACT1_BPOS   1UL             // 0: Clock is disabled
                                                    // 1: Clock is enabled

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define CAN_CLK_CTRL_CLKACT0_MASK   0x00000001UL    // CAN 0 Reference Clock active:
#define CAN_CLK_CTRL_CLKACT0_BPOS   0UL             // 0: Clock is disabled
                                                    // 1: Clock is enabled


//------------------------------------------------------------------------------
//
// Register (SLCR) CAN_MIOCLK_CTRL
//
// Name                    CAN_MIOCLK_CTRL_REG
// Relative Address        0x00000160
// Absolute Address        0xF8000160
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CAN MIO Clock Control
//
// Register CAN_MIOCLK_CTRL_REG Details
//
// RESERVED                                                   Properties: Bits: 31:23, Type: rw, Reset Value: 0x0

                                                           // Properties: Bit: 22, Type: rw, Reset Value: 0x0
#define CAN_MIOCLK_CTRL_CAN1_REF_SEL_MASK  0x00400000UL    // CAN 1 Reference Clock selection:
#define CAN_MIOCLK_CTRL_CAN1_REF_SEL_BPOS  22UL            // 0: From internal PLL.
                                                           // 1: From MIO based on the next field

                                                           // Properties: Bits: 21:16, Type: rw, Reset Value: 0x0
#define CAN_MIOCLK_CTRL_CAN1_MUX_MASK      0x003F0000UL    // CAN 1 mux selection for MIO. Setting this to zero
#define CAN_MIOCLK_CTRL_CAN1_MUX_BPOS      16UL            // will select MIO[0] as the clock source.
                                                           // Only values 0-53 are valid.

// RESERVED                                                   Properties: Bits: 15:7, Type: rw, Reset Value: 0x0

                                                           // Properties: Bit: 6, Type: rw, Reset Value: 0x0
#define CAN_MIOCLK_CTRL_CAN0_REF_SEL_MASK  0x00000040UL    // CAN 0 Reference Clock selection:
#define CAN_MIOCLK_CTRL_CAN0_REF_SEL_BPOS  6UL             // 0: From internal PLL
                                                           // 1: From MIO based on the next field

                                                           // Properties: Bits: 5:0, Type: rw, Reset Value: 0x0
#define CAN_MIOCLK_CTRL_CAN0_MUX_MASK      0x0000003FUL    // CAN 0 mux selection for MIO.
#define CAN_MIOCLK_CTRL_CAN0_MUX_BPOS      0UL             // Setting this to zero will select MIO[0] as the clock
                                                           // source.
                                                           // Only values 0-53 are valid.


//------------------------------------------------------------------------------
//
// Register (SLCR) DBG_CLK_CTRL
//
// Name                    DBG_CLK_CTRL_REG
// Relative Address        0x00000164
// Absolute Address        0xF8000164
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000F03
// Description             SoC Debug Clock Control
//
// Register DBG_CLK_CTRL_REG Details
//
// RESERVED                                                Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                        // Properties: Bits: 13:8, Type: rw, Reset Value: 0xF
#define DBG_CLK_CTRL_DIVISOR_MASK       0x00003F00UL    // Provides the divisor used to divide the source
#define DBG_CLK_CTRL_DIVISOR_BPOS       8UL             // clock to generate the required generated debug
                                                        // trace clock frequency.

// RESERVED                                                Properties: Bit: 7, Type: rw, Reset Value: 0x0

                                                        // Properties: Bits: 6:4, Type: rw, Reset Value: 0x0
#define DBG_CLK_CTRL_SRCSEL_MASK        0x00000070UL    // Select the source used to generate the clock:
#define DBG_CLK_CTRL_SRCSEL_BPOS        4UL             // 1xx: Source for generated clock EMIO trace clock
                                                        // 00x: Source for generated clock is IO PLL
                                                        // 010: Source for generated clock is ARM PLL
                                                        // 011: Source for generated clock is DDR PLL

// RESERVED                                                Properties: Bits: 3:2, Type: rw, Reset Value: 0x0

                                                        // Properties: Bit: 1, Type: rw, Reset Value: 0x1
#define DBG_CLK_CTRL_CPU_1XCLKACT_MASK  0x00000002UL    // Debug
#define DBG_CLK_CTRL_CPU_1XCLKACT_BPOS  1UL             // CPU 1x Clock active. 0 - Clocks are disabled. 1 -
                                                        // Clocks are enabled

                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define DBG_CLK_CTRL_CLKACT_TRC_MASK    0x00000001UL    // Debug Trace Clock active:
#define DBG_CLK_CTRL_CLKACT_TRC_BPOS    0UL             // 0: Clock is disabled
                                                        // 1: Clock is enabled


//------------------------------------------------------------------------------
//
// Register (SLCR) PCAP_CLK_CTRL
//
// Name                    PCAP_CLK_CTRL_REG
// Relative Address        0x00000168
// Absolute Address        0xF8000168
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000F01
// Description             PCAP Clock Control
//
// Register PCAP_CLK_CTRL_REG Details
//
// RESERVED                                            Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 13:8, Type: rw, Reset Value: 0xF
#define PCAP_CLK_CTRL_DIVISOR_MASK  0x00003F00UL    // Provides the divisor used to divide the source
#define PCAP_CLK_CTRL_DIVISOR_BPOS  8UL             // clock to generate the required generated clock
                                                    // frequency.

// RESERVED                                            Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
#define PCAP_CLK_CTRL_SRCSEL_MASK   0x00000030UL    // Select the source used to generate the clock:
#define PCAP_CLK_CTRL_SRCSEL_BPOS   4UL             // 0x: Source for generated clock is IO PLL.
                                                    // 10: Source for generated clock is ARM PLL.
                                                    // 11: Source for generated clock is DDR PLL.

// RESERVED                                            Properties: Bits: 3:1, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define PCAP_CLK_CTRL_CLKACT_MASK   0x00000001UL    // Clock active:
#define PCAP_CLK_CTRL_CLKACT_BPOS   0UL             // 0: Clock is disabled
                                                    // 1: Clock is enabled


//------------------------------------------------------------------------------
//
// Register (SLCR) TOPSW_CLK_CTRL
//
// Name                    TOPSW_CLK_CTRL_REG
// Relative Address        0x0000016C
// Absolute Address        0xF800016C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Central Interconnect Clock Control
//
// Register TOPSW_CLK_CTRL_REG Details
//
// RESERVED                                             Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define TOPSW_CLK_CTRL_CLK_DIS_MASK  0x00000001UL    // Clock disable control:
#define TOPSW_CLK_CTRL_CLK_DIS_BPOS  0UL             // 0: Clock is not disabled
                                                     // 1: Clock can be disabled


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA0_CLK_CTRL
//
// Name                    FPGA0_CLK_CTRL_REG
// Relative Address        0x00000170
// Absolute Address        0xF8000170
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00101800
// Description             PL Clock 0 Output control
//
// Register FPGA0_CLK_CTRL_REG Details
//
// RESERVED                                              Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 25:20, Type: rw, Reset Value: 0x1
#define FPGA0_CLK_CTRL_DIVISOR1_MASK  0x03F00000UL    // Provides the divisor used to divide the source
#define FPGA0_CLK_CTRL_DIVISOR1_BPOS  20UL            // clock to generate the required generated clock
                                                      // frequency. Second cascade divide

// RESERVED                                              Properties: Bits: 19:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 13:8, Type: rw, Reset Value: 0x18
#define FPGA0_CLK_CTRL_DIVISOR0_MASK  0x00003F00UL    // Provides the divisor used to divide the source
#define FPGA0_CLK_CTRL_DIVISOR0_BPOS  8UL             // clock to generate the required generated clock
                                                      // frequency. First cascade divider.

// RESERVED                                              Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
#define FPGA0_CLK_CTRL_SRCSEL_MASK    0x00000030UL    // Select the source used to generate the clock:
#define FPGA0_CLK_CTRL_SRCSEL_BPOS    4UL             // 0x: Source for generated clock is IO PLL.
                                                      // 10: Source for generated clock is ARM PLL.
                                                      // 11: Source for generated clock is DDR PLL.

// RESERVED                                              Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA0_THR_CTRL
//
// Name                    FPGA0_THR_CTRL_REG
// Relative Address        0x00000174
// Absolute Address        0xF8000174
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             PL Clock 0 Throttle control
//
// Register FPGA0_THR_CTRL_REG Details
//
// RESERVED                                               Properties: Bits: 31:4, Type: rw, Reset Value: 0x0

// RESERVED                                               Properties: Bit: 3, Type: rw, Reset Value: 0x0

// RESERVED                                               Properties: Bit: 2, Type: rw, Reset Value: 0x0

                                                       // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define FPGA0_THR_CTRL_CNT_RST_MASK    0x00000002UL    // Reset clock throttle counter when in halt state:
#define FPGA0_THR_CTRL_CNT_RST_BPOS    1UL             // 0: No effect
                                                       // 1: Causes counter to be reset once HALT state is
                                                       // entered

                                                       // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define FPGA0_THR_CTRL_CPU_START_MASK  0x00000001UL    // Start or restart count on detection of 0 to 1
#define FPGA0_THR_CTRL_CPU_START_BPOS  0UL             // transition in the value of this bit. A read will
                                                       // return the written value. (Reminder that bits 2&3
                                                       // must be programmed according to description.)
                                                       // 0: No effect
                                                       // 1: Start count or restart count if previous value
                                                       // was 0


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA0_THR_CNT
//
// Name                    FPGA0_THR_CNT_REG
// Relative Address        0x00000178
// Absolute Address        0xF8000178
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             PL Clock 0 Throttle Count control
//
// Register FPGA0_THR_CNT_REG Details
//
// RESERVED                                             Properties: Bits: 31:20, Type: rw, Reset Value: 0x0

// RESERVED                                             Properties: Bits: 19:16, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define FPGA0_THR_CNT_LAST_CNT_MASK  0x0000FFFFUL    // Last count value. Specifies the total number of
#define FPGA0_THR_CNT_LAST_CNT_BPOS  0UL             // clocks output in debug mode by the clock throttle
                                                     // logic.


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA0_THR_STA
//
// Name                    FPGA0_THR_STA_REG
// Relative Address        0x0000017C
// Absolute Address        0xF800017C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00010000
// Description             PL Clock 0 Throttle Status read
//
// Register FPGA0_THR_STA_REG Details
//
// RESERVED                                             Properties: Bits: 31:17, Type: ro, Reset Value: 0x0

                                                     // Properties: Bit: 16, Type: ro, Reset Value: 0x1
#define FPGA0_THR_STA_RUNNING_MASK   0x00010000UL    // Current running status of FPGA clock output:
#define FPGA0_THR_STA_RUNNING_BPOS   16UL            // 0: Clock is stopped or in normal mode (OK to
                                                     // change configuration).
                                                     // 1: Clock is running in debug mode (Keep
                                                     // configuration static).

                                                     // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
#define FPGA0_THR_STA_CURR_VAL_MASK  0x0000FFFFUL    // Current clock throttle counter value, which
#define FPGA0_THR_STA_CURR_VAL_BPOS  0UL             // indicates the number of clock pulses output so far
                                                     // (only accurate when halted).


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA1_CLK_CTRL
//
// Name                    FPGA1_CLK_CTRL_REG
// Relative Address        0x00000180
// Absolute Address        0xF8000180
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00101800
// Description             PL Clock 1 Output control
//
// Register FPGA1_CLK_CTRL_REG Details
//
// RESERVED                                              Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 25:20, Type: rw, Reset Value: 0x1
#define FPGA1_CLK_CTRL_DIVISOR1_MASK  0x03F00000UL    // Provides the divisor used to divide the source
#define FPGA1_CLK_CTRL_DIVISOR1_BPOS  20UL            // clock to generate the required generated clock
                                                      // frequency. Second cascade divide

// RESERVED                                              Properties: Bits: 19:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 13:8, Type: rw, Reset Value: 0x18
#define FPGA1_CLK_CTRL_DIVISOR0_MASK  0x00003F00UL    // Provides the divisor used to divide the source
#define FPGA1_CLK_CTRL_DIVISOR0_BPOS  8UL             // clock to generate the required generated clock
                                                      // frequency. First cascade divider.

// RESERVED                                              Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
#define FPGA1_CLK_CTRL_SRCSEL_MASK    0x00000030UL    // Select the source used to generate the clock:
#define FPGA1_CLK_CTRL_SRCSEL_BPOS    4UL             // 0x: Source for generated clock is IO PLL.
                                                      // 10: Source for generated clock is ARM PLL.
                                                      // 11: Source for generated clock is DDR PLL.

// RESERVED                                              Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA1_THR_CTRL
//
// Name                    FPGA1_THR_CTRL_REG
// Relative Address        0x00000184
// Absolute Address        0xF8000184
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             PL Clock 1 Throttle control
//
// Register FPGA1_THR_CTRL_REG Details
//
// RESERVED                                               Properties: Bits: 31:4, Type: rw, Reset Value: 0x0

// RESERVED                                               Properties: Bit: 3, Type: rw, Reset Value: 0x0

// RESERVED                                               Properties: Bit: 2, Type: rw, Reset Value: 0x0

                                                       // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define FPGA1_THR_CTRL_CNT_RST_MASK    0x00000002UL    // Reset clock throttle counter when in halt state:
#define FPGA1_THR_CTRL_CNT_RST_BPOS    1UL             // 0: No effect
                                                       // 1: Causes counter to be reset once HALT state is
                                                       // entered

                                                       // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define FPGA1_THR_CTRL_CPU_START_MASK  0x00000001UL    // Start or restart count on detection of 0 to 1
#define FPGA1_THR_CTRL_CPU_START_BPOS  0UL             // transition in the value of this bit. A read will
                                                       // return the written value. (Reminder that bits 2&3
                                                       // must be programmed according to description.)
                                                       // 0: No effect
                                                       // 1: Start count or restart count if previous value
                                                       // was 0


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA1_THR_CNT
//
// Name                    FPGA1_THR_CNT_REG
// Relative Address        0x00000188
// Absolute Address        0xF8000188
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             PL Clock 1 Throttle Count
//
// Register FPGA1_THR_CNT_REG Details
//
// RESERVED                                             Properties: Bits: 31:20, Type: rw, Reset Value: 0x0

// RESERVED                                             Properties: Bits: 19:16, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define FPGA1_THR_CNT_LAST_CNT_MASK  0x0000FFFFUL    // Last count value. Specifies the total number of
#define FPGA1_THR_CNT_LAST_CNT_BPOS  0UL             // clocks output in debug mode by the clock throttle
                                                     // logic.


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA1_THR_STA
//
// Name                    FPGA1_THR_STA_REG
// Relative Address        0x0000018C
// Absolute Address        0xF800018C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00010000
// Description             PL Clock 1 Throttle Status control
//
// Register FPGA1_THR_STA_REG Details
//
// RESERVED                                             Properties: Bits: 31:17, Type: ro, Reset Value: 0x0

                                                     // Properties: Bit: 16, Type: ro, Reset Value: 0x1
#define FPGA1_THR_STA_RUNNING_MASK   0x00010000UL    // Current running status of FPGA clock output:
#define FPGA1_THR_STA_RUNNING_BPOS   16UL            // 0: Clock is stopped or in normal mode (OK to
                                                     // change configuration).
                                                     // 1: Clock is running in debug mode (Keep
                                                     // configuration static).

                                                     // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
#define FPGA1_THR_STA_CURR_VAL_MASK  0x0000FFFFUL    // Current clock throttle counter value, which
#define FPGA1_THR_STA_CURR_VAL_BPOS  0UL             // indicates the number of clock pulses output so far
                                                     // (only accurate when halted).


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA2_CLK_CTRL
//
// Name                    FPGA2_CLK_CTRL_REG
// Relative Address        0x00000190
// Absolute Address        0xF8000190
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00101800
// Description             PL Clock 2 output control
//
// Register FPGA2_CLK_CTRL_REG Details
//
// RESERVED                                              Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 25:20, Type: rw, Reset Value: 0x1
#define FPGA2_CLK_CTRL_DIVISOR1_MASK  0x03F00000UL    // Provides the divisor used to divide the source
#define FPGA2_CLK_CTRL_DIVISOR1_BPOS  20UL            // clock to generate the required generated clock
                                                      // frequency. Second cascade divide

// RESERVED                                              Properties: Bits: 19:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 13:8, Type: rw, Reset Value: 0x18
#define FPGA2_CLK_CTRL_DIVISOR0_MASK  0x00003F00UL    // Provides the divisor used to divide the source
#define FPGA2_CLK_CTRL_DIVISOR0_BPOS  8UL             // clock to generate the required generated clock
                                                      // frequency. First cascade divider.

// RESERVED                                              Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
#define FPGA2_CLK_CTRL_SRCSEL_MASK    0x00000030UL    // Select the source used to generate the clock:
#define FPGA2_CLK_CTRL_SRCSEL_BPOS    4UL             // 0x: Source for generated clock is IO PLL.
                                                      // 10: Source for generated clock is ARM PLL.
                                                      // 11: Source for generated clock is DDR PLL.

// RESERVED                                              Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA2_THR_CTRL
//
// Name                    FPGA2_THR_CTRL_REG
// Relative Address        0x00000194
// Absolute Address        0xF8000194
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             PL Clock 2 Throttle Control
//
// Register FPGA2_THR_CTRL_REG Details
//
// RESERVED                                               Properties: Bits: 31:4, Type: rw, Reset Value: 0x0

// RESERVED                                               Properties: Bit: 3, Type: rw, Reset Value: 0x0

// RESERVED                                               Properties: Bit: 2, Type: rw, Reset Value: 0x0

                                                       // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define FPGA2_THR_CTRL_CNT_RST_MASK    0x00000002UL    // Reset clock throttle counter when in halt state:
#define FPGA2_THR_CTRL_CNT_RST_BPOS    1UL             // : No effect
                                                       // : Causes counter to be reset once HALT state is
                                                       // ntered

                                                       // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define FPGA2_THR_CTRL_CPU_START_MASK  0x00000001UL    // Start or restart count on detection of 0 to 1
#define FPGA2_THR_CTRL_CPU_START_BPOS  0UL             // transition in the value of this bit. A read will
                                                       // return the written value. (Reminder that bits 2&3
                                                       // must be programmed according to description.)
                                                       // 0: No effect
                                                       // 1: Start count or restart count if previous value
                                                       // was 0


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA2_THR_CNT
//
// Name                    FPGA2_THR_CNT_REG
// Relative Address        0x00000198
// Absolute Address        0xF8000198
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             PL Clock 2 Throttle Count
//
// Register FPGA2_THR_CNT_REG Details
//
// RESERVED                                             Properties: Bits: 31:20, Type: rw, Reset Value: 0x0

// RESERVED                                             Properties: Bits: 19:16, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define FPGA2_THR_CNT_LAST_CNT_MASK  0x0000FFFFUL    // Last count value. Specifies the total number of
#define FPGA2_THR_CNT_LAST_CNT_BPOS  0UL             // clocks output in debug mode by the clock throttle
                                                     // logic.


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA2_THR_STA
//
// Name                    FPGA2_THR_STA_REG
// Relative Address        0x0000019C
// Absolute Address        0xF800019C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00010000
// Description             PL Clock 2 Throttle Status
//
// Register FPGA2_THR_STA_REG Details
//
// RESERVED                                             Properties: Bits: 31:17, Type: ro, Reset Value: 0x0

                                                     // Properties: Bit: 16, Type: ro, Reset Value: 0x1
#define FPGA2_THR_STA_RUNNING_MASK   0x00010000UL    // Current running status of FPGA clock output:
#define FPGA2_THR_STA_RUNNING_BPOS   16UL            // : Clock is stopped or in normal mode (OK to
                                                     // hange configuration).
                                                     // : Clock is running in debug mode (Keep
                                                     // onfiguration static).

                                                     // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
#define FPGA2_THR_STA_CURR_VAL_MASK  0x0000FFFFUL    // Current clock throttle counter value, which
#define FPGA2_THR_STA_CURR_VAL_BPOS  0UL             // indicates the number of clock pulses output so far
                                                     // (only accurate when halted).


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA3_CLK_CTRL
//
// Name                    FPGA3_CLK_CTRL_REG
// Relative Address        0x000001A0
// Absolute Address        0xF80001A0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00101800
// Description             PL Clock 3 output control
//
// Register FPGA3_CLK_CTRL_REG Details
//
// RESERVED                                              Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 25:20, Type: rw, Reset Value: 0x1
#define FPGA3_CLK_CTRL_DIVISOR1_MASK  0x03F00000UL    // Provides the divisor used to divide the source
#define FPGA3_CLK_CTRL_DIVISOR1_BPOS  20UL            // clock to generate the required generated clock
                                                      // frequency. Second cascade divide

// RESERVED                                              Properties: Bits: 19:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 13:8, Type: rw, Reset Value: 0x18
#define FPGA3_CLK_CTRL_DIVISOR0_MASK  0x00003F00UL    // Provides the divisor used to divide the source
#define FPGA3_CLK_CTRL_DIVISOR0_BPOS  8UL             // clock to generate the required generated clock
                                                      // frequency. First cascade divider.

// RESERVED                                              Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                      // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
#define FPGA3_CLK_CTRL_SRCSEL_MASK    0x00000030UL    // Select the source used to generate the clock:
#define FPGA3_CLK_CTRL_SRCSEL_BPOS    4UL             // 0x: Source for generated clock is IO PLL.
                                                      // 10: Source for generated clock is ARM PLL.
                                                      // 11: Source for generated clock is DDR PLL.

// RESERVED                                              Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA3_THR_CTRL
//
// Name                    FPGA3_THR_CTRL_REG
// Relative Address        0x000001A4
// Absolute Address        0xF80001A4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             PL Clock 3 Throttle Control
//
// Register FPGA3_THR_CTRL_REG Details
//
// RESERVED                                               Properties: Bits: 31:4, Type: rw, Reset Value: 0x0

// RESERVED                                               Properties: Bit: 3, Type: rw, Reset Value: 0x0

// RESERVED                                               Properties: Bit: 2, Type: rw, Reset Value: 0x0

                                                       // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define FPGA3_THR_CTRL_CNT_RST_MASK    0x00000002UL    // Reset clock throttle counter when in halt state:
#define FPGA3_THR_CTRL_CNT_RST_BPOS    1UL             // 0: No effect
                                                       // 1: Causes counter to be reset once HALT state is
                                                       // entered

                                                       // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define FPGA3_THR_CTRL_CPU_START_MASK  0x00000001UL    // Start or restart count on detection of 0 to 1
#define FPGA3_THR_CTRL_CPU_START_BPOS  0UL             // transition in the value of this bit. A read will
                                                       // return the written value. (Reminder that bits 2&3
                                                       // must be programmed according to description.)
                                                       // 0: No effect
                                                       // 1: Start count or restart count if previous value
                                                       // was 0


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA3_THR_CNT
//
// Name                    FPGA3_THR_CNT_REG
// Relative Address        0x000001A8
// Absolute Address        0xF80001A8
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             PL Clock 3 Throttle Count
//
// Register FPGA3_THR_CNT_REG Details
//
// RESERVED                                             Properties: Bits: 31:20, Type: rw, Reset Value: 0x0

// RESERVED                                             Properties: Bits: 19:16, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define FPGA3_THR_CNT_LAST_CNT_MASK  0x0000FFFFUL    // Last count value. Specifies the total number of
#define FPGA3_THR_CNT_LAST_CNT_BPOS  0UL             // clocks output in debug mode by the clock throttle
                                                     // logic.


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA3_THR_STA
//
// Name                    FPGA3_THR_STA_REG
// Relative Address        0x000001AC
// Absolute Address        0xF80001AC
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00010000
// Description             PL Clock 3 Throttle Status
//
// Register FPGA3_THR_STA_REG Details
//
// RESERVED                                             Properties: Bits: 31:17, Type: ro, Reset Value: 0x0

                                                     // Properties: Bit: 16, Type: ro, Reset Value: 0x1
#define FPGA3_THR_STA_RUNNING_MASK   0x00010000UL    // Current running status of FPGA clock output:
#define FPGA3_THR_STA_RUNNING_BPOS   16UL            // : Clock is stopped or in normal mode (OK to
                                                     // hange configuration).
                                                     // : Clock is running in debug mode (Keep
                                                     // onfiguration static).

                                                     // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
#define FPGA3_THR_STA_CURR_VAL_MASK  0x0000FFFFUL    // Current clock throttle counter value, which
#define FPGA3_THR_STA_CURR_VAL_BPOS  0UL             // indicates the number of clock pulses output so far
                                                     // (only accurate when halted).


//------------------------------------------------------------------------------
//
// Register (SLCR) CLK_621_TRUE
//
// Name                    CLK_621_TRUE_REG
// Relative Address        0x000001C4
// Absolute Address        0xF80001C4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000001
// Description             CPU Clock Ratio Mode select
//
// Register CLK_621_TRUE_REG Details
//
// RESERVED                                                Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define CLK_621_TRUE_CLK_621_TRUE_MASK  0x00000001UL    // Select the CPU clock ratio:
#define CLK_621_TRUE_CLK_621_TRUE_BPOS  0UL             // (When this register changes, no access are allowed
                                                        // to OCM.)
                                                        // 0: 4:2:1
                                                        // 1: 6:2:1


//------------------------------------------------------------------------------
//
// Register (SLCR) PSS_RST_CTRL
//
// Name                    PSS_RST_CTRL_REG
// Relative Address        0x00000200
// Absolute Address        0xF8000200
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             PS Software Reset Control
//
// Register PSS_RST_CTRL_REG Details
//
// RESERVED                                            Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define PSS_RST_CTRL_SOFT_RST_MASK  0x00000001UL    // Processing System software reset control signal.
#define PSS_RST_CTRL_SOFT_RST_BPOS  0UL             // 0: no affect
                                                    // 1: asserts PS software reset pulse (entire system
                                                    // except clock generator)
                                                    // There is no need to write a 0, the hardware
                                                    // generates a pulse everytime a 1 is written.


//------------------------------------------------------------------------------
//
// Register (SLCR) DDR_RST_CTRL
//
// Name                    DDR_RST_CTRL_REG
// Relative Address        0x00000204
// Absolute Address        0xF8000204
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DDR Software Reset Control
//
// Register DDR_RST_CTRL_REG Details
//
// RESERVED                                           Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                   // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define DDR_RST_CTRL_DDR_RST_MASK  0x00000001UL    // DDR software reset control signal
#define DDR_RST_CTRL_DDR_RST_BPOS  0UL             // : disable, 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) TOPSW_RST_CTRL
//
// Name                    TOPSW_RST_CTRL_REG
// Relative Address        0x00000208
// Absolute Address        0xF8000208
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Central Interconnect Reset Control
//
// Register TOPSW_RST_CTRL_REG Details
//
// RESERVED                                               Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                       // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define TOPSW_RST_CTRL_TOPSW_RST_MASK  0x00000001UL    // Central Interconnect Reset Control:
#define TOPSW_RST_CTRL_TOPSW_RST_BPOS  0UL             // 0: de-assert (no reset)
                                                       // 1: assert
                                                       // Care must be taken to ensure that the AXI
                                                       // interconnect does not have outstanding
                                                       // transactions and the bus is idle.


//------------------------------------------------------------------------------
//
// Register (SLCR) RST_CTRL
//
// Name                    DMAC_RST_CTRL_REG_REG
// Relative Address        0x0000020C
// Absolute Address        0xF800020C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DMAC Software Reset Control
//
// Register DMAC_RST_CTRL_REG_REG Details
//
// RESERVED                                        Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define RST_CTRL_DMAC_RST_MASK  0x00000001UL    // DMA Controller software reset signal.
#define RST_CTRL_DMAC_RST_BPOS  0UL             // 0: de-assert (DMA controller TrustZone register is
                                                // read only)
                                                // 1: assert (DMA controller TrustZone register is
                                                // writeable)


//------------------------------------------------------------------------------
//
// Register (SLCR) USB_RST_CTRL
//
// Name                    USB_RST_CTRL_REG
// Relative Address        0x00000210
// Absolute Address        0xF8000210
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             USB Software Reset Control
//
// Register USB_RST_CTRL_REG Details
//
// RESERVED                                                  Properties: Bits: 31:2, Type: rw, Reset Value: 0x0

                                                          // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define USB_RST_CTRL_USB1_CPU1X_RST_MASK  0x00000002UL    // USB 1 master and slave AMBA interfaces
#define USB_RST_CTRL_USB1_CPU1X_RST_BPOS  1UL             // software reset:
                                                          // 0: de-assert (no reset)
                                                          // 1: assert (held in reset)

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define USB_RST_CTRL_USB0_CPU1X_RST_MASK  0x00000001UL    // USB 0 master and slave AMBA interfaces
#define USB_RST_CTRL_USB0_CPU1X_RST_BPOS  0UL             // software reset:
                                                          // 0: de-assert (no reset)
                                                          // 1: assert (held in reset)


//------------------------------------------------------------------------------
//
// Register (SLCR) RST_CTRL
//
// Name                    GEM_RST_CTRL_REG_REG
// Relative Address        0x00000214
// Absolute Address        0xF8000214
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Gigabit Ethernet SW Reset Control
//
// Register GEM_RST_CTRL_REG_REG Details
//         Each Gigabit Ethernet controller has 3 clock domains and each clock domain has a reset control:
//         * Reference clock domain reset
//         * RxClock domain reset
//         * CPU_1x clock domain reset
//
// RESERVED                                              Properties: Bits: 31:8, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define RST_CTRL_GEM1_REF_RST_MASK    0x00000080UL    // Gigabit Ethernet 1 reference clock reset:
#define RST_CTRL_GEM1_REF_RST_BPOS    7UL             // 0: de-assert (no reset)
                                                      // 1: assert (interfaces are held in reset)

                                                      // Properties: Bit: 6, Type: rw, Reset Value: 0x0
#define RST_CTRL_GEM0_REF_RST_MASK    0x00000040UL    // Gigabit Ethernet 0 reference clock domain reset:
#define RST_CTRL_GEM0_REF_RST_BPOS    6UL             // 0: de-assert (no reset)
                                                      // 1: assert (controller is held in reset)

                                                      // Properties: Bit: 5, Type: rw, Reset Value: 0x0
#define RST_CTRL_GEM1_RX_RST_MASK     0x00000020UL    // Gigabit Ethernet 1 Rx clock domain reset:
#define RST_CTRL_GEM1_RX_RST_BPOS     5UL             // 0: de-assert (no reset)
                                                      // 1: assert (held in reset)

                                                      // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define RST_CTRL_GEM0_RX_RST_MASK     0x00000010UL    // Gigabit Ethernet 0 Rx clock domain reset:
#define RST_CTRL_GEM0_RX_RST_BPOS     4UL             // 0: de-assert (no reset)
                                                      // 1: assert (held in reset)

// RESERVED                                              Properties: Bits: 3:2, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define RST_CTRL_GEM1_CPU1X_RST_MASK  0x00000002UL    // Gigabit Ethernet 1 CPU_1x clock domain reset:
#define RST_CTRL_GEM1_CPU1X_RST_BPOS  1UL             // 0: de-assert (no reset)
                                                      // 1: assert (held in reset)

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define RST_CTRL_GEM0_CPU1X_RST_MASK  0x00000001UL    // Gigabit Ethernet 0 CPU_1x clock domain reset:
#define RST_CTRL_GEM0_CPU1X_RST_BPOS  0UL             // 0: de-assert (no reset)
                                                      // 1: assert (held in reset)


//------------------------------------------------------------------------------
//
// Register (SLCR) SDIO_RST_CTRL
//
// Name                    SDIO_RST_CTRL_REG
// Relative Address        0x00000218
// Absolute Address        0xF8000218
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             SDIO Software Reset Control
//
// Register SDIO_RST_CTRL_REG Details
//
// RESERVED                                                    Properties: Bits: 31:6, Type: rw, Reset Value: 0x0

                                                            // Properties: Bit: 5, Type: rw, Reset Value: 0x0
#define SDIO_RST_CTRL_SDIO1_REF_RST_MASK    0x00000020UL    // SDIO 1 reference clock domain reset:
#define SDIO_RST_CTRL_SDIO1_REF_RST_BPOS    5UL             // 0: de-assert (no reset)
                                                            // 1: assert (controller is held in reset)

                                                            // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define SDIO_RST_CTRL_SDIO0_REF_RST_MASK    0x00000010UL    // SDIO 0 reference clock domain reset:
#define SDIO_RST_CTRL_SDIO0_REF_RST_BPOS    4UL             // 0: de-assert (no reset)
                                                            // 1: assert (controller is held in reset)

// RESERVED                                                    Properties: Bits: 3:2, Type: rw, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define SDIO_RST_CTRL_SDIO1_CPU1X_RST_MASK  0x00000002UL    // SDIO 1 master and slave AMBA interfaces reset:
#define SDIO_RST_CTRL_SDIO1_CPU1X_RST_BPOS  1UL             // : de-assert (no reset)
                                                            // : assert (held in reset)

                                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define SDIO_RST_CTRL_SDIO0_CPU1X_RST_MASK  0x00000001UL    // SDIO 0 master and slave AMBA interfaces reset:
#define SDIO_RST_CTRL_SDIO0_CPU1X_RST_BPOS  0UL             // : de-assert (no reset)
                                                            // : assert (held in reset)


//------------------------------------------------------------------------------
//
// Register (SLCR) SPI_RST_CTRL
//
// Name                    SPI_RST_CTRL_REG
// Relative Address        0x0000021C
// Absolute Address        0xF800021C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             SPI Software Reset Control
//
// Register SPI_RST_CTRL_REG Details
//
// RESERVED                                                  Properties: Bits: 31:4, Type: rw, Reset Value: 0x0

                                                          // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define SPI_RST_CTRL_SPI1_REF_RST_MASK    0x00000008UL    // SPI 1 Reference software reset. On assertion of this
#define SPI_RST_CTRL_SPI1_REF_RST_BPOS    3UL             // reset, the Reference clock portion of the SPI 1
                                                          // subsystem will be reset.
                                                          // 0: No reset
                                                          // 1: Reference clock portion of SPI 1 subsytem held
                                                          // in reset

                                                          // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define SPI_RST_CTRL_SPI0_REF_RST_MASK    0x00000004UL    // SPI 0 Reference software reset. On assertion of this
#define SPI_RST_CTRL_SPI0_REF_RST_BPOS    2UL             // reset, the Reference clock portion of the SPI 0
                                                          // subsystem will be reset.
                                                          // 0: No reset
                                                          // 1: Reference clock portion of SPI 0 subsytem held
                                                          // in reset

                                                          // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define SPI_RST_CTRL_SPI1_CPU1X_RST_MASK  0x00000002UL    // SPI 1 AMBA software reset. On assertion of this
#define SPI_RST_CTRL_SPI1_CPU1X_RST_BPOS  1UL             // reset, the AMBA clock portion of the SPI 1
                                                          // subsystem will be reset.
                                                          // 0: No reset
                                                          // 1: AMBA clock portion of SPI 1 subsytem held in
                                                          // reset

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define SPI_RST_CTRL_SPI0_CPU1X_RST_MASK  0x00000001UL    // SPI 0 AMBA software reset. On assertion of this
#define SPI_RST_CTRL_SPI0_CPU1X_RST_BPOS  0UL             // reset, the AMBA clock portion of the SPI 0
                                                          // subsystem will be reset.
                                                          // 0: No reset
                                                          // 1: AMBA clock portion of SPI 0 subsytem held in
                                                          // reset


//------------------------------------------------------------------------------
//
// Register (SLCR) CAN_RST_CTRL
//
// Name                    CAN_RST_CTRL_REG
// Relative Address        0x00000220
// Absolute Address        0xF8000220
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CAN Software Reset Control
//
// Register CAN_RST_CTRL_REG Details
//
// RESERVED                                                  Properties: Bits: 31:4, Type: rw, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 3, Type: rw, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 2, Type: rw, Reset Value: 0x0

                                                          // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define CAN_RST_CTRL_CAN1_CPU1X_RST_MASK  0x00000002UL    // CAN 1 AMBA software reset. On assertion of this
#define CAN_RST_CTRL_CAN1_CPU1X_RST_BPOS  1UL             // reset, the AMBA clock portion of the CAN 1
                                                          // subsystem will be reset.
                                                          // 0: No reset
                                                          // 1: AMBA clock portion of CAN 1 subsytem held
                                                          // in reset

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define CAN_RST_CTRL_CAN0_CPU1X_RST_MASK  0x00000001UL    // CAN 0 AMBA software reset. On assertion of this
#define CAN_RST_CTRL_CAN0_CPU1X_RST_BPOS  0UL             // reset, the AMBA clock portion of the CAN 0
                                                          // subsystem will be reset.
                                                          // 0: No reset
                                                          // 1: AMBA clock portion of CAN 0 subsytem held
                                                          // in reset


//------------------------------------------------------------------------------
//
// Register (SLCR) I2C_RST_CTRL
//
// Name                    I2C_RST_CTRL_REG
// Relative Address        0x00000224
// Absolute Address        0xF8000224
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             I2C Software Reset Control
//
// Register I2C_RST_CTRL_REG Details
//
// RESERVED                                                  Properties: Bits: 31:2, Type: rw, Reset Value: 0x0

                                                          // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define I2C_RST_CTRL_I2C1_CPU1X_RST_MASK  0x00000002UL    // I2C 1 AMBA software reset. On assertion of this
#define I2C_RST_CTRL_I2C1_CPU1X_RST_BPOS  1UL             // reset, the AMBA clock portion of the I2C 1
                                                          // subsystem will be reset.
                                                          // 0: No reset
                                                          // 1: AMBA clock portion of I2C 1 subsytem held in
                                                          // reset

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define I2C_RST_CTRL_I2C0_CPU1X_RST_MASK  0x00000001UL    // I2C 0 AMBA software reset. On assertion of this
#define I2C_RST_CTRL_I2C0_CPU1X_RST_BPOS  0UL             // reset, the AMBA clock portion of the I2C 0
                                                          // subsystem will be reset.
                                                          // 0: No reset
                                                          // 1: AMBA clock portion of I2C 0 subsytem held in
                                                          // reset


//------------------------------------------------------------------------------
//
// Register (SLCR) UART_RST_CTRL
//
// Name                    UART_RST_CTRL_REG
// Relative Address        0x00000228
// Absolute Address        0xF8000228
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             UART Software Reset Control
//
// Register UART_RST_CTRL_REG Details
//
// RESERVED                                                    Properties: Bits: 31:4, Type: rw, Reset Value: 0x0

                                                            // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define UART_RST_CTRL_UART1_REF_RST_MASK    0x00000008UL    // UART 1 Reference software reset.
#define UART_RST_CTRL_UART1_REF_RST_BPOS    3UL             // 0: deassert soft reset
                                                            // 1: assert soft reset

                                                            // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define UART_RST_CTRL_UART0_REF_RST_MASK    0x00000004UL    // UART 0 Reference software reset.
#define UART_RST_CTRL_UART0_REF_RST_BPOS    2UL             // 0: deassert soft reset
                                                            // 1: assert soft reset

                                                            // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define UART_RST_CTRL_UART1_CPU1X_RST_MASK  0x00000002UL    // UART 1 AMBA software reset. On assertion of
#define UART_RST_CTRL_UART1_CPU1X_RST_BPOS  1UL             // this reset, the AMBA clock portion of the UART 1
                                                            // subsystem will be reset.
                                                            // 0: No reset
                                                            // 1: AMBA clock portion of UART 1 subsytem held
                                                            // in reset

                                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define UART_RST_CTRL_UART0_CPU1X_RST_MASK  0x00000001UL    // UART 0 AMBA software reset. On assertion of
#define UART_RST_CTRL_UART0_CPU1X_RST_BPOS  0UL             // this reset, the AMBA clock portion of the UART 0
                                                            // subsystem will be reset.
                                                            // 0: No reset
                                                            // 1: AMBA clock portion of UART 0 subsytem held
                                                            // in reset


//------------------------------------------------------------------------------
//
// Register (SLCR) RST_CTRL
//
// Name                    GPIO_RST_CTRL_REG_REG
// Relative Address        0x0000022C
// Absolute Address        0xF800022C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             GPIO Software Reset Control
//
// Register GPIO_RST_CTRL_REG_REG Details
//
// RESERVED                                              Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define RST_CTRL_GPIO_CPU1X_RST_MASK  0x00000001UL    // GPIO AMBA software reset. On assertion of this
#define RST_CTRL_GPIO_CPU1X_RST_BPOS  0UL             // reset, the AMBA clock portion of the GPIO
                                                      // subsystem will be reset.
                                                      // 0: No reset
                                                      // 1: AMBA clock portion of GPIO subsytem held in
                                                      // reset


//------------------------------------------------------------------------------
//
// Register (SLCR) LQSPI_RST_CTRL
//
// Name                    LQSPI_RST_CTRL_REG
// Relative Address        0x00000230
// Absolute Address        0xF8000230
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Quad SPI Software Reset Control
//
// Register LQSPI_RST_CTRL_REG Details
//
// RESERVED                                                     Properties: Bits: 31:2, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define LQSPI_RST_CTRL_QSPI_REF_RST_MASK     0x00000002UL    // Quad SPI Reference software reset. On assertion
#define LQSPI_RST_CTRL_QSPI_REF_RST_BPOS     1UL             // of this reset, the Reference clock portion of the
                                                             // QSPI subsystem will be reset.
                                                             // 0: No reset.
                                                             // 1: Reference clock portion of QSPI subsytem held
                                                             // in reset.

                                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define LQSPI_RST_CTRL_LQSPI_CPU1X_RST_MASK  0x00000001UL    // Quad SPI AMBA software reset. On assertion of
#define LQSPI_RST_CTRL_LQSPI_CPU1X_RST_BPOS  0UL             // this reset, the AMBA clock portion of the LQSPI
                                                             // subsystem will be reset.
                                                             // 0: No reset
                                                             // 1: AMBA clock portion of QSPI subsytem held in
                                                             // reset


//------------------------------------------------------------------------------
//
// Register (SLCR) SMC_RST_CTRL
//
// Name                    SMC_RST_CTRL_REG
// Relative Address        0x00000234
// Absolute Address        0xF8000234
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             SMC Software Reset Control
//
// Register SMC_RST_CTRL_REG Details
//
// RESERVED                                                 Properties: Bits: 31:2, Type: rw, Reset Value: 0x0

                                                         // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define SMC_RST_CTRL_SMC_REF_RST_MASK    0x00000002UL    // SMC Reference software reset. On assertion of this
#define SMC_RST_CTRL_SMC_REF_RST_BPOS    1UL             // reset, the Reference clock portion of the SMC
                                                         // subsystem will be reset.
                                                         // 0: No reset
                                                         // 1: Reference clock portion of SMC subsytem held
                                                         // in reset

                                                         // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define SMC_RST_CTRL_SMC_CPU1X_RST_MASK  0x00000001UL    // SMC AMBA software reset. On assertion of this
#define SMC_RST_CTRL_SMC_CPU1X_RST_BPOS  0UL             // reset, the AMBA clock portion of the SMC
                                                         // subsystem will be reset.
                                                         // 0: No reset
                                                         // 1: AMBA clock portion of SMC subsytem held in
                                                         // reset


//------------------------------------------------------------------------------
//
// Register (SLCR) OCM_RST_CTRL
//
// Name                    OCM_RST_CTRL_REG
// Relative Address        0x00000238
// Absolute Address        0xF8000238
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             OCM Software Reset Control
//
// Register OCM_RST_CTRL_REG Details
//
// RESERVED                                           Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                   // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define OCM_RST_CTRL_OCM_RST_MASK  0x00000001UL    // OCM software reset. On assertion of this reset, the
#define OCM_RST_CTRL_OCM_RST_BPOS  0UL             // OCM subsystem will be reset.
                                                   // 0: No reset
                                                   // 1: OCM subsytem held in reset


//------------------------------------------------------------------------------
//
// Register (SLCR) FPGA_RST_CTRL
//
// Name                    FPGA_RST_CTRL_REG
// Relative Address        0x00000240
// Absolute Address        0xF8000240
// Width                   32 bits
// Access Type             rw
// Reset Value             0x01F33F0F
// Description             FPGA Software Reset Control
//
// Register FPGA_RST_CTRL_REG Details
//
// RESERVED                                                  Properties: Bits: 31:25, Type: rw, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 24, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bit: 23, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bit: 22, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bit: 21, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bit: 20, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bits: 19:18, Type: rw, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 17, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bit: 16, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bits: 15:14, Type: rw, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 13, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bit: 12, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bit: 11, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bit: 10, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bit: 9, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bit: 8, Type: rw, Reset Value: 0x1

// RESERVED                                                  Properties: Bits: 7:4, Type: rw, Reset Value: 0x0

                                                          // Properties: Bit: 3, Type: rw, Reset Value: 0x1
#define FPGA_RST_CTRL_FPGA3_OUT_RST_MASK  0x00000008UL    // PL Reset 3 (FCLKRESETN3 output signal). Refer
#define FPGA_RST_CTRL_FPGA3_OUT_RST_BPOS  3UL             // to the PS7 wrapper in EDK for possible signal
                                                          // inversion. Logic level on the FCLKRESETN3
                                                          // signal:
                                                          // 0: De-assert reset (High logic level).
                                                          // 1: Assert Reset (Low logic state)

                                                          // Properties: Bit: 2, Type: rw, Reset Value: 0x1
#define FPGA_RST_CTRL_FPGA2_OUT_RST_MASK  0x00000004UL    // PL Reset 2 (FCLKRESETN2 output signal). Refer
#define FPGA_RST_CTRL_FPGA2_OUT_RST_BPOS  2UL             // to the PS7 wrapper in EDK for possible signal
                                                          // inversion. Logic level on the FCLKRESETN2
                                                          // signal:
                                                          // 0: De-assert reset (High logic level).
                                                          // 1: Assert Reset (Low logic state)

                                                          // Properties: Bit: 1, Type: rw, Reset Value: 0x1
#define FPGA_RST_CTRL_FPGA1_OUT_RST_MASK  0x00000002UL    // PL Reset 1 (FCLKRESETN1 output signal). Refer
#define FPGA_RST_CTRL_FPGA1_OUT_RST_BPOS  1UL             // to the PS7 wrapper in EDK for possible signal
                                                          // inversion. Logic level on the FCLKRESETN1
                                                          // signal:
                                                          // 0: De-assert reset (High logic level).
                                                          // 1: Assert Reset (Low logic state)

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define FPGA_RST_CTRL_FPGA0_OUT_RST_MASK  0x00000001UL    // PL Reset 0 (FCLKRESETN0 output signal). Refer
#define FPGA_RST_CTRL_FPGA0_OUT_RST_BPOS  0UL             // to the PS7 wrapper in EDK for possible signal
                                                          // inversion. Logic level on the FCLKRESETN0
                                                          // signal:
                                                          // 0: De-assert reset (High logic level).
                                                          // 1: Assert Reset (Low logic state)


//------------------------------------------------------------------------------
//
// Register (SLCR) A9_CPU_RST_CTRL
//
// Name                    A9_CPU_RST_CTRL_REG
// Relative Address        0x00000244
// Absolute Address        0xF8000244
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CPU Reset and Clock control
//
// Register A9_CPU_RST_CTRL_REG Details
//
// RESERVED                                                  Properties: Bits: 31:9, Type: rw, Reset Value: 0x0

                                                          // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define A9_CPU_RST_CTRL_PERI_RST_MASK     0x00000100UL    // CPU peripheral soft reset.
#define A9_CPU_RST_CTRL_PERI_RST_BPOS     8UL             // 0: de-assert (no reset)
                                                          // 1: assert (held in reset)

// RESERVED                                                  Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                          // Properties: Bit: 5, Type: rw, Reset Value: 0x0
#define A9_CPU_RST_CTRL_A9_CLKSTOP1_MASK  0x00000020UL    // CPU 1 clock stop control:
#define A9_CPU_RST_CTRL_A9_CLKSTOP1_BPOS  5UL             // 0: no stop (CPU runs)
                                                          // 1: clock stopped

                                                          // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define A9_CPU_RST_CTRL_A9_CLKSTOP0_MASK  0x00000010UL    // CPU 0 clock stop control:
#define A9_CPU_RST_CTRL_A9_CLKSTOP0_BPOS  4UL             // 0: no stop (CPU runs)
                                                          // 1: clock stopped

// RESERVED                                                  Properties: Bits: 3:2, Type: rw, Reset Value: 0x0

                                                          // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define A9_CPU_RST_CTRL_A9_RST1_MASK      0x00000002UL    // CPU 1 software reset control:
#define A9_CPU_RST_CTRL_A9_RST1_BPOS      1UL             // 0: de-assert (no reset)
                                                          // 1: assert (held in reset)

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define A9_CPU_RST_CTRL_A9_RST0_MASK      0x00000001UL    // CPU 0 software reset control:
#define A9_CPU_RST_CTRL_A9_RST0_BPOS      0UL             // 0: de-assert (no reset)
                                                          // 1: assert (held in reset)


//------------------------------------------------------------------------------
//
// Register (SLCR) RS_AWDT_CTRL
//
// Name                    RS_AWDT_CTRL_REG
// Relative Address        0x0000024C
// Absolute Address        0xF800024C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Watchdog Timer Reset Control
//
// Register RS_AWDT_CTRL_REG Details
//
// RESERVED                                         Properties: Bits: 31:2, Type: rw, Reset Value: 0x0

                                                 // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define RS_AWDT_CTRL_CTRL1_MASK  0x00000002UL    // Select the target for the APU watchdog timer 1
#define RS_AWDT_CTRL_CTRL1_BPOS  1UL             // reset signal. Route the WDT reset to:
                                                 // 0: the same system level as PS_SRST_B
                                                 // 1: the CPU associated with the watchdog timer

                                                 // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define RS_AWDT_CTRL_CTRL0_MASK  0x00000001UL    // Select the target for the APU watchdog timer 0
#define RS_AWDT_CTRL_CTRL0_BPOS  0UL             // reset signal. Route the WDT reset to:
                                                 // 0: the same system level as PS_SRST_B
                                                 // 1: the CPU associated with the watchdog timer


//------------------------------------------------------------------------------
//
// Register (SLCR) REBOOT_STATUS
//
// Name                     REBOOT_STATUS_REG
// Relative Address         0x00000258
// Absolute Address         0xF8000258
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00400000
// Description              Reboot Status, persistent
//
// Register REBOOT_STATUS_REG Details
//          The Reboot Status persistent through all resets except Power-on reset.
//
                                                               // Properties: Bits: 31:24, Type: rw, Reset Value: 0x0
#define REBOOT_STATUS_REBOOT_STATE_MASK        0xFF000000UL    // General 32-bit R/W field to allow software to
#define REBOOT_STATUS_REBOOT_STATE_BPOS        24UL            // store information that persists through all resets
                                                               // except power-on reset.
                                                               // This field is reset by POR only. The ROM will put
                                                               // the last known reset reason into this register.

// RESERVED                                                       Properties: Bit: 23, Type: rw, Reset Value: 0x0

                                                               // Properties: Bit: 22, Type: rw, Reset Value: 0x1
#define REBOOT_STATUS_POR_MASK                 0x00400000UL    // Last reset was due to POR (power on reset), if set.
#define REBOOT_STATUS_POR_BPOS                 22UL            // This field is written by ROM code.

                                                               // Properties: Bit: 21, Type: rw, Reset Value: 0x0
#define REBOOT_STATUS_SRST_B_MASK              0x00200000UL    // Last reset was due to SRST_B (soft reset), if set.
#define REBOOT_STATUS_SRST_B_BPOS              21UL            // his field is written by ROM code.

                                                               // Properties: Bit: 20, Type: rw, Reset Value: 0x0
#define REBOOT_STATUS_DBG_RST_MASK             0x00100000UL    // Last reset was due to debug system
#define REBOOT_STATUS_DBG_RST_BPOS             20UL            // eset, if set. This field is written by ROM code.

                                                               // Properties: Bit: 19, Type: rw, Reset Value: 0x0
#define REBOOT_STATUS_SLC_RST_MASK             0x00080000UL    // Last reset was due to SLC soft reset, if set.
#define REBOOT_STATUS_SLC_RST_BPOS             19UL            // his field is written by ROM code.

                                                               // Properties: Bit: 18, Type: rw, Reset Value: 0x0
#define REBOOT_STATUS_AWDT1_RST_MASK           0x00040000UL    // Last reset was due to APU watchdog timer 1, if
#define REBOOT_STATUS_AWDT1_RST_BPOS           18UL            // set. This field is written by ROM code.

                                                               // Properties: Bit: 17, Type: rw, Reset Value: 0x0
#define REBOOT_STATUS_AWDT0_RST_MASK           0x00020000UL    // Last reset was due to APU watchdog timer 0, if
#define REBOOT_STATUS_AWDT0_RST_BPOS           17UL            // set.
                                                               // This field is written by ROM code

                                                               // Properties: Bit: 16, Type: rw, Reset Value: 0x0
#define REBOOT_STATUS_SWDT_RST_MASK            0x00010000UL    // Last reset was due to system watchdog timeout, if
#define REBOOT_STATUS_SWDT_RST_BPOS            16UL            // set (see watchdog status for more details). This
                                                               // field is written by ROM code

                                                               // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define REBOOT_STATUS_BOOTROM_ERROR_CODE_MASK  0x0000FFFFUL    // This field is written by the BootROM to describe
#define REBOOT_STATUS_BOOTROM_ERROR_CODE_BPOS  0UL             // errors that occur during the boot proceess. Refer
                                                               // to the BootROM debug status section in the
                                                               // Zynq-7000 Technical Reference Manual, UG585.


//------------------------------------------------------------------------------
//
// Register (SLCR) BOOT_MODE
//
// Name                    BOOT_MODE_REG
// Relative Address        0x0000025C
// Absolute Address        0xF800025C
// Width                   32 bits
// Access Type             mixed
// Reset Value             x
// Description             Boot Mode Strapping Pins
//
// Register BOOT_MODE_REG Details
//         Boot mode strapping pins are sampled when Power-on Reset deasserts. The logic levels are stored in this
//         register. The explanation of these boot mode pin settings are explained in the boot mode section of the
//         Zynq Technical Reference Manual.
//
// RESERVED                                           Properties: Bits: 31:5, Type: rw, Reset Value: 0x0

                                                   // Properties: Bit: 4, Type: ro, Reset Value: 0x0
#define BOOT_MODE_PLL_BYPASS_MASK  0x00000010UL    // Boot mode pins are sampled when Power-on
#define BOOT_MODE_PLL_BYPASS_BPOS  4UL             // Reset deasserts. The logic levels are stored in this
                                                   // register. The PLL_BYPASS pin sets the initial
                                                   // operating mode of all three PLL clocks (ARM, IO
                                                   // and DDR):
                                                   // 0: PLLs are enabled and their outputs are routed
                                                   // to the clock generators
                                                   // 1: PLLs are disabled and bypassed

                                                   // Properties: Bits: 3:0, Type: ro, Reset Value: x
#define BOOT_MODE_BOOT_MODE_MASK   0x0000000FUL    // Boot mode pins are sampled when Power-on
#define BOOT_MODE_BOOT_MODE_BPOS   0UL             // Reset deasserts. The logic levels are stored in this
                                                   // register. The interpretation of these boot mode
                                                   // values are explained in the boot mode section of
                                                   // the Zynq Technical Reference Manual.


//------------------------------------------------------------------------------
//
// Register (SLCR) APU_CTRL
//
// Name                    APU_CTRL_REG
// Relative Address        0x00000300
// Absolute Address        0xF8000300
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             APU Control
//
// Register APU_CTRL_REG Details
//
// RESERVED                                            Properties: Bits: 31:3, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define APU_CTRL_CFGSDISABLE_MASK   0x00000004UL    // Disable write access to some system control
#define APU_CTRL_CFGSDISABLE_BPOS   2UL             // processor registers, and some GIC registers. Set
                                                    // only. Once set, individual core reset cannot reset
                                                    // this value.
                                                    // This field is reset by POR only.

                                                    // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
#define APU_CTRL_CP15SDISABLE_MASK  0x00000003UL    // Disable write access to some system control
#define APU_CTRL_CP15SDISABLE_BPOS  0UL             // processor (CP15) registers, in each processor. Set
                                                    // only. Once set, individual core reset cannot reset
                                                    // this value.
                                                    // This field is reset by POR only.


//------------------------------------------------------------------------------
//
// Register (SLCR) WDT_CLK_SEL
//
// Name                    WDT_CLK_SEL_REG
// Relative Address        0x00000304
// Absolute Address        0xF8000304
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             SWDT clock source select
//
// Register WDT_CLK_SEL_REG Details
//
// RESERVED                                      Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                              // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define WDT_CLK_SEL_SEL_MASK  0x00000001UL    // System watchdog timer clock source selection:
#define WDT_CLK_SEL_SEL_BPOS  0UL             // 0: internal clock CPU_1x
                                              // 1: external clock from PL via EMIO, or from
                                              // pinout via MIO


//------------------------------------------------------------------------------
//
// Register (SLCR) TZ_DMA_NS
//
// Name                    TZ_DMA_NS_REG
// Relative Address        0x00000440
// Absolute Address        0xF8000440
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DMAC TrustZone Config
//
// Register TZ_DMA_NS_REG Details
//
// RESERVED                                        Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define TZ_DMA_NS_DMAC_NS_MASK  0x00000001UL    // TZ security (connected to boot_manager_ns on
#define TZ_DMA_NS_DMAC_NS_BPOS  0UL             // DMAC):
                                                // 0: secure, DMAC operates in the secure state.
                                                // 1: non-secure, DMAC operates in the non-secure
                                                // state.


//------------------------------------------------------------------------------
//
// Register (SLCR) TZ_DMA_IRQ_NS
//
// Name                    TZ_DMA_IRQ_NS_REG
// Relative Address        0x00000444
// Absolute Address        0xF8000444
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DMAC TrustZone Config for Interrupts
//
// Register TZ_DMA_IRQ_NS_REG Details
//
// RESERVED                                               Properties: Bits: 31:16, Type: rw, Reset Value: 0x0

                                                       // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define TZ_DMA_IRQ_NS_DMA_IRQ_NS_MASK  0x0000FFFFUL    // TZ security (connected to boot_irq_ns on DMAC):
#define TZ_DMA_IRQ_NS_DMA_IRQ_NS_BPOS  0UL             // 0: secure, DMAC operates in the secure state.
                                                       // 1: non-secure, DMAC interrupt/event bit is in the
                                                       // non-secure state.


//------------------------------------------------------------------------------
//
// Register (SLCR) TZ_DMA_PERIPH_NS
//
// Name                    TZ_DMA_PERIPH_NS_REG
// Relative Address        0x00000448
// Absolute Address        0xF8000448
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DMAC TrustZone Config for Peripherals
//
// Register TZ_DMA_PERIPH_NS_REG Details
//
// RESERVED                                                      Properties: Bits: 31:4, Type: rw, Reset Value: 0x0

                                                              // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
#define TZ_DMA_PERIPH_NS_DMAC_PERIPH_NS_MASK  0x0000000FUL    // TZ security (connected to boot_periph_ns on
#define TZ_DMA_PERIPH_NS_DMAC_PERIPH_NS_BPOS  0UL             // DMAC):
                                                              // 0: secure, DMAC operates in the secure state.
                                                              // 1: non-secure, reset value: DMAC peripheral i/f is
                                                              // in the non-secure state.


//------------------------------------------------------------------------------
//
// Register (SLCR) PSS_IDCODE
//
// Name                    PSS_IDCODE_REG
// Relative Address        0x00000530
// Absolute Address        0xF8000530
// Width                   32 bits
// Access Type             ro
// Reset Value             x
// Description             PS IDCODE
//
// Register PSS_IDCODE_REG Details
//
                                                         // Properties: Bits: 31:28, Type: ro, Reset Value: x
#define PSS_IDCODE_REVISION_MASK         0xF0000000UL    // Revision code
#define PSS_IDCODE_REVISION_BPOS         28UL            // 

                                                         // Properties: Bits: 27:21, Type: ro, Reset Value: 0x1B
#define PSS_IDCODE_FAMILY_MASK           0x0FE00000UL    // Family code
#define PSS_IDCODE_FAMILY_BPOS           21UL            // 

                                                         // Properties: Bits: 20:17, Type: ro, Reset Value: 0x9
#define PSS_IDCODE_SUBFAMILY_MASK        0x001E0000UL    // Subfamily code
#define PSS_IDCODE_SUBFAMILY_BPOS        17UL            // 

                                                         // Properties: Bits: 16:12, Type: ro, Reset Value: x
#define PSS_IDCODE_DEVICE_MASK           0x0001F000UL    // Device code
#define PSS_IDCODE_DEVICE_BPOS           12UL            // z007s: 0x03
                                                         // z012s: 0x1c
                                                         // z014s: 0x08
                                                         // z010: 0x02
                                                         // z015: 0x1b
                                                         // z020: 0x07
                                                         // z030: 0x0c
                                                         // z035: 0x12
                                                         // z045: 0x11
                                                         // z100: 0x16

                                                         // Properties: Bits: 11:1, Type: ro, Reset Value: 0x49
#define PSS_IDCODE_MANUFACTURER_ID_MASK  0x00000FFEUL    // Manufacturer ID
#define PSS_IDCODE_MANUFACTURER_ID_BPOS  1UL             // 

// RESERVED                                                 Properties: Bit: 0, Type: ro, Reset Value: 0x1


//------------------------------------------------------------------------------
//
// Register (SLCR) DDR_URGENT
//
// Name                    DDR_URGENT_REG
// Relative Address        0x00000600
// Absolute Address        0xF8000600
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DDR Urgent Control
//
// Register DDR_URGENT_REG Details
//
// RESERVED                                             Properties: Bits: 31:8, Type: rw, Reset Value: 0x0

                                                     // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define DDR_URGENT_S3_ARURGENT_MASK  0x00000080UL    // Set Read port 3 prioritization.
#define DDR_URGENT_S3_ARURGENT_BPOS  7UL             // 

                                                     // Properties: Bit: 6, Type: rw, Reset Value: 0x0
#define DDR_URGENT_S2_ARURGENT_MASK  0x00000040UL    // Set Read port 3 prioritization.
#define DDR_URGENT_S2_ARURGENT_BPOS  6UL             // 

                                                     // Properties: Bit: 5, Type: rw, Reset Value: 0x0
#define DDR_URGENT_S1_ARURGENT_MASK  0x00000020UL    // Set Read port 2 prioritization.
#define DDR_URGENT_S1_ARURGENT_BPOS  5UL             // 

                                                     // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define DDR_URGENT_S0_ARURGENT_MASK  0x00000010UL    // Set Read port 0 prioritization.
#define DDR_URGENT_S0_ARURGENT_BPOS  4UL             // 

                                                     // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define DDR_URGENT_S3_AWURGENT_MASK  0x00000008UL    // Set Write port 3 prioritization.
#define DDR_URGENT_S3_AWURGENT_BPOS  3UL             // 

                                                     // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define DDR_URGENT_S2_AWURGENT_MASK  0x00000004UL    // Set Write port 2 prioritization.
#define DDR_URGENT_S2_AWURGENT_BPOS  2UL             // 

                                                     // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define DDR_URGENT_S1_AWURGENT_MASK  0x00000002UL    // Set Write port 1 prioritization.
#define DDR_URGENT_S1_AWURGENT_BPOS  1UL             // 

                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define DDR_URGENT_S0_AWURGENT_MASK  0x00000001UL    // Set Write port 0 prioritization.
#define DDR_URGENT_S0_AWURGENT_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (SLCR) DDR_CAL_START
//
// Name                    DDR_CAL_START_REG
// Relative Address        0x0000060C
// Absolute Address        0xF800060C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DDR Calibration Start Triggers
//
// Register DDR_CAL_START_REG Details
//
// RESERVED                                                    Properties: Bits: 31:2, Type: rw, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: wo, Reset Value: 0x0
#define DDR_CAL_START_START_CAL_DLL_MASK    0x00000002UL    // This register creates a pulse that is first
#define DDR_CAL_START_START_CAL_DLL_BPOS    1UL             // synchronised into the ddr_clk domain and then
                                                            // directly drives the co_gs_dll_calib input into the
                                                            // DDR controller. This signal is a command that
                                                            // indicates to the controller to issue a dll_calib to the
                                                            // DRAM. This signal should pulse for 1
                                                            // ddrc_core_clk clock cycle to request a dll_calib to
                                                            // be issued. This is only required if the DDR
                                                            // controller register dis_dll_calib          is 1. If
                                                            // dis_dll_calib          is 0, the controller will
                                                            // automatically issue DLL Calibs.
                                                            // 0: Do nothing.
                                                            // 1: Start DLL calibration command.
                                                            // A read of this register returns zero.

                                                            // Properties: Bit: 0, Type: wo, Reset Value: 0x0
#define DDR_CAL_START_START_CAL_SHORT_MASK  0x00000001UL    // This register creates a pulse that is first
#define DDR_CAL_START_START_CAL_SHORT_BPOS  0UL             // synchronized into the ddr_clk domain and then
                                                            // directly drives the co_gs_zq_calib_short input
                                                            // into the DDR controller. This is required to pulse
                                                            // for 1 clock to issue ZQ Calibration Short
                                                            // Command to the DDR. There should be a
                                                            // minimum of 512 clks gap between 2 ZQ Calib
                                                            // Short commands from the core. If DDR controller
                                                            // register reg_ddrc_dis_auto_zq=0, asserting
                                                            // co_gs_zq_calib_short is not required, as this will
                                                            // be done automatically. If
                                                            // reg_ddrc_dis_auto_zq=1, then the core logic is
                                                            // required to assert co_gs_zq_calib_short
                                                            // periodically to update DDR3 ZQ calibration.
                                                            // 0: Do nothing.
                                                            // 1: Start ZQ calibration short command.
                                                            // A read of this register returns zero.


//------------------------------------------------------------------------------
//
// Register (SLCR) DDR_REF_START
//
// Name                    DDR_REF_START_REG
// Relative Address        0x00000614
// Absolute Address        0xF8000614
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DDR Refresh Start Triggers
//
// Register DDR_REF_START_REG Details
//
// RESERVED                                              Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 0, Type: wo, Reset Value: 0x0
#define DDR_REF_START_START_REF_MASK  0x00000001UL    // This register creates a pulse that is first
#define DDR_REF_START_START_REF_BPOS  0UL             // synchronized into the ddr_clk domain and then
                                                      // directly drives the co_gs_rank_refresh input into
                                                      // the DDR controller. This register must be used
                                                      // with the Virage DRAM controller register bit
                                                      // reg_ddrc_dis_auto_refresh.
                                                      // This signal is a command that indicates to the
                                                      // controller to issue a refresh to the DRAM. One bit
                                                      // per rank. This signal should pulse for 1
                                                      // ddrc_core_clk clock cycle to request a refresh to be
                                                      // issued.
                                                      // 0: Do nothing.
                                                      // 1: Start refresh.
                                                      // A read of this register returns zero.


//------------------------------------------------------------------------------
//
// Register (SLCR) DDR_CMD_STA
//
// Name                    DDR_CMD_STA_REG
// Relative Address        0x00000618
// Absolute Address        0xF8000618
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DDR Command Store Status
//
// Register DDR_CMD_STA_REG Details
//
// RESERVED                                               Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                       // Properties: Bit: 0, Type: ro, Reset Value: 0x0
#define DDR_CMD_STA_CMD_Q_NEMPTY_MASK  0x00000001UL    // DDR controller command store fill status.
#define DDR_CMD_STA_CMD_Q_NEMPTY_BPOS  0UL             // 0: indicates DDRC command store is empty.
                                                       // 1: indicates there are commands pending in
                                                       // DDRC command store.
                                                       // This register is a continuous monitor of the
                                                       // ddrc_co_q_not_empty output from the DDR
                                                       // controller, which is first synchronised from
                                                       // ddr_clk into amba1x_clk.


//------------------------------------------------------------------------------
//
// Register (SLCR) DDR_URGENT_SEL
//
// Name                    DDR_URGENT_SEL_REG
// Relative Address        0x0000061C
// Absolute Address        0xF800061C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DDR Urgent Select
//
// Register DDR_URGENT_SEL_REG Details
//
// RESERVED                                                   Properties: Bits: 31:16, Type: rw, Reset Value: 0x0

                                                           // Properties: Bits: 15:14, Type: rw, Reset Value: 0x0
#define DDR_URGENT_SEL_S3_ARQOS_MODE_MASK  0x0000C000UL    // Selects between the AXI port s3_awqos[3], fabric
#define DDR_URGENT_SEL_S3_ARQOS_MODE_BPOS  14UL            // signal or static register to drive the DDRC urgent
                                                           // bit.
                                                           // 00: DDRC s3_awurgent bit is driven from the
                                                           // 'S3_AWURGENT' field of the
                                                           // DDR_URGENT_VAL register.
                                                           // 01: DDRC s3_awurgent bit is driven from the
                                                           // s3_awqos bit.
                                                           // 10: DDRC s3_awurgent bit is driven from the
                                                           // fabric ddr_arb[3] input.
                                                           // 11: undefined

                                                           // Properties: Bits: 13:12, Type: rw, Reset Value: 0x0
#define DDR_URGENT_SEL_S2_ARQOS_MODE_MASK  0x00003000UL    // Selects between the AXI port s2_arqos[3], fabric
#define DDR_URGENT_SEL_S2_ARQOS_MODE_BPOS  12UL            // signal or static register to drive the DDRC urgent
                                                           // bit.
                                                           // 00: DDRC s2_arurgent bit is driven from the
                                                           // 'S2_ARURGENT' field of the
                                                           // DDR_URGENT_VAL register.
                                                           // 01: DDRC s2_arurgent bit is driven from the
                                                           // s2_arqos bit.
                                                           // 10: DDRC s2_arurgent bit is driven from the fabric
                                                           // ddr_arb[2] input.
                                                           // 11: undefined

                                                           // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
#define DDR_URGENT_SEL_S1_ARQOS_MODE_MASK  0x00000C00UL    // Selects between the AXI port s1_arqos[3], fabric
#define DDR_URGENT_SEL_S1_ARQOS_MODE_BPOS  10UL            // signal or static register to drive the DDRC urgent
                                                           // bit.
                                                           // 00: DDRC s1_arurgent bit is driven from the
                                                           // 'S1_ARURGENT' field of the
                                                           // DDR_URGENT_VAL register.
                                                           // 01: DDRC s1_arurgent bit is driven from the
                                                           // s1_arqos bit.
                                                           // 10: DDRC s1_arurgent bit is driven from the fabric
                                                           // ddr_arb[1] input.
                                                           // 11: undefined.

                                                           // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
#define DDR_URGENT_SEL_S0_ARQOS_MODE_MASK  0x00000300UL    // Selects between the fabric signal or static register
#define DDR_URGENT_SEL_S0_ARQOS_MODE_BPOS  8UL             // to drive the DDRC urgent bit.
                                                           // 00: DDRC s0_arurgent bit is driven from the
                                                           // 'S0_ARURGENT' field of the
                                                           // DDR_URGENT_VAL register.
                                                           // x1: undefined
                                                           // 10: DDRC s0_arurgent bit is driven from the fabric
                                                           // ddr_arb[0] input.
                                                           // 11: undefined

                                                           // Properties: Bits: 7:6, Type: rw, Reset Value: 0x0
#define DDR_URGENT_SEL_S3_AWQOS_MODE_MASK  0x000000C0UL    // Selects between the AXI port s3_awqos[3], fabric
#define DDR_URGENT_SEL_S3_AWQOS_MODE_BPOS  6UL             // signal or static register to drive the DDRC urgent
                                                           // bit.
                                                           // 00: DDRC s3_awurgent bit is driven from the
                                                           // 'S3_AWURGENT' field of the
                                                           // DDR_URGENT_VAL register.
                                                           // 01: DDRC s3_awurgent bit is driven from the
                                                           // s3_awqos bit.
                                                           // 10: DDRC s3_awurgent bit is driven from the
                                                           // fabric ddr_arb[3] input.
                                                           // 11: undefined

                                                           // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
#define DDR_URGENT_SEL_S2_AWQOS_MODE_MASK  0x00000030UL    // Selects between the AXI port s2_awqos[3], fabric
#define DDR_URGENT_SEL_S2_AWQOS_MODE_BPOS  4UL             // signal or static register to drive the DDRC urgent
                                                           // bit.
                                                           // 00: DDRC s2_awurgent bit is driven from the
                                                           // 'S2_AWURGENT' field of the
                                                           // DDR_URGENT_VAL register.
                                                           // 01: DDRC s2_awurgent bit is driven from the
                                                           // s2_awqos bit.
                                                           // 10: DDRC s2_awurgent bit is driven from the
                                                           // fabric ddr_arb[2] input.
                                                           // 11: undefined

                                                           // Properties: Bits: 3:2, Type: rw, Reset Value: 0x0
#define DDR_URGENT_SEL_S1_AWQOS_MODE_MASK  0x0000000CUL    // Selects between the AXI port s1_awqos[3], fabric
#define DDR_URGENT_SEL_S1_AWQOS_MODE_BPOS  2UL             // signal or static register to drive the DDRC urgent
                                                           // bit.
                                                           // 00: DDRC s1_awurgent bit is driven from the
                                                           // 'S1_AWURGENT' field of the
                                                           // DDR_URGENT_VAL register.
                                                           // 01: DDRC s1_awurgent bit is driven from the
                                                           // s1_awqos bit.
                                                           // 10: DDRC s1_awurgent bit is driven from the
                                                           // fabric ddr_arb[1] input.
                                                           // 11: undefined

                                                           // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
#define DDR_URGENT_SEL_S0_AWQOS_MODE_MASK  0x00000003UL    // Selects between the fabric signal or static register
#define DDR_URGENT_SEL_S0_AWQOS_MODE_BPOS  0UL             // to drive the DDRC urgent bit.
                                                           // 00: The DDRC s0_awurgent bit is driven from the
                                                           // 'S0_AWURGENT' field of the
                                                           // DDR_URGENT_VAL register.
                                                           // x1: undefined
                                                           // 10: The DDRC s0_awurgent bit is driven from the
                                                           // fabric ddr_arb[0] input.
                                                           // 11: undefined


//------------------------------------------------------------------------------
//
// Register (SLCR) DDR_DFI_STATUS
//
// Name                    DDR_DFI_STATUS_REG
// Relative Address        0x00000620
// Absolute Address        0xF8000620
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DDR DFI status
//
// Register DDR_DFI_STATUS_REG Details
//
// RESERVED                                                Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                        // Properties: Bit: 0, Type: ro, Reset Value: 0x0
#define DDR_DFI_STATUS_DFI_CAL_ST_MASK  0x00000001UL    // This signal is intended to allow a calibration of the
#define DDR_DFI_STATUS_DFI_CAL_ST_BPOS  0UL             // IOB's at a time when the DDR controller is in its
                                                        // calibration mode, i.e. during an idle period.


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_00
//
// Name                    MIO_PIN_00_REG
// Relative Address        0x00000700
// Absolute Address        0xF8000700
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 0 Control
//
// Register MIO_PIN_00_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_00_DISABLE_RCVR_MASK  0x00002000UL    // Disable HSTL Input Buffer to save power when it
#define MIO_PIN_00_DISABLE_RCVR_BPOS  13UL            // is an output-only (IO_Type must be HSTL).
                                                      // 0: enable
                                                      // 1: disable

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_00_PULLUP_MASK        0x00001000UL    // Enables Pullup on IO Buffer pin
#define MIO_PIN_00_PULLUP_BPOS        12UL            // 0: disable
                                                      // 1: enable

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_00_IO_TYPE_MASK       0x00000E00UL    // Select the IO Buffer Type.
#define MIO_PIN_00_IO_TYPE_BPOS       9UL             // 000: Reserved
                                                      // 001: LVCMOS18
                                                      // 010: LVCMOS25
                                                      // 011: LVCMOS33
                                                      // 100: HSTL
                                                      // 101: Reserved
                                                      // 110: Reserved
                                                      // 111: Reserved

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_00_SPEED_MASK         0x00000100UL    // Select IO Buffer Edge Rate, applicable when
#define MIO_PIN_00_SPEED_BPOS         8UL             // IO_Type is LVCMOS18, LVCMOS25 or
                                                      // LVCMOS33.
                                                      // 0: Slow CMOS edge
                                                      // 1: Fast CMOS edge

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_00_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_00_L3_SEL_BPOS        5UL             // 000: GPIO 0 (bank 0), Input/Output
                                                      // others: reserved

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_00_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_00_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Chip Select 0, Output
                                                      // 10: NAND Flash Chip Select, Output
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_00_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_00_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_00_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_00_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 1 chip select, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_00_TRI_ENABLE_MASK    0x00000001UL    // Tri-state enable, active high.
#define MIO_PIN_00_TRI_ENABLE_BPOS    0UL             // 0: disable
                                                      // 1: enable


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_01
//
// Name                    MIO_PIN_01_REG
// Relative Address        0x00000704
// Absolute Address        0xF8000704
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 1 Control
//
// Register MIO_PIN_01_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_01_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_01_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_01_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_01_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_01_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_01_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_01_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_01_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_01_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_01_L3_SEL_BPOS        5UL             // 000: GPIO 1 (bank 0), Input/Output
                                                      // others: reserved

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_01_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_01_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM Address Bit 25, Output
                                                      // 10: SRAM/NOR Chip Select 1, Output
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_01_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_01_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_01_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_01_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 0 Chip Select, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_01_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_01_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_02
//
// Name                    MIO_PIN_02_REG
// Relative Address        0x00000708
// Absolute Address        0xF8000708
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000601
// Description             MIO Pin 2 Control
//
// Register MIO_PIN_02_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_02_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_02_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x0
#define MIO_PIN_02_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_02_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_02_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_02_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_02_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_02_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_02_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_02_L3_SEL_BPOS        5UL             // 000: GPIO 2 (bank 0), Input/Output
                                                      // others: reserved

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_02_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_02_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: NAND Flash ALEn, Output
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_02_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_02_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 8, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_02_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_02_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 0 IO Bit 0, Input/Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_02_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_02_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_03
//
// Name                    MIO_PIN_03_REG
// Relative Address        0x0000070C
// Absolute Address        0xF800070C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000601
// Description             MIO Pin 3 Control
//
// Register MIO_PIN_03_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_03_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_03_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x0
#define MIO_PIN_03_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_03_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_03_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_03_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_03_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_03_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_03_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_03_L3_SEL_BPOS        5UL             // 000: GPIO 3 (bank 0), Input/Output
                                                      // others: reserved

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_03_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_03_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Data bit 0, Input/Output
                                                      // 10: NAND WE_B, Output
                                                      // 11: SDIO 1 Card Power, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_03_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_03_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 9, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_03_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_03_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 0 IO Bit 1, Input/Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_03_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_03_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_04
//
// Name                    MIO_PIN_04_REG
// Relative Address        0x00000710
// Absolute Address        0xF8000710
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000601
// Description             MIO Pin 4 Control
//
// Register MIO_PIN_04_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_04_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_04_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x0
#define MIO_PIN_04_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_04_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_04_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_04_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_04_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_04_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_04_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_04_L3_SEL_BPOS        5UL             // 000: GPIO 4 (bank 0), Input/Output
                                                      // others: reserved

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_04_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_04_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Data Bit 1, Input/Output
                                                      // 10: NAND Flash IO Bit 2, Input/Output
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_04_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_04_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 10, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_04_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_04_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 0 IO Bit 2, Input/Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_04_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_04_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_05
//
// Name                    MIO_PIN_05_REG
// Relative Address        0x00000714
// Absolute Address        0xF8000714
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000601
// Description             MIO Pin 5 Control
//
// Register MIO_PIN_05_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_05_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_05_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x0
#define MIO_PIN_05_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_05_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_05_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_05_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_05_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_05_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_05_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_05_L3_SEL_BPOS        5UL             // 000: GPIO 5 (bank 0), Input/Output
                                                      // others: reserved

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_05_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_05_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Data Bit 2, Input/Output
                                                      // 10: NAND Flash IO Bit 0, Input/Output
                                                      // 11: SDIO 1
                                                      // Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_05_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_05_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 11, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_05_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_05_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 0 IO Bit 3, Input/Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_05_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_05_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_06
//
// Name                    MIO_PIN_06_REG
// Relative Address        0x00000718
// Absolute Address        0xF8000718
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000601
// Description             MIO Pin 6 Control
//
// Register MIO_PIN_06_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_06_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_06_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x0
#define MIO_PIN_06_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_06_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_06_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_06_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_06_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_06_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_06_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_06_L3_SEL_BPOS        5UL             // 000: GPIO 6 (bank 0), Input/Output
                                                      // others: reserved

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_06_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_06_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Data Bit 3, Input/Output
                                                      // 10: NAND Flash IO Bit 1, Input/Output
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_06_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_06_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 12, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_06_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_06_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 0 Clock, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_06_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_06_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_07
//
// Name                    MIO_PIN_07_REG
// Relative Address        0x0000071C
// Absolute Address        0xF800071C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000601
// Description             MIO Pin 7 Control
//
// Register MIO_PIN_07_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_07_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_07_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x0
#define MIO_PIN_07_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_07_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_07_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_07_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_07_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_07_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_07_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_07_L3_SEL_BPOS        5UL             // 000: GPIO 7 (bank 0), Output-only
                                                      // others: reserved

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_07_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_07_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR OE_B, Output
                                                      // 10: NAND Flash CLE_B, Output
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_07_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_07_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 13, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_07_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_07_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_07_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_07_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_08
//
// Name                    MIO_PIN_08_REG
// Relative Address        0x00000720
// Absolute Address        0xF8000720
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000601
// Description             MIO Pin 8 Control
//
// Register MIO_PIN_08_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_08_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_08_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x0
#define MIO_PIN_08_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_08_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_08_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_08_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_08_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_08_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_08_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_08_L3_SEL_BPOS        5UL             // 000: GPIO 8 (bank 0), Output-only
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: SRAM/NOR BLS_B, Output
                                                      // 011 to 110: reserved
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_08_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_08_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: NAND Flash RD_B, Output
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_08_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_08_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 14, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_08_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_08_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI Feedback Clock, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_08_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_08_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_09
//
// Name                    MIO_PIN_09_REG
// Relative Address        0x00000724
// Absolute Address        0xF8000724
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 9 Control
//
// Register MIO_PIN_09_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_09_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_09_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_09_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_09_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_09_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_09_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_09_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_09_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_09_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_09_L3_SEL_BPOS        5UL             // 000: GPIO 9 (bank 0), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010 to 110: reserved
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_09_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_09_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Data Bit 6, Input/Output
                                                      // 10: NAND Flash IO Bit 4, Input/Output
                                                      // 11: SDIO 1
                                                      // Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_09_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_09_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 15, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_09_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_09_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 1 Flash Memory Clock, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_09_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_09_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_10
//
// Name                    MIO_PIN_10_REG
// Relative Address        0x00000728
// Absolute Address        0xF8000728
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 10 Control
//
// Register MIO_PIN_10_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_10_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_10_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_10_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_10_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_10_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_10_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_10_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_10_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_10_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_10_L3_SEL_BPOS        5UL             // 000: GPIO 10 (bank 0), Input/Output
                                                      // 001: CAN 0 Rx, Input
                                                      // 010: I2C 0 Serial Clock, Input/Ouput
                                                      // 011: PJTAG TDI, Input
                                                      // 100: SDIO 1 IO Bit 0, Input/Output
                                                      // 101: SPI 1 MOSI, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 0 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_10_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_10_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Data Bit 7, Input/Output
                                                      // 10: NAND Flash IO Bit 5, Input/Output
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_10_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_10_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 2, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_10_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_10_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 1 IO Bit 0, Input/Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_10_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_10_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_11
//
// Name                    MIO_PIN_11_REG
// Relative Address        0x0000072C
// Absolute Address        0xF800072C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 11 Control
//
// Register MIO_PIN_11_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_11_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_11_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_11_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_11_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_11_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_11_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_11_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_11_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_11_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_11_L3_SEL_BPOS        5UL             // 000: GPIO 11 (bank 0), Input/Output
                                                      // 001: CAN 0 Tx, Output
                                                      // 010: I2C 0 Serial Data, Input/Output
                                                      // 011: PJTAG TDO, Output
                                                      // 100: SDIO 1 Command, Input/Output
                                                      // 101: SPI 1 MISO, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 0 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_11_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_11_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Data Bit 4, Input/Output
                                                      // 10: NAND Flash IO Bit 6, Input/Output
                                                      // 11: SDIO 1
                                                      // Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_11_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_11_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 3, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_11_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_11_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 1 IO Bit 1, Input/Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_11_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_11_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_12
//
// Name                    MIO_PIN_12_REG
// Relative Address        0x00000730
// Absolute Address        0xF8000730
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 12 Control
//
// Register MIO_PIN_12_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_12_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_12_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_12_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_12_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_12_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_12_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_12_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_12_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_12_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_12_L3_SEL_BPOS        5UL             // 000: GPIO 12 (bank 0), Input/Output
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: I2C 1 Serial Clock, Input/Output
                                                      // 011: PJTAG TCK, Input
                                                      // 100: SDIO 1 Clock, Input/Output
                                                      // 101: SPI 1 Serial Clock, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_12_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_12_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: NAND Flash IO Bit 7, Input/Output
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_12_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_12_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Clock, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_12_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_12_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 1 IO Bit 2, Input/Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_12_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_12_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_13
//
// Name                    MIO_PIN_13_REG
// Relative Address        0x00000734
// Absolute Address        0xF8000734
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 13 Control
//
// Register MIO_PIN_13_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_13_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_13_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_13_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_13_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_13_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_13_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_13_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_13_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_13_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_13_L3_SEL_BPOS        5UL             // 000: GPIO 13 (bank 0), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010: I2C 1 Serial Data, Input/Output
                                                      // 011: PJTAG TMS, Input
                                                      // 100: SDIO 1 IO Bit 1, Input/Output
                                                      // 101: SPI 1 Slave Select 0, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_13_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_13_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Data Bit 5, Input/Output
                                                      // 10: NAND Flash IO Bit 3, Input/Output
                                                      // 11:
                                                      // SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_13_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_13_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Control Signal, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_13_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_13_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Quad SPI 1 IO Bit 3, Input/Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_13_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_13_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_14
//
// Name                    MIO_PIN_14_REG
// Relative Address        0x00000738
// Absolute Address        0xF8000738
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 14 Control
//
// Register MIO_PIN_14_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_14_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_14_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_14_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_14_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_14_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_14_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_14_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_14_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_14_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_14_L3_SEL_BPOS        5UL             // 000: GPIO 14 (bank 0), Input/Output
                                                      // 001: CAN 0 Rx, Input
                                                      // 010: I2C 0 Serial Clock, Input/Ouput
                                                      // 011: SWDT Clock, Input
                                                      // 100: SDIO 1 IO Bit 2, Input/Output
                                                      // 101: SPI 1 slave select 1, Output
                                                      // 110: reserved
                                                      // 111: UART 0 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_14_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_14_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: NAND Flash Busy, Input
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_14_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_14_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 0, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_14_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_14_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1= Not Used

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_14_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_14_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_15
//
// Name                    MIO_PIN_15_REG
// Relative Address        0x0000073C
// Absolute Address        0xF800073C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 15 Control
//
// Register MIO_PIN_15_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_15_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_15_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_15_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_15_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_15_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_15_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_15_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_15_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_15_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_15_L3_SEL_BPOS        5UL             // 000: GPIO 15 (bank 0), Input/Output
                                                      // 001: CAN 0 Tx, Output
                                                      // 010: I2C 0 Serial Data, Input/Output
                                                      // 011: SWDT Reset, Output
                                                      // 100: SDIO 1 IO Bit 3, Input/Output
                                                      // 101: SPI 1 Slave Select 2, Output
                                                      // 110: reserved
                                                      // 111: UART 0 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_15_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_15_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 0, Output
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_15_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_15_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 1, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_15_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_15_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1= Not Used

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_15_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_15_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_16
//
// Name                    MIO_PIN_16_REG
// Relative Address        0x00000740
// Absolute Address        0xF8000740
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 16 Control
//
// Register MIO_PIN_16_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_16_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_16_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_16_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_16_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_16_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_16_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_16_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_16_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_16_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_16_L3_SEL_BPOS        5UL             // 000: GPIO 16 (bank 0), Input/Output
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: I2C 1 Serial Clock, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 Clock, Input/Output
                                                      // 101: SPI 0 Serial Clock, Input/Output
                                                      // 110: TTC 1 Wave, Output
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_16_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_16_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 1, Output
                                                      // 10: NAND Flash IO Bit 8, Input/Output
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_16_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_16_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 4, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_16_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_16_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII Tx Clock, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_16_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_16_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_17
//
// Name                    MIO_PIN_17_REG
// Relative Address        0x00000744
// Absolute Address        0xF8000744
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 17 Control
//
// Register MIO_PIN_17_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_17_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_17_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_17_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_17_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_17_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_17_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_17_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_17_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_17_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_17_L3_SEL_BPOS        5UL             // 000: GPIO 17 (bank 0), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010: I2C 1 Serial Data, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 Command, Input/Output
                                                      // 101: SPI 0 MISO, Input/Output
                                                      // 110 TTC 1 Clock, Input
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_17_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_17_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 2, Output
                                                      // 10: NAND Flash IO Bit 9, Input/Output
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_17_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_17_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 5, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_17_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_17_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII TxD Bit 0, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_17_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_17_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_18
//
// Name                    MIO_PIN_18_REG
// Relative Address        0x00000748
// Absolute Address        0xF8000748
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 18 Control
//
// Register MIO_PIN_18_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_18_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_18_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_18_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_18_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_18_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_18_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_18_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_18_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_18_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_18_L3_SEL_BPOS        5UL             // 000: GPIO 18 (bank 0), Input/Output
                                                      // 001: CAN 0 Rx, Input
                                                      // 010: I2C 0 Serial Clock, Input/Ouput
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 0, Input/Output
                                                      // 101: SPI 0 Slave Select 0, Input/Output
                                                      // 110: TTC 0 Wave, Output
                                                      // 111: UART 0 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_18_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_18_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 3, Output
                                                      // 10: NAND Flash IO Bit 10, Input/Output
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_18_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_18_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 6, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_18_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_18_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII TxD Bit 1, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_18_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_18_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_19
//
// Name                    MIO_PIN_19_REG
// Relative Address        0x0000074C
// Absolute Address        0xF800074C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 19 Control
//
// Register MIO_PIN_19_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_19_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_19_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_19_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_19_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_19_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_19_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_19_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_19_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_19_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_19_L3_SEL_BPOS        5UL             // 000: GPIO 19 (bank 0), Input/Output
                                                      // 001: CAN 0 Tx, Output
                                                      // 010: I2C 0 Serial Data, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 1, Input/Output
                                                      // 101: SPI 0 Slave Select 1, Output
                                                      // 110: TTC 0 Clock, Input
                                                      // 111: UART 0 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_19_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_19_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 4, Output
                                                      // 10: NAND Flash IO Bit 11, Input/Output
                                                      // 111: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_19_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_19_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 7, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_19_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_19_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII TxD Bit 2, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_19_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_19_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_20
//
// Name                    MIO_PIN_20_REG
// Relative Address        0x00000750
// Absolute Address        0xF8000750
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 20 Control
//
// Register MIO_PIN_20_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_20_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_20_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_20_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_20_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_20_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_20_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_20_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_20_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_20_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_20_L3_SEL_BPOS        5UL             // 000: GPIO 20 (bank 0), Input/Output
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: I2C 1 Serial Clock, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 2, Input/Output
                                                      // 101: SPI 0 Slave Select 2, Output
                                                      // 110: reserved
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_20_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_20_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 5, Output
                                                      // 10: NAND Flash IO Bit 12, Input/Output
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_20_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_20_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_20_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_20_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII TxD Bit 3, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_20_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_20_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_21
//
// Name                    MIO_PIN_21_REG
// Relative Address        0x00000754
// Absolute Address        0xF8000754
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 21 Control
//
// Register MIO_PIN_21_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_21_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_21_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_21_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_21_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_21_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_21_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_21_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_21_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_21_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_21_L3_SEL_BPOS        5UL             // 000: GPIO 21 (bank 0), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010: I2C 1 Serial Data, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 3, Input/Output
                                                      // 101: SPI 0 MOSI, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_21_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_21_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 6, Output
                                                      // 10: NAND Flash IO Bit 13, Input/Output
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_21_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_21_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_21_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_21_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII Tx Control, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_21_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_21_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_22
//
// Name                    MIO_PIN_22_REG
// Relative Address        0x00000758
// Absolute Address        0xF8000758
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 22 Control
//
// Register MIO_PIN_22_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_22_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_22_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_22_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_22_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_22_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_22_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_22_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_22_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_22_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_22_L3_SEL_BPOS        5UL             // 000: GPIO 22 (bank 0), Input/Output
                                                      // 001: CAN 0 Rx, Input
                                                      // 010: I2C 0 Serial Clock, Input/Ouput
                                                      // 011: PJTAG TDI, Input
                                                      // 100: SDIO 1 IO Bit 0, Input/Output
                                                      // 101: SPI 1 MOSI, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 0 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_22_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_22_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 7, Output
                                                      // 10: NAND Flash IO Bit 14, Input/Output
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_22_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_22_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 2, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_22_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_22_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII Rx Clock, Input

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_22_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_22_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_23
//
// Name                    MIO_PIN_23_REG
// Relative Address        0x0000075C
// Absolute Address        0xF800075C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 23 Control
//
// Register MIO_PIN_23_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_23_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_23_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_23_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_23_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_23_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_23_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_23_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_23_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_23_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_23_L3_SEL_BPOS        5UL             // 000: GPIO 23 (bank 0), Input/Output
                                                      // 001: CAN 0 Tx, Output
                                                      // 010: I2C 0 Serial Data, Input/Output
                                                      // 011: PJTAG TDO, Output
                                                      // 100: SDIO 1 Command, Input/Output
                                                      // 101: SPI 1 MISO, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 0 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_23_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_23_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 8, Output
                                                      // 10: NAND Flash IO Bit 15, Input/Output
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_23_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_23_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 3, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_23_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_23_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII RxD 0, Input

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_23_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_23_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_24
//
// Name                    MIO_PIN_24_REG
// Relative Address        0x00000760
// Absolute Address        0xF8000760
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 24 Control
//
// Register MIO_PIN_24_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_24_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_24_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_24_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_24_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_24_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_24_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_24_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_24_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_24_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_24_L3_SEL_BPOS        5UL             // 000: GPIO 24 (bank 0), Input/Output
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: I2C 1 Serial Clock, Input/Output
                                                      // 011: PJTAG TCK, Input
                                                      // 100: SDIO 1 Clock, Input/Output
                                                      // 101: SPI 1 Serial Clock, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_24_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_24_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 9, Output
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_24_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_24_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Clock output, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_24_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_24_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII RxD Bit 1, Input

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_24_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_24_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_25
//
// Name                    MIO_PIN_25_REG
// Relative Address        0x00000764
// Absolute Address        0xF8000764
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 25 Control
//
// Register MIO_PIN_25_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_25_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_25_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_25_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_25_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_25_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_25_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_25_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_25_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_25_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_25_L3_SEL_BPOS        5UL             // 000: GPIO 25 (bank 0), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010: I2C 1 Serial Data, Input/Output
                                                      // 011: PJTAG TMS, Input
                                                      // 100: SDIO 1 IO Bit 1, Input/Output
                                                      // 101: SPI 1 Slave Select 0, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_25_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_25_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 10, Output
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_25_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_25_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Control Signal, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_25_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_25_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII RxD Bit2, Input

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_25_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_25_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_26
//
// Name                    MIO_PIN_26_REG
// Relative Address        0x00000768
// Absolute Address        0xF8000768
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 26 Control
//
// Register MIO_PIN_26_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_26_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_26_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_26_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_26_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_26_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_26_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_26_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_26_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_26_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_26_L3_SEL_BPOS        5UL             // 000: GPIO 26 (bank 0), Input/Output
                                                      // 001: CAN 0 Rx, Input
                                                      // 010: I2C 0 Serial Clock, Input/Ouput
                                                      // 011: SWDT Clock, Input
                                                      // 100: SDIO 1 IO Bit 2, Input/Output
                                                      // 101: SPI 1 Slave Select 1, Output
                                                      // 110: reserved
                                                      // 111: UART 0 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_26_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_26_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 11, Output
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_26_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_26_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 0, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_26_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_26_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII RxD Bit 3, Input

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_26_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_26_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_27
//
// Name                    MIO_PIN_27_REG
// Relative Address        0x0000076C
// Absolute Address        0xF800076C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 27 Control
//
// Register MIO_PIN_27_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_27_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_27_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_27_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_27_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_27_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_27_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_27_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_27_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_27_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_27_L3_SEL_BPOS        5UL             // 000: GPIO 27 (bank 0), Input/Output
                                                      // 001: CAN 0 Tx, Output
                                                      // 010: I2C 0 Serial Data, Input/Output
                                                      // 011: SWDT Reset, Output
                                                      // 100: SDIO 1 IO Bit 3, Input/Output
                                                      // 101: SPI 1 Slave Select 2, Output
                                                      // 110: reserved
                                                      // 111: UART 0 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_27_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_27_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 12, Output
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_27_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_27_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: Trace Port Data Bit 1, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_27_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_27_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 0 RGMII Rx Control, Input

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_27_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_27_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_28
//
// Name                    MIO_PIN_28_REG
// Relative Address        0x00000770
// Absolute Address        0xF8000770
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 28 Control
//
// Register MIO_PIN_28_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_28_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_28_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_28_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_28_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_28_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_28_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_28_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_28_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_28_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_28_L3_SEL_BPOS        5UL             // 000: GPIO 28 (bank 0), Input/Output
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: I2C 1 Serial Clock, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 Clock, Input/Output
                                                      // 101: SPI 0 Serial Clock, Input/Output
                                                      // 110: TTC 1 Wave, Output
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_28_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_28_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 13, Output
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_28_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_28_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Data Bit 4, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_28_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_28_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII Tx Clock, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_28_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_28_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_29
//
// Name                    MIO_PIN_29_REG
// Relative Address        0x00000774
// Absolute Address        0xF8000774
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 29 Control
//
// Register MIO_PIN_29_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_29_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_29_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_29_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_29_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_29_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_29_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_29_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_29_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_29_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_29_L3_SEL_BPOS        5UL             // 000: GPIO 29 (bank 0), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010: I2C 1 Serial Data, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 Command, Input/Output
                                                      // 101: SPI 0 MISO, Input/Output
                                                      // 110: TTC 1 Clock, Input
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_29_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_29_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 14, Output
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_29_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_29_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Direction, Input

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_29_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_29_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII TxD Bit 0, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_29_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_29_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_30
//
// Name                    MIO_PIN_30_REG
// Relative Address        0x00000778
// Absolute Address        0xF8000778
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 30 Control
//
// Register MIO_PIN_30_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_30_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_30_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_30_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_30_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_30_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_30_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_30_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_30_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_30_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_30_L3_SEL_BPOS        5UL             // 000: GPIO 30 (bank 0), Input/Output
                                                      // 001: CAN 0 Rx, Input
                                                      // 010: I2C 0 Serial Clock, Input/Ouput
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 0, Input/Output
                                                      // 101: SPI 0 Slave Select 0, Input/Output
                                                      // 110: TTC 0 Wave, Output
                                                      // 111: UART 0 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_30_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_30_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 15, Output
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_30_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_30_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Stop, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_30_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_30_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII TxD Bit 1, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_30_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_30_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_31
//
// Name                    MIO_PIN_31_REG
// Relative Address        0x0000077C
// Absolute Address        0xF800077C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 31 Control
//
// Register MIO_PIN_31_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_31_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_31_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_31_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_31_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_31_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_31_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_31_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_31_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_31_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_31_L3_SEL_BPOS        5UL             // 000: GPIO 31 (bank 0), Input/Output
                                                      // 001: CAN 0 Tx, Output
                                                      // 010: I2C 0 Serial Data, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 1, Input/Output
                                                      // 101: SPI 0 Slave Select 1, Output
                                                      // 110: TTC 0 Clock, Input
                                                      // 111: UART 0 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_31_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_31_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 16, Output
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_31_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_31_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Next, Input

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_31_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_31_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII TxD Bit 2, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_31_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_31_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_32
//
// Name                    MIO_PIN_32_REG
// Relative Address        0x00000780
// Absolute Address        0xF8000780
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 32 Control
//
// Register MIO_PIN_32_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_32_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_32_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_32_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_32_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_32_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_32_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_32_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_32_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_32_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_32_L3_SEL_BPOS        5UL             // 000: GPIO 32 (bank 1), Input/Output
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: I2C 1 Serial Clock, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 2, Input/Output
                                                      // 101: SPI 0 Slave Select 2, Output
                                                      // 110: reserved
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_32_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_32_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 17, Output
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_32_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_32_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Data Bit 0, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_32_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_32_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII TxD Bit 3, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_32_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_32_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_33
//
// Name                    MIO_PIN_33_REG
// Relative Address        0x00000784
// Absolute Address        0xF8000784
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 33 Control
//
// Register MIO_PIN_33_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_33_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_33_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_33_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_33_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_33_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_33_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_33_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_33_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_33_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_33_L3_SEL_BPOS        5UL             // 000: GPIO 33 (Bank 1), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010: I2C 1 Serial Data, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 3, Input/Output
                                                      // 101: SPI 0 MOSI, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_33_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_33_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 18, Output
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_33_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_33_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Data Bit 1, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_33_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_33_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII Tx Control, Output

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_33_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_33_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_34
//
// Name                    MIO_PIN_34_REG
// Relative Address        0x00000788
// Absolute Address        0xF8000788
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 34 Control
//
// Register MIO_PIN_34_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_34_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_34_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_34_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_34_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_34_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_34_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_34_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_34_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_34_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_34_L3_SEL_BPOS        5UL             // 000: GPIO 34 (bank 1), Input/Output
                                                      // 001: CAN 0 Rx, Input
                                                      // 010: I2C 0 Serial Clock, Input/Ouput
                                                      // 011: PJTAG TDI, Input
                                                      // 100: SDIO 1 IO Bit 0, Input/Output
                                                      // 101: SPI 1 MOSI, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 0 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_34_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_34_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 19, Output
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_34_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_34_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Data Bit 2, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_34_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_34_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII Rx Clock, Input

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_34_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_34_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_35
//
// Name                    MIO_PIN_35_REG
// Relative Address        0x0000078C
// Absolute Address        0xF800078C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 35 Control
//
// Register MIO_PIN_35_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_35_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_35_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_35_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_35_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_35_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_35_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_35_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_35_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_35_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_35_L3_SEL_BPOS        5UL             // 000: GPIO 35 (bank 1), Input/Output
                                                      // 001: CAN 0 Tx, Output
                                                      // 010: I2C 0 Serial Data, Input/Output
                                                      // 011: PJTAG TDO, Output
                                                      // 100: SDIO 1 Command, Input/Output
                                                      // 101: SPI 1 MISO, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 0 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_35_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_35_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 20, Output
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_35_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_35_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Data Bit 3, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_35_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_35_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII RxD data Bit 0, Input

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_35_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_35_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_36
//
// Name                    MIO_PIN_36_REG
// Relative Address        0x00000790
// Absolute Address        0xF8000790
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 36 Control
//
// Register MIO_PIN_36_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_36_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_36_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_36_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_36_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_36_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_36_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_36_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_36_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_36_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_36_L3_SEL_BPOS        5UL             // 000: GPIO 36 (bank 1), Input/Output
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: I2C 1 Serial Clock, Input/Output
                                                      // 011: PJTAG TCK, Input
                                                      // 100: SDIO 1 Clock, Input/Output
                                                      // 101: SPI 1 Clock, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_36_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_36_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 21, Output
                                                      // 10: reserved
                                                      // 11: SDIO
                                                      // 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_36_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_36_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Clock, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_36_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_36_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII Data Bit 1

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_36_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_36_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_37
//
// Name                    MIO_PIN_37_REG
// Relative Address        0x00000794
// Absolute Address        0xF8000794
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 37 Control
//
// Register MIO_PIN_37_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_37_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_37_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_37_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_37_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_37_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_37_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_37_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_37_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_37_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_37_L3_SEL_BPOS        5UL             // 000: GPIO 37 (bank 1), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010: I2C 1 Serial Data, Input/Output
                                                      // 011: PJTAG TMS, Input
                                                      // 100: SDIO 1 IO Bit 1, Input/Output
                                                      // 101: SPI 1 Slave Select 0, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_37_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_37_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 22, Output
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_37_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_37_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Data Bit 5, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_37_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_37_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII RxD Data Bit 2, Input

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_37_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_37_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_38
//
// Name                    MIO_PIN_38_REG
// Relative Address        0x00000798
// Absolute Address        0xF8000798
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 38 Control
//
// Register MIO_PIN_38_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_38_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_38_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_38_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_38_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_38_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_38_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_38_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_38_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_38_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_38_L3_SEL_BPOS        5UL             // 000: GPIO 38 (bank 1), Input/Output
                                                      // 001: CAN 0 Rx, Input
                                                      // 010: I2C 0 Serial Clock, Input/Ouput
                                                      // 011: SWDT Clock, Input
                                                      // 100: SDIO 1 IO Bit 2, Input/Output
                                                      // 101: SPI 1 Slave Select 1, Output
                                                      // 110: reserved
                                                      // 111: UART 0 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_38_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_38_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 23, Output
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_38_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_38_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Data Bit 6, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_38_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_38_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII RxD Data Bit 3, Input

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_38_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_38_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_39
//
// Name                    MIO_PIN_39_REG
// Relative Address        0x0000079C
// Absolute Address        0xF800079C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 39 Control
//
// Register MIO_PIN_39_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_39_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_39_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_39_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_39_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_39_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_39_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_39_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_39_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_39_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_39_L3_SEL_BPOS        5UL             // 000: GPIO 39 (bank 1), Input/Output
                                                      // 001: CAN 0 Tx, Output
                                                      // 010: I2C 0 Serial Data, Input/Output
                                                      // 011: SWDT Reset, Output
                                                      // 100: SDIO 1 IO Bit 3, Input/Output
                                                      // 101: SPI 1 Slave Select 2, Output
                                                      // 110: reserved
                                                      // 111: UART 0 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_39_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_39_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: SRAM/NOR Address Bit 24, Output
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_39_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_39_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 0 ULPI Data Bit 7, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_39_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_39_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: Ethernet 1 RGMII Rx Control, Input

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_39_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_39_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_40
//
// Name                    MIO_PIN_40_REG
// Relative Address        0x000007A0
// Absolute Address        0xF80007A0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 40 Control
//
// Register MIO_PIN_40_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_40_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_40_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_40_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_40_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_40_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_40_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_40_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_40_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_40_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_40_L3_SEL_BPOS        5UL             // 000: GPIO 40 (bank 1), Input/Output
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: I2C 1 Serial Clock, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 Clock, Input/Output
                                                      // 101: SPI 0 Serial Clock, Input/Output
                                                      // 110: TTC 1 Wave, Output
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_40_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_40_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_40_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_40_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Data Bit 4, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_40_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_40_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_40_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_40_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_41
//
// Name                    MIO_PIN_41_REG
// Relative Address        0x000007A4
// Absolute Address        0xF80007A4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 41 Control
//
// Register MIO_PIN_41_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_41_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_41_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_41_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_41_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_41_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_41_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_41_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_41_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_41_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_41_L3_SEL_BPOS        5UL             // 000: GPIO 41 (bank 1), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010: I2C 1 Serial Data, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 Command, Input/Output
                                                      // 101: SPI 0 MISO, Input/Output
                                                      // 110: TTC 1 Clock, Input
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_41_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_41_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_41_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_41_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Direction, Input

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_41_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_41_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_41_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_41_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_42
//
// Name                    MIO_PIN_42_REG
// Relative Address        0x000007A8
// Absolute Address        0xF80007A8
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 42 Control
//
// Register MIO_PIN_42_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_42_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_42_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_42_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_42_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_42_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_42_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_42_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_42_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_42_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_42_L3_SEL_BPOS        5UL             // 000: GPIO 42 (bank 1), Input/Output
                                                      // 001: CAN 0 Rx, Input
                                                      // 010: I2C 0 Serial Clock, Input/Ouput
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 0, Input/Output
                                                      // 101: SPI 0 Slave Select 0, Input/Output
                                                      // 110: TTC 0 Wave, Output
                                                      // 111: UART 0 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_42_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_42_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_42_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_42_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Stop, Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_42_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_42_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1= Not Used

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_42_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_42_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_43
//
// Name                    MIO_PIN_43_REG
// Relative Address        0x000007AC
// Absolute Address        0xF80007AC
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 43 Control
//
// Register MIO_PIN_43_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_43_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_43_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_43_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_43_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_43_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_43_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_43_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_43_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_43_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_43_L3_SEL_BPOS        5UL             // 000: GPIO 43 (bank 1), Input/Output
                                                      // 001: CAN 0 Tx, Output
                                                      // 010: I2C 0 Serial Data, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 1, Input/Output
                                                      // 101: SPI 0 Slave Select 1, Output
                                                      // 110: TTC 0 Clock, Input
                                                      // 111: UART 0 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_43_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_43_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_43_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_43_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Next, Input

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_43_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_43_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_43_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_43_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_44
//
// Name                    MIO_PIN_44_REG
// Relative Address        0x000007B0
// Absolute Address        0xF80007B0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 44 Control
//
// Register MIO_PIN_44_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_44_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_44_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_44_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_44_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_44_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_44_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_44_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_44_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_44_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_44_L3_SEL_BPOS        5UL             // 000: GPIO 44 (bank 1), Input/Output
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: I2C 1 Serial Clock, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 2, Input/Output
                                                      // 101: SPI 0 Slave Select 2, Output
                                                      // 110: reserved
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_44_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_44_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_44_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_44_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Data Bit 0, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_44_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_44_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_44_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_44_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_45
//
// Name                    MIO_PIN_45_REG
// Relative Address        0x000007B4
// Absolute Address        0xF80007B4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 45 Control
//
// Register MIO_PIN_45_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_45_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_45_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_45_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_45_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_45_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_45_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_45_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_45_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_45_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_45_L3_SEL_BPOS        5UL             // 000: GPIO 45 (bank 1), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010: I2C 1 Serial Data, Input/Output
                                                      // 011: reserved
                                                      // 100: SDIO 0 IO Bit 3, Input/Output
                                                      // 101: SPI 0 MOSI, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_45_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_45_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_45_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_45_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Data Bit 1, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_45_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_45_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_45_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_45_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_46
//
// Name                    MIO_PIN_46_REG
// Relative Address        0x000007B8
// Absolute Address        0xF80007B8
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 46 Control
//
// Register MIO_PIN_46_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_46_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_46_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_46_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_46_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_46_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_46_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_46_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_46_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_46_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_46_L3_SEL_BPOS        5UL             // 000: GPIO 46 (bank 1), Input/Output
                                                      // 001: CAN 0 Rx, Input
                                                      // 010: I2C 0 Serial Clock, Input/Ouput
                                                      // 011: PJTAG TDI, Input
                                                      // 100: SDIO 1 IO Bit 0, Input/Output
                                                      // 101: SPI 1 MOSI, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 0 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_46_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_46_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_46_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_46_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Data Bit 2, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_46_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_46_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_46_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_46_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_47
//
// Name                    MIO_PIN_47_REG
// Relative Address        0x000007BC
// Absolute Address        0xF80007BC
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 47 Control
//
// Register MIO_PIN_47_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_47_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_47_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_47_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_47_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_47_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_47_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_47_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_47_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_47_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_47_L3_SEL_BPOS        5UL             // 000: GPIO 47 (bank 1), Input/Output
                                                      // 001: CAN 0 Tx, Output
                                                      // 010: I2C 0 Serial Data, Input/Output
                                                      // 011: PJTAG TDO, Output
                                                      // 100: SDIO 1 Command, Input/Output
                                                      // 101: SPI 1 MISO, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 0 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_47_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_47_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_47_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_47_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Data Bit 3, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_47_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_47_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_47_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_47_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_48
//
// Name                    MIO_PIN_48_REG
// Relative Address        0x000007C0
// Absolute Address        0xF80007C0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 48 Control
//
// Register MIO_PIN_48_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_48_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_48_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_48_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_48_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_48_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_48_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_48_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_48_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_48_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_48_L3_SEL_BPOS        5UL             // 000: GPIO 48 (bank 1), Input/Output
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: I2C 1 Serial Clock, Input/Output
                                                      // 011: PJTAG TCK, Input
                                                      // 100: SDIO 1 Clock, Input/Output
                                                      // 101: SPI 1 Serial Clock, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_48_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_48_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_48_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_48_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Clock, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_48_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_48_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_48_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_48_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_49
//
// Name                    MIO_PIN_49_REG
// Relative Address        0x000007C4
// Absolute Address        0xF80007C4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 49 Control
//
// Register MIO_PIN_49_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_49_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_49_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_49_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_49_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_49_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_49_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_49_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_49_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_49_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_49_L3_SEL_BPOS        5UL             // 000: GPIO 49 (bank 1), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010: I2C 1 Serial Data, Input/Output
                                                      // 011: PJTAG TMS, Input
                                                      // 100: SDIO 1 IO Bit 1, Input/Output
                                                      // 101: SPI 1 Select 0, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_49_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_49_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_49_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_49_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Data Bit 5, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_49_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_49_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_49_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_49_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_50
//
// Name                    MIO_PIN_50_REG
// Relative Address        0x000007C8
// Absolute Address        0xF80007C8
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 50 Control
//
// Register MIO_PIN_50_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_50_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_50_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_50_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_50_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_50_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_50_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_50_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_50_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_50_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_50_L3_SEL_BPOS        5UL             // 000: GPIO 50 (bank 1), Input/Output
                                                      // 001: CAN 0 Rx, Input
                                                      // 010: I2C 0 Serial Clock, Input/Ouput
                                                      // 011: SWDT Clock, Input
                                                      // 100: SDIO 1 IO Bit 2, Input/Output
                                                      // 101: SPI 1 Slave Select 1, Output
                                                      // 110: reserved
                                                      // 111: UART 0 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_50_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_50_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_50_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_50_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Data Bit 6, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_50_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_50_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_50_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_50_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_51
//
// Name                    MIO_PIN_51_REG
// Relative Address        0x000007CC
// Absolute Address        0xF80007CC
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 51 Control
//
// Register MIO_PIN_51_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_51_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_51_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_51_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_51_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_51_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_51_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_51_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_51_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_51_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_51_L3_SEL_BPOS        5UL             // 000: GPIO 51 (bank 1), Input/Output
                                                      // 001: CAN 0 Tx, Output
                                                      // 010: I2C 0 Serial Data, Input/Output
                                                      // 011: SWDT Reset, Output
                                                      // 100: SDIO 1 IO Bit 3, Input/Output
                                                      // 101: SPI 1 Slave Select 2, Output
                                                      // 110: reserved
                                                      // 111: UART 0 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_51_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_51_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_51_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_51_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: USB 1 ULPI Data Bit 7, Input/Output

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_51_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_51_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_51_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_51_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_52
//
// Name                    MIO_PIN_52_REG
// Relative Address        0x000007D0
// Absolute Address        0xF80007D0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 52 Control
//
// Register MIO_PIN_52_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_52_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_52_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_52_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_52_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_52_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_52_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_52_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_52_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_52_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_52_L3_SEL_BPOS        5UL             // 000: GPIO 52 (bank 1), Input/Output
                                                      // 001: CAN 1 Tx, Output
                                                      // 010: I2C 1 Serial Clock, Input/Output
                                                      // 011: SWDT Clock, Input
                                                      // 100: MDIO 0 Clock, Output
                                                      // 101: MDIO 1 Clock, Output
                                                      // 110: reserved
                                                      // 111: UART 1 TxD, Output

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_52_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_52_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 0 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_52_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_52_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_52_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_52_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_52_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_52_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_PIN_53
//
// Name                    MIO_PIN_53_REG
// Relative Address        0x000007D4
// Absolute Address        0xF80007D4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001601
// Description             MIO Pin 53 Control
//
// Register MIO_PIN_53_REG Details
//
// RESERVED                                              Properties: Bits: 31:14, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define MIO_PIN_53_DISABLE_RCVR_MASK  0x00002000UL    // Operates the same as MIO_PIN_00[DisableRcvr]
#define MIO_PIN_53_DISABLE_RCVR_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_PIN_53_PULLUP_MASK        0x00001000UL    // Operates the same as MIO_PIN_00[PULLUP]
#define MIO_PIN_53_PULLUP_BPOS        12UL            // 

                                                      // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
#define MIO_PIN_53_IO_TYPE_MASK       0x00000E00UL    // Operates the same as MIO_PIN_00[IO_Type]
#define MIO_PIN_53_IO_TYPE_BPOS       9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define MIO_PIN_53_SPEED_MASK         0x00000100UL    // Operates the same as MIO_PIN_00[Speed]
#define MIO_PIN_53_SPEED_BPOS         8UL             // 

                                                      // Properties: Bits: 7:5, Type: rw, Reset Value: 0x0
#define MIO_PIN_53_L3_SEL_MASK        0x000000E0UL    // Level 3 Mux Select
#define MIO_PIN_53_L3_SEL_BPOS        5UL             // 000: GPIO 53 (bank 1), Input/Output
                                                      // 001: CAN 1 Rx, Input
                                                      // 010: I2C 1 Serial Data, Input/Output
                                                      // 011: SWDT Reset, Output
                                                      // 100: MDIO 0 Data, Input/Output
                                                      // 101: MDIO 1 Data, Input/Output
                                                      // 110: reserved
                                                      // 111: UART 1 RxD, Input

                                                      // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define MIO_PIN_53_L2_SEL_MASK        0x00000018UL    // Level 2 Mux Select
#define MIO_PIN_53_L2_SEL_BPOS        3UL             // 00: Level 3 Mux
                                                      // 01: reserved
                                                      // 10: reserved
                                                      // 11: SDIO 1 Power Control, Output

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_PIN_53_L1_SEL_MASK        0x00000004UL    // Level 1 Mux Select
#define MIO_PIN_53_L1_SEL_BPOS        2UL             // 0: Level 2 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_PIN_53_L0_SEL_MASK        0x00000002UL    // Level 0 Mux Select
#define MIO_PIN_53_L0_SEL_BPOS        1UL             // 0: Level 1 Mux
                                                      // 1: reserved

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_PIN_53_TRI_ENABLE_MASK    0x00000001UL    // Operates the same as
#define MIO_PIN_53_TRI_ENABLE_BPOS    0UL             // MIO_PIN_00[TRI_ENABLE]


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_LOOPBACK
//
// Name                    MIO_LOOPBACK_REG
// Relative Address        0x00000804
// Absolute Address        0xF8000804
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Loopback function within MIO
//
// Register MIO_LOOPBACK_REG Details
//
// RESERVED                                                  Properties: Bits: 31:4, Type: rw, Reset Value: 0x0

                                                          // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define MIO_LOOPBACK_I2C0_LOOP_I2C1_MASK  0x00000008UL    // I2C Loopback Control.
#define MIO_LOOPBACK_I2C0_LOOP_I2C1_BPOS  3UL             // 0 = Connect I2C inputs according to MIO
                                                          // mapping.
                                                          // 1 = Loop I2C 0 outputs to I2C 1 inputs, and I2C 1
                                                          // outputs
                                                          // to I2C 0 inputs.

                                                          // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define MIO_LOOPBACK_CAN0_LOOP_CAN1_MASK  0x00000004UL    // CAN Loopback Control.
#define MIO_LOOPBACK_CAN0_LOOP_CAN1_BPOS  2UL             // 0 = Connect CAN inputs according to MIO
                                                          // mapping.
                                                          // 1 = Loop CAN 0 Tx to CAN 1 Rx, and CAN 1 Tx
                                                          // to CAN 0 Rx.

                                                          // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define MIO_LOOPBACK_UA0_LOOP_UA1_MASK    0x00000002UL    // UART Loopback Control.
#define MIO_LOOPBACK_UA0_LOOP_UA1_BPOS    1UL             // 0 = Connect UART inputs according to MIO
                                                          // mapping.
                                                          // 1 = Loop UART 0 outputs to UART 1 inputs, and
                                                          // UART 1 outputs to UART 0 inputs.
                                                          // RXD/TXD cross-connected.
                                                          // RTS/CTS cross-connected.
                                                          // DSR, DTR, DCD and RI not used.

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define MIO_LOOPBACK_SPI0_LOOP_SPI1_MASK  0x00000001UL    // SPI Loopback Control.
#define MIO_LOOPBACK_SPI0_LOOP_SPI1_BPOS  0UL             // 0 = Connect SPI inputs according to MIO
                                                          // mapping.
                                                          // 1 = Loop SPI 0 outputs to SPI 1 inputs, and SPI 1
                                                          // outputs to SPI 0 inputs.
                                                          // The other SPI core will appear on the LS Slave
                                                          // Select.


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_MST_TRI0
//
// Name                     MIO_MST_TRI0_REG
// Relative Address         0x0000080C
// Absolute Address         0xF800080C
// Width                    32 bits
// Access Type              rw
// Reset Value              0xFFFFFFFF
// Description              MIO pin Tri-state Enables, 31:0
//
// Register MIO_MST_TRI0_REG Details
//         Parallel access to the master tri-state enables for MIO pins
//
                                                      // Properties: Bit: 31, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_31_TRI_MASK  0x80000000UL    // Master Tri-state Enable for pin 31, active high
#define MIO_MST_TRI0_PIN_31_TRI_BPOS  31UL            // 

                                                      // Properties: Bit: 30, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_30_TRI_MASK  0x40000000UL    // Master Tri-state Enable for pin 30, active high
#define MIO_MST_TRI0_PIN_30_TRI_BPOS  30UL            // 

                                                      // Properties: Bit: 29, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_29_TRI_MASK  0x20000000UL    // Master Tri-state Enable for pin 29, active high
#define MIO_MST_TRI0_PIN_29_TRI_BPOS  29UL            // 

                                                      // Properties: Bit: 28, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_28_TRI_MASK  0x10000000UL    // Master Tri-state Enable for pin 28, active high
#define MIO_MST_TRI0_PIN_28_TRI_BPOS  28UL            // 

                                                      // Properties: Bit: 27, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_27_TRI_MASK  0x08000000UL    // Master Tri-state Enable for pin 27, active high
#define MIO_MST_TRI0_PIN_27_TRI_BPOS  27UL            // 

                                                      // Properties: Bit: 26, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_26_TRI_MASK  0x04000000UL    // Master Tri-state Enable for pin 26, active high
#define MIO_MST_TRI0_PIN_26_TRI_BPOS  26UL            // 

                                                      // Properties: Bit: 25, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_25_TRI_MASK  0x02000000UL    // Master Tri-state Enable for pin 25, active high
#define MIO_MST_TRI0_PIN_25_TRI_BPOS  25UL            // 

                                                      // Properties: Bit: 24, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_24_TRI_MASK  0x01000000UL    // Master Tri-state Enable for pin 24, active high
#define MIO_MST_TRI0_PIN_24_TRI_BPOS  24UL            // 

                                                      // Properties: Bit: 23, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_23_TRI_MASK  0x00800000UL    // Master Tri-state Enable for pin 23, active high
#define MIO_MST_TRI0_PIN_23_TRI_BPOS  23UL            // 

                                                      // Properties: Bit: 22, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_22_TRI_MASK  0x00400000UL    // Master Tri-state Enable for pin 22, active high
#define MIO_MST_TRI0_PIN_22_TRI_BPOS  22UL            // 

                                                      // Properties: Bit: 21, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_21_TRI_MASK  0x00200000UL    // Master Tri-state Enable for pin 21, active high
#define MIO_MST_TRI0_PIN_21_TRI_BPOS  21UL            // 

                                                      // Properties: Bit: 20, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_20_TRI_MASK  0x00100000UL    // Master Tri-state Enable for pin 20, active high
#define MIO_MST_TRI0_PIN_20_TRI_BPOS  20UL            // 

                                                      // Properties: Bit: 19, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_19_TRI_MASK  0x00080000UL    // Master Tri-state Enable for pin 19, active high
#define MIO_MST_TRI0_PIN_19_TRI_BPOS  19UL            // 

                                                      // Properties: Bit: 18, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_18_TRI_MASK  0x00040000UL    // Master Tri-state Enable for pin 18, active high
#define MIO_MST_TRI0_PIN_18_TRI_BPOS  18UL            // 

                                                      // Properties: Bit: 17, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_17_TRI_MASK  0x00020000UL    // Master Tri-state Enable for pin 17, active high
#define MIO_MST_TRI0_PIN_17_TRI_BPOS  17UL            // 

                                                      // Properties: Bit: 16, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_16_TRI_MASK  0x00010000UL    // Master Tri-state Enable for pin 16, active high
#define MIO_MST_TRI0_PIN_16_TRI_BPOS  16UL            // 

                                                      // Properties: Bit: 15, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_15_TRI_MASK  0x00008000UL    // Master Tri-state Enable for pin 15, active high
#define MIO_MST_TRI0_PIN_15_TRI_BPOS  15UL            // 

                                                      // Properties: Bit: 14, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_14_TRI_MASK  0x00004000UL    // Master Tri-state Enable for pin 14, active high
#define MIO_MST_TRI0_PIN_14_TRI_BPOS  14UL            // 

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_13_TRI_MASK  0x00002000UL    // Master Tri-state Enable for pin 13, active high
#define MIO_MST_TRI0_PIN_13_TRI_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_12_TRI_MASK  0x00001000UL    // Master Tri-state Enable for pin 12, active high
#define MIO_MST_TRI0_PIN_12_TRI_BPOS  12UL            // 

                                                      // Properties: Bit: 11, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_11_TRI_MASK  0x00000800UL    // Master Tri-state Enable for pin 11, active high
#define MIO_MST_TRI0_PIN_11_TRI_BPOS  11UL            // 

                                                      // Properties: Bit: 10, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_10_TRI_MASK  0x00000400UL    // Master Tri-state Enable for pin 10, active high
#define MIO_MST_TRI0_PIN_10_TRI_BPOS  10UL            // 

                                                      // Properties: Bit: 9, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_09_TRI_MASK  0x00000200UL    // Master Tri-state Enable for pin 9, active high
#define MIO_MST_TRI0_PIN_09_TRI_BPOS  9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_08_TRI_MASK  0x00000100UL    // Master Tri-state Enable for pin 8, active high
#define MIO_MST_TRI0_PIN_08_TRI_BPOS  8UL             // 

                                                      // Properties: Bit: 7, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_07_TRI_MASK  0x00000080UL    // Master Tri-state Enable for pin 7, active high
#define MIO_MST_TRI0_PIN_07_TRI_BPOS  7UL             // 

                                                      // Properties: Bit: 6, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_06_TRI_MASK  0x00000040UL    // Master Tri-state Enable for pin 6, active high
#define MIO_MST_TRI0_PIN_06_TRI_BPOS  6UL             // 

                                                      // Properties: Bit: 5, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_05_TRI_MASK  0x00000020UL    // Master Tri-state Enable for pin 5, active high
#define MIO_MST_TRI0_PIN_05_TRI_BPOS  5UL             // 

                                                      // Properties: Bit: 4, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_04_TRI_MASK  0x00000010UL    // Master Tri-state Enable for pin 4, active high
#define MIO_MST_TRI0_PIN_04_TRI_BPOS  4UL             // 

                                                      // Properties: Bit: 3, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_03_TRI_MASK  0x00000008UL    // Master Tri-state Enable for pin 3, active high
#define MIO_MST_TRI0_PIN_03_TRI_BPOS  3UL             // 

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_02_TRI_MASK  0x00000004UL    // Master Tri-state Enable for pin 2, active high
#define MIO_MST_TRI0_PIN_02_TRI_BPOS  2UL             // 

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_01_TRI_MASK  0x00000002UL    // Master Tri-state Enable for pin 1, active high
#define MIO_MST_TRI0_PIN_01_TRI_BPOS  1UL             // 

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI0_PIN_00_TRI_MASK  0x00000001UL    // Master Tri-state Enable for pin 0, active high
#define MIO_MST_TRI0_PIN_00_TRI_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (SLCR) MIO_MST_TRI1
//
// Name                     MIO_MST_TRI1_REG
// Relative Address         0x00000810
// Absolute Address         0xF8000810
// Width                    32 bits
// Access Type              rw
// Reset Value              0x003FFFFF
// Description              MIO pin Tri-state Enables, 53:32
//
// Register MIO_MST_TRI1_REG Details
//         Parallel access to the master tri-state enables for MIO pins
//
// RESERVED                                              Properties: Bits: 31:22, Type: rw, Reset Value: 0x0

                                                      // Properties: Bit: 21, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_53_TRI_MASK  0x00200000UL    // Master Tri-state Enable for pin 53, active high
#define MIO_MST_TRI1_PIN_53_TRI_BPOS  21UL            // 

                                                      // Properties: Bit: 20, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_52_TRI_MASK  0x00100000UL    // Master Tri-state Enable for pin 52, active high
#define MIO_MST_TRI1_PIN_52_TRI_BPOS  20UL            // 

                                                      // Properties: Bit: 19, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_51_TRI_MASK  0x00080000UL    // Master Tri-state Enable for pin 51, active high
#define MIO_MST_TRI1_PIN_51_TRI_BPOS  19UL            // 

                                                      // Properties: Bit: 18, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_50_TRI_MASK  0x00040000UL    // Master Tri-state Enable for pin 50, active high
#define MIO_MST_TRI1_PIN_50_TRI_BPOS  18UL            // 

                                                      // Properties: Bit: 17, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_49_TRI_MASK  0x00020000UL    // Master Tri-state Enable for pin 49, active high
#define MIO_MST_TRI1_PIN_49_TRI_BPOS  17UL            // 

                                                      // Properties: Bit: 16, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_48_TRI_MASK  0x00010000UL    // Master Tri-state Enable for pin 48, active high
#define MIO_MST_TRI1_PIN_48_TRI_BPOS  16UL            // 

                                                      // Properties: Bit: 15, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_47_TRI_MASK  0x00008000UL    // Master Tri-state Enable for pin 47, active high
#define MIO_MST_TRI1_PIN_47_TRI_BPOS  15UL            // 

                                                      // Properties: Bit: 14, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_46_TRI_MASK  0x00004000UL    // Master Tri-state Enable for pin 46, active high
#define MIO_MST_TRI1_PIN_46_TRI_BPOS  14UL            // 

                                                      // Properties: Bit: 13, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_45_TRI_MASK  0x00002000UL    // Master Tri-state Enable for pin 45, active high
#define MIO_MST_TRI1_PIN_45_TRI_BPOS  13UL            // 

                                                      // Properties: Bit: 12, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_44_TRI_MASK  0x00001000UL    // Master Tri-state Enable for pin 44, active high
#define MIO_MST_TRI1_PIN_44_TRI_BPOS  12UL            // 

                                                      // Properties: Bit: 11, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_43_TRI_MASK  0x00000800UL    // Master Tri-state Enable for pin 43, active high
#define MIO_MST_TRI1_PIN_43_TRI_BPOS  11UL            // 

                                                      // Properties: Bit: 10, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_42_TRI_MASK  0x00000400UL    // Master Tri-state Enable for pin 42, active high
#define MIO_MST_TRI1_PIN_42_TRI_BPOS  10UL            // 

                                                      // Properties: Bit: 9, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_41_TRI_MASK  0x00000200UL    // Master Tri-state Enable for pin 41, active high
#define MIO_MST_TRI1_PIN_41_TRI_BPOS  9UL             // 

                                                      // Properties: Bit: 8, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_40_TRI_MASK  0x00000100UL    // Master Tri-state Enable for pin 40, active high
#define MIO_MST_TRI1_PIN_40_TRI_BPOS  8UL             // 

                                                      // Properties: Bit: 7, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_39_TRI_MASK  0x00000080UL    // Master Tri-state Enable for pin 39, active high
#define MIO_MST_TRI1_PIN_39_TRI_BPOS  7UL             // 

                                                      // Properties: Bit: 6, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_38_TRI_MASK  0x00000040UL    // Master Tri-state Enable for pin 38, active high
#define MIO_MST_TRI1_PIN_38_TRI_BPOS  6UL             // 

                                                      // Properties: Bit: 5, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_37_TRI_MASK  0x00000020UL    // Master Tri-state Enable for pin 37, active high
#define MIO_MST_TRI1_PIN_37_TRI_BPOS  5UL             // 

                                                      // Properties: Bit: 4, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_36_TRI_MASK  0x00000010UL    // Master Tri-state Enable for pin 36, active high
#define MIO_MST_TRI1_PIN_36_TRI_BPOS  4UL             // 

                                                      // Properties: Bit: 3, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_35_TRI_MASK  0x00000008UL    // Master Tri-state Enable for pin 35, active high
#define MIO_MST_TRI1_PIN_35_TRI_BPOS  3UL             // 

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_34_TRI_MASK  0x00000004UL    // Master Tri-state Enable for pin 34, active high
#define MIO_MST_TRI1_PIN_34_TRI_BPOS  2UL             // 

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_33_TRI_MASK  0x00000002UL    // Master Tri-state Enable for pin 33, active high
#define MIO_MST_TRI1_PIN_33_TRI_BPOS  1UL             // 

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define MIO_MST_TRI1_PIN_32_TRI_MASK  0x00000001UL    // Master Tri-state Enable for pin 32, active high
#define MIO_MST_TRI1_PIN_32_TRI_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (SLCR) SD0_WP_CD_SEL
//
// Name                    SD0_WP_CD_SEL_REG
// Relative Address        0x00000830
// Absolute Address        0xF8000830
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             SDIO 0 WP CD select
//
// Register SD0_WP_CD_SEL_REG Details
//
// RESERVED                                                 Properties: Bits: 31:22, Type: rw, Reset Value: 0x0

                                                         // Properties: Bits: 21:16, Type: rw, Reset Value: 0x0
#define SD0_WP_CD_SEL_SDIO0_CD_SEL_MASK  0x003F0000UL    // SDIO 0 CD Select.
#define SD0_WP_CD_SEL_SDIO0_CD_SEL_BPOS  16UL            // Values 53:0 select MIO input (any pin except bits
                                                         // 7 and 8)
                                                         // Values 63:54 select EMIO input

// RESERVED                                                 Properties: Bits: 15:6, Type: rw, Reset Value: 0x0

                                                         // Properties: Bits: 5:0, Type: rw, Reset Value: 0x0
#define SD0_WP_CD_SEL_SDIO0_WP_SEL_MASK  0x0000003FUL    // SDIO 0 WP Select.
#define SD0_WP_CD_SEL_SDIO0_WP_SEL_BPOS  0UL             // Values 53:0 select MIO input (any pin except 7 and
                                                         // 8)
                                                         // Values 63:54 select EMIO input


//------------------------------------------------------------------------------
//
// Register (SLCR) SD1_WP_CD_SEL
//
// Name                    SD1_WP_CD_SEL_REG
// Relative Address        0x00000834
// Absolute Address        0xF8000834
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             SDIO 1 WP CD select
//
// Register SD1_WP_CD_SEL_REG Details
//
// RESERVED                                                 Properties: Bits: 31:22, Type: rw, Reset Value: 0x0

                                                         // Properties: Bits: 21:16, Type: rw, Reset Value: 0x0
#define SD1_WP_CD_SEL_SDIO1_CD_SEL_MASK  0x003F0000UL    // SDIO 1 CD Select.
#define SD1_WP_CD_SEL_SDIO1_CD_SEL_BPOS  16UL            // Values 53:0 select MIO input (any pin except bits
                                                         // 7 and 8)
                                                         // Values 63:54 select EMIO input

// RESERVED                                                 Properties: Bits: 15:6, Type: rw, Reset Value: 0x0

                                                         // Properties: Bits: 5:0, Type: rw, Reset Value: 0x0
#define SD1_WP_CD_SEL_SDIO1_WP_SEL_MASK  0x0000003FUL    // SDIO 1 WP Select.
#define SD1_WP_CD_SEL_SDIO1_WP_SEL_BPOS  0UL             // Values 53:0 select MIO input (any pin except 7 and
                                                         // 8)
                                                         // Values 63:54 select EMIO input


//------------------------------------------------------------------------------
//
// Register (SLCR) LVL_SHFTR_EN
//
// Name                    LVL_SHFTR_EN_REG
// Relative Address        0x00000900
// Absolute Address        0xF8000900
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Level Shifters Enable
//
// Register LVL_SHFTR_EN_REG Details
//
// RESERVED                                                     Properties: Bits: 31:5, Type: rw, Reset Value: 0x0

// RESERVED                                                     Properties: Bit: 4, Type: rw, Reset Value: 0x0

                                                             // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
#define LVL_SHFTR_EN_USER_LVL_SHFTR_EN_MASK  0x0000000FUL    // Level shifter enable to drive signals between PS
#define LVL_SHFTR_EN_USER_LVL_SHFTR_EN_BPOS  0UL             // and PL.
                                                             // 0x0 = disable all level shifters
                                                             // 0xA = enable PS-to-PL level shifters
                                                             // 0xF = enable all level shifters
                                                             // All other = reserved


//------------------------------------------------------------------------------
//
// Register (SLCR) OCM_CFG
//
// Name                    OCM_CFG_REG
// Relative Address        0x00000910
// Absolute Address        0xF8000910
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             OCM Address Mapping
//
// Register OCM_CFG_REG Details
//
// RESERVED                                     Properties: Bits: 31:5, Type: rw, Reset Value: 0x0

// RESERVED                                     Properties: Bit: 4, Type: rw, Reset Value: 0x0

                                             // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
#define OCM_CFG_RAM_HI_MASK  0x0000000FUL    // Maps the OCM RAM (in 64 KB sections) to the
#define OCM_CFG_RAM_HI_BPOS  0UL             // high or low address space:
                                             // 0: low address.
                                             // 1: high address.
                                             // RAM_HI [0] is first 64 KB
                                             // RAM_HI [1] is second 64 KB
                                             // RAM_HI [2] is third 64 KB
                                             // RAM_HI [3] is fourth 64 KB
                                             // Refer to the OCM chapter for more details.


//------------------------------------------------------------------------------
//
// Register (SLCR) RESERVED
//
// Name                    RESERVED
// Relative Address        0x00000A1C
// Absolute Address        0xF8000A1C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00010101
// Description             Reserved
//
// Register RESERVED Details
//
// RESERVED                               Properties: Bits: 23:22, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bit: 21, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 20:19, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 18:16, Type: rw, Reset Value: 0x1

// RESERVED                               Properties: Bits: 15:14, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bit: 13, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 12:11, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 10:8, Type: rw, Reset Value: 0x1

// RESERVED                               Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bit: 5, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 4:3, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 2:0, Type: rw, Reset Value: 0x1


//------------------------------------------------------------------------------
//
// Register (SLCR) GPIOB_CTRL
//
// Name                    GPIOB_CTRL_REG_REG
// Relative Address        0x00000B00
// Absolute Address        0xF8000B00
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             PS IO Buffer Control
//
// Register GPIOB_CTRL_REG_REG Details
//
// RESERVED                                            Properties: Bits: 31:12, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 11, Type: rw, Reset Value: 0x0
#define GPIOB_CTRL_VREF_SW_EN_MASK  0x00000800UL    // Enables the VREF switch
#define GPIOB_CTRL_VREF_SW_EN_BPOS  11UL            // 0: internal
                                                    // 1: external

// RESERVED                                            Properties: Bit: 10, Type: rw, Reset Value: 0x0

// RESERVED                                            Properties: Bit: 9, Type: rw, Reset Value: 0x0

// RESERVED                                            Properties: Bit: 8, Type: rw, Reset Value: 0x0

// RESERVED                                            Properties: Bit: 7, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 6:4, Type: rw, Reset Value: 0x0
#define GPIOB_CTRL_VREF_SEL_MASK    0x00000070UL    // Specifies GPIO VREF Selection
#define GPIOB_CTRL_VREF_SEL_BPOS    4UL             // 000: VREF = Disabled
                                                    // 001: VREF = 0.9V
                                                    // Other values reserved

// RESERVED                                            Properties: Bit: 3, Type: rw, Reset Value: 0x0

// RESERVED                                            Properties: Bit: 2, Type: rw, Reset Value: 0x0

// RESERVED                                            Properties: Bit: 1, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define GPIOB_CTRL_VREF_EN_MASK     0x00000001UL    // Enables VREF internal generator
#define GPIOB_CTRL_VREF_EN_BPOS     0UL             // 


//------------------------------------------------------------------------------
//
// Register (SLCR) GPIOB_CFG_CMOS18
//
// Name                    GPIOB_CFG_CMOS18_REG_REG
// Relative Address        0x00000B04
// Absolute Address        0xF8000B04
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             MIO GPIOB CMOS 1.8V config
//
// Register GPIOB_CFG_CMOS18_REG_REG Details
//         The only allowed values for this register are 0x00000000 (reset value) and 0x0C301166 (normal operation)
//
// RESERVED                               Properties: Bits: 31:28, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 27:25, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 24:22, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 21:19, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 18:16, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 15:12, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 11:8, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 7:4, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) GPIOB_CFG_CMOS25
//
// Name                    GPIOB_CFG_CMOS25_REG_REG
// Relative Address        0x00000B08
// Absolute Address        0xF8000B08
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             MIO GPIOB CMOS 2.5V config
//
// Register GPIOB_CFG_CMOS25_REG_REG Details
//         The only allowed values for this register are 0x00000000 (reset value) and 0x0C301100 (normal operation)
//
// RESERVED                               Properties: Bits: 31:28, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 27:25, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 24:22, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 21:19, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 18:16, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 15:12, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 11:8, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 7:4, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) GPIOB_CFG_CMOS33
//
// Name                    GPIOB_CFG_CMOS33_REG_REG
// Relative Address        0x00000B0C
// Absolute Address        0xF8000B0C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             MIO GPIOB CMOS 3.3V config
//
// Register GPIOB_CFG_CMOS33_REG_REG Details
//         The only allowed values for this register are 0x00000000 (reset value) and 0x0C301166 (normal operation)
//
// RESERVED                               Properties: Bits: 31:28, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 27:25, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 24:22, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 21:19, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 18:16, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 15:12, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 11:8, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 7:4, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) GPIOB_CFG_HSTL
//
// Name                    GPIOB_CFG_HSTL_REG_REG
// Relative Address        0x00000B14
// Absolute Address        0xF8000B14
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             MIO GPIOB HSTL config
//
// Register GPIOB_CFG_HSTL_REG_REG Details
//         The only allowed values for this register are 0x00000000 (reset value) and 0x0C750077 (normal operation).
//         You must provide a VREF or use the internal VREF generator.
//         When setting the input to HSTL, you must ensure that
//         VCCO_MIO is below 1.8V. If not, this will lead to long term damage to the IO.
//
// RESERVED                               Properties: Bits: 31:28, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 27:25, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 24:22, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 21:19, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 18:16, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 15:12, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 11:8, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 7:4, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) GPIOB_DRVR_BIAS_CTRL
//
// Name                    GPIOB_DRVR_BIAS_CTRL_REG_REG
// Relative Address        0x00000B18
// Absolute Address        0xF8000B18
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             MIO GPIOB Driver Bias Control
//
// Register GPIOB_DRVR_BIAS_CTRL_REG_REG Details
//
                                                                // Properties: Bit: 31, Type: ro, Reset Value: 0x0
#define GPIOB_DRVR_BIAS_CTRL_RB_VCFG_MASK       0x80000000UL    // Right Bank VCFG (Read Only)
#define GPIOB_DRVR_BIAS_CTRL_RB_VCFG_BPOS       31UL            // 

                                                                // Properties: Bits: 30:16, Type: rw, Reset Value: 0x0
#define GPIOB_DRVR_BIAS_CTRL_RB_DRVR_BIAS_MASK  0x7FFF0000UL    // Right Bank driver bias control
#define GPIOB_DRVR_BIAS_CTRL_RB_DRVR_BIAS_BPOS  16UL            // 

                                                                // Properties: Bit: 15, Type: ro, Reset Value: 0x0
#define GPIOB_DRVR_BIAS_CTRL_LB_VCFG_MASK       0x00008000UL    // Left Bank VCFG (Read Only)
#define GPIOB_DRVR_BIAS_CTRL_LB_VCFG_BPOS       15UL            // 

                                                                // Properties: Bits: 14:0, Type: rw, Reset Value: 0x0
#define GPIOB_DRVR_BIAS_CTRL_LB_DRVR_BIAS_MASK  0x00007FFFUL    // Left Bank driver bias control
#define GPIOB_DRVR_BIAS_CTRL_LB_DRVR_BIAS_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_ADDR0
//
// Name                    DDRIOB_ADDR0_REG
// Relative Address        0x00000B40
// Absolute Address        0xF8000B40
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000800
// Description             DDR IOB Config for A[14:0], CKE and DRST_B
//
// Register DDRIOB_ADDR0_REG Details
//
// RESERVED                                                     Properties: Bits: 31:12, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 11, Type: rw, Reset Value: 0x1
#define DDRIOB_ADDR0_PULLUP_EN_MASK          0x00000800UL    // enables pullup on output
#define DDRIOB_ADDR0_PULLUP_EN_BPOS          11UL            // 0: no pullup
                                                             // 1: pullup enabled

                                                             // Properties: Bits: 10:9, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR0_OUTPUT_EN_MASK          0x00000600UL    // Enables output mode to enable output ties to
#define DDRIOB_ADDR0_OUTPUT_EN_BPOS          9UL             // 00: ibuf
                                                             // 01 and 10: reserved
                                                             // 11: obuf

                                                             // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR0_TERM_DISABLE_MODE_MASK  0x00000100UL    // Termination is used during read transactions and
#define DDRIOB_ADDR0_TERM_DISABLE_MODE_BPOS  8UL             // may be disabled (automatically by hardware)
                                                             // when there are no reads taking place through the
                                                             // DDR Interface. Disabling termination reduces
                                                             // power consumption.
                                                             // 0: termination always enabled
                                                             // 1: use 'dynamic_dci_ts' to disable termination
                                                             // when not in use
                                                             // NOTE: This bit must be 0 during DRAM
                                                             // init/training. It may be set to 1 after init/training
                                                             // completes.

                                                             // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR0_IBUF_DISABLE_MODE_MASK  0x00000080UL    // Use ibuf_disable_into control ibuf
#define DDRIOB_ADDR0_IBUF_DISABLE_MODE_BPOS  7UL             // 0: ibuf is enabled
                                                             // 1: use ibuf_disable_in_to control enable
                                                             // NOTE: This must be 0 during DRAM
                                                             // init/training and can only be set to 1 after
                                                             // init/training completes.

                                                             // Properties: Bits: 6:5, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR0_DCI_TYPE_MASK           0x00000060UL    // DCI Mode Selection:
#define DDRIOB_ADDR0_DCI_TYPE_BPOS           5UL             // 00: DCI Disabled (DDR2/3L ADDR and CLOCK)
                                                             // 01: DCI Drive (LPDDR2)
                                                             // 10: reserved
                                                             // 11: DCI Termination (DDR2/3/3L DATA and
                                                             // DIFF)

                                                             // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR0_TERM_EN_MASK            0x00000010UL    // Tri State Termination Enable:
#define DDRIOB_ADDR0_TERM_EN_BPOS            4UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR0_DCI_UPDATE_B_MASK       0x00000008UL    // DCI Update Enable:
#define DDRIOB_ADDR0_DCI_UPDATE_B_BPOS       3UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bits: 2:1, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR0_INP_TYPE_MASK           0x00000006UL    // Input buffer control:
#define DDRIOB_ADDR0_INP_TYPE_BPOS           1UL             // 00: Input off (input signal to selected controller is
                                                             // driven Low).
                                                             // 01: Vref based differential receiver for SSTL,
                                                             // HSTL.
                                                             // 10: Differential input receiver.
                                                             // 11: LVCMOS receiver.

// RESERVED                                                     Properties: Bit: 0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_ADDR1
//
// Name                    DDRIOB_ADDR1_REG
// Relative Address        0x00000B44
// Absolute Address        0xF8000B44
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000800
// Description             DDR IOB Config for BA[2:0], ODT, CS_B, WE_B, RAS_B and CAS_B
//
// Register DDRIOB_ADDR1_REG Details
//
// RESERVED                                                     Properties: Bits: 31:12, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 11, Type: rw, Reset Value: 0x1
#define DDRIOB_ADDR1_PULLUP_EN_MASK          0x00000800UL    // enables pullup on output
#define DDRIOB_ADDR1_PULLUP_EN_BPOS          11UL            // 0: no pullup
                                                             // 1: pullup enabled

                                                             // Properties: Bits: 10:9, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR1_OUTPUT_EN_MASK          0x00000600UL    // Enables output mode to enable output ties to
#define DDRIOB_ADDR1_OUTPUT_EN_BPOS          9UL             // 00: ibuf
                                                             // 01 and 10: reserved
                                                             // 11: obuf

                                                             // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR1_TERM_DISABLE_MODE_MASK  0x00000100UL    // Termination is used during read transactions and
#define DDRIOB_ADDR1_TERM_DISABLE_MODE_BPOS  8UL             // may be disabled (automatically by hardware)
                                                             // when there are no reads taking place through the
                                                             // DDR Interface. Disabling termination reduces
                                                             // power consumption.
                                                             // 0: termination always enabled
                                                             // 1: use 'dynamic_dci_ts' to disable termination
                                                             // when not in use
                                                             // NOTE: This bit must be 0 during DRAM
                                                             // init/training. It may be set to 1 after init/training
                                                             // completes.

                                                             // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR1_IBUF_DISABLE_MODE_MASK  0x00000080UL    // Use ibuf_disable_into control ibuf
#define DDRIOB_ADDR1_IBUF_DISABLE_MODE_BPOS  7UL             // 0: ibuf is enabled
                                                             // 1: use ibuf_disable_in_to control enable
                                                             // NOTE: This must be 0 during DRAM
                                                             // init/training and can only be set to 1 after
                                                             // init/training completes.

                                                             // Properties: Bits: 6:5, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR1_DCI_TYPE_MASK           0x00000060UL    // DCI Mode Selection:
#define DDRIOB_ADDR1_DCI_TYPE_BPOS           5UL             // 00: DCI Disabled (DDR2/3L ADDR and CLOCK)
                                                             // 01: DCI Drive (LPDDR2)
                                                             // 10: reserved
                                                             // 11: DCI Termination (DDR2/3/3L DATA and
                                                             // DIFF)

                                                             // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR1_TERM_EN_MASK            0x00000010UL    // Tri State Termination Enable:
#define DDRIOB_ADDR1_TERM_EN_BPOS            4UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR1_DCI_UPDATE_B_MASK       0x00000008UL    // DCI Update Enable:
#define DDRIOB_ADDR1_DCI_UPDATE_B_BPOS       3UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bits: 2:1, Type: rw, Reset Value: 0x0
#define DDRIOB_ADDR1_INP_TYPE_MASK           0x00000006UL    // Input buffer control:
#define DDRIOB_ADDR1_INP_TYPE_BPOS           1UL             // 00: Input off (input signal to selected controller is
                                                             // driven Low).
                                                             // 01: Vref based differential receiver for SSTL,
                                                             // HSTL.
                                                             // 10: Differential input receiver.
                                                             // 11: LVCMOS receiver.

// RESERVED                                                     Properties: Bit: 0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_DATA0
//
// Name                    DDRIOB_DATA0_REG
// Relative Address        0x00000B48
// Absolute Address        0xF8000B48
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000800
// Description             DDR IOB Config for Data 15:0
//
// Register DDRIOB_DATA0_REG Details
//
// RESERVED                                                     Properties: Bits: 31:12, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 11, Type: rw, Reset Value: 0x1
#define DDRIOB_DATA0_PULLUP_EN_MASK          0x00000800UL    // enables pullup on output
#define DDRIOB_DATA0_PULLUP_EN_BPOS          11UL            // 0: no pullup
                                                             // 1: pullup enabled

                                                             // Properties: Bits: 10:9, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA0_OUTPUT_EN_MASK          0x00000600UL    // Enables output mode to enable output ties to
#define DDRIOB_DATA0_OUTPUT_EN_BPOS          9UL             // 00: ibuf
                                                             // 01 and 10: reserved
                                                             // 11: obuf

                                                             // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA0_TERM_DISABLE_MODE_MASK  0x00000100UL    // Termination is used during read transactions and
#define DDRIOB_DATA0_TERM_DISABLE_MODE_BPOS  8UL             // may be disabled (automatically by hardware)
                                                             // when there are no reads taking place through the
                                                             // DDR Interface. Disabling termination reduces
                                                             // power consumption.
                                                             // 0: termination always enabled
                                                             // 1: use 'dynamic_dci_ts' to disable termination
                                                             // when not in use
                                                             // NOTE: This bit must be 0 during DRAM
                                                             // init/training. It may be set to 1 after init/training
                                                             // completes.

                                                             // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA0_IBUF_DISABLE_MODE_MASK  0x00000080UL    // Use ibuf_disable_into control ibuf
#define DDRIOB_DATA0_IBUF_DISABLE_MODE_BPOS  7UL             // 0: ibuf is enabled
                                                             // 1: use ibuf_disable_in_to control enable
                                                             // NOTE: This must be 0 during DRAM
                                                             // init/training and can only be set to 1 after
                                                             // init/training completes.

                                                             // Properties: Bits: 6:5, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA0_DCI_TYPE_MASK           0x00000060UL    // DCI Mode Selection:
#define DDRIOB_DATA0_DCI_TYPE_BPOS           5UL             // 00: DCI Disabled (DDR2/3L ADDR and CLOCK)
                                                             // 01: DCI Drive (LPDDR2)
                                                             // 10: reserved
                                                             // 11: DCI Termination (DDR2/3/3L DATA and
                                                             // DIFF)

                                                             // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA0_TERM_EN_MASK            0x00000010UL    // Tri State Termination Enable:
#define DDRIOB_DATA0_TERM_EN_BPOS            4UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA0_DCI_UPDATE_B_MASK       0x00000008UL    // DCI Update Enable:
#define DDRIOB_DATA0_DCI_UPDATE_B_BPOS       3UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bits: 2:1, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA0_INP_TYPE_MASK           0x00000006UL    // Input buffer control:
#define DDRIOB_DATA0_INP_TYPE_BPOS           1UL             // 00: Input off (input signal to selected controller is
                                                             // driven Low).
                                                             // 01: Vref based differential receiver for SSTL,
                                                             // HSTL.
                                                             // 10: Differential input receiver.
                                                             // 11: LVCMOS receiver.

// RESERVED                                                     Properties: Bit: 0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_DATA1
//
// Name                    DDRIOB_DATA1_REG
// Relative Address        0x00000B4C
// Absolute Address        0xF8000B4C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000800
// Description             DDR IOB Config for Data 31:16
//
// Register DDRIOB_DATA1_REG Details
//
// RESERVED                                                     Properties: Bits: 31:12, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 11, Type: rw, Reset Value: 0x1
#define DDRIOB_DATA1_PULLUP_EN_MASK          0x00000800UL    // enables pullup on output
#define DDRIOB_DATA1_PULLUP_EN_BPOS          11UL            // 0: no pullup
                                                             // 1: pullup enabled

                                                             // Properties: Bits: 10:9, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA1_OUTPUT_EN_MASK          0x00000600UL    // Enables output mode to enable output ties to
#define DDRIOB_DATA1_OUTPUT_EN_BPOS          9UL             // 00: ibuf
                                                             // 01 and 10: reserved
                                                             // 11: obuf

                                                             // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA1_TERM_DISABLE_MODE_MASK  0x00000100UL    // Termination is used during read transactions and
#define DDRIOB_DATA1_TERM_DISABLE_MODE_BPOS  8UL             // may be disabled (automatically by hardware)
                                                             // when there are no reads taking place through the
                                                             // DDR Interface. Disabling termination reduces
                                                             // power consumption.
                                                             // 0: termination always enabled
                                                             // 1: use 'dynamic_dci_ts' to disable termination
                                                             // when not in use
                                                             // NOTE: This bit must be 0 during DRAM
                                                             // init/training. It may be set to 1 after init/training
                                                             // completes.

                                                             // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA1_IBUF_DISABLE_MODE_MASK  0x00000080UL    // Use ibuf_disable_into control ibuf
#define DDRIOB_DATA1_IBUF_DISABLE_MODE_BPOS  7UL             // 0: ibuf is enabled
                                                             // 1: use ibuf_disable_in_to control enable
                                                             // NOTE: This must be 0 during DRAM
                                                             // init/training and can only be set to 1 after
                                                             // init/training completes.

                                                             // Properties: Bits: 6:5, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA1_DCI_TYPE_MASK           0x00000060UL    // DCI Mode Selection:
#define DDRIOB_DATA1_DCI_TYPE_BPOS           5UL             // 00: DCI Disabled (DDR2/3L ADDR and CLOCK)
                                                             // 01: DCI Drive (LPDDR2)
                                                             // 10: reserved
                                                             // 11: DCI Termination (DDR2/3/3L DATA and
                                                             // DIFF)

                                                             // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA1_TERM_EN_MASK            0x00000010UL    // Tri State Termination Enable:
#define DDRIOB_DATA1_TERM_EN_BPOS            4UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA1_DCI_UPDATE_B_MASK       0x00000008UL    // DCI Update Enable:
#define DDRIOB_DATA1_DCI_UPDATE_B_BPOS       3UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bits: 2:1, Type: rw, Reset Value: 0x0
#define DDRIOB_DATA1_INP_TYPE_MASK           0x00000006UL    // Input buffer control:
#define DDRIOB_DATA1_INP_TYPE_BPOS           1UL             // 00: Input off (input signal to selected controller is
                                                             // driven Low).
                                                             // 01: Vref based differential receiver for SSTL,
                                                             // HSTL.
                                                             // 10: Differential input receiver.
                                                             // 11: LVCMOS receiver.

// RESERVED                                                     Properties: Bit: 0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_DIFF0
//
// Name                    DDRIOB_DIFF0_REG
// Relative Address        0x00000B50
// Absolute Address        0xF8000B50
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000800
// Description             DDR IOB Config for DQS 1:0
//
// Register DDRIOB_DIFF0_REG Details
//
// RESERVED                                                     Properties: Bits: 31:12, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 11, Type: rw, Reset Value: 0x1
#define DDRIOB_DIFF0_PULLUP_EN_MASK          0x00000800UL    // enables pullup on output
#define DDRIOB_DIFF0_PULLUP_EN_BPOS          11UL            // 0: no pullup
                                                             // 1: pullup enabled

                                                             // Properties: Bits: 10:9, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF0_OUTPUT_EN_MASK          0x00000600UL    // Enables output mode to enable output ties to
#define DDRIOB_DIFF0_OUTPUT_EN_BPOS          9UL             // 00: ibuf
                                                             // 01 and 10: reserved
                                                             // 11: obuf

                                                             // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF0_TERM_DISABLE_MODE_MASK  0x00000100UL    // Termination is used during read transactions and
#define DDRIOB_DIFF0_TERM_DISABLE_MODE_BPOS  8UL             // may be disabled (automatically by hardware)
                                                             // when there are no reads taking place through the
                                                             // DDR Interface. Disabling termination reduces
                                                             // power consumption.
                                                             // 0: termination always enabled
                                                             // 1: use 'dynamic_dci_ts' to disable termination
                                                             // when not in use
                                                             // NOTE: This bit must be 0 during DRAM
                                                             // init/training. It may be set to 1 after init/training
                                                             // completes.

                                                             // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF0_IBUF_DISABLE_MODE_MASK  0x00000080UL    // Use ibuf_disable_into control ibuf
#define DDRIOB_DIFF0_IBUF_DISABLE_MODE_BPOS  7UL             // 0: ibuf is enabled
                                                             // 1: use ibuf_disable_in_to control enable
                                                             // NOTE: This must be 0 during DRAM
                                                             // init/training and can only be set to 1 after
                                                             // init/training completes.

                                                             // Properties: Bits: 6:5, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF0_DCI_TYPE_MASK           0x00000060UL    // DCI Mode Selection:
#define DDRIOB_DIFF0_DCI_TYPE_BPOS           5UL             // 00: DCI Disabled (DDR2/3L ADDR and CLOCK)
                                                             // 01: DCI Drive (LPDDR2)
                                                             // 10: reserved
                                                             // 11: DCI Termination (DDR2/3/3L DATA and
                                                             // DIFF)

                                                             // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF0_TERM_EN_MASK            0x00000010UL    // Tri State Termination Enable:
#define DDRIOB_DIFF0_TERM_EN_BPOS            4UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF0_DCI_UPDATE_B_MASK       0x00000008UL    // DCI Update Enable:
#define DDRIOB_DIFF0_DCI_UPDATE_B_BPOS       3UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bits: 2:1, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF0_INP_TYPE_MASK           0x00000006UL    // Input buffer control:
#define DDRIOB_DIFF0_INP_TYPE_BPOS           1UL             // 00: Input off (input signal to selected controller is
                                                             // driven Low).
                                                             // 01: Vref based differential receiver for SSTL,
                                                             // HSTL.
                                                             // 10: Differential input receiver.
                                                             // 11: LVCMOS receiver.

// RESERVED                                                     Properties: Bit: 0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_DIFF1
//
// Name                    DDRIOB_DIFF1_REG
// Relative Address        0x00000B54
// Absolute Address        0xF8000B54
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000800
// Description             DDR IOB Config for DQS 3:2
//
// Register DDRIOB_DIFF1_REG Details
//
// RESERVED                                                     Properties: Bits: 31:12, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 11, Type: rw, Reset Value: 0x1
#define DDRIOB_DIFF1_PULLUP_EN_MASK          0x00000800UL    // enables pullup on output
#define DDRIOB_DIFF1_PULLUP_EN_BPOS          11UL            // 0: no pullup
                                                             // 1: pullup enabled

                                                             // Properties: Bits: 10:9, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF1_OUTPUT_EN_MASK          0x00000600UL    // Enables output mode to enable output ties to
#define DDRIOB_DIFF1_OUTPUT_EN_BPOS          9UL             // 00: ibuf
                                                             // 01 and 10: reserved
                                                             // 11: obuf

                                                             // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF1_TERM_DISABLE_MODE_MASK  0x00000100UL    // Termination is used during read transactions and
#define DDRIOB_DIFF1_TERM_DISABLE_MODE_BPOS  8UL             // may be disabled (automatically by hardware)
                                                             // when there are no reads taking place through the
                                                             // DDR Interface. Disabling termination reduces
                                                             // power consumption.
                                                             // 0: termination always enabled
                                                             // 1: use 'dynamic_dci_ts' to disable termination
                                                             // when not in use
                                                             // NOTE: This bit must be 0 during DRAM
                                                             // init/training. It may be set to 1 after init/training
                                                             // completes.

                                                             // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF1_IBUF_DISABLE_MODE_MASK  0x00000080UL    // Use ibuf_disable_into control ibuf
#define DDRIOB_DIFF1_IBUF_DISABLE_MODE_BPOS  7UL             // 0: ibuf is enabled
                                                             // 1: use ibuf_disable_in_to control enable
                                                             // NOTE: This must be 0 during DRAM
                                                             // init/training and can only be set to 1 after
                                                             // init/training completes.

                                                             // Properties: Bits: 6:5, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF1_DCI_TYPE_MASK           0x00000060UL    // DCI Mode Selection:
#define DDRIOB_DIFF1_DCI_TYPE_BPOS           5UL             // 00: DCI Disabled (DDR2/3L ADDR and CLOCK)
                                                             // 01: DCI Drive (LPDDR2)
                                                             // 10: reserved
                                                             // 11: DCI Termination (DDR2/3/3L DATA and
                                                             // DIFF)

                                                             // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF1_TERM_EN_MASK            0x00000010UL    // Tri State Termination Enable:
#define DDRIOB_DIFF1_TERM_EN_BPOS            4UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF1_DCI_UPDATE_B_MASK       0x00000008UL    // DCI Update Enable:
#define DDRIOB_DIFF1_DCI_UPDATE_B_BPOS       3UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bits: 2:1, Type: rw, Reset Value: 0x0
#define DDRIOB_DIFF1_INP_TYPE_MASK           0x00000006UL    // Input buffer control:
#define DDRIOB_DIFF1_INP_TYPE_BPOS           1UL             // 00: Input off (input signal to selected controller is
                                                             // driven Low).
                                                             // 01: Vref based differential receiver for SSTL,
                                                             // HSTL.
                                                             // 10: Differential input receiver.
                                                             // 11: LVCMOS receiver.

// RESERVED                                                     Properties: Bit: 0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_CLOCK
//
// Name                    DDRIOB_CLOCK_REG
// Relative Address        0x00000B58
// Absolute Address        0xF8000B58
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000800
// Description             DDR IOB Config for Clock Output
//
// Register DDRIOB_CLOCK_REG Details
//
// RESERVED                                                     Properties: Bits: 31:12, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 11, Type: rw, Reset Value: 0x1
#define DDRIOB_CLOCK_PULLUP_EN_MASK          0x00000800UL    // enables pullup on output
#define DDRIOB_CLOCK_PULLUP_EN_BPOS          11UL            // 0: no pullup
                                                             // 1: pullup enabled

                                                             // Properties: Bits: 10:9, Type: rw, Reset Value: 0x0
#define DDRIOB_CLOCK_OUTPUT_EN_MASK          0x00000600UL    // Enables output mode to enable output ties to
#define DDRIOB_CLOCK_OUTPUT_EN_BPOS          9UL             // 00: ibuf
                                                             // 01 and 10: reserved
                                                             // 11: obuf

                                                             // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define DDRIOB_CLOCK_TERM_DISABLE_MODE_MASK  0x00000100UL    // Termination is used during read transactions and
#define DDRIOB_CLOCK_TERM_DISABLE_MODE_BPOS  8UL             // may be disabled (automatically by hardware)
                                                             // when there are no reads taking place through the
                                                             // DDR Interface. Disabling termination reduces
                                                             // power consumption.
                                                             // 0: termination always enabled
                                                             // 1: use 'dynamic_dci_ts' to disable termination
                                                             // when not in use
                                                             // NOTE: This bit must be 0 during DRAM
                                                             // init/training. It may be set to 1 after init/training
                                                             // completes.

                                                             // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define DDRIOB_CLOCK_IBUF_DISABLE_MODE_MASK  0x00000080UL    // Use ibuf_disable_into control ibuf
#define DDRIOB_CLOCK_IBUF_DISABLE_MODE_BPOS  7UL             // 0: ibuf is enabled
                                                             // 1: use ibuf_disable_in_to control enable
                                                             // NOTE: This must be 0 during DRAM
                                                             // init/training and can only be set to 1 after
                                                             // init/training completes.

                                                             // Properties: Bits: 6:5, Type: rw, Reset Value: 0x0
#define DDRIOB_CLOCK_DCI_TYPE_MASK           0x00000060UL    // DCI Mode Selection:
#define DDRIOB_CLOCK_DCI_TYPE_BPOS           5UL             // 00: DCI Disabled (DDR2/3L ADDR and CLOCK)
                                                             // 01: DCI Drive (LPDDR2)
                                                             // 10: reserved
                                                             // 11: DCI Termination (DDR2/3/3L DATA and
                                                             // DIFF)

                                                             // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define DDRIOB_CLOCK_TERM_EN_MASK            0x00000010UL    // Tri State Termination Enable:
#define DDRIOB_CLOCK_TERM_EN_BPOS            4UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define DDRIOB_CLOCK_DCI_UPDATE_B_MASK       0x00000008UL    // DCI Update Enable:
#define DDRIOB_CLOCK_DCI_UPDATE_B_BPOS       3UL             // 0: disable
                                                             // 1: enable

                                                             // Properties: Bits: 2:1, Type: rw, Reset Value: 0x0
#define DDRIOB_CLOCK_INP_TYPE_MASK           0x00000006UL    // Input buffer control:
#define DDRIOB_CLOCK_INP_TYPE_BPOS           1UL             // 00: Input off (input signal to selected controller is
                                                             // driven Low).
                                                             // 01: Vref based differential receiver for SSTL,
                                                             // HSTL.
                                                             // 10: Differential input receiver.
                                                             // 11: LVCMOS receiver.

// RESERVED                                                     Properties: Bit: 0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_DRIVE_SLEW_ADDR
//
// Name                    DDRIOB_DRIVE_SLEW_ADDR_REG
// Relative Address        0x00000B5C
// Absolute Address        0xF8000B5C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Drive and Slew controls for Address and Command pins of the DDR Interface
//
// Register DDRIOB_DRIVE_SLEW_ADDR_REG Details
//         Value of this register is computed by EDK after taking into account the Silicon Revision and DDR Standard
//         and can be found in the initialization TCL file or FSBL code. Values other than the one computed by EDK
//         are not supported
//
// RESERVED                               Properties: Bits: 31:27, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 26:24, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 23:19, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 18:14, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 13:7, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 6:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_DRIVE_SLEW_DATA
//
// Name                    DDRIOB_DRIVE_SLEW_DATA_REG
// Relative Address        0x00000B60
// Absolute Address        0xF8000B60
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Drive and Slew controls for DQ pins of the DDR Interface
//
// Register DDRIOB_DRIVE_SLEW_DATA_REG Details
//         Value of this register is computed by EDK after taking into account the Silicon Revision and DDR Standard
//         and can be found in the initialization TCL file or FSBL code. Values other than the one computed by EDK
//         are not supported
//
// RESERVED                               Properties: Bits: 31:27, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 26:24, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 23:19, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 18:14, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 13:7, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 6:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_DRIVE_SLEW_DIFF
//
// Name                    DDRIOB_DRIVE_SLEW_DIFF_REG
// Relative Address        0x00000B64
// Absolute Address        0xF8000B64
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Drive and Slew controls for DQS pins of the DDR Interface
//
// Register DDRIOB_DRIVE_SLEW_DIFF_REG Details
//         Value of this register is computed by EDK after taking into account the Silicon Revision and DDR Standard
//         and can be found in the initialization TCL file or FSBL code. Values other than the one computed by EDK
//         are not supported
//
// RESERVED                               Properties: Bits: 31:27, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 26:24, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 23:19, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 18:14, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 13:7, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 6:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_DRIVE_SLEW_CLOCK
//
// Name                    DDRIOB_DRIVE_SLEW_CLOCK_REG
// Relative Address        0x00000B68
// Absolute Address        0xF8000B68
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Drive and Slew controls for Clock pins of the DDR Interface
//
// Register DDRIOB_DRIVE_SLEW_CLOCK_REG Details
//         Value of this register is computed by EDK after taking into account the Silicon Revision and DDR Standard
//         and can be found in the initialization TCL file or FSBL code. Values other than the one computed by EDK
//         are not supported
//
// RESERVED                               Properties: Bits: 31:27, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 26:24, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 23:19, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 18:14, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 13:7, Type: rw, Reset Value: 0x0

// RESERVED                               Properties: Bits: 6:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_DDR_CTRL
//
// Name                    DDRIOB_DDR_CTRL_REG
// Relative Address        0x00000B6C
// Absolute Address        0xF8000B6C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DDR IOB Buffer Control
//
// Register DDRIOB_DDR_CTRL_REG Details
//
// RESERVED                                                  Properties: Bits: 31:15, Type: rw, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 14, Type: rw, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 13, Type: rw, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 12, Type: rw, Reset Value: 0x0

// RESERVED                                                  Properties: Bits: 11:10, Type: rw, Reset Value: 0x0

                                                          // Properties: Bit: 9, Type: rw, Reset Value: 0x0
#define DDRIOB_DDR_CTRL_REFIO_EN_MASK     0x00000200UL    // Enables VRP,VRN
#define DDRIOB_DDR_CTRL_REFIO_EN_BPOS     9UL             // 0: VRP/VRN not used
                                                          // 1: VRP/VRN used as refio

// RESERVED                                                  Properties: Bits: 8:7, Type: rw, Reset Value: 0x0

                                                          // Properties: Bits: 6:5, Type: rw, Reset Value: 0x0
#define DDRIOB_DDR_CTRL_VREF_EXT_EN_MASK  0x00000060UL    // Enables External VREF input
#define DDRIOB_DDR_CTRL_VREF_EXT_EN_BPOS  5UL             // x0: Disable External VREF for lower 16 bits
                                                          // x1: Enable External VREF for lower 16 bits
                                                          // 0x: Disable External VREF for upper 16 bits
                                                          // 1x: Enable External VREF for upper 16 bits

                                                          // Properties: Bits: 4:1, Type: rw, Reset Value: 0x0
#define DDRIOB_DDR_CTRL_VREF_SEL_MASK     0x0000001EUL    // Specifies DDR IOB Vref generator output:
#define DDRIOB_DDR_CTRL_VREF_SEL_BPOS     1UL             // 0001: VREF = 0.6V for LPDDR2 with 1.2V IO
                                                          // 0010: VREF = 0.675V for DDR3L with 1.35V IO
                                                          // 0100: VREF = 0.75V for DDR3 with 1.5V IO
                                                          // 1000: VREF = 0.90V for DDR2 with 1.8V IO

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define DDRIOB_DDR_CTRL_VREF_INT_EN_MASK  0x00000001UL    // Enables VREF internal generator
#define DDRIOB_DDR_CTRL_VREF_INT_EN_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_DCI_CTRL
//
// Name                    DDRIOB_DCI_CTRL_REG
// Relative Address        0x00000B70
// Absolute Address        0xF8000B70
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000020
// Description             DDR IOB DCI Config
//
// Register DDRIOB_DCI_CTRL_REG Details
//
// RESERVED                                                     Properties: Bits: 31:28, Type: rw, Reset Value: 0x0

// RESERVED                                                     Properties: Bit: 27, Type: rw, Reset Value: 0x0

// RESERVED                                                     Properties: Bit: 26, Type: rw, Reset Value: 0x0

// RESERVED                                                     Properties: Bit: 25, Type: rw, Reset Value: 0x0

// RESERVED                                                     Properties: Bit: 24, Type: rw, Reset Value: 0x0

// RESERVED                                                     Properties: Bit: 23, Type: rw, Reset Value: 0x0

// RESERVED                                                     Properties: Bit: 22, Type: rw, Reset Value: 0x0

// RESERVED                                                     Properties: Bit: 21, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 20, Type: rw, Reset Value: 0x0
#define DDRIOB_DCI_CTRL_UPDATE_CONTROL_MASK  0x00100000UL    // DCI Update Mode. Use the values in the
#define DDRIOB_DCI_CTRL_UPDATE_CONTROL_BPOS  20UL            // Calibration Table.

                                                             // Properties: Bits: 19:17, Type: rw, Reset Value: 0x0
#define DDRIOB_DCI_CTRL_PREF_OPT2_MASK       0x000E0000UL    // DCI Calibration. Use the values in the Calibration
#define DDRIOB_DCI_CTRL_PREF_OPT2_BPOS       17UL            // Table.

// RESERVED                                                     Properties: Bit: 16, Type: rw, Reset Value: 0x0

                                                             // Properties: Bits: 15:14, Type: rw, Reset Value: 0x0
#define DDRIOB_DCI_CTRL_PREF_OPT1_MASK       0x0000C000UL    // DCI Calibration. Use the values in the Calibration
#define DDRIOB_DCI_CTRL_PREF_OPT1_BPOS       14UL            // Table.

                                                             // Properties: Bits: 13:11, Type: rw, Reset Value: 0x0
#define DDRIOB_DCI_CTRL_NREF_OPT4_MASK       0x00003800UL    // DCI Calibration. Use the values in the Calibration
#define DDRIOB_DCI_CTRL_NREF_OPT4_BPOS       11UL            // Table.

                                                             // Properties: Bits: 10:8, Type: rw, Reset Value: 0x0
#define DDRIOB_DCI_CTRL_NREF_OPT2_MASK       0x00000700UL    // DCI Calibration. Use the values in the Calibration
#define DDRIOB_DCI_CTRL_NREF_OPT2_BPOS       8UL             // Table.

                                                             // Properties: Bits: 7:6, Type: rw, Reset Value: 0x0
#define DDRIOB_DCI_CTRL_NREF_OPT1_MASK       0x000000C0UL    // DCI Calibration. Use the values in the Calibration
#define DDRIOB_DCI_CTRL_NREF_OPT1_BPOS       6UL             // Table.

// RESERVED                                                     Properties: Bit: 5, Type: rw, Reset Value: 0x1

// RESERVED                                                     Properties: Bit: 4, Type: rw, Reset Value: 0x0

// RESERVED                                                     Properties: Bit: 3, Type: rw, Reset Value: 0x0

// RESERVED                                                     Properties: Bit: 2, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define DDRIOB_DCI_CTRL_ENABLE_MASK          0x00000002UL    // DCI System Enable. Set to 1 if any IOs in DDR IO
#define DDRIOB_DCI_CTRL_ENABLE_BPOS          1UL             // Bank use DCI Termination. DDR2, DDR3, DDR3L
                                                             // and LPDDR2 (Silicon Revision 2.0+)
                                                             // configurations require this bit set to 1

                                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define DDRIOB_DCI_CTRL_RESET_MASK           0x00000001UL    // At least toggle once to initialize flops in DCI
#define DDRIOB_DCI_CTRL_RESET_BPOS           0UL             // system


//------------------------------------------------------------------------------
//
// Register (SLCR) DDRIOB_DCI_STATUS
//
// Name                    DDRIOB_DCI_STATUS_REG
// Relative Address        0x00000B74
// Absolute Address        0xF8000B74
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DDR IO Buffer DCI Status
//
// Register DDRIOB_DCI_STATUS_REG Details
//
// RESERVED                                             Properties: Bits: 31:14, Type: ro, Reset Value: 0x0

                                                     // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define DDRIOB_DCI_STATUS_DONE_MASK  0x00002000UL    // DCI done signal
#define DDRIOB_DCI_STATUS_DONE_BPOS  13UL            // 

// RESERVED                                             Properties: Bit: 12, Type: rw, Reset Value: 0x0

// RESERVED                                             Properties: Bit: 11, Type: rw, Reset Value: 0x0

// RESERVED                                             Properties: Bit: 10, Type: ro, Reset Value: 0x0

// RESERVED                                             Properties: Bit: 9, Type: ro, Reset Value: 0x0

// RESERVED                                             Properties: Bit: 8, Type: ro, Reset Value: 0x0

// RESERVED                                             Properties: Bit: 7, Type: ro, Reset Value: 0x0

// RESERVED                                             Properties: Bit: 6, Type: ro, Reset Value: 0x0

// RESERVED                                             Properties: Bit: 5, Type: ro, Reset Value: 0x0

// RESERVED                                             Properties: Bits: 4:3, Type: ro, Reset Value: 0x0

// RESERVED                                             Properties: Bit: 2, Type: ro, Reset Value: 0x0

// RESERVED                                             Properties: Bit: 1, Type: ro, Reset Value: 0x0

                                                     // Properties: Bit: 0, Type: ro, Reset Value: 0x0
#define DDRIOB_DCI_STATUS_LOCK_MASK  0x00000001UL    // DCI Status input Read Only
#define DDRIOB_DCI_STATUS_LOCK_BPOS  0UL             // 


#endif // PS7_SLCR_H

