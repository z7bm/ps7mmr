//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_OCM
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

#ifndef PS7_OCM_H
#define PS7_OCM_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    OCM MMRs
//
//  Name                        Address                   Width   Type     Reset Value   Description
enum TOCM
{
    OCM_PARITY_CTRL_REG       =  OCM_ADDR + 0x00000000, //  32    mixed    0x00000000    Control fields for RAM parity operation
    OCM_PARITY_ERRADDRESS_REG =  OCM_ADDR + 0x00000004, //  32    mixed    0x00000000    Stores the first parity error access address
    OCM_IRQ_STS_REG           =  OCM_ADDR + 0x00000008, //  32    mixed    0x00000000    Status of OCM Interrupt
    OCM_CTRL_REG              =  OCM_ADDR + 0x0000000C  //  32    mixed    0x00000000    Control fields for OCM
};
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (OCM) PARITY_CTRL
//
// Name                    OCM_PARITY_CTRL_REG
// Relative Address        0x00000000
// Absolute Address        0xF800C000
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Control fields for RAM parity operation
//
// Register OCM_PARITY_CTRL_REG Details
//
enum TOCM_PARITY_CTRL_REG
{
// RESERVED                                                    Properties: Bits: 31:21, Type: ro, Reset Value: 0x0

                                                            // Properties: Bits: 20:5, Type: rw, Reset Value: 0x0
    OCM_ODD_PARITY_EN_MASK              =  0x001FFFE0UL,    // Enable RAM Odd Parity Generation. The default
    OCM_ODD_PARITY_EN_BPOS              =  5UL,             // computed parity is even but this can be changed
                                                            // to odd parity via this APB register field.
                                                            // Note that, on reads, parity is always computed as
                                                            // even parity. The odd parity generation option is
                                                            // useful for verification purposes, enabling parity
                                                            // errors to be injected. One control bit per data byte
                                                            // (OddParity[0] controls Data[7:0] e.t.c)
                                                            // 0: Even Parity generated
                                                            // 1: Odd
                                                            // Parity generated

                                                            // Properties: Bit: 4, Type: rw, Reset Value: 0x0
    OCM_LOCK_FAIL_ERR_IRQ_EN_MASK       =  0x00000010UL,    // Enable interrupt when
    OCM_LOCK_FAIL_ERR_IRQ_EN_BPOS       =  4UL,             // an AXI LOCK ("locked access") command is
                                                            // detected.

                                                            // Properties: Bit: 3, Type: rw, Reset Value: 0x0
    OCM_MULTIPLE_PARITY_ERR_IRQ_EN_MASK =  0x00000008UL,    // Same as SingleParityErrIrqEn, but enables IRQ on
    OCM_MULTIPLE_PARITY_ERR_IRQ_EN_BPOS =  3UL,             // multiple parity errors detected.
                                                            // 0: IRQ is not generated when parity error detected
                                                            // and ParityCheckDis=0
                                                            // 1: IRQ is generated when parity error detected
                                                            // and ParityCheckDis=0.

                                                            // Properties: Bit: 2, Type: rw, Reset Value: 0x0
    OCM_SINGLE_PARITY_ERR_IRQ_EN_MASK   =  0x00000004UL,    // Enable interrupt when a single parity error is
    OCM_SINGLE_PARITY_ERR_IRQ_EN_BPOS   =  2UL,             // detected. Note that even if this field is 0, the
                                                            // OCM_IRQ_STS register will still log the error if
                                                            // ParityCheckDis=0. This allows software the
                                                            // option of polling if an error occurred.
                                                            // 0: IRQ is not generated when parity error detected
                                                            // and ParityCheckDis=0
                                                            // 1: IRQ is generated when parity error detected
                                                            // and ParityCheckDis=0.

                                                            // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    OCM_RD_RESP_PARITY_ERR_EN_MASK      =  0x00000002UL,    // Enable AXI read 'SLVERR' response for parity
    OCM_RD_RESP_PARITY_ERR_EN_BPOS      =  1UL,             // error detection.
                                                            // 0: Error will not be sent on AXI read channel when
                                                            // parity error detected
                                                            // 1: Error will be sent on AXI read channel when
                                                            // parity error detected and ParityCheckDis=0

                                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    OCM_PARITY_CHECK_DIS_MASK           =  0x00000001UL,    // Disable RAM Parity Checking. No checking or
    OCM_PARITY_CHECK_DIS_BPOS           =  0UL              // logging of status will occur when 1.
                                                            // 0: RAM Parity checking is enabled
                                                            // 1: RAM Parity checking is disabled

};

//------------------------------------------------------------------------------
//
// Register (OCM) PARITY_ERRADDRESS
//
// Name                    OCM_PARITY_ERRADDRESS_REG
// Relative Address        0x00000004
// Absolute Address        0xF800C004
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Stores the first parity error access address. This register is sticky and will retain its
//                         value unless explicitly cleared (written with 1's) with an APB write access. The
//                         physical RAM address is logged.
//
// Register OCM_PARITY_ERRADDRESS_REG Details
//
enum TOCM_PARITY_ERRADDRESS_REG
{
// RESERVED                                            Properties: Bits: 31:14, Type: ro, Reset Value: 0x0

                                                    // Properties: Bits: 13:0, Type: wtc, Reset Value: 0x0
    OCM_PARITY_ERR_ADDRESS_MASK =  0x00003FFFUL,    // When a parity Error occurs, the access address
    OCM_PARITY_ERR_ADDRESS_BPOS =  0UL              // associated with the error is logged here. The first
                                                    // error address will be held if multiple parity errors
                                                    // occur. Need an explicit write of all '1's' to
                                                    // reset/clear this field.

};

//------------------------------------------------------------------------------
//
// Register (OCM) IRQ_STS
//
// Name                    OCM_IRQ_STS_REG
// Relative Address        0x00000008
// Absolute Address        0xF800C008
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Status of OCM Interrupt
//
// Register OCM_IRQ_STS_REG Details
//
enum TOCM_IRQ_STS_REG
{
// RESERVED                                             Properties: Bits: 31:3, Type: ro, Reset Value: 0x0

                                                     // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
    OCM_LOCK_FAIL_ERR_MASK       =  0x00000004UL,    // When set (1), indicates that an AXI LOCK has
    OCM_LOCK_FAIL_ERR_BPOS       =  2UL,             // been attempted (not supported by OCM). This is
                                                     // a sticky bit. Once set it can only be cleared by
                                                     // explicitly writing a 1 to this field. This field drives
                                                     // the interrupt pin. (Associated irq enable bit must
                                                     // be set)

                                                     // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
    OCM_MULTIPLE_PARITY_ERR_MASK =  0x00000002UL,    // Status of OCM multiple parity error. This is a
    OCM_MULTIPLE_PARITY_ERR_BPOS =  1UL,             // sticky bit. Once set it can only be cleared by
                                                     // explicitly writing a 1 to this field. This field drives
                                                     // the interrupt pin. (Associated irq enable bit must
                                                     // be set)
                                                     // 0: Multiple OCM parity Errors have not occurred
                                                     // 1: Multiple OCM parity Errors have occurred

                                                     // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
    OCM_SINGLE_PARITY_ERR_MASK   =  0x00000001UL,    // Status of OCM single parity error. This is a sticky
    OCM_SINGLE_PARITY_ERR_BPOS   =  0UL              // bit. Once set it can only be cleared by explicitly
                                                     // writing a 1 to this field. This field drives the
                                                     // interrupt pin (Associated irq enable bit must be
                                                     // set)
                                                     // 0: Single OCM parity Error has not occurred
                                                     // 1: Single OCM parity Error has occurred

};

//------------------------------------------------------------------------------
//
// Register (OCM) OCM_CTRL
//
// Name                    OCM_CTRL_REG
// Relative Address        0x0000000C
// Absolute Address        0xF800C00C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Control fields for OCM
//
// Register OCM_CTRL_REG Details
//
enum TOCM_CTRL_REG
{
// RESERVED                                                     Properties: Bits: 31:3, Type: ro, Reset Value: 0x0

                                                             // Properties: Bit: 2, Type: rw, Reset Value: 0x0
    OCM_ARB_SHARE_TOP_SW_SCU_WR_DIS_MASK =  0x00000004UL,    // Controls the arbitration to memory between the
    OCM_ARB_SHARE_TOP_SW_SCU_WR_DIS_BPOS =  2UL,             // topswitch port and the scuwr port.
                                                             // 0: The topsw and the scuWr porst share the
                                                             // memory bandwith - 50% each.
                                                             // 1: The scuWr takes higher priority over the
                                                             // topswitch port (unless the ScuWrPriorityLo bit is
                                                             // set)

// RESERVED                                                     Properties: Bit: 1, Type: rw, Reset Value: 0x0

                                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    OCM_SCU_WR_PRIORITY_LO_MASK          =  0x00000001UL,    // When set (1), changes the priority of the SCU
    OCM_SCU_WR_PRIORITY_LO_BPOS          =  0UL              // write port to LOW from Medium

};

#endif // PS7_OCM_H

