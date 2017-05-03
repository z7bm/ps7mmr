//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_DDRC
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

#ifndef PS7_DDRC_H
#define PS7_DDRC_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    DDRC MMRs
//
//  Name                                   Address                    Width   Type       Reset Value   Description
enum TDDRC
{
    DDRC_CTRL_REG                        =  DDRC_ADDR + 0x00000000, //  32    rw         0x00000200    DDRC Control
    DDRC_TWO_RANK_CFG_REG                =  DDRC_ADDR + 0x00000004, //  29    rw         0x000C1076    Two Rank Configuration
    DDRC_HPR_REG                         =  DDRC_ADDR + 0x00000008, //  26    rw         0x03C0780F    HPR Queue control
    DDRC_LPR_REG                         =  DDRC_ADDR + 0x0000000C, //  26    rw         0x03C0780F    LPR Queue control
    DDRC_WR_REG                          =  DDRC_ADDR + 0x00000010, //  26    rw         0x0007F80F    WR Queue control
    DDRC_DRAM_PARAM0_REG                 =  DDRC_ADDR + 0x00000014, //  21    rw         0x00041016    DRAM Parameters 0
    DDRC_DRAM_PARAM1_REG                 =  DDRC_ADDR + 0x00000018, //  32    rw         0x351B48D9    DRAM Parameters 1
    DDRC_DRAM_PARAM2_REG                 =  DDRC_ADDR + 0x0000001C, //  32    rw         0x83015904    DRAM Parameters 2
    DDRC_DRAM_PARAM3_REG                 =  DDRC_ADDR + 0x00000020, //  32    mixed      0x250882D0    DRAM Parameters 3
    DDRC_DRAM_PARAM4_REG                 =  DDRC_ADDR + 0x00000024, //  28    mixed      0x0000003C    DRAM Parameters 4
    DDRC_DRAM_INIT_PARAM_REG             =  DDRC_ADDR + 0x00000028, //  14    rw         0x00002007    DRAM Initialization Parameters
    DDRC_DRAM_EMR_REG                    =  DDRC_ADDR + 0x0000002C, //  32    rw         0x00000008    DRAM EMR2
    DDRC_DRAM_EMR_MR_REG                 =  DDRC_ADDR + 0x00000030, //  32    rw         0x00000940    DRAM EMR
    DDRC_DRAM_BURST8_RDWR_REG            =  DDRC_ADDR + 0x00000034, //  29    mixed      0x00020034    DRAM Burst 8 read
    DDRC_DRAM_DISABLE_DQ_REG             =  DDRC_ADDR + 0x00000038, //  13    mixed      0x00000000    DRAM Disable DQ
    DDRC_DRAM_ADDR_MAP_BANK_REG          =  DDRC_ADDR + 0x0000003C, //  20    rw         0x00000F77    Row
    DDRC_DRAM_ADDR_MAP_COL_REG           =  DDRC_ADDR + 0x00000040, //  32    rw         0xFFF00000    Column address bits
    DDRC_DRAM_ADDR_MAP_ROW_REG           =  DDRC_ADDR + 0x00000044, //  28    rw         0x0FF55555    Select DRAM row address bits
    DDRC_DRAM_ODT_REG                    =  DDRC_ADDR + 0x00000048, //  30    rw         0x00000249    DRAM ODT control
    DDRC_PHY_DBG_REG                     =  DDRC_ADDR + 0x0000004C, //  20    ro         0x00000000    PHY debug
    DDRC_PHY_CMD_TIMEOUT_RDDATA_CPT_REG  =  DDRC_ADDR + 0x00000050, //  32    mixed      0x00010200    PHY command time out and read data capture FIFO
    DDRC_MODE_STS_REG_REG                =  DDRC_ADDR + 0x00000054, //  21    ro         0x00000000    Controller operation mode status
    DDRC_DLL_CALIB_REG                   =  DDRC_ADDR + 0x00000058, //  17    rw         0x00000101    DLL calibration
    DDRC_ODT_DELAY_HOLD_REG              =  DDRC_ADDR + 0x0000005C, //  16    rw         0x00000023    ODT delay and ODT hold
    DDRC_CTRL1_REG                       =  DDRC_ADDR + 0x00000060, //  13    mixed      0x0000003E    Controller 1
    DDRC_CTRL2_REG                       =  DDRC_ADDR + 0x00000064, //  18    mixed      0x00020000    Controller 2
    DDRC_CTRL3_REG                       =  DDRC_ADDR + 0x00000068, //  26    rw         0x00284027    Controller 3
    DDRC_CTRL4_REG                       =  DDRC_ADDR + 0x0000006C, //  16    rw         0x00001610    Controller 4
    DDRC_CTRL5_REG                       =  DDRC_ADDR + 0x00000078, //  32    mixed      0x00455111    Controller register 5
    DDRC_CTRL6_REG                       =  DDRC_ADDR + 0x0000007C, //  32    mixed      0x00032222    Controller register 6
    DDRC_CHE_REFRESH_TIMER01_REG         =  DDRC_ADDR + 0x000000A0, //  24    rw         0x00008000    CHE_REFRESH_TIMER01
    DDRC_CHE_T_ZQ_REG                    =  DDRC_ADDR + 0x000000A4, //  32    rw         0x10300802    ZQ parameters
    DDRC_CHE_T_ZQ_SHORT_INTERVAL_REG     =  DDRC_ADDR + 0x000000A8, //  28    rw         0x0020003A    Misc parameters
    DDRC_DEEP_PWRDWN_REG                 =  DDRC_ADDR + 0x000000AC, //   9    rw         0x00000000    Deep powerdown 
    DDRC_REG_2C_REG                      =  DDRC_ADDR + 0x000000B0, //  29    mixed      0x00000000    Training control
    DDRC_REG_2D_REG                      =  DDRC_ADDR + 0x000000B4, //  11    rw         0x00000200    Misc Debug
    DDRC_DFI_TIMING_REG                  =  DDRC_ADDR + 0x000000B8, //  25    rw         0x00200067    DFI timing
    DDRC_CHE_ECC_CTRL_REG                =  DDRC_ADDR + 0x000000C4, //   2    rw         0x00000000    ECC error clear
    DDRC_CHE_CORR_ECC_LOG_REG            =  DDRC_ADDR + 0x000000C8, //   8    mixed      0x00000000    ECC error correction
    DDRC_CHE_CORR_ECC_ADDR_REG           =  DDRC_ADDR + 0x000000CC, //  31    ro         0x00000000    ECC error correction address log
    DDRC_CHE_CORR_ECC_DATA_31_0_REG      =  DDRC_ADDR + 0x000000D0, //  32    ro         0x00000000    ECC error correction data log low
    DDRC_CHE_CORR_ECC_DATA_63_32_REG     =  DDRC_ADDR + 0x000000D4, //  32    ro         0x00000000    ECC error correction data log mid
    DDRC_CHE_CORR_ECC_DATA_71_64_REG     =  DDRC_ADDR + 0x000000D8, //   8    ro         0x00000000    ECC error correction data log high
    DDRC_CHE_UNCORR_ECC_LOG_REG          =  DDRC_ADDR + 0x000000DC, //   1    clronwr    0x00000000    ECC unrecoverable error status
    DDRC_CHE_UNCORR_ECC_ADDR_REG         =  DDRC_ADDR + 0x000000E0, //  31    ro         0x00000000    ECC unrecoverable error address
    DDRC_CHE_UNCORR_ECC_DATA_31_0_REG    =  DDRC_ADDR + 0x000000E4, //  32    ro         0x00000000    ECC unrecoverable error data low
    DDRC_CHE_UNCORR_ECC_DATA_63_32_REG   =  DDRC_ADDR + 0x000000E8, //  32    ro         0x00000000    ECC unrecoverable error data middle
    DDRC_CHE_UNCORR_ECC_DATA_71_64_REG   =  DDRC_ADDR + 0x000000EC, //   8    ro         0x00000000    ECC unrecoverable error data high
    DDRC_CHE_ECC_STATS_REG               =  DDRC_ADDR + 0x000000F0, //  16    clronwr    0x00000000    ECC error count
    DDRC_ECC_SCRUB_REG                   =  DDRC_ADDR + 0x000000F4, //   4    rw         0x00000008    ECC mode
    DDRC_CHE_ECC_CORR_BIT_MASK_31_0_REG  =  DDRC_ADDR + 0x000000F8, //  32    ro         0x00000000    ECC data mask low
    DDRC_CHE_ECC_CORR_BIT_MASK_63_32_REG =  DDRC_ADDR + 0x000000FC, //  32    ro         0x00000000    ECC data mask high
    DDRC_PHY_RCVR_ENABLE_REG             =  DDRC_ADDR + 0x00000114, //   8    rw         0x00000000    Phy receiver enable register
    DDRC_PHY_CONFIG0_REG                 =  DDRC_ADDR + 0x00000118, //  31    rw         0x40000001    PHY configuration register for data slice 0
    DDRC_PHY_CONFIG1_REG                 =  DDRC_ADDR + 0x0000011C, //  31    rw         0x40000001    PHY configuration register for data slice 1
    DDRC_PHY_CONFIG2_REG                 =  DDRC_ADDR + 0x00000120, //  31    rw         0x40000001    PHY configuration register for data slice 2
    DDRC_PHY_CONFIG3_REG                 =  DDRC_ADDR + 0x00000124, //  31    rw         0x40000001    PHY configuration register for data slice 3
    DDRC_PHY_INIT_RATIO0_REG             =  DDRC_ADDR + 0x0000012C, //  20    rw         0x00000000    PHY init ratio register for data slice 0
    DDRC_PHY_INIT_RATIO1_REG             =  DDRC_ADDR + 0x00000130, //  20    rw         0x00000000    PHY init ratio register for data slice 1
    DDRC_PHY_INIT_RATIO2_REG             =  DDRC_ADDR + 0x00000134, //  20    rw         0x00000000    PHY init ratio register for data slice 2
    DDRC_PHY_INIT_RATIO3_REG             =  DDRC_ADDR + 0x00000138, //  20    rw         0x00000000    PHY init ratio register for data slice 3
    DDRC_PHY_RD_DQS_CFG0_REG             =  DDRC_ADDR + 0x00000140, //  20    rw         0x00000040    PHY read DQS configuration register for data slice 0
    DDRC_PHY_RD_DQS_CFG1_REG             =  DDRC_ADDR + 0x00000144, //  20    rw         0x00000040    PHY read DQS configuration register for data slice 1
    DDRC_PHY_RD_DQS_CFG2_REG             =  DDRC_ADDR + 0x00000148, //  20    rw         0x00000040    PHY read DQS configuration register for data slice 2
    DDRC_PHY_RD_DQS_CFG3_REG             =  DDRC_ADDR + 0x0000014C, //  20    rw         0x00000040    PHY read DQS configuration register for data slice 3
    DDRC_PHY_WR_DQS_CFG0_REG             =  DDRC_ADDR + 0x00000154, //  20    rw         0x00000000    PHY write DQS configuration register for data slice 0
    DDRC_PHY_WR_DQS_CFG1_REG             =  DDRC_ADDR + 0x00000158, //  20    rw         0x00000000    PHY write DQS configuration register for data slice 1
    DDRC_PHY_WR_DQS_CFG2_REG             =  DDRC_ADDR + 0x0000015C, //  20    rw         0x00000000    PHY write DQS configuration register for data slice 2
    DDRC_PHY_WR_DQS_CFG3_REG             =  DDRC_ADDR + 0x00000160, //  20    rw         0x00000000    PHY write DQS configuration register for data slice 3
    DDRC_PHY_WE_CFG0_REG                 =  DDRC_ADDR + 0x00000168, //  21    rw         0x00000040    PHY FIFO write enable configuration for data slice 0
    DDRC_PHY_WE_CFG1_REG                 =  DDRC_ADDR + 0x0000016C, //  21    rw         0x00000040    PHY FIFO write enable configuration for data slice 1
    DDRC_PHY_WE_CFG2_REG                 =  DDRC_ADDR + 0x00000170, //  21    rw         0x00000040    PHY FIFO write enable configuration for data slice 2
    DDRC_PHY_WE_CFG3_REG                 =  DDRC_ADDR + 0x00000174, //  21    rw         0x00000040    PHY FIFO write enable configuration for data slice 3
    DDRC_WR_DATA_SLV0_REG                =  DDRC_ADDR + 0x0000017C, //  20    rw         0x00000080    PHY write data slave ratio config for data slice 0
    DDRC_WR_DATA_SLV1_REG                =  DDRC_ADDR + 0x00000180, //  20    rw         0x00000080    PHY write data slave ratio config for data slice 1
    DDRC_WR_DATA_SLV2_REG                =  DDRC_ADDR + 0x00000184, //  20    rw         0x00000080    PHY write data slave ratio config for data slice 2
    DDRC_WR_DATA_SLV3_REG                =  DDRC_ADDR + 0x00000188, //  20    rw         0x00000080    PHY write data slave ratio config for data slice 3
    DDRC_REG_64_REG                      =  DDRC_ADDR + 0x00000190, //  32    rw         0x10020000    Training control 2
    DDRC_REG_65_REG                      =  DDRC_ADDR + 0x00000194, //  20    rw         0x00000000    Training control 3
    DDRC_REG69_6A0_REG                   =  DDRC_ADDR + 0x000001A4, //  29    ro         0x00070000    Training results for data slice 0
    DDRC_REG69_6A1_REG                   =  DDRC_ADDR + 0x000001A8, //  29    ro         0x00060200    Training results for data slice 1
    DDRC_REG6C_6D2_REG                   =  DDRC_ADDR + 0x000001B0, //  28    ro         0x00040600    Training results for data slice 2
    DDRC_REG6C_6D3_REG                   =  DDRC_ADDR + 0x000001B4, //  28    ro         0x00000E00    Training results for data slice 3
    DDRC_REG6E_710_REG                   =  DDRC_ADDR + 0x000001B8, //  30    ro         x             Training results 
    DDRC_REG6E_711_REG                   =  DDRC_ADDR + 0x000001BC, //  30    ro         x             Training results 
    DDRC_REG6E_712_REG                   =  DDRC_ADDR + 0x000001C0, //  30    ro         x             Training results 
    DDRC_REG6E_713_REG                   =  DDRC_ADDR + 0x000001C4, //  30    ro         x             Training results 
    DDRC_PHY_DLL_STS0_REG                =  DDRC_ADDR + 0x000001CC, //  27    ro         0x00000000    Slave DLL results for data slice 0
    DDRC_PHY_DLL_STS1_REG                =  DDRC_ADDR + 0x000001D0, //  27    ro         0x00000000    Slave DLL results for data slice 1
    DDRC_PHY_DLL_STS2_REG                =  DDRC_ADDR + 0x000001D4, //  27    ro         0x00000000    Slave DLL results for data slice 2
    DDRC_PHY_DLL_STS3_REG                =  DDRC_ADDR + 0x000001D8, //  27    ro         0x00000000    Slave DLL results for data slice 3
    DDRC_DLL_LOCK_STS_REG                =  DDRC_ADDR + 0x000001E0, //  24    ro         0x00F00000    DLL Lock Status
    DDRC_PHY_CTRL_STS_REG                =  DDRC_ADDR + 0x000001E4, //  30    ro         x             PHY Control status
    DDRC_PHY_CTRL_STS_2_REG              =  DDRC_ADDR + 0x000001E8, //  27    ro         0x00000013    PHY Control status 
    DDRC_AXI_ID_REG                      =  DDRC_ADDR + 0x00000200, //  26    ro         0x00153042    ID and revision information
    DDRC_PAGE_MASK_REG                   =  DDRC_ADDR + 0x00000204, //  32    rw         0x00000000    Page mask
    DDRC_AXI_PRIORITY_WR_PORT0_REG       =  DDRC_ADDR + 0x00000208, //  20    mixed      0x000803FF    AXI Priority control for write port 0
    DDRC_AXI_PRIORITY_WR_PORT1_REG       =  DDRC_ADDR + 0x0000020C, //  20    mixed      0x000803FF    AXI Priority control for write port 1
    DDRC_AXI_PRIORITY_WR_PORT2_REG       =  DDRC_ADDR + 0x00000210, //  20    mixed      0x000803FF    AXI Priority control for write port 2
    DDRC_AXI_PRIORITY_WR_PORT3_REG       =  DDRC_ADDR + 0x00000214, //  20    mixed      0x000803FF    AXI Priority control for write port 3
    DDRC_AXI_PRIORITY_RD_PORT0_REG       =  DDRC_ADDR + 0x00000218, //  20    mixed      0x000003FF    AXI Priority control for read  port 0
    DDRC_AXI_PRIORITY_RD_PORT1_REG       =  DDRC_ADDR + 0x0000021C, //  20    mixed      0x000003FF    AXI Priority control for read  port 1
    DDRC_AXI_PRIORITY_RD_PORT2_REG       =  DDRC_ADDR + 0x00000220, //  20    mixed      0x000003FF    AXI Priority control for read  port 2
    DDRC_AXI_PRIORITY_RD_PORT3_REG       =  DDRC_ADDR + 0x00000224, //  20    mixed      0x000003FF    AXI Priority control for read  port 3
    DDRC_EXCL_ACCESS_CFG0_REG            =  DDRC_ADDR + 0x00000294, //  18    rw         0x00000000    Exclusive access configuration for port 0
    DDRC_EXCL_ACCESS_CFG1_REG            =  DDRC_ADDR + 0x00000298, //  18    rw         0x00000000    Exclusive access configuration for port 1
    DDRC_EXCL_ACCESS_CFG2_REG            =  DDRC_ADDR + 0x0000029C, //  18    rw         0x00000000    Exclusive access configuration for port 2
    DDRC_EXCL_ACCESS_CFG3_REG            =  DDRC_ADDR + 0x000002A0, //  18    rw         0x00000000    Exclusive access configuration for port 3
    DDRC_MODE_REG_READ_REG               =  DDRC_ADDR + 0x000002A4, //  32    ro         0x00000000    Mode register read data
    DDRC_LPDDR_CTRL0_REG                 =  DDRC_ADDR + 0x000002A8, //  12    rw         0x00000000    LPDDR2 Control 0
    DDRC_LPDDR_CTRL1_REG                 =  DDRC_ADDR + 0x000002AC, //  32    rw         0x00000000    LPDDR2 Control 1
    DDRC_LPDDR_CTRL2_REG                 =  DDRC_ADDR + 0x000002B0, //  22    rw         0x003C0015    LPDDR2 Control 2
    DDRC_LPDDR_CTRL3_REG                 =  DDRC_ADDR + 0x000002B4  //  18    rw         0x00000601    LPDDR2 Control 3
};
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (DDRC) CTRL
//
// Name                    DDRC_CTRL_REG
// Relative Address        0x00000000
// Absolute Address        0xF8006000
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000200
// Description             DDRC Control
//
// Register DDRC_CTRL_REG Details
//
enum TDDRC_CTRL_REG
{
// RESERVED                                                Properties: Bits: 31:17, Type: rw, Reset Value: 0x0

                                                        // Properties: Bit: 16, Type: rw, Reset Value: 0x0
    DDRC_CTRL_DIS_AUTO_REFRESH_MASK =  0x00010000UL,    // Disable auto-refresh.
    DDRC_CTRL_DIS_AUTO_REFRESH_BPOS =  16UL,            // 0: do not disable auto-refresh.
                                                        // 1: disable auto-refresh.
                                                        // Dynamic Bit Field.
                                                        // Note: When this transitions from 0 to 1, any
                                                        // pending refreshes will be immediately scheduled
                                                        // by the controller.

                                                        // Properties: Bit: 15, Type: rw, Reset Value: 0x0
    DDRC_CTRL_DIS_ACT_BYPASS_MASK   =  0x00008000UL,    // Only present in designs supporting activate
    DDRC_CTRL_DIS_ACT_BYPASS_BPOS   =  15UL,            // bypass. For Debug only.
                                                        // 0: Do not disable bypass path for high priority
                                                        // read activates.
                                                        // 1: disable bypass path for high priority read
                                                        // activates.

                                                        // Properties: Bit: 14, Type: rw, Reset Value: 0x0
    DDRC_CTRL_DIS_RD_BYPASS_MASK    =  0x00004000UL,    // Only present in designs supporting read bypass.
    DDRC_CTRL_DIS_RD_BYPASS_BPOS    =  14UL,            // For Debug only.
                                                        // 0: Do not disable bypass path for high priority
                                                        // read page hits.
                                                        // 1: disable bypass path for high priority read page
                                                        // hits.

                                                        // Properties: Bits: 13:7, Type: rw, Reset Value: 0x4
    DDRC_CTRL_RDWR_IDLE_GAP_MASK    =  0x00003F80UL,    // When the preferred transaction store is empty for
    DDRC_CTRL_RDWR_IDLE_GAP_BPOS    =  7UL,             // this many clock cycles, switch to the alternate
                                                        // transaction store if it is non-empty. The read
                                                        // transaction store (both high and low priority) is
                                                        // the default preferred transaction store and the
                                                        // write transaction store is the alternate store. When
                                                        // 'Prefer write over read' is set this is reversed.

                                                        // Properties: Bits: 6:4, Type: rw, Reset Value: 0x0
    DDRC_CTRL_BURST8_REFRESH_MASK   =  0x00000070UL,    // Refresh timeout. Programmed value plus one will
    DDRC_CTRL_BURST8_REFRESH_BPOS   =  4UL,             // be the number of refresh timeouts that will be
                                                        // allowed to accumulate before traffic is blocked
                                                        // and the refreshes are forced to execute. Closing
                                                        // pages to perform a refresh is a one-time penalty
                                                        // that must be paid for each group of refreshes;
                                                        // therefore, performing refreshes in a burst reduces
                                                        // the per-refresh penalty of these page closings.
                                                        // Higher numbers for burst_of_N_refresh slightly
                                                        // increases DRAM utilization; lower numbers
                                                        // decreases the worst-case latency associated with
                                                        // refreshes.
                                                        // 0: single refresh
                                                        // 1: burst-of-2
                                                        // ...
                                                        // 7: burst-of-8 refresh

                                                        // Properties: Bits: 3:2, Type: rw, Reset Value: 0x0
    DDRC_CTRL_DATA_BUS_WIDTH_MASK   =  0x0000000CUL,    // DDR bus width control
    DDRC_CTRL_DATA_BUS_WIDTH_BPOS   =  2UL,             // 00: 32-bit
                                                        // 01: 16-bit
                                                        // 1x: reserved

                                                        // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    DDRC_CTRL_POWERDOWN_EN_MASK     =  0x00000002UL,    // Controller power down control. Update during
    DDRC_CTRL_POWERDOWN_EN_BPOS     =  1UL,             // normal operation. Enable the controller to
                                                        // powerdown after it becomes idle.
                                                        // Dynamic Bit Field.
                                                        // 0: disable
                                                        // 1: enable

                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    DDRC_CTRL_SOFT_RSTB_MASK        =  0x00000001UL,    // Active low soft reset. Update during normal
    DDRC_CTRL_SOFT_RSTB_BPOS        =  0UL              // operation.
                                                        // 0: Resets the controller
                                                        // 1: Takes the controller out of reset.
                                                        // Dynamic Bit Field.
                                                        // Note: Software changes DRAM controller register
                                                        // values only when the controller is in the reset
                                                        // state, except for bit fields that can be dymanically
                                                        // updated.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) TWO_RANK_CFG
//
// Name                     DDRC_TWO_RANK_CFG_REG
// Relative Address         0x00000004
// Absolute Address         0xF8006004
// Width                    29 bits
// Access Type              rw
// Reset Value             0x000C1076
// Description             Two Rank Configuration
//
// Register DDRC_TWO_RANK_CFG_REG Details
//         Most of this register only applies to a dual rank DRAM system
//
enum TDDRC_TWO_RANK_CFG_REG
{
// RESERVED                                          Properties: Bit: 28, Type: rw, Reset Value: 0x0

// RESERVED                                          Properties: Bit: 27, Type: rw, Reset Value: 0x0

// RESERVED                                          Properties: Bits: 26:22, Type: rw, Reset Value: 0x0

// RESERVED                                          Properties: Bit: 21, Type: rw, Reset Value: 0x0

// RESERVED                                          Properties: Bits: 20:19, Type: rw, Reset Value: 0x1

                                                  // Properties: Bits: 18:14, Type: rw, Reset Value: 0x10
    DDRC_ADDRMAP_CS_BIT0_MASK =  0x0007C000UL,    // Must be manually set to 0x0
    DDRC_ADDRMAP_CS_BIT0_BPOS =  14UL,            // 

// RESERVED                                          Properties: Bits: 13:12, Type: rw, Reset Value: 0x1

                                                  // Properties: Bits: 11:0, Type: rw, Reset Value: 0x76
    DDRC_T_RFC_NOM_X32_MASK   =  0x00000FFFUL,    // tREFI - Average time between refreshes. Unit: in
    DDRC_T_RFC_NOM_X32_BPOS   =  0UL              // multiples of 32 clocks.
                                                  // DRAM related. Default value is set for DDR3.
                                                  // Dynamic Bit Field.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) HPR
//
// Name                    DDRC_HPR_REG
// Relative Address        0x00000008
// Absolute Address        0xF8006008
// Width                   26 bits
// Access Type             rw
// Reset Value             0x03C0780F
// Description             HPR Queue control
//
// Register DDRC_HPR_REG Details
//
enum TDDRC_HPR_REG
{
                                                           // Properties: Bits: 25:22, Type: rw, Reset Value: 0xF
    DDRC_HPR_XACT_RUN_LENGTH_MASK      =  0x03C00000UL,    // Number of transactions that will be serviced once
    DDRC_HPR_XACT_RUN_LENGTH_BPOS      =  22UL,            // the HPR queue goes critical is the smaller of this
                                                           // number and the number of transactions available.

                                                           // Properties: Bits: 21:11, Type: rw, Reset Value: 0xF
    DDRC_HPR_MAX_STARVE_X32_MASK       =  0x003FF800UL,    // Number of clocks that the HPR queue can be
    DDRC_HPR_MAX_STARVE_X32_BPOS       =  11UL,            // starved before it goes critical. Unit: 32 clocks

                                                           // Properties: Bits: 10:0, Type: rw, Reset Value: 0xF
    DDRC_HPR_MIN_NON_CRITICAL_X32_MASK =  0x000007FFUL,    // Number of counts that the HPR queue is
    DDRC_HPR_MIN_NON_CRITICAL_X32_BPOS =  0UL              // guaranteed to be non-critical (1 count = 32 DDR
                                                           // clocks).

};

//------------------------------------------------------------------------------
//
// Register (DDRC) LPR
//
// Name                    DDRC_LPR_REG
// Relative Address        0x0000000C
// Absolute Address        0xF800600C
// Width                   26 bits
// Access Type             rw
// Reset Value             0x03C0780F
// Description             LPR Queue control
//
// Register DDRC_LPR_REG Details
//
enum TDDRC_LPR_REG
{
                                                           // Properties: Bits: 25:22, Type: rw, Reset Value: 0xF
    DDRC_LPR_XACT_RUN_LENGTH_MASK      =  0x03C00000UL,    // Number of transactions that will be serviced once
    DDRC_LPR_XACT_RUN_LENGTH_BPOS      =  22UL,            // the LPR queue goes critical is the smaller of this
                                                           // number and the number of transactions available

                                                           // Properties: Bits: 21:11, Type: rw, Reset Value: 0xF
    DDRC_LPR_MAX_STARVE_X32_MASK       =  0x003FF800UL,    // Number of clocks that the LPR queue can be
    DDRC_LPR_MAX_STARVE_X32_BPOS       =  11UL,            // starved before it goes critical. Unit: 32 clocks

                                                           // Properties: Bits: 10:0, Type: rw, Reset Value: 0xF
    DDRC_LPR_MIN_NON_CRITICAL_X32_MASK =  0x000007FFUL,    // Number of clocks that the LPR queue is
    DDRC_LPR_MIN_NON_CRITICAL_X32_BPOS =  0UL              // guaranteed to be non-critical. Unit: 32 clocks

};

//------------------------------------------------------------------------------
//
// Register (DDRC) WR
//
// Name                    DDRC_WR_REG
// Relative Address        0x00000010
// Absolute Address        0xF8006010
// Width                   26 bits
// Access Type             rw
// Reset Value             0x0007F80F
// Description             WR Queue control
//
// Register DDRC_WR_REG Details
//
enum TDDRC_WR_REG
{
                                                         // Properties: Bits: 25:15, Type: rw, Reset Value: 0xF
    DDRC_W_MAX_STARVE_X32_MASK       =  0x03FF8000UL,    // Number of clocks that the Write queue can be
    DDRC_W_MAX_STARVE_X32_BPOS       =  15UL,            // starved before it goes critical. Unit: 32 clocks. FOR
                                                         // PERFORMANCE ONLY.

                                                         // Properties: Bits: 14:11, Type: rw, Reset Value: 0xF
    DDRC_W_XACT_RUN_LENGTH_MASK      =  0x00007800UL,    // Number of transactions that will be serviced once
    DDRC_W_XACT_RUN_LENGTH_BPOS      =  11UL,            // the WR queue goes critical is the smaller of this
                                                         // number and the number of transactions available

                                                         // Properties: Bits: 10:0, Type: rw, Reset Value: 0xF
    DDRC_W_MIN_NON_CRITICAL_X32_MASK =  0x000007FFUL,    // Number of clock cycles that the WR queue is
    DDRC_W_MIN_NON_CRITICAL_X32_BPOS =  0UL              // guaranteed to be non-critical.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_PARAM0
//
// Name                     DDRC_DRAM_PARAM0_REG
// Relative Address         0x00000014
// Absolute Address         0xF8006014
// Width                    21 bits
// Access Type              rw
// Reset Value              0x00041016
// Description              DRAM Parameters 0
//
// Register DDRC_DRAM_PARAM0_REG Details
//
enum TDDRC_DRAM_PARAM0_REG
{
                                                       // Properties: Bits: 20:14, Type: rw, Reset Value: 0x10
    DDRC_POST_SELFREF_GAP_X32_MASK =  0x001FC000UL,    // Minimum time to wait after coming out of self
    DDRC_POST_SELFREF_GAP_X32_BPOS =  14UL,            // refresh before doing anything. This must be
                                                       // bigger than all the constraints that exist. (spec:
                                                       // Maximum of tXSNR and tXSRD and tXSDLL
                                                       // which is 512 clocks). Unit: in multiples of 32
                                                       // clocks. DRAM Related

                                                       // Properties: Bits: 13:6, Type: rw, Reset Value: 0x40
    DDRC_T_RFC_MIN_MASK            =  0x00003FC0UL,    // tRFC(min) - Minimum time (units = clk cycles)
    DDRC_T_RFC_MIN_BPOS            =  6UL,             // from refresh to refresh or activate. DRAM
                                                       // Related. Default value is set for DDR3.
                                                       // Dynamic Bit Field.

                                                       // Properties: Bits: 5:0, Type: rw, Reset Value: 0x16
    DDRC_T_RC_MASK                 =  0x0000003FUL,    // tRC - Min time between activates to same bank.
    DDRC_T_RC_BPOS                 =  0UL              // DRAM Related. Default value is set for DDR3.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_PARAM1
//
// Name                     DDRC_DRAM_PARAM1_REG
// Relative Address         0x00000018
// Absolute Address         0xF8006018
// Width                    32 bits
// Access Type              rw
// Reset Value              0x351B48D9
// Description              DRAM Parameters 1
//
// Register DDRC_DRAM_PARAM1_REG Details
//
enum TDDRC_DRAM_PARAM1_REG
{
                                                   // Properties: Bits: 31:28, Type: rw, Reset Value: 0x3
    DDRC_T_CKE_MASK            =  0xF0000000UL,    // Minimum number of cycles of CKE HIGH/LOW
    DDRC_T_CKE_BPOS            =  28UL,            // during power down and self refresh.
                                                   // DDR2 and DDR3: Set this to tCKE value.
                                                   // LPDDR2: Set this to the larger of tCKE or tCKESR.
                                                   // Unit: clocks.

                                                   // Properties: Bits: 26:22, Type: rw, Reset Value: 0x14
    DDRC_T_RAS_MIN_MASK        =  0x07C00000UL,    // tRAS(min) - Minimum time between activate and
    DDRC_T_RAS_MIN_BPOS        =  22UL,            // precharge to the same bank.
                                                   // Unit: clocks
                                                   // DRAM related.
                                                   // Default value is set for DDR3.

                                                   // Properties: Bits: 21:16, Type: rw, Reset Value: 0x1B
    DDRC_T_RAS_MAX_MASK        =  0x003F0000UL,    // tRAS(max) - Maximum time between activate and
    DDRC_T_RAS_MAX_BPOS        =  16UL,            // precharge to same bank. Maximum time that a
                                                   // page can be kept open (spec is 70 us). If this is zero
                                                   // then the page is closed after each transaction.
                                                   // Unit: Multiples of 1024 clocks
                                                   // DRAM related.

                                                   // Properties: Bits: 15:10, Type: rw, Reset Value: 0x12
    DDRC_T_FAW_MASK            =  0x0000FC00UL,    // tFAW - At most 4 banks must be activated in a
    DDRC_T_FAW_BPOS            =  10UL,            // rolling window of tFAW cycles. Unit: clocks.
                                                   // DRAM Related.

                                                   // Properties: Bits: 9:5, Type: rw, Reset Value: 0x6
    DDRC_POWERDOWN_TO_X32_MASK =  0x000003E0UL,    // After this many clocks of NOP or DESELECT the
    DDRC_POWERDOWN_TO_X32_BPOS =  5UL,             // controller will put the DRAM into power down.
                                                   // This must be enabled in the Master Control
                                                   // Register. Unit: Multiples of 32 clocks.

                                                   // Properties: Bits: 4:0, Type: rw, Reset Value: 0x19
    DDRC_WR2PRE_MASK           =  0x0000001FUL,    // Minimum time between write and precharge to
    DDRC_WR2PRE_BPOS           =  0UL              // same bank
                                                   // DDR and DDR3: WL + BL/2 + tWR
                                                   // LPDDR2: WL + BL/2 + tWR + 1
                                                   // Unit: Clocks
                                                   // Where,
                                                   // WL: write latency.
                                                   // BL: burst length. This must match the value
                                                   // programmed in the BL bit of the mode register to
                                                   // the DRAM. BST is not supported at present.
                                                   // tWR: write recovery time. This comes directly
                                                   // from the DRAM specs.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_PARAM2
//
// Name                    DDRC_DRAM_PARAM2_REG
// Relative Address        0x0000001C
// Absolute Address        0xF800601C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x83015904
// Description             DRAM Parameters 2
//
// Register DDRC_DRAM_PARAM2_REG Details
//
enum TDDRC_DRAM_PARAM2_REG
{
                                                // Properties: Bits: 31:28, Type: rw, Reset Value: 0x8
    DDRC_T_RCD_MASK         =  0xF0000000UL,    // tRCD - AL Minimum time from activate to read or
    DDRC_T_RCD_BPOS         =  28UL,            // write command to same bank. Min value for this
                                                // is 1. AL = Additive Latency. DRAM Related.

                                                // Properties: Bits: 27:23, Type: rw, Reset Value: 0x6
    DDRC_RD2PRE_MASK        =  0x0F800000UL,    // Minimum time from read to precharge of same
    DDRC_RD2PRE_BPOS        =  23UL,            // bank
                                                // DDR2: AL + BL/2 + max(tRTP, 2) - 2
                                                // DDR3: AL + max (tRTP, 4)
                                                // LPDDR2: BL/2 + tRTP - 1
                                                // AL: Additive Latency; BL: DRAM Burst Length;
                                                // tRTP: value from spec. DRAM related.

                                                // Properties: Bits: 22:20, Type: rw, Reset Value: 0x0
    DDRC_PAD_PD_MASK        =  0x00700000UL,    // If pads have a power-saving mode, this is the
    DDRC_PAD_PD_BPOS        =  20UL,            // greater of the time for the pads to enter power
                                                // down or the time for the pads to exit power down.
                                                // Used only in non-DFI designs.
                                                // Unit: clocks.

                                                // Properties: Bits: 19:15, Type: rw, Reset Value: 0x2
    DDRC_T_XP_MASK          =  0x000F8000UL,    // tXP: Minimum time after power down exit to any
    DDRC_T_XP_BPOS          =  15UL,            // operation. DRAM related.

                                                // Properties: Bits: 14:10, Type: rw, Reset Value: 0x16
    DDRC_WR2RD_MASK         =  0x00007C00UL,    // Minimum time from write command to read
    DDRC_WR2RD_BPOS         =  10UL,            // command. Includes time for bus turnaround and
                                                // recovery times and all per-bank, per-rank, and
                                                // global constraints.
                                                // DDR2 and DDR3: WL + tWTR + BL/2
                                                // LPDDR2: WL + tWTR + BL/2 + 1
                                                // Unit: clocks.
                                                // Where, WL: Write latency. BL: burst length.
                                                // This must match the value programmed in the BL
                                                // bit of the mode register to the DRAM.
                                                // tWTR: internal WRITE to READ command delay.
                                                // This comes directly from the DRAM specs.

                                                // Properties: Bits: 9:5, Type: rw, Reset Value: 0x8
    DDRC_RD2WR_MASK         =  0x000003E0UL,    // Minimum time from read command to write
    DDRC_RD2WR_BPOS         =  5UL,             // command. Include time for bus turnaround and
                                                // all per-bank, per-rank, and global constraints.
                                                // DDR2 and DDR3:
                                                // RL + BL/2 + 2 - WL
                                                // LPDDR2: RL + BL/2 + RU (tDQSCKmax / tCK) +
                                                // 1 - WL
                                                // Write Pre-amble and DQ/DQS jitter timer is
                                                // included in the above equation.
                                                // DRAM RELATED.

                                                // Properties: Bits: 4:0, Type: rw, Reset Value: 0x4
    DDRC_WRITE_LATENCY_MASK =  0x0000001FUL,    // Time from write command to write data on
    DDRC_WRITE_LATENCY_BPOS =  0UL              // DDRC to PHY Interface. (PHY adds an extra flop
                                                // delay on the write data path; hence this value is
                                                // one less than the write latency of the DRAM
                                                // device itself).
                                                // DDR2 and DDR3: WL -1
                                                // LPDDR2: WL
                                                // Where, WL: Write Latency of DRAM
                                                // DRAM related.
                                                // In non-LPDDR mode, the minimum DRAM Write
                                                // Latency (DDR2) supported is 3.
                                                // In LPDDR mode, the required DRAM Write
                                                // Latency of 1 is supported.
                                                // Since write latency (CWL) min is 3, and DDR2
                                                // CWL is CL-1, the min (DDR2) CL supported is 4

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_PARAM3
//
// Name                    DDRC_DRAM_PARAM3_REG
// Relative Address        0x00000020
// Absolute Address        0xF8006020
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x250882D0
// Description             DRAM Parameters 3
//
// Register DDRC_DRAM_PARAM3_REG Details
//
enum TDDRC_DRAM_PARAM3_REG
{
// RESERVED                                                  Properties: Bit: 31, Type: rw, Reset Value: 0x0

                                                          // Properties: Bit: 30, Type: rw, Reset Value: 0x0
    DDRC_DIS_PAD_PD_MASK              =  0x40000000UL,    // 1: disable the pad power down feature
    DDRC_DIS_PAD_PD_BPOS              =  30UL,            // 0: Enable the pad power down feature.

                                                          // Properties: Bit: 29, Type: rw, Reset Value: 0x1
    DDRC_REG_PHY_MODE_DDR1_DDR2_MASK  =  0x20000000UL,    // unused
    DDRC_REG_PHY_MODE_DDR1_DDR2_BPOS  =  29UL,            // 

                                                          // Properties: Bits: 28:24, Type: rw, Reset Value: 0x5
    DDRC_READ_LATENCY_MASK            =  0x1F000000UL,    // Non-LPDDR2: not used.
    DDRC_READ_LATENCY_BPOS            =  24UL,            // DDR2 and DDR3: Set to Read Latency, RL. Time
                                                          // from Read command to Read data on DRAM
                                                          // interface. It is used to calculate when DRAM clock
                                                          // may be stopped.
                                                          // Unit: DDR clock.

                                                          // Properties: Bit: 23, Type: rw, Reset Value: 0x0
    DDRC_EN_DFI_DRAM_CLK_DISABLE_MASK =  0x00800000UL,    // Enables the assertion of
    DDRC_EN_DFI_DRAM_CLK_DISABLE_BPOS =  23UL,            // ddrc_dfi_dram_clk_disable.
                                                          // In DDR2/DDR3, only asserted in Self Refresh.
                                                          // In mDDR/LPDDR2, can be asserted in following:
                                                          // - during normal operation (Clock Stop),
                                                          // - in Power Down
                                                          // - in Self Refresh
                                                          // - In Deep Power Down

                                                          // Properties: Bit: 22, Type: rw, Reset Value: 0x0
    DDRC_MOBILE_MASK                  =  0x00400000UL,    // 0: DDR2 or DDR3 device.
    DDRC_MOBILE_BPOS                  =  22UL,            // 1: LPDDR2 device.

                                                          // Properties: Bit: 21, Type: rw, Reset Value: 0x0
    DDRC_SDRAM_MASK                   =  0x00200000UL,    // 1: sdram device
    DDRC_SDRAM_BPOS                   =  21UL,            // 0: non-sdram device
                                                          // Must be set to '1'.

                                                          // Properties: Bits: 20:16, Type: rw, Reset Value: 0x8
    DDRC_REFRESH_TO_X32_MASK          =  0x001F0000UL,    // If the refresh timer (tRFC_nom, as known as
    DDRC_REFRESH_TO_X32_BPOS          =  16UL,            // tREFI) has expired at least once, but it has not
                                                          // expired burst_of_N_refresh times yet, then a
                                                          // 'speculative refresh' may be performed. A
                                                          // speculative refresh is a refresh performed at a
                                                          // time when refresh would be useful, but before it is
                                                          // absolutely required. When the DRAM bus is idle
                                                          // for a period of time determined by this refresh
                                                          // idle timeout and the refresh timer has expired at
                                                          // least once since the last refresh, then a 'speculative
                                                          // refresh' will be performed. Speculative refreshes
                                                          // will continue successively until there are no
                                                          // refreshes pending or until new reads or writes are
                                                          // issued to the controller.
                                                          // Dynamic Bit Field.

                                                          // Properties: Bits: 15:12, Type: rw, Reset Value: 0x8
    DDRC_T_RP_MASK                    =  0x0000F000UL,    // tRP - Minimum time from precharge to activate of
    DDRC_T_RP_BPOS                    =  12UL,            // same bank.
                                                          // DRAM RELATED

                                                          // Properties: Bits: 11:8, Type: rw, Reset Value: 0x2
    DDRC_REFRESH_MARGIN_MASK          =  0x00000F00UL,    // Issue critical refresh or page close this many
    DDRC_REFRESH_MARGIN_BPOS          =  8UL,             // cycles before the critical refresh or page timer
                                                          // expires. It is recommended that this not be
                                                          // changed from the default value.

                                                          // Properties: Bits: 7:5, Type: rw, Reset Value: 0x6
    DDRC_T_RRD_MASK                   =  0x000000E0UL,    // tRRD - Minimum time between activates from
    DDRC_T_RRD_BPOS                   =  5UL,             // bank A to bank B. (spec: 10ns or less)
                                                          // DRAM RELATED

                                                          // Properties: Bits: 4:2, Type: rw, Reset Value: 0x4
    DDRC_T_CCD_MASK                   =  0x0000001CUL,    // tCCD - Minimum time between two reads or two
    DDRC_T_CCD_BPOS                   =  2UL,             // writes (from bank a to bank b). DRAM related.

// RESERVED                                                  Properties: Bits: 1:0, Type: ro, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_PARAM4
//
// Name                    DDRC_DRAM_PARAM4_REG
// Relative Address        0x00000024
// Absolute Address        0xF8006024
// Width                   28 bits
// Access Type             mixed
// Reset Value             0x0000003C
// Description             DRAM Parameters 4
//
// Register DDRC_DRAM_PARAM4_REG Details
//
enum TDDRC_DRAM_PARAM4_REG
{
                                                    // Properties: Bit: 27, Type: clronrd, Reset Value: 0x0
    DDRC_MR_RDATA_VALID_MASK    =  0x08000000UL,    // This bit indicates whether the Mode Register
    DDRC_MR_RDATA_VALID_BPOS    =  27UL,            // Read Data present at address 0xA9 is valid or not.
                                                    // This bit is 0 by default. This bit will be cleared (0),
                                                    // whenever a Mode Register Read command is
                                                    // issued. This bit will be set to 1, when the Mode
                                                    // Register Read Data is written to register 0xA9.

                                                    // Properties: Bit: 26, Type: rw, Reset Value: 0x0
    DDRC_MR_TYPE_MASK           =  0x04000000UL,    // Indicates whether the Mode register operation is
    DDRC_MR_TYPE_BPOS           =  26UL,            // read or write
                                                    // 0: write
                                                    // 1: read

                                                    // Properties: Bit: 25, Type: ro, Reset Value: 0x0
    DDRC_MR_WR_BUSY_MASK        =  0x02000000UL,    // Core must initiate a MR write / read operation
    DDRC_MR_WR_BUSY_BPOS        =  25UL,            // only if this signal is low. This signal goes high in
                                                    // the clock after the controller accepts the write /
                                                    // read request. It goes low when (i) MR write
                                                    // command has been issued to the DRAM (ii) MR
                                                    // Read data has been returned to Controller. Any
                                                    // MR write / read command that is received when
                                                    // 'ddrc_reg_mr_wr_busy' is high is not accepted.
                                                    // 0: Indicates that the core can initiate a mode
                                                    // register write / read operation.
                                                    // 1: Indicates that mode register write / read
                                                    // operation is in progress.

                                                    // Properties: Bits: 24:9, Type: rw, Reset Value: 0x0
    DDRC_MR_DATA_MASK           =  0x01FFFE00UL,    // DDR2 and DDR3: Mode register write data.
    DDRC_MR_DATA_BPOS           =  9UL,             // LPDDR2: The 16 bits are interpreted for reads and
                                                    // writes:
                                                    // Reads: MR Addr[7:0], Don't Care[7:0].
                                                    // Writes: MR Addr[7:0], MR Data[7:0].

                                                    // Properties: Bits: 8:7, Type: rw, Reset Value: 0x0
    DDRC_MR_ADDR_MASK           =  0x00000180UL,    // DDR2 and DDR3: Mode register address.
    DDRC_MR_ADDR_BPOS           =  7UL,             // LPDDR2: not used.
                                                    // 00: MR0
                                                    // 01: MR1
                                                    // 10: MR2
                                                    // 11: MR3

                                                    // Properties: Bit: 6, Type: wo, Reset Value: 0x0
    DDRC_MR_WR_MASK             =  0x00000040UL,    // A low to high signal on this signal will do a mode
    DDRC_MR_WR_BPOS             =  6UL,             // register write or read. Controller will accept this
                                                    // command, if this signal is detected high and
                                                    // "ddrc_reg_mr_wr_busy" is detected low.

// RESERVED                                            Properties: Bits: 5:2, Type: rw, Reset Value: 0xF

                                                    // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    DDRC_PREFER_WRITE_MASK      =  0x00000002UL,    // 0: Bank selector prefers reads over writes
    DDRC_PREFER_WRITE_BPOS      =  1UL,             // 1: Bank selector prefers writes over reads

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    DDRC_EN_2T_TIMING_MODE_MASK =  0x00000001UL,    // 1: DDRC will use 2T timing
    DDRC_EN_2T_TIMING_MODE_BPOS =  0UL              // 0: DDRC will use 1T timing

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_INIT_PARAM
//
// Name                    DDRC_DRAM_INIT_PARAM_REG
// Relative Address        0x00000028
// Absolute Address        0xF8006028
// Width                   14 bits
// Access Type             rw
// Reset Value             0x00002007
// Description             DRAM Initialization Parameters
//
// Register DDRC_DRAM_INIT_PARAM_REG Details
//
enum TDDRC_DRAM_INIT_PARAM_REG
{
                                                 // Properties: Bits: 13:11, Type: rw, Reset Value: 0x4
    DDRC_T_MRD_MASK          =  0x00003800UL,    // tMRD - Cycles between Load Mode commands.
    DDRC_T_MRD_BPOS          =  11UL,            // DRAM related. Default value is set for DDR3.

                                                 // Properties: Bits: 10:7, Type: rw, Reset Value: 0x0
    DDRC_PRE_OCD_X32_MASK    =  0x00000780UL,    // Wait period before driving the 'OCD Complete'
    DDRC_PRE_OCD_X32_BPOS    =  7UL,             // command to DRAM. Units are in counts of a
                                                 // global timer that pulses every 32 clock cycles.
                                                 // There is no known spec requirement for this. It
                                                 // may be set to zero.

                                                 // Properties: Bits: 6:0, Type: rw, Reset Value: 0x7
    DDRC_FINAL_WAIT_X32_MASK =  0x0000007FUL,    // Cycles to wait after completing the DRAM init
    DDRC_FINAL_WAIT_X32_BPOS =  0UL              // sequence
                                                 // before starting the dynamic scheduler. Units are
                                                 // in counts of a global timer that pulses every 32
                                                 // clock cycles. Default value is set for DDR3.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_EMR
//
// Name                    DDRC_DRAM_EMR_REG
// Relative Address        0x0000002C
// Absolute Address        0xF800602C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000008
// Description             DRAM EMR2, EMR3 access
//
// Register DDRC_DRAM_EMR_REG Details
//
enum TDDRC_DRAM_EMR_REG
{
                                       // Properties: Bits: 31:16, Type: rw, Reset Value: 0x0
    DDRC_EMR3_MASK =  0xFFFF0000UL,    // DDR2: Value loaded into EMR3 register
    DDRC_EMR3_BPOS =  16UL,            // DDR3: Value loaded into
                                       // MR3 register. Set Bit[2:0] to 3'b000. These bits are
                                       // set appropriately by the Controller during Read
                                       // Data eye training and Read DQS gate leveling.
                                       // LPDDR2: Unused

                                       // Properties: Bits: 15:0, Type: rw, Reset Value: 0x8
    DDRC_EMR2_MASK =  0x0000FFFFUL,    // DDR2: Value loaded into EMR2 register
    DDRC_EMR2_BPOS =  0UL              // DDR3: Value loaded into
                                       // MR2 register
                                       // LPDDR2: Value loaded into
                                       // MR3 register

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_EMR_MR
//
// Name                    DDRC_DRAM_EMR_MR_REG
// Relative Address        0x00000030
// Absolute Address        0xF8006030
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000940
// Description             DRAM EMR, MR access
//
// Register DDRC_DRAM_EMR_MR_REG Details
//
enum TDDRC_DRAM_EMR_MR_REG
{
                                      // Properties: Bits: 31:16, Type: rw, Reset Value: 0x0
    DDRC_EMR_MASK =  0xFFFF0000UL,    // DDR2: Value loaded into EMR1 register. (Bits[9:7]
    DDRC_EMR_BPOS =  16UL,            // are for OCD and the setting in this reg is ignored.
                                      // Controller sets this bits appropriately during
                                      // initialization
                                      // DDR3: Value loaded into
                                      // MR1 register. Set Bit[7] to 0. This bit is set
                                      // appropriately by the Controller during Write
                                      // Leveling
                                      // LPDDR2: Value loaded into
                                      // MR2 register

                                      // Properties: Bits: 15:0, Type: rw, Reset Value: 0x940
    DDRC_MR_MASK  =  0x0000FFFFUL,    // DDR2: Value loaded into MR register. (Bit[8] is for
    DDRC_MR_BPOS  =  0UL              // DLL and the setting here is ignored. Controller
                                      // sets this bit appropriately
                                      // DDR3: Value loaded into MR0 register.
                                      // LPDDR2: Value loaded into
                                      // MR1 register

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_BURST8_RDWR
//
// Name                    DDRC_DRAM_BURST8_RDWR_REG
// Relative Address        0x00000034
// Absolute Address        0xF8006034
// Width                   29 bits
// Access Type             mixed
// Reset Value             0x00020034
// Description             DRAM Burst 8 read/write
//
// Register DDRC_DRAM_BURST8_RDWR_REG Details
//
enum TDDRC_DRAM_BURST8_RDWR_REG
{
                                                 // Properties: Bit: 28, Type: rw, Reset Value: 0x0
    DDRC_BURSTCHOP_MASK      =  0x10000000UL,    // Feature not supported. When 1, Controller is out
    DDRC_BURSTCHOP_BPOS      =  28UL,            // in burstchop mode.

// RESERVED                                         Properties: Bits: 27:26, Type: ro, Reset Value: 0x0

                                                 // Properties: Bits: 25:16, Type: rw, Reset Value: 0x2
    DDRC_POST_CKE_X1024_MASK =  0x03FF0000UL,    // Clock cycles to wait after driving CKE high to
    DDRC_POST_CKE_X1024_BPOS =  16UL,            // start the DRAM initialization sequence.
                                                 // Units: 1024 clocks.
                                                 // DDR2 typically require a 400 ns delay, requiring
                                                 // this value to be programmed to 2 at all clock
                                                 // speeds. LPDDR2 - Typically require this to be
                                                 // programmed for a delay of 200 us.

// RESERVED                                         Properties: Bits: 15:14, Type: ro, Reset Value: 0x0

                                                 // Properties: Bits: 13:4, Type: rw, Reset Value: 0x3
    DDRC_PRE_CKE_X1024_MASK  =  0x00003FF0UL,    // Clock cycles to wait after a DDR software reset
    DDRC_PRE_CKE_X1024_BPOS  =  4UL,             // before driving CKE high to start the DRAM
                                                 // initialization sequence.
                                                 // Units: 1024 clock cycles.
                                                 // DDR2 Specifications typically require this to be
                                                 // programmed for a delay of >= 200 uS.
                                                 // LPDDR2 - tINIT0 of 20 mS (max) + tINIT1 of 100
                                                 // nS (min)

                                                 // Properties: Bits: 3:0, Type: rw, Reset Value: 0x4
    DDRC_BURST_RDWR_MASK     =  0x0000000FUL,    // Controls the burst size used to access the DRAM.
    DDRC_BURST_RDWR_BPOS     =  0UL              // This must match the BL mode register setting in
                                                 // the DRAM.
                                                 // 0010: Burst length of 4
                                                 // 0100: Burst length of 8
                                                 // 1000: Burst length of 16 (LPDDR2 with 16-bit
                                                 // data)
                                                 // All other values are reserved

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_DISABLE_DQ
//
// Name                    DDRC_DRAM_DISABLE_DQ_REG
// Relative Address        0x00000038
// Absolute Address        0xF8006038
// Width                   13 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DRAM Disable DQ
//
// Register DDRC_DRAM_DISABLE_DQ_REG Details
//
enum TDDRC_DRAM_DISABLE_DQ_REG
{
// RESERVED                                          Properties: Bits: 12:9, Type: rw, Reset Value: 0x0

// RESERVED                                          Properties: Bit: 8, Type: rw, Reset Value: 0x0

// RESERVED                                          Properties: Bit: 7, Type: rw, Reset Value: 0x0

// RESERVED                                          Properties: Bit: 6, Type: rw, Reset Value: 0x0

// RESERVED                                          Properties: Bits: 5:2, Type: ro, Reset Value: 0x0

                                                  // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    DDRC_DIS_DQ_MASK          =  0x00000002UL,    // When 1, DDRC will not de-queue any
    DDRC_DIS_DQ_BPOS          =  1UL,             // transactions from the CAM. Bypass will also be
                                                  // disabled. All transactions will be queued in the
                                                  // CAM. This is for debug only; no reads or writes
                                                  // are issued to DRAM as long as this is asserted.
                                                  // Dynamic Bit Field.

                                                  // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    DDRC_FORCE_LOW_PRI_N_MASK =  0x00000001UL,    // Read Transaction Priority disable.
    DDRC_FORCE_LOW_PRI_N_BPOS =  0UL              // 0: read transactions forced to low priority (turns
                                                  // off Bypass).
                                                  // 1: HPR reads allowed if enabled in the AXI
                                                  // priority read registers.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_ADDR_MAP_BANK
//
// Name                     DDRC_DRAM_ADDR_MAP_BANK_REG
// Relative Address         0x0000003C
// Absolute Address         0xF800603C
// Width                    20 bits
// Access Type              rw
// Reset Value              0x00000F77
// Description              Row/Column address bits
//
// Register DDRC_DRAM_ADDR_MAP_BANK_REG Details
//         Note: address bits are relative to a byte address. For example, the value 0x777 in bits[11:0] selects byte
//         address bits [14:12] as bank address bits.
//
enum TDDRC_DRAM_ADDR_MAP_BANK_REG
{
                                                  // Properties: Bits: 19:16, Type: rw, Reset Value: 0x0
    DDRC_ADDRMAP_COL_B6_MASK  =  0x000F0000UL,    // Full bus width mode: Selects the address bits used
    DDRC_ADDRMAP_COL_B6_BPOS  =  16UL,            // as column address bits 7.
                                                  // Half bus width mode:
                                                  // Selects the address bits used as column address
                                                  // bits 8. Valid range is 0-7. Internal Base 9. The
                                                  // selected address bit for each of the column
                                                  // address bits is determined by adding the Internal
                                                  // Base to the value of this field.

                                                  // Properties: Bits: 15:12, Type: rw, Reset Value: 0x0
    DDRC_ADDRMAP_COL_B5_MASK  =  0x0000F000UL,    // Full bus width mode: Selects the address bits used
    DDRC_ADDRMAP_COL_B5_BPOS  =  12UL,            // as column address bits 6.
                                                  // Half bus width mode:
                                                  // Selects the address bits used as column address
                                                  // bits 7. Valid range is 0-7. Internal Base 8. The
                                                  // selected address bit for each of the column
                                                  // address bits is determined by adding the Internal
                                                  // Base to the value of this field.

                                                  // Properties: Bits: 11:8, Type: rw, Reset Value: 0xF
    DDRC_ADDRMAP_BANK_B2_MASK =  0x00000F00UL,    // Selects the AXI address bit used as bank address
    DDRC_ADDRMAP_BANK_B2_BPOS =  8UL,             // bit 2. Valid range 0 to 14, and 15. Internal Base: 7.
                                                  // The selected address bit is determined by adding
                                                  // the Internal Base to the value of this field. If set to
                                                  // 15, bank address bit 2 is set to 0.

                                                  // Properties: Bits: 7:4, Type: rw, Reset Value: 0x7
    DDRC_ADDRMAP_BANK_B1_MASK =  0x000000F0UL,    // Selects the address bits used as bank address bit 1.
    DDRC_ADDRMAP_BANK_B1_BPOS =  4UL,             // Valid Range: 0 to 14; Internal Base: 6.
                                                  // The selected address bit for each of the bank
                                                  // address bits is determined by adding the Internal
                                                  // Base to the value of this field.

                                                  // Properties: Bits: 3:0, Type: rw, Reset Value: 0x7
    DDRC_ADDRMAP_BANK_B0_MASK =  0x0000000FUL,    // Selects the address bits used as bank address bit 0.
    DDRC_ADDRMAP_BANK_B0_BPOS =  0UL              // Valid Range: 0 to 14. Internal Base: 5.
                                                  // The selected address bit for each of the bank
                                                  // address bits is determined by adding the Internal
                                                  // Base to the value of this field.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_ADDR_MAP_COL
//
// Name                    DDRC_DRAM_ADDR_MAP_COL_REG
// Relative Address        0x00000040
// Absolute Address        0xF8006040
// Width                   32 bits
// Access Type             rw
// Reset Value             0xFFF00000
// Description             Column address bits
//
// Register DDRC_DRAM_ADDR_MAP_COL_REG Details
//         Selects the address bits used as DRAM column address bits
//
enum TDDRC_DRAM_ADDR_MAP_COL_REG
{
                                                  // Properties: Bits: 31:28, Type: rw, Reset Value: 0xF
    DDRC_ADDRMAP_COL_B11_MASK =  0xF0000000UL,    // Full bus width mode: Selects the address bit used
    DDRC_ADDRMAP_COL_B11_BPOS =  28UL,            // as column address bit 13. (Column address bit 12
                                                  // in LPDDR2 mode)
                                                  // Half bus width mode: Unused. To make it
                                                  // unused, this should be set to 15. (Column address
                                                  // bit 13 in LPDDR2 mode)
                                                  // Valid Range: 0 to 7, and 15.
                                                  // Internal Base: 14.
                                                  // The selected address bit is determined by adding
                                                  // the Internal Base to the value of this field. If set to
                                                  // 15, this column address bit is set to 0. Note: Per
                                                  // JEDEC DDR2 spec, column address bit 10 is
                                                  // reserved for indicating auto-precharge, and hence
                                                  // no source address bit can be mapped to column
                                                  // address bit 10. In LPDDR2, there is a dedicated bit
                                                  // for auto-precharge in the CA bus, and hence
                                                  // column bit 10 is used.

                                                  // Properties: Bits: 27:24, Type: rw, Reset Value: 0xF
    DDRC_ADDRMAP_COL_B10_MASK =  0x0F000000UL,    // Full bus width mode: Selects the address bit used
    DDRC_ADDRMAP_COL_B10_BPOS =  24UL,            // as column address bit 12. (Column address bit 11
                                                  // in LPDDR2 mode)
                                                  // Half bus width mode: Selects the address bit used
                                                  // as column address bit 13. (Column address bit 12
                                                  // in LPDDR2 mode) Valid Range: 0 to 7, and 15.
                                                  // Internal Base: 13
                                                  // The selected address bit is determined by adding
                                                  // the Internal Base to the value of this field. If set to
                                                  // 15, this column address bit is set to 0. Note: Per
                                                  // JEDEC DDR2 spec, column address bit 10 is
                                                  // reserved for indicating auto-precharge, and hence
                                                  // no source address bit can be mapped to column
                                                  // address bit 10. In LPDDR2, there is a dedicated bit
                                                  // for auto-precharge in the CA bus, and hence
                                                  // column bit 10 is used.

                                                  // Properties: Bits: 23:20, Type: rw, Reset Value: 0xF
    DDRC_ADDRMAP_COL_B9_MASK  =  0x00F00000UL,    // Full bus width mode: Selects the address bit used
    DDRC_ADDRMAP_COL_B9_BPOS  =  20UL,            // as column address bit 11. (Column address bit 10
                                                  // in LPDDR2 mode)
                                                  // Half bus width mode: Selects the address bit used
                                                  // as column address bit 12. (Column address bit 11
                                                  // in LPDDR2 mode)
                                                  // Valid Range: 0 to 7, and 15
                                                  // Internal Base: 12
                                                  // The selected address bit is determined by adding
                                                  // the Internal Base to the value of this field. If set to
                                                  // 15, this column address bit is set to 0.
                                                  // Note: Per JEDEC DDR2 spec, column address bit
                                                  // 10 is reserved for indicating auto-precharge, and
                                                  // hence no source address bit can be mapped to
                                                  // column address bit 10. In LPDDR2, there is a
                                                  // dedicated bit for auto-precharge in the CA bus,
                                                  // and hence column bit 10 is used.

                                                  // Properties: Bits: 19:16, Type: rw, Reset Value: 0x0
    DDRC_ADDRMAP_COL_B8_MASK  =  0x000F0000UL,    // Full bus width mode: Selects the address bit used
    DDRC_ADDRMAP_COL_B8_BPOS  =  16UL,            // as column address bit 9.
                                                  // Half bus width mode: Selects the address bit used
                                                  // as column address bit 11. (Column address bit 10
                                                  // in LPDDR2 mode)
                                                  // Valid Range: 0 to 7, and 15
                                                  // Internal Base: 11
                                                  // The selected address bit is determined by adding
                                                  // the Internal Base to the value of this field. If set to
                                                  // 15, this column address bit is set to 0.
                                                  // Note: Per JEDEC spec, column address bit 10 is
                                                  // reserved for indicating auto-precharge, and hence
                                                  // no source address bit can be mapped to column
                                                  // address bit 10. In LPDDR2, there is a dedicated bit
                                                  // for auto-precharge in the CA bus, and hence
                                                  // column bit 10 is used.

                                                  // Properties: Bits: 15:12, Type: rw, Reset Value: 0x0
    DDRC_ADDRMAP_COL_B7_MASK  =  0x0000F000UL,    // Full bus width mode: Selects the address bit used
    DDRC_ADDRMAP_COL_B7_BPOS  =  12UL,            // as column address bit 8.
                                                  // Half bus width mode: Selects the address bit used
                                                  // as column address bit 9.
                                                  // Valid Range: 0 to 7, and 15.
                                                  // Internal Base: 10.
                                                  // The selected address bit is determined by adding
                                                  // the Internal Base to the value of this field. If set to
                                                  // 15, this column address bit is set to 0.
                                                  // Note: Per JEDEC spec, column address bit 10 is
                                                  // reserved for indicating auto-precharge, and hence
                                                  // no source address bit can be mapped to column
                                                  // address bit 10.In LPDDR2, there is a dedicated bit
                                                  // for auto-precharge in the CA bus, and hence
                                                  // column bit 10 is used.

                                                  // Properties: Bits: 11:8, Type: rw, Reset Value: 0x0
    DDRC_ADDRMAP_COL_B4_MASK  =  0x00000F00UL,    // Full bus width mode: Selects the address bit used
    DDRC_ADDRMAP_COL_B4_BPOS  =  8UL,             // as column address bit 5.
                                                  // Half bus width mode: Selects the address bit used
                                                  // as column address bit 6. Valid Range: 0 to 7.
                                                  // Internal Base: 7.
                                                  // The selected address bit for each of the column
                                                  // address bits is determined by adding the Internal
                                                  // Base to the value of this field.

                                                  // Properties: Bits: 7:4, Type: rw, Reset Value: 0x0
    DDRC_ADDRMAP_COL_B3_MASK  =  0x000000F0UL,    // Full bus width mode: Selects the address bit used
    DDRC_ADDRMAP_COL_B3_BPOS  =  4UL,             // as column address bit 4.
                                                  // Half bus width mode: Selects the address bit used
                                                  // as column address bit 5.
                                                  // Valid Range: 0 to 7
                                                  // Internal Base: 6
                                                  // The selected address bit is determined by adding
                                                  // the Internal Base to the value of this field.

                                                  // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    DDRC_ADDRMAP_COL_B2_MASK  =  0x0000000FUL,    // Full bus width mode: Selects the address bit used
    DDRC_ADDRMAP_COL_B2_BPOS  =  0UL              // as column address bit 3.
                                                  // Half bus width mode: Selects the address bit used
                                                  // as column address bit 4.
                                                  // Valid Range: 0 to 7. Internal Base: 5
                                                  // The selected address bit is determined by adding
                                                  // the Internal Base to the value of this field.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_ADDR_MAP_ROW
//
// Name                    DDRC_DRAM_ADDR_MAP_ROW_REG
// Relative Address        0x00000044
// Absolute Address        0xF8006044
// Width                   28 bits
// Access Type             rw
// Reset Value             0x0FF55555
// Description             Select DRAM row address bits
//
// Register DDRC_DRAM_ADDR_MAP_ROW_REG Details
//     Note: address bits are relative to a byte address. For example, the value 0x0FFF6666 selects byte address
//     bits [29:15] as row ddress bits in a 32-bit bus width configuration.
//
enum TDDRC_DRAM_ADDR_MAP_ROW_REG
{
                                                    // Properties: Bits: 27:24, Type: rw, Reset Value: 0xF
    DDRC_ADDRMAP_ROW_B15_MASK   =  0x0F000000UL,    // Selects the AXI address bit used as row address
    DDRC_ADDRMAP_ROW_B15_BPOS   =  24UL,            // bit 15. Valid Range: 0 to 5, Internal Base: 24 The
                                                    // selected address bit is determined by adding the
                                                    // Internal Base to the value of this field. If set to 15,
                                                    // row address bit 15 is set to 0.

                                                    // Properties: Bits: 23:20, Type: rw, Reset Value: 0xF
    DDRC_ADDRMAP_ROW_B14_MASK   =  0x00F00000UL,    // Selects the AXI
    DDRC_ADDRMAP_ROW_B14_BPOS   =  20UL,            // address bit used as row address bit 14. Valid
                                                    // Range: 0 to 6, Internal Base: 23 The selected
                                                    // address bit is determined by adding the Internal
                                                    // Base to the value of this field. If set to 15, row
                                                    // address bit 14 is set to 0.

                                                    // Properties: Bits: 19:16, Type: rw, Reset Value: 0x5
    DDRC_ADDRMAP_ROW_B13_MASK   =  0x000F0000UL,    // Selects the AXI address bit used as row address
    DDRC_ADDRMAP_ROW_B13_BPOS   =  16UL,            // bit 13. Valid Range: 0 to 7, Internal Base: 22 The
                                                    // selected address bit is determined by adding the
                                                    // Internal Base to the value of this field. If set to 15,
                                                    // row address bit 13 is set to 0.

                                                    // Properties: Bits: 15:12, Type: rw, Reset Value: 0x5
    DDRC_ADDRMAP_ROW_B12_MASK   =  0x0000F000UL,    // Selects the AXI address bit used as row address
    DDRC_ADDRMAP_ROW_B12_BPOS   =  12UL,            // bit 12. Valid Range: 0 to 8, Internal Base: 21 The
                                                    // selected address bit is determined by adding the
                                                    // Internal Base to the value of this field. If set to 15,
                                                    // row address bit 12 is set to 0.

                                                    // Properties: Bits: 11:8, Type: rw, Reset Value: 0x5
    DDRC_ADDRMAP_ROW_B2_11_MASK =  0x00000F00UL,    // Selects the AXI address bits used as row address
    DDRC_ADDRMAP_ROW_B2_11_BPOS =  8UL,             // bits 2 to 11. Valid Range: 0 to 11. Internal Base: 11
                                                    // (for row address bit 2) to 20 (for row address bit
                                                    // 11) The selected address bit for each of the row
                                                    // address bits is determined by adding the Internal
                                                    // Base to the value of this field.

                                                    // Properties: Bits: 7:4, Type: rw, Reset Value: 0x5
    DDRC_ADDRMAP_ROW_B1_MASK    =  0x000000F0UL,    // Selects the AXI address bits used as row address
    DDRC_ADDRMAP_ROW_B1_BPOS    =  4UL,             // bit 1. Valid Range: 0 to 11. Internal Base: 10 The
                                                    // selected address bit for each of the row address
                                                    // bits is determined by adding the Internal Base to
                                                    // the value of this field.

                                                    // Properties: Bits: 3:0, Type: rw, Reset Value: 0x5
    DDRC_ADDRMAP_ROW_B0_MASK    =  0x0000000FUL,    // Selects the AXI address bits used as row address
    DDRC_ADDRMAP_ROW_B0_BPOS    =  0UL              // bit 0. Valid Range: 0 to 11. Internal Base: 9
                                                    // The selected address bit for each of the row
                                                    // address bits is determined by adding the Internal
                                                    // Base to the value of this field

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DRAM_ODT
//
// Name                     DDRC_DRAM_ODT_REG
// Relative Address         0x00000048
// Absolute Address         0xF8006048
// Width                    30 bits
// Access Type              rw
// Reset Value              0x00000249
// Description              DRAM ODT control
//
// Register DDRC_DRAM_ODT_REG Details
//         Parts of this register are unused.
//
enum TDDRC_DRAM_ODT_REG
{
// RESERVED                                             Properties: Bits: 29:27, Type: rw, Reset Value: 0x0

// RESERVED                                             Properties: Bits: 26:24, Type: rw, Reset Value: 0x0

// RESERVED                                             Properties: Bits: 23:21, Type: rw, Reset Value: 0x0

// RESERVED                                             Properties: Bits: 20:18, Type: rw, Reset Value: 0x0

                                                     // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
    DDRC_PHY_IDLE_LOCAL_ODT_MASK =  0x00030000UL,    // Value to drive on the 2-bit local_odt PHY outputs
    DDRC_PHY_IDLE_LOCAL_ODT_BPOS =  16UL,            // when output enable is not asserted and a read is
                                                     // not in progress. Typically this is the value
                                                     // required to disable termination to save power
                                                     // when idle.

                                                     // Properties: Bits: 15:14, Type: rw, Reset Value: 0x0
    DDRC_PHY_WR_LOCAL_ODT_MASK   =  0x0000C000UL,    // Value to drive on the 2-bit local_odt PHY outputs
    DDRC_PHY_WR_LOCAL_ODT_BPOS   =  14UL,            // when output is enabled for DQ and DQS.
                                                     // Typically this disables termination, as few
                                                     // systems use termination when writing.

                                                     // Properties: Bits: 13:12, Type: rw, Reset Value: 0x0
    DDRC_PHY_RD_LOCAL_ODT_MASK   =  0x00003000UL,    // Value to drive on the 2-bit local_odt PHY outputs
    DDRC_PHY_RD_LOCAL_ODT_BPOS   =  12UL,            // when output enable is not asserted and a read is
                                                     // in progress (where 'in progress' is defined as after
                                                     // a read command is issued and until all read data
                                                     // has been returned all the way to the controller.)
                                                     // Typically this is set to the value required to enable
                                                     // termination at the desired strength for read usage.

// RESERVED                                             Properties: Bits: 11:9, Type: rw, Reset Value: 0x1

// RESERVED                                             Properties: Bits: 8:6, Type: rw, Reset Value: 0x1

                                                     // Properties: Bits: 5:3, Type: rw, Reset Value: 0x1
    DDRC_RANK0_WR_ODT_MASK       =  0x00000038UL,    // [1:0] - Indicates which remote ODT's must be
    DDRC_RANK0_WR_ODT_BPOS       =  3UL,             // turned on during a write to rank 0. Each of the 2
                                                     // ranks has a remote ODT (in the DRAM) which can
                                                     // be turned on by setting the appropriate bit here.
                                                     // Rank 0 is controlled by the LSB; Rank 1 is
                                                     // controlled by bit next to the LSB.
                                                     // For each rank, set its bit to 1 to enable its ODT.
                                                     // [2]: If 1 then local ODT is enabled during writes to
                                                     // rank 0.

                                                     // Properties: Bits: 2:0, Type: rw, Reset Value: 0x1
    DDRC_RANK0_RD_ODT_MASK       =  0x00000007UL,    // Unused.
    DDRC_RANK0_RD_ODT_BPOS       =  0UL              // [1:0] - Indicates which remote ODTs must be
                                                     // turned ON during a read to rank 0. Each of the 2
                                                     // ranks has a remote ODT (in the DRAM) which can
                                                     // be turned on by setting the appropriate bit here.
                                                     // Rank 0 is controlled by the LSB; Rank 1 is
                                                     // controlled by bit next to the LSB. For each rank,
                                                     // set its bit to 1 to enable its ODT.
                                                     // [2]: If 1 then local ODT is enabled during reads to
                                                     // rank 0.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PHY_DBG
//
// Name                    DDRC_PHY_DBG_REG
// Relative Address        0x0000004C
// Absolute Address        0xF800604C
// Width                   20 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             PHY debug
//
// Register DDRC_PHY_DBG_REG Details
//
enum TDDRC_PHY_DBG_REG
{
                                                           // Properties: Bit: 19, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_FIFO_RE3_MASK          =  0x00080000UL,    // Debug read capture FIFO read enable for data
    DDRC_PHY_BC_FIFO_RE3_BPOS          =  19UL,            // slice 3.

                                                           // Properties: Bit: 18, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_FIFO_WE3_MASK          =  0x00040000UL,    // Debug read capture FIFO write enable, for data
    DDRC_PHY_BC_FIFO_WE3_BPOS          =  18UL,            // slice 3.

                                                           // Properties: Bit: 17, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_DQS_OE3_MASK           =  0x00020000UL,    // Debug DQS output enable for data slice 3.
    DDRC_PHY_BC_DQS_OE3_BPOS           =  17UL,            // 

                                                           // Properties: Bit: 16, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_DQ_OE3_MASK            =  0x00010000UL,    // Debug DQ output enable for data slice 3.
    DDRC_PHY_BC_DQ_OE3_BPOS            =  16UL,            // 

                                                           // Properties: Bit: 15, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_FIFO_RE2_MASK          =  0x00008000UL,    // Debug read capture FIFO read enable for data
    DDRC_PHY_BC_FIFO_RE2_BPOS          =  15UL,            // slice 2.

                                                           // Properties: Bit: 14, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_FIFO_WE2_MASK          =  0x00004000UL,    // Debug read capture FIFO write enable, for data
    DDRC_PHY_BC_FIFO_WE2_BPOS          =  14UL,            // slice 2.

                                                           // Properties: Bit: 13, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_DQS_OE2_MASK           =  0x00002000UL,    // Debug DQS output enable for data slice 2.
    DDRC_PHY_BC_DQS_OE2_BPOS           =  13UL,            // 

                                                           // Properties: Bit: 12, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_DQ_OE2_MASK            =  0x00001000UL,    // Debug DQ output enable for data slice 2.
    DDRC_PHY_BC_DQ_OE2_BPOS            =  12UL,            // 

                                                           // Properties: Bit: 11, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_FIFO_RE1_MASK          =  0x00000800UL,    // Debug read capture FIFO read enable for data
    DDRC_PHY_BC_FIFO_RE1_BPOS          =  11UL,            // slice 1.

                                                           // Properties: Bit: 10, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_FIFO_WE1_MASK          =  0x00000400UL,    // Debug read capture FIFO write enable, for data
    DDRC_PHY_BC_FIFO_WE1_BPOS          =  10UL,            // slice 1.

                                                           // Properties: Bit: 9, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_DQS_OE1_MASK           =  0x00000200UL,    // Debug DQS output enable for data slice 1.
    DDRC_PHY_BC_DQS_OE1_BPOS           =  9UL,             // 

                                                           // Properties: Bit: 8, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_DQ_OE1_MASK            =  0x00000100UL,    // Debug DQ output enable for data slice 1.
    DDRC_PHY_BC_DQ_OE1_BPOS            =  8UL,             // 

                                                           // Properties: Bit: 7, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_FIFO_RE0_MASK          =  0x00000080UL,    // Debug read capture FIFO read enable for data
    DDRC_PHY_BC_FIFO_RE0_BPOS          =  7UL,             // slice 0.

                                                           // Properties: Bit: 6, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_FIFO_WE0_MASK          =  0x00000040UL,    // Debug read capture FIFO write enable, for data
    DDRC_PHY_BC_FIFO_WE0_BPOS          =  6UL,             // slice 0.

                                                           // Properties: Bit: 5, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_DQS_OE0_MASK           =  0x00000020UL,    // Debug DQS output enable for data slice 0.
    DDRC_PHY_BC_DQS_OE0_BPOS           =  5UL,             // 

                                                           // Properties: Bit: 4, Type: ro, Reset Value: 0x0
    DDRC_PHY_BC_DQ_OE0_MASK            =  0x00000010UL,    // Debug DQ output enable for data slice 0.
    DDRC_PHY_BC_DQ_OE0_BPOS            =  4UL,             // 

                                                           // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
    DDRC_PHY_RDC_FIFO_RST_ERR_CNT_MASK =  0x0000000FUL,    // Counter for counting how many times the
    DDRC_PHY_RDC_FIFO_RST_ERR_CNT_BPOS =  0UL              // pointers of read capture FIFO differ when they are
                                                           // reset by dll_calib.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PHY_CMD_TIMEOUT_RDDATA_CPT
//
// Name                     DDRC_PHY_CMD_TIMEOUT_RDDATA_CPT_REG
// Relative Address         0x00000050
// Absolute Address         0xF8006050
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00010200
// Description              PHY command time out and read data capture FIFO
//
// Register DDRC_PHY_CMD_TIMEOUT_RDDATA_CPT_REG Details
//
enum TDDRC_PHY_CMD_TIMEOUT_RDDATA_CPT_REG
{
                                                               // Properties: Bits: 31:28, Type: rw, Reset Value: 0x0
    DDRC_PHY_WRLVL_NUM_OF_DQ0_MASK         =  0xF0000000UL,    // This register value determines the number of
    DDRC_PHY_WRLVL_NUM_OF_DQ0_BPOS         =  28UL,            // samples used for each ratio increment during
                                                               // Write Leveling.
                                                               // Num_of_iteration = phy_wrlvl_num_of_dq0 +1
                                                               // The recommended value for this register is 8.
                                                               // Accuracy is better with higher value, but this will
                                                               // cause leveling to run longer.

                                                               // Properties: Bits: 27:24, Type: rw, Reset Value: 0x0
    DDRC_PHY_GATELVL_NUM_OF_DQ0_MASK       =  0x0F000000UL,    // This register value determines register
    DDRC_PHY_GATELVL_NUM_OF_DQ0_BPOS       =  24UL,            // determines the number of samples used for each
                                                               // ratio increment during Gate Training.
                                                               // Num_of_iteration = phy_gatelvl_num_of_dq0 + 1
                                                               // The recommended value for this register is 8.
                                                               // Accuracy is better with higher value, but this will
                                                               // cause leveling to run longer.

// RESERVED                                                       Properties: Bits: 23:20, Type: ro, Reset Value: 0x0

                                                               // Properties: Bit: 19, Type: rw, Reset Value: 0x0
    DDRC_PHY_CLK_STALL_LEVEL_MASK          =  0x00080000UL,    // 1: stall clock, for DLL aging control
    DDRC_PHY_CLK_STALL_LEVEL_BPOS          =  19UL,            // 

                                                               // Properties: Bit: 18, Type: rw, Reset Value: 0x0
    DDRC_PHY_DIS_PHY_CTRL_RSTN_MASK        =  0x00040000UL,    // Disable the reset from Phy Ctrl macro.
    DDRC_PHY_DIS_PHY_CTRL_RSTN_BPOS        =  18UL,            // 1: PHY Ctrl macro reset port is always HIGH
                                                               // 0: PHY Ctrl macro gets power on reset.

                                                               // Properties: Bit: 17, Type: rw, Reset Value: 0x0
    DDRC_PHY_RDC_FIFO_RST_ERR_CNT_CLR_MASK =  0x00020000UL,    // Clear/reset for counter rdc_fifo_rst_err_cnt[3:0].
    DDRC_PHY_RDC_FIFO_RST_ERR_CNT_CLR_BPOS =  17UL,            // 0: no clear
                                                               // 1: clear
                                                               // Note: This is a synchronous dynamic signal that
                                                               // must have timing closed.

                                                               // Properties: Bit: 16, Type: rw, Reset Value: 0x1
    DDRC_PHY_USE_FIXED_RE_MASK             =  0x00010000UL,    // When 1: PHY generates FIFO read enable after
    DDRC_PHY_USE_FIXED_RE_BPOS             =  16UL,            // fixed number of clock cycles as defined by
                                                               // reg_phy_rdc_we_to_re_delay[3:0].
                                                               // When 0: PHY uses the not_empty method to do
                                                               // the read enable generation.
                                                               // Note: This port must be set HIGH during
                                                               // training/leveling process i.e. when
                                                               // ddrc_dfi_wrlvl_en/ ddrc_dfi_rdlvl_en/
                                                               // ddrc_dfi_rdlvl_gate_en port is set HIGH.

                                                               // Properties: Bit: 15, Type: rw, Reset Value: 0x0
    DDRC_PHY_RDC_FIFO_RST_DISABLE_MASK     =  0x00008000UL,    // When 1, disable counting the number of times the
    DDRC_PHY_RDC_FIFO_RST_DISABLE_BPOS     =  15UL,            // Read Data Capture FIFO has been reset when the
                                                               // FIFO was not empty.

// RESERVED                                                       Properties: Bits: 14:12, Type: ro, Reset Value: 0x0

                                                               // Properties: Bits: 11:8, Type: rw, Reset Value: 0x2
    DDRC_PHY_RDC_WE_TO_RE_DELAY_MASK       =  0x00000F00UL,    // This register value + 1 give the number of clock
    DDRC_PHY_RDC_WE_TO_RE_DELAY_BPOS       =  8UL,             // cycles between writing into the Read Capture
                                                               // FIFO and the read operation.
                                                               // The setting of this register determines the read
                                                               // data timing and depends upon total delay in the
                                                               // system for read operation which include fly-by
                                                               // delays, trace delay, clkout_invert etc.
                                                               // This is used only if phy_use_fixed_re=1.

                                                               // Properties: Bits: 7:4, Type: rw, Reset Value: 0x0
    DDRC_PHY_WR_CMD_TO_DATA_MASK           =  0x000000F0UL,    // Not used in DFI PHY.
    DDRC_PHY_WR_CMD_TO_DATA_BPOS           =  4UL,             // 

                                                               // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    DDRC_PHY_RD_CMD_TO_DATA_MASK           =  0x0000000FUL,    // Not used in DFI PHY.
    DDRC_PHY_RD_CMD_TO_DATA_BPOS           =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (DDRC) MODE_STS
//
// Name                    DDRC_MODE_STS_REG
// Relative Address        0x00000054
// Absolute Address        0xF8006054
// Width                   21 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Controller operation mode status
//
// Register DDRC_MODE_STS_REG Details
//
enum TDDRC_MODE_STS_REG
{
                                                  // Properties: Bits: 20:16, Type: ro, Reset Value: 0x0
    DDRC_DBG_HPR_Q_DEPTH_MASK =  0x001F0000UL,    // Indicates the number of entries currently in the
    DDRC_DBG_HPR_Q_DEPTH_BPOS =  16UL,            // High Priority Read (HPR) CAM.

                                                  // Properties: Bits: 15:10, Type: ro, Reset Value: 0x0
    DDRC_DBG_LPR_Q_DEPTH_MASK =  0x0000FC00UL,    // Indicates the number of entries currently in the
    DDRC_DBG_LPR_Q_DEPTH_BPOS =  10UL,            // Low Priority Read (LPR) CAM.

                                                  // Properties: Bits: 9:4, Type: ro, Reset Value: 0x0
    DDRC_DBG_WR_Q_DEPTH_MASK  =  0x000003F0UL,    // Indicates the number of entries currently in the
    DDRC_DBG_WR_Q_DEPTH_BPOS  =  4UL,             // Write CAM.

                                                  // Properties: Bit: 3, Type: ro, Reset Value: 0x0
    DDRC_DBG_STALL_MASK       =  0x00000008UL,    // 0: commands are being accepted.
    DDRC_DBG_STALL_BPOS       =  3UL,             // 1: no commands are accepted by the controller.

                                                  // Properties: Bits: 2:0, Type: ro, Reset Value: 0x0
    DDRC_OPERATING_MODE_MASK  =  0x00000007UL,    // Gives the status of the controller.
    DDRC_OPERATING_MODE_BPOS  =  0UL              // 0: DDRC Init
                                                  // 1: Normal operation
                                                  // 2: Powerdown mode
                                                  // 3: Self-refresh mode
                                                  // 4 and above: deep power down mode (LPDDR2
                                                  // only)

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DLL_CALIB
//
// Name                     DDRC_DLL_CALIB_REG
// Relative Address         0x00000058
// Absolute Address         0xF8006058
// Width                    17 bits
// Access Type              rw
// Reset Value              0x00000101
// Description              DLL calibration
//
// Register DDRC_DLL_CALIB_REG Details
//
enum TDDRC_DLL_CALIB_REG
{
                                                // Properties: Bit: 16, Type: rw, Reset Value: 0x0
    DDRC_DIS_DLL_CALIB_MASK =  0x00010000UL,    // When 1, disable dll_calib generated by the
    DDRC_DIS_DLL_CALIB_BPOS =  16UL,            // controller. The core should issue the dll_calib
                                                // signal using co_gs_dll_calib input. This input is
                                                // changeable on the fly.
                                                // When 0, controller will issue dll_calib periodically

// RESERVED                                        Properties: Bits: 15:8, Type: rw, Reset Value: 0x1

// RESERVED                                        Properties: Bits: 7:0, Type: rw, Reset Value: 0x1

};

//------------------------------------------------------------------------------
//
// Register (DDRC) ODT_DELAY_HOLD
//
// Name                     DDRC_ODT_DELAY_HOLD_REG
// Relative Address         0x0000005C
// Absolute Address         0xF800605C
// Width                    16 bits
// Access Type              rw
// Reset Value              0x00000023
// Description              ODT delay and ODT hold
//
// Register DDRC_ODT_DELAY_HOLD_REG Details
//
enum TDDRC_ODT_DELAY_HOLD_REG
{
                                               // Properties: Bits: 15:12, Type: rw, Reset Value: 0x0
    DDRC_WR_ODT_HOLD_MASK  =  0x0000F000UL,    // Cycles to hold ODT for a Write Command. When
    DDRC_WR_ODT_HOLD_BPOS  =  12UL,            // 0x0, ODT signal is ON for 1 cycle. When 0x1, it is
                                               // ON for 2 cycles, etc. The values to program in
                                               // different modes are :
                                               // DRAM Burst of 4 -2: 4-2 => 2
                                               // DRAM Burst of 8 -4: 8-4 => 4

                                               // Properties: Bits: 11:8, Type: rw, Reset Value: 0x0
    DDRC_RD_ODT_HOLD_MASK  =  0x00000F00UL,    // Unused
    DDRC_RD_ODT_HOLD_BPOS  =  8UL,             // 

                                               // Properties: Bits: 7:4, Type: rw, Reset Value: 0x2
    DDRC_WR_ODT_DELAY_MASK =  0x000000F0UL,    // The delay, in clock cycles, from issuing a write
    DDRC_WR_ODT_DELAY_BPOS =  4UL,             // command to setting ODT values associated with
                                               // that command. ODT setting should remain
                                               // constant for the entire time that DQS is driven by
                                               // the controller. The suggested value for DDR2 is
                                               // WL - 5 and for DDR3 is 0. WL is Write latency.
                                               // DDR2 ODT has a 2-cycle on-time delay and a
                                               // 2.5-cycle off-time delay.
                                               // ODT is not applicable to LPDDR2.

                                               // Properties: Bits: 3:0, Type: rw, Reset Value: 0x3
    DDRC_RD_ODT_DELAY_MASK =  0x0000000FUL,    // UNUSED
    DDRC_RD_ODT_DELAY_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CTRL1
//
// Name                     DDRC_CTRL1_REG
// Relative Address         0x00000060
// Absolute Address         0xF8006060
// Width                    13 bits
// Access Type              mixed
// Reset Value              0x0000003E
// Description              Controller 1
//
// Register DDRC_CTRL1_REG Details
//
enum TDDRC_CTRL1_REG
{
                                                         // Properties: Bit: 12, Type: rw, Reset Value: 0x0
    DDRC_SELFREF_EN_MASK             =  0x00001000UL,    // If 1, then the controller will put the DRAM into
    DDRC_SELFREF_EN_BPOS             =  12UL,            // self refresh when the transaction store is empty.
                                                         // Dynamic Bit Field.

// RESERVED                                                 Properties: Bit: 11, Type: ro, Reset Value: 0x0

                                                         // Properties: Bit: 10, Type: rw, Reset Value: 0x0
    DDRC_DIS_COLLISION_PAGE_OPT_MASK =  0x00000400UL,    // When this is set to 0, auto-precharge will be
    DDRC_DIS_COLLISION_PAGE_OPT_BPOS =  10UL,            // disabled for the flushed command in a collision
                                                         // case. Collision cases are write followed by read to
                                                         // same address, read followed by write to same
                                                         // address, or write followed by write to same
                                                         // address with DIS_WC bit = 1 (where 'same
                                                         // address' comparisons exclude the two address
                                                         // bits representing critical word).

                                                         // Properties: Bit: 9, Type: rw, Reset Value: 0x0
    DDRC_DIS_WC_MASK                 =  0x00000200UL,    // Disable Write Combine:
    DDRC_DIS_WC_BPOS                 =  9UL,             // 0: enable
                                                         // 1: disable

                                                         // Properties: Bit: 8, Type: rw, Reset Value: 0x0
    DDRC_REFRESH_UPDATE_LEVEL_MASK   =  0x00000100UL,    // Toggle this signal to indicate that refresh
    DDRC_REFRESH_UPDATE_LEVEL_BPOS   =  8UL,             // register(s) have been updated. The value will be
                                                         // automatically updated when exiting soft reset. So
                                                         // it does not need to be toggled initially.
                                                         // Dynamic Bit Field.

                                                         // Properties: Bit: 7, Type: rw, Reset Value: 0x0
    DDRC_AUTO_PRE_EN_MASK            =  0x00000080UL,    // When set, most reads and writes will be issued
    DDRC_AUTO_PRE_EN_BPOS            =  7UL,             // with auto-precharge. (Exceptions can be made for
                                                         // collision cases.)

                                                         // Properties: Bits: 6:1, Type: rw, Reset Value: 0x1F
    DDRC_LPR_NUM_ENTRIES_MASK        =  0x0000007EUL,    // Number of entries in the low priority transaction
    DDRC_LPR_NUM_ENTRIES_BPOS        =  1UL,             // store is this value plus 1. In this design, by default
                                                         // all read ports are treated as low priority and hence
                                                         // the value of 0x1F. The hpr_num_entries is 32
                                                         // minus this value. Bit [6] is ignored.

                                                         // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    DDRC_PAGECLOSE_MASK              =  0x00000001UL,    // If true, bank will be closed and kept closed if no
    DDRC_PAGECLOSE_BPOS              =  0UL              // transactions are available for it. If false, bank will
                                                         // remain open until there is a need to close it (to
                                                         // open a different page, or for page timeout or
                                                         // refresh timeout.) This does not apply when
                                                         // auto-refresh is used.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CTRL2
//
// Name                     DDRC_CTRL2_REG
// Relative Address         0x00000064
// Absolute Address         0xF8006064
// Width                    18 bits
// Access Type              mixed
// Reset Value              0x00020000
// Description              Controller 2
//
// Register DDRC_CTRL2_REG Details
//
enum TDDRC_CTRL2_REG
{
                                                         // Properties: Bit: 17, Type: rw, Reset Value: 0x1
    DDRC_ARB_GO2CRITICAL_EN_MASK     =  0x00020000UL,    // 0: Keep go2critical_wr          and
    DDRC_ARB_GO2CRITICAL_EN_BPOS     =  17UL,            // go2critical_rd          signals going to DDRC at
                                                         // 0.
                                                         // 1: Set go2critical_wr          and
                                                         // go2critical_rd          signals going to DDRC
                                                         // based on Urgent input coming from AXI master.

// RESERVED                                                 Properties: Bits: 16:13, Type: ro, Reset Value: 0x0

                                                         // Properties: Bits: 12:5, Type: rw, Reset Value: 0x0
    DDRC_GO2CRITICAL_HYSTERESIS_MASK =  0x00001FE0UL,    // Describes the number of cycles that
    DDRC_GO2CRITICAL_HYSTERESIS_BPOS =  5UL,             // co_gs_go2critical_rd or co_gs_go2critical_wr
                                                         // must be asserted before the corresponding queue
                                                         // moves to the 'critical' state in the DDRC. The
                                                         // arbiter controls the co_gs_go2critical_* signals; it
                                                         // is designed for use with this hysteresis field set to
                                                         // 0.

// RESERVED                                                 Properties: Bits: 4:0, Type: ro, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CTRL3
//
// Name                     DDRC_CTRL3_REG
// Relative Address         0x00000068
// Absolute Address         0xF8006068
// Width                    26 bits
// Access Type              rw
// Reset Value              0x00284027
// Description              Controller 3
//
// Register DDRC_CTRL3_REG Details
//
enum TDDRC_CTRL3_REG
{
                                              // Properties: Bits: 25:16, Type: rw, Reset Value: 0x28
    DDRC_DFI_T_WLMRD_MASK =  0x03FF0000UL,    // DDR2 and LPDDR2: not applicable.
    DDRC_DFI_T_WLMRD_BPOS =  16UL,            // DDR3: First DQS/DQS# rising edge after write
                                              // leveling mode is programmed. This is same as the
                                              // tMLRD value from the DRAM spec.

                                              // Properties: Bits: 15:8, Type: rw, Reset Value: 0x40
    DDRC_RDLVL_RR_MASK    =  0x0000FF00UL,    // DDR2 and LPDDR2: not applicable.
    DDRC_RDLVL_RR_BPOS    =  8UL,             // DDR3: Read leveling read-to-read delay. Specifies
                                              // the minimum number of clock cycles from the
                                              // assertion of a read command to the next read
                                              // command.
                                              // Only applicable when connecting to PHYs
                                              // operating in PHY RdLvl Evaluation mode.

                                              // Properties: Bits: 7:0, Type: rw, Reset Value: 0x27
    DDRC_WRLVL_WW_MASK    =  0x000000FFUL,    // DDR2: not applicable.
    DDRC_WRLVL_WW_BPOS    =  0UL              // LPDDR2 and DDR3: Write leveling write-to-write
                                              // delay. Specifies the minimum number of clock
                                              // cycles from the assertion of a
                                              // ddrc_dfi_wrlvl_strobe signal to the next
                                              // ddrc_dfi_wrlvl_strobe signal. Only applicable
                                              // when connecting to PHYs operating in PHY
                                              // RdLvl Evaluation mode.
                                              // Recommended value is: (RL + phy_rdc_we_to_re_delay + 50)

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CTRL4
//
// Name                      DDRC_CTRL4_REG
// Relative Address          0x0000006C
// Absolute Address          0xF800606C
// Width                     16 bits
// Access Type               rw
// Reset Value               0x00001610
// Description               Controller 4
//
// Register DDRC_CTRL4_REG Details
//
enum TDDRC_CTRL4_REG
{
                                                                   // Properties: Bits: 15:8, Type: rw, Reset Value: 0x16
    DDRC_DFI_T_CTRLUPD_INTERVAL_MAX_X1024_MASK =  0x0000FF00UL,    // This is the maximum amount of time between
    DDRC_DFI_T_CTRLUPD_INTERVAL_MAX_X1024_BPOS =  8UL,             // Controller initiated DFI update requests. This
                                                                   // timer resets with each update request; when the
                                                                   // timer expires, traffic is blocked for a few cycles.
                                                                   // PHY can use this idle time to recalibrate the delay
                                                                   // lines to the DLLs. The DLL calibration is also used
                                                                   // to reset PHY FIFO pointers in case of data capture
                                                                   // errors. Updates are required to maintain
                                                                   // calibration over PVT, but frequent updates may
                                                                   // impact performance. Units: 1024 clocks

                                                                   // Properties: Bits: 7:0, Type: rw, Reset Value: 0x10
    DDRC_DFI_T_CTRLUPD_INTERVAL_MIN_X1024_MASK =  0x000000FFUL,    // This is the minimum amount of time between
    DDRC_DFI_T_CTRLUPD_INTERVAL_MIN_X1024_BPOS =  0UL              // Controller initiated DFI update requests (which
                                                                   // will be executed whenever the controller is idle).
                                                                   // Set this number higher to reduce the frequency of
                                                                   // update requests, which can have a small impact
                                                                   // on the latency of the first read request when the
                                                                   // controller is idle. Units: 1024 clocks

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CTRL5
//
// Name                      DDRC_CTRL5_REG
// Relative Address          0x00000078
// Absolute Address          0xF8006078
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x00455111
// Description               Controller register 5
//
// Register DDRC_CTRL5_REG Details
//
enum TDDRC_CTRL5_REG
{
// RESERVED                                                 Properties: Bits: 31:26, Type: ro, Reset Value: 0x0

                                                         // Properties: Bits: 25:20, Type: rw, Reset Value: 0x4
    DDRC_T_CKESR_MASK                =  0x03F00000UL,    // Minimum CKE low width for Self Refresh entry to
    DDRC_T_CKESR_BPOS                =  20UL,            // exit Timing in memory clock cycles.
                                                         // Recommended settings:
                                                         // LPDDR2: tCKESR
                                                         // DDR2: tCKE
                                                         // DDR3: tCKE+1

                                                         // Properties: Bits: 19:16, Type: rw, Reset Value: 0x5
    DDRC_T_CKSRX_MASK                =  0x000F0000UL,    // This is the time before Self Refresh Exit that CK is
    DDRC_T_CKSRX_BPOS                =  16UL,            // maintained as a valid clock before issuing SRX.
                                                         // Specifies the clock stable time before SRX.
                                                         // Recommended settings:
                                                         // LPDDR2: 2
                                                         // DDR2: 1
                                                         // DDR3: tCKSRX

                                                         // Properties: Bits: 15:12, Type: rw, Reset Value: 0x5
    DDRC_T_CKSRE_MASK                =  0x0000F000UL,    // This is the time after Self Refresh Entry that CK is
    DDRC_T_CKSRE_BPOS                =  12UL,            // maintained as a valid clock. Specifies the clock
                                                         // disable delay after SRE.
                                                         // Recommended settings:
                                                         // LPDDR2: 2
                                                         // DDR2: 1
                                                         // DDR3: tCKSRE

                                                         // Properties: Bits: 11:8, Type: rw, Reset Value: 0x1
    DDRC_DFI_T_DRAM_CLK_ENABLE_MASK  =  0x00000F00UL,    // Specifies the number of DFI clock cycles from the
    DDRC_DFI_T_DRAM_CLK_ENABLE_BPOS  =  8UL,             // de-assertion of the ddrc_dfi_dram_clk_disable
                                                         // signal on the DFI until the first valid rising edge of
                                                         // the clock to the DRAM memory devices at the
                                                         // PHY-DRAM boundary. If the DFI clock and the
                                                         // memory clock are not phase aligned, this timing
                                                         // parameter should be rounded up to the next
                                                         // integer value.

                                                         // Properties: Bits: 7:4, Type: rw, Reset Value: 0x1
    DDRC_DFI_T_DRAM_CLK_DISABLE_MASK =  0x000000F0UL,    // Specifies the number of DFI clock cycles from the
    DDRC_DFI_T_DRAM_CLK_DISABLE_BPOS =  4UL,             // assertion of the ddrc_dfi_dram_clk_disable signal
                                                         // on the DFI until the clock to the DRAM memory
                                                         // devices, at the PHY-DRAM boundary, maintains a
                                                         // low value. If the DFI clock and the memory clock
                                                         // are not phase aligned, this timing parameter
                                                         // should be rounded up to the next integer value.

                                                         // Properties: Bits: 3:0, Type: rw, Reset Value: 0x1
    DDRC_DFI_T_CTRL_DELAY_MASK       =  0x0000000FUL,    // Specifies the number of DFI clock cycles after an
    DDRC_DFI_T_CTRL_DELAY_BPOS       =  0UL              // assertion or deassertion of the DFI control signals
                                                         // that the control signals at the PHY-DRAM
                                                         // interface reflect the assertion or de-assertion. If
                                                         // the DFI clock and the memory clock are not
                                                         // phase-aligned, this timing parameter should be
                                                         // rounded up to the next integer value.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CTRL6
//
// Name                    DDRC_CTRL6_REG
// Relative Address        0x0000007C
// Absolute Address        0xF800607C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00032222
// Description             Controller register 6
//
// Register DDRC_CTRL6_REG Details
//
enum TDDRC_CTRL6_REG
{
// RESERVED                                   Properties: Bits: 31:20, Type: ro, Reset Value: 0x0

                                           // Properties: Bits: 19:16, Type: rw, Reset Value: 0x3
    DDRC_T_CKCSX_MASK  =  0x000F0000UL,    // This is the time before Clock Stop Exit that CK is
    DDRC_T_CKCSX_BPOS  =  16UL,            // maintained as a valid clock before issuing DPDX.
                                           // Specifies the clock stable time before next
                                           // command after Clock Stop Exit.
                                           // Recommended setting for LPDDR2: tXP + 2.

                                           // Properties: Bits: 15:12, Type: rw, Reset Value: 0x2
    DDRC_T_CKDPDX_MASK =  0x0000F000UL,    // This is the time before Deep Power Down Exit
    DDRC_T_CKDPDX_BPOS =  12UL,            // that CK is maintained as a valid clock before
                                           // issuing DPDX. Specifies the clock stable time
                                           // before DPDX.
                                           // Recommended setting for LPDDR2: 2.

                                           // Properties: Bits: 11:8, Type: rw, Reset Value: 0x2
    DDRC_T_CKDPDE_MASK =  0x00000F00UL,    // This is the time after Deep Power Down Entry
    DDRC_T_CKDPDE_BPOS =  8UL,             // that CK is maintained as a valid clock. Specifies
                                           // the clock disable delay after DPDE.
                                           // Recommended setting for LPDDR2: 2.

                                           // Properties: Bits: 7:4, Type: rw, Reset Value: 0x2
    DDRC_T_CKPDX_MASK  =  0x000000F0UL,    // This is the time before Power Down Exit that CK
    DDRC_T_CKPDX_BPOS  =  4UL,             // is maintained as a valid clock before issuing PDX.
                                           // Specifies the clock stable time before PDX.
                                           // Recommended setting for LPDDR2: 2.

                                           // Properties: Bits: 3:0, Type: rw, Reset Value: 0x2
    DDRC_T_CKPDE_MASK  =  0x0000000FUL,    // This is the time after Power Down Entry that CK
    DDRC_T_CKPDE_BPOS  =  0UL              // is maintained as a valid clock. Specifies the clock
                                           // disable delay after PDE.
                                           // Recommended setting for LPDDR2: 2.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_REFRESH_TIMER01
//
// Name                    DDRC_CHE_REFRESH_TIMER01_REG
// Relative Address        0x000000A0
// Absolute Address        0xF80060A0
// Width                   24 bits
// Access Type             rw
// Reset Value             0x00008000
// Description             CHE_REFRESH_TIMER01
//
// Register DDRC_CHE_REFRESH_TIMER01_REG Details
//
enum TDDRC_CHE_REFRESH_TIMER01_REG
{
// RESERVED                              Properties: Bits: 23:12, Type: rw, Reset Value: 0x8

// RESERVED                              Properties: Bits: 11:0, Type: rw, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_T_ZQ
//
// Name                    DDRC_CHE_T_ZQ_REG
// Relative Address        0x000000A4
// Absolute Address        0xF80060A4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x10300802
// Description             ZQ parameters
//
// Register DDRC_CHE_T_ZQ_REG Details
//
enum TDDRC_CHE_T_ZQ_REG
{
                                                 // Properties: Bits: 31:22, Type: rw, Reset Value: 0x40
    DDRC_T_ZQ_SHORT_NOP_MASK =  0xFFC00000UL,    // DDR2: not applicable.
    DDRC_T_ZQ_SHORT_NOP_BPOS =  22UL,            // LPDDR2 and DDR3: Number of cycles of NOP
                                                 // required after a ZQCS (ZQ calibration short)
                                                 // command is issued to DRAM. Units: Clock cycles.

                                                 // Properties: Bits: 21:12, Type: rw, Reset Value: 0x300
    DDRC_T_ZQ_LONG_NOP_MASK  =  0x003FF000UL,    // DDR2: not applicable.
    DDRC_T_ZQ_LONG_NOP_BPOS  =  12UL,            // LPDDR2 and DDR3: Number of cycles of NOP
                                                 // required after a ZQCL (ZQ calibration long)
                                                 // command is issued to DRAM. Units: Clock cycles.

                                                 // Properties: Bits: 11:2, Type: rw, Reset Value: 0x200
    DDRC_T_MOD_MASK          =  0x00000FFCUL,    // Mode register set command update delay
    DDRC_T_MOD_BPOS          =  2UL,             // (minimum d'128)

                                                 // Properties: Bit: 1, Type: rw, Reset Value: 0x1
    DDRC_DDR3_MASK           =  0x00000002UL,    // Indicates operating in DDR2/DDR3 mode.
    DDRC_DDR3_BPOS           =  1UL,             // Default value is set for DDR3.

                                                 // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    DDRC_DIS_AUTO_ZQ_MASK    =  0x00000001UL,    // 1=disable controller generation of ZQCS
    DDRC_DIS_AUTO_ZQ_BPOS    =  0UL              // command. Co_gs_zq_calib_short can be used
                                                 // instead to control ZQ calibration commands.
                                                 // 0=internally generate ZQCS commands based on
                                                 // reg_ddrc_t_zq_short_interval_x1024. This is only
                                                 // present for implementations supporting DDR3
                                                 // and LPDDR2 devices.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_T_ZQ_SHORT_INTERVAL
//
// Name                     DDRC_CHE_T_ZQ_SHORT_INTERVAL_REG
// Relative Address         0x000000A8
// Absolute Address         0xF80060A8
// Width                    28 bits
// Access Type              rw
// Reset Value              0x0020003A
// Description              Misc parameters
//
// Register DDRC_CHE_T_ZQ_SHORT_INTERVAL_REG Details
//
enum TDDRC_CHE_T_ZQ_SHORT_INTERVAL_REG
{
                                                            // Properties: Bits: 27:20, Type: rw, Reset Value: 0x2
    DDRC_DRAM_RSTN_X1024_MASK           =  0x0FF00000UL,    // Number of cycles to assert DRAM reset signal
    DDRC_DRAM_RSTN_X1024_BPOS           =  20UL,            // during init sequence. Units: 1024 Clock cycles.
                                                            // Applicable for DDR3 only.

                                                            // Properties: Bits: 19:0, Type: rw, Reset Value: 0x3A
    DDRC_T_ZQ_SHORT_INTERVAL_X1024_MASK =  0x000FFFFFUL,    // DDR2: not used.
    DDRC_T_ZQ_SHORT_INTERVAL_X1024_BPOS =  0UL              // LPDDR2 and DDR3: Average interval to wait
                                                            // between automatically issuing ZQCS (ZQ
                                                            // calibration short) commands to DDR3 devices.
                                                            // Meaningless if reg_ddrc_dis_auto_zq=1. Units:
                                                            // 1024 Clock cycles.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DEEP_PWRDWN
//
// Name                     DDRC_DEEP_PWRDWN_REG
// Relative Address         0x000000AC
// Absolute Address         0xF80060AC
// Width                    9 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Deep powerdown (LPDDR2)
//
// Register DDRC_DEEP_PWRDWN_REG Details
//
enum TDDRC_DEEP_PWRDWN_REG
{
                                                         // Properties: Bits: 8:1, Type: rw, Reset Value: 0x0
    DDRC_DEEPPOWERDOWN_TO_X1024_MASK =  0x000001FEUL,    // DDR2 and DDR3: not sued.
    DDRC_DEEPPOWERDOWN_TO_X1024_BPOS =  1UL,             // LPDDR2: Minimum deep power down time.
                                                         // DDR exits from deep power down mode
                                                         // immediately after reg_ddrc_deeppowerdown_en
                                                         // is deasserted. Value from the spec is 500us. Units
                                                         // are in 1024 clock cycles.
                                                         // For performance only.

                                                         // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    DDRC_DEEPPOWERDOWN_EN_MASK       =  0x00000001UL,    // DDR2 and DDR3: not used.
    DDRC_DEEPPOWERDOWN_EN_BPOS       =  0UL              // LPDDR2:
                                                         // 0: Brings Controller out of Deep Powerdown
                                                         // mode.
                                                         // 1: Puts DRAM into Deep Powerdown mode when
                                                         // the transaction store is empty.
                                                         // For performance only. Dynamic Bit Field.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) REG_2C
//
// Name                    DDRC_REG_2C_REG
// Relative Address        0x000000B0
// Absolute Address        0xF80060B0
// Width                   29 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Training control
//
// Register DDRC_REG_2C_REG Details
//
enum TDDRC_REG_2C_REG
{
                                                        // Properties: Bit: 28, Type: rw, Reset Value: 0x0
    DDRC_DFI_RD_DATA_EYE_TRAIN_MASK =  0x10000000UL,    // DDR2: not applicable.
    DDRC_DFI_RD_DATA_EYE_TRAIN_BPOS =  28UL,            // LPDDR2 and DDR3:
                                                        // 0: Read Data Eye training is disabled
                                                        // 1: Read Data Eye training mode has been enabled
                                                        // as part of init sequence.

                                                        // Properties: Bit: 27, Type: rw, Reset Value: 0x0
    DDRC_DFI_RD_DQS_GATE_LEVEL_MASK =  0x08000000UL,    // 0: Read DQS gate leveling is disabled.
    DDRC_DFI_RD_DQS_GATE_LEVEL_BPOS =  27UL,            // 1: Read DQS Gate Leveling mode has been
                                                        // enabled as part of init sequence; Valid only for
                                                        // DDR3 DFI designs

                                                        // Properties: Bit: 26, Type: rw, Reset Value: 0x0
    DDRC_DFI_WR_LEVEL_EN_MASK       =  0x04000000UL,    // 0: Write leveling disabled.
    DDRC_DFI_WR_LEVEL_EN_BPOS       =  26UL,            // 1: Write leveling mode has been enabled as part of
                                                        // init sequence; Valid only for DDR3 DFI designs

                                                        // Properties: Bit: 25, Type: ro, Reset Value: 0x0
    DDRC_TRDLVL_MAX_ERROR_MASK      =  0x02000000UL,    // DDR2: not applicable.
    DDRC_TRDLVL_MAX_ERROR_BPOS      =  25UL,            // LPDDR2 and DDR3: When '1' indicates that the
                                                        // dfi_rdrlvl_max_x1024          timer has timed
                                                        // out. This is a Clear-on-Write register. If read
                                                        // leveling or gate training timed out, an error is
                                                        // indicated by the DDRC and this bit gets set. The
                                                        // value is held at that value until it is cleared.
                                                        // Clearing is done by writing a '0' to this register.

                                                        // Properties: Bit: 24, Type: ro, Reset Value: 0x0
    DDRC_TWRLVL_MAX_ERROR_MASK      =  0x01000000UL,    // When '1' indicates that the
    DDRC_TWRLVL_MAX_ERROR_BPOS      =  24UL,            // dfi_wrlvl_max_x1024          timer has timed
                                                        // out. This is a Clear-on-Write register. If write
                                                        // leveling timed out, an error is indicated by the
                                                        // DDRC and this bit gets set. The value is held until
                                                        // it is cleared.
                                                        // Clearing is done by writing a '0' to this register.
                                                        // Only present in designs that support DDR3.

                                                        // Properties: Bits: 23:12, Type: rw, Reset Value: 0x0
    DDRC_DFI_RDLVL_MAX_X1024_MASK   =  0x00FFF000UL,    // Read leveling maximum time.
    DDRC_DFI_RDLVL_MAX_X1024_BPOS   =  12UL,            // Specifies the maximum number of clock cycles
                                                        // that the controller will wait for a response
                                                        // (phy_dfi_rdlvl_resp) to a read leveling enable
                                                        // signal (ddrc_dfi_rdlvl_en or
                                                        // ddrc_dfi_rdlvl_gate_en). Only applicable when
                                                        // connecting to PHY's operating in 'PHY RdLvl
                                                        // Evaluation' mode. Typical value 0xFFF Units 1024
                                                        // clocks

                                                        // Properties: Bits: 11:0, Type: rw, Reset Value: 0x0
    DDRC_DFI_WRLVL_MAX_X1024_MASK   =  0x00000FFFUL,    // Write leveling maximum time. Specifies the
    DDRC_DFI_WRLVL_MAX_X1024_BPOS   =  0UL              // maximum number of clock cycles that the
                                                        // controller will wait for a response
                                                        // (phy_dfi_wrlvl_resp) to a write leveling enable
                                                        // signal (ddrc_dfi_wrlvl_en). Only applicable when
                                                        // connecting to PHY's operating in 'PHY WrLvl
                                                        // Evaluation' mode. Typical value 0xFFF Units 1024
                                                        // clocks

};

//------------------------------------------------------------------------------
//
// Register (DDRC) REG_2D
//
// Name                    DDRC_REG_2D_REG
// Relative Address        0x000000B4
// Absolute Address        0xF80060B4
// Width                   11 bits
// Access Type             rw
// Reset Value             0x00000200
// Description             Misc Debug
//
// Register DDRC_REG_2D_REG Details
//
enum TDDRC_REG_2D_REG
{
// RESERVED                                   Properties: Bit: 10, Type: rw, Reset Value: 0x0

                                           // Properties: Bit: 9, Type: rw, Reset Value: 0x1
    DDRC_SKIP_OCD_MASK =  0x00000200UL,    // This register must be kept at 1'b1. 1'b0 is NOT
    DDRC_SKIP_OCD_BPOS =  9UL,             // supported.
                                           // 1: Indicates the controller to skip OCD adjustment
                                           // step during DDR2 initialization. OCD_Default
                                           // and OCD_Exit are performed instead.
                                           // 0: Not supported.

// RESERVED                                   Properties: Bits: 8:0, Type: rw, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DFI_TIMING
//
// Name                     DDRC_DFI_TIMING_REG
// Relative Address         0x000000B8
// Absolute Address         0xF80060B8
// Width                    25 bits
// Access Type              rw
// Reset Value              0x00200067
// Description              DFI timing
//
// Register DDRC_DFI_TIMING_REG Details
//
enum TDDRC_DFI_TIMING_REG
{
                                                   // Properties: Bits: 24:15, Type: rw, Reset Value: 0x40
    DDRC_DFI_T_CTRLUP_MAX_MASK =  0x01FF8000UL,    // Specifies the maximum number of clock cycles
    DDRC_DFI_T_CTRLUP_MAX_BPOS =  15UL,            // that the ddrc_dfi_ctrlupd_req signal can assert.

                                                   // Properties: Bits: 14:5, Type: rw, Reset Value: 0x3
    DDRC_DFI_T_CTRLUP_MIN_MASK =  0x00007FE0UL,    // Specifies the minimum number of clock cycles
    DDRC_DFI_T_CTRLUP_MIN_BPOS =  5UL,             // that the ddrc_dfi_ctrlupd_req signal must be
                                                   // asserted.

                                                   // Properties: Bits: 4:0, Type: rw, Reset Value: 0x7
    DDRC_DFI_T_RDDATA_EN_MASK  =  0x0000001FUL,    // Time from the assertion of a READ command on
    DDRC_DFI_T_RDDATA_EN_BPOS  =  0UL              // the DFI interface to the assertion of the
                                                   // phy_dfi_rddata_en signal.
                                                   // DDR2 and DDR3: RL - 1
                                                   // LPDDR: RL
                                                   // Where RL is read latency of DRAM.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_ECC_CTRL
//
// Name                     DDRC_CHE_ECC_CTRL_REG
// Relative Address         0x000000C4
// Absolute Address         0xF80060C4
// Width                   2 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ECC error clear
//
// Register DDRC_CHE_ECC_CTRL_REG Details
//
enum TDDRC_CHE_ECC_CTRL_REG
{
                                                                     // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    DDRC_CLEAR_CORRECTABLE_DRAM_ECC_ERROR_MASK   =  0x00000002UL,    // Writing 1 to this bit will clear the correctable log
    DDRC_CLEAR_CORRECTABLE_DRAM_ECC_ERROR_BPOS   =  1UL,             // valid bit and the correctable error counters.
                                                                     // Write 0 to this bit will start capturing incoming
                                                                     // correctable error count.

                                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    DDRC_CLEAR_UNCORRECTABLE_DRAM_ECC_ERROR_MASK =  0x00000001UL,    // Writing 1 to this bit will clear the uncorrectable
    DDRC_CLEAR_UNCORRECTABLE_DRAM_ECC_ERROR_BPOS =  0UL              // log valid bit and the uncorrectable error counters.
                                                                     // Write 0 to this bit will start capturing incoming
                                                                     // uncorrectable error count.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_CORR_ECC_LOG
//
// Name                    DDRC_CHE_CORR_ECC_LOG_REG
// Relative Address        0x000000C8
// Absolute Address        0xF80060C8
// Width                   8 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             ECC error correction
//
// Register DDRC_CHE_CORR_ECC_LOG_REG Details
//
enum TDDRC_CHE_CORR_ECC_LOG_REG
{
                                                        // Properties: Bits: 7:1, Type: clronwr, Reset Value: 0x0
    DDRC_ECC_CORRECTED_BIT_NUM_MASK =  0x000000FEUL,    // Indicator of the bit number syndrome in error for
    DDRC_ECC_CORRECTED_BIT_NUM_BPOS =  1UL,             // single-bit errors. The field is 7-bit wide to handle
                                                        // 72-bits of data.
                                                        // This is an encoded value with ECC bits placed in
                                                        // between data. Correctable bit number from the
                                                        // lowest error lane is reported here. There are only
                                                        // 13-valid bits going to an ECC lane (8-data +
                                                        // 5-ECC). Only 4-bits are needed to encode a max
                                                        // value of d'13. Bit[7] of this register is used to
                                                        // indicate the exact byte lane. When a error
                                                        // happens, if CORR_ECC_LOG_COL[0] from
                                                        // register 0x33 is 1'b0, then the error happened in
                                                        // Lane 0 or 1. If CORR_ECC_LOG_COL[0] is 1'b1,
                                                        // then the error happened in Lane 2 or 3. Bit[7] of
                                                        // this register indicates whether the error is from
                                                        // upper or lower byte lane. If it is 0, then it is lower
                                                        // byte lane and if it is 1, then it is upper byte lane.
                                                        // Together with CORR_ECC_LOG_COL[0] and
                                                        // bit[7] of this register, the exact byte lane with
                                                        // correctable error can be determined.

                                                        // Properties: Bit: 0, Type: ro, Reset Value: 0x0
    DDRC_CORR_ECC_LOG_VALID_MASK    =  0x00000001UL,    // Set to 1 when a correctable ECC error is captured.
    DDRC_CORR_ECC_LOG_VALID_BPOS    =  0UL              // As long as this is 1 no further ECC errors will be
                                                        // captured. This is cleared when a 1 is written to
                                                        // register bit[1] of ECC CONTROL REGISTER
                                                        // (0x31)

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_CORR_ECC_ADDR
//
// Name                    DDRC_CHE_CORR_ECC_ADDR_REG
// Relative Address        0x000000CC
// Absolute Address        0xF80060CC
// Width                   31 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ECC error correction address log
//
// Register DDRC_CHE_CORR_ECC_ADDR_REG Details
//
enum TDDRC_CHE_CORR_ECC_ADDR_REG
{
                                                    // Properties: Bits: 30:28, Type: ro, Reset Value: 0x0
    DDRC_CORR_ECC_LOG_BANK_MASK =  0x70000000UL,    // Bank [2:0]
    DDRC_CORR_ECC_LOG_BANK_BPOS =  28UL,            // 

                                                    // Properties: Bits: 27:12, Type: ro, Reset Value: 0x0
    DDRC_CORR_ECC_LOG_ROW_MASK  =  0x0FFFF000UL,    // Row [15:0]
    DDRC_CORR_ECC_LOG_ROW_BPOS  =  12UL,            // 

                                                    // Properties: Bits: 11:0, Type: ro, Reset Value: 0x0
    DDRC_CORR_ECC_LOG_COL_MASK  =  0x00000FFFUL,    // Column [11:0]
    DDRC_CORR_ECC_LOG_COL_BPOS  =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_CORR_ECC_DATA_31_0
//
// Name                    DDRC_CHE_CORR_ECC_DATA_31_0_REG
// Relative Address        0x000000D0
// Absolute Address        0xF80060D0
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ECC error correction data log low
//
// Register DDRC_CHE_CORR_ECC_DATA_31_0_REG Details
//
enum TDDRC_CHE_CORR_ECC_DATA_31_0_REG
{
                                                        // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    DDRC_CORR_ECC_LOG_DAT_31_0_MASK =  0xFFFFFFFFUL,    // Bits [31:0] of the data that caused the captured
    DDRC_CORR_ECC_LOG_DAT_31_0_BPOS =  0UL              // correctable ECC error. (Data associated with the
                                                        // first ECC error if multiple errors occurred since
                                                        // CORR_ECC_LOG_VALID was cleared). Since
                                                        // each ECC engine handles 8-bits of data, only the
                                                        // lower 8-bits of this register have valid data. The
                                                        // upper 24-bits will always be 0.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_CORR_ECC_DATA_63_32
//
// Name                    DDRC_CHE_CORR_ECC_DATA_63_32_REG
// Relative Address        0x000000D4
// Absolute Address        0xF80060D4
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ECC error correction data log mid
//
// Register DDRC_CHE_CORR_ECC_DATA_63_32_REG Details
//
enum TDDRC_CHE_CORR_ECC_DATA_63_32_REG
{
                                                         // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    DDRC_CORR_ECC_LOG_DAT_63_32_MASK =  0xFFFFFFFFUL,    // Bits [63:32] of the data that caused the captured
    DDRC_CORR_ECC_LOG_DAT_63_32_BPOS =  0UL              // correctable ECC error. (Data associated with the
                                                         // first ECC error if multiple errors occurred since
                                                         // CORR_ECC_LOG_VALID was cleared) Since
                                                         // each ECC engine handles 8-bits of data and that is
                                                         // logged in register 0x34, all the 32-bits of this
                                                         // register will always be 0.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_CORR_ECC_DATA_71_64
//
// Name                    DDRC_CHE_CORR_ECC_DATA_71_64_REG
// Relative Address        0x000000D8
// Absolute Address        0xF80060D8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ECC error correction data log high
//
// Register DDRC_CHE_CORR_ECC_DATA_71_64_REG Details
//
enum TDDRC_CHE_CORR_ECC_DATA_71_64_REG
{
                                                         // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    DDRC_CORR_ECC_LOG_DAT_71_64_MASK =  0x000000FFUL,    // Bits [71:64] of the data that caused the captured
    DDRC_CORR_ECC_LOG_DAT_71_64_BPOS =  0UL              // correctable ECC error. (Data associated with the
                                                         // first ECC error if multiple errors occurred since
                                                         // CORR_ECC_LOG_VALID was cleared) 5-bits of
                                                         // ECC are calculated over 8-bits of data.
                                                         // Bits[68:64] carries these 5-bits. Bits[71:69] are
                                                         // always 0.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_UNCORR_ECC_LOG
//
// Name                    DDRC_CHE_UNCORR_ECC_LOG_REG
// Relative Address        0x000000DC
// Absolute Address        0xF80060DC
// Width                   1 bits
// Access Type             clronwr
// Reset Value             0x00000000
// Description             ECC unrecoverable error status
//
// Register DDRC_CHE_CORR_ECC_DATA_71_64_REG Details
//
enum TDDRC_CHE_UNCORR_ECC_LOG_REG
{
                                                       // Properties: Bit: 0, Type: clronwr, Reset Value: 0x0
    DDRC_UNCORR_ECC_LOG_VALID_MASK =  0x00000001UL,    // Set to 1 when an uncorrectable ECC error is
    DDRC_UNCORR_ECC_LOG_VALID_BPOS =  0UL              // captured. As long as this is a 1, no further ECC
                                                       // errors will be captured. This is cleared when a 1 is
                                                       // written to register bit[0] of ECC CONTROL
                                                       // REGISTER (0x31).

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_UNCORR_ECC_ADDR
//
// Name                    DDRC_CHE_UNCORR_ECC_ADDR_REG
// Relative Address        0x000000E0
// Absolute Address        0xF80060E0
// Width                   31 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ECC unrecoverable error address
//
// Register DDRC_CHE_UNCORR_ECC_ADDR_REG Details
//
enum TDDRC_CHE_UNCORR_ECC_ADDR_REG
{
                                                      // Properties: Bits: 30:28, Type: ro, Reset Value: 0x0
    DDRC_UNCORR_ECC_LOG_BANK_MASK =  0x70000000UL,    // Bank [2:0]
    DDRC_UNCORR_ECC_LOG_BANK_BPOS =  28UL,            // 

                                                      // Properties: Bits: 27:12, Type: ro, Reset Value: 0x0
    DDRC_UNCORR_ECC_LOG_ROW_MASK  =  0x0FFFF000UL,    // Row [15:0]
    DDRC_UNCORR_ECC_LOG_ROW_BPOS  =  12UL,            // 

                                                      // Properties: Bits: 11:0, Type: ro, Reset Value: 0x0
    DDRC_UNCORR_ECC_LOG_COL_MASK  =  0x00000FFFUL,    // Column [11:0]
    DDRC_UNCORR_ECC_LOG_COL_BPOS  =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_UNCORR_ECC_DATA_31_0
//
// Name                    DDRC_CHE_UNCORR_ECC_DATA_31_0_REG
// Relative Address        0x000000E4
// Absolute Address        0xF80060E4
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ECC unrecoverable error data low
//
// Register DDRC_CHE_UNCORR_ECC_DATA_31_0_REG Details
//
enum TDDRC_CHE_UNCORR_ECC_DATA_31_0_REG
{
                                                          // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    DDRC_UNCORR_ECC_LOG_DAT_31_0_MASK =  0xFFFFFFFFUL,    // bits [31:0] of the data that caused the captured
    DDRC_UNCORR_ECC_LOG_DAT_31_0_BPOS =  0UL              // uncorrectable ECC error. (Data associated with
                                                          // the first ECC error if multiple errors occurred
                                                          // since UNCORR_ECC_LOG_VALID was cleared).
                                                          // Since each ECC engine handles 8-bits of data, only
                                                          // the lower 8-bits of this register have valid data.
                                                          // The upper 24-bits will always be 0.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_UNCORR_ECC_DATA_63_32
//
// Name                    DDRC_CHE_UNCORR_ECC_DATA_63_32_REG
// Relative Address        0x000000E8
// Absolute Address        0xF80060E8
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ECC unrecoverable error data middle
//
// Register DDRC_CHE_UNCORR_ECC_DATA_63_32_REG Details
//
enum TDDRC_CHE_UNCORR_ECC_DATA_63_32_REG
{
                                                           // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    DDRC_UNCORR_ECC_LOG_DAT_63_32_MASK =  0xFFFFFFFFUL,    // bits [63:32] of the data that caused the captured
    DDRC_UNCORR_ECC_LOG_DAT_63_32_BPOS =  0UL              // uncorrectable ECC error. (Data associated with
                                                           // the first ECC error if multiple errors occurred
                                                           // since CORR_ECC_LOG_VALID was cleared)
                                                           // Since each ECC engine handles 8-bits of data and
                                                           // that is logged in register 0x34, all the 32-bits of this
                                                           // register will always be 0.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_UNCORR_ECC_DATA_71_64
//
// Name                    DDRC_CHE_UNCORR_ECC_DATA_71_64_REG
// Relative Address        0x000000EC
// Absolute Address        0xF80060EC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ECC unrecoverable error data high
//
// Register DDRC_CHE_UNCORR_ECC_DATA_71_64_REG Details
//
enum TDDRC_CHE_UNCORR_ECC_DATA_71_64_REG
{
                                                           // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    DDRC_UNCORR_ECC_LOG_DAT_71_64_MASK =  0x000000FFUL,    // bits [71:64] of the data that caused the captured
    DDRC_UNCORR_ECC_LOG_DAT_71_64_BPOS =  0UL              // uncorrectable ECC error. (Data associated with
                                                           // the first ECC error if multiple errors occurred
                                                           // since UNCORR_ECC_LOG_VALID was cleared)
                                                           // 5-bits of ECC are calculated over 8-bits of data.
                                                           // Bits[68:64] carries these 5-bits. Bits[71:69] are
                                                           // always 0.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_ECC_STATS
//
// Name                    DDRC_CHE_ECC_STATS_REG
// Relative Address        0x000000F0
// Absolute Address        0xF80060F0
// Width                   16 bits
// Access Type             clronwr
// Reset Value             0x00000000
// Description             ECC error count
//
// Register DDRC_CHE_ECC_STATS_REG Details
//
enum TDDRC_CHE_ECC_STATS_REG
{
                                                      // Properties: Bits: 15:8, Type: clronwr, Reset Value: 0x0
    DDRC_STAT_NUM_CORR_ERR_MASK   =  0x0000FF00UL,    // Returns the number of correctable ECC errors
    DDRC_STAT_NUM_CORR_ERR_BPOS   =  8UL,             // seen since the last read. Counter saturates at max
                                                      // value. This is cleared when a 1 is written to
                                                      // register bit[1] of ECC CONTROL REGISTER
                                                      // (0x58).

                                                      // Properties: Bits: 7:0, Type: clronwr, Reset Value: 0x0
    DDRC_STAT_NUM_UNCORR_ERR_MASK =  0x000000FFUL,    // Returns the number of uncorrectable errors since
    DDRC_STAT_NUM_UNCORR_ERR_BPOS =  0UL              // the last read. Counter saturates at max value. This
                                                      // is cleared when a 1 is written to register bit[0] of
                                                      // ECC CONTROL REGISTER (0x58).

};

//------------------------------------------------------------------------------
//
// Register (DDRC) ECC_SCRUB
//
// Name                    DDRC_ECC_SCRUB_REG
// Relative Address        0x000000F4
// Absolute Address        0xF80060F4
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000008
// Description             ECC mode/scrub
//
// Register DDRC_ECC_SCRUB_REG Details
//
enum TDDRC_ECC_SCRUB_REG
{
                                            // Properties: Bit: 3, Type: rw, Reset Value: 0x1
    DDRC_DIS_SCRUB_MASK =  0x00000008UL,    // 0: Enable ECC scrubs (valid only when
    DDRC_DIS_SCRUB_BPOS =  3UL,             // ecc_mode          = 100).
                                            // 1: Disable ECC scrubs

                                            // Properties: Bits: 2:0, Type: rw, Reset Value: 0x0
    DDRC_ECC_MODE_MASK  =  0x00000007UL,    // DRAM ECC Mode. The only valid values that
    DDRC_ECC_MODE_BPOS  =  0UL              // works for this project are 000 (No ECC) and 100
                                            // (SEC/DED over 1-beat). To run the design in ECC
                                            // mode, set data_bus_width          to 2'b01
                                            // (Half bus width) and ecc_mode          to 100.
                                            // In this mode, there will be 16-data bits + 6-bit ECC
                                            // on the DRAM bus. Controller must NOT be put in
                                            // full bus width mode, when ECC is turned ON.
                                            // 000 : No ECC,
                                            // 001: Reserved
                                            // 010: Parity
                                            // 011: Reserved
                                            // 100: SEC/DED over 1-beat
                                            // 101: SEC/DED over multiple beats
                                            // 110: Device Correction
                                            // 111: Reserved

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_ECC_CORR_BIT_MASK_31_0
//
// Name                    DDRC_CHE_ECC_CORR_BIT_MASK_31_0_REG
// Relative Address        0x000000F8
// Absolute Address        0xF80060F8
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ECC data mask low
//
// Register DDRC_CHE_ECC_CORR_BIT_MASK_31_0_REG Details
//
enum TDDRC_CHE_ECC_CORR_BIT_MASK_31_0_REG
{
                                                         // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    DDRC_ECC_CORR_BIT_MASK_32_0_MASK =  0xFFFFFFFFUL,    // Bits [31:0] of ddrc_reg_ecc_corr_bit_mask
    DDRC_ECC_CORR_BIT_MASK_32_0_BPOS =  0UL              // register. Indicates the mask of the corrected data.
                                                         // 1 - on any bit indicates that the bit has been
                                                         // corrected by the DRAM ECC logic 0 - on any bit
                                                         // indicates that the bit has NOT been corrected by
                                                         // the DRAM ECC logic. Valid when any bit of
                                                         // 'ddrc_reg_ecc_corrected_err' is high. This mask
                                                         // doesn't indicate any correction that has been
                                                         // made in the ECC check bits. If there are errors in
                                                         // multiple lanes, then this signal will have the mask
                                                         // for the lowest lane. Each ECC engine works on
                                                         // 8-bits of data. Hence only the lower 8-bits carry
                                                         // valid information. Upper 24-bits are always 0.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) CHE_ECC_CORR_BIT_MASK_63_32
//
// Name                     DDRC_CHE_ECC_CORR_BIT_MASK_63_32_REG
// Relative Address         0x000000FC
// Absolute Address         0xF80060FC
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              ECC data mask high
//
// Register DDRC_CHE_ECC_CORR_BIT_MASK_63_32_REG Details
//
enum TDDRC_CHE_ECC_CORR_BIT_MASK_63_32_REG
{
                                                          // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    DDRC_ECC_CORR_BIT_MASK_63_32_MASK =  0xFFFFFFFFUL,    // Bits [63:32] of ddrc_reg_ecc_corr_bit_mask
    DDRC_ECC_CORR_BIT_MASK_63_32_BPOS =  0UL              // register. Indicates the mask of the corrected data.
                                                          // 1 - on any bit indicates that the bit has been
                                                          // corrected by the DRAM ECC logic 0 - on any bit
                                                          // indicates that the bit has NOT been corrected by
                                                          // the DRAM ECC logic. Valid when any bit of
                                                          // 'ddrc_reg_ecc_corrected_err' is high. This mask
                                                          // doesn't indicate any correction that has been
                                                          // made in the ECC check bits. If there are errors in
                                                          // multiple lanes, then this signal will have the mask
                                                          // for the lowest lane. Each ECC engine works on
                                                          // 8-bits of data and this is reported in register 0x3E.
                                                          // All 32-bits of this register are 0 always.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PHY_RCVR_ENABLE
//
// Name                      DDRC_PHY_RCVR_ENABLE_REG
// Relative Address          0x00000114
// Absolute Address          0xF8006114
// Width                     8 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               Phy receiver enable register
//
// Register DDRC_PHY_RCVR_ENABLE_REG Details
//
enum TDDRC_PHY_RCVR_ENABLE_REG
{
                                              // Properties: Bits: 7:4, Type: rw, Reset Value: 0x0
    DDRC_PHY_DIF_OFF_MASK =  0x000000F0UL,    // Value to drive to IO receiver enable pins when
    DDRC_PHY_DIF_OFF_BPOS =  4UL,             // turning it OFF.
                                              // When in powerdown or self-refresh (CKE=0) this
                                              // value will be sent to the IOs to control receiver
                                              // on/off.
                                              // IOD is the size specified by the IO_DIFEN_SIZE
                                              // parameter.
                                              // Depending on the IO, one of these signals dif_on
                                              // or dif_off can be used.

                                              // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    DDRC_PHY_DIF_ON_MASK  =  0x0000000FUL,    // Value to drive to IO receiver enable pins when
    DDRC_PHY_DIF_ON_BPOS  =  0UL              // turning it ON.
                                              // When NOT in powerdown or self-refresh (when
                                              // CKE=1) this value will be sent to the IOs to control
                                              // receiver on/off.
                                              // IOD is the size specified by the IO_DIFEN_SIZE
                                              // parameter.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PHY_CONFIG0
//
// Name                      DDRC_PHY_CONFIG0_REG
// Relative Address          0x00000118
// Absolute Address          0xF8006118
// Width                     31 bits
// Access Type               rw
// Reset Value               0x40000001
// Description               PHY configuration register for data slice 0.
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//            Name                   Address
// PHY_Config0             0xf8006118
// PHY_Config1             0xf800611c
// PHY_Config2             0xf8006120
// PHY_Config3             0xf8006124
//
// Register PHY_Config0 to PHY_Config3 Details
//
enum TDDRC_PHY_CONFIG0_REG
{
                                                        // Properties: Bits: 30:24, Type: rw, Reset Value: 0x40
    DDRC_PHY_DQ_OFFSET_MASK         =  0x7F000000UL,    // Offset value from DQS to DQ. Default value: 0x40
    DDRC_PHY_DQ_OFFSET_BPOS         =  24UL,            // (for 90 degree shift).
                                                        // This is only used when reg_phy_use_wr_level=1.
                                                        // #Note: When a port width (W) is multiple of N
                                                        // instances of Ranks or Slices, each instance will get
                                                        // W/N bits. Instance n will get (n+1)*(W/N) -1: n
                                                        // (W/N) bits where n (0, 1, to N-1) is the instance
                                                        // number of Rank or Slice.

// RESERVED                                                Properties: Bits: 23:15, Type: rw, Reset Value: 0x0

// RESERVED                                                Properties: Bits: 14:6, Type: rw, Reset Value: 0x0

// RESERVED                                                Properties: Bit: 5, Type: rw, Reset Value: 0x0

// RESERVED                                                Properties: Bit: 4, Type: rw, Reset Value: 0x0

                                                        // Properties: Bit: 3, Type: rw, Reset Value: 0x0
    DDRC_PHY_WRLVL_INC_MODE_MASK    =  0x00000008UL,    // reserved
    DDRC_PHY_WRLVL_INC_MODE_BPOS    =  3UL,             // 

                                                        // Properties: Bit: 2, Type: rw, Reset Value: 0x0
    DDRC_PHY_GATELVL_INC_MODE_MASK  =  0x00000004UL,    // reserved
    DDRC_PHY_GATELVL_INC_MODE_BPOS  =  2UL,             // 

                                                        // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    DDRC_PHY_RDLVL_INC_MODE_MASK    =  0x00000002UL,    // reserved
    DDRC_PHY_RDLVL_INC_MODE_BPOS    =  1UL,             // 

                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x1
    DDRC_PHY_DATA_SLICE_IN_USE_MASK =  0x00000001UL,    // Data bus width selection for Read FIFO RE
    DDRC_PHY_DATA_SLICE_IN_USE_BPOS =  0UL              // generation. One bit for each data slice.
                                                        // 0: read data responses are ignored.
                                                        // 1: data slice is valid.
                                                        // Note: The Phy Data Slice 0 must always be
                                                        // enabled.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PHY_INIT_RATIO0
//
// Name                    DDRC_PHY_INIT_RATIO0_REG
// Relative Address        0x0000012C
// Absolute Address        0xF800612C
// Width                   20 bits
// Access Type             rw
// Reset Value               0x00000000
// Description               PHY init ratio register for data slice 0.
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//         Name                        Address
// phy_init_ratio0           0xf800612c
// phy_init_ratio1           0xf8006130
// phy_init_ratio2           0xf8006134
// phy_init_ratio3           0xf8006138
//
// Register phy_init_ratio0 to phy_init_ratio3 Details
//
enum TDDRC_PHY_INIT_RATIO0_REG
{
                                                         // Properties: Bits: 19:10, Type: rw, Reset Value: 0x0
    DDRC_PHY_GATELVL_INIT_RATIO_MASK =  0x000FFC00UL,    // The user programmable init ratio used Gate
    DDRC_PHY_GATELVL_INIT_RATIO_BPOS =  10UL,            // Leveling FSM

                                                         // Properties: Bits: 9:0, Type: rw, Reset Value: 0x0
    DDRC_PHY_WRLVL_INIT_RATIO_MASK   =  0x000003FFUL,    // The user programmable init ratio used by Write
    DDRC_PHY_WRLVL_INIT_RATIO_BPOS   =  0UL              // Leveling FSM

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PHY_RD_DQS_CFG0
//
// Name                      DDRC_PHY_RD_DQS_CFG0_REG
// Relative Address          0x00000140
// Absolute Address          0xF8006140
// Width                     20 bits
// Access Type               rw
// Reset Value               0x00000040
// Description               PHY read DQS configuration register for data slice 0.
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//         Name                        Address
// phy_rd_dqs_cfg0           0xf8006140
// phy_rd_dqs_cfg1           0xf8006144
// phy_rd_dqs_cfg2           0xf8006148
// phy_rd_dqs_cfg3           0xf800614c
//
// Register phy_rd_dqs_cfg0 to phy_rd_dqs_cfg3 Details
//
enum TDDRC_PHY_RD_DQS_CFG0_REG
{
                                                         // Properties: Bits: 19:11, Type: rw, Reset Value: 0x0
    DDRC_PHY_RD_DQS_SLAVE_DELAY_MASK =  0x000FF800UL,    // If phy_rd_dqs_slave_force     is 1, replace
    DDRC_PHY_RD_DQS_SLAVE_DELAY_BPOS =  11UL,            // delay/tap value for read DQS slave DLL with this
                                                         // value.

                                                         // Properties: Bit: 10, Type: rw, Reset Value: 0x0
    DDRC_PHY_RD_DQS_SLAVE_FORCE_MASK =  0x00000400UL,    // 0: Use phy_rd_dqs_slave_ratio     for the read
    DDRC_PHY_RD_DQS_SLAVE_FORCE_BPOS =  10UL,            // DQS slave DLL
                                                         // 1: overwrite the delay/tap value for read DQS
                                                         // slave DLL with the value of the
                                                         // phy_rd_dqs_slave_delay     bus.

                                                         // Properties: Bits: 9:0, Type: rw, Reset Value: 0x40
    DDRC_PHY_RD_DQS_SLAVE_RATIO_MASK =  0x000003FFUL,    // Ratio value for read DQS slave DLL. This is the
    DDRC_PHY_RD_DQS_SLAVE_RATIO_BPOS =  0UL              // fraction of a clock cycle represented by the shift to
                                                         // be applied to the read DQS in units of 256ths. In
                                                         // other words, the full-cycle tap value from the
                                                         // master DLL will be scaled by this number over
                                                         // 256 to get the delay value for the slave delay line.
                                                         // Provide a default value of 0x40 for most
                                                         // applications

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PHY_WR_DQS_CFG0
//
// Name                      DDRC_PHY_WR_DQS_CFG0_REG
// Relative Address          0x00000154
// Absolute Address          0xF8006154
// Width                     20 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               PHY write DQS configuration register for data slice 0.
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//         Name                        Address
// phy_wr_dqs_cfg0           0xf8006154
// phy_wr_dqs_cfg1           0xf8006158
// phy_wr_dqs_cfg2           0xf800615c
// phy_wr_dqs_cfg3           0xf8006160
//
// Register phy_wr_dqs_cfg0 to phy_wr_dqs_cfg3 Details
//
enum TDDRC_PHY_WR_DQS_CFG0_REG
{
                                                         // Properties: Bits: 19:11, Type: rw, Reset Value: 0x0
    DDRC_PHY_WR_DQS_SLAVE_DELAY_MASK =  0x000FF800UL,    // If phy_wr_dqs_slave_force     is 1, replace
    DDRC_PHY_WR_DQS_SLAVE_DELAY_BPOS =  11UL,            // delay/tap value for write DQS slave DLL with
                                                         // this value.

                                                         // Properties: Bit: 10, Type: rw, Reset Value: 0x0
    DDRC_PHY_WR_DQS_SLAVE_FORCE_MASK =  0x00000400UL,    // 0: Use phy_wr_dqs_slave_ratio     for the write
    DDRC_PHY_WR_DQS_SLAVE_FORCE_BPOS =  10UL,            // DQS slave DLL
                                                         // 1: overwrite the delay/tap value for write DQS
                                                         // slave DLL with the value of the
                                                         // phy_wr_dqs_slave_delay     bus.

                                                         // Properties: Bits: 9:0, Type: rw, Reset Value: 0x0
    DDRC_PHY_WR_DQS_SLAVE_RATIO_MASK =  0x000003FFUL,    // Ratio value for write DQS slave DLL. This is the
    DDRC_PHY_WR_DQS_SLAVE_RATIO_BPOS =  0UL              // fraction of a clock cycle represented by the shift to
                                                         // be applied to the write DQS in units of 256ths. In
                                                         // other words, the full-cycle tap value from the
                                                         // master DLL will be scaled by this number over
                                                         // 256 to get the delay value for the slave delay line.
                                                         // (Used to program the manual training ratio value)

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PHY_WE_CFG0
//
// Name                      DDRC_PHY_WE_CFG0_REG
// Relative Address          0x00000168
// Absolute Address          0xF8006168
// Width                     21 bits
// Access Type               rw
// Reset Value               0x00000040
// Description               PHY FIFO write enable configuration for data slice 0.
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//         Name                        Address
// phy_we_cfg0               0xf8006168
// phy_we_cfg1               0xf800616c
// phy_we_cfg2               0xf8006170
// phy_we_cfg3               0xf8006174
//
// Register phy_we_cfg0 to phy_we_cfg3 Details
//
enum TDDRC_PHY_WE_CFG0_REG
{
                                                          // Properties: Bits: 20:12, Type: rw, Reset Value: 0x0
    DDRC_PHY_FIFO_WE_IN_DELAY_MASK    =  0x001FF000UL,    // Delay value to be used when
    DDRC_PHY_FIFO_WE_IN_DELAY_BPOS    =  12UL,            // reg_phy_fifo_we_in_force
                                                          // is set to 1.

                                                          // Properties: Bit: 11, Type: rw, Reset Value: 0x0
    DDRC_PHY_FIFO_WE_IN_FORCE_MASK    =  0x00000800UL,    // 0: Use phy_fifo_we_slave_ratio     as ratio value
    DDRC_PHY_FIFO_WE_IN_FORCE_BPOS    =  11UL,            // for fifo_we_X slave DLL
                                                          // 1: overwrite the delay/tap value for fifo_we_X
                                                          // slave DLL with the value of the
                                                          // phy_fifo_we_in_delay     bus.
                                                          // i.e. The 'force' bit selects between specifying the
                                                          // delay in 'ratio' units or tap delay units

                                                          // Properties: Bits: 10:0, Type: rw, Reset Value: 0x40
    DDRC_PHY_FIFO_WE_SLAVE_RATIO_MASK =  0x000007FFUL,    // Ratio value to be used when
    DDRC_PHY_FIFO_WE_SLAVE_RATIO_BPOS =  0UL              // phy_fifo_we_in_force     is set to 0.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) WR_DATA_SLV0
//
// Name                      DDRC_WR_DATA_SLV0_REG
// Relative Address          0x0000017C
// Absolute Address          0xF800617C
// Width                     20 bits
// Access Type               rw
// Reset Value               0x00000080
// Description               PHY write data slave ratio config for data slice 0.
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//         Name                        Address
// wr_data_slv0              0xf800617c
// wr_data_slv1              0xf8006180
// wr_data_slv2              0xf8006184
// wr_data_slv3              0xf8006188
//
// Register wr_data_slv0 to wr_data_slv3 Details
//
enum TDDRC_WR_DATA_SLV0_REG
{
                                                          // Properties: Bits: 19:11, Type: rw, Reset Value: 0x0
    DDRC_PHY_WR_DATA_SLAVE_DELAY_MASK =  0x000FF800UL,    // If phy_wr_data_slave_force     is 1, replace
    DDRC_PHY_WR_DATA_SLAVE_DELAY_BPOS =  11UL,            // delay/tap value for write data slave DLL with
                                                          // this value.

                                                          // Properties: Bit: 10, Type: rw, Reset Value: 0x0
    DDRC_PHY_WR_DATA_SLAVE_FORCE_MASK =  0x00000400UL,    // 0: Selects phy_wr_data_slave_ratio     for write
    DDRC_PHY_WR_DATA_SLAVE_FORCE_BPOS =  10UL,            // data slave DLL
                                                          // 1: overwrite the delay/tap value for write data
                                                          // slave DLL with the value of the
                                                          // phy_wr_data_slave_force     bus.

                                                          // Properties: Bits: 9:0, Type: rw, Reset Value: 0x80
    DDRC_PHY_WR_DATA_SLAVE_RATIO_MASK =  0x000003FFUL,    // Ratio value for write data slave DLL. This is the
    DDRC_PHY_WR_DATA_SLAVE_RATIO_BPOS =  0UL              // fraction of a clock cycle represented by the shift to
                                                          // be applied to the write DQ muxes in units of
                                                          // 256ths. In other words, the full-cycle tap value
                                                          // from the master DLL will be scaled by this
                                                          // number over 256 to get the delay value for the
                                                          // slave delay line.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) REG_64
//
// Name                     DDRC_REG_64_REG
// Relative Address         0x00000190
// Absolute Address         0xF8006190
// Width                    32 bits
// Access Type              rw
// Reset Value              0x10020000
// Description              Training control 2
//
// Register DDRC_PHY_CONFIG0_REG Details
//
enum TDDRC_REG_64_REG
{
// RESERVED                                                Properties: Bit: 31, Type: rw, Reset Value: 0x0

                                                        // Properties: Bit: 30, Type: rw, Reset Value: 0x0
    DDRC_PHY_CMD_LATENCY_MASK       =  0x40000000UL,    // If set to 1, command comes to phy_ctrl through a
    DDRC_PHY_CMD_LATENCY_BPOS       =  30UL,            // flop.

                                                        // Properties: Bit: 29, Type: rw, Reset Value: 0x0
    DDRC_PHY_LPDDR_MASK             =  0x20000000UL,    // 0: DDR2 or DDR3.
    DDRC_PHY_LPDDR_BPOS             =  29UL,            // 1: LPDDR2.

// RESERVED                                                Properties: Bit: 28, Type: rw, Reset Value: 0x1

                                                        // Properties: Bits: 27:21, Type: rw, Reset Value: 0x0
    DDRC_PHY_CTRL_SLAVE_DELAY0_MASK =  0x0FE00000UL,    // If phy_rd_dqs_slave_force     is 1, replace
    DDRC_PHY_CTRL_SLAVE_DELAY0_BPOS =  21UL,            // delay/tap value for address/command timing
                                                        // slave DLL with this value. This is a bit value, the
                                                        // remaining 2 bits are in register 0x65 bits[19:18].

                                                        // Properties: Bit: 20, Type: rw, Reset Value: 0x0
    DDRC_PHY_CTRL_SLAVE_FORCE_MASK  =  0x00100000UL,    // 0: Use phy_ctrl_slave_ratio     for
    DDRC_PHY_CTRL_SLAVE_FORCE_BPOS  =  20UL,            // address/command timing slave DLL
                                                        // 1: overwrite the delay/tap value for
                                                        // address/command timing slave DLL with the
                                                        // value of the phy_rd_dqs_slave_delay     bus.

                                                        // Properties: Bits: 19:10, Type: rw, Reset Value: 0x80
    DDRC_PHY_CTRL_SLAVE_RATIO_MASK  =  0x000FFC00UL,    // Ratio value for address/command launch timing
    DDRC_PHY_CTRL_SLAVE_RATIO_BPOS  =  10UL,            // in phy_ctrl macro. This is the fraction of a clock
                                                        // cycle represented by the shift to be applied to the
                                                        // read DQS in units of 256ths. In other words, the
                                                        // full cycle tap value from the master DLL will be
                                                        // scaled by this number over 256 to get the delay
                                                        // value for the slave delay line.

                                                        // Properties: Bit: 9, Type: rw, Reset Value: 0x0
    DDRC_PHY_SEL_LOGIC_MASK         =  0x00000200UL,    // Selects one of the two read leveling
    DDRC_PHY_SEL_LOGIC_BPOS         =  9UL,             // algorithms.'b0: Select algorithm # 1'b1: Select
                                                        // algorithm # 2
                                                        // Please refer to Read Data Eye Training section in
                                                        // PHY User Guide for details about the Read
                                                        // Leveling algorithms

// RESERVED                                                Properties: Bit: 8, Type: rw, Reset Value: 0x0

                                                        // Properties: Bit: 7, Type: rw, Reset Value: 0x0
    DDRC_PHY_INVERT_CLKOUT_MASK     =  0x00000080UL,    // Inverts the polarity of DRAM clock.
    DDRC_PHY_INVERT_CLKOUT_BPOS     =  7UL,             // : core clock is passed on to DRAM
                                                        // : inverted core clock is passed on to DRAM.
                                                        // se this when CLK can arrive at a DRAM device
                                                        // head of DQS or coincidence with DQS based on
                                                        // oard topology. This effectively delays the CLK to
                                                        // he DRAM device by half -cycle, providing a CLK
                                                        // dge that DQS can align to during leveling.

// RESERVED                                                Properties: Bits: 6:5, Type: rw, Reset Value: 0x0

// RESERVED                                                Properties: Bit: 4, Type: rw, Reset Value: 0x0

// RESERVED                                                Properties: Bit: 3, Type: rw, Reset Value: 0x0

// RESERVED                                                Properties: Bit: 2, Type: rw, Reset Value: 0x0

                                                        // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    DDRC_PHY_BL2_MASK               =  0x00000002UL,    // Reserved for future Use.
    DDRC_PHY_BL2_BPOS               =  1UL,             // 

// RESERVED                                                Properties: Bit: 0, Type: rw, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (DDRC) REG_65
//
// Name                     DDRC_REG_65_REG
// Relative Address         0x00000194
// Absolute Address         0xF8006194
// Width                    20 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Training control 3
//
// Register DDRC_REG_65_REG Details
//     The fifo_we_slave ratios for each slice(0 through 3) must be interpreted by software in the following way:
//     Slice 0: fifo_we_ratio_slice_0[10:0] = {Reg_6A[9],Reg_69[18:9]}
//     Slice1: fifo_we_ratio_slice_1[10:0] = {Reg_6B[10:9],Reg_6A[18:10]}
//     Slice2: fifo_we_ratio_slice_2[10:0] = {Reg_6C[11:9],Reg_6B[18:11]}
//     Slice3: fifo_we_ratio_slice_3[10:0] = {phy_reg_rdlvl_fifowein_ratio_slice3_msb,Reg_6C[18:12]}
//
enum TDDRC_REG_65_REG
{
                                                            // Properties: Bits: 19:18, Type: rw, Reset Value: 0x0
    DDRC_PHY_CTRL_SLAVE_DELAY1_MASK     =  0x000C0000UL,    // If phy_rd_dqs_slave_force     is 1, replace
    DDRC_PHY_CTRL_SLAVE_DELAY1_BPOS     =  18UL,            // delay/tap value for address/command timing
                                                            // slave DLL with this value

                                                            // Properties: Bit: 17, Type: rw, Reset Value: 0x0
    DDRC_PHY_DIS_CALIB_RST_MASK         =  0x00020000UL,    // Disable the dll_calib (internally generated) signal
    DDRC_PHY_DIS_CALIB_RST_BPOS         =  17UL,            // from resetting the Read Capture FIFO pointers
                                                            // and portions of phy_data.
                                                            // Note: dll_calib is
                                                            // (i) generated by dfi_ctrl_upd_req or
                                                            // (ii) by the PHY when it detects that the clock
                                                            // frequency variation has exceeded the bounds set
                                                            // by phy_dll_lock_diff     or
                                                            // (iii) periodically throughout the leveling process.
                                                            // dll_calib will update the slave DL with
                                                            // PVT-compensated values according to master
                                                            // DLL outputs

                                                            // Properties: Bit: 16, Type: rw, Reset Value: 0x0
    DDRC_PHY_USE_RD_DATA_EYE_LEVEL_MASK =  0x00010000UL,    // Read Data Eye training control.
    DDRC_PHY_USE_RD_DATA_EYE_LEVEL_BPOS =  16UL,            // 0: Use register programmed ratio values
                                                            // 1: Use ratio for delay line calculated by data eye
                                                            // leveling
                                                            // Note: This is a Synchronous dynamic signal that
                                                            // requires timing closure

                                                            // Properties: Bit: 15, Type: rw, Reset Value: 0x0
    DDRC_PHY_USE_RD_DQS_GATE_LEVEL_MASK =  0x00008000UL,    // Read DQS Gate training control.
    DDRC_PHY_USE_RD_DQS_GATE_LEVEL_BPOS =  15UL,            // 0: Use register programmed ratio values
                                                            // 1: Use ratio for delay line calculated by DQS gate
                                                            // leveling
                                                            // Note: This is a Synchronous dynamic signal that
                                                            // requires timing closure.

                                                            // Properties: Bit: 14, Type: rw, Reset Value: 0x0
    DDRC_PHY_USE_WR_LEVEL_MASK          =  0x00004000UL,    // Write Leveling training control.
    DDRC_PHY_USE_WR_LEVEL_BPOS          =  14UL,            // 0: Use register programmed ratio values
                                                            // 1: Use ratio for delay line calculated by write
                                                            // leveling
                                                            // Note: This is a Synchronous dynamic signal that
                                                            // requires timing closure.

                                                            // Properties: Bits: 13:10, Type: rw, Reset Value: 0x0
    DDRC_PHY_DLL_LOCK_DIFF_MASK         =  0x00003C00UL,    // The Maximum number of delay line taps
    DDRC_PHY_DLL_LOCK_DIFF_BPOS         =  10UL,            // variation allowed while maintaining the master
                                                            // DLL lock.
                                                            // When the PHY is in locked state and the variation
                                                            // on the clock exceeds the variation indicated by the
                                                            // register, the lock signal is deasserted

                                                            // Properties: Bits: 9:5, Type: rw, Reset Value: 0x0
    DDRC_PHY_RD_RL_DELAY_MASK           =  0x000003E0UL,    // This delay determines when to select the active
    DDRC_PHY_RD_RL_DELAY_BPOS           =  5UL,             // rank's ratio logic delay for Read Data and Read
                                                            // DQS slave delay lines after PHY receives a read
                                                            // command at Control Interface.
                                                            // The programmed value must be (Read Latency -
                                                            // 3) with a minimum value of 1.

                                                            // Properties: Bits: 4:0, Type: rw, Reset Value: 0x0
    DDRC_PHY_WR_RL_DELAY_MASK           =  0x0000001FUL,    // This delay determines when to select the active
    DDRC_PHY_WR_RL_DELAY_BPOS           =  0UL              // rank's ratio logic delay for Write Data and Write
                                                            // DQS slave delay lines after PHY receives a write
                                                            // command at Control Interface.
                                                            // The programmed value must be (Write Latency -
                                                            // 4) with a minimum value of 1.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) REG69_6A0
//
// Name                     DDRC_REG69_6A0_REG
// Relative Address         0x000001A4
// Absolute Address         0xF80061A4
// Width                    29 bits
// Access Type              ro
// Reset Value              0x00070000
// Description              Training results for data slice 0.
//
// Register DDRC_REG69_6A0_REG Details
//
enum TDDRC_REG69_6A0_REG
{
                                                                      // Properties: Bits: 27:19, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_FIFO_WE_SLAVE_DLL_VALUE0_MASK =  0x0FF80000UL,    // Delay value applied to FIFO WE slave DLL.
    DDRC_PHY_STATUS_FIFO_WE_SLAVE_DLL_VALUE0_BPOS =  19UL,            // 

                                                                      // Properties: Bits: 18:9, Type: ro, Reset Value: 0x380
    DDRC_PHY_RDLVL_FIFOWEIN_RATIO0_MASK           =  0x0007FE00UL,    // Ratio value generated by Read Gate training FSM.
    DDRC_PHY_RDLVL_FIFOWEIN_RATIO0_BPOS           =  9UL,             // 

// RESERVED                                                              Properties: Bits: 8:0, Type: ro, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (DDRC) REG69_6A1
//
// Name                     DDRC_REG69_6A1_REG
// Relative Address        0x000001A8
// Absolute Address        0xF80061A8
// Width                   29 bits
// Access Type             ro
// Reset Value             0x00060200
// Description             Training results for data slice 1.
//
// Register DDRC_REG69_6A1_REG Details
//
enum TDDRC_REG69_6A1_REG
{
                                                                      // Properties: Bits: 27:19, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_FIFO_WE_SLAVE_DLL_VALUE1_MASK =  0x0FF80000UL,    // Delay value applied to FIFO WE slave DLL.
    DDRC_PHY_STATUS_FIFO_WE_SLAVE_DLL_VALUE1_BPOS =  19UL,            // 

                                                                      // Properties: Bits: 18:9, Type: ro, Reset Value: 0x301
    DDRC_PHY_RDLVL_FIFOWEIN_RATIO1_MASK           =  0x0007FE00UL,    // Ratio value generated by Read Gate training FSM.
    DDRC_PHY_RDLVL_FIFOWEIN_RATIO1_BPOS           =  9UL,             // 

// RESERVED                                                              Properties: Bits: 8:0, Type: ro, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (DDRC) REG6C_6D2
//
// Name                    DDRC_REG6C_6D2_REG
// Relative Address        0x000001B0
// Absolute Address        0xF80061B0
// Width                   28 bits
// Access Type             ro
// Reset Value             0x00040600
// Description             Training results for data slice 2.
//
// Register DDRC_REG6C_6D2_REG Details
//
enum TDDRC_REG6C_6D2_REG
{
                                                                      // Properties: Bits: 27:19, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_FIFO_WE_SLAVE_DLL_VALUE2_MASK =  0x0FF80000UL,    // Delay value applied to FIFO WE slave DLL.
    DDRC_PHY_STATUS_FIFO_WE_SLAVE_DLL_VALUE2_BPOS =  19UL,            // 

                                                                      // Properties: Bits: 18:9, Type: ro, Reset Value: 0x203
    DDRC_PHY_RDLVL_FIFOWEIN_RATIO2_MASK           =  0x0007FE00UL,    // Ratio value generated by Read Gate training FSM.
    DDRC_PHY_RDLVL_FIFOWEIN_RATIO2_BPOS           =  9UL,             // 

                                                                      // Properties: Bits: 8:0, Type: ro, Reset Value: 0x0
    DDRC_PHY_BIST_ERR2_MASK                       =  0x000001FFUL,    // Mismatch error flag from the BIST Checker. 1 bit
    DDRC_PHY_BIST_ERR2_BPOS                       =  0UL              // per data slice.
                                                                      // 1'b1: Pattern mismatch error
                                                                      // 1'b0: All patterns matched
                                                                      // This is a sticky flag. In order to clear this bit, port
                                                                      // phy_bist_err_clr     must be set HIGH. Note that
                                                                      // reg6b is unused.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) REG6C_6D3
//
// Name                      DDRC_REG6C_6D3_REG
// Relative Address          0x000001B4
// Absolute Address          0xF80061B4
// Width                     28 bits
// Access Type               ro
// Reset Value               0x00000E00
// Description               Training results for data slice 3.
//
// Register DDRC_REG6C_6D3_REG Details
//
enum TDDRC_REG6C_6D3_REG
{
                                                                      // Properties: Bits: 27:19, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_FIFO_WE_SLAVE_DLL_VALUE3_MASK =  0x0FF80000UL,    // Delay value applied to FIFO WE slave DLL.
    DDRC_PHY_STATUS_FIFO_WE_SLAVE_DLL_VALUE3_BPOS =  19UL,            // 

                                                                      // Properties: Bits: 18:9, Type: ro, Reset Value: 0x7
    DDRC_PHY_RDLVL_FIFOWEIN_RATIO3_MASK           =  0x0007FE00UL,    // Ratio value generated by Read Gate training FSM.
    DDRC_PHY_RDLVL_FIFOWEIN_RATIO3_BPOS           =  9UL,             // 

                                                                      // Properties: Bits: 8:0, Type: ro, Reset Value: 0x0
    DDRC_PHY_BIST_ERR3_MASK                       =  0x000001FFUL,    // Mismatch error flag from the BIST Checker. 1 bit
    DDRC_PHY_BIST_ERR3_BPOS                       =  0UL              // per data slice. 1'b1: Pattern mismatch error 1'b0:
                                                                      // All patterns matched This is a sticky flag. In order
                                                                      // to clear this bit, port phy_bist_err_clr must be set HIGH.
                                                                      // Note that reg6b is unused.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) REG6E_710
//
// Name                      DDRC_REG6E_710_REG
// Relative Address          0x000001B8
// Absolute Address          0xF80061B8
// Width                     30 bits
// Access Type               ro
// Reset Value               x
// Description               Training results (2) for data slice 0.
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//         Name                        Address
// reg6e_710                 0xf80061b8
// reg6e_711                 0xf80061bc
// reg6e_712                 0xf80061c0
// reg6e_713                 0xf80061c4
//
// Register reg6e_710 to reg6e_713 Details
//
enum TDDRC_REG6E_710_REG
{
                                                      // Properties: Bits: 29:20, Type: ro, Reset Value: x
    DDRC_PHY_RDLVL_DQS_RATIO_MASK =  0x3FF00000UL,    // Ratio value generated by Read Data Eye training
    DDRC_PHY_RDLVL_DQS_RATIO_BPOS =  20UL,            // FSM.

                                                      // Properties: Bits: 19:10, Type: ro, Reset Value: x
    DDRC_PHY_WRLVL_DQ_RATIO_MASK  =  0x000FFC00UL,    // Ratio value generated by the write leveling FSM
    DDRC_PHY_WRLVL_DQ_RATIO_BPOS  =  10UL,            // for Write Data.

                                                      // Properties: Bits: 9:0, Type: ro, Reset Value: x
    DDRC_PHY_WRLVL_DQS_RATIO_MASK =  0x000003FFUL,    // Ratio value generated by the write leveling FSM
    DDRC_PHY_WRLVL_DQS_RATIO_BPOS =  0UL              // for Write DQS.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PHY_DLL_STS0
//
// Name                      DDRC_PHY_DLL_STS0_REG
// Relative Address          0x000001CC
// Absolute Address          0xF80061CC
// Width                     27 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Slave DLL results for data slice 0.
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//         Name                        Address
// phy_dll_sts0              0xf80061cc
// phy_dll_sts1              0xf80061d0
// phy_dll_sts2              0xf80061d4
// phy_dll_sts3              0xf80061d8
//
// Register phy_dll_sts0 to phy_dll_sts3 Details
//
enum TDDRC_PHY_DLL_STS0_REG
{
                                                                     // Properties: Bits: 26:18, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_WR_DQS_SLAVE_DLL_VALUE_MASK  =  0x07FC0000UL,    // Delay value applied to write DQS slave DLL
    DDRC_PHY_STATUS_WR_DQS_SLAVE_DLL_VALUE_BPOS  =  18UL,            // 

                                                                     // Properties: Bits: 17:9, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_WR_DATA_SLAVE_DLL_VALUE_MASK =  0x0003FE00UL,    // Delay value applied to write data slave DLL
    DDRC_PHY_STATUS_WR_DATA_SLAVE_DLL_VALUE_BPOS =  9UL,             // 

                                                                     // Properties: Bits: 8:0, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_RD_DQS_SLAVE_DLL_VALUE_MASK  =  0x000001FFUL,    // Delay value applied to read data slave DLL
    DDRC_PHY_STATUS_RD_DQS_SLAVE_DLL_VALUE_BPOS  =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (DDRC) DLL_LOCK_STS
//
// Name                     DDRC_DLL_LOCK_STS_REG
// Relative Address         0x000001E0
// Absolute Address         0xF80061E0
// Width                    24 bits
// Access Type              ro
// Reset Value              0x00F00000
// Description              DLL Lock Status, read
//
// Register DDRC_REG6E_710_REG Details
//
enum TDDRC_DLL_LOCK_STS_REG
{
                                                                      // Properties: Bits: 23:20, Type: ro, Reset Value: 0xF
    DDRC_PHY_RDLVL_FIFOWEIN_RATIO_SLICE3_MSB_MASK =  0x00F00000UL,    // Used as 4-msbits of slice3's ratio value generated
    DDRC_PHY_RDLVL_FIFOWEIN_RATIO_SLICE3_MSB_BPOS =  20UL,            // by Read Gate training FSM.
                                                                      // Refer to description of reg69_6a[1:0],
                                                                      // fifo_we_slave ratio, for more details

                                                                      // Properties: Bits: 19:11, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_DLL_SLAVE_VALUE_1_MASK        =  0x000FF800UL,    // Shows the current Coarse and Fine delay values
    DDRC_PHY_STATUS_DLL_SLAVE_VALUE_1_BPOS        =  11UL,            // going to all the Slave DLLs
                                                                      // [1:0] - Fine value (For Master DLL 1)
                                                                      // [8:2] - Coarse value
                                                                      // (For Master DLL 1)

                                                                      // Properties: Bits: 10:2, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_DLL_SLAVE_VALUE_0_MASK        =  0x000007FCUL,    // Shows the current Coarse and Fine delay values
    DDRC_PHY_STATUS_DLL_SLAVE_VALUE_0_BPOS        =  2UL,             // going to all the Slave DLLs
                                                                      // [1:0] - Fine value (For Master DLL 0)
                                                                      // [8:2] - Coarse value (For Master DLL 0)

                                                                      // Properties: Bit: 1, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_DLL_LOCK_1_MASK               =  0x00000002UL,    // Status Master DLL 1 signal:
    DDRC_PHY_STATUS_DLL_LOCK_1_BPOS               =  1UL,             // 0: not locked
                                                                      // 1: locked

                                                                      // Properties: Bit: 0, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_DLL_LOCK_0_MASK               =  0x00000001UL,    // Master DLL 0 Status signal:
    DDRC_PHY_STATUS_DLL_LOCK_0_BPOS               =  0UL              // 0: not locked
                                                                      // 1: locked

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PHY_CTRL_STS
//
// Name                     DDRC_PHY_CTRL_STS_REG
// Relative Address         0x000001E4
// Absolute Address         0xF80061E4
// Width                    30 bits
// Access Type              ro
// Reset Value              x
// Description              PHY Control status, read
//
// Register DDRC_PHY_CTRL_STS_REG Details
//
enum TDDRC_PHY_CTRL_STS_REG
{
                                                                       // Properties: Bits: 29:28, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_PHY_CTRL_OF_IN_LOCK_STATE_MASK =  0x30000000UL,    // Lock status from Master DLL Output Filter.
    DDRC_PHY_STATUS_PHY_CTRL_OF_IN_LOCK_STATE_BPOS =  28UL,            // 0: not locked, 1: locked.
                                                                       // Bit 28: Fine delay line.
                                                                       // Bit 29: Coarse delay line.

                                                                       // Properties: Bits: 27:20, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_PHY_CTRL_DLL_SLAVE_VALUE_MASK  =  0x0FF00000UL,    // Values applied to the PHY_CTRL Slave DLL:
    DDRC_PHY_STATUS_PHY_CTRL_DLL_SLAVE_VALUE_BPOS  =  20UL,            // Bit field 21:20 is the Fine value
                                                                       // Bit field 27:22 is the Course value

                                                                       // Properties: Bit: 19, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_PHY_CTRL_DLL_LOCK_MASK         =  0x00080000UL,    // PHY Control Master DLL Status:
    DDRC_PHY_STATUS_PHY_CTRL_DLL_LOCK_BPOS         =  19UL,            // 0: not locked, 1: locked

                                                                       // Properties: Bits: 18:10, Type: ro, Reset Value: x
    DDRC_PHY_STATUS_OF_OUT_DELAY_VALUE_MASK        =  0x0007FC00UL,    // Values from Master DDL Output Filter (no default
    DDRC_PHY_STATUS_OF_OUT_DELAY_VALUE_BPOS        =  10UL,            // value).
                                                                       // Bit field 11:10 is the Fine value
                                                                       // Bit field 18:12 is the Coarse value

                                                                       // Properties: Bits: 9:0, Type: ro, Reset Value: x
    DDRC_PHY_STATUS_OF_IN_DELAY_VALUE_MASK         =  0x000003FFUL,    // Values applied to Master DDL Output Filter (no
    DDRC_PHY_STATUS_OF_IN_DELAY_VALUE_BPOS         =  0UL              // default value):
                                                                       // Bit field 1:0 is the Fine value
                                                                       // Bit field 9:2 is the Coarse value

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PHY_CTRL_STS_REG2
//
// Name                    DDRC_PHY_CTRL_STS_REG2_REG
// Relative Address        0x000001E8
// Absolute Address        0xF80061E8
// Width                   27 bits
// Access Type             ro
// Reset Value             0x00000013
// Description             PHY Control status (2), read
//
// Register DDRC_PHY_CTRL_STS_REG2_REG Details
//
enum TDDRC_PHY_CTRL_STS_REG2_REG
{
                                                                        // Properties: Bits: 26:18, Type: ro, Reset Value: 0x0
    DDRC_PHY_STATUS_PHY_CTRL_SLAVE_DLL_VALUE_MASK   =  0x07FC0000UL,    // Delay value applied to read DQS slave DLL.
    DDRC_PHY_STATUS_PHY_CTRL_SLAVE_DLL_VALUE_BPOS   =  18UL,            // 

// RESERVED                                                                Properties: Bits: 17:9, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bits: 8:0, Type: ro, Reset Value: 0x13
    DDRC_PHY_STATUS_PHY_CTRL_OF_IN_DELAY_VALUE_MASK =  0x000001FFUL,    // Values applied to Master DLL Output Filter:
    DDRC_PHY_STATUS_PHY_CTRL_OF_IN_DELAY_VALUE_BPOS =  0UL              // Bit field 1:0 is the Fine value
                                                                        // Bit field 8:2 is the Coarse value

};

//------------------------------------------------------------------------------
//
// Register (DDRC) AXI_ID
//
// Name                    DDRC_AXI_ID_REG
// Relative Address        0x00000200
// Absolute Address        0xF8006200
// Width                   26 bits
// Access Type             ro
// Reset Value             0x00153042
// Description             ID and revision information
//
// Register DDRC_AXI_ID_REG Details
//
enum TDDRC_AXI_ID_REG
{
                                               // Properties: Bits: 25:20, Type: ro, Reset Value: 0x1
    DDRC_ARB_REV_NUM_MASK  =  0x03F00000UL,    // Revision Number
    DDRC_ARB_REV_NUM_BPOS  =  20UL,            // 

                                               // Properties: Bits: 19:12, Type: ro, Reset Value: 0x53
    DDRC_ARB_PROV_NUM_MASK =  0x000FF000UL,    // Prov number
    DDRC_ARB_PROV_NUM_BPOS =  12UL,            // 

                                               // Properties: Bits: 11:0, Type: ro, Reset Value: 0x42
    DDRC_ARB_PART_NUM_MASK =  0x00000FFFUL,    // Part Number
    DDRC_ARB_PART_NUM_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (DDRC) PAGE_MASK
//
// Name                    DDRC_PAGE_MASK_REG
// Relative Address        0x00000204
// Absolute Address        0xF8006204
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Page mask
//
// Register DDRC_PAGE_MASK_REG Details
//
enum TDDRC_PAGE_MASK_REG
{
                                                     // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    DDRC_ARB_PAGE_ADDR_MASK_MASK =  0xFFFFFFFFUL,    // Set this register based on the value programmed
    DDRC_ARB_PAGE_ADDR_MASK_BPOS =  0UL              // on the reg_ddrc_addrmap_* registers.
                                                     // Set the Column address bits to 0. Set the Page and
                                                     // Bank address bits to 1.
                                                     // This is used for calculating page_match inside the
                                                     // slave modules in Arbiter. The page_match is
                                                     // considered during the arbitration process. This
                                                     // mask applies to 64-bit address and not byte
                                                     // address.
                                                     // Setting this value to 0 disables transaction
                                                     // prioritization based on page/bank match.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) AXI_PRIORITY_WR_PORT0
//
// Name                      DDRC_AXI_PRIORITY_WR_PORT0_REG
// Relative Address          0x00000208
// Absolute Address          0xF8006208
// Width                     20 bits
// Access Type               mixed
// Reset Value               0x000803FF
// Description               AXI Priority control for write port 0.
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//            Name                     Address
// axi_priority_wr_port0     0xf8006208
// axi_priority_wr_port1     0xf800620c
// axi_priority_wr_port2     0xf8006210
// axi_priority_wr_port3     0xf8006214
//
// Register axi_priority_wr_port0 to axi_priority_wr_port3 Details
//
enum TDDRC_AXI_PRIORITY_WR_PORT0_REG
{
// RESERVED                                                      Properties: Bit: 19, Type: rw, Reset Value: 0x1

                                                              // Properties: Bit: 18, Type: rw, Reset Value: 0x0
    DDRC_ARB_DIS_PAGE_MATCH_WR_PORTN_MASK =  0x00040000UL,    // Disable the page match feature.
    DDRC_ARB_DIS_PAGE_MATCH_WR_PORTN_BPOS =  18UL,            // 

                                                              // Properties: Bit: 17, Type: rw, Reset Value: 0x0
    DDRC_ARB_DISABLE_URGENT_WR_PORTN_MASK =  0x00020000UL,    // Disable urgent for this Write Port.
    DDRC_ARB_DISABLE_URGENT_WR_PORTN_BPOS =  17UL,            // 

                                                              // Properties: Bit: 16, Type: rw, Reset Value: 0x0
    DDRC_ARB_DISABLE_AGING_WR_PORTN_MASK  =  0x00010000UL,    // Disable aging for this Write Port.
    DDRC_ARB_DISABLE_AGING_WR_PORTN_BPOS  =  16UL,            // 

// RESERVED                                                      Properties: Bits: 15:10, Type: ro, Reset Value: 0x0

                                                              // Properties: Bits: 9:0, Type: rw, Reset Value: 0x3FF
    DDRC_ARB_PRI_WR_PORTN_MASK            =  0x000003FFUL,    // Priority of this Write Port n. Value in this register
    DDRC_ARB_PRI_WR_PORTN_BPOS            =  0UL              // used to load the aging counters (when respective
                                                              // port request is asserted and grant is generated to
                                                              // that port). These register can be reprogrammed to
                                                              // set priority of each port. Lower the value more
                                                              // will be priority given to the port. For example if
                                                              // 0x82 (port 0) value is set to 'h3FF, and 0x83 (port
                                                              // 1) is set to 'h0FF, and both port0 and port1 have
                                                              // requests, in this case port1 will get high priority
                                                              // and grant will be given to port1. Note that the
                                                              // minimum write priority should be set to 0x4.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) AXI_PRIORITY_RD_PORT0
//
// Name                      DDRC_AXI_PRIORITY_RD_PORT0_REG
// Relative Address          0x00000218
// Absolute Address          0xF8006218
// Width                     20 bits
// Access Type               mixed
// Reset Value               0x000003FF
// Description               AXI Priority control for read port 0.
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//            Name                     Address
// axi_priority_rd_port0     0xf8006218
// axi_priority_rd_port1     0xf800621c
// axi_priority_rd_port2     0xf8006220
// axi_priority_rd_port3     0xf8006224
//
// Register axi_priority_rd_port0 to axi_priority_rd_port3 Details
//
enum TDDRC_AXI_PRIORITY_RD_PORT0_REG
{
                                                              // Properties: Bit: 19, Type: rw, Reset Value: 0x0
    DDRC_ARB_SET_HPR_RD_PORTN_MASK        =  0x00080000UL,    // Enable reads to be generated as HPR for this Read
    DDRC_ARB_SET_HPR_RD_PORTN_BPOS        =  19UL,            // Port.

                                                              // Properties: Bit: 18, Type: rw, Reset Value: 0x0
    DDRC_ARB_DIS_PAGE_MATCH_RD_PORTN_MASK =  0x00040000UL,    // Disable the page match feature.
    DDRC_ARB_DIS_PAGE_MATCH_RD_PORTN_BPOS =  18UL,            // 

                                                              // Properties: Bit: 17, Type: rw, Reset Value: 0x0
    DDRC_ARB_DISABLE_URGENT_RD_PORTN_MASK =  0x00020000UL,    // Disable urgent for this Read Port.
    DDRC_ARB_DISABLE_URGENT_RD_PORTN_BPOS =  17UL,            // 

                                                              // Properties: Bit: 16, Type: rw, Reset Value: 0x0
    DDRC_ARB_DISABLE_AGING_RD_PORTN_MASK  =  0x00010000UL,    // Disable aging for this Read Port.
    DDRC_ARB_DISABLE_AGING_RD_PORTN_BPOS  =  16UL,            // 

// RESERVED                                                      Properties: Bits: 15:10, Type: ro, Reset Value: 0x0

                                                              // Properties: Bits: 9:0, Type: rw, Reset Value: 0x3FF
    DDRC_ARB_PRI_RD_PORTN_MASK            =  0x000003FFUL,    // Priority of this Read Port n. Value in this register
    DDRC_ARB_PRI_RD_PORTN_BPOS            =  0UL              // used to load the aging counters (when respective
                                                              // port request is asserted and grant is generated to
                                                              // that port). These register can be reprogrammed to
                                                              // set priority of each port. Lower the value more
                                                              // will be priority given to the port. For example if
                                                              // 0x82 (port 0) value is set to 'h3FF, and 0x83 (port
                                                              // 1) is set to 'h0FF, and both port0 and port1 have
                                                              // requests, in this case port1 will get high priority
                                                              // and grant will be given to port1.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) EXCL_ACCESS_CFG0
//
// Name                      DDRC_EXCL_ACCESS_CFG0_REG
// Relative Address          0x00000294
// Absolute Address          0xF8006294
// Width                     18 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               Exclusive access configuration for port 0.
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//         Name                        Address
// excl_access_cfg0          0xf8006294
// excl_access_cfg1          0xf8006298
// excl_access_cfg2          0xf800629c
// excl_access_cfg3          0xf80062a0
//
// Register excl_access_cfg0 to excl_access_cfg3 Details
//
enum TDDRC_EXCL_ACCESS_CFG0_REG
{
                                                    // Properties: Bits: 17:9, Type: rw, Reset Value: 0x0
    DDRC_EXCL_ACC_ID1_PORT_MASK =  0x0003FE00UL,    // Reserved
    DDRC_EXCL_ACC_ID1_PORT_BPOS =  9UL,             // 

                                                    // Properties: Bits: 8:0, Type: rw, Reset Value: 0x0
    DDRC_EXCL_ACC_ID0_PORT_MASK =  0x000001FFUL,    // Reserved
    DDRC_EXCL_ACC_ID0_PORT_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (DDRC) MODE_REG_READ
//
// Name                      DDRC_MODE_REG_READ_REG
// Relative Address          0x000002A4
// Absolute Address          0xF80062A4
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Mode register read data
//
// Register DDRC_AXI_PRIORITY_WR_PORT0_REG Details
//         This registers is applicable only when LPDDR2 is selected.
//
enum TDDRC_MODE_REG_READ_REG
{
                                              // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    DDRC_RD_MRR_DATA_MASK =  0xFFFFFFFFUL,    // Mode register read Data. Valid when
    DDRC_RD_MRR_DATA_BPOS =  0UL              // ddrc_co_rd_mrr_data_valid is high. Bits[7:0]
                                              // carry the 8-bit MRR value. Valid for LPDDR2 only.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) LPDDR_CTRL0
//
// Name                    DDRC_LPDDR_CTRL0_REG
// Relative Address        0x000002A8
// Absolute Address        0xF80062A8
// Width                   12 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             LPDDR2 Control 0
//
// Register DDRC_LPDDR_CTRL0_REG Details
//         This registers is applicable only when LPDDR2 is selected.
//
enum TDDRC_LPDDR_CTRL0_REG
{
                                                   // Properties: Bits: 11:4, Type: rw, Reset Value: 0x0
    DDRC_MR4_MARGIN_MASK       =  0x00000FF0UL,    // UNUSED
    DDRC_MR4_MARGIN_BPOS       =  4UL,             // 

// RESERVED                                           Properties: Bit: 3, Type: rw, Reset Value: 0x0

                                                   // Properties: Bit: 2, Type: rw, Reset Value: 0x0
    DDRC_DERATE_ENABLE_MASK    =  0x00000004UL,    // 0: Timing parameter derating is disabled.
    DDRC_DERATE_ENABLE_BPOS    =  2UL,             // 1: Timing parameter derating is enabled using
                                                   // MR4 read value.
                                                   // This feature should only be enabled after
                                                   // LPDDR2 initialization is completed

                                                   // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    DDRC_PER_BANK_REFRESH_MASK =  0x00000002UL,    // 0:All bank refresh Per bank refresh allows traffic
    DDRC_PER_BANK_REFRESH_BPOS =  1UL,             // to flow to other banks.
                                                   // 1:Per bank refresh
                                                   // Recommended setting is 0. If per bank refresh is
                                                   // required, please follow recommended procedure
                                                   // outlined in Errata.

                                                   // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    DDRC_LPDDR2_MASK           =  0x00000001UL,    // 0: DDR2 or DDR3 in use.
    DDRC_LPDDR2_BPOS           =  0UL              // 1: LPDDR2 in Use.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) LPDDR_CTRL1
//
// Name                    DDRC_LPDDR_CTRL1_REG
// Relative Address        0x000002AC
// Absolute Address        0xF80062AC
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              LPDDR2 Control 1
//
// Register DDRC_LPDDR_CTRL1_REG Details
//
enum TDDRC_LPDDR_CTRL1_REG
{
                                                    // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    DDRC_MR4_READ_INTERVAL_MASK =  0xFFFFFFFFUL,    // Interval between two MR4 reads, USED to derate
    DDRC_MR4_READ_INTERVAL_BPOS =  0UL              // the timing parameters.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) LPDDR_CTRL2
//
// Name                     DDRC_LPDDR_CTRL2_REG
// Relative Address         0x000002B0
// Absolute Address         0xF80062B0
// Width                    22 bits
// Access Type              rw
// Reset Value              0x003C0015
// Description              LPDDR2 Control 2
//
// Register DDRC_LPDDR_CTRL2_REG Details
//
enum TDDRC_LPDDR_CTRL2_REG
{
                                                       // Properties: Bits: 21:12, Type: rw, Reset Value: 0x3C0
    DDRC_T_MRW_MASK                =  0x003FF000UL,    // Time to wait during load mode register writes.
    DDRC_T_MRW_BPOS                =  12UL,            // Present only in designs configured to support
                                                       // LPDDR2. LPDDR2 typically requires value of 5.

                                                       // Properties: Bits: 11:4, Type: rw, Reset Value: 0x1
    DDRC_IDLE_AFTER_RESET_X32_MASK =  0x00000FF0UL,    // Idle time after the reset command, tINIT4.
    DDRC_IDLE_AFTER_RESET_X32_BPOS =  4UL,             // Units: 32 clock cycles.

                                                       // Properties: Bits: 3:0, Type: rw, Reset Value: 0x5
    DDRC_MIN_STABLE_CLOCK_X1_MASK  =  0x0000000FUL,    // Time to wait after the first CKE high, tINIT2.
    DDRC_MIN_STABLE_CLOCK_X1_BPOS  =  0UL              // Units: 1 clock cycle. LPDDR2 typically requires 5
                                                       // x tCK delay.

};

//------------------------------------------------------------------------------
//
// Register (DDRC) LPDDR_CTRL3
//
// Name                     DDRC_LPDDR_CTRL3_REG
// Relative Address         0x000002B4
// Absolute Address         0xF80062B4
// Width                    18 bits
// Access Type              rw
// Reset Value             0x00000601
// Description             LPDDR2 Control 3
//
// Register DDRC_LPDDR_CTRL3_REG Details
//
enum TDDRC_LPDDR_CTRL3_REG
{
                                                      // Properties: Bits: 17:8, Type: rw, Reset Value: 0x6
    DDRC_DEV_ZQINIT_X32_MASK      =  0x0003FF00UL,    // ZQ initial calibration, tZQINIT.
    DDRC_DEV_ZQINIT_X32_BPOS      =  8UL,             // Units: 32 clock cycles. LPDDR2 typically requires
                                                      // 1 us.

                                                      // Properties: Bits: 7:0, Type: rw, Reset Value: 0x1
    DDRC_MAX_AUTO_INIT_X1024_MASK =  0x000000FFUL,    // Maximum duration of the auto initialization,
    DDRC_MAX_AUTO_INIT_X1024_BPOS =  0UL              // tINIT5.
                                                      // Units: 1024 clock cycles. LPDDR2 typically
                                                      // requires 10 us.

};

#endif // PS7_DDRC_H

