//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_ETB
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

#ifndef PS7_ETB_H
#define PS7_ETB_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    ETB MMRs
//
//              Name                  Address                        Width   Type     Reset Value   Description
const uintptr_t ETB_RDP_REG         = DEBUG_ETB_ADDR + 0x00000004; //  32    ro       0x00000400    RAM Depth Register
const uintptr_t ETB_STS_REG         = DEBUG_ETB_ADDR + 0x0000000C; //   4    ro       0x00000000    Status Register
const uintptr_t ETB_RRD_REG         = DEBUG_ETB_ADDR + 0x00000010; //  32    ro       0x00000000    RAM Read Data Register
const uintptr_t ETB_RRP_REG         = DEBUG_ETB_ADDR + 0x00000014; //  10    rw       0x00000000    RAM Read Pointer Register
const uintptr_t ETB_RWP_REG         = DEBUG_ETB_ADDR + 0x00000018; //  10    rw       0x00000000    RAM Write Pointer Register
const uintptr_t ETB_TRG_REG         = DEBUG_ETB_ADDR + 0x0000001C; //  10    rw       0x00000000    Trigger Counter Register
const uintptr_t ETB_CTL_REG         = DEBUG_ETB_ADDR + 0x00000020; //   1    rw       0x00000000    Control Register
const uintptr_t ETB_RWD_REG         = DEBUG_ETB_ADDR + 0x00000024; //  32    rw       0x00000000    RAM Write Data Register
const uintptr_t ETB_FFSR_REG        = DEBUG_ETB_ADDR + 0x00000300; //   2    ro       0x00000002    Formatter and Flush Status Register
const uintptr_t ETB_FFCR_REG        = DEBUG_ETB_ADDR + 0x00000304; //  14    mixed    0x00000200    Formatter and Flush Control Register
const uintptr_t ETB_ITMISCOP0_REG   = DEBUG_ETB_ADDR + 0x00000EE0; //   2    wo       0x00000000    Integration Test Miscellaneous Output Register 0
const uintptr_t ETB_ITTRFLINACK_REG = DEBUG_ETB_ADDR + 0x00000EE4; //   2    wo       0x00000000    Integration Test Trigger In and Flush In Acknowledge Register
const uintptr_t ETB_ITTRFLIN_REG    = DEBUG_ETB_ADDR + 0x00000EE8; //   2    wo       0x00000000    Integration Test Trigger In and Flush In Register
const uintptr_t ETB_ITATBDATA0_REG  = DEBUG_ETB_ADDR + 0x00000EEC; //   5    ro       0x00000000    Integration Test ATB Data Register
const uintptr_t ETB_ITATBCTR2_REG   = DEBUG_ETB_ADDR + 0x00000EF0; //   2    wo       0x00000000    Integration Test ATB Control Register 2
const uintptr_t ETB_ITATBCTR1_REG   = DEBUG_ETB_ADDR + 0x00000EF4; //   7    ro       0x00000000    Integration Test ATB Control Register 1
const uintptr_t ETB_ITATBCTR0_REG   = DEBUG_ETB_ADDR + 0x00000EF8; //  10    ro       0x00000000    Integration Test ATB Control Register 0
const uintptr_t ETB_IMCR_REG        = DEBUG_ETB_ADDR + 0x00000F00; //   1    rw       0x00000000    Integration Mode Control Register
const uintptr_t ETB_CTSR_REG        = DEBUG_ETB_ADDR + 0x00000FA0; //   4    rw       0x0000000F    Claim Tag Set Register
const uintptr_t ETB_CTCR_REG        = DEBUG_ETB_ADDR + 0x00000FA4; //   4    rw       0x00000000    Claim Tag Clear Register
const uintptr_t ETB_LAR_REG         = DEBUG_ETB_ADDR + 0x00000FB0; //  32    wo       0x00000000    Lock Access Register
const uintptr_t ETB_LSR_REG         = DEBUG_ETB_ADDR + 0x00000FB4; //   3    ro       0x00000003    Lock Status Register
const uintptr_t ETB_ASR_REG         = DEBUG_ETB_ADDR + 0x00000FB8; //   8    ro       0x00000000    Authentication Status Register
const uintptr_t ETB_DEVID_REG       = DEBUG_ETB_ADDR + 0x00000FC8; //   6    ro       0x00000000    Device ID
const uintptr_t ETB_DTIR_REG        = DEBUG_ETB_ADDR + 0x00000FCC; //   8    ro       0x00000021    Device Type Identifier Register
const uintptr_t ETB_PERIPHID4_REG   = DEBUG_ETB_ADDR + 0x00000FD0; //   8    ro       0x00000004    Peripheral ID4
const uintptr_t ETB_PERIPHID5_REG   = DEBUG_ETB_ADDR + 0x00000FD4; //   8    ro       0x00000000    Peripheral ID5
const uintptr_t ETB_PERIPHID6_REG   = DEBUG_ETB_ADDR + 0x00000FD8; //   8    ro       0x00000000    Peripheral ID6
const uintptr_t ETB_PERIPHID7_REG   = DEBUG_ETB_ADDR + 0x00000FDC; //   8    ro       0x00000000    Peripheral ID7
const uintptr_t ETB_PERIPHID0_REG   = DEBUG_ETB_ADDR + 0x00000FE0; //   8    ro       0x00000007    Peripheral ID0
const uintptr_t ETB_PERIPHID1_REG   = DEBUG_ETB_ADDR + 0x00000FE4; //   8    ro       0x000000B9    Peripheral ID1
const uintptr_t ETB_PERIPHID2_REG   = DEBUG_ETB_ADDR + 0x00000FE8; //   8    ro       0x0000003B    Peripheral ID2
const uintptr_t ETB_PERIPHID3_REG   = DEBUG_ETB_ADDR + 0x00000FEC; //   8    ro       0x00000000    Peripheral ID3
const uintptr_t ETB_COMPID0_REG     = DEBUG_ETB_ADDR + 0x00000FF0; //   8    ro       0x0000000D    Component ID0
const uintptr_t ETB_COMPID1_REG     = DEBUG_ETB_ADDR + 0x00000FF4; //   8    ro       0x00000090    Component ID1
const uintptr_t ETB_COMPID2_REG     = DEBUG_ETB_ADDR + 0x00000FF8; //   8    ro       0x00000005    Component ID2
const uintptr_t ETB_COMPID3_REG     = DEBUG_ETB_ADDR + 0x00000FFC; //   8    ro       0x000000B1    Component ID3
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (ETB) RDP
//
// Name                     ETB_RDP_REG
// Relative Address         0x00000004
// Absolute Address         0xF8801004
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000400
// Description              RAM Depth Register
//
// Register ETB_RDP_REG Details
//
                                                  // Properties: Bits: 31:0, Type: ro, Reset Value: 0x400
const uintptr_t ETB_RDP_VAL_MASK = 0xFFFFFFFF;    // Defines the depth, in words, of the trace RAM.
const uintptr_t ETB_RDP_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) STS
//
// Name                     ETB_STS_REG
// Relative Address         0x0000000C
// Absolute Address         0xF880100C
// Width                    4 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Status Register
//
// Register ETB_STS_REG Details
//
                                                        // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t ETB_STS_FT_EMPTY_MASK  = 0x00000008;    // Formatter pipeline empty. All data stored to
const uintptr_t ETB_STS_FT_EMPTY_BPOS  = 3;             // RAM.

                                                        // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t ETB_STS_ACQ_COMP_MASK  = 0x00000004;    // Acquisition complete.
const uintptr_t ETB_STS_ACQ_COMP_BPOS  = 2;             // The acquisition complete flag indicates that
                                                        // capture has been completed when the formatter
                                                        // stops because of any of the methods defined in the
                                                        // Formatter and Flush Control Register, or
                                                        // TraceCaptEn = 0. This also results in FtStopped in
                                                        // the Formatter and Flush Status Register going
                                                        // HIGH.

                                                        // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t ETB_STS_TRIGGERED_MASK = 0x00000002;    // The Triggered bit is set when a trigger has been
const uintptr_t ETB_STS_TRIGGERED_BPOS = 1;             // observed. This does not indicate that a trigger has
                                                        // been embedded in the trace data by the formatter,
                                                        // but is determined by the programming of the
                                                        // Formatter and Flush Control Register.

                                                        // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_STS_FULL_MASK      = 0x00000001;    // RAM Full.
const uintptr_t ETB_STS_FULL_BPOS      = 0;             // The flag indicates when the RAM write pointer
                                                        // has wrapped around.


//------------------------------------------------------------------------------
//
// Register (ETB) RRD
//
// Name                     ETB_RRD_REG
// Relative Address         0x00000010
// Absolute Address         0xF8801010
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              RAM Read Data Register
//
// Register ETB_RRD_REG Details
//
                                                  // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_RRD_VAL_MASK = 0xFFFFFFFF;    // Data read from the ETB Trace RAM.
const uintptr_t ETB_RRD_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) RRP
//
// Name                    ETB_RRP_REG
// Relative Address        0x00000014
// Absolute Address        0xF8801014
// Width                   10 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             RAM Read Pointer Register
//
// Register ETB_RRP_REG Details
//
                                                  // Properties: Bits: 9:0, Type: rw, Reset Value: 0x0
const uintptr_t ETB_RRP_VAL_MASK = 0x000003FF;    // Sets the read pointer used to read entries from the
const uintptr_t ETB_RRP_VAL_BPOS = 0;             // Trace RAM over the APB interface.


//------------------------------------------------------------------------------
//
// Register (ETB) RWP
//
// Name                    ETB_RWP_REG
// Relative Address        0x00000018
// Absolute Address        0xF8801018
// Width                   10 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             RAM Write Pointer Register
//
// Register ETB_RWP_REG Details
//
                                                  // Properties: Bits: 9:0, Type: rw, Reset Value: 0x0
const uintptr_t ETB_RWP_VAL_MASK = 0x000003FF;    // Sets the write pointer used to write entries from
const uintptr_t ETB_RWP_VAL_BPOS = 0;             // the CoreSight bus into the Trace RAM


//------------------------------------------------------------------------------
//
// Register (ETB) TRG
//
// Name                    ETB_TRG_REG
// Relative Address        0x0000001C
// Absolute Address        0xF880101C
// Width                   10 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Trigger Counter Register
//
// Register ETB_TRG_REG Details
//
                                                  // Properties: Bits: 9:0, Type: rw, Reset Value: 0x0
const uintptr_t ETB_TRG_VAL_MASK = 0x000003FF;    // The counter is used as follows:
const uintptr_t ETB_TRG_VAL_BPOS = 0;             // - Trace after
                                                  // The counter is set to a large value, slightly less
                                                  // than the number of entries in the RAM.
                                                  // - Trace before
                                                  // The counter is set to a small value.
                                                  // - Trace about
                                                  // The counter is set to half the depth of the Trace
                                                  // RAM.
                                                  // This register must not be written to when trace
                                                  // capture is enabled (FtStopped=0,
                                                  // TraceCaptEn=1). If a write is attempted, the
                                                  // register is not updated. A read access is permitted
                                                  // with trace capture enabled.


//------------------------------------------------------------------------------
//
// Register (ETB) CTL
//
// Name                    ETB_CTL_REG
// Relative Address        0x00000020
// Absolute Address        0xF8801020
// Width                   1 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Control Register
//
// Register ETB_CTL_REG Details
//
                                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t ETB_CTL_TRACE_CAPT_EN_MASK = 0x00000001;    // ETB Trace Capture Enable.
const uintptr_t ETB_CTL_TRACE_CAPT_EN_BPOS = 0;             // 1 = enable trace capture
                                                            // 0 = disable trace capture.
                                                            // This is the master enable bit forcing FtStopped
                                                            // HIGH when TraceCaptEn is LOW.
                                                            // When capture is disabled, any remaining data in
                                                            // the ATB formatter is stored to RAM.
                                                            // When all data is stored the formatter outputs
                                                            // FtStopped. Capture is fully disabled, or complete,
                                                            // when FtStopped goes HIGH.


//------------------------------------------------------------------------------
//
// Register (ETB) RWD
//
// Name                    ETB_RWD_REG
// Relative Address        0x00000024
// Absolute Address        0xF8801024
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             RAM Write Data Register
//
// Register ETB_RWD_REG Details
//
                                                  // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ETB_RWD_VAL_MASK = 0xFFFFFFFF;    // Data written to the ETB Trace RAM.
const uintptr_t ETB_RWD_VAL_BPOS = 0;             // When trace capture is disabled, the contents of
                                                  // this register are placed into the ETB Trace RAM
                                                  // when this register is written to.
                                                  // Writing to this register increments the RAM Write
                                                  // Pointer Register.
                                                  // If trace capture is enabled, and this register is
                                                  // accessed, then a read from this register outputs
                                                  // 0xFFFFFFFF. Reads of this register never
                                                  // increment the RAM Write Pointer Register. A
                                                  // constant stream of 1s being output corresponds to
                                                  // a synchronization output from the ETB. If a write
                                                  // access is attempted, the data is not written into
                                                  // Trace RAM.


//------------------------------------------------------------------------------
//
// Register (ETB) FFSR
//
// Name                    ETB_FFSR_REG
// Relative Address        0x00000300
// Absolute Address        0xF8801300
// Width                   2 bits
// Access Type             ro
// Reset Value             0x00000002
// Description             Formatter and Flush Status Register
//
// Register ETB_FFSR_REG Details
//
                                                          // Properties: Bit: 1, Type: ro, Reset Value: 0x1
const uintptr_t ETB_FFSR_FT_STOPPED_MASK = 0x00000002;    // Formatter stopped. The formatter has received a
const uintptr_t ETB_FFSR_FT_STOPPED_BPOS = 1;             // stop request signal and all trace data and
                                                          // post-amble has been output. Any more trace data
                                                          // on the ATB interface is ignored and ATREADYS
                                                          // goes HIGH.

                                                          // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_FFSR_FL_IN_PROG_MASK = 0x00000001;    // Flush In Progress. This is an indication of the
const uintptr_t ETB_FFSR_FL_IN_PROG_BPOS = 0;             // current state of AFVALIDS.


//------------------------------------------------------------------------------
//
// Register (ETB) FFCR
//
// Name                    ETB_FFCR_REG
// Relative Address        0x00000304
// Absolute Address        0xF8801304
// Width                   14 bits
// Access Type             mixed
// Reset Value             0x00000200
// Description             Formatter and Flush Control Register
//
// Register ETB_FFCR_REG Details
//
                                                         // Properties: Bit: 13, Type: rw, Reset Value: 0x0
const uintptr_t ETB_FFCR_STOP_TRIG_MASK = 0x00002000;    // Stop the formatter when a Trigger Event has been
const uintptr_t ETB_FFCR_STOP_TRIG_BPOS = 13;            // observed.

                                                         // Properties: Bit: 12, Type: rw, Reset Value: 0x0
const uintptr_t ETB_FFCR_STOP_FL_MASK   = 0x00001000;    // Stop the formatter when a flush has completed
const uintptr_t ETB_FFCR_STOP_FL_BPOS   = 12;            // (return of AFREADYS). This forces the FIFO to
                                                         // drain off any part-completed packets. Setting this
                                                         // bit enables this function but this is clear on reset
                                                         // (disabled).

// RESERVED                                                 Properties: Bit: 11, Type: ro, Reset Value: 0x0

                                                         // Properties: Bit: 10, Type: rw, Reset Value: 0x0
const uintptr_t ETB_FFCR_TRIG_FL_MASK   = 0x00000400;    // Indicate a trigger on Flush completion
const uintptr_t ETB_FFCR_TRIG_FL_BPOS   = 10;            // (AFREADYS being returned).

                                                         // Properties: Bit: 9, Type: rw, Reset Value: 0x1
const uintptr_t ETB_FFCR_TRIG_EVT_MASK  = 0x00000200;    // Indicate a trigger on a Trigger Event.
const uintptr_t ETB_FFCR_TRIG_EVT_BPOS  = 9;             // 

                                                         // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t ETB_FFCR_TRIG_IN_MASK   = 0x00000100;    // Indicate a trigger on TRIGIN being asserted.
const uintptr_t ETB_FFCR_TRIG_IN_BPOS   = 8;             // 

// RESERVED                                                 Properties: Bit: 7, Type: ro, Reset Value: 0x0

                                                         // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t ETB_FFCR_FON_MAN_MASK   = 0x00000040;    // Manually generate a flush of the system. Setting
const uintptr_t ETB_FFCR_FON_MAN_BPOS   = 6;             // this bit causes a flush to be generated. This is
                                                         // cleared when the flush has been serviced. This bit
                                                         // is clear on reset.

                                                         // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t ETB_FFCR_FON_TRIG_MASK  = 0x00000020;    // Generate flush using Trigger event. Set this bit to
const uintptr_t ETB_FFCR_FON_TRIG_BPOS  = 5;             // cause a flush of data in the system when a Trigger
                                                         // Event occurs. This bit is clear on reset.

                                                         // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t ETB_FFCR_FON_FL_IN_MASK = 0x00000010;    // Generate flush using the FLUSHIN interface. Set
const uintptr_t ETB_FFCR_FON_FL_IN_BPOS = 4;             // this bit to enable use of the FLUSHIN connection.
                                                         // This bit is clear on reset.

// RESERVED                                                 Properties: Bits: 3:2, Type: ro, Reset Value: 0x0

                                                         // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t ETB_FFCR_EN_FCONT_MASK  = 0x00000002;    // Continuous Formatting. Continuous mode in the
const uintptr_t ETB_FFCR_EN_FCONT_BPOS  = 1;             // ETB corresponds to normal mode with the
                                                         // embedding of triggers. Can only be changed
                                                         // when FtStopped is HIGH. This bit is clear on
                                                         // reset.

                                                         // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t ETB_FFCR_EN_FTC_MASK    = 0x00000001;    // Enable Formatting. Do not embed Triggers into
const uintptr_t ETB_FFCR_EN_FTC_BPOS    = 0;             // the formatted stream. Trace disable cycles and
                                                         // triggers are indicated by TRACECTL, where
                                                         // fitted. Can only be changed when FtStopped is
                                                         // HIGH. This bit is clear on reset.


//------------------------------------------------------------------------------
//
// Register (ETB) ITMISCOP0
//
// Name                    ETB_ITMISCOP0_REG
// Relative Address        0x00000EE0
// Absolute Address        0xF8801EE0
// Width                    2 bits
// Access Type              wo
// Reset Value             0x00000000
// Description              Integration Test Miscellaneous Output Register 0
//
// Register ETB_ITMISCOP0_REG Details
//
                                                            // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t ETB_ITMISCOP0_FULL_MASK    = 0x00000002;    // Set the value of FULL
const uintptr_t ETB_ITMISCOP0_FULL_BPOS    = 1;             // 

                                                            // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t ETB_ITMISCOP0_ACQCOMP_MASK = 0x00000001;    // Set the value of ACQCOMP
const uintptr_t ETB_ITMISCOP0_ACQCOMP_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) ITTRFLINACK
//
// Name                    ETB_ITTRFLINACK_REG
// Relative Address        0x00000EE4
// Absolute Address        0xF8801EE4
// Width                   2 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Integration Test Trigger In and Flush In Acknowledge Register
//
// Register ETB_ITTRFLINACK_REG Details
//
                                                                 // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t ETB_ITTRFLINACK_FLUSHINACK_MASK = 0x00000002;    // Set the value of FLUSHINACK
const uintptr_t ETB_ITTRFLINACK_FLUSHINACK_BPOS = 1;             // 

                                                                 // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t ETB_ITTRFLINACK_TRIGINACK_MASK  = 0x00000001;    // Set the value of TRIGINACK
const uintptr_t ETB_ITTRFLINACK_TRIGINACK_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) ITTRFLIN
//
// Name                    ETB_ITTRFLIN_REG
// Relative Address        0x00000EE8
// Absolute Address        0xF8801EE8
// Width                   2 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Integration Test Trigger In and Flush In Register
//
// Register ETB_ITTRFLIN_REG Details
//
                                                           // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t ETB_ITTRFLIN_FLUSHIN_MASK = 0x00000002;    // Read the value of FLUSHIN
const uintptr_t ETB_ITTRFLIN_FLUSHIN_BPOS = 1;             // 

                                                           // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t ETB_ITTRFLIN_TRIGIN_MASK  = 0x00000001;    // Read the value of TRIGIN
const uintptr_t ETB_ITTRFLIN_TRIGIN_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) ITATBDATA0
//
// Name                    ETB_ITATBDATA0_REG
// Relative Address        0x00000EEC
// Absolute Address        0xF8801EEC
// Width                   5 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Integration Test ATB Data Register
//
// Register ETB_ITATBDATA0_REG Details
//
                                                              // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t ETB_ITATBDATA0_ATDATA31_MASK = 0x00000010;    // Read the value of ATDATA[31]
const uintptr_t ETB_ITATBDATA0_ATDATA31_BPOS = 4;             // 

                                                              // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t ETB_ITATBDATA0_ATDATA23_MASK = 0x00000008;    // Read the value of ATDATA[23]
const uintptr_t ETB_ITATBDATA0_ATDATA23_BPOS = 3;             // 

                                                              // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t ETB_ITATBDATA0_ATDATA15_MASK = 0x00000004;    // Read the value of ATDATA[15]
const uintptr_t ETB_ITATBDATA0_ATDATA15_BPOS = 2;             // 

                                                              // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t ETB_ITATBDATA0_ATDATA7_MASK  = 0x00000002;    // Read the value of ATDATA[7]
const uintptr_t ETB_ITATBDATA0_ATDATA7_BPOS  = 1;             // 

                                                              // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_ITATBDATA0_ATDATA0_MASK  = 0x00000001;    // Read the value of ATDATA[0]
const uintptr_t ETB_ITATBDATA0_ATDATA0_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) ITATBCTR2
//
// Name                    ETB_ITATBCTR2_REG
// Relative Address        0x00000EF0
// Absolute Address        0xF8801EF0
// Width                   2 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Integration Test ATB Control Register 2
//
// Register ETB_ITATBCTR2_REG Details
//
                                                             // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t ETB_ITATBCTR2_AFVALIDS_MASK = 0x00000002;    // Set the value of AFVALIDS
const uintptr_t ETB_ITATBCTR2_AFVALIDS_BPOS = 1;             // 

                                                             // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t ETB_ITATBCTR2_ATREADYS_MASK = 0x00000001;    // Set the value of ATREADYS
const uintptr_t ETB_ITATBCTR2_ATREADYS_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) ITATBCTR1
//
// Name                    ETB_ITATBCTR1_REG
// Relative Address        0x00000EF4
// Absolute Address        0xF8801EF4
// Width                   7 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Integration Test ATB Control Register 1
//
// Register ETB_ITATBCTR1_REG Details
//
                                                         // Properties: Bits: 6:0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_ITATBCTR1_ATID_MASK = 0x0000007F;    // Read the value of ATIDS
const uintptr_t ETB_ITATBCTR1_ATID_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) ITATBCTR0
//
// Name                     ETB_ITATBCTR0_REG
// Relative Address         0x00000EF8
// Absolute Address         0xF8801EF8
// Width                    10 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Integration Test ATB Control Register 0
//
// Register ETB_ITATBCTR0_REG Details
//
                                                            // Properties: Bits: 9:8, Type: ro, Reset Value: 0x0
const uintptr_t ETB_ITATBCTR0_ATBYTES_MASK = 0x00000300;    // Read the value of ATBYTES
const uintptr_t ETB_ITATBCTR0_ATBYTES_BPOS = 8;             // 

// RESERVED                                                    Properties: Bits: 7:2, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t ETB_ITATBCTR0_AFREADY_MASK = 0x00000002;    // Read the value of AFREADYS
const uintptr_t ETB_ITATBCTR0_AFREADY_BPOS = 1;             // 

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_ITATBCTR0_ATVALID_MASK = 0x00000001;    // Read the value of ATVALIDS
const uintptr_t ETB_ITATBCTR0_ATVALID_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) IMCR
//
// Name                     ETB_IMCR_REG
// Relative Address         0x00000F00
// Absolute Address         0xF8801F00
// Width                    1 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Integration Mode Control Register
//
// Register ETB_IMCR_REG Details
//
                                                   // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t ETB_IMCR_VAL_MASK = 0x00000001;    // Enable Integration Test registers.
const uintptr_t ETB_IMCR_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) CTSR
//
// Name                    ETB_CTSR_REG
// Relative Address        0x00000FA0
// Absolute Address        0xF8801FA0
// Width                   4 bits
// Access Type             rw
// Reset Value             0x0000000F
// Description             Claim Tag Set Register
//
// Register ETB_CTSR_REG Details
//
                                                   // Properties: Bits: 3:0, Type: rw, Reset Value: 0xF
const uintptr_t ETB_CTSR_VAL_MASK = 0x0000000F;    // The claim tag register is used for any
const uintptr_t ETB_CTSR_VAL_BPOS = 0;             // interrogating tools to determine if the device is
                                                   // being programmed or has been programmed.
                                                   // Read:
                                                   // 1= Claim tag is implemented, 0 = Claim tag is not
                                                   // implemented
                                                   // Write:
                                                   // 1= Set claim tag bit, 0= No effect


//------------------------------------------------------------------------------
//
// Register (ETB) CTCR
//
// Name                    ETB_CTCR_REG
// Relative Address        0x00000FA4
// Absolute Address        0xF8801FA4
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Claim Tag Clear Register
//
// Register ETB_CTCR_REG Details
//
                                                   // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
const uintptr_t ETB_CTCR_VAL_MASK = 0x0000000F;    // The claim tag register is used for any
const uintptr_t ETB_CTCR_VAL_BPOS = 0;             // interrogating tools to determine if the device is
                                                   // being programmed or has been programmed.
                                                   // Read: Current value of claim tag.
                                                   // Write: 1= Clear claim tag bit, 0= No effect


//------------------------------------------------------------------------------
//
// Register (ETB) LAR
//
// Name                    ETB_LAR_REG
// Relative Address        0x00000FB0
// Absolute Address        0xF8801FB0
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Lock Access Register
//
// Register ETB_LAR_REG Details
//
                                                  // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
const uintptr_t ETB_LAR_VAL_MASK = 0xFFFFFFFF;    // Write Access Code.
const uintptr_t ETB_LAR_VAL_BPOS = 0;             // Write behavior depends on PADDRDBG31 pin:
                                                  // - PADDRDBG31=0 (lower 2GB):
                                                  // After reset (via PRESETDBGn), ETB is locked, i.e.,
                                                  // writes to all other registers using lower 2GB
                                                  // addresses are ignored.
                                                  // To unlock, 0xC5ACCE55 must be written this
                                                  // register.
                                                  // After the required registers are written, to lock
                                                  // again, write a value other than 0xC5ACCE55 to
                                                  // this register.
                                                  // - PADDRDBG31=1 (upper 2GB):
                                                  // ETB is unlocked when upper 2GB addresses are
                                                  // used to write to all the registers.
                                                  // However, write to this register is ignored using a
                                                  // upper 2GB address!
                                                  // Note: read from this register always returns 0,
                                                  // regardless of PADDRDBG31.


//------------------------------------------------------------------------------
//
// Register (ETB) LSR
//
// Name                    ETB_LSR_REG
// Relative Address        0x00000FB4
// Absolute Address        0xF8801FB4
// Width                   3 bits
// Access Type             ro
// Reset Value             0x00000003
// Description             Lock Status Register
//
// Register ETB_LSR_REG Details
//
                                                     // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t ETB_LSR_8BIT_MASK   = 0x00000004;    // Set to 0 since ETB implements a 32-bit lock access
const uintptr_t ETB_LSR_8BIT_BPOS   = 2;             // register

                                                     // Properties: Bit: 1, Type: ro, Reset Value: 0x1
const uintptr_t ETB_LSR_STATUS_MASK = 0x00000002;    // Read behavior depends on PADDRDBG31 pin:
const uintptr_t ETB_LSR_STATUS_BPOS = 1;             // - PADDRDBG31=0 (lower 2GB):
                                                     // When a lower 2GB address is used to read this
                                                     // register, this bit indicates whether ETB is in locked
                                                     // state
                                                     // (1= locked, 0= unlocked).
                                                     // - PADDRDBG31=1 (upper 2GB):
                                                     // always returns 0.

                                                     // Properties: Bit: 0, Type: ro, Reset Value: 0x1
const uintptr_t ETB_LSR_IMP_MASK    = 0x00000001;    // Read behavior depends on PADDRDBG31 pin:
const uintptr_t ETB_LSR_IMP_BPOS    = 0;             // - PADDRDBG31=0 (lower 2GB):
                                                     // always returns 1, meaning lock mechanism are
                                                     // implemented.
                                                     // - PADDRDBG31=1 (upper 2GB):
                                                     // always returns 0, meaning lock mechanism is
                                                     // NOT implemented.


//------------------------------------------------------------------------------
//
// Register (ETB) ASR
//
// Name                     ETB_ASR_REG
// Relative Address         0x00000FB8
// Absolute Address         0xF8801FB8
// Width                    8 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Authentication Status Register
//
// Register ETB_ASR_REG Details
//
                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_ASR_VAL_MASK = 0x000000FF;    // Indicates functionality not implemented
const uintptr_t ETB_ASR_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) DEVID
//
// Name                     ETB_DEVID_REG
// Relative Address         0x00000FC8
// Absolute Address         0xF8801FC8
// Width                    6 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Device ID
//
// Register ETB_DEVID_REG Details
//
                                                           // Properties: Bit: 5, Type: ro, Reset Value: 0x0
const uintptr_t ETB_DEVID_SYNC_ATCLK_MASK = 0x00000020;    // ETB RAM is synchronous to ATCLK
const uintptr_t ETB_DEVID_SYNC_ATCLK_BPOS = 5;             // 

                                                           // Properties: Bits: 4:0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_DEVID_INPUT_MUX_MASK  = 0x0000001F;    // no input multiplexing
const uintptr_t ETB_DEVID_INPUT_MUX_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) DTIR
//
// Name                    ETB_DTIR_REG
// Relative Address        0x00000FCC
// Absolute Address        0xF8801FCC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000021
// Description             Device Type Identifier Register
//
// Register ETB_DTIR_REG Details
//
                                                   // Properties: Bits: 7:0, Type: ro, Reset Value: 0x21
const uintptr_t ETB_DTIR_VAL_MASK = 0x000000FF;    // A trace sink and specifically an ETB
const uintptr_t ETB_DTIR_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) PERIPHID4
//
// Name                    ETB_PERIPHID4_REG
// Relative Address        0x00000FD0
// Absolute Address        0xF8801FD0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000004
// Description             Peripheral ID4
//
// Register ETB_PERIPHID4_REG Details
//
                                                              // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
const uintptr_t ETB_PERIPHID4_4KB_COUNT_MASK = 0x000000F0;    // 4KB Count, set to 0
const uintptr_t ETB_PERIPHID4_4KB_COUNT_BPOS = 4;             // 

                                                              // Properties: Bits: 3:0, Type: ro, Reset Value: 0x4
const uintptr_t ETB_PERIPHID4_JEP106ID_MASK  = 0x0000000F;    // JEP106 continuation code
const uintptr_t ETB_PERIPHID4_JEP106ID_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) PERIPHID5
//
// Name                    ETB_PERIPHID5_REG
// Relative Address        0x00000FD4
// Absolute Address        0xF8801FD4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID5
//
// Register ETB_PERIPHID5_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_PERIPHID5_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t ETB_PERIPHID5_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) PERIPHID6
//
// Name                    ETB_PERIPHID6_REG
// Relative Address        0x00000FD8
// Absolute Address        0xF8801FD8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID6
//
// Register ETB_PERIPHID6_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_PERIPHID6_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t ETB_PERIPHID6_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) PERIPHID7
//
// Name                    ETB_PERIPHID7_REG
// Relative Address        0x00000FDC
// Absolute Address        0xF8801FDC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID7
//
// Register ETB_PERIPHID7_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_PERIPHID7_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t ETB_PERIPHID7_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) PERIPHID0
//
// Name                    ETB_PERIPHID0_REG
// Relative Address        0x00000FE0
// Absolute Address        0xF8801FE0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000007
// Description             Peripheral ID0
//
// Register ETB_PERIPHID0_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x7
const uintptr_t ETB_PERIPHID0_VAL_MASK = 0x000000FF;    // PartNumber0
const uintptr_t ETB_PERIPHID0_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) PERIPHID1
//
// Name                    ETB_PERIPHID1_REG
// Relative Address        0x00000FE4
// Absolute Address        0xF8801FE4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B9
// Description             Peripheral ID1
//
// Register ETB_PERIPHID1_REG Details
//
                                                                 // Properties: Bits: 7:4, Type: ro, Reset Value: 0xB
const uintptr_t ETB_PERIPHID1_JEP106ID_MASK     = 0x000000F0;    // JEP106 Identity Code [3:0]
const uintptr_t ETB_PERIPHID1_JEP106ID_BPOS     = 4;             // 

                                                                 // Properties: Bits: 3:0, Type: ro, Reset Value: 0x9
const uintptr_t ETB_PERIPHID1_PART_NUMBER1_MASK = 0x0000000F;    // PartNumber1
const uintptr_t ETB_PERIPHID1_PART_NUMBER1_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) PERIPHID2
//
// Name                    ETB_PERIPHID2_REG
// Relative Address        0x00000FE8
// Absolute Address        0xF8801FE8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000003B
// Description             Peripheral ID2
//
// Register ETB_PERIPHID2_REG Details
//
                                                             // Properties: Bits: 7:4, Type: ro, Reset Value: 0x3
const uintptr_t ETB_PERIPHID2_REV_NUM_MASK  = 0x000000F0;    // Revision number of Peripheral
const uintptr_t ETB_PERIPHID2_REV_NUM_BPOS  = 4;             // 

                                                             // Properties: Bit: 3, Type: ro, Reset Value: 0x1
const uintptr_t ETB_PERIPHID2_JEDEC_MASK    = 0x00000008;    // Indicates that a JEDEC assigned value is used
const uintptr_t ETB_PERIPHID2_JEDEC_BPOS    = 3;             // 

                                                             // Properties: Bits: 2:0, Type: ro, Reset Value: 0x3
const uintptr_t ETB_PERIPHID2_JEP106ID_MASK = 0x00000007;    // JEP106 Identity Code [6:4]
const uintptr_t ETB_PERIPHID2_JEP106ID_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) PERIPHID3
//
// Name                    ETB_PERIPHID3_REG
// Relative Address        0x00000FEC
// Absolute Address        0xF8801FEC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID3
//
// Register ETB_PERIPHID3_REG Details
//
                                                             // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
const uintptr_t ETB_PERIPHID3_REV_AND_MASK  = 0x000000F0;    // RevAnd, at top level
const uintptr_t ETB_PERIPHID3_REV_AND_BPOS  = 4;             // 

                                                             // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
const uintptr_t ETB_PERIPHID3_CUST_MOD_MASK = 0x0000000F;    // Customer Modified
const uintptr_t ETB_PERIPHID3_CUST_MOD_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) COMPID0
//
// Name                    ETB_COMPID0_REG
// Relative Address        0x00000FF0
// Absolute Address        0xF8801FF0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000000D
// Description             Component ID0
//
// Register ETB_COMPID0_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0xD
const uintptr_t ETB_COMPID0_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t ETB_COMPID0_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) COMPID1
//
// Name                    ETB_COMPID1_REG
// Relative Address        0x00000FF4
// Absolute Address        0xF8801FF4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000090
// Description             Component ID1
//
// Register ETB_COMPID1_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0x90
const uintptr_t ETB_COMPID1_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t ETB_COMPID1_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) COMPID2
//
// Name                    ETB_COMPID2_REG
// Relative Address        0x00000FF8
// Absolute Address        0xF8801FF8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000005
// Description             Component ID2
//
// Register ETB_COMPID2_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0x5
const uintptr_t ETB_COMPID2_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t ETB_COMPID2_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ETB) COMPID3
//
// Name                    ETB_COMPID3_REG
// Relative Address        0x00000FFC
// Absolute Address        0xF8801FFC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B1
// Description             Component ID3
//
// Register ETB_COMPID3_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0xB1
const uintptr_t ETB_COMPID3_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t ETB_COMPID3_VAL_BPOS = 0;             // 


#endif // PS7_ETB_H

