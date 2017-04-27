//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_SMCC
//*
//*      Version 1.0
//*
//*      Copyright (c) 2017, emb-lib Project Team
//*
//*      This file is part of the zynq7000 library project.
//*      Visit https://github.com/emb-lib/zynq7000 for new versions.
//*
//*      Permission is hereby granted, free of charge, to any person
//*      obtaining  a copy of this software and associated documentation
//*      files (the "Software"), to deal in the Software without restriction,
//*      including without limitation the rights to use, copy, modify, merge,
//*      publish, distribute, sublicense, and/or sell copies of the Software,
//*      and to permit persons to whom the Software is furnished to do so,
//*      subject to the following conditions:
//*
//*      The above copyright notice and this permission notice shall be included
//*      in all copies or substantial portions of the Software.
//*
//*      THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//*      EXPRESS  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//*      MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//*      IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
//*      CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
//*      TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
//*      THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//*
//------------------------------------------------------------------------------

#ifndef PS7_SMCC_H
#define PS7_SMCC_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    SMCC MMRs
//
//  Name                         Address                    Width   Type     Reset Value   Description
enum TSMCC
{
    SMCC_MEMC_STATUS_REG       =  SMCC_ADDR + 0x00000000, //  13    ro       0x00000000    Operating and Interrupt Status
    SMCC_MEMIF_CFG_REG         =  SMCC_ADDR + 0x00000004, //  18    ro       0x00011205    SMC configuration information
    SMCC_MEMC_CFG_SET_REG      =  SMCC_ADDR + 0x00000008, //   7    wo       x             Enable interrupts and lower power state
    SMCC_MEMC_CFG_CLR_REG      =  SMCC_ADDR + 0x0000000C, //   7    wo       x             Disable interrupts and exit from low-power state
    SMCC_DIRECT_CMD_REG        =  SMCC_ADDR + 0x00000010, //  26    wo       x             Issue mem commands and register updates
    SMCC_SET_CYCLES_REG        =  SMCC_ADDR + 0x00000014, //  24    wo       x             Stage a write to a Cycle register
    SMCC_SET_OPMODE_REG        =  SMCC_ADDR + 0x00000018, //  16    mixed    x             Stage a write to an OpMode register
    SMCC_REFRESH_PERIOD_0_REG  =  SMCC_ADDR + 0x00000020, //   4    rw       0x00000000    Idle cycles between read
    SMCC_REFRESH_PERIOD_1_REG  =  SMCC_ADDR + 0x00000024, //   4    rw       0x00000000    Insert idle cycles between bursts
    SMCC_SRAM_CYCLES0_0_REG    =  SMCC_ADDR + 0x00000100, //  21    ro       0x0002B3CC    SRAM
    SMCC_OPMODE0_0_REG         =  SMCC_ADDR + 0x00000104, //  32    ro       0xE2FE0800    SRAM
    SMCC_SRAM_CYCLES0_1_REG    =  SMCC_ADDR + 0x00000120, //  21    ro       0x0002B3CC    SRAM
    SMCC_OPMODE0_1_REG         =  SMCC_ADDR + 0x00000124, //  32    ro       0xE4FE0800    SRAM
    SMCC_NAND_CYCLES1_0_REG    =  SMCC_ADDR + 0x00000180, //  24    ro       0x0024ABCC    NAND Flash timing
    SMCC_OPMODE1_0_REG         =  SMCC_ADDR + 0x00000184, //  32    ro       0xE1FF0001    NAND Flash OpCode
    SMCC_USER_STATUS_REG       =  SMCC_ADDR + 0x00000200, //   8    ro       0x00000000    User Status Register
    SMCC_USER_CONFIG_REG       =  SMCC_ADDR + 0x00000204, //   8    wo       x             User Configuration Register
    SMCC_ECC_STATUS_1_REG      =  SMCC_ADDR + 0x00000400, //  30    ro       0x00000000    ECC Status and Clear Register 1
    SMCC_ECC_MEMCFG_1_REG      =  SMCC_ADDR + 0x00000404, //  13    rw       0x00000043    ECC Memory Configuation Register 1
    SMCC_ECC_MEMCOMMAND1_1_REG =  SMCC_ADDR + 0x00000408, //  25    rw       0x01300080    ECC Memory Command 1 Register 1
    SMCC_ECC_MEMCOMMAND2_1_REG =  SMCC_ADDR + 0x0000040C, //  25    rw       0x01E00585    ECC Memory Command 2 Register 1
    SMCC_ECC_ADDR0_1_REG       =  SMCC_ADDR + 0x00000410, //  32    ro       0x00000000    ECC Address 0 Register 1
    SMCC_ECC_ADDR1_1_REG       =  SMCC_ADDR + 0x00000414, //  24    ro       0x00000000    ECC Address 1 Register 1
    SMCC_ECC_VALUE0_1_REG      =  SMCC_ADDR + 0x00000418, //  32    ro       0x00000000    ECC Value 0 Register 1
    SMCC_ECC_VALUE1_1_REG      =  SMCC_ADDR + 0x0000041C, //  32    ro       0x00000000    ECC Value 1 Register 1
    SMCC_ECC_VALUE2_1_REG      =  SMCC_ADDR + 0x00000420, //  32    ro       0x00000000    ECC Value 2 Register 1
    SMCC_ECC_VALUE3_1_REG      =  SMCC_ADDR + 0x00000424  //  32    ro       0x00000000    ECC Value 3 Register 1
};
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (SMCC) MEMC_STATUS
//
// Name                    SMCC_MEMC_STATUS_REG
// Software Name           MEMC_STATUS
// Relative Address        0x00000000
// Absolute Address        0xE000E000
// Width                   13 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Operating and Interrupt Status
//
// Register SMCC_MEMC_STATUS_REG Details
//         The read-only memc_status Register provides information on the configuration of the SMC and also the
//         current state of the SMC. You cannot read this register in the Reset state
//
enum TSMCC_MEMC_STATUS_REG
{
                                                  // Properties: Bit: 12, Type: ro, Reset Value: 0x0
    SMCC_RAW_ECC_INT1_MASK    =  0x00001000UL,    // NAND Flash ECC interrupt raw status:
    SMCC_RAW_ECC_INT1_BPOS    =  12UL,            // 0: Not asserted
                                                  // 1: Asserted

// RESERVED                                          Properties: Bit: 11, Type: ro, Reset Value: 0x0

                                                  // Properties: Bit: 10, Type: ro, Reset Value: 0x0
    SMCC_ECC_INT1_MASK        =  0x00000400UL,    // NAND Flash ECC interrupt status after
    SMCC_ECC_INT1_BPOS        =  10UL,            // mask/enable:
                                                  // 0: Not asserted
                                                  // 1: Asserted

// RESERVED                                          Properties: Bit: 9, Type: ro, Reset Value: 0x0

                                                  // Properties: Bit: 8, Type: ro, Reset Value: 0x0
    SMCC_ECC_INT1_EN_MASK     =  0x00000100UL,    // NAND Flash ECC interrupt enable setting:
    SMCC_ECC_INT1_EN_BPOS     =  8UL,             // 0: Masked
                                                  // 1: Enabled

// RESERVED                                          Properties: Bit: 7, Type: ro, Reset Value: 0x0

                                                  // Properties: Bit: 6, Type: ro, Reset Value: 0x0
    SMCC_RAW_INT_STATUS1_MASK =  0x00000040UL,    // NAND Flash raw interrupt status before
    SMCC_RAW_INT_STATUS1_BPOS =  6UL,             // mask/enable:
                                                  // 0: Not asserted
                                                  // 1: Asserted

                                                  // Properties: Bit: 5, Type: ro, Reset Value: 0x0
    SMCC_RAW_INT_STATUS0_MASK =  0x00000020UL,    // SRAM/NOR raw interrupt raw status before the
    SMCC_RAW_INT_STATUS0_BPOS =  5UL,             // mask/enable:
                                                  // 0: Not asserted
                                                  // 1: Asserted

                                                  // Properties: Bit: 4, Type: ro, Reset Value: 0x0
    SMCC_INT_STATUS1_MASK     =  0x00000010UL,    // NAND Flash interrupt status after the
    SMCC_INT_STATUS1_BPOS     =  4UL,             // mask/enable:
                                                  // 0: Not asserted
                                                  // 1: Asserted

                                                  // Properties: Bit: 3, Type: ro, Reset Value: 0x0
    SMCC_INT_STATUS0_MASK     =  0x00000008UL,    // SRAM/NOR interrupt status after the
    SMCC_INT_STATUS0_BPOS     =  3UL,             // mask/enable :
                                                  // 0: Not asserted
                                                  // 1: Asserted

                                                  // Properties: Bit: 2, Type: ro, Reset Value: 0x0
    SMCC_INT_EN1_MASK         =  0x00000004UL,    // NAND Flash interrupt enable status:
    SMCC_INT_EN1_BPOS         =  2UL,             // 0: Disabled
                                                  // 1: Enabled

                                                  // Properties: Bit: 1, Type: ro, Reset Value: 0x0
    SMCC_INT_EN0_MASK         =  0x00000002UL,    // SRAM/NOR interface interrupt enable setting:
    SMCC_INT_EN0_BPOS         =  1UL,             // 0: Disabled
                                                  // 1: Enabled

                                                  // Properties: Bit: 0, Type: ro, Reset Value: 0x0
    SMCC_STATE_MASK           =  0x00000001UL,    // SMC operating state:
    SMCC_STATE_BPOS           =  0UL              // 0: Normal
                                                  // 1: Low-power state

};

//------------------------------------------------------------------------------
//
// Register (SMCC) MEMIF_CFG
//
// Name                      SMCC_MEMIF_CFG_REG
// Software Name             MEMC_IF_CONFIG
// Relative Address          0x00000004
// Absolute Address          0xE000E004
// Width                     18 bits
// Access Type               ro
// Reset Value               0x00011205
// Description              SMC configuration information
//
// Register SMCC_MEMIF_CFG_REG Details
//          Provides information on the configuration of the memory interface. You cannot read this register in the
//          Reset state. The state of this register cannot be changed.
//
enum TSMCC_MEMIF_CFG_REG
{
                                                     // Properties: Bits: 17:16, Type: ro, Reset Value: 0x1
    SMCC_EXCLUSIVE_MONITORS_MASK =  0x00030000UL,    // Return the number of exclusive access monitor
    SMCC_EXCLUSIVE_MONITORS_BPOS =  16UL,            // resources that are implemented in the SMC.
                                                     // b00: 0 monitors
                                                     // b01: 1 monitor
                                                     // b10: 2 monitors
                                                     // b11: 4 monitors

// RESERVED                                             Properties: Bit: 15, Type: ro, Reset Value: 0x0

                                                     // Properties: Bit: 14, Type: ro, Reset Value: 0x0
    SMCC_REMAP1_MASK             =  0x00004000UL,    // Return the value of the remap_1 input.
    SMCC_REMAP1_BPOS             =  14UL,            // 

                                                     // Properties: Bits: 13:12, Type: ro, Reset Value: 0x1
    SMCC_MEMORY_WIDTH1_MASK      =  0x00003000UL,    // The width of the NAND Flash interface can be 8
    SMCC_MEMORY_WIDTH1_BPOS      =  12UL,            // or 16 bits.
                                                     // 00: 8 Bit Interface
                                                     // 01: 16 Bit Interface

                                                     // Properties: Bits: 11:10, Type: ro, Reset Value: 0x0
    SMCC_MEMORY_CHIPS1_MASK      =  0x00000C00UL,    // The NAND Flash interface provides one chip
    SMCC_MEMORY_CHIPS1_BPOS      =  10UL,            // select.

                                                     // Properties: Bits: 9:8, Type: ro, Reset Value: 0x2
    SMCC_MEMORY_TYPE1_MASK       =  0x00000300UL,    // SMC controller 1 supports the NAND Flash
    SMCC_MEMORY_TYPE1_BPOS       =  8UL,             // interface with hardware assisted ECC.

// RESERVED                                             Properties: Bit: 7, Type: ro, Reset Value: 0x0

                                                     // Properties: Bit: 6, Type: ro, Reset Value: 0x0
    SMCC_REMAP0_MASK             =  0x00000040UL,    // Return the value of the remap_0 input
    SMCC_REMAP0_BPOS             =  6UL,             // 

                                                     // Properties: Bits: 5:4, Type: ro, Reset Value: 0x0
    SMCC_MEMORY_WIDTH0_MASK      =  0x00000030UL,    // The width of the SRAM/NOR interface is 8 bits.
    SMCC_MEMORY_WIDTH0_BPOS      =  4UL,             // 

                                                     // Properties: Bits: 3:2, Type: ro, Reset Value: 0x1
    SMCC_MEMORY_CHIPS0_MASK      =  0x0000000CUL,    // The SRAM/NOR interface provides two chip
    SMCC_MEMORY_CHIPS0_BPOS      =  2UL,             // selects. Reads as {0,1}

                                                     // Properties: Bits: 1:0, Type: ro, Reset Value: 0x1
    SMCC_MEMORY_TYPE0_MASK       =  0x00000003UL,    // SMC controller 0 supports the SRAM/NOR
    SMCC_MEMORY_TYPE0_BPOS       =  0UL              // interface.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) MEMC_CFG_SET
//
// Name                     SMCC_MEMC_CFG_SET_REG
// Software Name            MEMC_SET_CONFIG
// Relative Address         0x00000008
// Absolute Address         0xE000E008
// Width                   7 bits
// Access Type             wo
// Reset Value             x
// Description             Enable interrupts and lower power state
//
// Register SMCC_MEMC_CFG_SET_REG Details
//         The write-only memc_cfg_set enables the SMC to be changed to low-power state, and interrupts enabled.
//         You cannot write to this register in the Reset state.
//
enum TSMCC_MEMC_CFG_SET_REG
{
                                                               // Properties: Bit: 6, Type: wo, Reset Value: x
    SMCC_MEMC_CFG_SET_ECC_INT_ENABLE1_MASK =  0x00000040UL,    // NAND Flash ECC interrupt enable:
    SMCC_MEMC_CFG_SET_ECC_INT_ENABLE1_BPOS =  6UL,             // 0: No change
                                                               // 1: Enable

// RESERVED                                                       Properties: Bit: 5, Type: wo, Reset Value: x

// RESERVED                                                       Properties: Bits: 4:3, Type: wo, Reset Value: x

                                                               // Properties: Bit: 2, Type: wo, Reset Value: x
    SMCC_MEMC_CFG_SET_LOW_POWER_REQ_MASK   =  0x00000004UL,    // Put SMC into low-power mode when memory
    SMCC_MEMC_CFG_SET_LOW_POWER_REQ_BPOS   =  2UL,             // interface goes idle:
                                                               // 0: No change
                                                               // 1: Enable low-power state

                                                               // Properties: Bit: 1, Type: wo, Reset Value: x
    SMCC_MEMC_CFG_SET_INT_ENABLE1_MASK     =  0x00000002UL,    // NAND Flash interrupt enable:
    SMCC_MEMC_CFG_SET_INT_ENABLE1_BPOS     =  1UL,             // 0: No change
                                                               // 1: Enable

                                                               // Properties: Bit: 0, Type: wo, Reset Value: x
    SMCC_MEMC_CFG_SET_INT_ENABLE0_MASK     =  0x00000001UL,    // SRAM/NOR interrupt enable:
    SMCC_MEMC_CFG_SET_INT_ENABLE0_BPOS     =  0UL              // 0: No change
                                                               // 1: Enable

};

//------------------------------------------------------------------------------
//
// Register (SMCC) MEMC_CFG_CLR
//
// Name                    SMCC_MEMC_CFG_CLR_REG
// Software Name           MEMC_CLR_CONFIG
// Relative Address        0x0000000C
// Absolute Address        0xE000E00C
// Width                   7 bits
// Access Type             wo
// Reset Value             x
// Description             Disable interrupts and exit from low-power state
//
// Register SMCC_MEMC_CFG_CLR_REG Details
//         The write-only memc_cfg_clr enables the SMC to be moved out of the low-power state, and the interrupts
//         disabled. You cannot write to this register in the Reset state.
//
enum TSMCC_MEMC_CFG_CLR_REG
{
                                                   // Properties: Bit: 6, Type: wo, Reset Value: x
    SMCC_ECC_INT_DISABLE1_MASK =  0x00000040UL,    // NAND Flash ECC interrupt disable:
    SMCC_ECC_INT_DISABLE1_BPOS =  6UL,             // 0: No change
                                                   // 1: Disable

// RESERVED                                           Properties: Bit: 5, Type: wo, Reset Value: x

                                                   // Properties: Bit: 4, Type: wo, Reset Value: x
    SMCC_INT_CLR_1_MASK        =  0x00000010UL,    // 0: No effect
    SMCC_INT_CLR_1_BPOS        =  4UL,             // 1: Clear SMC Interrupt 1 as an alternative to an
                                                   // AXI read

                                                   // Properties: Bit: 3, Type: wo, Reset Value: x
    SMCC_INT_CLR_0_MASK        =  0x00000008UL,    // 0: No effect
    SMCC_INT_CLR_0_BPOS        =  3UL,             // 1: Clear SMC Interrupt 0 as an alternative to an
                                                   // AXI read

                                                   // Properties: Bit: 2, Type: wo, Reset Value: x
    SMCC_LOW_POWER_EXIT_MASK   =  0x00000004UL,    // Exit low-power mode. The affect takes place
    SMCC_LOW_POWER_EXIT_BPOS   =  2UL,             // when memory interface goes idle:
                                                   // 0: No change
                                                   // 1: Exit from low-power state

                                                   // Properties: Bit: 1, Type: wo, Reset Value: x
    SMCC_INT_DISABLE1_MASK     =  0x00000002UL,    // NAND Flash interrupt disable:
    SMCC_INT_DISABLE1_BPOS     =  1UL,             // 0: No change
                                                   // 1: disable (apply mask)

                                                   // Properties: Bit: 0, Type: wo, Reset Value: x
    SMCC_INT_DISABLE0_MASK     =  0x00000001UL,    // SRAM/NOR interrupt disable:
    SMCC_INT_DISABLE0_BPOS     =  0UL              // 0: No change
                                                   // 1: disable (apply mask)

};

//------------------------------------------------------------------------------
//
// Register (SMCC) DIRECT_CMD
//
// Name                    SMCC_DIRECT_CMD_REG
// Software Name           DIRECT_CMD
// Relative Address        0x00000010
// Absolute Address        0xE000E010
// Width                   26 bits
// Access Type             wo
// Reset Value             x
// Description             Issue mem commands and register updates
//
// Register SMCC_DIRECT_CMD_REG Details
//         The write-only direct_cmd passes commands to the external memory, and controls the updating of the chip
//         configuration registers with values held in the set_cycles Register and set_opmode Register. You cannot
//         write to this register in either the Reset or low-power states.
//
enum TSMCC_DIRECT_CMD_REG
{
                                              // Properties: Bits: 25:23, Type: wo, Reset Value: x
    SMCC_CHIP_SELECT_MASK =  0x03800000UL,    // Select register bank to update and enable chip
    SMCC_CHIP_SELECT_BPOS =  23UL,            // mode register access based on CMD_TYPE:
                                              // 000: SRAM/NOR chip select 0.
                                              // 001: SRAM/NOR chip select 1.
                                              // 100: NAND Flash.
                                              // others: reserved.

                                              // Properties: Bits: 22:21, Type: wo, Reset Value: x
    SMCC_CMD_TYPE_MASK    =  0x00600000UL,    // Select the command type:
    SMCC_CMD_TYPE_BPOS    =  21UL,            // 00: UpdateRegs and AXI
                                              // 01: ModeReg
                                              // 10: UpdateRegs
                                              // 11: ModeReg and UpdateRegs

// RESERVED                                      Properties: Bit: 20, Type: wo, Reset Value: x

                                              // Properties: Bits: 19:0, Type: wo, Reset Value: x
    SMCC_ADDR_MASK        =  0x000FFFFFUL,    // When cmd_type = UpdateRegs and AXI then:
    SMCC_ADDR_BPOS        =  0UL              // Bits [15:0] are used to match wdata[15:0]
                                              // Bits [19:16] are reserved. Write as zero.
                                              // When cmd_type = ModeReg or ModeReg and
                                              // UpdateRegs, these bits map to the external
                                              // memory address bits [19:0].
                                              // When cmd_type = UpdateRegs, these bits are
                                              // reserved. Write as zero.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) SET_CYCLES
//
// Name                     SMCC_SET_CYCLES_REG
// Software Name            SET_CYCLES
// Relative Address          0x00000014
// Absolute Address         0xE000E014
// Width                     24 bits
// Access Type               wo
// Reset Value               x
// Description              Stage a write to a Cycle register
//
// Register SMCC_SET_CYCLES_REG Details
//          This write-only register contains values that are written to the sram_cycles register or nand_cycles when
//          the SMC receives a write to the Direct Command Register. You cannot write to this register in either the
//          Reset or low-power states.
//
enum TSMCC_SET_CYCLES_REG
{
                                         // Properties: Bits: 23:20, Type: wo, Reset Value: x
    SMCC_SET_T6_MASK =  0x00F00000UL,    // Timing parameter for SRAM/NOR, bit 20 only
    SMCC_SET_T6_BPOS =  20UL,            // (other bits are ignored):
                                         // o For asynchronous multiplexed transfers this bit
                                         // controls when the SMC asserts we_n:
                                         // 0: assert we_n two mclk cycles after asserting
                                         // cs_n.
                                         // 1: assert we_n and cs_n together.
                                         // Timing parameter for NAND Flash, bits 23:20:
                                         // o Busy to RE timing (t_rr), minimum permitted
                                         // value = 0.

                                         // Properties: Bits: 19:17, Type: wo, Reset Value: x
    SMCC_SET_T5_MASK =  0x000E0000UL,    // Timing parameter for SRAM/NOR:
    SMCC_SET_T5_BPOS =  17UL,            // o Turnaround time (t_ta), minimum value = 1.
                                         // Timing parameter for NAND Flash:
                                         // o ID read time (t_ar), mnimum value = 0.

                                         // Properties: Bits: 16:14, Type: wo, Reset Value: x
    SMCC_SET_T4_MASK =  0x0001C000UL,    // Timing parameter for SRAM/NOR:
    SMCC_SET_T4_BPOS =  14UL,            // o Page cycle time (t_pc), minimum value = 1.
                                         // Timing parameter for NAND Flash:
                                         // o Page cycle time (t_clr), minimum value = 1.

                                         // Properties: Bits: 13:11, Type: wo, Reset Value: x
    SMCC_SET_T3_MASK =  0x00003800UL,    // Timing parameter for SRAM/NOR:
    SMCC_SET_T3_BPOS =  11UL,            // o Write Enable (t_wp) assertion delay, minimum
                                         // value = 1.
                                         // Timing parameter for NAND Flash:
                                         // o Write Enable (t_wp) deassertion delay,
                                         // minimum value = 1.

                                         // Properties: Bits: 10:8, Type: wo, Reset Value: x
    SMCC_SET_T2_MASK =  0x00000700UL,    // Timing parameter for SRAM/NOR:
    SMCC_SET_T2_BPOS =  8UL,             // o Output Enable (t_ceoe) assertion delay,
                                         // minimum value = 1.
                                         // Timing parameter for NAND Flash:
                                         // o REA (t_rea) assertion delay, minimum value = 1.

                                         // Properties: Bits: 7:4, Type: wo, Reset Value: x
    SMCC_SET_T1_MASK =  0x000000F0UL,    // Timing parameter for SRAM/NOR and NAND
    SMCC_SET_T1_BPOS =  4UL,             // Flash:
                                         // Write cycle time, minimum value = 2.

                                         // Properties: Bits: 3:0, Type: wo, Reset Value: x
    SMCC_SET_T0_MASK =  0x0000000FUL,    // Timing parameter for SRAM/NOR and NAND
    SMCC_SET_T0_BPOS =  0UL              // Flash:
                                         // Read cycle time, minimum value = 2.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) SET_OPMODE
//
// Name                    SMCC_SET_OPMODE_REG
// Software Name           SET_OPMODE
// Relative Address        0x00000018
// Absolute Address           0xE000E018
// Width                      16 bits
// Access Type                mixed
// Reset Value                x
// Description                Stage a write to an OpMode register
//
// Register SMCC_SET_OPMODE_REG Details
//           This write-only register is the holding register for the opmode<x>_<n> Registers. You cannot write to it in
//           either the Reset or low-power states.
//
enum TSMCC_SET_OPMODE_REG
{
// RESERVED                                    Properties: Bits: 15:13, Type: wo, Reset Value: x

                                            // Properties: Bit: 12, Type: wo, Reset Value: x
    SMCC_SET_BLS_MASK   =  0x00001000UL,    // NAND Flash: reserved, write zero.
    SMCC_SET_BLS_BPOS   =  12UL,            // SRAM/NOR: Value written to the byte lane
                                            // strobe (bls) bit. This bit affects the assertion of the
                                            // byte-lane strobe outputs.
                                            // 0: bls timing equals chip select timing. This is the
                                            // default setting.
                                            // 1: bls timing equals we_n timing. This setting is
                                            // used for eight memories that have no bls_n
                                            // inputs. In this case, the bls_n output of the SMC is
                                            // connected to the we_n memory input.

                                            // Properties: Bit: 11, Type: wo, Reset Value: x
    SMCC_SET_ADV_MASK   =  0x00000800UL,    // Contains the value to be written to the specific
    SMCC_SET_ADV_BPOS   =  11UL,            // SRAM chip opmode Register address valid (adv)
                                            // bit. The memory uses the address advance signal
                                            // adv_n when set.
                                            // For a NAND memory interface this bit is
                                            // reserved, and written as zero.

                                            // Properties: Bit: 10, Type: rw, Reset Value: x
    SMCC_SET_BAA_MASK   =  0x00000400UL,    // NAND Flash: reserved, write zero.
    SMCC_SET_BAA_BPOS   =  10UL,            // SRAM/NOR: Value written burst address
                                            // advance (baa) bit. The memory uses the baa_n
                                            // signal when set.

                                            // Properties: Bits: 9:7, Type: wo, Reset Value: x
    SMCC_SET_WR_BL_MASK =  0x00000380UL,    // NAND Flash: reserved, write zero.
    SMCC_SET_WR_BL_BPOS =  7UL,             // SRAM/NORE: Value written for wr_bl :
                                            // 000: 1 beat
                                            // 001: 4 beats
                                            // 010: 8 beats
                                            // 011: 16 beats
                                            // 100: 32 beats
                                            // 101: continuous
                                            // others: reserved.

// RESERVED                                    Properties: Bit: 6, Type: wo, Reset Value: x

                                            // Properties: Bits: 5:3, Type: wo, Reset Value: x
    SMCC_SET_RD_BL_MASK =  0x00000038UL,    // NAND Flash: reserved, write zero.
    SMCC_SET_RD_BL_BPOS =  3UL,             // SRAM/NOR: value written to opmode (rd_bl
                                            // field). Memory Burst Length:
                                            // 000: 1 beat
                                            // 001: 4 beats
                                            // 010: 8 beats
                                            // 011: 16 beats
                                            // 100: 32 beats
                                            // 101: continuous
                                            // others: reserved

// RESERVED                                    Properties: Bit: 2, Type: wo, Reset Value: x

                                            // Properties: Bits: 1:0, Type: wo, Reset Value: x
    SMCC_SET_MW_MASK    =  0x00000003UL,    // SRAM/NOR: mw= 00 (8-bit)
    SMCC_SET_MW_BPOS    =  0UL              // NAND Flash: mw= 00 (8-bit) or 01 (16-bit)

};

//------------------------------------------------------------------------------
//
// Register (SMCC) REFRESH_PERIOD_0
//
// Name                     SMCC_REFRESH_PERIOD_0_REG
// Software Name            REFRESH_PERIOD_0
// Relative Address         0x00000020
// Absolute Address         0xE000E020
// Width                    4 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Idle cycles between read/write bursts
//
// Register SMCC_REFRESH_PERIOD_0_REG Details
//          The read/write refresh_period_0 enables the SMC to insert idle cycles during consecutive bursts, that
//          enables the PSRAM devices on memory interface 0, to initiate a refresh cycle. You cannot access this
//          register in either the Reset or low-power states. Note:
//          You can only access this register when you are using an SRAM memory interface.
//
enum TSMCC_REFRESH_PERIOD_0_REG
{
                                                       // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    SMCC_REFRESH_PERIOD_0_VAL_MASK =  0x0000000FUL,    // Set the number of consecutive memory bursts that
    SMCC_REFRESH_PERIOD_0_VAL_BPOS =  0UL              // are permitted, prior to the SMC deasserting chip
                                                       // select to enable the PSRAM to initiate a refresh
                                                       // cycle. The options are:
                                                       // b0000: disable the insertion of idle cycles between
                                                       // consecutive bursts
                                                       // b0001: an idle cycle occurs after each burst
                                                       // b0010: an idle cycle occurs after 2 consecutive
                                                       // bursts
                                                       // b0011: an idle cycle occurs after 3 consecutive
                                                       // bursts
                                                       // b0100: an idle cycle occurs after 4 consecutive
                                                       // bursts
                                                       // ...
                                                       // b1111: an idle cycle occurs after 15 consecutive
                                                       // bursts.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) REFRESH_PERIOD_1
//
// Name                     SMCC_REFRESH_PERIOD_1_REG
// Software Name            REFRESH_PERIOD_1
// Relative Address         0x00000024
// Absolute Address         0xE000E024
// Width                    4 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Insert idle cycles between bursts
//
// Register SMCC_REFRESH_PERIOD_1_REG Details
//          The read/write refresh_period_1 Register enables the SMC to insert idle cycles during consecutive bursts,
//          that enables the PSRAM devices on memory interface 1, to initiate a refresh cycle
//
enum TSMCC_REFRESH_PERIOD_1_REG
{
                                                       // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    SMCC_REFRESH_PERIOD_1_VAL_MASK =  0x0000000FUL,    // Set the number of consecutive memory bursts that
    SMCC_REFRESH_PERIOD_1_VAL_BPOS =  0UL              // are permitted, prior to the SMC deasserting chip
                                                       // select to enable the PSRAM to initiate a refresh
                                                       // cycle. The options are:
                                                       // b0000: disable the insertion of idle cycles between
                                                       // consecutive bursts
                                                       // b0001: an idle cycle occurs after each burst
                                                       // b0010: an idle cycle occurs after 2 consecutive
                                                       // bursts
                                                       // b0011: an idle cycle occurs after 3 consecutive
                                                       // bursts
                                                       // b0100: an idle cycle occurs after 4 consecutive
                                                       // bursts
                                                       // ...
                                                       // b1111: an idle cycle occurs after 15 consecutive
                                                       // bursts.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) SRAM_CYCLES0_0
//
// Name                     SMCC_SRAM_CYCLES0_0_REG
// Software Name            IF0_CHIP_0_CONFIG
// Relative Address         0x00000100
// Absolute Address         0xE000E100
// Width                    21 bits
// Access Type              ro
// Reset Value              0x0002B3CC
// Description              SRAM/NOR chip select 0 timing, active
//
// Register SMCC_SRAM_CYCLES0_0_REG Details
//          There is an instance of this register for each SRAM chip supported. You cannot read the read-only
//          sram_cycles Register in the Reset state
//
enum TSMCC_SRAM_CYCLES0_0_REG
{
                                                         // Properties: Bit: 20, Type: ro, Reset Value: 0x0
    SMCC_SRAM_CYCLES0_0_WE_TIME_MASK =  0x00100000UL,    // Asynchronous assertion, refer to SET_CYCLES
    SMCC_SRAM_CYCLES0_0_WE_TIME_BPOS =  20UL,            // register.

                                                         // Properties: Bits: 19:17, Type: ro, Reset Value: 0x1
    SMCC_SRAM_CYCLES0_0_T_TR_MASK    =  0x000E0000UL,    // Turnaround time, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_0_T_TR_BPOS    =  17UL,            // 

                                                         // Properties: Bits: 16:14, Type: ro, Reset Value: 0x2
    SMCC_SRAM_CYCLES0_0_T_PC_MASK    =  0x0001C000UL,    // Page cycle time, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_0_T_PC_BPOS    =  14UL,            // 

                                                         // Properties: Bits: 13:11, Type: ro, Reset Value: 0x6
    SMCC_SRAM_CYCLES0_0_T_WP_MASK    =  0x00003800UL,    // WE assertion delay, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_0_T_WP_BPOS    =  11UL,            // 

                                                         // Properties: Bits: 10:8, Type: ro, Reset Value: 0x3
    SMCC_SRAM_CYCLES0_0_T_CEOE_MASK  =  0x00000700UL,    // OE assertion delay, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_0_T_CEOE_BPOS  =  8UL,             // 

                                                         // Properties: Bits: 7:4, Type: ro, Reset Value: 0xC
    SMCC_SRAM_CYCLES0_0_T_WC_MASK    =  0x000000F0UL,    // Write cycle time, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_0_T_WC_BPOS    =  4UL,             // 

                                                         // Properties: Bits: 3:0, Type: ro, Reset Value: 0xC
    SMCC_SRAM_CYCLES0_0_T_RC_MASK    =  0x0000000FUL,    // Read cycle time, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_0_T_RC_BPOS    =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (SMCC) OPMODE0_0
//
// Name                      SMCC_OPMODE0_0_REG
// Software Name            OPMODE
// Relative Address          0x00000104
// Absolute Address         0xE000E104
// Width                     32 bits
// Access Type               ro
// Reset Value               0xE2FE0800
// Description               SRAM/NOR chip select 0 OpCode, active
//
// Register SMCC_OPMODE0_0_REG Details
//
enum TSMCC_OPMODE0_0_REG
{
                                                          // Properties: Bits: 31:24, Type: ro, Reset Value: 0xE2
    SMCC_OPMODE0_0_ADDRESS_MATCH_MASK =  0xFF000000UL,    // Return the value of this tie-off. This is the
    SMCC_OPMODE0_0_ADDRESS_MATCH_BPOS =  24UL,            // comparison value for address bits [31:24] to
                                                          // determine the chip that is selected.

                                                          // Properties: Bits: 23:16, Type: ro, Reset Value: 0xFE
    SMCC_OPMODE0_0_ADDRESS_MASK_MASK  =  0x00FF0000UL,    // Return the value of this tie-off. This is the mask for
    SMCC_OPMODE0_0_ADDRESS_MASK_BPOS  =  16UL,            // address bits[31:24] to determine the chip that
                                                          // must be selected. A logic 1 indicates the bit is used
                                                          // for comparison.

// RESERVED                                                  Properties: Bits: 15:13, Type: ro, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 12, Type: ro, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 11, Type: ro, Reset Value: 0x1

                                                          // Properties: Bit: 10, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_0_BAA_MASK           =  0x00000400UL,    // The memory uses the burst address advance
    SMCC_OPMODE0_0_BAA_BPOS           =  10UL,            // signal, baa_n, when set. For a NAND memory
                                                          // interface, this bit is reserved.

                                                          // Properties: Bits: 9:7, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_0_WR_BL_MASK         =  0x00000380UL,    // Selects the write burst lengths, see SET_OPMODE
    SMCC_OPMODE0_0_WR_BL_BPOS         =  7UL,             // register.

// RESERVED                                                  Properties: Bit: 6, Type: ro, Reset Value: 0x0

                                                          // Properties: Bits: 5:3, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_0_RD_BL_MASK         =  0x00000038UL,    // Select memory burst lengths, see SET_OPMODE
    SMCC_OPMODE0_0_RD_BL_BPOS         =  3UL,             // Register.

// RESERVED                                                  Properties: Bit: 2, Type: ro, Reset Value: 0x0

                                                          // Properties: Bits: 1:0, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_0_MW_MASK            =  0x00000003UL,    // Select data bus width (8 or 16), see SET_OPMODE
    SMCC_OPMODE0_0_MW_BPOS            =  0UL              // register.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) SRAM_CYCLES0_1
//
// Name                     SMCC_SRAM_CYCLES0_1_REG
// Software Name            IF0_CHIP_1_CONFIG
// Relative Address         0x00000120
// Absolute Address         0xE000E120
// Width                    21 bits
// Access Type              ro
// Reset Value              0x0002B3CC
// Description              SRAM/NOR chip select 1 timing, active
//
// Register SMCC_SRAM_CYCLES0_1_REG Details
//          There is an instance of this register for each SRAM chip supported. You cannot read the read-only
//          sram_cycles Register in the Reset state
//
enum TSMCC_SRAM_CYCLES0_1_REG
{
                                                         // Properties: Bit: 20, Type: ro, Reset Value: 0x0
    SMCC_SRAM_CYCLES0_1_WE_TIME_MASK =  0x00100000UL,    // Asynchronous assertion, refer to SET_CYCLES
    SMCC_SRAM_CYCLES0_1_WE_TIME_BPOS =  20UL,            // register.

                                                         // Properties: Bits: 19:17, Type: ro, Reset Value: 0x1
    SMCC_SRAM_CYCLES0_1_T_TR_MASK    =  0x000E0000UL,    // Turnaround time, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_1_T_TR_BPOS    =  17UL,            // 

                                                         // Properties: Bits: 16:14, Type: ro, Reset Value: 0x2
    SMCC_SRAM_CYCLES0_1_T_PC_MASK    =  0x0001C000UL,    // Page cycle time, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_1_T_PC_BPOS    =  14UL,            // 

                                                         // Properties: Bits: 13:11, Type: ro, Reset Value: 0x6
    SMCC_SRAM_CYCLES0_1_T_WP_MASK    =  0x00003800UL,    // WE assertion delay, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_1_T_WP_BPOS    =  11UL,            // 

                                                         // Properties: Bits: 10:8, Type: ro, Reset Value: 0x3
    SMCC_SRAM_CYCLES0_1_T_CEOE_MASK  =  0x00000700UL,    // OE assertion delay, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_1_T_CEOE_BPOS  =  8UL,             // 

                                                         // Properties: Bits: 7:4, Type: ro, Reset Value: 0xC
    SMCC_SRAM_CYCLES0_1_T_WC_MASK    =  0x000000F0UL,    // Write cycle time, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_1_T_WC_BPOS    =  4UL,             // 

                                                         // Properties: Bits: 3:0, Type: ro, Reset Value: 0xC
    SMCC_SRAM_CYCLES0_1_T_RC_MASK    =  0x0000000FUL,    // Read cycle time, refer to SET_CYCLES register.
    SMCC_SRAM_CYCLES0_1_T_RC_BPOS    =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (SMCC) OPMODE0_1
//
// Name                     SMCC_OPMODE0_1_REG
// Relative Address         0x00000124
// Absolute Address         0xE000E124
// Width                    32 bits
// Access Type              ro
// Reset Value              0xE4FE0800
// Description              SRAM/NOR chip select 1 OpCode, active
//
// Register SMCC_OPMODE0_1_REG Details
//
enum TSMCC_OPMODE0_1_REG
{
                                                          // Properties: Bits: 31:24, Type: ro, Reset Value: 0xE4
    SMCC_OPMODE0_1_ADDRESS_MATCH_MASK =  0xFF000000UL,    // see 0x120
    SMCC_OPMODE0_1_ADDRESS_MATCH_BPOS =  24UL,            // 

                                                          // Properties: Bits: 23:16, Type: ro, Reset Value: 0xFE
    SMCC_OPMODE0_1_ADDRESS_MASK_MASK  =  0x00FF0000UL,    // see 0x120
    SMCC_OPMODE0_1_ADDRESS_MASK_BPOS  =  16UL,            // 

                                                          // Properties: Bits: 15:13, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_1_BURST_ALIGN_MASK   =  0x0000E000UL,    // reserved
    SMCC_OPMODE0_1_BURST_ALIGN_BPOS   =  13UL,            // 

                                                          // Properties: Bit: 12, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_1_BLS_MASK           =  0x00001000UL,    // reserved
    SMCC_OPMODE0_1_BLS_BPOS           =  12UL,            // 

                                                          // Properties: Bit: 11, Type: ro, Reset Value: 0x1
    SMCC_OPMODE0_1_ADV_MASK           =  0x00000800UL,    // reserved
    SMCC_OPMODE0_1_ADV_BPOS           =  11UL,            // 

                                                          // Properties: Bit: 10, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_1_BAA_MASK           =  0x00000400UL,    // The memory uses the burst address advance
    SMCC_OPMODE0_1_BAA_BPOS           =  10UL,            // signal, baa_n, when set.
                                                          // For a NAND memory interface, this bit is
                                                          // reserved.

                                                          // Properties: Bits: 9:7, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_1_WR_BL_MASK         =  0x00000380UL,    // Selects the write burst lengths, see SET_OPMODE
    SMCC_OPMODE0_1_WR_BL_BPOS         =  7UL,             // register.

                                                          // Properties: Bit: 6, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_1_WR_SYNC_MASK       =  0x00000040UL,    // SRAM/NOR interface operates in asynchronous
    SMCC_OPMODE0_1_WR_SYNC_BPOS       =  6UL,             // mode

                                                          // Properties: Bits: 5:3, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_1_RD_BL_MASK         =  0x00000038UL,    // Select memory burst lengths, see SET_OPMODE
    SMCC_OPMODE0_1_RD_BL_BPOS         =  3UL,             // Register.

                                                          // Properties: Bit: 2, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_1_RD_SYNC_MASK       =  0x00000004UL,    // reserved
    SMCC_OPMODE0_1_RD_SYNC_BPOS       =  2UL,             // 

                                                          // Properties: Bits: 1:0, Type: ro, Reset Value: 0x0
    SMCC_OPMODE0_1_MW_MASK            =  0x00000003UL,    // Data bus width (8 or 16), see SET_OPMODE
    SMCC_OPMODE0_1_MW_BPOS            =  0UL              // register.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) NAND_CYCLES1_0
//
// Name                      SMCC_NAND_CYCLES1_0_REG
// Software Name             IF1_CHIP_0_CONFIG
// Relative Address          0x00000180
// Absolute Address          0xE000E180
// Width                     24 bits
// Access Type               ro
// Reset Value               0x0024ABCC
// Description               NAND Flash timing, active
//
// Register SMCC_NAND_CYCLES1_0_REG Details
//          There is an instance of this register for each NAND chip supported. You cannot read the read-only
//          nand_cycles Register in the Reset state
//
enum TSMCC_NAND_CYCLES1_0_REG
{
                                                       // Properties: Bits: 23:20, Type: ro, Reset Value: 0x2
    SMCC_NAND_CYCLES1_0_T_RR_MASK  =  0x00F00000UL,    // BUSY to RE, refer to SET_CYCLES register.
    SMCC_NAND_CYCLES1_0_T_RR_BPOS  =  20UL,            // 

                                                       // Properties: Bits: 19:17, Type: ro, Reset Value: 0x2
    SMCC_NAND_CYCLES1_0_T_AR_MASK  =  0x000E0000UL,    // ID read time, refer to SET_CYCLES register.
    SMCC_NAND_CYCLES1_0_T_AR_BPOS  =  17UL,            // 

                                                       // Properties: Bits: 16:14, Type: ro, Reset Value: 0x2
    SMCC_NAND_CYCLES1_0_T_CLR_MASK =  0x0001C000UL,    // Page cycle time, refer to SET_CYCLES register.
    SMCC_NAND_CYCLES1_0_T_CLR_BPOS =  14UL,            // Status read time for NAND chip
                                                       // configurations.Minimum permitted value = 0.

                                                       // Properties: Bits: 13:11, Type: ro, Reset Value: 0x5
    SMCC_NAND_CYCLES1_0_T_WP_MASK  =  0x00003800UL,    // WE deassertion delay, refer to SET_CYCLES
    SMCC_NAND_CYCLES1_0_T_WP_BPOS  =  11UL,            // register.

                                                       // Properties: Bits: 10:8, Type: ro, Reset Value: 0x3
    SMCC_NAND_CYCLES1_0_T_REA_MASK =  0x00000700UL,    // RE assertion delay, refer to SET_CYCLES register.
    SMCC_NAND_CYCLES1_0_T_REA_BPOS =  8UL,             // 

                                                       // Properties: Bits: 7:4, Type: ro, Reset Value: 0xC
    SMCC_NAND_CYCLES1_0_T_WC_MASK  =  0x000000F0UL,    // Write cycle time, refer to SET_CYCLES register.
    SMCC_NAND_CYCLES1_0_T_WC_BPOS  =  4UL,             // 

                                                       // Properties: Bits: 3:0, Type: ro, Reset Value: 0xC
    SMCC_NAND_CYCLES1_0_T_RC_MASK  =  0x0000000FUL,    // Read cycle time, refer to SET_CYCLES register.
    SMCC_NAND_CYCLES1_0_T_RC_BPOS  =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (SMCC) OPMODE1_0
//
// Name                      SMCC_OPMODE1_0_REG
// Relative Address          0x00000184
// Absolute Address         0xE000E184
// Width                     32 bits
// Access Type               ro
// Reset Value               0xE1FF0001
// Description               NAND Flash OpCode, active
//
// Register SMCC_OPMODE1_0_REG Details
//
enum TSMCC_OPMODE1_0_REG
{
                                                          // Properties: Bits: 31:24, Type: ro, Reset Value: 0xE1
    SMCC_OPMODE1_0_ADDRESS_MATCH_MASK =  0xFF000000UL,    // Return the value of this tie-off. This is the
    SMCC_OPMODE1_0_ADDRESS_MATCH_BPOS =  24UL,            // comparison value for address bits [31:24] to
                                                          // determine the chip that is selected.

                                                          // Properties: Bits: 23:16, Type: ro, Reset Value: 0xFF
    SMCC_OPMODE1_0_ADDRESS_MASK_MASK  =  0x00FF0000UL,    // Return the value of this tie-off. This is the mask for
    SMCC_OPMODE1_0_ADDRESS_MASK_BPOS  =  16UL,            // address bits[31:24] to determine the chip that
                                                          // must be selected. A logic 1 indicates the bit is used
                                                          // for comparison.

// RESERVED                                                  Properties: Bits: 15:13, Type: ro, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 12, Type: ro, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 11, Type: ro, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 10, Type: ro, Reset Value: 0x0

// RESERVED                                                  Properties: Bits: 9:7, Type: ro, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 6, Type: ro, Reset Value: 0x0

// RESERVED                                                  Properties: Bits: 5:3, Type: ro, Reset Value: 0x0

// RESERVED                                                  Properties: Bit: 2, Type: ro, Reset Value: 0x0

                                                          // Properties: Bits: 1:0, Type: ro, Reset Value: 0x1
    SMCC_OPMODE1_0_MW_MASK            =  0x00000003UL,    // Data bus width is 8 bits, see SET_OPMODE
    SMCC_OPMODE1_0_MW_BPOS            =  0UL              // register.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) USER_STATUS
//
// Name                     SMCC_USER_STATUS_REG
// Software Name            USER_STATUS
// Relative Address         0x00000200
// Absolute Address         0xE000E200
// Width                    8 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              User Status Register
//
// Register SMCC_USER_STATUS_REG Details
//         The user_status is read-only and returns the value of the user_status[7:0] signals. You can read this register
//         in all operating states.
//
enum TSMCC_USER_STATUS_REG
{
                                              // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    SMCC_USER_STATUS_MASK =  0x000000FFUL,    // This value returns the state of the user_status[7:0]
    SMCC_USER_STATUS_BPOS =  0UL              // inputs.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) USER_CONFIG
//
// Name                     SMCC_USER_CONFIG_REG
// Software Name            USER_CONFIG
// Relative Address         0x00000204
// Absolute Address         0xE000E204
// Width                    8 bits
// Access Type              wo
// Reset Value              x
// Description              User Configuration Register
//
// Register SMCC_USER_CONFIG_REG Details
//         The user_config
//         is write-only and controls the status of the user_config[7:0] signals. You can write to this register in all
//         operating states.
//
enum TSMCC_USER_CONFIG_REG
{
                                              // Properties: Bits: 7:0, Type: wo, Reset Value: x
    SMCC_USER_CONFIG_MASK =  0x000000FFUL,    // This value sets the state of the user_config[7:0]
    SMCC_USER_CONFIG_BPOS =  0UL              // outputs.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) ECC_STATUS_1
//
// Name                      SMCC_ECC_STATUS_1_REG
// Software Name             IF1_ECC
// Relative Address          0x00000400
// Absolute Address          0xE000E400
// Width                     30 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               ECC Status and Clear Register 1
//
// Register SMCC_ECC_STATUS_1_REG Details
//         The ecc_status
//         is read-only and contains status information for the ECC. Although this is a read-only register, the bottom
//         five bits can be written to clear the corresponding interrupts.To clear the interrupt, you must write a 1 to
//         the appropriate bit.
//
enum TSMCC_ECC_STATUS_1_REG
{
                                                     // Properties: Bits: 29:25, Type: ro, Reset Value: 0x0
    SMCC_ECC_READ_MASK           =  0x3E000000UL,    // Read flags for ECC blocks. Indicate whether the
    SMCC_ECC_READ_BPOS           =  25UL,            // stored ECC value for each block has been read
                                                     // from memory:
                                                     // 0: not read
                                                     // 1: read
                                                     // Bit [29] Extra block (if used).
                                                     // Bit [28] Block 3.
                                                     // Bit [27] Block 2.
                                                     // Bit [26] Block 1.
                                                     // Bit [25] Block 0.

                                                     // Properties: Bits: 24:20, Type: ro, Reset Value: 0x0
    SMCC_ECC_CAN_CORRECT_MASK    =  0x01F00000UL,    // Correctable flag for each ECC block:
    SMCC_ECC_CAN_CORRECT_BPOS    =  20UL,            // 0: not correctable error
                                                     // 1: correctable error
                                                     // Bit [24] Extra block (if used).
                                                     // Bit [23] Block 3.
                                                     // Bit [22] Block 2.
                                                     // Bit [21] Block 1.
                                                     // Bit [20] Block 0.

                                                     // Properties: Bits: 19:15, Type: ro, Reset Value: 0x0
    SMCC_ECC_FAIL_MASK           =  0x000F8000UL,    // Pass/fail flag for each ECC block
    SMCC_ECC_FAIL_BPOS           =  15UL,            // 

                                                     // Properties: Bits: 14:10, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE_VALID_MASK    =  0x00007C00UL,    // Valid flag for each ECC block.
    SMCC_ECC_VALUE_VALID_BPOS    =  10UL,            // 

                                                     // Properties: Bit: 9, Type: ro, Reset Value: 0x0
    SMCC_ECC_READ_NOT_WRITE_MASK =  0x00000200UL,    // ECC calcuation type:
    SMCC_ECC_READ_NOT_WRITE_BPOS =  9UL,             // 0: write
                                                     // 1: read

                                                     // Properties: Bits: 8:7, Type: ro, Reset Value: 0x0
    SMCC_ECC_LAST_STATUS_MASK    =  0x00000180UL,    // Last ECC result is updated after completing the
    SMCC_ECC_LAST_STATUS_BPOS    =  7UL,             // ECC calculation:
                                                     // 00: Completed successfully.
                                                     // 01: Unaligned Address, or out-of-range.
                                                     // 10: Data stop after incomplete block.
                                                     // 11: Data stopped but values not read/written
                                                     // because of ecc_jump value.

                                                     // Properties: Bit: 6, Type: ro, Reset Value: 0x0
    SMCC_ECC_STATUS_MASK         =  0x00000040UL,    // Status of the ECC block:
    SMCC_ECC_STATUS_BPOS         =  6UL,             // 0: idle
                                                     // 1: busy

                                                     // Properties: Bits: 5:0, Type: ro, Reset Value: 0x0
    SMCC_RAW_INT_STATUS_MASK     =  0x0000003FUL,    // The interrupts are:
    SMCC_RAW_INT_STATUS_BPOS     =  0UL              // Bit [5] Abort.
                                                     // Bit [4] Extra block (if used).
                                                     // Bit [3] Block 3.
                                                     // Bit [2] Block 2.
                                                     // Bit [1] Block 1.
                                                     // Bit [0] Block 0.
                                                     // To clear the interrupt, write a 1 to the bit.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) ECC_MEMCFG_1
//
// Name                     SMCC_ECC_MEMCFG_1_REG
// Relative Address         0x00000404
// Absolute Address         0xE000E404
// Width                    13 bits
// Access Type              rw
// Reset Value              0x00000043
// Description              ECC Memory Configuation Register 1
//
// Register SMCC_ECC_MEMCFG_1_REG Details
//         The ecc_memcfg Register is read-write and contains information about the structure of the memory. Note;
//         You must not write to this register while the ECC block is busy. You can read the current ECC block status
//         from the ECC Status Register.
//
enum TSMCC_ECC_MEMCFG_1_REG
{
                                                       // Properties: Bits: 12:11, Type: rw, Reset Value: 0x0
    SMCC_ECC_EXTRA_BLOCK_SIZE_MASK =  0x00001800UL,    // The size of the extra block in memory after the last
    SMCC_ECC_EXTRA_BLOCK_SIZE_BPOS =  11UL,            // 512 block:
                                                       // 00: 4 bytes
                                                       // 01: 8 bytes
                                                       // 10: 16 bytes
                                                       // 11: 32 bytes
                                                       // Note: These bits are only present if you configure
                                                       // the SMC to use the ECC Extra Block Enable
                                                       // option.

                                                       // Properties: Bit: 10, Type: rw, Reset Value: 0x0
    SMCC_ECC_EXTRA_BLOCK_MASK      =  0x00000400UL,    // If configured, this enables a small block for extra
    SMCC_ECC_EXTRA_BLOCK_BPOS      =  10UL,            // information after the last 512 bytes block in the
                                                       // page. Note: These bits are only present if the ECC
                                                       // Extra Block Enable option is configured.

                                                       // Properties: Bit: 9, Type: rw, Reset Value: 0x0
    SMCC_ECC_INT_ABORT_MASK        =  0x00000200UL,    // Interrupt on ECC abort:
    SMCC_ECC_INT_ABORT_BPOS        =  9UL,             // 0: don't assert
                                                       // 1: assert

                                                       // Properties: Bit: 8, Type: rw, Reset Value: 0x0
    SMCC_ECC_INT_PASS_MASK         =  0x00000100UL,    // Interrupt when a correct ECC value is read from
    SMCC_ECC_INT_PASS_BPOS         =  8UL,             // memory:
                                                       // 0: don't assert
                                                       // 1: assert

                                                       // Properties: Bit: 7, Type: rw, Reset Value: 0x0
    SMCC_ECC_IGNORE_ADD_EIGHT_MASK =  0x00000080UL,    // Use to indicate if A8 is output with the address,
    SMCC_ECC_IGNORE_ADD_EIGHT_BPOS =  7UL,             // required to find the aligned start of blocks:
                                                       // 0: A8 is output
                                                       // 1: A8 is not output

                                                       // Properties: Bits: 6:5, Type: rw, Reset Value: 0x2
    SMCC_ECC_JUMP_MASK             =  0x00000060UL,    // Indicate that the memory supports column
    SMCC_ECC_JUMP_BPOS             =  5UL,             // change address commands:
                                                       // 00: no jumping, reads and writes only occur at end
                                                       // of page
                                                       // 01: jump using column change commands
                                                       // 10: jump using full command
                                                       // 11: reserved

                                                       // Properties: Bit: 4, Type: rw, Reset Value: 0x0
    SMCC_ECC_READ_END_MASK         =  0x00000010UL,    // Indicate when ECC values are read from memory:
    SMCC_ECC_READ_END_BPOS         =  4UL,             // 0: ECC value for a block must be read
                                                       // immediately after the block. Data access must
                                                       // stop on a 512 byte boundary.
                                                       // 1: ECC values for all blocks are read at the end of
                                                       // the page.

                                                       // Properties: Bits: 3:2, Type: rw, Reset Value: 0x0
    SMCC_ECC_MODE_MASK             =  0x0000000CUL,    // Specify the mode of the ECC block:
    SMCC_ECC_MODE_BPOS             =  2UL,             // 00: bypassed
                                                       // 01: ECC values are calculated and made available
                                                       // on the APB interface. But they are not read to or
                                                       // written from memory.
                                                       // 10: ECC values and calculated and read/written
                                                       // to memory. For a read, the ECC value is checked
                                                       // and the result of the check is made available on
                                                       // the APB interface.
                                                       // 11: reserved

                                                       // Properties: Bits: 1:0, Type: rw, Reset Value: 0x3
    SMCC_PAGE_SIZE_MASK            =  0x00000003UL,    // The number of 512 byte blocks in a page:
    SMCC_PAGE_SIZE_BPOS            =  0UL              // 00: No 512 byte blocks. Reserved if an
                                                       // ecc_extra_block is not configured and enabled.
                                                       // 01: One 512 byte block.
                                                       // 10: Two 512 byte blocks.
                                                       // 11: Four 512 byte blocks.

};

//------------------------------------------------------------------------------
//
// Register (SMCC) ECC_MEMCOMMAND1_1
//
// Name                    SMCC_ECC_MEMCOMMAND1_1_REG
// Relative Address        0x00000408
// Absolute Address        0xE000E408
// Width                   25 bits
// Access Type             rw
// Reset Value             0x01300080
// Description             ECC Memory Command 1 Register 1
//
// Register SMCC_ECC_MEMCOMMAND1_1_REG Details
//         The ecc_memcommand1
//         is read-write and contains the commands that the ECC block uses to detect the start of an ECC operation.
//
enum TSMCC_ECC_MEMCOMMAND1_1_REG
{
                                                        // Properties: Bit: 24, Type: rw, Reset Value: 0x1
    SMCC_NAND_RD_CMD_END_VALID_MASK =  0x01000000UL,    // Use the end command
    SMCC_NAND_RD_CMD_END_VALID_BPOS =  24UL,            // 

                                                        // Properties: Bits: 23:16, Type: rw, Reset Value: 0x30
    SMCC_NAND_RD_CMD_END_MASK       =  0x00FF0000UL,    // Use the NAND command to initiate a write
    SMCC_NAND_RD_CMD_END_BPOS       =  16UL,            // (0x30).

                                                        // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
    SMCC_NAND_RD_CMD_MASK           =  0x0000FF00UL,    // Use the NAND command used to initiate a read
    SMCC_NAND_RD_CMD_BPOS           =  8UL,             // (0x00).

                                                        // Properties: Bits: 7:0, Type: rw, Reset Value: 0x80
    SMCC_NAND_WR_CMD_MASK           =  0x000000FFUL,    // Use the NAND command to initiate a write
    SMCC_NAND_WR_CMD_BPOS           =  0UL              // (0x80).

};

//------------------------------------------------------------------------------
//
// Register (SMCC) ECC_MEMCOMMAND2_1
//
// Name                    SMCC_ECC_MEMCOMMAND2_1_REG
// Relative Address        0x0000040C
// Absolute Address        0xE000E40C
// Width                   25 bits
// Access Type             rw
// Reset Value             0x01E00585
// Description             ECC Memory Command 2 Register 1
//
// Register SMCC_ECC_MEMCOMMAND2_1_REG Details
//         The ecc_memcommand2 Register is read-write and contains the commands that the ECC block uses to
//         access different parts of a NAND page. The reset value is suitable for ONFI 1.0 compliant devices
//
enum TSMCC_ECC_MEMCOMMAND2_1_REG
{
                                                               // Properties: Bit: 24, Type: rw, Reset Value: 0x1
    SMCC_NAND_RD_COL_CHANGE_END_VALID_MASK =  0x01000000UL,    // Use the end command
    SMCC_NAND_RD_COL_CHANGE_END_VALID_BPOS =  24UL,            // 

                                                               // Properties: Bits: 23:16, Type: rw, Reset Value: 0xE0
    SMCC_NAND_RD_COL_CHANGE_END_MASK       =  0x00FF0000UL,    // Use the NAND command to initiate a write.
    SMCC_NAND_RD_COL_CHANGE_END_BPOS       =  16UL,            // 

                                                               // Properties: Bits: 15:8, Type: rw, Reset Value: 0x5
    SMCC_NAND_RD_COL_CHANGE_MASK           =  0x0000FF00UL,    // Use the NAND command to initiate a read or
    SMCC_NAND_RD_COL_CHANGE_BPOS           =  8UL,             // Spare bits pointer command.

                                                               // Properties: Bits: 7:0, Type: rw, Reset Value: 0x85
    SMCC_NAND_WR_COL_CHANGE_MASK           =  0x000000FFUL,    // The NAND command used to initiate a write
    SMCC_NAND_WR_COL_CHANGE_BPOS           =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (SMCC) ECC_ADDR0_1
//
// Name                    SMCC_ECC_ADDR0_1_REG
// Relative Address        0x00000410
// Absolute Address        0xE000E410
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ECC Address 0 Register 1
//
// Register SMCC_ECC_ADDR0_1_REG Details
//         The ecc_addr0 Register is read-only and contains the lower 32 bits of the ECC address
//
enum TSMCC_ECC_ADDR0_1_REG
{
                                                       // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    SMCC_ECC_ADDR0_1_ECC_ADDR_MASK =  0xFFFFFFFFUL,    // Address bits 31 to 0
    SMCC_ECC_ADDR0_1_ECC_ADDR_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (SMCC) ECC_ADDR1_1
//
// Name                    SMCC_ECC_ADDR1_1_REG
// Relative Address           0x00000414
// Absolute Address           0xE000E414
// Width                      24 bits
// Access Type                ro
// Reset Value                0x00000000
// Description                ECC Address 1 Register 1
//
// Register SMCC_ECC_ADDR1_1_REG Details
//            The ecc_addr1 Register is read-only and contains the upper 24 bits of the ECC address.
//
enum TSMCC_ECC_ADDR1_1_REG
{
                                                       // Properties: Bits: 23:0, Type: ro, Reset Value: 0x0
    SMCC_ECC_ADDR1_1_ECC_ADDR_MASK =  0x00FFFFFFUL,    // Address bits 55 to 32
    SMCC_ECC_ADDR1_1_ECC_ADDR_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (SMCC) ECC_VALUE0_1
//
// Name                       SMCC_ECC_VALUE0_1_REG
// Relative Address           0x00000418
// Absolute Address           0xE000E418
// Width                      32 bits
// Access Type                ro
// Reset Value                0x00000000
// Description                ECC Value 0 Register 1
//
// Register SMCC_ECC_VALUE0_1_REG Details
//            The five ecc_value Registers are read-only and contain block information for the ECC. Note: Writing any
//            value to an ecc_value Register clears the ecc_int bit.
//
enum TSMCC_ECC_VALUE0_1_REG
{
                                                           // Properties: Bit: 31, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE0_1_ECC_INT_MASK     =  0x80000000UL,    // Interrupt flag for this value
    SMCC_ECC_VALUE0_1_ECC_INT_BPOS     =  31UL,            // 

                                                           // Properties: Bit: 30, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE0_1_ECC_VALID_MASK   =  0x40000000UL,    // Indicate if this value is valid
    SMCC_ECC_VALUE0_1_ECC_VALID_BPOS   =  30UL,            // 

                                                           // Properties: Bit: 29, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE0_1_ECC_READ_MASK    =  0x20000000UL,    // Indicate if the ECC value has been read from
    SMCC_ECC_VALUE0_1_ECC_READ_BPOS    =  29UL,            // memory

                                                           // Properties: Bit: 28, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE0_1_ECC_FAIL_MASK    =  0x10000000UL,    // Indicate if this value has failed
    SMCC_ECC_VALUE0_1_ECC_FAIL_BPOS    =  28UL,            // 

                                                           // Properties: Bit: 27, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE0_1_ECC_CORRECT_MASK =  0x08000000UL,    // Indicate if this block is correctable
    SMCC_ECC_VALUE0_1_ECC_CORRECT_BPOS =  27UL,            // 

// RESERVED                                                   Properties: Bits: 26:24, Type: ro, Reset Value: 0x0

                                                           // Properties: Bits: 23:0, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE0_1_ECC_VALUE_MASK   =  0x00FFFFFFUL,    // ECC value of check result for block, depending on
    SMCC_ECC_VALUE0_1_ECC_VALUE_BPOS   =  0UL              // ECC configuration

};

//------------------------------------------------------------------------------
//
// Register (SMCC) ECC_VALUE1_1
//
// Name                       SMCC_ECC_VALUE1_1_REG
// Relative Address           0x0000041C
// Absolute Address           0xE000E41C
// Width                      32 bits
// Access Type                ro
// Reset Value                0x00000000
// Description                ECC Value 1 Register 1
//
// Register SMCC_ECC_VALUE1_1_REG Details
//            The five ecc_value Registers are read-only and contain block information for the ECC. Note: writing any
//            value to an ecc_value Register clears the ecc_int bit.
//
enum TSMCC_ECC_VALUE1_1_REG
{
                                                           // Properties: Bit: 31, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE1_1_ECC_INT_MASK     =  0x80000000UL,    // Interrupt flag for this value
    SMCC_ECC_VALUE1_1_ECC_INT_BPOS     =  31UL,            // 

                                                           // Properties: Bit: 30, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE1_1_ECC_VALID_MASK   =  0x40000000UL,    // Indicate if this value is valid
    SMCC_ECC_VALUE1_1_ECC_VALID_BPOS   =  30UL,            // 

                                                           // Properties: Bit: 29, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE1_1_ECC_READ_MASK    =  0x20000000UL,    // Indicate if the ECC value has been read from
    SMCC_ECC_VALUE1_1_ECC_READ_BPOS    =  29UL,            // memory

                                                           // Properties: Bit: 28, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE1_1_ECC_FAIL_MASK    =  0x10000000UL,    // Indicate if this value has failed
    SMCC_ECC_VALUE1_1_ECC_FAIL_BPOS    =  28UL,            // 

                                                           // Properties: Bit: 27, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE1_1_ECC_CORRECT_MASK =  0x08000000UL,    // Indicate if this block is correctable
    SMCC_ECC_VALUE1_1_ECC_CORRECT_BPOS =  27UL,            // 

// RESERVED                                                   Properties: Bits: 26:24, Type: ro, Reset Value: 0x0

                                                           // Properties: Bits: 23:0, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE1_1_ECC_VALUE_MASK   =  0x00FFFFFFUL,    // ECC value of check result for block, depending on
    SMCC_ECC_VALUE1_1_ECC_VALUE_BPOS   =  0UL              // ECC configuration

};

//------------------------------------------------------------------------------
//
// Register (SMCC) ECC_VALUE2_1
//
// Name                       SMCC_ECC_VALUE2_1_REG
// Relative Address           0x00000420
// Absolute Address            0xE000E420
// Width                       32 bits
// Access Type                 ro
// Reset Value                 0x00000000
// Description                 ECC Value 2 Register 1
//
// Register SMCC_ECC_VALUE2_1_REG Details
//            The five ecc_value Registers are read-only and contain block information for the ECC.
//            Note: writing any value to an ecc_value Register clears the ecc_int bit.
//
enum TSMCC_ECC_VALUE2_1_REG
{
                                                           // Properties: Bit: 31, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE2_1_ECC_INT_MASK     =  0x80000000UL,    // Interrupt flag for this value
    SMCC_ECC_VALUE2_1_ECC_INT_BPOS     =  31UL,            // 

                                                           // Properties: Bit: 30, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE2_1_ECC_VALID_MASK   =  0x40000000UL,    // Indicate if this value is valid
    SMCC_ECC_VALUE2_1_ECC_VALID_BPOS   =  30UL,            // 

                                                           // Properties: Bit: 29, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE2_1_ECC_READ_MASK    =  0x20000000UL,    // Indicate if the ECC value has been read from
    SMCC_ECC_VALUE2_1_ECC_READ_BPOS    =  29UL,            // memory

                                                           // Properties: Bit: 28, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE2_1_ECC_FAIL_MASK    =  0x10000000UL,    // Indicate if this value has failed
    SMCC_ECC_VALUE2_1_ECC_FAIL_BPOS    =  28UL,            // 

                                                           // Properties: Bit: 27, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE2_1_ECC_CORRECT_MASK =  0x08000000UL,    // Indicate if this block is correctable
    SMCC_ECC_VALUE2_1_ECC_CORRECT_BPOS =  27UL,            // 

// RESERVED                                                   Properties: Bits: 26:24, Type: ro, Reset Value: 0x0

                                                           // Properties: Bits: 23:0, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE2_1_ECC_VALUE_MASK   =  0x00FFFFFFUL,    // ECC value of check result for block, depending on
    SMCC_ECC_VALUE2_1_ECC_VALUE_BPOS   =  0UL              // ECC configuration

};

//------------------------------------------------------------------------------
//
// Register (SMCC) ECC_VALUE3_1
//
// Name                        SMCC_ECC_VALUE3_1_REG
// Relative Address            0x00000424
// Absolute Address            0xE000E424
// Width                       32 bits
// Access Type                 ro
// Reset Value                 0x00000000
// Description                 ECC Value 3 Register 1
//
// Register SMCC_ECC_VALUE3_1_REG Details
//            The five ecc_value Registers are read-only and contain block information for the ECC. Note: writing any
//            value to an ecc_value Register clears the ecc_int bit.
//
enum TSMCC_ECC_VALUE3_1_REG
{
                                                           // Properties: Bit: 31, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE3_1_ECC_INT_MASK     =  0x80000000UL,    // Interrupt flag for this value
    SMCC_ECC_VALUE3_1_ECC_INT_BPOS     =  31UL,            // 

                                                           // Properties: Bit: 30, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE3_1_ECC_VALID_MASK   =  0x40000000UL,    // Indicate if this value is valid
    SMCC_ECC_VALUE3_1_ECC_VALID_BPOS   =  30UL,            // 

                                                           // Properties: Bit: 29, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE3_1_ECC_READ_MASK    =  0x20000000UL,    // Indicate if the ECC value has been read from
    SMCC_ECC_VALUE3_1_ECC_READ_BPOS    =  29UL,            // memory

                                                           // Properties: Bit: 28, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE3_1_ECC_FAIL_MASK    =  0x10000000UL,    // Indicate if this value has failed
    SMCC_ECC_VALUE3_1_ECC_FAIL_BPOS    =  28UL,            // 

                                                           // Properties: Bit: 27, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE3_1_ECC_CORRECT_MASK =  0x08000000UL,    // Indicate if this block is correctable
    SMCC_ECC_VALUE3_1_ECC_CORRECT_BPOS =  27UL,            // 

// RESERVED                                                   Properties: Bits: 26:24, Type: ro, Reset Value: 0x0

                                                           // Properties: Bits: 23:0, Type: ro, Reset Value: 0x0
    SMCC_ECC_VALUE3_1_ECC_VALUE_MASK   =  0x00FFFFFFUL,    // ECC value of check result for block, depending on
    SMCC_ECC_VALUE3_1_ECC_VALUE_BPOS   =  0UL              // ECC configuration

};

#endif // PS7_SMCC_H

