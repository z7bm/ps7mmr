//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_FUNNEL
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

#ifndef PS7_FUNNEL_H
#define PS7_FUNNEL_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    FUNNEL MMRs
//
//  Name                    Address                            Width   Type     Reset Value   Description
enum TFUNNEL
{
    FUNNEL_CONTROL_REG    =  DEBUG_FUNNEL_ADDR + 0x00000000, //  12    rw       0x00000300    CSTF Control Register
    FUNNEL_PRICONTROL_REG =  DEBUG_FUNNEL_ADDR + 0x00000004, //  24    rw       0x00FAC688    CSTF Priority Control Register
    FUNNEL_ITATBDATA0_REG =  DEBUG_FUNNEL_ADDR + 0x00000EEC, //   5    rw       0x00000000    Integration Test ATB Data 0 Register
    FUNNEL_ITATBCTR2_REG  =  DEBUG_FUNNEL_ADDR + 0x00000EF0, //   2    rw       0x00000000    Integration Test ATB Control 2 Register
    FUNNEL_ITATBCTR1_REG  =  DEBUG_FUNNEL_ADDR + 0x00000EF4, //   7    rw       0x00000000    Integration Test ATB Control 1 Register
    FUNNEL_ITATBCTR0_REG  =  DEBUG_FUNNEL_ADDR + 0x00000EF8, //  10    mixed    0x00000000    Integration Test ATB Control 0 Register
    FUNNEL_IMCR_REG       =  DEBUG_FUNNEL_ADDR + 0x00000F00, //   1    rw       0x00000000    Integration Mode Control Register
    FUNNEL_CTSR_REG       =  DEBUG_FUNNEL_ADDR + 0x00000FA0, //   4    rw       0x0000000F    Claim Tag Set Register
    FUNNEL_CTCR_REG       =  DEBUG_FUNNEL_ADDR + 0x00000FA4, //   4    rw       0x00000000    Claim Tag Clear Register
    FUNNEL_LAR_REG        =  DEBUG_FUNNEL_ADDR + 0x00000FB0, //  32    wo       0x00000000    Lock Access Register
    FUNNEL_LSR_REG        =  DEBUG_FUNNEL_ADDR + 0x00000FB4, //   3    ro       0x00000003    Lock Status Register
    FUNNEL_ASR_REG        =  DEBUG_FUNNEL_ADDR + 0x00000FB8, //   8    ro       0x00000000    Authentication Status Register
    FUNNEL_DEVID_REG      =  DEBUG_FUNNEL_ADDR + 0x00000FC8, //   8    ro       0x00000028    Device ID
    FUNNEL_DTIR_REG       =  DEBUG_FUNNEL_ADDR + 0x00000FCC, //   8    ro       0x00000012    Device Type Identifier Register
    FUNNEL_PERIPHID4_REG  =  DEBUG_FUNNEL_ADDR + 0x00000FD0, //   8    ro       0x00000004    Peripheral ID4
    FUNNEL_PERIPHID5_REG  =  DEBUG_FUNNEL_ADDR + 0x00000FD4, //   8    ro       0x00000000    Peripheral ID5
    FUNNEL_PERIPHID6_REG  =  DEBUG_FUNNEL_ADDR + 0x00000FD8, //   8    ro       0x00000000    Peripheral ID6
    FUNNEL_PERIPHID7_REG  =  DEBUG_FUNNEL_ADDR + 0x00000FDC, //   8    ro       0x00000000    Peripheral ID7
    FUNNEL_PERIPHID0_REG  =  DEBUG_FUNNEL_ADDR + 0x00000FE0, //   8    ro       0x00000008    Peripheral ID0
    FUNNEL_PERIPHID1_REG  =  DEBUG_FUNNEL_ADDR + 0x00000FE4, //   8    ro       0x000000B9    Peripheral ID1
    FUNNEL_PERIPHID2_REG  =  DEBUG_FUNNEL_ADDR + 0x00000FE8, //   8    ro       0x0000001B    Peripheral ID2
    FUNNEL_PERIPHID3_REG  =  DEBUG_FUNNEL_ADDR + 0x00000FEC, //   8    ro       0x00000000    Peripheral ID3
    FUNNEL_COMPID0_REG    =  DEBUG_FUNNEL_ADDR + 0x00000FF0, //   8    ro       0x0000000D    Component ID0
    FUNNEL_COMPID1_REG    =  DEBUG_FUNNEL_ADDR + 0x00000FF4, //   8    ro       0x00000090    Component ID1
    FUNNEL_COMPID2_REG    =  DEBUG_FUNNEL_ADDR + 0x00000FF8, //   8    ro       0x00000005    Component ID2
    FUNNEL_COMPID3_REG    =  DEBUG_FUNNEL_ADDR + 0x00000FFC  //   8    ro       0x000000B1    Component ID3
};
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (FUNNEL) CONTROL
//
// Name                    FUNNEL_CONTROL_REG
// Relative Address        0x00000000
// Absolute Address        0xF8804000
// Width                   12 bits
// Access Type             rw
// Reset Value             0x00000300
// Description             CSTF Control Register
//
// Register FUNNEL_CONTROL_REG Details
//
enum TFUNNEL_CONTROL_REG
{
                                                          // Properties: Bits: 11:8, Type: rw, Reset Value: 0x3
    FUNNEL_CONTROL_MIN_HOLD_TIME_MASK =  0x00000F00UL,    // The formatting scheme can easily become
    FUNNEL_CONTROL_MIN_HOLD_TIME_BPOS =  8UL,             // inefficient if fast switching occurs, so, where
                                                          // possible, this must be minimized. If a source has
                                                          // nothing to transmit, then
                                                          // another source is selected irrespective of the
                                                          // minimum number of cycles. Reset is 0x3. The
                                                          // CSTF holds for the minimum hold time and one
                                                          // additional cycle.
                                                          // The mFunnelum value that can be entered is 0xE
                                                          // and this equates to 15 cycles.
                                                          // 0xF is reserved.

                                                          // Properties: Bit: 7, Type: rw, Reset Value: 0x0
    FUNNEL_CONTROL_ENABLE_SLAVE7_MASK =  0x00000080UL,    // Setting this bit enables this slave port. If the bit is
    FUNNEL_CONTROL_ENABLE_SLAVE7_BPOS =  7UL,             // not set then this has the effect of excluding the
                                                          // port from the priority selection scheme.

                                                          // Properties: Bit: 6, Type: rw, Reset Value: 0x0
    FUNNEL_CONTROL_ENABLE_SLAVE6_MASK =  0x00000040UL,    // Setting this bit enables this slave port. If the bit is
    FUNNEL_CONTROL_ENABLE_SLAVE6_BPOS =  6UL,             // not set then this has the effect of excluding the
                                                          // port from the priority selection scheme.

                                                          // Properties: Bit: 5, Type: rw, Reset Value: 0x0
    FUNNEL_CONTROL_ENABLE_SLAVE5_MASK =  0x00000020UL,    // Setting this bit enables this slave port. If the bit is
    FUNNEL_CONTROL_ENABLE_SLAVE5_BPOS =  5UL,             // not set then this has the effect of excluding the
                                                          // port from the priority selection scheme.

                                                          // Properties: Bit: 4, Type: rw, Reset Value: 0x0
    FUNNEL_CONTROL_ENABLE_SLAVE4_MASK =  0x00000010UL,    // Setting this bit enables this slave port. If the bit is
    FUNNEL_CONTROL_ENABLE_SLAVE4_BPOS =  4UL,             // not set then this has the effect of excluding the
                                                          // port from the priority selection scheme.

                                                          // Properties: Bit: 3, Type: rw, Reset Value: 0x0
    FUNNEL_CONTROL_ENABLE_SLAVE3_MASK =  0x00000008UL,    // Setting this bit enables this slave port. If the bit is
    FUNNEL_CONTROL_ENABLE_SLAVE3_BPOS =  3UL,             // not set then this has the effect of excluding the
                                                          // port from the priority selection scheme.

                                                          // Properties: Bit: 2, Type: rw, Reset Value: 0x0
    FUNNEL_CONTROL_ENABLE_SLAVE2_MASK =  0x00000004UL,    // Setting this bit enables this slave port. If the bit is
    FUNNEL_CONTROL_ENABLE_SLAVE2_BPOS =  2UL,             // not set then this has the effect of excluding the
                                                          // port from the priority selection scheme.

                                                          // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    FUNNEL_CONTROL_ENABLE_SLAVE1_MASK =  0x00000002UL,    // Setting this bit enables this slave port. If the bit is
    FUNNEL_CONTROL_ENABLE_SLAVE1_BPOS =  1UL,             // not set then this has the effect of excluding the
                                                          // port from the priority selection scheme.

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    FUNNEL_CONTROL_ENABLE_SLAVE0_MASK =  0x00000001UL,    // Setting this bit enables this slave port. If the bit is
    FUNNEL_CONTROL_ENABLE_SLAVE0_BPOS =  0UL              // not set then this has the effect of excluding the
                                                          // port from the priority selection scheme.

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) PRICONTROL
//
// Name                    FUNNEL_PRICONTROL_REG
// Relative Address        0x00000004
// Absolute Address        0xF8804004
// Width                   24 bits
// Access Type             rw
// Reset Value             0x00FAC688
// Description             CSTF Priority Control Register
//
// Register FUNNEL_PRICONTROL_REG Details
//
enum TFUNNEL_PRICONTROL_REG
{
                                                         // Properties: Bits: 23:21, Type: rw, Reset Value: 0x7
    FUNNEL_PRICONTROL_PRI_PORT7_MASK =  0x00E00000UL,    // 8th port priority value.
    FUNNEL_PRICONTROL_PRI_PORT7_BPOS =  21UL,            // 

                                                         // Properties: Bits: 20:18, Type: rw, Reset Value: 0x6
    FUNNEL_PRICONTROL_PRI_PORT6_MASK =  0x001C0000UL,    // 7th port priority value.
    FUNNEL_PRICONTROL_PRI_PORT6_BPOS =  18UL,            // 

                                                         // Properties: Bits: 17:15, Type: rw, Reset Value: 0x5
    FUNNEL_PRICONTROL_PRI_PORT5_MASK =  0x00038000UL,    // 6th port priority value.
    FUNNEL_PRICONTROL_PRI_PORT5_BPOS =  15UL,            // 

                                                         // Properties: Bits: 14:12, Type: rw, Reset Value: 0x4
    FUNNEL_PRICONTROL_PRI_PORT4_MASK =  0x00007000UL,    // 5th port priority value.
    FUNNEL_PRICONTROL_PRI_PORT4_BPOS =  12UL,            // 

                                                         // Properties: Bits: 11:9, Type: rw, Reset Value: 0x3
    FUNNEL_PRICONTROL_PRI_PORT3_MASK =  0x00000E00UL,    // 4th port priority value.
    FUNNEL_PRICONTROL_PRI_PORT3_BPOS =  9UL,             // 

                                                         // Properties: Bits: 8:6, Type: rw, Reset Value: 0x2
    FUNNEL_PRICONTROL_PRI_PORT2_MASK =  0x000001C0UL,    // 3rd port priority value.
    FUNNEL_PRICONTROL_PRI_PORT2_BPOS =  6UL,             // 

                                                         // Properties: Bits: 5:3, Type: rw, Reset Value: 0x1
    FUNNEL_PRICONTROL_PRI_PORT1_MASK =  0x00000038UL,    // 2nd port priority value.
    FUNNEL_PRICONTROL_PRI_PORT1_BPOS =  3UL,             // 

                                                         // Properties: Bits: 2:0, Type: rw, Reset Value: 0x0
    FUNNEL_PRICONTROL_PRI_PORT0_MASK =  0x00000007UL,    // 1st port priority value.
    FUNNEL_PRICONTROL_PRI_PORT0_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) ITATBDATA0
//
// Name                    FUNNEL_ITATBDATA0_REG
// Relative Address        0x00000EEC
// Absolute Address        0xF8804EEC
// Width                   5 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Integration Test ATB Data 0 Register
//
// Register FUNNEL_ITATBDATA0_REG Details
//
enum TFUNNEL_ITATBDATA0_REG
{
                                                        // Properties: Bit: 4, Type: rw, Reset Value: 0x0
    FUNNEL_ITATBDATA0_ATDATA31_MASK =  0x00000010UL,    // Read the value of ATDATAS[31], set the value of
    FUNNEL_ITATBDATA0_ATDATA31_BPOS =  4UL,             // ATDATAM[31]

                                                        // Properties: Bit: 3, Type: rw, Reset Value: 0x0
    FUNNEL_ITATBDATA0_ATDATA23_MASK =  0x00000008UL,    // Read the value of ATDATAS[23], set the value of
    FUNNEL_ITATBDATA0_ATDATA23_BPOS =  3UL,             // ATDATAM[23]

                                                        // Properties: Bit: 2, Type: rw, Reset Value: 0x0
    FUNNEL_ITATBDATA0_ATDATA15_MASK =  0x00000004UL,    // Read the value of ATDATAS[15], set the value of
    FUNNEL_ITATBDATA0_ATDATA15_BPOS =  2UL,             // ATDATAM[15]

                                                        // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    FUNNEL_ITATBDATA0_ATDATA7_MASK  =  0x00000002UL,    // Read the value of ATDATAS[7], set the value of
    FUNNEL_ITATBDATA0_ATDATA7_BPOS  =  1UL,             // ATDATAM[7]

                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    FUNNEL_ITATBDATA0_ATDATA0_MASK  =  0x00000001UL,    // Read the value of ATDATAS[0], set the value of
    FUNNEL_ITATBDATA0_ATDATA0_BPOS  =  0UL              // ATDATAM[0]

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) ITATBCTR2
//
// Name                    FUNNEL_ITATBCTR2_REG
// Relative Address        0x00000EF0
// Absolute Address        0xF8804EF0
// Width                   2 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Integration Test ATB Control 2 Register
//
// Register FUNNEL_ITATBCTR2_REG Details
//
enum TFUNNEL_ITATBCTR2_REG
{
                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    FUNNEL_ITATBCTR2_AFREADY_MASK =  0x00000002UL,    // Read the value of AFVALIDM. Set the value of
    FUNNEL_ITATBCTR2_AFREADY_BPOS =  1UL,             // AFVALIDS<n>, where <n> is defined by the
                                                      // status of the CSTF Control Register.

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    FUNNEL_ITATBCTR2_VAL_MASK     =  0x00000001UL,    // Read the value of ATREADYM. Set the value of
    FUNNEL_ITATBCTR2_VAL_BPOS     =  0UL              // ATREADYS<n>, where <n> is defined by the
                                                      // status of the CSTF Control Register.

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) ITATBCTR1
//
// Name                     FUNNEL_ITATBCTR1_REG
// Relative Address         0x00000EF4
// Absolute Address         0xF8804EF4
// Width                    7 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Integration Test ATB Control 1 Register
//
// Register FUNNEL_ITATBCTR1_REG Details
//
enum TFUNNEL_ITATBCTR1_REG
{
                                                   // Properties: Bits: 6:0, Type: rw, Reset Value: 0x0
    FUNNEL_ITATBCTR1_ATID_MASK =  0x0000007FUL,    // Read the value of ATIDS. Set the value of ATIDM.
    FUNNEL_ITATBCTR1_ATID_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) ITATBCTR0
//
// Name                     FUNNEL_ITATBCTR0_REG
// Relative Address         0x00000EF8
// Absolute Address         0xF8804EF8
// Width                    10 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Integration Test ATB Control 0 Register
//
// Register FUNNEL_ITATBCTR0_REG Details
//
enum TFUNNEL_ITATBCTR0_REG
{
                                                      // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
    FUNNEL_ITATBCTR0_ATBYTES_MASK =  0x00000300UL,    // Read the value of ATBYTESS<n>. Set the value of
    FUNNEL_ITATBCTR0_ATBYTES_BPOS =  8UL,             // ATBYTESM.

// RESERVED                                              Properties: Bits: 7:2, Type: ro, Reset Value: 0x0

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    FUNNEL_ITATBCTR0_AFREADY_MASK =  0x00000002UL,    // Read the value of AFREADYS<n>. Set the value
    FUNNEL_ITATBCTR0_AFREADY_BPOS =  1UL,             // of AFREADYM.

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    FUNNEL_ITATBCTR0_ATVALID_MASK =  0x00000001UL,    // Read the value of ATVALIDS<n>. Set the value of
    FUNNEL_ITATBCTR0_ATVALID_BPOS =  0UL              // ATVALIDM.

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) IMCR
//
// Name                     FUNNEL_IMCR_REG
// Relative Address         0x00000F00
// Absolute Address        0xF8804F00
// Width                   1 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Integration Mode Control Register
//
// Register FUNNEL_IMCR_REG Details
//
enum TFUNNEL_IMCR_REG
{
                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    FUNNEL_IMCR_VAL_MASK =  0x00000001UL,    // Enable Integration Test registers.
    FUNNEL_IMCR_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) CTSR
//
// Name                    FUNNEL_CTSR_REG
// Relative Address        0x00000FA0
// Absolute Address        0xF8804FA0
// Width                   4 bits
// Access Type             rw
// Reset Value             0x0000000F
// Description             Claim Tag Set Register
//
// Register FUNNEL_CTSR_REG Details
//
enum TFUNNEL_CTSR_REG
{
                                             // Properties: Bits: 3:0, Type: rw, Reset Value: 0xF
    FUNNEL_CTSR_VAL_MASK =  0x0000000FUL,    // The claim tag register is used for any
    FUNNEL_CTSR_VAL_BPOS =  0UL              // interrogating tools to determine if the device is
                                             // being programmed or has been programmed.
                                             // Read:
                                             // 1= Claim tag is implemented, 0 = Claim tag is not
                                             // implemented
                                             // Write:
                                             // 1= Set claim tag bit, 0= No effect

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) CTCR
//
// Name                    FUNNEL_CTCR_REG
// Relative Address        0x00000FA4
// Absolute Address        0xF8804FA4
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Claim Tag Clear Register
//
// Register FUNNEL_CTCR_REG Details
//
enum TFUNNEL_CTCR_REG
{
                                             // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    FUNNEL_CTCR_VAL_MASK =  0x0000000FUL,    // The claim tag register is used for any
    FUNNEL_CTCR_VAL_BPOS =  0UL              // interrogating tools to determine if the device is
                                             // being programmed or has been programmed.
                                             // Read: Current value of claim tag.
                                             // Write: 1= Clear claim tag bit, 0= No effect

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) LAR
//
// Name                    FUNNEL_LAR_REG
// Relative Address        0x00000FB0
// Absolute Address        0xF8804FB0
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Lock Access Register
//
// Register FUNNEL_LAR_REG Details
//
enum TFUNNEL_LAR_REG
{
                                            // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
    FUNNEL_LAR_VAL_MASK =  0xFFFFFFFFUL,    // Write Access Code.
    FUNNEL_LAR_VAL_BPOS =  0UL              // Write behavior depends on PADDRDBG31 pin:
                                            // - PADDRDBG31=0 (lower 2GB):
                                            // After reset (via PRESETDBGn), Funnel is locked,
                                            // i.e., writes to all other registers using lower 2GB
                                            // addresses are ignored.
                                            // To unlock, 0xC5ACCE55 must be written this
                                            // register.
                                            // After the required registers are written, to lock
                                            // again, write a value other than 0xC5ACCE55 to
                                            // this register.
                                            // - PADDRDBG31=1 (upper 2GB):
                                            // Funnel is unlocked when upper 2GB addresses
                                            // are used to write to all the registers.
                                            // However, write to this register is ignored using a
                                            // upper 2GB address!
                                            // Note: read from this register always returns 0,
                                            // regardless of PADDRDBG31.

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) LSR
//
// Name                     FUNNEL_LSR_REG
// Relative Address         0x00000FB4
// Absolute Address         0xF8804FB4
// Width                    3 bits
// Access Type              ro
// Reset Value              0x00000003
// Description              Lock Status Register
//
// Register FUNNEL_LSR_REG Details
//
enum TFUNNEL_LSR_REG
{
                                               // Properties: Bit: 2, Type: ro, Reset Value: 0x0
    FUNNEL_LSR_8BIT_MASK   =  0x00000004UL,    // Set to 0 since Funnel implements a 32-bit lock
    FUNNEL_LSR_8BIT_BPOS   =  2UL,             // access register

                                               // Properties: Bit: 1, Type: ro, Reset Value: 0x1
    FUNNEL_LSR_STATUS_MASK =  0x00000002UL,    // Read behavior depends on PADDRDBG31 pin:
    FUNNEL_LSR_STATUS_BPOS =  1UL,             // - PADDRDBG31=0 (lower 2GB):
                                               // When a lower 2GB address is used to read this
                                               // register, this bit indicates whether Funnel is in
                                               // locked state
                                               // (1= locked, 0= unlocked).
                                               // - PADDRDBG31=1 (upper 2GB):
                                               // always returns 0.

                                               // Properties: Bit: 0, Type: ro, Reset Value: 0x1
    FUNNEL_LSR_IMP_MASK    =  0x00000001UL,    // Read behavior depends on PADDRDBG31 pin:
    FUNNEL_LSR_IMP_BPOS    =  0UL              // - PADDRDBG31=0 (lower 2GB):
                                               // always returns 1, meaning lock mechanism are
                                               // implemented.
                                               // - PADDRDBG31=1 (upper 2GB):
                                               // always returns 0, meaning lock mechanism is
                                               // NOT implemented.

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) ASR
//
// Name                     FUNNEL_ASR_REG
// Relative Address         0x00000FB8
// Absolute Address         0xF8804FB8
// Width                    8 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Authentication Status Register
//
// Register FUNNEL_ASR_REG Details
//
enum TFUNNEL_ASR_REG
{
                                            // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    FUNNEL_ASR_VAL_MASK =  0x000000FFUL,    // Indicates functionality not implemented
    FUNNEL_ASR_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) DEVID
//
// Name                    FUNNEL_DEVID_REG
// Relative Address        0x00000FC8
// Absolute Address        0xF8804FC8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000028
// Description             Device ID
//
// Register FUNNEL_DEVID_REG Details
//
enum TFUNNEL_DEVID_REG
{
                                                       // Properties: Bits: 7:4, Type: ro, Reset Value: 0x2
    FUNNEL_DEVID_STATIC_PRIO_MASK  =  0x000000F0UL,    // CSTF implements a static priority scheme
    FUNNEL_DEVID_STATIC_PRIO_BPOS  =  4UL,             // 

                                                       // Properties: Bits: 3:0, Type: ro, Reset Value: 0x8
    FUNNEL_DEVID_NUM_IN_PORTS_MASK =  0x0000000FUL,    // Number of input ports
    FUNNEL_DEVID_NUM_IN_PORTS_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) DTIR
//
// Name                    FUNNEL_DTIR_REG
// Relative Address        0x00000FCC
// Absolute Address        0xF8804FCC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000012
// Description             Device Type Identifier Register
//
// Register FUNNEL_DTIR_REG Details
//
enum TFUNNEL_DTIR_REG
{
                                             // Properties: Bits: 7:0, Type: ro, Reset Value: 0x12
    FUNNEL_DTIR_VAL_MASK =  0x000000FFUL,    // a trace link and specifically a funnel/router
    FUNNEL_DTIR_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) PERIPHID4
//
// Name                    FUNNEL_PERIPHID4_REG
// Relative Address        0x00000FD0
// Absolute Address        0xF8804FD0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000004
// Description             Peripheral ID4
//
// Register FUNNEL_PERIPHID4_REG Details
//
enum TFUNNEL_PERIPHID4_REG
{
                                                        // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
    FUNNEL_PERIPHID4_4KB_COUNT_MASK =  0x000000F0UL,    // 4KB Count, set to 0
    FUNNEL_PERIPHID4_4KB_COUNT_BPOS =  4UL,             // 

                                                        // Properties: Bits: 3:0, Type: ro, Reset Value: 0x4
    FUNNEL_PERIPHID4_JEP106ID_MASK  =  0x0000000FUL,    // JEP106 continuation code
    FUNNEL_PERIPHID4_JEP106ID_BPOS  =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) PERIPHID5
//
// Name                    FUNNEL_PERIPHID5_REG
// Relative Address        0x00000FD4
// Absolute Address        0xF8804FD4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID5
//
// Register FUNNEL_PERIPHID5_REG Details
//
enum TFUNNEL_PERIPHID5_REG
{
                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    FUNNEL_PERIPHID5_VAL_MASK =  0x000000FFUL,    // reserved
    FUNNEL_PERIPHID5_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) PERIPHID6
//
// Name                    FUNNEL_PERIPHID6_REG
// Relative Address        0x00000FD8
// Absolute Address        0xF8804FD8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID6
//
// Register FUNNEL_PERIPHID6_REG Details
//
enum TFUNNEL_PERIPHID6_REG
{
                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    FUNNEL_PERIPHID6_VAL_MASK =  0x000000FFUL,    // reserved
    FUNNEL_PERIPHID6_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) PERIPHID7
//
// Name                    FUNNEL_PERIPHID7_REG
// Relative Address        0x00000FDC
// Absolute Address        0xF8804FDC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID7
//
// Register FUNNEL_PERIPHID7_REG Details
//
enum TFUNNEL_PERIPHID7_REG
{
                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    FUNNEL_PERIPHID7_VAL_MASK =  0x000000FFUL,    // reserved
    FUNNEL_PERIPHID7_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) PERIPHID0
//
// Name                    FUNNEL_PERIPHID0_REG
// Relative Address        0x00000FE0
// Absolute Address        0xF8804FE0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000008
// Description             Peripheral ID0
//
// Register FUNNEL_PERIPHID0_REG Details
//
enum TFUNNEL_PERIPHID0_REG
{
                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x8
    FUNNEL_PERIPHID0_VAL_MASK =  0x000000FFUL,    // PartNumber0
    FUNNEL_PERIPHID0_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) PERIPHID1
//
// Name                    FUNNEL_PERIPHID1_REG
// Relative Address        0x00000FE4
// Absolute Address        0xF8804FE4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B9
// Description             Peripheral ID1
//
// Register FUNNEL_PERIPHID1_REG Details
//
enum TFUNNEL_PERIPHID1_REG
{
                                                           // Properties: Bits: 7:4, Type: ro, Reset Value: 0xB
    FUNNEL_PERIPHID1_JEP106ID_MASK     =  0x000000F0UL,    // JEP106 Identity Code [3:0]
    FUNNEL_PERIPHID1_JEP106ID_BPOS     =  4UL,             // 

                                                           // Properties: Bits: 3:0, Type: ro, Reset Value: 0x9
    FUNNEL_PERIPHID1_PART_NUMBER1_MASK =  0x0000000FUL,    // PartNumber1
    FUNNEL_PERIPHID1_PART_NUMBER1_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) PERIPHID2
//
// Name                    FUNNEL_PERIPHID2_REG
// Relative Address        0x00000FE8
// Absolute Address        0xF8804FE8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000001B
// Description             Peripheral ID2
//
// Register FUNNEL_PERIPHID2_REG Details
//
enum TFUNNEL_PERIPHID2_REG
{
                                                       // Properties: Bits: 7:4, Type: ro, Reset Value: 0x1
    FUNNEL_PERIPHID2_REV_NUM_MASK  =  0x000000F0UL,    // Revision number of Peripheral
    FUNNEL_PERIPHID2_REV_NUM_BPOS  =  4UL,             // 

                                                       // Properties: Bit: 3, Type: ro, Reset Value: 0x1
    FUNNEL_PERIPHID2_JEDEC_MASK    =  0x00000008UL,    // Indicates that a JEDEC assigned value is used
    FUNNEL_PERIPHID2_JEDEC_BPOS    =  3UL,             // 

                                                       // Properties: Bits: 2:0, Type: ro, Reset Value: 0x3
    FUNNEL_PERIPHID2_JEP106ID_MASK =  0x00000007UL,    // JEP106 Identity Code [6:4]
    FUNNEL_PERIPHID2_JEP106ID_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) PERIPHID3
//
// Name                    FUNNEL_PERIPHID3_REG
// Relative Address        0x00000FEC
// Absolute Address        0xF8804FEC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID3
//
// Register FUNNEL_PERIPHID3_REG Details
//
enum TFUNNEL_PERIPHID3_REG
{
                                                       // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
    FUNNEL_PERIPHID3_REV_AND_MASK  =  0x000000F0UL,    // RevAnd, at top level
    FUNNEL_PERIPHID3_REV_AND_BPOS  =  4UL,             // 

                                                       // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
    FUNNEL_PERIPHID3_CUST_MOD_MASK =  0x0000000FUL,    // Customer Modified
    FUNNEL_PERIPHID3_CUST_MOD_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) COMPID0
//
// Name                    FUNNEL_COMPID0_REG
// Relative Address        0x00000FF0
// Absolute Address        0xF8804FF0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000000D
// Description             Component ID0
//
// Register FUNNEL_COMPID0_REG Details
//
enum TFUNNEL_COMPID0_REG
{
                                                // Properties: Bits: 7:0, Type: ro, Reset Value: 0xD
    FUNNEL_COMPID0_VAL_MASK =  0x000000FFUL,    // Preamble
    FUNNEL_COMPID0_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) COMPID1
//
// Name                    FUNNEL_COMPID1_REG
// Relative Address        0x00000FF4
// Absolute Address        0xF8804FF4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000090
// Description             Component ID1
//
// Register FUNNEL_COMPID1_REG Details
//
enum TFUNNEL_COMPID1_REG
{
                                                // Properties: Bits: 7:0, Type: ro, Reset Value: 0x90
    FUNNEL_COMPID1_VAL_MASK =  0x000000FFUL,    // Preamble
    FUNNEL_COMPID1_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) COMPID2
//
// Name                    FUNNEL_COMPID2_REG
// Relative Address        0x00000FF8
// Absolute Address        0xF8804FF8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000005
// Description             Component ID2
//
// Register FUNNEL_COMPID2_REG Details
//
enum TFUNNEL_COMPID2_REG
{
                                                // Properties: Bits: 7:0, Type: ro, Reset Value: 0x5
    FUNNEL_COMPID2_VAL_MASK =  0x000000FFUL,    // Preamble
    FUNNEL_COMPID2_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FUNNEL) COMPID3
//
// Name                    FUNNEL_COMPID3_REG
// Relative Address        0x00000FFC
// Absolute Address        0xF8804FFC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B1
// Description             Component ID3
//
// Register FUNNEL_COMPID3_REG Details
//
enum TFUNNEL_COMPID3_REG
{
                                                // Properties: Bits: 7:0, Type: ro, Reset Value: 0xB1
    FUNNEL_COMPID3_VAL_MASK =  0x000000FFUL,    // Preamble
    FUNNEL_COMPID3_VAL_BPOS =  0UL              // 

};

#endif // PS7_FUNNEL_H

