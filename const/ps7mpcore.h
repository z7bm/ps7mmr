//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_MPCORE
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

#ifndef PS7_MPCORE_H
#define PS7_MPCORE_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    MPCORE MMRs
//
//              Name                         Address                     Width   Type  Reset Value   Description
const uintptr_t SCU_CTRL_REG               = MPCORE_ADDR + 0x00000000; //  32    rw    0x00000002    SCU Control Register
const uintptr_t SCU_CONFIG_REG             = MPCORE_ADDR + 0x00000004; //  32    ro    0x00000501    SCU Configuration Register
const uintptr_t SCU_CPU_POWER_ST_REG       = MPCORE_ADDR + 0x00000008; //  32    rw    0x00000000    SCU CPU Power Status Register
const uintptr_t SCU_INVLDT_ALL_REGS_SS_REG = MPCORE_ADDR + 0x0000000C; //  32    wo    0x00000000    SCU Invalidate All Registers in Secure State
const uintptr_t FILTERING_START_ADDR_REG   = MPCORE_ADDR + 0x00000040; //  32    rw    0x00100000    Filtering Start Address Register
const uintptr_t FILTERING_END_ADDR_REG     = MPCORE_ADDR + 0x00000044; //  32    rw    0x00000000    Defined by FILTEREND input
const uintptr_t SCU_ACCESS_CTRL_REG        = MPCORE_ADDR + 0x00000050; //  32    rw    0x0000000F    SCU Access Control 
const uintptr_t SCU_NS_ACCESS_CTRL_REG     = MPCORE_ADDR + 0x00000054; //  32    ro    0x00000000    SCU Non-secure Access Control Register 
const uintptr_t GIC_ICCICR                 = MPCORE_ADDR + 0x00000100; //  32    rw    0x00000000    CPU Interface Control Register
const uintptr_t GIC_ICCPMR                 = MPCORE_ADDR + 0x00000104; //  32    rw    0x00000000    Interrupt Priority Mask Register
const uintptr_t GIC_ICCBPR                 = MPCORE_ADDR + 0x00000108; //  32    rw    0x00000002    Binary Point Register
const uintptr_t GIC_ICCIAR                 = MPCORE_ADDR + 0x0000010C; //  32    rw    0x000003FF    Interrupt Acknowledge Register
const uintptr_t GIC_ICCEOIR                = MPCORE_ADDR + 0x00000110; //  32    rw    0x00000000    End Of Interrupt Register
const uintptr_t GIC_ICCRPR                 = MPCORE_ADDR + 0x00000114; //  32    rw    0x000000FF    Running Priority Register
const uintptr_t GIC_ICCHPIR                = MPCORE_ADDR + 0x00000118; //  32    rw    0x000003FF    Highest Pending Interrupt Register
const uintptr_t GIC_ICCABPR                = MPCORE_ADDR + 0x0000011C; //  32    rw    0x00000003    Aliased Non-secure Binary
const uintptr_t GIC_ICCIDR                 = MPCORE_ADDR + 0x000001FC; //  32    ro    0x3901243B    CPU Interface Implementer Identification Register
const uintptr_t GTMR_CNT0_REG              = MPCORE_ADDR + 0x00000200; //  32    rw    0x00000000    Global Timer Counter Register 0
const uintptr_t GTMR_CNT1_REG              = MPCORE_ADDR + 0x00000204; //  32    rw    0x00000000    Global Timer Counter Register 1
const uintptr_t GTMR_CTRL_REG              = MPCORE_ADDR + 0x00000208; //  32    rw    0x00000000    Global Timer Control Register
const uintptr_t GTMR_INT_STS_REG           = MPCORE_ADDR + 0x0000020C; //  32    rw    0x00000000    Global Timer Interrupt Status Register
const uintptr_t GTMR_CMPVAL0_REG           = MPCORE_ADDR + 0x00000210; //  32    rw    0x00000000    Comparator Value Register_0
const uintptr_t GTMR_CMPVAL1_RER           = MPCORE_ADDR + 0x00000214; //  32    rw    0x00000000    Comparator Value Register_1
const uintptr_t GTMR_INC_REG               = MPCORE_ADDR + 0x00000218; //  32    rw    0x00000000    Auto-increment Register
const uintptr_t PTMR_LOAD_REG              = MPCORE_ADDR + 0x00000600; //  32    rw    0x00000000    Private Timer Load Register
const uintptr_t PTMR_CNT_REG               = MPCORE_ADDR + 0x00000604; //  32    rw    0x00000000    Private Timer Counter Register
const uintptr_t PTMR_CTLR_REG              = MPCORE_ADDR + 0x00000608; //  32    rw    0x00000000    Private Timer Control Register
const uintptr_t PTMR_INT_STS_REG           = MPCORE_ADDR + 0x0000060C; //  32    rw    0x00000000    Private Timer Interrupt Status Register
const uintptr_t WDTMR_LOAD_REG             = MPCORE_ADDR + 0x00000620; //  32    rw    0x00000000    Watchdog Load Register
const uintptr_t WDTMR_CNT_REG              = MPCORE_ADDR + 0x00000624; //  32    rw    0x00000000    Watchdog Counter Register
const uintptr_t WDTMR_CTRL_REG             = MPCORE_ADDR + 0x00000628; //  32    rw    0x00000000    Watchdog Control Register
const uintptr_t WDTMR_INT_STS_REG          = MPCORE_ADDR + 0x0000062C; //  32    rw    0x00000000    Watchdog Interrupt Status Register
const uintptr_t WDTMR_RST_STS_REG          = MPCORE_ADDR + 0x00000630; //  32    rw    0x00000000    Watchdog Reset Status Register
const uintptr_t WDTMR_DISABLE_REG          = MPCORE_ADDR + 0x00000634; //  32    rw    0x00000000    Watchdog Disable Register
const uintptr_t GIC_ICDDCR                 = MPCORE_ADDR + 0x00001000; //  32    rw    0x00000000    Distributor Control Register
const uintptr_t GIC_ICDICTR                = MPCORE_ADDR + 0x00001004; //  32    ro    0x0000FC22    Interrupt Controller Type Register
const uintptr_t GIC_ICDIIDR                = MPCORE_ADDR + 0x00001008; //  32    ro    0x0102043B    Distributor Implementer Identification Register
const uintptr_t GIC_ICDISR0                = MPCORE_ADDR + 0x00001080; //  32    rw    0x00000000    Interrupt Security Register_0
const uintptr_t GIC_ICDISR1                = MPCORE_ADDR + 0x00001084; //  32    rw    0x00000000    Interrupt Security Register_1
const uintptr_t GIC_ICDISR2                = MPCORE_ADDR + 0x00001088; //  32    rw    0x00000000    Interrupt Security Register_2
const uintptr_t GIC_ICDISER0               = MPCORE_ADDR + 0x00001100; //  32    rw    0x0000FFFF    Interrupt Set-enable Register 0
const uintptr_t GIC_ICDISER1               = MPCORE_ADDR + 0x00001104; //  32    rw    0x00000000    Interrupt Set-enable Register 1
const uintptr_t GIC_ICDISER2               = MPCORE_ADDR + 0x00001108; //  32    rw    0x00000000    Interrupt Set-enable Register 2
const uintptr_t GIC_ICDICER0               = MPCORE_ADDR + 0x00001180; //  32    rw    0x0000FFFF    Interrupt Clear-Enable Register 0
const uintptr_t GIC_ICDICER1               = MPCORE_ADDR + 0x00001184; //  32    rw    0x00000000    Interrupt Clear-Enable Register 1
const uintptr_t GIC_ICDICER2               = MPCORE_ADDR + 0x00001188; //  32    rw    0x00000000    Interrupt Clear-Enable Register 2
const uintptr_t GIC_ICDISPR0               = MPCORE_ADDR + 0x00001200; //  32    rw    0x00000000    Interrupt Set-pending Register_0
const uintptr_t GIC_ICDISPR1               = MPCORE_ADDR + 0x00001204; //  32    rw    0x00000000    Interrupt Set-pending Register_1
const uintptr_t GIC_ICDISPR2               = MPCORE_ADDR + 0x00001208; //  32    rw    0x00000000    Interrupt Set-pending Register_2
const uintptr_t GIC_ICDICPR0               = MPCORE_ADDR + 0x00001280; //  32    rw    0x00000000    Interrupt Clear-Pending Register_0
const uintptr_t GIC_ICDICPR1               = MPCORE_ADDR + 0x00001284; //  32    rw    0x00000000    Interrupt Clear-Pending Register_1
const uintptr_t GIC_ICDICPR2               = MPCORE_ADDR + 0x00001288; //  32    rw    0x00000000    Interrupt Clear-Pending Register_2
const uintptr_t GIC_ICDABR0                = MPCORE_ADDR + 0x00001300; //  32    rw    0x00000000    Active Bit register_0
const uintptr_t GIC_ICDABR1                = MPCORE_ADDR + 0x00001304; //  32    rw    0x00000000    Active Bit register_1
const uintptr_t GIC_ICDABR2                = MPCORE_ADDR + 0x00001308; //  32    rw    0x00000000    Active Bit register_2
const uintptr_t GIC_ICDIPR0                = MPCORE_ADDR + 0x00001400; //  32    rw    0x00000000    Interrupt Priority Register_0
const uintptr_t GIC_ICDIPR1                = MPCORE_ADDR + 0x00001404; //  32    rw    0x00000000    Interrupt Priority Register_1
const uintptr_t GIC_ICDIPR2                = MPCORE_ADDR + 0x00001408; //  32    rw    0x00000000    Interrupt Priority Register_2
const uintptr_t GIC_ICDIPR3                = MPCORE_ADDR + 0x0000140C; //  32    rw    0x00000000    Interrupt Priority Register_3
const uintptr_t GIC_ICDIPR4                = MPCORE_ADDR + 0x00001410; //  32    rw    0x00000000    Interrupt Priority Register_4
const uintptr_t GIC_ICDIPR5                = MPCORE_ADDR + 0x00001414; //  32    rw    0x00000000    Interrupt Priority Register_5
const uintptr_t GIC_ICDIPR6                = MPCORE_ADDR + 0x00001418; //  32    rw    0x00000000    Interrupt Priority Register_6
const uintptr_t GIC_ICDIPR7                = MPCORE_ADDR + 0x0000141C; //  32    rw    0x00000000    Interrupt Priority Register_7
const uintptr_t GIC_ICDIPR8                = MPCORE_ADDR + 0x00001420; //  32    rw    0x00000000    Interrupt Priority Register_8
const uintptr_t GIC_ICDIPR9                = MPCORE_ADDR + 0x00001424; //  32    rw    0x00000000    Interrupt Priority Register_9
const uintptr_t GIC_ICDIPR10               = MPCORE_ADDR + 0x00001428; //  32    rw    0x00000000    Interrupt Priority Register_10
const uintptr_t GIC_ICDIPR11               = MPCORE_ADDR + 0x0000142C; //  32    rw    0x00000000    Interrupt Priority Register_11
const uintptr_t GIC_ICDIPR12               = MPCORE_ADDR + 0x00001430; //  32    rw    0x00000000    Interrupt Priority Register_12
const uintptr_t GIC_ICDIPR13               = MPCORE_ADDR + 0x00001434; //  32    rw    0x00000000    Interrupt Priority Register_13
const uintptr_t GIC_ICDIPR14               = MPCORE_ADDR + 0x00001438; //  32    rw    0x00000000    Interrupt Priority Register_14
const uintptr_t GIC_ICDIPR15               = MPCORE_ADDR + 0x0000143C; //  32    rw    0x00000000    Interrupt Priority Register_15
const uintptr_t GIC_ICDIPR16               = MPCORE_ADDR + 0x00001440; //  32    rw    0x00000000    Interrupt Priority Register_16
const uintptr_t GIC_ICDIPR17               = MPCORE_ADDR + 0x00001444; //  32    rw    0x00000000    Interrupt Priority Register_17
const uintptr_t GIC_ICDIPR18               = MPCORE_ADDR + 0x00001448; //  32    rw    0x00000000    Interrupt Priority Register_18
const uintptr_t GIC_ICDIPR19               = MPCORE_ADDR + 0x0000144C; //  32    rw    0x00000000    Interrupt Priority Register_19
const uintptr_t GIC_ICDIPR20               = MPCORE_ADDR + 0x00001450; //  32    rw    0x00000000    Interrupt Priority Register_20
const uintptr_t GIC_ICDIPR21               = MPCORE_ADDR + 0x00001454; //  32    rw    0x00000000    Interrupt Priority Register_21
const uintptr_t GIC_ICDIPR22               = MPCORE_ADDR + 0x00001458; //  32    rw    0x00000000    Interrupt Priority Register_22
const uintptr_t GIC_ICDIPR23               = MPCORE_ADDR + 0x0000145C; //  32    rw    0x00000000    Interrupt Priority Register_23
const uintptr_t GIC_ICDIPTR0               = MPCORE_ADDR + 0x00001800; //  32    ro    0x00000000    Interrupt Processor Targets Register 0
const uintptr_t GIC_ICDIPTR1               = MPCORE_ADDR + 0x00001804; //  32    ro    0x00000000    Interrupt Processor Targets Register 1
const uintptr_t GIC_ICDIPTR2               = MPCORE_ADDR + 0x00001808; //  32    ro    0x00000000    Interrupt Processor Targets Register 2
const uintptr_t GIC_ICDIPTR3               = MPCORE_ADDR + 0x0000180C; //  32    ro    0x00000000    Interrupt Processor Targets Register 3
const uintptr_t GIC_ICDIPTR4               = MPCORE_ADDR + 0x00001810; //  32    rw    0x00000000    Interrupt Processor Targets Register 4
const uintptr_t GIC_ICDIPTR5               = MPCORE_ADDR + 0x00001814; //  32    ro    0x00000000    Interrupt Processor Targets Register 5
const uintptr_t GIC_ICDIPTR6               = MPCORE_ADDR + 0x00001818; //  32    ro    0x00000000    Interrupt Processor Targets Register 6
const uintptr_t GIC_ICDIPTR7               = MPCORE_ADDR + 0x0000181C; //  32    ro    0x00000000    Interrupt Processor Targets Register 7
const uintptr_t GIC_ICDIPTR8               = MPCORE_ADDR + 0x00001820; //  32    rw    0x00000000    Interrupt Processor Targets Register 8
const uintptr_t GIC_ICDIPTR9               = MPCORE_ADDR + 0x00001824; //  32    rw    0x00000000    Interrupt Processor Targets Register 9
const uintptr_t GIC_ICDIPTR10              = MPCORE_ADDR + 0x00001828; //  32    rw    0x00000000    Interrupt Processor Targets Register 10
const uintptr_t GIC_ICDIPTR11              = MPCORE_ADDR + 0x0000182C; //  32    rw    0x00000000    Interrupt Processor Targets Register 11
const uintptr_t GIC_ICDIPTR12              = MPCORE_ADDR + 0x00001830; //  32    rw    0x00000000    Interrupt Processor Targets Register 12
const uintptr_t GIC_ICDIPTR13              = MPCORE_ADDR + 0x00001834; //  32    rw    0x00000000    Interrupt Processor Targets Register 13
const uintptr_t GIC_ICDIPTR14              = MPCORE_ADDR + 0x00001838; //  32    rw    0x00000000    Interrupt Processor Targets Register 14
const uintptr_t GIC_ICDIPTR15              = MPCORE_ADDR + 0x0000183C; //  32    rw    0x00000000    Interrupt Processor Targets Register 15
const uintptr_t GIC_ICDIPTR16              = MPCORE_ADDR + 0x00001840; //  32    rw    0x00000000    Interrupt Processor Targets Register 16
const uintptr_t GIC_ICDIPTR17              = MPCORE_ADDR + 0x00001844; //  32    rw    0x00000000    Interrupt Processor Targets Register 17
const uintptr_t GIC_ICDIPTR18              = MPCORE_ADDR + 0x00001848; //  32    rw    0x00000000    Interrupt Processor Targets Register 18
const uintptr_t GIC_ICDIPTR19              = MPCORE_ADDR + 0x0000184C; //  32    rw    0x00000000    Interrupt Processor Targets Register 19
const uintptr_t GIC_ICDIPTR20              = MPCORE_ADDR + 0x00001850; //  32    rw    0x00000000    Interrupt Processor Targets Register 20
const uintptr_t GIC_ICDIPTR21              = MPCORE_ADDR + 0x00001854; //  32    rw    0x00000000    Interrupt Processor Targets Register 21
const uintptr_t GIC_ICDIPTR22              = MPCORE_ADDR + 0x00001858; //  32    rw    0x00000000    Interrupt Processor Targets Register 22
const uintptr_t GIC_ICDIPTR23              = MPCORE_ADDR + 0x0000185C; //  32    rw    0x00000000    Interrupt Processor Targets Register 23
const uintptr_t GIC_ICDICFR0               = MPCORE_ADDR + 0x00001C00; //  32    ro    0x00000000    Interrupt Configuration Register 0
const uintptr_t GIC_ICDICFR1               = MPCORE_ADDR + 0x00001C04; //  32    rw    0x00000000    Interrupt Configuration Register 1
const uintptr_t GIC_ICDICFR2               = MPCORE_ADDR + 0x00001C08; //  32    rw    0x00000000    Interrupt Configuration Register 2
const uintptr_t GIC_ICDICFR3               = MPCORE_ADDR + 0x00001C0C; //  32    rw    0x00000000    Interrupt Configuration Register 3
const uintptr_t GIC_ICDICFR4               = MPCORE_ADDR + 0x00001C10; //  32    rw    0x00000000    Interrupt Configuration Register 4
const uintptr_t GIC_ICDICFR5               = MPCORE_ADDR + 0x00001C14; //  32    rw    0x00000000    Interrupt Configuration Register 5
const uintptr_t GIC_PPI_STATUS_REG         = MPCORE_ADDR + 0x00001D00; //  32    ro    0x00000000    PPI Status Register
const uintptr_t GIC_SPI_STATUS_0_REG       = MPCORE_ADDR + 0x00001D04; //  32    ro    0x00000000    SPI Status Register 0
const uintptr_t GIC_SPI_STATUS_1_REG       = MPCORE_ADDR + 0x00001D08; //  32    ro    0x00000000    SPI Status Register 1
const uintptr_t GIC_ICDSGIR                = MPCORE_ADDR + 0x00001F00; //  32    rw    0x00000000    Software Generated Interrupt Register
const uintptr_t GIC_ICPIDR4                = MPCORE_ADDR + 0x00001FD0; //  32    rw    0x00000004    Peripheral ID4
const uintptr_t GIC_ICPIDR5                = MPCORE_ADDR + 0x00001FD4; //  32    rw    0x00000000    Peripheral ID5
const uintptr_t GIC_ICPIDR6                = MPCORE_ADDR + 0x00001FD8; //  32    rw    0x00000000    Peripheral ID6
const uintptr_t GIC_ICPIDR7                = MPCORE_ADDR + 0x00001FDC; //  32    rw    0x00000000    Peripheral ID7
const uintptr_t GIC_ICPIDR0                = MPCORE_ADDR + 0x00001FE0; //  32    rw    0x00000090    Peripheral ID0
const uintptr_t GIC_ICPIDR1                = MPCORE_ADDR + 0x00001FE4; //  32    rw    0x000000B3    Peripheral ID1
const uintptr_t GIC_ICPIDR2                = MPCORE_ADDR + 0x00001FE8; //  32    rw    0x0000001B    Peripheral ID2
const uintptr_t GIC_ICPIDR3                = MPCORE_ADDR + 0x00001FEC; //  32    rw    0x00000000    Peripheral ID3
const uintptr_t GIC_ICCIDR0                = MPCORE_ADDR + 0x00001FF0; //  32    rw    0x0000000D    Component ID0
const uintptr_t GIC_ICCIDR1                = MPCORE_ADDR + 0x00001FF4; //  32    rw    0x000000F0    Component ID1
const uintptr_t GIC_ICCIDR2                = MPCORE_ADDR + 0x00001FF8; //  32    rw    0x00000005    Component ID2
const uintptr_t GIC_ICCIDR3                = MPCORE_ADDR + 0x00001FFC; //  32    rw    0x000000B1    Component ID3
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (MPCORE) SCU_CTRL
//
// Name                    SCU_CTRL_REG
// Relative Address        0x00000000
// Absolute Address        0xF8F00000
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000002
// Description             SCU Control Register
//
// Register SCU_CTRL_REG Details
//
// RESERVED                                                                   Properties: Bits: 31:7, Type: rw, Reset Value: 0x0

                                                                           // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t SCU_IC_STANDBY_ENABLE_MASK                = 0x00000040;    // When set, this stops the Interrupt Controller clock
const uintptr_t SCU_IC_STANDBY_ENABLE_BPOS                = 6;             // when no interrupts are pending, and no CPU is
                                                                           // performing a read/write request.

                                                                           // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t SCU_STANDBY_ENABLE_MASK                   = 0x00000020;    // When set, SCU CLK is turned off when all
const uintptr_t SCU_STANDBY_ENABLE_BPOS                   = 5;             // processors are in WFI mode,
                                                                           // there is no pending request on the ACP (if
                                                                           // implemented), and there is no
                                                                           // remaining activity in the SCU.
                                                                           // When SCU CLK is off, ARREADYS, AWREADYS
                                                                           // and WREADYS on
                                                                           // the ACP are forced LOW. The clock is turned on
                                                                           // when any processor
                                                                           // leaves WFI mode, or if there is a new request on
                                                                           // the ACP.

                                                                           // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t SCU_FORCE_ALL_DEVICE_TO_PORT0_ENABLE_MASK = 0x00000010;    // When set, all requests from the ACP or processors
const uintptr_t SCU_FORCE_ALL_DEVICE_TO_PORT0_ENABLE_BPOS = 4;             // with AxCACHE =
                                                                           // NonCacheable Bufferable are forced to be issued
                                                                           // on the AXI Master port
                                                                           // M0.

                                                                           // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t SCU_SPECULATIVE_LINEFILLS_ENABLE_MASK     = 0x00000008;    // When set, coherent linefill requests are sent
const uintptr_t SCU_SPECULATIVE_LINEFILLS_ENABLE_BPOS     = 3;             // speculatively to the L2C-310
                                                                           // in parallel with the tag look-up. If the tag look-up
                                                                           // misses, the confirmed
                                                                           // linefill is sent to the L2C-310 and gets RDATA
                                                                           // earlier because the data
                                                                           // request was already initiated by the speculative
                                                                           // request. This feature works
                                                                           // only if the L2C-310 is present in the design.

                                                                           // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t SCU_RAMS_PARITY_ENABLE_MASK               = 0x00000004;    // 1 = Parity on.
const uintptr_t SCU_RAMS_PARITY_ENABLE_BPOS               = 2;             // 0 = Parity off. This is the default setting.
                                                                           // This bit is always zero if support for parity is not
                                                                           // implemented.

                                                                           // Properties: Bit: 1, Type: rw, Reset Value: 0x1
const uintptr_t SCU_ADDRESS_FILTERING_ENABLE_MASK         = 0x00000002;    // 1 = Addressing filtering on.
const uintptr_t SCU_ADDRESS_FILTERING_ENABLE_BPOS         = 1;             // 0 = Addressing filtering off.
                                                                           // The default value is the value of FILTEREN
                                                                           // sampled when nSCURESET
                                                                           // is deasserted.
                                                                           // This bit is always zero if the SCU is implemented
                                                                           // in the single master port
                                                                           // configuration.

                                                                           // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t SCU_ENABLE_MASK                           = 0x00000001;    // 1 = SCU enable.
const uintptr_t SCU_ENABLE_BPOS                           = 0;             // 0 = SCU disable. This is the default setting


//------------------------------------------------------------------------------
//
// Register (MPCORE) SCU_CONFIG
//
// Name                    SCU_CONFIG_REG
// Relative Address        0x00000004
// Absolute Address        0xF8F00004
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000501
// Description             SCU Configuration Register
//
// Register SCU_CONFIG_REG Details
//
// RESERVED                                                Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                        // Properties: Bits: 15:8, Type: ro, Reset Value: 0x5
const uintptr_t SCU_TAG_RAM_SIZES_MASK = 0x0000FF00;    // Bits [15:14] indicate Cortex-A9 processor CPU3
const uintptr_t SCU_TAG_RAM_SIZES_BPOS = 8;             // tag RAM size if present.
                                                        // Bits [13:12] indicate Cortex-A9 processor CPU2
                                                        // tag RAM size if present.
                                                        // Bits [11:10] indicate Cortex-A9 processor CPU1
                                                        // tag RAM size if present.
                                                        // Bits [9:8] indicate Cortex-A9 processor CPU0 tag
                                                        // RAM size.
                                                        // The encoding is as follows:
                                                        // b11 = reserved
                                                        // b10 = 64KB cache, 256 indexes per tag RAM
                                                        // b01 = 32KB cache, 128 indexes per tag RAM
                                                        // b00 = 16KB cache, 64 indexes per tag RAM.

                                                        // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
const uintptr_t SCU_CPUS_SMP_MASK      = 0x000000F0;    // Shows the Cortex-A9 processors that are in
const uintptr_t SCU_CPUS_SMP_BPOS      = 4;             // Symmetric Multi-processing (SMP) or
                                                        // Asymmetric Multi-processing (AMP) mode.
                                                        // 0 = this Cortex-A9 processor is in AMP mode not
                                                        // taking part in coherency or not present.
                                                        // 1 = this Cortex-A9 processor is in SMP mode
                                                        // taking part in coherency.
                                                        // Bit 7 is for CPU3
                                                        // Bit 6 is for CPU2
                                                        // Bit 5 is for CPU1
                                                        // Bit 4 is for CPU0.

// RESERVED                                                Properties: Bits: 3:2, Type: ro, Reset Value: 0x0

                                                        // Properties: Bits: 1:0, Type: ro, Reset Value: 0x1
const uintptr_t SCU_CPU_NUMBER_MASK    = 0x00000003;    // Number of CPUs present in the Cortex-A9
const uintptr_t SCU_CPU_NUMBER_BPOS    = 0;             // MPCore processor
                                                        // b11 = four Cortex-A9 processors, CPU0, CPU1,
                                                        // CPU2, and CPU3
                                                        // b10 = three Cortex-A9 processors, CPU0, CPU1,
                                                        // and CPU2
                                                        // b01 = two Cortex-A9 processors, CPU0 and CPU1
                                                        // b00 = one Cortex-A9 processor, CPU0.


//------------------------------------------------------------------------------
//
// Register (MPCORE) SCU_CPU_POWER_ST
//
// Name                    SCU_CPU_POWER_ST_REG
// Relative Address        0x00000008
// Absolute Address        0xF8F00008
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             SCU CPU Power Status Register
//
// Register SCU_CPU_POWER_ST_REG Details
//
// RESERVED                                                    Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

                                                            // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t SCU_CPU_POWER_ST_CPU3_MASK = 0x03000000;    // Power status of the Cortex-A9 processor:
const uintptr_t SCU_CPU_POWER_ST_CPU3_BPOS = 24;            // b00: Normal mode.
                                                            // b01: Reserved.
                                                            // b10: the Cortex-A9 processor is about to enter (or
                                                            // is in) dormant mode. No coherency
                                                            // request is sent to the Cortex-A9 processor.
                                                            // b11: the Cortex-A9 processor is about to enter (or
                                                            // is in) powered-off mode, or is nonpresent.
                                                            // No coherency request is sent to the Cortex-A9
                                                            // processor.

// RESERVED                                                    Properties: Bits: 23:18, Type: rw, Reset Value: 0x0

                                                            // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t SCU_CPU_POWER_ST_CPU2_MASK = 0x00030000;    // Power status of the Cortex-A9 processor
const uintptr_t SCU_CPU_POWER_ST_CPU2_BPOS = 16;            // 

// RESERVED                                                    Properties: Bits: 15:10, Type: rw, Reset Value: 0x0

                                                            // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t SCU_CPU_POWER_ST_CPU1_MASK = 0x00000300;    // Power status of the Cortex-A9 processor
const uintptr_t SCU_CPU_POWER_ST_CPU1_BPOS = 8;             // 

// RESERVED                                                    Properties: Bits: 7:2, Type: rw, Reset Value: 0x0

                                                            // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t SCU_CPU_POWER_ST_CPU0_MASK = 0x00000003;    // Power status of the Cortex-A9 processor
const uintptr_t SCU_CPU_POWER_ST_CPU0_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (MPCORE) SCU_INVLDT_ALL_REGS_SS
//
// Name                    SCU_INVLDT_ALL_REGS_SS_REG
// Relative Address        0x0000000C
// Absolute Address        0xF8F0000C
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             SCU Invalidate All Registers in
//                         Secure State
//
// Register SCU_INVLDT_ALL_REGS_SS_REG Details
//
// RESERVED                                                                   Properties: Bits: 31:16, Type: wo, Reset Value: 0x0

                                                                           // Properties: Bits: 15:12, Type: wo, Reset Value: 0x0
const uintptr_t SCU_INVALIDATE_ALL_REGS_SS_CPU3_WAYS_MASK = 0x0000F000;    // Specifies the ways that must be invalidated for
const uintptr_t SCU_INVALIDATE_ALL_REGS_SS_CPU3_WAYS_BPOS = 12;            // CPU3. Writing to these bits has no effect if the
                                                                           // Cortex-A9 MPCore processor has fewer than four
                                                                           // processors.

                                                                           // Properties: Bits: 11:8, Type: wo, Reset Value: 0x0
const uintptr_t SCU_INVALIDATE_ALL_REGS_SS_CPU2_WAYS_MASK = 0x00000F00;    // Specifies the ways that must be invalidated for
const uintptr_t SCU_INVALIDATE_ALL_REGS_SS_CPU2_WAYS_BPOS = 8;             // CPU2. Writing to these bits has no effect if the
                                                                           // Cortex-A9 MPCore processor has fewer than
                                                                           // three processors

                                                                           // Properties: Bits: 7:4, Type: wo, Reset Value: 0x0
const uintptr_t SCU_INVALIDATE_ALL_REGS_SS_CPU1_WAYS_MASK = 0x000000F0;    // Specifies the ways that must be invalidated for
const uintptr_t SCU_INVALIDATE_ALL_REGS_SS_CPU1_WAYS_BPOS = 4;             // CPU1. Writing to these bits has no effect if the
                                                                           // Cortex-A9 MPCore processor has fewer than two
                                                                           // processors.

                                                                           // Properties: Bits: 3:0, Type: wo, Reset Value: 0x0
const uintptr_t SCU_INVALIDATE_ALL_REGS_SS_CPU0_WAYS_MASK = 0x0000000F;    // Specifies the ways that must be invalidated for
const uintptr_t SCU_INVALIDATE_ALL_REGS_SS_CPU0_WAYS_BPOS = 0;             // CPU0


//------------------------------------------------------------------------------
//
// Register (MPCORE) FILTERING_START
//
// Name                      FILTERING_START_ADDR_REG
// Relative Address          0x00000040
// Absolute Address          0xF8F00040
// Width                     32 bits
// Access Type               rw
// Reset Value               0x00100000
// Description               Filtering Start Address Register
//
// Register FILTERING_START_ADDR_REG Details
//
                                                              // Properties: Bits: 31:20, Type: rw, Reset Value: 0x1
const uintptr_t FILTERING_START_ADDRESS_MASK = 0xFFF00000;    // Start address for use with master port 1 in a
const uintptr_t FILTERING_START_ADDRESS_BPOS = 20;            // two-master port configuration when
                                                              // address filtering is enabled.
                                                              // The default value is the value of FILTERSTART
                                                              // sampled on exit from reset. The
                                                              // value on the pin gives the upper address bits with
                                                              // 1MB granularity.

                                                              // Properties: Bits: 19:0, Type: rw, Reset Value: 0x0
const uintptr_t FILTERING_START_SBZ_MASK     = 0x000FFFFF;    // SBZ
const uintptr_t FILTERING_START_SBZ_BPOS     = 0;             // 


//------------------------------------------------------------------------------
//
// Register (MPCORE) FILTERING_END
//
// Name                    FILTERING_END_ADDR_REG
// Relative Address        0x00000044
// Absolute Address        0xF8F00044
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Defined by FILTEREND input
//
// Register FILTERING_END_ADDR_REG Details
//
                                                            // Properties: Bits: 31:20, Type: rw, Reset Value: 0x0
const uintptr_t FILTERING_END_ADDRESS_MASK = 0xFFF00000;    // End address for use with master port 1 in a
const uintptr_t FILTERING_END_ADDRESS_BPOS = 20;            // two-master port configuration, when
                                                            // address filtering is enabled.
                                                            // The default value is the value of FILTEREND
                                                            // sampled on exit from reset. The value
                                                            // on the pin gives the upper address bits with 1MB
                                                            // granularity.

                                                            // Properties: Bits: 19:0, Type: rw, Reset Value: 0x0
const uintptr_t FILTERING_END_SBZ_MASK     = 0x000FFFFF;    // SBZ
const uintptr_t FILTERING_END_SBZ_BPOS     = 0;             // 


//------------------------------------------------------------------------------
//
// Register (MPCORE) SCU_ACCESS_CTRL
//
// Name                    SCU_ACCESS_CTRL_REG
// Relative Address        0x00000050
// Absolute Address        0xF8F00050
// Width                   32 bits
// Access Type             rw
// Reset Value             0x0000000F
// Description             SCU Access Control (SAC) Register
//
// Register SCU_ACCESS_CTRL_REG Details
//
                                                           // Properties: Bits: 31:4, Type: rw, Reset Value: 0x0
const uintptr_t SCU_ACCESS_CTRL_SBZ_MASK  = 0xFFFFFFF0;    // SBZ
const uintptr_t SCU_ACCESS_CTRL_SBZ_BPOS  = 4;             // 

                                                           // Properties: Bit: 3, Type: rw, Reset Value: 0x1
const uintptr_t SCU_ACCESS_CTRL_CPU3_MASK = 0x00000008;    // 0 = CPU3 cannot access the components.
const uintptr_t SCU_ACCESS_CTRL_CPU3_BPOS = 3;             // 1 = CPU3 can access the components. This is the
                                                           // default.

                                                           // Properties: Bit: 2, Type: rw, Reset Value: 0x1
const uintptr_t SCU_ACCESS_CTRL_CPU2_MASK = 0x00000004;    // 0 = CPU2 cannot access the components.
const uintptr_t SCU_ACCESS_CTRL_CPU2_BPOS = 2;             // 1 = CPU2 can access the components. This is the
                                                           // default.

                                                           // Properties: Bit: 1, Type: rw, Reset Value: 0x1
const uintptr_t SCU_ACCESS_CTRL_CPU1_MASK = 0x00000002;    // 0 = CPU1 cannot access the components.
const uintptr_t SCU_ACCESS_CTRL_CPU1_BPOS = 1;             // 1 = CPU1 can access the components. This is the
                                                           // default.

                                                           // Properties: Bit: 0, Type: rw, Reset Value: 0x1
const uintptr_t SCU_ACCESS_CTRL_CPU0_MASK = 0x00000001;    // 0 = CPU0 cannot access the components.
const uintptr_t SCU_ACCESS_CTRL_CPU0_BPOS = 0;             // 1 = CPU0 can access the components. This is the
                                                           // default.


//------------------------------------------------------------------------------
//
// Register (MPCORE) SCU_NS_ACCESS_CTRL
//
// Name                    SCU_NS_ACCESS_CTRL_REG
// Relative Address        0x00000054
// Absolute Address        0xF8F00054
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             SCU Non-secure Access Control Register
//                         SNSAC
//
// Register SCU_NS_ACCESS_CTRL_REG Details
//
                                                                             // Properties: Bits: 31:12, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_SBZ_MASK             = 0xFFFFF000;    // SBZ
const uintptr_t SCU_NS_ACCESS_CTRL_REG_SBZ_BPOS             = 12;            // 

                                                                             // Properties: Bit: 11, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_CPU3_GTMR_MASK       = 0x00000800;    // same as above
const uintptr_t SCU_NS_ACCESS_CTRL_REG_CPU3_GTMR_BPOS       = 11;            // 

                                                                             // Properties: Bit: 10, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_CPU2_GTMR_MASK       = 0x00000400;    // same as above
const uintptr_t SCU_NS_ACCESS_CTRL_REG_CPU2_GTMR_BPOS       = 10;            // 

                                                                             // Properties: Bit: 9, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_CPU1_GTMR_MASK       = 0x00000200;    // same as above
const uintptr_t SCU_NS_ACCESS_CTRL_REG_CPU1_GTMR_BPOS       = 9;             // 

                                                                             // Properties: Bit: 8, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_CPU0_GTMR_MASK       = 0x00000100;    // Non-secure access to the global timer for
const uintptr_t SCU_NS_ACCESS_CTRL_REG_CPU0_GTMR_BPOS       = 8;             // CPU<n>.
                                                                             // * <n> is 3 for bit[11]
                                                                             // * <n> is 2 for bit[10]
                                                                             // * <n> is 1 for bit[9]
                                                                             // * <n> is 0 for bit[8].
                                                                             // 0 = Secure accesses only. This is the default value.
                                                                             // 1 = Secure accesses and Non-Secure accesses.

                                                                             // Properties: Bit: 7, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_PTMRS_CPU3_MASK      = 0x00000080;    // same as above
const uintptr_t SCU_NS_ACCESS_CTRL_REG_PTMRS_CPU3_BPOS      = 7;             // 

                                                                             // Properties: Bit: 6, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_PTMRS_CPU2_MASK      = 0x00000040;    // same as above
const uintptr_t SCU_NS_ACCESS_CTRL_REG_PTMRS_CPU2_BPOS      = 6;             // 

                                                                             // Properties: Bit: 5, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_PTMRS_CPU1_MASK      = 0x00000020;    // same as above
const uintptr_t SCU_NS_ACCESS_CTRL_REG_PTMRS_CPU1_BPOS      = 5;             // 

                                                                             // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_PTMRS_CPU0_MASK      = 0x00000010;    // Non-secure access to the private timer and
const uintptr_t SCU_NS_ACCESS_CTRL_REG_PTMRS_CPU0_BPOS      = 4;             // watchdog for CPU<n>.
                                                                             // * <n> is 3 for bit[7]
                                                                             // * <n> is 2 for bit[6]]
                                                                             // * <n> is 1 for bit[5]
                                                                             // * <n> is 0 for bit[4].
                                                                             // 0 = Secure accesses only. Non-secure reads return
                                                                             // 0. This is the default value.
                                                                             // 1 = Secure accesses and Non-secure accesses.

                                                                             // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_COMPACCESS_CPU3_MASK = 0x00000008;    // same as above
const uintptr_t SCU_NS_ACCESS_CTRL_REG_COMPACCESS_CPU3_BPOS = 3;             // 

                                                                             // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_COMPACCESS_CPU2_MASK = 0x00000004;    // same as above
const uintptr_t SCU_NS_ACCESS_CTRL_REG_COMPACCESS_CPU2_BPOS = 2;             // 

                                                                             // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_COMPACCESS_CPU1_MASK = 0x00000002;    // same as above
const uintptr_t SCU_NS_ACCESS_CTRL_REG_COMPACCESS_CPU1_BPOS = 1;             // 

                                                                             // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t SCU_NS_ACCESS_CTRL_REG_COMPACCESS_CPU0_MASK = 0x00000001;    // Non-secure access to the components for
const uintptr_t SCU_NS_ACCESS_CTRL_REG_COMPACCESS_CPU0_BPOS = 0;             // CPU<n>.
                                                                             // * <n> is 3 for bit[3]
                                                                             // * <n> is 2 for bit[2]]
                                                                             // * <n> is 1 for bit[1]
                                                                             // * <n> is 0 for bit[0].
                                                                             // 0 = CPU cannot write the components
                                                                             // 1 = CPU can access the components.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCICR
//
// Name                    GIC_ICCICR
// Software Name           GIC_CONTROL
// Relative Address        0x00000100
// Absolute Address        0xF8F00100
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CPU Interface Control Register
//
// Register GIC_ICCICR Details
//
// RESERVED                                                   Properties: Bits: 31:5, Type: rw, Reset Value: 0x0

                                                           // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICCICR_SBPR_MASK      = 0x00000010;    // Controls whether the CPU interface uses the
const uintptr_t GIC_ICCICR_SBPR_BPOS      = 4;             // Secure or Non-secure Binary Point Register for
                                                           // preemption.
                                                           // 0: use the Secure Binary Point Register for Secure
                                                           // interrupts, and use the Non-secure Binary Point
                                                           // Register for Non-secure interrupts.
                                                           // 1: use the Secure Binary Point Register for both
                                                           // Secure and Non-secure interrupts.

                                                           // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICCICR_FIQEN_MASK     = 0x00000008;    // Controls whether the GIC signals Secure
const uintptr_t GIC_ICCICR_FIQEN_BPOS     = 3;             // interrupts to a target processor using the FIQ or
                                                           // the IRQ signal.
                                                           // 0: using IRQ, 1: using FIQ.
                                                           // The GIC always signals Non-secure interrupts
                                                           // using IRQ.

                                                           // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICCICR_ACK_CTL_MASK   = 0x00000004;    // Controls whether a Secure read of the ICCIAR,
const uintptr_t GIC_ICCICR_ACK_CTL_BPOS   = 2;             // when the highest priority pending interrupt is
                                                           // Non-secure, causes the CPU interface to
                                                           // acknowledge the interrupt.

                                                           // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICCICR_ENABLE_NS_MASK = 0x00000002;    // An alias of the Enable bit in the Non-secure
const uintptr_t GIC_ICCICR_ENABLE_NS_BPOS = 1;             // ICCICR.
                                                           // This alias bit means Secure software can enable
                                                           // the signal of Non-secure interrupts.

                                                           // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICCICR_ENABLE_S_MASK  = 0x00000001;    // Global enable for the signaling of Secure
const uintptr_t GIC_ICCICR_ENABLE_S_BPOS  = 0;             // interrupts by the CPU interfaces to the connected
                                                           // processors.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCPMR
//
// Name                    GIC_ICCPMR
// Software Name           GIC_CPU_PRIOR
// Relative Address        0x00000104
// Absolute Address        0xF8F00104
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Priority Mask Register
//
// Register GIC_ICCPMR Details
//
// RESERVED                                                  Properties: Bits: 31:8, Type: rw, Reset Value: 0x0

                                                          // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICCPMR_PRIORITY_MASK = 0x000000FF;    // The priority mask level for the CPU interface.
const uintptr_t GIC_ICCPMR_PRIORITY_BPOS = 0;             // If the priority of an interrupt is higher than the
                                                          // value indicated by this field, the interface signals
                                                          // the interrupt to the processor.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCBPR
//
// Name                     GIC_ICCBPR
// Software Name            GIC_BIN_PT
// Relative Address         0x00000108
// Absolute Address         0xF8F00108
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000002
// Description              Binary Point Register
//
// Register GIC_ICCBPR Details
//
// RESERVED                                                      Properties: Bits: 31:3, Type: rw, Reset Value: 0x0

                                                              // Properties: Bits: 2:0, Type: rw, Reset Value: 0x2
const uintptr_t GIC_ICCBPR_BINARY_POINT_MASK = 0x00000007;    // The value of this field controls
const uintptr_t GIC_ICCBPR_BINARY_POINT_BPOS = 0;             // the 8-bit interrupt priority field is split into a
                                                              // group priority field, used to determine interrupt
                                                              // preemption, and a subpriority field.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCIAR
//
// Name                     GIC_ICCIAR
// Software Name            GIC_INT_ACK
// Relative Address         0x0000010C
// Absolute Address         0xF8F0010C
// Width                    32 bits
// Access Type              rw
// Reset Value              0x000003FF
// Description              Interrupt Acknowledge Register
//
// Register GIC_ICCIAR Details
//
// RESERVED                                                  Properties: Bits: 31:13, Type: rw, Reset Value: 0x0

                                                          // Properties: Bits: 12:10, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICCIAR_CPUID_MASK    = 0x00001C00;    // Identifies the processor that requested the
const uintptr_t GIC_ICCIAR_CPUID_BPOS    = 10;            // interrupt.
                                                          // Returns the number of the CPU interface that
                                                          // made the request.

                                                          // Properties: Bits: 9:0, Type: rw, Reset Value: 0x3FF
const uintptr_t GIC_ICCIAR_ACKINTID_MASK = 0x000003FF;    // The interrupt ID.
const uintptr_t GIC_ICCIAR_ACKINTID_BPOS = 0;             // This read acts as an acknowledge for the
                                                          // interrupt.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCEOIR
//
// Name                    GIC_ICCEOIR
// Software Name           GIC_EOI
// Relative Address        0x00000110
// Absolute Address        0xF8F00110
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             End Of Interrupt Register
//
// Register GIC_ICCEOIR Details
//
// RESERVED                                                   Properties: Bits: 31:13, Type: rw, Reset Value: 0x0

                                                           // Properties: Bits: 12:10, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICCEOIR_CPUID_MASK    = 0x00001C00;    // On completion of the processing of an SGI, this
const uintptr_t GIC_ICCEOIR_CPUID_BPOS    = 10;            // field contains the CPUID value from the
                                                           // corresponding ICCIAR access.

                                                           // Properties: Bits: 9:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICCEOIR_EOIINTID_MASK = 0x000003FF;    // The ACKINTID value from the corresponding
const uintptr_t GIC_ICCEOIR_EOIINTID_BPOS = 0;             // ICCIAR access.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCRPR
//
// Name                    GIC_ICCRPR
// Software Name           GIC_RUN_PRIOR
// Relative Address        0x00000114
// Absolute Address        0xF8F00114
// Width                   32 bits
// Access Type              rw
// Reset Value              0x000000FF
// Description              Running Priority Register
//
// Register GIC_ICCRPR Details
//
// RESERVED                                                  Properties: Bits: 31:8, Type: rw, Reset Value: 0x0

                                                          // Properties: Bits: 7:0, Type: rw, Reset Value: 0xFF
const uintptr_t GIC_ICCRPR_PRIORITY_MASK = 0x000000FF;    // The priority value of the highest priority interrupt
const uintptr_t GIC_ICCRPR_PRIORITY_BPOS = 0;             // that is active on the CPU interface.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCHPIR
//
// Name                     GIC_ICCHPIR
// Software Name            GIC_HI_PEND
// Relative Address         0x00000118
// Absolute Address         0xF8F00118
// Width                    32 bits
// Access Type              rw
// Reset Value              0x000003FF
// Description              Highest Pending Interrupt Register
//
// Register GIC_ICCHPIR Details
//
// RESERVED                                                    Properties: Bits: 31:13, Type: rw, Reset Value: 0x0

                                                            // Properties: Bits: 12:10, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICCHPIR_CPUID_MASK     = 0x00001C00;    // If the PENDINTID field returns the ID of an SGI,
const uintptr_t GIC_ICCHPIR_CPUID_BPOS     = 10;            // this field contains the CPUID value for that
                                                            // interrupt.
                                                            // The identifies the processor that generated the
                                                            // interrupt.

                                                            // Properties: Bits: 9:0, Type: rw, Reset Value: 0x3FF
const uintptr_t GIC_ICCHPIR_PENDINTID_MASK = 0x000003FF;    // The interrupt ID of the highest priority pending
const uintptr_t GIC_ICCHPIR_PENDINTID_BPOS = 0;             // interrupt.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCABPR
//
// Name                     GIC_ICCABPR
// Software Name            GIC_ALIAS_BIN_PT
// Relative Address         0x0000011C
// Absolute Address        0xF8F0011C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000003
// Description             Aliased Non-secure Binary Point Register
//
// Register GIC_ICCABPR Details
//
// RESERVED                                                       Properties: Bits: 31:3, Type: rw, Reset Value: 0x0

                                                               // Properties: Bits: 2:0, Type: rw, Reset Value: 0x3
const uintptr_t GIC_ICCABPR_BINARY_POINT_MASK = 0x00000007;    // Provides an alias of the Non-secure ICCBPR.
const uintptr_t GIC_ICCABPR_BINARY_POINT_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCIDR
//
// Name                    GIC_ICCIDR
// Relative Address        0x000001FC
// Absolute Address        0xF8F001FC
// Width                   32 bits
// Access Type             ro
// Reset Value             0x3901243B
// Description             CPU Interface Implementer Identification Register
//
// Register GIC_ICCIDR Details
//
                                                                      // Properties: Bits: 31:20, Type: ro, Reset Value: 0x390
const uintptr_t GIC_ICCIDR_PART_NUMBER_MASK          = 0xFFF00000;    // Identifies the peripheral
const uintptr_t GIC_ICCIDR_PART_NUMBER_BPOS          = 20;            // 

                                                                      // Properties: Bits: 19:16, Type: ro, Reset Value: 0x1
const uintptr_t GIC_ICCIDR_ARCHITECTURE_VERSION_MASK = 0x000F0000;    // Identifies the architecture version
const uintptr_t GIC_ICCIDR_ARCHITECTURE_VERSION_BPOS = 16;            // 

                                                                      // Properties: Bits: 15:12, Type: ro, Reset Value: 0x2
const uintptr_t GIC_ICCIDR_REVISION_NUMBER_MASK      = 0x0000F000;    // Returns the revision number of the Interrupt
const uintptr_t GIC_ICCIDR_REVISION_NUMBER_BPOS      = 12;            // Controller. The implementer defines the
                                                                      // format of this field.

                                                                      // Properties: Bits: 11:0, Type: ro, Reset Value: 0x43B
const uintptr_t GIC_ICCIDR_IMPLEMENTER_MASK          = 0x00000FFF;    // Returns the JEP106 code of the company that
const uintptr_t GIC_ICCIDR_IMPLEMENTER_BPOS          = 0;             // implemented the Cortex-A9 processor
                                                                      // interface RTL. It uses the following construct:
                                                                      // [11:8] the JEP106 continuation code of the
                                                                      // implementer
                                                                      // [7] 0
                                                                      // [6:0] the JEP106 code [6:0] of the implementer


//------------------------------------------------------------------------------
//
// Register (MPCORE) GTMR_CNT
//
// Name                      GTMR_CNT_REG
// Relative Address          0x00000200
// Absolute Address          0xF8F00200
// Width                     32 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               Global Timer Counter Register 0
//         Note: This register is the first in an array of 2 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//         Name                        Address
// Global_Timer_Counter_Register0      0xf8f00200
// Global_Timer_Counter_Register1      0xf8f00204
//
// Register Global_Timer_Counter_Register0 to Global_Timer_Counter_Register1 Details
//
                                                   // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GTMR_CNT_VAL_MASK = 0xFFFFFFFF;    // There are two timer counter registers. They are
const uintptr_t GTMR_CNT_VAL_BPOS = 0;             // the lower 32-bit timer counter at offset
                                                   // 0x00 and the upper 32-bit timer counter at offset
                                                   // 0x04.
                                                   // You must access these registers with 32-bit
                                                   // accesses. You cannot use STRD/LDRD.
                                                   // To modify the register proceed as follows:
                                                   // 1. Clear the timer enable bit in the Global Timer
                                                   // Control Register
                                                   // 2. Write the lower 32-bit timer counter register
                                                   // 3. Write the upper 32-bit timer counter register
                                                   // 4. Set the timer enable bit.
                                                   // To get the value from the Global Timer Counter
                                                   // register proceed as follows:
                                                   // 1. Read the upper 32-bit timer counter register
                                                   // 2. Read the lower 32-bit timer counter register
                                                   // 3. Read the upper 32-bit timer counter register
                                                   // again. If the value is different to the
                                                   // 32-bit upper value read previously, go back to
                                                   // step 2. Otherwise the 64-bit timer
                                                   // counter value is correct.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GTMR_CTRL
//
// Name                    GTMR_CTRL_REG
// Relative Address        0x00000208
// Absolute Address        0xF8F00208
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Global Timer Control Register
//
// Register GTMR_CNT_REG Details
//
// RESERVED                                                     Properties: Bits: 31:16, Type: rw, Reset Value: 0x0

                                                             // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t GTMR_CTRL_PRESCALER_MASK    = 0x0000FF00;    // The prescaler modifies the clock period for the
const uintptr_t GTMR_CTRL_PRESCALER_BPOS    = 8;             // decrementing event for the Counter
                                                             // Register. The timer interval is calculated using the
                                                             // following equation:
                                                             // (PRESCALER_value+1)*(Load_value+1)*(CPU_3
                                                             // x2x PERIOD)

// RESERVED                                                     Properties: Bits: 7:4, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t GTMR_CTRL_VAL_MASK          = 0x00000008;    // This bit is banked per Cortex-A9 processor.
const uintptr_t GTMR_CTRL_VAL_BPOS          = 3;             // 1'b0: single shot mode.
                                                             // When the counter reaches the comparator value,
                                                             // sets the event flag. It is the responsibility
                                                             // of software to update the comparator value to get
                                                             // further events.
                                                             // 1'b1: auto increment mode.
                                                             // Each time the counter reaches the comparator
                                                             // value, the comparator register is
                                                             // incremented with the auto-increment register, so
                                                             // that further events can be set periodically
                                                             // without any software updates.

                                                             // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t GTMR_CTRL_IRQ_ENABLE_MASK   = 0x00000004;    // This bit is banked per Cortex-A9 processor.
const uintptr_t GTMR_CTRL_IRQ_ENABLE_BPOS   = 2;             // If set, the interrupt ID 27 is set as pending in the
                                                             // Interrupt Distributor when the event flag
                                                             // is set in the Timer Status Register.

                                                             // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t GTMR_CTRL_COMP_ENABLEA_MASK = 0x00000002;    // This bit is banked per Cortex-A9 processor.
const uintptr_t GTMR_CTRL_COMP_ENABLEA_BPOS = 1;             // If set, it allows the comparison between the 64-bit
                                                             // Timer Counter and the related 64-bit
                                                             // Comparator Register.

                                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t GTMR_CTRL_TIMER_ENABLE_MASK = 0x00000001;    // Timer enable
const uintptr_t GTMR_CTRL_TIMER_ENABLE_BPOS = 0;             // 'b0 = Timer is disabled and the counter does not
                                                             // ncrement.
                                                             // ll registers can still be read and written
                                                             // 'b1 = Timer is enabled and the counter
                                                             // ncrements normally


//------------------------------------------------------------------------------
//
// Register (MPCORE) GTMR_INT_STS
//
// Name                    GTMR_INT_STS_REG
// Relative Address        0x0000020C
// Absolute Address        0xF8F0020C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Global Timer Interrupt Status Register
//
// Register GTMR_INT_STS_REG Details
//
// RESERVED                                                      Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                              // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t GTMR_INT_STS_EVENT_FLAG_MASK = 0x00000001;    // This is a banked register for all Cortex-A9
const uintptr_t GTMR_INT_STS_EVENT_FLAG_BPOS = 0;             // processors present.
                                                              // The event flag is a sticky bit that is automatically
                                                              // set when the Counter Register reaches
                                                              // the Comparator Register value. If the timer
                                                              // interrupt is enabled, Interrupt ID 27 is set as
                                                              // pending in the Interrupt Distributor after the
                                                              // event flag is set. The event flag is cleared
                                                              // when written to 1. Figure 4-7 shows the Global
                                                              // Timer Interrupt Status Register bit
                                                              // assignment.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GTMR
//
// Name                    GTMR_CMPVAL_REG
// Relative Address        0x00000210
// Absolute Address        0xF8F00210
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Comparator Value Register_0
//         Note: This register is the first in an array of 2 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//         Name                        Address
// Comparator_Value_Register0       0xf8f00210
// Comparator_Value_Register1       0xf8f00214
//
// Register Comparator_Value_Register0 to Comparator_Value_Register1 Details
//
                                                  // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GTMR_CMPVAL_MASK = 0xFFFFFFFF;    // There are two 32-bit registers, the lower 32-bit
const uintptr_t GTMR_CMPVAL_BPOS = 0;             // comparator value register at offset 0x10
                                                  // and the upper 32-bit comparator value register at
                                                  // offset 0x14.
                                                  // You must access these registers with 32-bit
                                                  // accesses. You cannot use STRD/LDRD. There
                                                  // is a Comparator Value Register for each
                                                  // Cortex-A9 processor.
                                                  // To ensure that updates to this register do not set
                                                  // the Interrupt Status Register proceed as
                                                  // follows:
                                                  // 1. Clear the Comp Enable bit in the Timer Control
                                                  // Register.
                                                  // 2. Write the lower 32-bit Comparator Value
                                                  // Register.
                                                  // 3. Write the upper 32-bit Comparator Value
                                                  // Register.
                                                  // 4. Set the Comp Enable bit and, if necessary, the
                                                  // IRQ enable bit.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GTMR_INC
//
// Name                    GTMR_INC_REG
// Relative Address        0x00000218
// Absolute Address        0xF8F00218
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Auto-increment Register
//
// Register GTMR_CMPVAL_REG Details
//
                                                   // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GTMR_INC_VAL_MASK = 0xFFFFFFFF;    // Auto-increment Register
const uintptr_t GTMR_INC_VAL_BPOS = 0;             // This 32-bit register gives the increment value of
                                                   // the Comparator Register when the
                                                   // Auto-increment bit is set in the Timer Control
                                                   // Register. Each Cortex-A9 processor
                                                   // present has its own Auto-increment Register
                                                   // If the comp enable and auto-increment bits are set
                                                   // when the global counter reaches the
                                                   // Comparator Register value, the comparator is
                                                   // incremented by the auto-increment value,
                                                   // so that a new event can be set periodically.
                                                   // The global timer is not affected and goes on
                                                   // incrementing


//------------------------------------------------------------------------------
//
// Register (MPCORE) PTMR_LOAD
//
// Name                    PTMR_LOAD_REG_REG
// Software Name           TIMER_LOAD
// Relative Address        0x00000600
// Absolute Address        0xF8F00600
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Private Timer Load Register
//
// Register PTMR_LOAD_REG_REG Details
//
                                                    // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTMR_LOAD_VAL_MASK = 0xFFFFFFFF;    // The Timer Load Register contains the value
const uintptr_t PTMR_LOAD_VAL_BPOS = 0;             // copied to the Timer Counter Register when
                                                    // it decrements down to zero with auto reload
                                                    // mode enabled. Writing to the Timer Load
                                                    // Register means that you also write to the Timer
                                                    // Counter Register.


//------------------------------------------------------------------------------
//
// Register (MPCORE) PTMR_CNT
//
// Name                    PTMR_CNT_REG
// Software Name           TIMER_COUNTER
// Relative Address        0x00000604
// Absolute Address        0xF8F00604
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Private Timer Counter Register
//
// Register PTMR_CNT_REG Details
//
                                                   // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTMR_CNT_VAL_MASK = 0xFFFFFFFF;    // The Timer Counter Register is a decrementing
const uintptr_t PTMR_CNT_VAL_BPOS = 0;             // counter.
                                                   // The Timer Counter Register decrements if the
                                                   // timer is enabled using the timer enable
                                                   // bit in the Timer Control Register. If a Cortex-A9
                                                   // processor timer is in debug state, the
                                                   // counter only decrements when the Cortex-A9
                                                   // processor returns to non debug state.
                                                   // When the Timer Counter Register reaches zero
                                                   // and auto reload mode is enabled, it
                                                   // reloads the value in the Timer Load Register and
                                                   // then decrements from that value. If
                                                   // auto reload mode is not enabled, the Timer
                                                   // Counter Register decrements down to zero
                                                   // and stops.
                                                   // When the Timer Counter Register reaches zero,
                                                   // the timer interrupt status event flag is
                                                   // set and the interrupt ID 29 is set as pending in the
                                                   // Interrupt Distributor, if interrupt
                                                   // generation is enabled in the Timer Control
                                                   // Register.
                                                   // Writing to the Timer Counter Register or Timer
                                                   // Load Register forces the Timer Counter
                                                   // Register to decrement from the newly written
                                                   // value.


//------------------------------------------------------------------------------
//
// Register (MPCORE) PTMR_CTLR
//
// Name                    PTMR_CTLR_REG
// Software Name           TIMER_CONTROL
// Relative Address        0x00000608
// Absolute Address        0xF8F00608
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Private Timer Control Register
//
// Register PTMR_CTLR_REG Details
//
// RESERVED                                                     Properties: Bits: 31:16, Type: rw, Reset Value: 0x0

                                                             // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t PTMR_CTLR_PRESCALER_MASK    = 0x0000FF00;    // The prescaler modifies the clock period for the
const uintptr_t PTMR_CTLR_PRESCALER_BPOS    = 8;             // decrementing event for the Counter
                                                             // Register. See Calculating timer intervals on page
                                                             // 4-2 for the equation.

                                                             // Properties: Bits: 7:3, Type: rw, Reset Value: 0x0
const uintptr_t PTMR_CTLR_UNK_SBZP_MASK     = 0x000000F8;    // UNK/SBZP.
const uintptr_t PTMR_CTLR_UNK_SBZP_BPOS     = 3;             // 

                                                             // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t PTMR_CTLR_IRQ_ENABLE_MASK   = 0x00000004;    // If set, the interrupt ID 29 is set as pending in the
const uintptr_t PTMR_CTLR_IRQ_ENABLE_BPOS   = 2;             // Interrupt Distributor when the event flag
                                                             // is set in the Timer Status Register.

                                                             // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t PTMR_CTLR_AUTO_RELOAD_MASK  = 0x00000002;    // 1'b0 = Single shot mode.
const uintptr_t PTMR_CTLR_AUTO_RELOAD_BPOS  = 1;             // Counter decrements down to zero, sets the event
                                                             // flag and stops.
                                                             // 1'b1 = Auto-reload mode.
                                                             // Each time the Counter Register reaches zero, it is
                                                             // reloaded with the value contained in the
                                                             // Timer Load Register.

                                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t PTMR_CTLR_TIMER_ENABLE_MASK = 0x00000001;    // Timer enable
const uintptr_t PTMR_CTLR_TIMER_ENABLE_BPOS = 0;             // 1'b0 = Timer is disabled and the counter does not
                                                             // decrement.
                                                             // All registers can still be read and written
                                                             // 1'b1 = Timer is enabled and the counter
                                                             // decrements normally


//------------------------------------------------------------------------------
//
// Register (MPCORE) PTMR_INT_STS
//
// Name                     PTMR_INT_STS_REG
// Software Name            TIMER_ISR
// Relative Address         0x0000060C
// Absolute Address         0xF8F0060C
// Width                    32 bits
// Access Type              rw
// Reset Value             0x00000000
// Description             Private Timer Interrupt Status Register
//
// Register PTMR_INT_STS_REG Details
//
// RESERVED                                               Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                       // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t PTMR_INT_STS_VAL_MASK = 0x00000001;    // This is a banked register for all Cortex-A9
const uintptr_t PTMR_INT_STS_VAL_BPOS = 0;             // processors present.
                                                       // The event flag is a sticky bit that is automatically
                                                       // set when the Counter Register reaches
                                                       // zero. If the timer interrupt is enabled, Interrupt ID
                                                       // 29 is set as pending in the Interrupt
                                                       // Distributor after the event flag is set. The event
                                                       // flag is cleared when written to 1.


//------------------------------------------------------------------------------
//
// Register (MPCORE) WDTMR_LOAD
//
// Name                    WDTMR_LOAD_REG
// Software Name           WDT_LOAD
// Relative Address        0x00000620
// Absolute Address        0xF8F00620
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Watchdog Load Register
//
// Register WDTMR_LOAD_REG Details
//
                                                     // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t WDTMR_LOAD_VAL_MASK = 0xFFFFFFFF;    // Watchdog Load Register
const uintptr_t WDTMR_LOAD_VAL_BPOS = 0;             // The Watchdog Load Register contains the value
                                                     // copied to the Watchdog Counter
                                                     // Register when it decrements down to zero with
                                                     // auto reload mode enabled, in Timer
                                                     // mode. Writing to the Watchdog Load Register
                                                     // means that you also write to the
                                                     // Watchdog Counter Register


//------------------------------------------------------------------------------
//
// Register (MPCORE) WDTMR_CNT
//
// Name                    WDTMR_CNT_REG
// Software Name           WDT_COUNTER
// Relative Address        0x00000624
// Absolute Address        0xF8F00624
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Watchdog Counter Register
//
// Register WDTMR_CNT_REG Details
//
                                                    // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t WDTMR_CNT_VAL_MASK = 0xFFFFFFFF;    // Watchdog Counter Register
const uintptr_t WDTMR_CNT_VAL_BPOS = 0;             // The Watchdog Counter Register is a down
                                                    // counter.
                                                    // It decrements if the Watchdog is enabled using the
                                                    // Watchdog enable bit in the Watchdog
                                                    // Control Register. If the Cortex-A9 processor
                                                    // associated with the Watchdog is in debug
                                                    // state, the counter does not decrement until the
                                                    // Cortex-A9 processor returns to non
                                                    // debug state.
                                                    // When the Watchdog Counter Register reaches
                                                    // zero and auto reload mode is enabled,
                                                    // and in timer mode, it reloads the value in the
                                                    // Watchdog Load Register and then
                                                    // decrements from that value. If auto reload mode
                                                    // is not enabled or the watchdog is not
                                                    // in timer mode, the Watchdog Counter Register
                                                    // decrements down to zero and stops.
                                                    // When in watchdog mode the only way to update
                                                    // the Watchdog Counter Register is to
                                                    // write to the Watchdog Load Register. When in
                                                    // timer mode the Watchdog Counter
                                                    // Register is write accessible.
                                                    // The behavior of the watchdog when the
                                                    // Watchdog Counter Register reaches zero
                                                    // depends on its current mode:
                                                    // Timer mode When the Watchdog Counter
                                                    // Register reaches zero, the watchdog
                                                    // interrupt status event flag is set and the interrupt
                                                    // ID 30 is set as pending
                                                    // in the Interrupt Distributor, if interrupt
                                                    // generation is enabled in the
                                                    // Watchdog Control Register.
                                                    // Watchdog mode
                                                    // If a software failure prevents the Watchdog
                                                    // Counter Register from being
                                                    // refreshed, the Watchdog Counter Register reaches
                                                    // zero, the Watchdog
                                                    // reset status flag is set and the associated
                                                    // WDRESETREQ reset request
                                                    // output pin is asserted. The external reset source is
                                                    // then responsible for
                                                    // resetting all or part of the Cortex-A9 MPCore
                                                    // design.


//------------------------------------------------------------------------------
//
// Register (MPCORE) WDTMR_CTRL
//
// Name                    WDTMR_CTRL_REG
// Software Name           WDT_CONTROL
// Relative Address        0x00000628
// Absolute Address        0xF8F00628
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Watchdog Control Register
//
// Register WDTMR_CTRL_REG Details
//
// RESERVED                                                         Properties: Bits: 31:16, Type: rw, Reset Value: 0x0

                                                                 // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t WDTMR_CTRL_PRESCALER_MASK       = 0x0000FF00;    // The prescaler modifies the clock period for the
const uintptr_t WDTMR_CTRL_PRESCALER_BPOS       = 8;             // decrementing event for the Counter
                                                                 // Register.

                                                                 // Properties: Bits: 7:4, Type: rw, Reset Value: 0x0
const uintptr_t WDTMR_CTRL_VAL_MASK             = 0x000000F0;    // Reserved.
const uintptr_t WDTMR_CTRL_VAL_BPOS             = 4;             // 

                                                                 // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t WDTMR_CTRL_WATCHDOG_MODE_MASK   = 0x00000008;    // 1'b0 = Timer mode, default
const uintptr_t WDTMR_CTRL_WATCHDOG_MODE_BPOS   = 3;             // Writing a zero to this bit has no effect. You must
                                                                 // use the Watchdog Disable Register to
                                                                 // put the watchdog into timer mode. See Watchdog
                                                                 // Disable Register on page 4-9.
                                                                 // 1'b1 = Watchdog mode.

                                                                 // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t WDTMR_CTRL_IT_ENABLE_MASK       = 0x00000004;    // If set, the interrupt ID 30 is set as pending in the
const uintptr_t WDTMR_CTRL_IT_ENABLE_BPOS       = 2;             // Interrupt Distributor when the event flag
                                                                 // is set in the watchdog Status Register.
                                                                 // In watchdog mode this bit is ignored

                                                                 // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t WDTMR_CTRL_AUTO_RELOAD_MASK     = 0x00000002;    // 1'b0 = Single shot mode.
const uintptr_t WDTMR_CTRL_AUTO_RELOAD_BPOS     = 1;             // Counter decrements down to zero, sets the event
                                                                 // flag and stops.
                                                                 // 1'b1 = Auto-reload mode.
                                                                 // Each time the Counter Register reaches zero, it is
                                                                 // reloaded with the value contained in the
                                                                 // Load Register and then continues decrementing.

                                                                 // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t WDTMR_CTRL_WATCHDOG_ENABLE_MASK = 0x00000001;    // Global watchdog enable
const uintptr_t WDTMR_CTRL_WATCHDOG_ENABLE_BPOS = 0;             // 1'b0 = Watchdog is disabled and the counter does
                                                                 // not decrement. All registers can still be
                                                                 // read and /or written
                                                                 // 1'b1 = Watchdog is enabled and the counter
                                                                 // decrements normally.


//------------------------------------------------------------------------------
//
// Register (MPCORE) WDTMR_INT_STS
//
// Name                    WDTMR_INT_STS_REG
// Software Name           WDT_ISR
// Relative Address        0x0000062C
// Absolute Address        0xF8F0062C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Watchdog Interrupt Status Register
//
// Register WDTMR_INT_STS_REG Details
//
// RESERVED                                                       Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                               // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t WDTMR_INT_STS_EVENT_FLAG_MASK = 0x00000001;    // The event flag is a sticky bit that is automatically
const uintptr_t WDTMR_INT_STS_EVENT_FLAG_BPOS = 0;             // set when the Counter Register reaches
                                                               // zero in timer mode. If the watchdog interrupt is
                                                               // enabled, Interrupt ID 30 is set as
                                                               // pending in the Interrupt Distributor after the
                                                               // event flag is set. The event flag is cleared
                                                               // when written with a value of 1. Trying to write a
                                                               // zero to the event flag or a one when it
                                                               // is not set has no effect.


//------------------------------------------------------------------------------
//
// Register (MPCORE) WDTMR_RST_STS
//
// Name                    WDTMR_RST_STS_REG
// Software Name           WDT_RST_STS
// Relative Address        0x00000630
// Absolute Address        0xF8F00630
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Watchdog Reset Status Register
//
// Register WDTMR_RST_STS_REG Details
//
// RESERVED                                                       Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                               // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t WDTMR_RST_STS_RESET_FLAG_MASK = 0x00000001;    // The reset flag is a sticky bit that is automatically
const uintptr_t WDTMR_RST_STS_RESET_FLAG_BPOS = 0;             // set when the Counter Register reaches
                                                               // zero and a reset request is sent accordingly. (In
                                                               // watchdog mode)
                                                               // The reset flag is cleared when written with a value
                                                               // of 1. Trying to write a zero to the
                                                               // reset flag or a one when it is not set has no effect.
                                                               // This flag is not reset by normal
                                                               // Cortex-A9 processor resets but has its own reset
                                                               // line, nWDRESET. nWDRESET must
                                                               // not be asserted when the Cortex-A9 processor
                                                               // reset assertion is the result of a watchdog
                                                               // reset request with WDRESETREQ. This
                                                               // distinction enables software to differentiate
                                                               // between a normal boot sequence, reset flag is
                                                               // zero, and one caused by a previous
                                                               // watchdog time-out, reset flag set to one.


//------------------------------------------------------------------------------
//
// Register (MPCORE) WDTMR_DISABLE
//
// Name                    WDTMR_DISABLE_REG
// Software Name           WDT_DISABLE
// Relative Address        0x00000634
// Absolute Address        0xF8F00634
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Watchdog Disable Register
//
// Register WDTMR_DISABLE_REG Details
//
                                                        // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t WDTMR_DISABLE_VAL_MASK = 0xFFFFFFFF;    // Watchdog Disable Register
const uintptr_t WDTMR_DISABLE_VAL_BPOS = 0;             // Use the Watchdog Disable Register to switch from
                                                        // watchdog to timer mode. The
                                                        // software must write 0x12345678 then 0x87654321
                                                        // successively to the Watchdog Disable
                                                        // Register so that the watchdog mode bit in the
                                                        // Watchdog Control Register is set to zero.
                                                        // If one of the values written to the Watchdog
                                                        // Disable Register is incorrect or if any other
                                                        // write occurs in between the two word writes, the
                                                        // watchdog remains in its current state.
                                                        // To reactivate the Watchdog, the software must
                                                        // write 1 to the watchdog mode bit of the
                                                        // Watchdog Control Register.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDDCR
//
// Name                    GIC_ICDDCR
// Software Name           GIC_DIST_EN
// Relative Address        0x00001000
// Absolute Address        0xF8F01000
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Distributor Control Register
//
// Register GIC_ICDDCR Details
//
// RESERVED                                                           Properties: Bits: 31:2, Type: rw, Reset Value: 0x0

                                                                   // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDDCR_ENABLE_NON_SECURE_MASK = 0x00000002;    // 0 = disables all Non-secure interrupts control bits
const uintptr_t GIC_ICDDCR_ENABLE_NON_SECURE_BPOS = 1;             // in the distributor from changing state
                                                                   // because of any external stimulus change that
                                                                   // occurs on the corresponding SPI or PPI
                                                                   // signals
                                                                   // 1 = enables the distributor to update register
                                                                   // locations for Non-secure interrupts
                                                                   // FOR: ICDDCR_for_Non_secure_mode
                                                                   // 31,1 --> Reserved. Writes are ignored, read data is
                                                                   // always zero.

                                                                   // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDDCR_ENABLE_SECURE_MASK     = 0x00000001;    // 0 = disables all Secure interrupt control bits in the
const uintptr_t GIC_ICDDCR_ENABLE_SECURE_BPOS     = 0;             // distributor from changing state
                                                                   // because of any external stimulus change that
                                                                   // occurs on the corresponding SPI or PPI
                                                                   // signals.
                                                                   // 1 = enables the distributor to update register
                                                                   // locations for Secure interrupts.
                                                                   // FOR: ICDDCR_for_Non_secure_mode
                                                                   // 0 --> Enable_Non_secure --> 0 = disables all
                                                                   // Non-secure interrupts control bits in the
                                                                   // distributor from changing state because of any
                                                                   // external
                                                                   // stimulus change that occurs on the corresponding
                                                                   // SPI or
                                                                   // PPI signals
                                                                   // 1 = enables the distributor to update register
                                                                   // locations for
                                                                   // Non-secure interrupts


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDICTR
//
// Name                    GIC_ICDICTR
// Software Name           GIC_IC_TYPE
// Relative Address        0x00001004
// Absolute Address        0xF8F01004
// Width                   32 bits
// Access Type             ro
// Reset Value             0x0000FC22
// Description             Interrupt Controller Type Register
//
// Register GIC_ICDICTR Details
//
// RESERVED                                                          Properties: Bits: 31:29, Type: ro, Reset Value: 0x0

                                                                  // Properties: Bits: 15:11, Type: ro, Reset Value: 0x1F
const uintptr_t GIC_ICDICTR_LSPI_MASK            = 0x0000F800;    // Returns the number of Lockable Shared
const uintptr_t GIC_ICDICTR_LSPI_BPOS            = 11;            // Peripheral Interrupts (LSPIs) that the controller
                                                                  // contains. The encoding is:
                                                                  // b11111 = 31 LSPIs, which are the interrupts of IDs
                                                                  // 32-62.
                                                                  // When CFGSDISABLE is HIGH then the interrupt
                                                                  // controller prevents writes to any
                                                                  // register locations that control the operating state
                                                                  // of an LSPI.

                                                                  // Properties: Bit: 10, Type: ro, Reset Value: 0x1
const uintptr_t GIC_ICDICTR_SECURITY_EXTN_MASK   = 0x00000400;    // Returns the number of security domains that the
const uintptr_t GIC_ICDICTR_SECURITY_EXTN_BPOS   = 10;            // controller contains:
                                                                  // 1 = the controller contains two security domains.
                                                                  // This bit always returns the value one.

                                                                  // Properties: Bits: 9:8, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICTR_SBZ_MASK             = 0x00000300;    // Reserved
const uintptr_t GIC_ICDICTR_SBZ_BPOS             = 8;             // 

                                                                  // Properties: Bits: 7:5, Type: ro, Reset Value: 0x1
const uintptr_t GIC_ICDICTR_CPU_NUMBER_MASK      = 0x000000E0;    // The encoding is:
const uintptr_t GIC_ICDICTR_CPU_NUMBER_BPOS      = 5;             // b000 the Cortex-A9 MPCore configuration
                                                                  // contains one Cortex-A9 processor.
                                                                  // b001 the Cortex-A9 MPCore configuration
                                                                  // contains two Cortex-A9 processors.
                                                                  // b010 the Cortex-A9 MPCore configuration
                                                                  // contains three Cortex-A9 processors.
                                                                  // b011 the Cortex-A9 MPCore configuration
                                                                  // contains four Cortex-A9 processors.
                                                                  // b1xx: Unused values.

                                                                  // Properties: Bits: 4:0, Type: ro, Reset Value: 0x2
const uintptr_t GIC_ICDICTR_IT_LINES_NUMBER_MASK = 0x0000001F;    // The encoding is:
const uintptr_t GIC_ICDICTR_IT_LINES_NUMBER_BPOS = 0;             // b00000 = the distributor provides 32 interrupts, no
                                                                  // external interrupt lines.
                                                                  // b00001 = the distributor provides 64 interrupts, 32
                                                                  // external interrupt lines.
                                                                  // b00010 = the distributor provides 96 interrupts, 64
                                                                  // external interrupt lines.
                                                                  // b00011 = the distributor provide 128 interrupts, 96
                                                                  // external interrupt lines.
                                                                  // b00100 = the distributor provides 160 interrupts,
                                                                  // 128 external interrupt lines.
                                                                  // b00101 = the distributor provides 192 interrupts,
                                                                  // 160 external interrupt lines.
                                                                  // b00110 = the distributor provides 224 interrupts,
                                                                  // 192 external interrupt lines.
                                                                  // b00111 = the distributor provides 256 interrupts,
                                                                  // 224 external interrupt lines.
                                                                  // All other values not used.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIIDR
//
// Name                      GIC_ICDIIDR
// Software Name             GIC_DIST_IDENT
// Relative Address          0x00001008
// Absolute Address          0xF8F01008
// Width                     32 bits
// Access Type               ro
// Reset Value               0x0102043B
// Description               Distributor Implementer Identification Register
//
// Register GIC_ICDIIDR Details
//
                                                                         // Properties: Bits: 31:24, Type: ro, Reset Value: 0x1
const uintptr_t GIC_ICDIIDR_IMPLEMENTATION_VERSION_MASK = 0xFF000000;    // Gives implementation version number
const uintptr_t GIC_ICDIIDR_IMPLEMENTATION_VERSION_BPOS = 24;            // 

                                                                         // Properties: Bits: 23:12, Type: ro, Reset Value: 0x20
const uintptr_t GIC_ICDIIDR_REVISION_NUMBER_MASK        = 0x00FFF000;    // Return the revision number of the controller
const uintptr_t GIC_ICDIIDR_REVISION_NUMBER_BPOS        = 12;            // 

                                                                         // Properties: Bits: 11:0, Type: ro, Reset Value: 0x43B
const uintptr_t GIC_ICDIIDR_IMPLEMENTER_MASK            = 0x00000FFF;    // Implementer Number
const uintptr_t GIC_ICDIIDR_IMPLEMENTER_BPOS            = 0;             // 


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDISR
//
// Name                      GIC_ICDISR
// Software Name             GIC_SECURITY0
// Relative Address          0x00001080
// Absolute Address          0xF8F01080
// Width                     32 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               Interrupt Security Register_0
//         Note: This register is the first in an array of 3 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//   Name                      Address
// ICDISR0                   0xf8f01080
// ICDISR1                   0xf8f01084
// ICDISR2                   0xf8f01088
//
// Register ICDISR0 to ICDISR2 Details
//
                                                                 // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDISR_SECURITY_STATUS_MASK = 0xFFFFFFFF;    // The ICDISRn provide a Security status bit for each
const uintptr_t GIC_ICDISR_SECURITY_STATUS_BPOS = 0;             // interrupt supported by the GIC.
                                                                 // Each bit controls the security status of the
                                                                 // corresponding interrupt.
                                                                 // Accessible by Secure accesses only.
                                                                 // The register addresses are RAZ/WI to
                                                                 // Non-secure accesses.
                                                                 // ICDISR0 is banked for each connected processor.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDISER
//
// Name                    GIC_ICDISER
// Software Name           GIC_ENABLE_SET
// Relative Address        0x00001100
// Absolute Address        0xF8F01100
// Width                   32 bits
// Access Type             rw
// Reset Value             0x0000FFFF
// Description             Interrupt Set-enable Register 0
//         Note: This register is the first in an array of 3 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//   Name                      Address
// ICDISER0                  0xF8F01100
// ICDISER1                  0xF8F01104
// ICDISER2                  0xF8F01108
//
// Register GIC_ICDISR Details
//
                                                      // Properties: Bits: 31:0, Type: rw, Reset Value: 0xFFFF
const uintptr_t GIC_ICDISER_SET_MASK = 0xFFFFFFFF;    // The ICDISERs provide a Set-enable bit for each
const uintptr_t GIC_ICDISER_SET_BPOS = 0;             // interrupt supported by the GIC.
                                                      // Writing 1 to a Set-enable bit enables forwarding of
                                                      // the corresponding interrupt to the CPU interfaces.
                                                      // A register bit that corresponds to a Secure
                                                      // interrupt is RAZ/WI to Non-secure access.
                                                      // ICDISER0 is banked for each connected processor.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDICER
//
// Name                    GIC_ICDICER
// Software Name           GIC_DISABLE
// Relative Address        0x00001180
// Absolute Address        0xF8F01180
// Width                   32 bits
// Access Type             rw
// Reset Value             0x0000FFFF
// Description             Interrupt Clear-Enable Register 0
//         Note: This register is the first in an array of 3 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//   Name                      Address
// ICDICER0                  0xF8F01180
// ICDICER1                  0xF8F01184
// ICDICER2                  0xF8F01188
//
// Register GIC_ICDICER Details
//
                                                        // Properties: Bits: 31:0, Type: rw, Reset Value: 0xFFFF
const uintptr_t GIC_ICDICER_CLEAR_MASK = 0xFFFFFFFF;    // The ICDICERs provide a Clear-enable bit for each
const uintptr_t GIC_ICDICER_CLEAR_BPOS = 0;             // interrupt supported by the GIC.
                                                        // Writing 1 to a Clear-enable bit disables
                                                        // forwarding of the corresponding interrupt to the
                                                        // CPU interfaces.
                                                        // A register bit that corresponds to a Secure
                                                        // interrupt is RAZ/WI to Non-secure accesses.
                                                        // ICDICER0 is banked for each connected
                                                        // processor.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDISPR
//
// Name                       GIC_ICDISPR
// Software Name              GIC_PENDING_SET0
// Relative Address           0x00001200
// Absolute Address           0xF8F01200
// Width                      32 bits
// Access Type                rw
// Reset Value                0x00000000
// Description                Interrupt Set-pending Register_0
//          Note: This register is the first in an array of 3 identical registers listed in the table below. The details
//          provided in this section apply to the entire array.
//           Name                       Address
// ICDISPR0                   0xf8f01200
// ICDISPR1                   0xf8f01204
// ICDISPR2                   0xf8f01208
//
// Register ICDISPR0 to ICDISPR2 Details
//
                                                      // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDISPR_SET_MASK = 0xFFFFFFFF;    // The ICDISPRs provide a Set-pending bit for each
const uintptr_t GIC_ICDISPR_SET_BPOS = 0;             // interrupt supported by the GIC.
                                                      // Writing 1 to a Set-pending bit sets the status of the
                                                      // corresponding peripheral interrupt to pending.
                                                      // A register bit that corresponds to a Secure
                                                      // interrupt is RAZ/WI to Non-secure accesses.
                                                      // ICDISPR0 is banked for each connected processor.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDICPR
//
// Name                       GIC_ICDICPR
// Software Name              GIC_PENDING_CLR0
// Relative Address           0x00001280
// Absolute Address           0xF8F01280
// Width                      32 bits
// Access Type                rw
// Reset Value                0x00000000
// Description                Interrupt Clear-Pending Register_0
//          Note: This register is the first in an array of 3 identical registers listed in the table below. The details
//          provided in this section apply to the entire array.
//   Name                       Address
// ICDICPR0                   0xf8f01280
// ICDICPR1                   0xf8f01284
// ICDICPR2                   0xf8f01288
//
// Register ICDICPR0 to ICDICPR2 Details
//
                                                        // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICPR_CLEAR_MASK = 0xFFFFFFFF;    // The ICDICPRs provide a Clear-pending bit for
const uintptr_t GIC_ICDICPR_CLEAR_BPOS = 0;             // each interrupt supported by the GIC.
                                                        // Writing 1 to a Clear-pending bit clears the status
                                                        // of the corresponding peripheral interrupt to
                                                        // pending.
                                                        // A register bit that corresponds to a Secure
                                                        // interrupt is RAZ/WI to Non-secure accesses.
                                                        // ICDICPR0 is banked for each connected
                                                        // processor.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDABR
//
// Name                       GIC_ICDABR
// Software Name              GIC_ACTIVE0
// Relative Address           0x00001300
// Absolute Address           0xF8F01300
// Width                      32 bits
// Access Type                rw
// Reset Value                0x00000000
// Description                Active Bit register_0
//          Note: This register is the first in an array of 3 identical registers listed in the table below. The details
//          provided in this section apply to the entire array.
//          Name                        Address
// ICDABR0                    0xf8f01300
// ICDABR1                    0xf8f01304
// ICDABR2                    0xf8f01308
//
// Register ICDABR0 to ICDABR2 Details
//
                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ACTIVE_MASK = 0xFFFFFFFF;    // The ICDABRs provide an Active bit for each
const uintptr_t ACTIVE_BPOS = 0;             // interrupt supported by the GIC.
                                             // The bit reads as one if the status of the interrupt is
                                             // active or active and pending.
                                             // Read the ICDSPR or ICDCPR to find the pending
                                             // status of the interrupt.
                                             // ICDABR0 is banked for each connected processor.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPR
//
// Name                       GIC_ICDIPR
// Software Name              GIC_PRIORITY0
// Relative Address           0x00001400
// Absolute Address           0xF8F01400
// Width                      32 bits
// Access Type                rw
// Reset Value                0x00000000
// Description                Interrupt Priority Register
//         Note: This register is the first in an array of 24 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//    Name                     Address
// ICDIPR0                   0xf8f01400
// ICDIPR1                   0xf8f01404
// ICDIPR2                   0xf8f01408
// ICDIPR3                   0xf8f0140c
// ICDIPR4                   0xf8f01410
// ICDIPR5                   0xf8f01414
// ICDIPR6                   0xf8f01418
// ICDIPR7                   0xf8f0141c
// ICDIPR8                   0xf8f01420
// ICDIPR9                   0xf8f01424
// ICDIPR10                  0xf8f01428
// ICDIPR11                  0xf8f0142c
// ICDIPR12                  0xf8f01430
// ICDIPR13                  0xf8f01434
// ICDIPR14                  0xf8f01438
// ICDIPR15                  0xf8f0143c
// ICDIPR16                  0xf8f01440
// ICDIPR17                  0xf8f01444
// ICDIPR18                  0xf8f01448
// ICDIPR19                  0xf8f0144c
// ICDIPR20                  0xf8f01450
// ICDIPR21                  0xf8f01454
// ICDIPR22                  0xf8f01458
// ICDIPR23                  0xf8f0145c
//
// Register ICDIPR0 to ICDIPR23 Details
//
                                                          // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPR_PRIORITY_MASK = 0xFFFFFFFF;    // The ICDIPRs provide an 8-bit Priority field for
const uintptr_t GIC_ICDIPR_PRIORITY_BPOS = 0;             // each interrupt supported by the GIC; however,
                                                          // Zynq implemented only the upper 7 bits of each
                                                          // 8-bit field, i.e. supporing 128 levels, all even
                                                          // values. These registers are byte accessible.
                                                          // A register field that corresponds to a Secure
                                                          // interrupt is RAZ/WI to Non-secure accesses.
                                                          // ICDIPR0 to ICDIPR7 are banked for each
                                                          // connected processor


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR0
//
// Name                        GIC_ICDIPTR0
// Software Name               GIC_SPI_TARGET
// Relative Address            0x00001800
// Absolute Address            0xF8F01800
// Width                       32 bits
// Access Type                 ro
// Reset Value                 0x00000000
// Description                 Interrupt Processor Targets Register 0
//
// Register GIC_ICDISPR0 Details
//            The ICDIPTR0 register is used to indicate the targets of interrupts ID#0-ID#3.
//
                                                            // Properties: Bits: 25:24, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR0_TARGET_3_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#3
const uintptr_t GIC_ICDIPTR0_TARGET_3_BPOS = 24;            // 01: CPU 0 targeted (CPU 0 always reads this
                                                            // value)
                                                            // 10: CPU 1 targeted (CPU 1 always reads this
                                                            // value)

                                                            // Properties: Bits: 17:16, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR0_TARGET_2_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#2
const uintptr_t GIC_ICDIPTR0_TARGET_2_BPOS = 16;            // 01: CPU 0 targeted (CPU 0 always reads this
                                                            // value)
                                                            // 10: CPU 1 targeted (CPU 1 always reads this
                                                            // value)

                                                            // Properties: Bits: 9:8, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR0_TARGET_1_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#1
const uintptr_t GIC_ICDIPTR0_TARGET_1_BPOS = 8;             // 01: CPU 0 targeted (CPU 0 always reads this
                                                            // value)
                                                            // 10: CPU 1 targeted (CPU 1 always reads this
                                                            // value)

                                                            // Properties: Bits: 1:0, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR0_TARGET_0_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#0
const uintptr_t GIC_ICDIPTR0_TARGET_0_BPOS = 0;             // 01: CPU 0 targeted (CPU 0 always reads this
                                                            // value)
                                                            // 10: CPU 1 targeted (CPU 1 always reads this
                                                            // value)


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR1
//
// Name                     GIC_ICDIPTR1
// Software Name            GIC_SPI_TARGET
// Relative Address         0x00001804
// Absolute Address         0xF8F01804
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Interrupt Processor Targets Register 1
//
// Register GIC_ICDIPTR1 Details
//         The ICDIPTR1 register is used to indicate the targets of interrupts ID#4-ID#7.
//
                                                            // Properties: Bits: 25:24, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR1_TARGET_7_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#7
const uintptr_t GIC_ICDIPTR1_TARGET_7_BPOS = 24;            // 01: CPU 0 targeted (CPU 0 always reads this
                                                            // value)
                                                            // 10: CPU 1 targeted (CPU 1 always reads this
                                                            // value)

                                                            // Properties: Bits: 17:16, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR1_TARGET_6_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#6
const uintptr_t GIC_ICDIPTR1_TARGET_6_BPOS = 16;            // 01: CPU 0 targeted (CPU 0 always reads this
                                                            // value)
                                                            // 10: CPU 1 targeted (CPU 1 always reads this
                                                            // value)

                                                            // Properties: Bits: 9:8, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR1_TARGET_5_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#5
const uintptr_t GIC_ICDIPTR1_TARGET_5_BPOS = 8;             // 01: CPU 0 targeted (CPU 0 always reads this
                                                            // value)
                                                            // 10: CPU 1 targeted (CPU 1 always reads this
                                                            // value)

                                                            // Properties: Bits: 1:0, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR1_TARGET_4_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#4
const uintptr_t GIC_ICDIPTR1_TARGET_4_BPOS = 0;             // 01: CPU 0 targeted (CPU 0 always reads this
                                                            // value)
                                                            // 10: CPU 1 targeted (CPU 1 always reads this
                                                            // value)


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR2
//
// Name                     GIC_ICDIPTR2
// Software Name            GIC_SPI_TARGET
// Relative Address         0x00001808
// Absolute Address         0xF8F01808
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Interrupt Processor Targets Register 2
//
// Register GIC_ICDIPTR2 Details
//         The ICDIPTR2 register is used to indicate the targets of interrupts ID#8-ID#11.
//
                                                             // Properties: Bits: 25:24, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR2_TARGET_11_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#11
const uintptr_t GIC_ICDIPTR2_TARGET_11_BPOS = 24;            // 01: CPU 0 targeted (CPU 0 always reads this
                                                             // value)
                                                             // 10: CPU 1 targeted (CPU 1 always reads this
                                                             // value)

                                                             // Properties: Bits: 17:16, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR2_TARGET_10_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#10
const uintptr_t GIC_ICDIPTR2_TARGET_10_BPOS = 16;            // 01: CPU 0 targeted (CPU 0 always reads this
                                                             // value)
                                                             // 10: CPU 1 targeted (CPU 1 always reads this
                                                             // value)

                                                             // Properties: Bits: 9:8, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR2_TARGET_9_MASK  = 0x00000300;    // Targeted CPU(s) for interrupt ID#9
const uintptr_t GIC_ICDIPTR2_TARGET_9_BPOS  = 8;             // 01: CPU 0 targeted (CPU 0 always reads this
                                                             // value)
                                                             // 10: CPU 1 targeted (CPU 1 always reads this
                                                             // value)

                                                             // Properties: Bits: 1:0, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR2_TARGET_8_MASK  = 0x00000003;    // Targeted CPU(s) for interrupt ID#8
const uintptr_t GIC_ICDIPTR2_TARGET_8_BPOS  = 0;             // 01: CPU 0 targeted (CPU 0 always reads this
                                                             // value)
                                                             // 10: CPU 1 targeted (CPU 1 always reads this
                                                             // value)


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR3
//
// Name                     GIC_ICDIPTR3
// Software Name            GIC_SPI_TARGET
// Relative Address         0x0000180C
// Absolute Address         0xF8F0180C
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Interrupt Processor Targets Register 3
//
// Register GIC_ICDIPTR3 Details
//         The ICDIPTR3 register is used to indicate the targets of interrupts ID#12-ID#15.
//
                                                             // Properties: Bits: 25:24, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR3_TARGET_15_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#15
const uintptr_t GIC_ICDIPTR3_TARGET_15_BPOS = 24;            // 01: CPU 0 targeted (CPU 0 always reads this
                                                             // value)
                                                             // 10: CPU 1 targeted (CPU 1 always reads this
                                                             // value)

                                                             // Properties: Bits: 17:16, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR3_TARGET_14_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#14
const uintptr_t GIC_ICDIPTR3_TARGET_14_BPOS = 16;            // 01: CPU 0 targeted (CPU 0 always reads this
                                                             // value)
                                                             // 10: CPU 1 targeted (CPU 1 always reads this
                                                             // value)

                                                             // Properties: Bits: 9:8, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR3_TARGET_13_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#13
const uintptr_t GIC_ICDIPTR3_TARGET_13_BPOS = 8;             // 01: CPU 0 targeted (CPU 0 always reads this
                                                             // value)
                                                             // 10: CPU 1 targeted (CPU 1 always reads this
                                                             // value)

                                                             // Properties: Bits: 1:0, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR3_TARGET_12_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#12
const uintptr_t GIC_ICDIPTR3_TARGET_12_BPOS = 0;             // 01: CPU 0 targeted (CPU 0 always reads this
                                                             // value)
                                                             // 10: CPU 1 targeted (CPU 1 always reads this
                                                             // value)


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR4
//
// Name                    GIC_ICDIPTR4
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001810
// Absolute Address        0xF8F01810
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 4
//
// Register GIC_ICDIPTR4 Details
//         The ICDIPTR4 register always returns 0.
//
// RESERVED                                       Properties: Bits: 31:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR5
//
// Name                    GIC_ICDIPTR5
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001814
// Absolute Address        0xF8F01814
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 5
//
// Register GIC_ICDIPTR5 Details
//         The ICDIPTR5 register always returns 0.
//
// RESERVED                                       Properties: Bits: 31:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR6
//
// Name                     GIC_ICDIPTR6
// Software Name            GIC_SPI_TARGET
// Relative Address         0x00001818
// Absolute Address         0xF8F01818
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Interrupt Processor Targets Register 6
//
// Register GIC_ICDIPTR6 Details
//         The ICDIPTR6 register is used to indicate the target of interrupt ID#27.
//
                                                             // Properties: Bits: 25:24, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR6_TARGET_27_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#27
const uintptr_t GIC_ICDIPTR6_TARGET_27_BPOS = 24;            // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR7
//
// Name                     GIC_ICDIPTR7
// Software Name            GIC_SPI_TARGET
// Relative Address         0x0000181C
// Absolute Address         0xF8F0181C
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Interrupt Processor Targets Register 7
//
// Register GIC_ICDIPTR7 Details
//         The ICDIPTR7 register is used to indicate the targets of interrupts ID#28-ID#31.
//
                                                             // Properties: Bits: 25:24, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR7_TARGET_31_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#31
const uintptr_t GIC_ICDIPTR7_TARGET_31_BPOS = 24;            // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted

                                                             // Properties: Bits: 17:16, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR7_TARGET_30_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#30
const uintptr_t GIC_ICDIPTR7_TARGET_30_BPOS = 16;            // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted

                                                             // Properties: Bits: 9:8, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR7_TARGET_29_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#29
const uintptr_t GIC_ICDIPTR7_TARGET_29_BPOS = 8;             // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted

                                                             // Properties: Bits: 1:0, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR7_TARGET_28_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#28
const uintptr_t GIC_ICDIPTR7_TARGET_28_BPOS = 0;             // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR8
//
// Name                    GIC_ICDIPTR8
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001820
// Absolute Address        0xF8F01820
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 8
//
// Register GIC_ICDIPTR8 Details
//         The ICDIPTR8 register is used to target the interrupts ID#32-ID#35 to none, CPU 0, CPU 1, or both CPUs.
//
                                                             // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR8_TARGET_35_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#35
const uintptr_t GIC_ICDIPTR8_TARGET_35_BPOS = 24;            // 00: no CPU targeted
                                                             // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted
                                                             // 11: CPU 0 and CPU 1 are both targeted

                                                             // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR8_TARGET_34_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#34
const uintptr_t GIC_ICDIPTR8_TARGET_34_BPOS = 16;            // 00: no CPU targeted
                                                             // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted
                                                             // 11: CPU 0 and CPU 1 are both targeted

                                                             // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR8_TARGET_33_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#33
const uintptr_t GIC_ICDIPTR8_TARGET_33_BPOS = 8;             // 00: no CPU targeted
                                                             // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted
                                                             // 11: CPU 0 and CPU 1 are both targeted

                                                             // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR8_TARGET_32_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#32
const uintptr_t GIC_ICDIPTR8_TARGET_32_BPOS = 0;             // 00: no CPU targeted
                                                             // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted
                                                             // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR9
//
// Name                    GIC_ICDIPTR9
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001824
// Absolute Address        0xF8F01824
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 9
//
// Register GIC_ICDIPTR9 Details
//         The ICDIPTR9 register is used to target the interrupts ID#36-ID#39 to none, CPU 0, CPU 1, or both CPUs.
//
                                                             // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR9_TARGET_39_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#39
const uintptr_t GIC_ICDIPTR9_TARGET_39_BPOS = 24;            // 00: no CPU targeted
                                                             // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted
                                                             // 11: CPU 0 and CPU 1 are both targeted

                                                             // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR9_TARGET_38_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#38
const uintptr_t GIC_ICDIPTR9_TARGET_38_BPOS = 16;            // 00: no CPU targeted
                                                             // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted
                                                             // 11: CPU 0 and CPU 1 are both targeted

                                                             // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR9_TARGET_37_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#37
const uintptr_t GIC_ICDIPTR9_TARGET_37_BPOS = 8;             // 00: no CPU targeted
                                                             // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted
                                                             // 11: CPU 0 and CPU 1 are both targeted

                                                             // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR9_TARGET_36_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#36
const uintptr_t GIC_ICDIPTR9_TARGET_36_BPOS = 0;             // 00: no CPU targeted
                                                             // 01: CPU 0 targeted
                                                             // 10: CPU 1 targeted
                                                             // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR10
//
// Name                    GIC_ICDIPTR10
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001828
// Absolute Address        0xF8F01828
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 10
//
// Register GIC_ICDIPTR10 Details
//         The ICDIPTR10 register is used to target the interrupts ID#40-ID#43 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR10_TARGET_43_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#43
const uintptr_t GIC_ICDIPTR10_TARGET_43_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR10_TARGET_42_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#42
const uintptr_t GIC_ICDIPTR10_TARGET_42_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR10_TARGET_41_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#41
const uintptr_t GIC_ICDIPTR10_TARGET_41_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR10_TARGET_40_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#40
const uintptr_t GIC_ICDIPTR10_TARGET_40_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR11
//
// Name                    GIC_ICDIPTR11
// Software Name           GIC_SPI_TARGET
// Relative Address        0x0000182C
// Absolute Address        0xF8F0182C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 11
//
// Register GIC_ICDIPTR11 Details
//         The ICDIPTR11 register is used to target the interrupts ID#44-ID#47 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR11_TARGET_47_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#47
const uintptr_t GIC_ICDIPTR11_TARGET_47_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR11_TARGET_46_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#46
const uintptr_t GIC_ICDIPTR11_TARGET_46_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR11_TARGET_45_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#45
const uintptr_t GIC_ICDIPTR11_TARGET_45_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR11_TARGET_44_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#44
const uintptr_t GIC_ICDIPTR11_TARGET_44_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR12
//
// Name                    GIC_ICDIPTR12
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001830
// Absolute Address        0xF8F01830
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 12
//
// Register GIC_ICDIPTR12 Details
//         The ICDIPTR12 register is used to target the interrupts ID#48-ID#51 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR12_TARGET_51_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#51
const uintptr_t GIC_ICDIPTR12_TARGET_51_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR12_TARGET_50_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#50
const uintptr_t GIC_ICDIPTR12_TARGET_50_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR12_TARGET_49_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#49
const uintptr_t GIC_ICDIPTR12_TARGET_49_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR12_TARGET_48_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#48
const uintptr_t GIC_ICDIPTR12_TARGET_48_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR13
//
// Name                    GIC_ICDIPTR13
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001834
// Absolute Address        0xF8F01834
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 13
//
// Register GIC_ICDIPTR13 Details
//         The ICDIPTR13 register is used to target the interrupts ID#52-ID#55 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR13_TARGET_55_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#55
const uintptr_t GIC_ICDIPTR13_TARGET_55_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR13_TARGET_54_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#54
const uintptr_t GIC_ICDIPTR13_TARGET_54_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR13_TARGET_53_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#53
const uintptr_t GIC_ICDIPTR13_TARGET_53_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR13_TARGET_52_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#52
const uintptr_t GIC_ICDIPTR13_TARGET_52_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR14
//
// Name                    GIC_ICDIPTR14
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001838
// Absolute Address        0xF8F01838
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 14
//
// Register GIC_ICDIPTR14 Details
//         The ICDIPTR14 register is used to target the interrupts ID#56-ID#59 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR14_TARGET_59_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#59
const uintptr_t GIC_ICDIPTR14_TARGET_59_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR14_TARGET_58_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#58
const uintptr_t GIC_ICDIPTR14_TARGET_58_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR14_TARGET_57_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#57
const uintptr_t GIC_ICDIPTR14_TARGET_57_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR14_TARGET_56_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#56
const uintptr_t GIC_ICDIPTR14_TARGET_56_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR15
//
// Name                    GIC_ICDIPTR15
// Software Name           GIC_SPI_TARGET
// Relative Address        0x0000183C
// Absolute Address        0xF8F0183C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 15
//
// Register GIC_ICDIPTR15 Details
//         The ICDIPTR15 register is used to target the interrupts ID#60-ID#63 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR15_TARGET_63_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#63
const uintptr_t GIC_ICDIPTR15_TARGET_63_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR15_TARGET_62_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#62
const uintptr_t GIC_ICDIPTR15_TARGET_62_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR15_TARGET_61_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#61
const uintptr_t GIC_ICDIPTR15_TARGET_61_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR15_TARGET_60_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#60
const uintptr_t GIC_ICDIPTR15_TARGET_60_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR16
//
// Name                    GIC_ICDIPTR16
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001840
// Absolute Address        0xF8F01840
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 16
//
// Register GIC_ICDIPTR16 Details
//         The ICDIPTR16 register is used to target the interrupts ID#64-ID#67 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR16_TARGET_67_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#67
const uintptr_t GIC_ICDIPTR16_TARGET_67_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR16_TARGET_66_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#66
const uintptr_t GIC_ICDIPTR16_TARGET_66_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR16_TARGET_65_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#65
const uintptr_t GIC_ICDIPTR16_TARGET_65_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR16_TARGET_64_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#64
const uintptr_t GIC_ICDIPTR16_TARGET_64_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR17
//
// Name                    GIC_ICDIPTR17
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001844
// Absolute Address        0xF8F01844
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 17
//
// Register GIC_ICDIPTR17 Details
//         The ICDIPTR17 register is used to target the interrupts ID#68-ID#71 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR17_TARGET_71_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#71
const uintptr_t GIC_ICDIPTR17_TARGET_71_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR17_TARGET_70_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#70
const uintptr_t GIC_ICDIPTR17_TARGET_70_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR17_TARGET_69_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#69
const uintptr_t GIC_ICDIPTR17_TARGET_69_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR17_TARGET_68_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#68
const uintptr_t GIC_ICDIPTR17_TARGET_68_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR18
//
// Name                    GIC_ICDIPTR18
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001848
// Absolute Address        0xF8F01848
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 18
//
// Register GIC_ICDIPTR18 Details
//         The ICDIPTR18 register is used to target the interrupts ID#72-ID#75 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR18_TARGET_75_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#75
const uintptr_t GIC_ICDIPTR18_TARGET_75_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR18_TARGET_74_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#74
const uintptr_t GIC_ICDIPTR18_TARGET_74_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR18_TARGET_73_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#73
const uintptr_t GIC_ICDIPTR18_TARGET_73_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR18_TARGET_72_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#72
const uintptr_t GIC_ICDIPTR18_TARGET_72_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR19
//
// Name                    GIC_ICDIPTR19
// Software Name           GIC_SPI_TARGET
// Relative Address        0x0000184C
// Absolute Address        0xF8F0184C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 19
//
// Register GIC_ICDIPTR19 Details
//         The ICDIPTR19 register is used to target the interrupts ID#76-ID#79 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR19_TARGET_79_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#79
const uintptr_t GIC_ICDIPTR19_TARGET_79_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR19_TARGET_78_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#78
const uintptr_t GIC_ICDIPTR19_TARGET_78_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR19_TARGET_77_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#77
const uintptr_t GIC_ICDIPTR19_TARGET_77_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR19_TARGET_76_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#76
const uintptr_t GIC_ICDIPTR19_TARGET_76_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR20
//
// Name                    GIC_ICDIPTR20
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001850
// Absolute Address        0xF8F01850
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 20
//
// Register GIC_ICDIPTR20 Details
//         The ICDIPTR20 register is used to target the interrupts ID#80-ID#83 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR20_TARGET_83_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#83
const uintptr_t GIC_ICDIPTR20_TARGET_83_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR20_TARGET_82_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#82
const uintptr_t GIC_ICDIPTR20_TARGET_82_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR20_TARGET_81_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#81
const uintptr_t GIC_ICDIPTR20_TARGET_81_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR20_TARGET_80_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#80
const uintptr_t GIC_ICDIPTR20_TARGET_80_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR21
//
// Name                    GIC_ICDIPTR21
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001854
// Absolute Address        0xF8F01854
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 21
//
// Register GIC_ICDIPTR21 Details
//         The ICDIPTR21 register is used to target the interrupts ID#84-ID#87 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR21_TARGET_87_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#87
const uintptr_t GIC_ICDIPTR21_TARGET_87_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR21_TARGET_86_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#86
const uintptr_t GIC_ICDIPTR21_TARGET_86_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR21_TARGET_85_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#85
const uintptr_t GIC_ICDIPTR21_TARGET_85_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR21_TARGET_84_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#84
const uintptr_t GIC_ICDIPTR21_TARGET_84_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR22
//
// Name                    GIC_ICDIPTR22
// Software Name           GIC_SPI_TARGET
// Relative Address        0x00001858
// Absolute Address        0xF8F01858
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 22
//
// Register GIC_ICDIPTR22 Details
//         The ICDIPTR22 register is used to target the interrupts ID#88-ID#91 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR22_TARGET_91_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#91
const uintptr_t GIC_ICDIPTR22_TARGET_91_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR22_TARGET_90_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#90
const uintptr_t GIC_ICDIPTR22_TARGET_90_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR22_TARGET_89_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#89
const uintptr_t GIC_ICDIPTR22_TARGET_89_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR22_TARGET_88_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#88
const uintptr_t GIC_ICDIPTR22_TARGET_88_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDIPTR23
//
// Name                    GIC_ICDIPTR23
// Software Name           GIC_SPI_TARGET
// Relative Address        0x0000185C
// Absolute Address        0xF8F0185C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Processor Targets Register 23
//
// Register GIC_ICDIPTR23 Details
//         The ICDIPTR23 register is used to target the interrupts ID#92-ID#95 to none, CPU 0, CPU 1, or both CPUs.
//
                                                              // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR23_TARGET_95_MASK = 0x03000000;    // Targeted CPU(s) for interrupt ID#95
const uintptr_t GIC_ICDIPTR23_TARGET_95_BPOS = 24;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR23_TARGET_94_MASK = 0x00030000;    // Targeted CPU(s) for interrupt ID#94
const uintptr_t GIC_ICDIPTR23_TARGET_94_BPOS = 16;            // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR23_TARGET_93_MASK = 0x00000300;    // Targeted CPU(s) for interrupt ID#93
const uintptr_t GIC_ICDIPTR23_TARGET_93_BPOS = 8;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted

                                                              // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDIPTR23_TARGET_92_MASK = 0x00000003;    // Targeted CPU(s) for interrupt ID#92
const uintptr_t GIC_ICDIPTR23_TARGET_92_BPOS = 0;             // 00: no CPU targeted
                                                              // 01: CPU 0 targeted
                                                              // 10: CPU 1 targeted
                                                              // 11: CPU 0 and CPU 1 are both targeted


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDICFR0
//
// Name                    GIC_ICDICFR0
// Software Name           GIC_INT_CFG
// Relative Address        0x00001C00
// Absolute Address        0xF8F01C00
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Interrupt Configuration Register 0
//
// Register GIC_ICDICFR0 Details
//         The ICD ICFR 0 register controls the interrupt sensitivity of the 16 Software Generated Interrupts (SGI),
//         IRQ ID #0 to ID #15. This read-only register has two bits per interrupt that always indicate each SGI
//         interrupt is edge sensitive and must be handled by all of the targeted CPUs as indicated in the ICD IPTR
//         [3:0] registers.
//
                                                             // Properties: Bits: 31:30, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_15_MASK = 0xC0000000;    // Configuration for interrupt ID#15
const uintptr_t GIC_ICDICFR0_CONFIG_15_BPOS = 30;            // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 29:28, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_14_MASK = 0x30000000;    // Configuration for interrupt ID#14
const uintptr_t GIC_ICDICFR0_CONFIG_14_BPOS = 28;            // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 27:26, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_13_MASK = 0x0C000000;    // Configuration for interrupt ID#13
const uintptr_t GIC_ICDICFR0_CONFIG_13_BPOS = 26;            // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 25:24, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_12_MASK = 0x03000000;    // Configuration for interrupt ID#12
const uintptr_t GIC_ICDICFR0_CONFIG_12_BPOS = 24;            // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 23:22, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_11_MASK = 0x00C00000;    // Configuration for interrupt ID#11
const uintptr_t GIC_ICDICFR0_CONFIG_11_BPOS = 22;            // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 21:20, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_10_MASK = 0x00300000;    // Configuration for interrupt ID#10
const uintptr_t GIC_ICDICFR0_CONFIG_10_BPOS = 20;            // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 19:18, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_9_MASK  = 0x000C0000;    // Configuration for interrupt ID#9
const uintptr_t GIC_ICDICFR0_CONFIG_9_BPOS  = 18;            // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 17:16, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_8_MASK  = 0x00030000;    // Configuration for interrupt ID#8
const uintptr_t GIC_ICDICFR0_CONFIG_8_BPOS  = 16;            // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 15:14, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_7_MASK  = 0x0000C000;    // Configuration for interrupt ID#7
const uintptr_t GIC_ICDICFR0_CONFIG_7_BPOS  = 14;            // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 13:12, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_6_MASK  = 0x00003000;    // Configuration for interrupt ID#6
const uintptr_t GIC_ICDICFR0_CONFIG_6_BPOS  = 12;            // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 11:10, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_5_MASK  = 0x00000C00;    // Configuration for interrupt ID#5
const uintptr_t GIC_ICDICFR0_CONFIG_5_BPOS  = 10;            // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 9:8, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_4_MASK  = 0x00000300;    // Configuration for interrupt ID#4
const uintptr_t GIC_ICDICFR0_CONFIG_4_BPOS  = 8;             // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 7:6, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_3_MASK  = 0x000000C0;    // Configuration for interrupt ID#3
const uintptr_t GIC_ICDICFR0_CONFIG_3_BPOS  = 6;             // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 5:4, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_2_MASK  = 0x00000030;    // Configuration for interrupt ID#2
const uintptr_t GIC_ICDICFR0_CONFIG_2_BPOS  = 4;             // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 3:2, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_1_MASK  = 0x0000000C;    // Configuration for interrupt ID#1
const uintptr_t GIC_ICDICFR0_CONFIG_1_BPOS  = 2;             // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).

                                                             // Properties: Bits: 1:0, Type: ro, Reset Value: 0x0
const uintptr_t GIC_ICDICFR0_CONFIG_0_MASK  = 0x00000003;    // Configuration for interrupt ID#0
const uintptr_t GIC_ICDICFR0_CONFIG_0_BPOS  = 0;             // 10: edge sensitive and must be handeled by the
                                                             // targeted CPU(s).


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDICFR1
//
// Name                     GIC_ICDICFR1
// Relative Address         0x00001C04
// Absolute Address         0xF8F01C04
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Interrupt Configuration Register 1
//
// Register GIC_ICDICFR1 Details
//         The ICD ICFR 1 register controls the interrupt sensitivity of the CPU Private Peripheral Interrupts (PPI),
//         IRQ ID #27 to ID #31. This read-only register has two bits per interrupt. This two bit field is either equal to
//         01 (low-level active) or equal to 11 (edge sensitive). The LSB is always 1 because only the local CPU handles
//         its own PPI interrupts.
//         Note: There are two instances of this register at the same address. One register is accessible by CPU 0 and
//         the other register is accessible by CPU 1.
//
                                                             // Properties: Bits: 31:30, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR1_CONFIG_31_MASK = 0xC0000000;    // Configuration for interrupt ID#31 (nIRQ)
const uintptr_t GIC_ICDICFR1_CONFIG_31_BPOS = 30;            // 01: low-level active

                                                             // Properties: Bits: 29:28, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR1_CONFIG_30_MASK = 0x30000000;    // Configuration for interrupt ID#30 (CPU
const uintptr_t GIC_ICDICFR1_CONFIG_30_BPOS = 28;            // watchdog timer)
                                                             // 11: edge sensitive

                                                             // Properties: Bits: 27:26, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR1_CONFIG_29_MASK = 0x0C000000;    // Configuration for interrupt ID#29 (CPU private
const uintptr_t GIC_ICDICFR1_CONFIG_29_BPOS = 26;            // timer)
                                                             // 11: edge sensitive

                                                             // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR1_CONFIG_28_MASK = 0x03000000;    // Configuration for interrupt ID#28 (nFIQ)
const uintptr_t GIC_ICDICFR1_CONFIG_28_BPOS = 24;            // 01: low-level active

                                                             // Properties: Bits: 23:22, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR1_CONFIG_27_MASK = 0x00C00000;    // Configuration for interrupt ID#27 (global timer)
const uintptr_t GIC_ICDICFR1_CONFIG_27_BPOS = 22;            // 11: edge sensitive

// RESERVED                                                     Properties: Bits: 21:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDICFR2
//
// Name                     GIC_ICDICFR2
// Relative Address         0x00001C08
// Absolute Address         0xF8F01C08
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Interrupt Configuration Register 2
//
// Register GIC_ICDICFR2 Details
//         The ICDICFR 2 register control the interrupt sensitivity of the Shared Peripheral Interrupts (SPI), IRQ ID
//         #32 to ID #47 (IRQ 36 is reserved). This register has two bits per interrupt. This two bit field is either equal
//         to 01 (high-level active) or equal to 11 (rising-edge sensitive). The LSB is always 1 because only one CPU
//         will handle a SPI interrupt, regardless of the number of CPUs targeted.
//         Refer to UG585 TRM Section 7.2.3 Shared Peripheral Interrupts (SPI) for the required sensitivity type for
//         the SPI interrupts. The SPI interrupts must match the expected sensitivity. Interrupts from the PL may be
//         high-level or rising edge sensitive; this must be coordinated with the PL hardware and software.
//
                                                             // Properties: Bits: 31:30, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_47_MASK = 0xC0000000;    // Configuration for interrupt ID#47
const uintptr_t GIC_ICDICFR2_CONFIG_47_BPOS = 30;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 29:28, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_46_MASK = 0x30000000;    // Configuration for interrupt ID#46
const uintptr_t GIC_ICDICFR2_CONFIG_46_BPOS = 28;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 27:26, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_45_MASK = 0x0C000000;    // Configuration for interrupt ID#45
const uintptr_t GIC_ICDICFR2_CONFIG_45_BPOS = 26;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_44_MASK = 0x03000000;    // Configuration for interrupt ID#44
const uintptr_t GIC_ICDICFR2_CONFIG_44_BPOS = 24;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 23:22, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_43_MASK = 0x00C00000;    // Configuration for interrupt ID#43
const uintptr_t GIC_ICDICFR2_CONFIG_43_BPOS = 22;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 21:20, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_42_MASK = 0x00300000;    // Configuration for interrupt ID#42
const uintptr_t GIC_ICDICFR2_CONFIG_42_BPOS = 20;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 19:18, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_41_MASK = 0x000C0000;    // Configuration for interrupt ID#41
const uintptr_t GIC_ICDICFR2_CONFIG_41_BPOS = 18;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_40_MASK = 0x00030000;    // Configuration for interrupt ID#40
const uintptr_t GIC_ICDICFR2_CONFIG_40_BPOS = 16;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 15:14, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_39_MASK = 0x0000C000;    // Configuration for interrupt ID#39
const uintptr_t GIC_ICDICFR2_CONFIG_39_BPOS = 14;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 13:12, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_38_MASK = 0x00003000;    // Configuration for interrupt ID#38
const uintptr_t GIC_ICDICFR2_CONFIG_38_BPOS = 12;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_37_MASK = 0x00000C00;    // Configuration for interrupt ID#37
const uintptr_t GIC_ICDICFR2_CONFIG_37_BPOS = 10;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_36_MASK = 0x00000300;    // Configuration for interrupt ID#36
const uintptr_t GIC_ICDICFR2_CONFIG_36_BPOS = 8;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 7:6, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_35_MASK = 0x000000C0;    // Configuration for interrupt ID#35
const uintptr_t GIC_ICDICFR2_CONFIG_35_BPOS = 6;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_34_MASK = 0x00000030;    // Configuration for interrupt ID#34
const uintptr_t GIC_ICDICFR2_CONFIG_34_BPOS = 4;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 3:2, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_33_MASK = 0x0000000C;    // Configuration for interrupt ID#33
const uintptr_t GIC_ICDICFR2_CONFIG_33_BPOS = 2;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR2_CONFIG_32_MASK = 0x00000003;    // Configuration for interrupt ID#32
const uintptr_t GIC_ICDICFR2_CONFIG_32_BPOS = 0;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDICFR3
//
// Name                     GIC_ICDICFR3
// Relative Address         0x00001C0C
// Absolute Address         0xF8F01C0C
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Interrupt Configuration Register 3
//
// Register GIC_ICDICFR3 Details
//         The ICDICFR 3 register control the interrupt sensitivity of the Shared Peripheral Interrupts (SPI), IRQ ID
//         #48 to ID #63. This register has two bits per interrupt. This two bit field is either equal to 01 (high-level
//         active) or equal to 11 (rising-edge sensitive). The LSB is always 1 because only one CPU will handle a SPI
//         interrupt, regardless of the number of CPUs targeted.
//         Refer to UG585 TRM Section 7.2.3 Shared Peripheral Interrupts (SPI) for the required sensitivity type for
//         the SPI interrupts. The SPI interrupts must match the expected sensitivity. Interrupts from the PL may be
//         high-level or rising edge sensitive; this must be coordinated with the PL hardware and software.
//
                                                             // Properties: Bits: 31:30, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_63_MASK = 0xC0000000;    // Configuration for interrupt ID#63
const uintptr_t GIC_ICDICFR3_CONFIG_63_BPOS = 30;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 29:28, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_62_MASK = 0x30000000;    // Configuration for interrupt ID#62
const uintptr_t GIC_ICDICFR3_CONFIG_62_BPOS = 28;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 27:26, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_61_MASK = 0x0C000000;    // Configuration for interrupt ID#61
const uintptr_t GIC_ICDICFR3_CONFIG_61_BPOS = 26;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_60_MASK = 0x03000000;    // Configuration for interrupt ID#60
const uintptr_t GIC_ICDICFR3_CONFIG_60_BPOS = 24;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 23:22, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_59_MASK = 0x00C00000;    // Configuration for interrupt ID#59
const uintptr_t GIC_ICDICFR3_CONFIG_59_BPOS = 22;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 21:20, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_58_MASK = 0x00300000;    // Configuration for interrupt ID#58
const uintptr_t GIC_ICDICFR3_CONFIG_58_BPOS = 20;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 19:18, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_57_MASK = 0x000C0000;    // Configuration for interrupt ID#57
const uintptr_t GIC_ICDICFR3_CONFIG_57_BPOS = 18;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_56_MASK = 0x00030000;    // Configuration for interrupt ID#56
const uintptr_t GIC_ICDICFR3_CONFIG_56_BPOS = 16;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 15:14, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_55_MASK = 0x0000C000;    // Configuration for interrupt ID#55
const uintptr_t GIC_ICDICFR3_CONFIG_55_BPOS = 14;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 13:12, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_54_MASK = 0x00003000;    // Configuration for interrupt ID#54
const uintptr_t GIC_ICDICFR3_CONFIG_54_BPOS = 12;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_53_MASK = 0x00000C00;    // Configuration for interrupt ID#53
const uintptr_t GIC_ICDICFR3_CONFIG_53_BPOS = 10;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_52_MASK = 0x00000300;    // Configuration for interrupt ID#52
const uintptr_t GIC_ICDICFR3_CONFIG_52_BPOS = 8;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 7:6, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_51_MASK = 0x000000C0;    // Configuration for interrupt ID#51
const uintptr_t GIC_ICDICFR3_CONFIG_51_BPOS = 6;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_50_MASK = 0x00000030;    // Configuration for interrupt ID#50
const uintptr_t GIC_ICDICFR3_CONFIG_50_BPOS = 4;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 3:2, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_49_MASK = 0x0000000C;    // Configuration for interrupt ID#49
const uintptr_t GIC_ICDICFR3_CONFIG_49_BPOS = 2;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR3_CONFIG_48_MASK = 0x00000003;    // Configuration for interrupt ID#48
const uintptr_t GIC_ICDICFR3_CONFIG_48_BPOS = 0;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDICFR4
//
// Name                     GIC_ICDICFR4
// Relative Address         0x00001C10
// Absolute Address         0xF8F01C10
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Interrupt Configuration Register 4
//
// Register GIC_ICDICFR4 Details
//         The ICDICFR 4 register control the interrupt sensitivity of the Shared Peripheral Interrupts (SPI), IRQ ID
//         #64 to ID #79. This register has two bits per interrupt. This two bit field is either equal to 01 (high-level
//         active) or equal to 11 (rising-edge sensitive). The LSB is always 1 because only one CPU will handle a SPI
//         interrupt, regardless of the number of CPUs targeted.
//         Refer to UG585 TRM Section 7.2.3 Shared Peripheral Interrupts (SPI) for the required sensitivity type for
//         the SPI interrupts. The SPI interrupts must match the expected sensitivity. Interrupts from the PL may be
//         high-level or rising edge sensitive; this must be coordinated with the PL hardware and software.
//
                                                             // Properties: Bits: 31:30, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_79_MASK = 0xC0000000;    // Configuration for interrupt ID#79
const uintptr_t GIC_ICDICFR4_CONFIG_79_BPOS = 30;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 29:28, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_78_MASK = 0x30000000;    // Configuration for interrupt ID#78
const uintptr_t GIC_ICDICFR4_CONFIG_78_BPOS = 28;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 27:26, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_77_MASK = 0x0C000000;    // Configuration for interrupt ID#77
const uintptr_t GIC_ICDICFR4_CONFIG_77_BPOS = 26;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_76_MASK = 0x03000000;    // Configuration for interrupt ID#76
const uintptr_t GIC_ICDICFR4_CONFIG_76_BPOS = 24;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 23:22, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_75_MASK = 0x00C00000;    // Configuration for interrupt ID#75
const uintptr_t GIC_ICDICFR4_CONFIG_75_BPOS = 22;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 21:20, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_74_MASK = 0x00300000;    // Configuration for interrupt ID#74
const uintptr_t GIC_ICDICFR4_CONFIG_74_BPOS = 20;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 19:18, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_73_MASK = 0x000C0000;    // Configuration for interrupt ID#73
const uintptr_t GIC_ICDICFR4_CONFIG_73_BPOS = 18;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_72_MASK = 0x00030000;    // Configuration for interrupt ID#72
const uintptr_t GIC_ICDICFR4_CONFIG_72_BPOS = 16;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 15:14, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_71_MASK = 0x0000C000;    // Configuration for interrupt ID#71
const uintptr_t GIC_ICDICFR4_CONFIG_71_BPOS = 14;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 13:12, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_70_MASK = 0x00003000;    // Configuration for interrupt ID#70
const uintptr_t GIC_ICDICFR4_CONFIG_70_BPOS = 12;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_69_MASK = 0x00000C00;    // Configuration for interrupt ID#69
const uintptr_t GIC_ICDICFR4_CONFIG_69_BPOS = 10;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_68_MASK = 0x00000300;    // Configuration for interrupt ID#68
const uintptr_t GIC_ICDICFR4_CONFIG_68_BPOS = 8;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 7:6, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_67_MASK = 0x000000C0;    // Configuration for interrupt ID#67
const uintptr_t GIC_ICDICFR4_CONFIG_67_BPOS = 6;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_66_MASK = 0x00000030;    // Configuration for interrupt ID#66
const uintptr_t GIC_ICDICFR4_CONFIG_66_BPOS = 4;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 3:2, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_65_MASK = 0x0000000C;    // Configuration for interrupt ID#65
const uintptr_t GIC_ICDICFR4_CONFIG_65_BPOS = 2;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR4_CONFIG_64_MASK = 0x00000003;    // Configuration for interrupt ID#64
const uintptr_t GIC_ICDICFR4_CONFIG_64_BPOS = 0;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDICFR5
//
// Name                      GIC_ICDICFR5
// Relative Address          0x00001C14
// Absolute Address          0xF8F01C14
// Width                     32 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               Interrupt Configuration Register 5
//
// Register GIC_ICDICFR5 Details
//         The ICDICFR 5 register control the interrupt sensitivity of the Shared Peripheral Interrupts (SPI), IRQ ID
//         #80 to ID #95 (reserved: 93, 94, 95). This register has two bits per interrupt. This two bit field is either equal
//         to 01 (high-level active) or equal to 11 (rising-edge sensitive). The LSB is always 1 because only one CPU
//         will handle a SPI interrupt, regardless of the number of CPUs targeted.
//         Refer to UG585 TRM Section 7.2.3 Shared Peripheral Interrupts (SPI) for the required sensitivity type for
//         the SPI interrupts. The SPI interrupts must match the expected sensitivity. Interrupts from the PL may be
//         high-level or rising edge sensitive; this must be coordinated with the PL hardware and software.
//
                                                             // Properties: Bits: 31:30, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_95_MASK = 0xC0000000;    // Configuration for interrupt ID#95
const uintptr_t GIC_ICDICFR5_CONFIG_95_BPOS = 30;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 29:28, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_94_MASK = 0x30000000;    // Configuration for interrupt ID#94
const uintptr_t GIC_ICDICFR5_CONFIG_94_BPOS = 28;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 27:26, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_93_MASK = 0x0C000000;    // Configuration for interrupt ID#93
const uintptr_t GIC_ICDICFR5_CONFIG_93_BPOS = 26;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_92_MASK = 0x03000000;    // Configuration for interrupt ID#92
const uintptr_t GIC_ICDICFR5_CONFIG_92_BPOS = 24;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 23:22, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_91_MASK = 0x00C00000;    // Configuration for interrupt ID#91
const uintptr_t GIC_ICDICFR5_CONFIG_91_BPOS = 22;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 21:20, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_90_MASK = 0x00300000;    // Configuration for interrupt ID#90
const uintptr_t GIC_ICDICFR5_CONFIG_90_BPOS = 20;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 19:18, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_89_MASK = 0x000C0000;    // Configuration for interrupt ID#89
const uintptr_t GIC_ICDICFR5_CONFIG_89_BPOS = 18;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_88_MASK = 0x00030000;    // Configuration for interrupt ID#88
const uintptr_t GIC_ICDICFR5_CONFIG_88_BPOS = 16;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 15:14, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_87_MASK = 0x0000C000;    // Configuration for interrupt ID#87
const uintptr_t GIC_ICDICFR5_CONFIG_87_BPOS = 14;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 13:12, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_86_MASK = 0x00003000;    // Configuration for interrupt ID#86
const uintptr_t GIC_ICDICFR5_CONFIG_86_BPOS = 12;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_85_MASK = 0x00000C00;    // Configuration for interrupt ID#85
const uintptr_t GIC_ICDICFR5_CONFIG_85_BPOS = 10;            // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_84_MASK = 0x00000300;    // Configuration for interrupt ID#84
const uintptr_t GIC_ICDICFR5_CONFIG_84_BPOS = 8;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 7:6, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_83_MASK = 0x000000C0;    // Configuration for interrupt ID#83
const uintptr_t GIC_ICDICFR5_CONFIG_83_BPOS = 6;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_82_MASK = 0x00000030;    // Configuration for interrupt ID#82
const uintptr_t GIC_ICDICFR5_CONFIG_82_BPOS = 4;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 3:2, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_81_MASK = 0x0000000C;    // Configuration for interrupt ID#81
const uintptr_t GIC_ICDICFR5_CONFIG_81_BPOS = 2;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.

                                                             // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDICFR5_CONFIG_80_MASK = 0x00000003;    // Configuration for interrupt ID#80
const uintptr_t GIC_ICDICFR5_CONFIG_80_BPOS = 0;             // 01: high-level active
                                                             // 11: rising-edge
                                                             // The lower bit is read-only and is always 1.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_PPI_STATUS
//
// Name                    GIC_PPI_STATUS_REG
// Software Name           GIC_PPI_STAT
// Relative Address        0x00001D00
// Absolute Address        0xF8F01D00
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             PPI Status Register
//
// Register GIC_PPI_STATUS_REG Details
//
// RESERVED                                                 Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                         // Properties: Bits: 15:11, Type: ro, Reset Value: 0x0
const uintptr_t GIC_PPI_STATUS_VAL_MASK = 0x0000F800;    // Returns the status of the PPI(4:0) inputs on the
const uintptr_t GIC_PPI_STATUS_VAL_BPOS = 11;            // distributor:
                                                         // * PPI[4] is nIRQ
                                                         // * PPI[3] is the private watchdog
                                                         // * PPI[2] is the private timer
                                                         // * PPI[1] is nFIQ
                                                         // * PPI[0] is the global timer.
                                                         // PPI[1] and PPI[4] are active LOW
                                                         // PPI[0], PPI[2] and PPI[3] are active HIGH.
                                                         // Note
                                                         // These bits return the actual status of the PPI(4:0)
                                                         // signals. The ICDISPRn and ICDICPRn registers
                                                         // can also provide the PPI(4:0) status but because
                                                         // you can write to these registers then they might
                                                         // not contain the actual status of the PPI(4:0)
                                                         // signals.

                                                         // Properties: Bits: 10:0, Type: ro, Reset Value: 0x0
const uintptr_t GIC_PPI_STATUS_SBZ_MASK = 0x000007FF;    // SBZ
const uintptr_t GIC_PPI_STATUS_SBZ_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_SPI_STATUS0
//
// Name                    GIC_SPI_STATUS0_REG
// Software Name           GIC_SPI_STAT
// Relative Address        0x00001D04
// Absolute Address        0xF8F01D04
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             SPI Status Register 0
//
// Register GIC_SPI_STATUS0_REG Details
//
                                                          // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GIC_SPI_STATUS0_VAL_MASK = 0xFFFFFFFF;    // Returns the status of the IRQ ID32 to ID63 inputs
const uintptr_t GIC_SPI_STATUS0_VAL_BPOS = 0;             // on the distributor. These bits return the actual
                                                          // status of the IRQ signals.
                                                          // Note: The ICDISPR1 and ICDICPR1 registers can
                                                          // also provide the IRQ status but because you can
                                                          // write to these registers then they might not
                                                          // contain the actual status of the IRQ signals.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_SPI_STATUS1
//
// Name                    GIC_SPI_STATUS1_REG
// Relative Address        0x00001D08
// Absolute Address        0xF8F01D08
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             SPI Status Register 1
//
// Register GIC_SPI_STATUS1_REG Details
//
                                                          // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GIC_SPI_STATUS1_VAL_MASK = 0xFFFFFFFF;    // Returns the status of the IRQ ID64 to ID95 inputs
const uintptr_t GIC_SPI_STATUS1_VAL_BPOS = 0;             // on the distributor. These bits return the actual
                                                          // status of the IRQ signals.
                                                          // Note: The ICDISPR2 and ICDICPR2 registers can
                                                          // also provide the IRQ status but because you can
                                                          // write to these registers then they might not
                                                          // contain the actual status of the IRQ signals.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICDSGIR
//
// Name                    GIC_ICDSGIR
// Software Name           GIC_SFI_TRIG
// Relative Address        0x00001F00
// Absolute Address        0xF8F01F00
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Software Generated Interrupt Register
//
// Register GIC_ICDSGIR Details
//
// RESERVED                                                             Properties: Bits: 31:26, Type: rw, Reset Value: 0x0

                                                                     // Properties: Bits: 25:24, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDSGIR_TARGET_LIST_FILTER_MASK = 0x03000000;    // 0b00: send the interrupt to the CPU interfaces
const uintptr_t GIC_ICDSGIR_TARGET_LIST_FILTER_BPOS = 24;            // specified in the CPUTargetList field
                                                                     // 0b01: send the interrupt to all CPU interfaces
                                                                     // except the CPU interface that requested the
                                                                     // interrupt
                                                                     // 0b10: send the interrupt on only to the CPU
                                                                     // interface that requested the interrupt
                                                                     // 0b11: reserved

                                                                     // Properties: Bits: 23:16, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDSGIR_CPU_TARGET_LIST_MASK    = 0x00FF0000;    // When TargetListFilter is 0b00, defines the CPU
const uintptr_t GIC_ICDSGIR_CPU_TARGET_LIST_BPOS    = 16;            // interfaces the Distributor must send the interrupt
                                                                     // to.
                                                                     // Each bit refers to the corresponding CPU
                                                                     // interface.

                                                                     // Properties: Bit: 15, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDSGIR_SATT_MASK               = 0x00008000;    // Determines the condition for sending the SGI
const uintptr_t GIC_ICDSGIR_SATT_BPOS               = 15;            // specified in the SGIINTID field to a specified CPU
                                                                     // interfaces:
                                                                     // 0: only if the SGI is configured as Secure on that
                                                                     // interface.
                                                                     // 1: only if the SGI is configured as Non-secure on
                                                                     // that interface.

                                                                     // Properties: Bits: 14:4, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDSGIR_SBZ_MASK                = 0x00007FF0;    // SBZ
const uintptr_t GIC_ICDSGIR_SBZ_BPOS                = 4;             // 

                                                                     // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICDSGIR_SGIINTID_MASK           = 0x0000000F;    // The Interrupt ID of the SGI to send to the specified
const uintptr_t GIC_ICDSGIR_SGIINTID_BPOS           = 0;             // CPU interfaces.


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICPIDR4
//
// Name                    GIC_ICPIDR4
// Software Name           GIC_PERPHID
// Relative Address        0x00001FD0
// Absolute Address        0xF8F01FD0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000004
// Description             Peripheral ID4
//
// Register GIC_ICPIDR4 Details
//
// RESERVED                                                            Properties: Bits: 31:4, Type: rw, Reset Value: 0x0

                                                                    // Properties: Bits: 3:0, Type: rw, Reset Value: 0x4
const uintptr_t GIC_ICPIDR4_CONTINUATION_CODE_MASK = 0x0000000F;    // ARM-defined ContinuationCode field
const uintptr_t GIC_ICPIDR4_CONTINUATION_CODE_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICPIDR5
//
// Name                    GIC_ICPIDR5
// Relative Address        0x00001FD4
// Absolute Address        0xF8F01FD4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Peripheral ID5
//
// Register GIC_ICPIDR5 Details
//
// RESERVED                                       Properties: Bits: 31:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICPIDR6
//
// Name                    GIC_ICPIDR6
// Relative Address        0x00001FD8
// Absolute Address        0xF8F01FD8
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Peripheral ID6
//
// Register GIC_ICPIDR6 Details
//
// RESERVED                                       Properties: Bits: 31:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICPIDR7
//
// Name                    GIC_ICPIDR7
// Relative Address        0x00001FDC
// Absolute Address        0xF8F01FDC
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Peripheral ID7
//
// Register GIC_ICPIDR7 Details
//
// RESERVED                                       Properties: Bits: 31:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICPIDR0
//
// Name                    GIC_ICPIDR0
// Relative Address        0x00001FE0
// Absolute Address        0xF8F01FE0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000090
// Description             Peripheral ID0
//
// Register GIC_ICPIDR0 Details
//
// RESERVED                                                     Properties: Bits: 31:8, Type: rw, Reset Value: 0x0

                                                             // Properties: Bits: 7:0, Type: rw, Reset Value: 0x90
const uintptr_t GIC_ICPIDR0_DEV_ID_LOW_MASK = 0x000000FF;    // ARM-defined DevID[7:0] field
const uintptr_t GIC_ICPIDR0_DEV_ID_LOW_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICPIDR1
//
// Name                    GIC_ICPIDR1
// Relative Address        0x00001FE4
// Absolute Address        0xF8F01FE4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x000000B3
// Description             Peripheral ID1
//
// Register GIC_ICPIDR1 Details
//
// RESERVED                                                      Properties: Bits: 31:8, Type: rw, Reset Value: 0x0

                                                              // Properties: Bits: 7:4, Type: rw, Reset Value: 0xB
const uintptr_t GIC_ICPIDR1_ARCH_ID_LOW_MASK = 0x000000F0;    // ARM-defined ArchID[3:0] field
const uintptr_t GIC_ICPIDR1_ARCH_ID_LOW_BPOS = 4;             // 

                                                              // Properties: Bits: 3:0, Type: rw, Reset Value: 0x3
const uintptr_t GIC_ICPIDR1_DEV_ID_HIGH_MASK = 0x0000000F;    // ARM-defined DevID[11:8] field
const uintptr_t GIC_ICPIDR1_DEV_ID_HIGH_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICPIDR2
//
// Name                    GIC_ICPIDR2
// Relative Address        0x00001FE8
// Absolute Address        0xF8F01FE8
// Width                   32 bits
// Access Type             rw
// Reset Value             0x0000001B
// Description             Peripheral ID2
//
// Register GIC_ICPIDR2 Details
//
// RESERVED                                                       Properties: Bits: 31:8, Type: rw, Reset Value: 0x0

                                                               // Properties: Bits: 7:4, Type: rw, Reset Value: 0x1
const uintptr_t GIC_ICPIDR2_ARCH_REV_MASK     = 0x000000F0;    // ARM-defined ArchRev field
const uintptr_t GIC_ICPIDR2_ARCH_REV_BPOS     = 4;             // 

                                                               // Properties: Bit: 3, Type: rw, Reset Value: 0x1
const uintptr_t GIC_ICPIDR2_USES_JEPCODE_MASK = 0x00000008;    // ARM-defined ContinuationCode field
const uintptr_t GIC_ICPIDR2_USES_JEPCODE_BPOS = 3;             // 

                                                               // Properties: Bits: 2:0, Type: rw, Reset Value: 0x3
const uintptr_t GIC_ICPIDR2_ARCH_ID_HIGH_MASK = 0x00000007;    // ARM-defined ArchID[6:4] field
const uintptr_t GIC_ICPIDR2_ARCH_ID_HIGH_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICPIDR3
//
// Name                    GIC_ICPIDR3
// Relative Address        0x00001FEC
// Absolute Address        0xF8F01FEC
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Peripheral ID3
//
// Register GIC_ICPIDR3 Details
//
// RESERVED                                                   Properties: Bits: 31:8, Type: rw, Reset Value: 0x0

                                                           // Properties: Bits: 7:4, Type: rw, Reset Value: 0x0
const uintptr_t GIC_ICPIDR3_REVISION_MASK = 0x000000F0;    // ARM-defined Revision field
const uintptr_t GIC_ICPIDR3_REVISION_BPOS = 4;             // 

// RESERVED                                                   Properties: Bits: 3:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCIDR0
//
// Name                    GIC_ICCIDR0
// Software Name           GIC_PCELLID
// Relative Address        0x00001FF0
// Absolute Address        0xF8F01FF0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x0000000D
// Description             Component ID0
//
// Register GIC_ICCIDR0 Details
//
                                                      // Properties: Bits: 31:0, Type: rw, Reset Value: 0xD
const uintptr_t GIC_ICCIDR0_VAL_MASK = 0xFFFFFFFF;    // ARM-defined fixed values for the preamble for
const uintptr_t GIC_ICCIDR0_VAL_BPOS = 0;             // component discovery


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCIDR1
//
// Name                    GIC_ICCIDR1
// Relative Address        0x00001FF4
// Absolute Address        0xF8F01FF4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x000000F0
// Description             Component ID1
//
// Register GIC_ICCIDR1 Details
//
                                                      // Properties: Bits: 31:0, Type: rw, Reset Value: 0xF0
const uintptr_t GIC_ICCIDR1_VAL_MASK = 0xFFFFFFFF;    // ARM-defined fixed values for the preamble for
const uintptr_t GIC_ICCIDR1_VAL_BPOS = 0;             // component discovery


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCIDR2
//
// Name                    GIC_ICCIDR2
// Relative Address        0x00001FF8
// Absolute Address        0xF8F01FF8
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000005
// Description             Component ID2
//
// Register GIC_ICCIDR2 Details
//
                                                      // Properties: Bits: 31:0, Type: rw, Reset Value: 0x5
const uintptr_t GIC_ICCIDR2_VAL_MASK = 0xFFFFFFFF;    // ARM-defined fixed values for the preamble for
const uintptr_t GIC_ICCIDR2_VAL_BPOS = 0;             // component discovery


//------------------------------------------------------------------------------
//
// Register (MPCORE) GIC_ICCIDR3
//
// Name                    GIC_ICCIDR3
// Relative Address        0x00001FFC
// Absolute Address        0xF8F01FFC
// Width                   32 bits
// Access Type             rw
// Reset Value             0x000000B1
// Description             Component ID3
//
// Register GIC_ICCIDR3 Details
//
                                                      // Properties: Bits: 31:0, Type: rw, Reset Value: 0xB1
const uintptr_t GIC_ICCIDR3_VAL_MASK = 0xFFFFFFFF;    // ARM-defined fixed values for the preamble for
const uintptr_t GIC_ICCIDR3_VAL_BPOS = 0;             // component discovery


#endif // PS7_MPCORE_H

