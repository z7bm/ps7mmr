//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_TPIU
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

#ifndef PS7_TPIU_H
#define PS7_TPIU_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    TPIU MMRs
//
//              Name                       Address                         Width   Type     Reset Value   Description
const uintptr_t TPIU_SUPPSIZE_REG        = DEBUG_TPIU_ADDR + 0x00000000; //  32    rw       0xFFFFFFFF    Supported Port Size Register
const uintptr_t TPIU_CURRENTSIZE_REG     = DEBUG_TPIU_ADDR + 0x00000004; //  32    rw       0x00000001    Current Port Size Register
const uintptr_t TPIU_SUPPTRIGMODE_REG    = DEBUG_TPIU_ADDR + 0x00000100; //  18    ro       0x0000011F    Supported Trigger Modes Register
const uintptr_t TPIU_TRIGCOUNT_REG       = DEBUG_TPIU_ADDR + 0x00000104; //   8    rw       0x00000000    Trigger Counter Register
const uintptr_t TPIU_TRIGMULT_REG        = DEBUG_TPIU_ADDR + 0x00000108; //   5    rw       0x00000000    Trigger Multiplier Register
const uintptr_t TPIU_SUPPTEST_REG        = DEBUG_TPIU_ADDR + 0x00000200; //  18    ro       0x0003000F    Supported Test Patterns
const uintptr_t TPIU_CURRENTTEST_REG     = DEBUG_TPIU_ADDR + 0x00000204; //  18    mixed    0x00000000    Current Test Patterns
const uintptr_t TPIU_TESTREPEATCOUNT_REG = DEBUG_TPIU_ADDR + 0x00000208; //   8    rw       0x00000000    TPIU Test Pattern Repeat Counter Register
const uintptr_t TPIU_FFSR_REG            = DEBUG_TPIU_ADDR + 0x00000300; //   3    ro       0x00000006    Formatter and Flush Status Register
const uintptr_t TPIU_FFCR_REG            = DEBUG_TPIU_ADDR + 0x00000304; //  14    mixed    0x00000000    Formatter and Flush Control Register
const uintptr_t TPIU_FORMATSYNCCOUNT_REG = DEBUG_TPIU_ADDR + 0x00000308; //  12    rw       0x00000040    Formatter Synchronization Counter Register
const uintptr_t TPIU_EXTCTLIN_REG        = DEBUG_TPIU_ADDR + 0x00000400; //   8    ro       0x00000000    EXTCTL In Port
const uintptr_t TPIU_EXTCTLOUT_REG       = DEBUG_TPIU_ADDR + 0x00000404; //   8    rw       0x00000000    EXTCTL Out Port
const uintptr_t TPIU_ITTRFLINACK_REG     = DEBUG_TPIU_ADDR + 0x00000EE4; //   2    wo       0x00000000    Integration Test Trigger In and Flush In Acknowledge Register
const uintptr_t TPIU_ITTRFLIN_REG        = DEBUG_TPIU_ADDR + 0x00000EE8; //   2    ro       x             Integration Test Trigger In and Flush In Register
const uintptr_t TPIU_ITATBDATA0_REG      = DEBUG_TPIU_ADDR + 0x00000EEC; //   5    ro       x             Integration Test ATB Data Register 0
const uintptr_t TPIU_ITATBCTR2_REG       = DEBUG_TPIU_ADDR + 0x00000EF0; //   2    wo       0x00000000    Integration Test ATB Control Register 2
const uintptr_t TPIU_ITATBCTR1_REG       = DEBUG_TPIU_ADDR + 0x00000EF4; //   7    ro       x             Integration Test ATB Control Register 1
const uintptr_t TPIU_ITATBCTR0_REG       = DEBUG_TPIU_ADDR + 0x00000EF8; //  10    ro       x             Integration Test ATB Control Register 0
const uintptr_t TPIU_IMCR_REG            = DEBUG_TPIU_ADDR + 0x00000F00; //   1    rw       0x00000000    Integration Mode Control Register
const uintptr_t TPIU_CTSR_REG            = DEBUG_TPIU_ADDR + 0x00000FA0; //   4    rw       0x0000000F    Claim Tag Set Register
const uintptr_t TPIU_CTCR_REG            = DEBUG_TPIU_ADDR + 0x00000FA4; //   4    rw       0x00000000    Claim Tag Clear Register
const uintptr_t TPIU_LAR_REG             = DEBUG_TPIU_ADDR + 0x00000FB0; //  32    wo       0x00000000    Lock Access Register
const uintptr_t TPIU_LSR_REG             = DEBUG_TPIU_ADDR + 0x00000FB4; //   3    ro       0x00000003    Lock Status Register
const uintptr_t TPIU_ASR_REG             = DEBUG_TPIU_ADDR + 0x00000FB8; //   8    ro       0x00000000    Authentication Status Register
const uintptr_t TPIU_DEVID_REG           = DEBUG_TPIU_ADDR + 0x00000FC8; //  12    ro       0x000000A0    Device ID
const uintptr_t TPIU_DTIR_REG            = DEBUG_TPIU_ADDR + 0x00000FCC; //   8    ro       0x00000011    Device Type Identifier Register
const uintptr_t TPIU_PERIPHID4_REG       = DEBUG_TPIU_ADDR + 0x00000FD0; //   8    ro       0x00000004    Peripheral ID4
const uintptr_t TPIU_PERIPHID5_REG       = DEBUG_TPIU_ADDR + 0x00000FD4; //   8    ro       0x00000000    Peripheral ID5
const uintptr_t TPIU_PERIPHID6_REG       = DEBUG_TPIU_ADDR + 0x00000FD8; //   8    ro       0x00000000    Peripheral ID6
const uintptr_t TPIU_PERIPHID7_REG       = DEBUG_TPIU_ADDR + 0x00000FDC; //   8    ro       0x00000000    Peripheral ID7
const uintptr_t TPIU_PERIPHID0_REG       = DEBUG_TPIU_ADDR + 0x00000FE0; //   8    ro       0x00000012    Peripheral ID0
const uintptr_t TPIU_PERIPHID1_REG       = DEBUG_TPIU_ADDR + 0x00000FE4; //   8    ro       0x000000B9    Peripheral ID1
const uintptr_t TPIU_PERIPHID2_REG       = DEBUG_TPIU_ADDR + 0x00000FE8; //   8    ro       0x0000004B    Peripheral ID2
const uintptr_t TPIU_PERIPHID3_REG       = DEBUG_TPIU_ADDR + 0x00000FEC; //   8    ro       0x00000000    Peripheral ID3
const uintptr_t TPIU_COMPID0_REG         = DEBUG_TPIU_ADDR + 0x00000FF0; //   8    ro       0x0000000D    Component ID0
const uintptr_t TPIU_COMPID1_REG         = DEBUG_TPIU_ADDR + 0x00000FF4; //   8    ro       0x00000090    Component ID1
const uintptr_t TPIU_COMPID2_REG         = DEBUG_TPIU_ADDR + 0x00000FF8; //   8    ro       0x00000005    Component ID2
const uintptr_t TPIU_COMPID3_REG         = DEBUG_TPIU_ADDR + 0x00000FFC; //   8    ro       0x000000B1    Component ID3
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (TPIU) SUPPSIZE
//
// Name                    TPIU_SUPPSIZE_REG
// Relative Address        0x00000000
// Absolute Address        0xF8803000
// Width                   32 bits
// Access Type             rw
// Reset Value             0xFFFFFFFF
// Description             Supported Port Size Register
//
// Register TPIU_SUPPSIZE_REG Details
//
                                                        // Properties: Bits: 31:0, Type: rw, Reset Value: 0xFFFFFFFF
const uintptr_t TPIU_SUPPSIZE_VAL_MASK = 0xFFFFFFFF;    // Each bit location represents a single port size that
const uintptr_t TPIU_SUPPSIZE_VAL_BPOS = 0;             // is supported on the device, that is, 32-1 in bit
                                                        // locations [31:0].


//------------------------------------------------------------------------------
//
// Register (TPIU) CURRENTSIZE
//
// Name                    TPIU_CURRENTSIZE_REG
// Relative Address        0x00000004
// Absolute Address        0xF8803004
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000001
// Description             Current Port Size Register
//
// Register TPIU_CURRENTSIZE_REG Details
//
                                                           // Properties: Bits: 31:0, Type: rw, Reset Value: 0x1
const uintptr_t TPIU_CURRENTSIZE_VAL_MASK = 0xFFFFFFFF;    // The Current Port Size Register has the same
const uintptr_t TPIU_CURRENTSIZE_VAL_BPOS = 0;             // format as the Supported Port Sizes register but
                                                           // only one bit is set, and all others must be zero.
                                                           // Writing values with more than one bit set or
                                                           // setting a bit that is not indicated as supported is
                                                           // not supported and causes unpredictable behavior.


//------------------------------------------------------------------------------
//
// Register (TPIU) SUPPTRIGMODE
//
// Name                    TPIU_SUPPTRIGMODE_REG
// Relative Address        0x00000100
// Absolute Address        0xF8803100
// Width                   18 bits
// Access Type             ro
// Reset Value             0x0000011F
// Description             Supported Trigger Modes Register
//
// Register TPIU_SUPPTRIGMODE_REG Details
//
                                                                  // Properties: Bit: 17, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_SUPPTRIGMODE_TRG_RUN_MASK   = 0x00020000;    // Trigger Counter running. A trigger has occurred
const uintptr_t TPIU_SUPPTRIGMODE_TRG_RUN_BPOS   = 17;            // but the counter is not at zero.

                                                                  // Properties: Bit: 16, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_SUPPTRIGMODE_TRIGGERED_MASK = 0x00010000;    // A trigger has occurred and the counter has
const uintptr_t TPIU_SUPPTRIGMODE_TRIGGERED_BPOS = 16;            // reached zero.

// RESERVED                                                          Properties: Bits: 15:9, Type: ro, Reset Value: 0x0

                                                                  // Properties: Bit: 8, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTRIGMODE_TCOUNT8_MASK   = 0x00000100;    // 8-bit wide counter register implemented.
const uintptr_t TPIU_SUPPTRIGMODE_TCOUNT8_BPOS   = 8;             // 

// RESERVED                                                          Properties: Bits: 7:5, Type: ro, Reset Value: 0x0

                                                                  // Properties: Bit: 4, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTRIGMODE_MULT64K_MASK   = 0x00000010;    // Multiply the Trigger Counter by 65536 supported.
const uintptr_t TPIU_SUPPTRIGMODE_MULT64K_BPOS   = 4;             // 

                                                                  // Properties: Bit: 3, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTRIGMODE_MULT256_MASK   = 0x00000008;    // Multiply the Trigger Counter by 256 supported.
const uintptr_t TPIU_SUPPTRIGMODE_MULT256_BPOS   = 3;             // 

                                                                  // Properties: Bit: 2, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTRIGMODE_MULT16_MASK    = 0x00000004;    // Multiply the Trigger Counter by 16 supported.
const uintptr_t TPIU_SUPPTRIGMODE_MULT16_BPOS    = 2;             // 

                                                                  // Properties: Bit: 1, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTRIGMODE_MULT4_MASK     = 0x00000002;    // Multiply the Trigger Counter by 4 supported.
const uintptr_t TPIU_SUPPTRIGMODE_MULT4_BPOS     = 1;             // 

                                                                  // Properties: Bit: 0, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTRIGMODE_MULT2_MASK     = 0x00000001;    // Multiply the Trigger Counter by 2 supported.
const uintptr_t TPIU_SUPPTRIGMODE_MULT2_BPOS     = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) TRIGCOUNT
//
// Name                    TPIU_TRIGCOUNT_REG
// Relative Address        0x00000104
// Absolute Address        0xF8803104
// Width                   8 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Trigger Counter Register
//
// Register TPIU_TRIGCOUNT_REG Details
//
                                                                // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_TRIGCOUNT_TRIG_COUNT_MASK = 0x000000FF;    // 8-bit counter value for the number of words to be
const uintptr_t TPIU_TRIGCOUNT_TRIG_COUNT_BPOS = 0;             // output from the formatter before a trigger is
                                                                // inserted.


//------------------------------------------------------------------------------
//
// Register (TPIU) TRIGMULT
//
// Name                    TPIU_TRIGMULT_REG
// Relative Address        0x00000108
// Absolute Address        0xF8803108
// Width                   5 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               Trigger Multiplier Register
//
// Register TPIU_TRIGMULT_REG Details
//
                                                            // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_TRIGMULT_MULT64K_MASK = 0x00000010;    // Multiply the Trigger Counter by 65536.
const uintptr_t TPIU_TRIGMULT_MULT64K_BPOS = 4;             // 

                                                            // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_TRIGMULT_MULT256_MASK = 0x00000008;    // Multiply the Trigger Counter by 256.
const uintptr_t TPIU_TRIGMULT_MULT256_BPOS = 3;             // 

                                                            // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_TRIGMULT_MULT16_MASK  = 0x00000004;    // Multiply the Trigger Counter by 16.
const uintptr_t TPIU_TRIGMULT_MULT16_BPOS  = 2;             // 

                                                            // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_TRIGMULT_MULT4_MASK   = 0x00000002;    // Multiply the Trigger Counter by 4.
const uintptr_t TPIU_TRIGMULT_MULT4_BPOS   = 1;             // 

                                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_TRIGMULT_MULT2_MASK   = 0x00000001;    // Multiply the Trigger Counter by 2.
const uintptr_t TPIU_TRIGMULT_MULT2_BPOS   = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) SUPPTEST
//
// Name                      TPIU_SUPPTEST_REG
// Relative Address          0x00000200
// Absolute Address          0xF8803200
// Width                     18 bits
// Access Type               ro
// Reset Value               0x0003000F
// Description               Supported Test Patterns/Modes Register
//
// Register TPIU_SUPPTEST_REG Details
//
                                                             // Properties: Bit: 17, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTEST_PCONT_EN_MASK = 0x00020000;    // Continuous mode.
const uintptr_t TPIU_SUPPTEST_PCONT_EN_BPOS = 17;            // 

                                                             // Properties: Bit: 16, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTEST_PTIME_EN_MASK = 0x00010000;    // Timed mode.
const uintptr_t TPIU_SUPPTEST_PTIME_EN_BPOS = 16;            // 

// RESERVED                                                     Properties: Bits: 15:4, Type: ro, Reset Value: 0x0

                                                             // Properties: Bit: 3, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTEST_PAT_F0_MASK   = 0x00000008;    // FF/00 Pattern
const uintptr_t TPIU_SUPPTEST_PAT_F0_BPOS   = 3;             // 

                                                             // Properties: Bit: 2, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTEST_PAT_A5_MASK   = 0x00000004;    // AA/55 Pattern
const uintptr_t TPIU_SUPPTEST_PAT_A5_BPOS   = 2;             // 

                                                             // Properties: Bit: 1, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTEST_PAT_W0_MASK   = 0x00000002;    // Walking 0s Pattern
const uintptr_t TPIU_SUPPTEST_PAT_W0_BPOS   = 1;             // 

                                                             // Properties: Bit: 0, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_SUPPTEST_PAT_W1_MASK   = 0x00000001;    // Walking 1s Pattern
const uintptr_t TPIU_SUPPTEST_PAT_W1_BPOS   = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) CURRENTTEST
//
// Name                      TPIU_CURRENTTEST_REG
// Relative Address          0x00000204
// Absolute Address          0xF8803204
// Width                     18 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               Current Test Patterns/Modes Register
//
// Register TPIU_CURRENTTEST_REG Details
//
                                                                // Properties: Bit: 17, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_CURRENTTEST_PCONT_EN_MASK = 0x00020000;    // Continuous mode.
const uintptr_t TPIU_CURRENTTEST_PCONT_EN_BPOS = 17;            // 

                                                                // Properties: Bit: 16, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_CURRENTTEST_PTIME_EN_MASK = 0x00010000;    // Timed mode.
const uintptr_t TPIU_CURRENTTEST_PTIME_EN_BPOS = 16;            // 

// RESERVED                                                        Properties: Bits: 15:4, Type: ro, Reset Value: 0x0

                                                                // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_CURRENTTEST_PAT_F0_MASK   = 0x00000008;    // FF/00 Pattern
const uintptr_t TPIU_CURRENTTEST_PAT_F0_BPOS   = 3;             // 

                                                                // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_CURRENTTEST_PAT_A5_MASK   = 0x00000004;    // AA/55 Pattern
const uintptr_t TPIU_CURRENTTEST_PAT_A5_BPOS   = 2;             // 

                                                                // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_CURRENTTEST_PAT_W0_MASK   = 0x00000002;    // Walking 0s Pattern
const uintptr_t TPIU_CURRENTTEST_PAT_W0_BPOS   = 1;             // 

                                                                // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_CURRENTTEST_PAT_W1_MASK   = 0x00000001;    // Walking 1s Pattern
const uintptr_t TPIU_CURRENTTEST_PAT_W1_BPOS   = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) TESTREPEATCOUNT
//
// Name                      TPIU_TESTREPEATCOUNT_REG
// Relative Address          0x00000208
// Absolute Address          0xF8803208
// Width                     8 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               TPIU Test Pattern Repeat Counter Register
//
// Register TPIU_TESTREPEATCOUNT_REG Details
//
                                                                      // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_TESTREPEATCOUNT_PATT_COUNT_MASK = 0x000000FF;    // 8-bit counter value to indicate the number of
const uintptr_t TPIU_TESTREPEATCOUNT_PATT_COUNT_BPOS = 0;             // TRACECLKIN cycles that a pattern runs for
                                                                      // before switching to the next pattern.


//------------------------------------------------------------------------------
//
// Register (TPIU) FFSR
//
// Name                      TPIU_FFSR_REG
// Relative Address          0x00000300
// Absolute Address          0xF8803300
// Width                   3 bits
// Access Type             ro
// Reset Value             0x00000006
// Description             Formatter and Flush Status Register
//
// Register TPIU_FFSR_REG Details
//
                                                           // Properties: Bit: 2, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_FFSR_TCPRESENT_MASK  = 0x00000004;    // If this bit is set then TRACECTL is present.
const uintptr_t TPIU_FFSR_TCPRESENT_BPOS  = 2;             // 

                                                           // Properties: Bit: 1, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_FFSR_FT_STOPPED_MASK = 0x00000002;    // Formatter stopped.
const uintptr_t TPIU_FFSR_FT_STOPPED_BPOS = 1;             // The formatter has received a stop request signal
                                                           // and all trace data and post-amble has been
                                                           // output. Any more trace data on the ATB interface
                                                           // is ignored and ATREADYS goes HIGH.

                                                           // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_FFSR_FL_IN_PROG_MASK = 0x00000001;    // Flush In Progress. This is an indication of the
const uintptr_t TPIU_FFSR_FL_IN_PROG_BPOS = 0;             // current state of AFVALIDS.


//------------------------------------------------------------------------------
//
// Register (TPIU) FFCR
//
// Name                    TPIU_FFCR_REG
// Relative Address        0x00000304
// Absolute Address        0xF8803304
// Width                   14 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Formatter and Flush Control Register
//
// Register TPIU_FFCR_REG Details
//
                                                          // Properties: Bit: 13, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_FFCR_STOP_TRIG_MASK = 0x00002000;    // Stop the formatter after a Trigger Event is
const uintptr_t TPIU_FFCR_STOP_TRIG_BPOS = 13;            // observed.

                                                          // Properties: Bit: 12, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_FFCR_STOP_FL_MASK   = 0x00001000;    // Stop the formatter after a flush completes (return
const uintptr_t TPIU_FFCR_STOP_FL_BPOS   = 12;            // of AFREADYS). This forces the FIFO to drain off
                                                          // any part-completed packets.

// RESERVED                                                  Properties: Bit: 11, Type: ro, Reset Value: 0x0

                                                          // Properties: Bit: 10, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_FFCR_TRIG_FL_MASK   = 0x00000400;    // Indicates a trigger on Flush completion on
const uintptr_t TPIU_FFCR_TRIG_FL_BPOS   = 10;            // AFREADYS being returned.

                                                          // Properties: Bit: 9, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_FFCR_TRIG_EVT_MASK  = 0x00000200;    // Indicates a trigger on a Trigger Event.
const uintptr_t TPIU_FFCR_TRIG_EVT_BPOS  = 9;             // 

                                                          // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_FFCR_TRIG_IN_MASK   = 0x00000100;    // Indicates a trigger on TRIGIN being asserted.
const uintptr_t TPIU_FFCR_TRIG_IN_BPOS   = 8;             // 

// RESERVED                                                  Properties: Bit: 7, Type: ro, Reset Value: 0x0

                                                          // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_FFCR_FON_MAN_MASK   = 0x00000040;    // Manually generate a flush of the system. Setting
const uintptr_t TPIU_FFCR_FON_MAN_BPOS   = 6;             // this bit causes a flush to be generated. This is
                                                          // cleared when this flush has been serviced.

                                                          // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_FFCR_FON_TRIG_MASK  = 0x00000020;    // Generate a flush using Trigger event.
const uintptr_t TPIU_FFCR_FON_TRIG_BPOS  = 5;             // Set this bit to cause a flush of data in the system
                                                          // when a Trigger Event occurs.

                                                          // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_FFCR_FON_FL_IN_MASK = 0x00000010;    // Generate flush using the FLUSHIN interface. Set
const uintptr_t TPIU_FFCR_FON_FL_IN_BPOS = 4;             // this bit to enable use of the FLUSHIN connection.

// RESERVED                                                  Properties: Bits: 3:2, Type: ro, Reset Value: 0x0

                                                          // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_FFCR_EN_FCONT_MASK  = 0x00000002;    // Continuous Formatting, no TRACECTL. Embed
const uintptr_t TPIU_FFCR_EN_FCONT_BPOS  = 1;             // in trigger packets and indicate null cycles using
                                                          // Sync packets. Can only be changed when
                                                          // FtStopped is HIGH.

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_FFCR_EN_FTC_MASK    = 0x00000001;    // Enable Formatting. Do not embed Triggers into
const uintptr_t TPIU_FFCR_EN_FTC_BPOS    = 0;             // the formatted stream. Trace disable cycles and
                                                          // triggers are indicated by TRACECTL, where
                                                          // fitted. Can only be changed when FtStopped is
                                                          // HIGH.


//------------------------------------------------------------------------------
//
// Register (TPIU) FORMATSYNCCOUNT
//
// Name                    TPIU_FORMATSYNCCOUNT_REG
// Relative Address        0x00000308
// Absolute Address        0xF8803308
// Width                   12 bits
// Access Type             rw
// Reset Value             0x00000040
// Description             Formatter Synchronization Counter Register
//
// Register TPIU_FORMATSYNCCOUNT_REG Details
//
                                                                     // Properties: Bits: 11:0, Type: rw, Reset Value: 0x40
const uintptr_t TPIU_FORMATSYNCCOUNT_CYC_COUNT_MASK = 0x00000FFF;    // 12-bit counter value to indicate the number of
const uintptr_t TPIU_FORMATSYNCCOUNT_CYC_COUNT_BPOS = 0;             // complete frames between full synchronization
                                                                     // packets.


//------------------------------------------------------------------------------
//
// Register (TPIU) EXTCTLIN
//
// Name                    TPIU_EXTCTLIN_REG
// Relative Address        0x00000400
// Absolute Address        0xF8803400
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             EXTCTL In Port
//
// Register TPIU_EXTCTLIN_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_EXTCTLIN_VAL_MASK = 0x000000FF;    // Tied to 0
const uintptr_t TPIU_EXTCTLIN_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) EXTCTLOUT
//
// Name                    TPIU_EXTCTLOUT_REG
// Relative Address        0x00000404
// Absolute Address        0xF8803404
// Width                   8 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             EXTCTL Out Port
//
// Register TPIU_EXTCTLOUT_REG Details
//
                                                         // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_EXTCTLOUT_VAL_MASK = 0x000000FF;    // Output not connected
const uintptr_t TPIU_EXTCTLOUT_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) ITTRFLINACK
//
// Name                    TPIU_ITTRFLINACK_REG
// Relative Address        0x00000EE4
// Absolute Address        0xF8803EE4
// Width                   2 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Integration Test Trigger In and Flush In Acknowledge Register
//
// Register TPIU_ITTRFLINACK_REG Details
//
                                                                  // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t TPIU_ITTRFLINACK_FLUSHINACK_MASK = 0x00000002;    // Set the value of FLUSHINACK
const uintptr_t TPIU_ITTRFLINACK_FLUSHINACK_BPOS = 1;             // 

                                                                  // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t TPIU_ITTRFLINACK_TRIGINACK_MASK  = 0x00000001;    // Set the value of TRIGINACK
const uintptr_t TPIU_ITTRFLINACK_TRIGINACK_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) ITTRFLIN
//
// Name                    TPIU_ITTRFLIN_REG
// Relative Address        0x00000EE8
// Absolute Address        0xF8803EE8
// Width                   2 bits
// Access Type             ro
// Reset Value             x
// Description             Integration Test Trigger In and Flush In Register
//
// Register TPIU_ITTRFLIN_REG Details
//
                                                            // Properties: Bit: 1, Type: ro, Reset Value: x
const uintptr_t TPIU_ITTRFLIN_FLUSHIN_MASK = 0x00000002;    // Read the value of FLUSHIN
const uintptr_t TPIU_ITTRFLIN_FLUSHIN_BPOS = 1;             // 

                                                            // Properties: Bit: 0, Type: ro, Reset Value: x
const uintptr_t TPIU_ITTRFLIN_TRIGIN_MASK  = 0x00000001;    // Read the value of TRIGIN
const uintptr_t TPIU_ITTRFLIN_TRIGIN_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) ITATBDATA0
//
// Name                    TPIU_ITATBDATA0_REG
// Relative Address        0x00000EEC
// Absolute Address        0xF8803EEC
// Width                   5 bits
// Access Type             ro
// Reset Value             x
// Description             Integration Test ATB Data Register 0
//
// Register TPIU_ITATBDATA0_REG Details
//
                                                               // Properties: Bit: 4, Type: ro, Reset Value: x
const uintptr_t TPIU_ITATBDATA0_ATDATA31_MASK = 0x00000010;    // Read the value of ATDATAS[31]
const uintptr_t TPIU_ITATBDATA0_ATDATA31_BPOS = 4;             // 

                                                               // Properties: Bit: 3, Type: ro, Reset Value: x
const uintptr_t TPIU_ITATBDATA0_ATDATA23_MASK = 0x00000008;    // Read the value of ATDATAS[23]
const uintptr_t TPIU_ITATBDATA0_ATDATA23_BPOS = 3;             // 

                                                               // Properties: Bit: 2, Type: ro, Reset Value: x
const uintptr_t TPIU_ITATBDATA0_ATDATA15_MASK = 0x00000004;    // Read the value of ATDATAS[15]
const uintptr_t TPIU_ITATBDATA0_ATDATA15_BPOS = 2;             // 

                                                               // Properties: Bit: 1, Type: ro, Reset Value: x
const uintptr_t TPIU_ITATBDATA0_ATDATA7_MASK  = 0x00000002;    // Read the value of ATDATAS[7]
const uintptr_t TPIU_ITATBDATA0_ATDATA7_BPOS  = 1;             // 

                                                               // Properties: Bit: 0, Type: ro, Reset Value: x
const uintptr_t TPIU_ITATBDATA0_ATDATA0_MASK  = 0x00000001;    // Read the value of ATDATAS[0]
const uintptr_t TPIU_ITATBDATA0_ATDATA0_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) ITATBCTR2
//
// Name                     TPIU_ITATBCTR2_REG
// Relative Address         0x00000EF0
// Absolute Address         0xF8803EF0
// Width                    2 bits
// Access Type              wo
// Reset Value              0x00000000
// Description              Integration Test ATB Control Register 2
//
// Register TPIU_ITATBCTR2_REG Details
//
                                                             // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t TPIU_ITATBCTR2_AFVALID_MASK = 0x00000002;    // Set the value of AFVALIDS
const uintptr_t TPIU_ITATBCTR2_AFVALID_BPOS = 1;             // 

                                                             // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t TPIU_ITATBCTR2_ATREADY_MASK = 0x00000001;    // Set the value of ATREADYS
const uintptr_t TPIU_ITATBCTR2_ATREADY_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) ITATBCTR1
//
// Name                     TPIU_ITATBCTR1_REG
// Relative Address         0x00000EF4
// Absolute Address         0xF8803EF4
// Width                    7 bits
// Access Type              ro
// Reset Value              x
// Description              Integration Test ATB Control Register 1
//
// Register TPIU_ITATBCTR1_REG Details
//
                                                          // Properties: Bits: 6:0, Type: ro, Reset Value: x
const uintptr_t TPIU_ITATBCTR1_ATID_MASK = 0x0000007F;    // Read the value of ATIDS
const uintptr_t TPIU_ITATBCTR1_ATID_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) ITATBCTR0
//
// Name                     TPIU_ITATBCTR0_REG
// Relative Address        0x00000EF8
// Absolute Address        0xF8803EF8
// Width                   10 bits
// Access Type             ro
// Reset Value             x
// Description             Integration Test ATB Control Register 0
//
// Register TPIU_ITATBCTR0_REG Details
//
                                                             // Properties: Bits: 9:8, Type: ro, Reset Value: x
const uintptr_t TPIU_ITATBCTR0_ATBYTES_MASK = 0x00000300;    // Read the value of ATBYTESS
const uintptr_t TPIU_ITATBCTR0_ATBYTES_BPOS = 8;             // 

// RESERVED                                                     Properties: Bits: 7:2, Type: ro, Reset Value: x

                                                             // Properties: Bit: 1, Type: ro, Reset Value: x
const uintptr_t TPIU_ITATBCTR0_AFREADY_MASK = 0x00000002;    // Read the value of AFREADYS
const uintptr_t TPIU_ITATBCTR0_AFREADY_BPOS = 1;             // 

                                                             // Properties: Bit: 0, Type: ro, Reset Value: x
const uintptr_t TPIU_ITATBCTR0_ATVALID_MASK = 0x00000001;    // Read the value of ATVALIDS
const uintptr_t TPIU_ITATBCTR0_ATVALID_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) IMCR
//
// Name                    TPIU_IMCR_REG
// Relative Address        0x00000F00
// Absolute Address        0xF8803F00
// Width                   1 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Integration Mode Control Register
//
// Register TPIU_IMCR_REG Details
//
                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_IMCR_VAL_MASK = 0x00000001;    // Enable Integration Test registers
const uintptr_t TPIU_IMCR_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) CTSR
//
// Name                    TPIU_CTSR_REG
// Relative Address        0x00000FA0
// Absolute Address        0xF8803FA0
// Width                   4 bits
// Access Type             rw
// Reset Value             0x0000000F
// Description             Claim Tag Set Register
//
// Register TPIU_CTSR_REG Details
//
                                                    // Properties: Bits: 3:0, Type: rw, Reset Value: 0xF
const uintptr_t TPIU_CTSR_VAL_MASK = 0x0000000F;    // The claim tag register is used for any
const uintptr_t TPIU_CTSR_VAL_BPOS = 0;             // interrogating tools to determine if the device is
                                                    // being programmed or has been programmed.
                                                    // Read:
                                                    // 1= Claim tag is implemented, 0 = Claim tag is not
                                                    // implemented
                                                    // Write:
                                                    // 1= Set claim tag bit, 0= No effect


//------------------------------------------------------------------------------
//
// Register (TPIU) CTCR
//
// Name                    TPIU_CTCR_REG
// Relative Address        0x00000FA4
// Absolute Address        0xF8803FA4
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Claim Tag Clear Register
//
// Register TPIU_CTCR_REG Details
//
                                                    // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
const uintptr_t TPIU_CTCR_VAL_MASK = 0x0000000F;    // The claim tag register is used for any
const uintptr_t TPIU_CTCR_VAL_BPOS = 0;             // interrogating tools to determine if the device is
                                                    // being programmed or has been programmed.
                                                    // Read: Current value of claim tag.
                                                    // Write: 1= Clear claim tag bit, 0= No effect


//------------------------------------------------------------------------------
//
// Register (TPIU) LAR
//
// Name                    TPIU_LAR_REG
// Relative Address        0x00000FB0
// Absolute Address        0xF8803FB0
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Lock Access Register
//
// Register TPIU_LAR_REG Details
//
                                                   // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
const uintptr_t TPIU_LAR_VAL_MASK = 0xFFFFFFFF;    // Write Access Code.
const uintptr_t TPIU_LAR_VAL_BPOS = 0;             // Write behavior depends on PADDRDBG31 pin:
                                                   // - PADDRDBG31=0 (lower 2GB):
                                                   // After reset (via PRESETDBGn), TPIU is locked,
                                                   // i.e., writes to all other registers using lower 2GB
                                                   // addresses are ignored.
                                                   // To unlock, 0xC5ACCE55 must be written this
                                                   // register.
                                                   // After the required registers are written, to lock
                                                   // again, write a value other than 0xC5ACCE55 to
                                                   // this register.
                                                   // - PADDRDBG31=1 (upper 2GB):
                                                   // TPIU is unlocked when upper 2GB addresses are
                                                   // used to write to all the registers.
                                                   // However, write to this register is ignored using a
                                                   // upper 2GB address!
                                                   // Note: read from this register always returns 0,
                                                   // regardless of PADDRDBG31.


//------------------------------------------------------------------------------
//
// Register (TPIU) LSR
//
// Name                    TPIU_LSR_REG
// Relative Address        0x00000FB4
// Absolute Address        0xF8803FB4
// Width                   3 bits
// Access Type             ro
// Reset Value             0x00000003
// Description             Lock Status Register
//
// Register TPIU_LSR_REG Details
//
                                                      // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_LSR_8BIT_MASK   = 0x00000004;    // Set to 0 since TPIU implements a 32-bit lock access
const uintptr_t TPIU_LSR_8BIT_BPOS   = 2;             // register

                                                      // Properties: Bit: 1, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_LSR_STATUS_MASK = 0x00000002;    // Read behavior depends on PADDRDBG31 pin:
const uintptr_t TPIU_LSR_STATUS_BPOS = 1;             // - PADDRDBG31=0 (lower 2GB):
                                                      // When a lower 2GB address is used to read this
                                                      // register, this bit indicates whether TPIU is in
                                                      // locked state
                                                      // (1= locked, 0= unlocked).
                                                      // - PADDRDBG31=1 (upper 2GB):
                                                      // always returns 0.

                                                      // Properties: Bit: 0, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_LSR_IMP_MASK    = 0x00000001;    // Read behavior depends on PADDRDBG31 pin:
const uintptr_t TPIU_LSR_IMP_BPOS    = 0;             // - PADDRDBG31=0 (lower 2GB):
                                                      // always returns 1, meaning lock mechanism are
                                                      // implemented.
                                                      // - PADDRDBG31=1 (upper 2GB):
                                                      // always returns 0, meaning lock mechanism is
                                                      // NOT implemented.


//------------------------------------------------------------------------------
//
// Register (TPIU) ASR
//
// Name                     TPIU_ASR_REG
// Relative Address         0x00000FB8
// Absolute Address         0xF8803FB8
// Width                    8 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Authentication Status Register
//
// Register TPIU_ASR_REG Details
//
                                                   // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_ASR_VAL_MASK = 0x000000FF;    // Indicates functionality not implemented
const uintptr_t TPIU_ASR_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) DEVID
//
// Name                     TPIU_DEVID_REG
// Relative Address         0x00000FC8
// Absolute Address         0xF8803FC8
// Width                    12 bits
// Access Type              ro
// Reset Value              0x000000A0
// Description              Device ID
//
// Register TPIU_DEVID_REG Details
//
                                                             // Properties: Bit: 11, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_DEVID_UART_NRZ_MASK    = 0x00000800;    // UART/NRZ not supported
const uintptr_t TPIU_DEVID_UART_NRZ_BPOS    = 11;            // 

                                                             // Properties: Bit: 10, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_DEVID_MANCHESTER_MASK  = 0x00000400;    // Manchester not support
const uintptr_t TPIU_DEVID_MANCHESTER_BPOS  = 10;            // 

                                                             // Properties: Bit: 9, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_DEVID_CLOCK_DATA_MASK  = 0x00000200;    // Trace clock + data is supported
const uintptr_t TPIU_DEVID_CLOCK_DATA_BPOS  = 9;             // 

                                                             // Properties: Bits: 8:6, Type: ro, Reset Value: 0x2
const uintptr_t TPIU_DEVID_FIFO_SIZE_MASK   = 0x000001C0;    // FIFO size is 4
const uintptr_t TPIU_DEVID_FIFO_SIZE_BPOS   = 6;             // 

                                                             // Properties: Bit: 5, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_DEVID_ASYNC_CLOCK_MASK = 0x00000020;    // ATCLK and TRACECLKIN is asynchronous
const uintptr_t TPIU_DEVID_ASYNC_CLOCK_BPOS = 5;             // 

                                                             // Properties: Bits: 4:0, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_DEVID_INPUT_MUX_MASK   = 0x0000001F;    // No input multiplexing
const uintptr_t TPIU_DEVID_INPUT_MUX_BPOS   = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) DTIR
//
// Name                     TPIU_DTIR_REG
// Relative Address         0x00000FCC
// Absolute Address         0xF8803FCC
// Width                    8 bits
// Access Type              ro
// Reset Value              0x00000011
// Description              Device Type Identifier Register
//
// Register TPIU_DTIR_REG Details
//
                                                    // Properties: Bits: 7:0, Type: ro, Reset Value: 0x11
const uintptr_t TPIU_DTIR_VAL_MASK = 0x000000FF;    // A trace sink and specifically a TPIU
const uintptr_t TPIU_DTIR_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) PERIPHID4
//
// Name                     TPIU_PERIPHID4_REG
// Relative Address         0x00000FD0
// Absolute Address         0xF8803FD0
// Width                    8 bits
// Access Type              ro
// Reset Value              0x00000004
// Description              Peripheral ID4
//
// Register TPIU_PERIPHID4_REG Details
//
                                                               // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_PERIPHID4_4KB_COUNT_MASK = 0x000000F0;    // 4KB Count, set to 0
const uintptr_t TPIU_PERIPHID4_4KB_COUNT_BPOS = 4;             // 

                                                               // Properties: Bits: 3:0, Type: ro, Reset Value: 0x4
const uintptr_t TPIU_PERIPHID4_JEP106ID_MASK  = 0x0000000F;    // JEP106 continuation code
const uintptr_t TPIU_PERIPHID4_JEP106ID_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) PERIPHID5
//
// Name                    TPIU_PERIPHID5_REG
// Relative Address        0x00000FD4
// Absolute Address        0xF8803FD4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID5
//
// Register TPIU_PERIPHID5_REG Details
//
                                                         // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_PERIPHID5_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t TPIU_PERIPHID5_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) PERIPHID6
//
// Name                    TPIU_PERIPHID6_REG
// Relative Address        0x00000FD8
// Absolute Address        0xF8803FD8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID6
//
// Register TPIU_PERIPHID6_REG Details
//
                                                         // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_PERIPHID6_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t TPIU_PERIPHID6_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) PERIPHID7
//
// Name                    TPIU_PERIPHID7_REG
// Relative Address        0x00000FDC
// Absolute Address        0xF8803FDC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID7
//
// Register TPIU_PERIPHID7_REG Details
//
                                                         // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_PERIPHID7_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t TPIU_PERIPHID7_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) PERIPHID0
//
// Name                    TPIU_PERIPHID0_REG
// Relative Address        0x00000FE0
// Absolute Address        0xF8803FE0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000012
// Description             Peripheral ID0
//
// Register TPIU_PERIPHID0_REG Details
//
                                                         // Properties: Bits: 7:0, Type: ro, Reset Value: 0x12
const uintptr_t TPIU_PERIPHID0_VAL_MASK = 0x000000FF;    // PartNumber0
const uintptr_t TPIU_PERIPHID0_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) PERIPHID1
//
// Name                    TPIU_PERIPHID1_REG
// Relative Address        0x00000FE4
// Absolute Address        0xF8803FE4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B9
// Description             Peripheral ID1
//
// Register TPIU_PERIPHID1_REG Details
//
                                                                  // Properties: Bits: 7:4, Type: ro, Reset Value: 0xB
const uintptr_t TPIU_PERIPHID1_JEP106ID_MASK     = 0x000000F0;    // JEP106 Identity Code [3:0]
const uintptr_t TPIU_PERIPHID1_JEP106ID_BPOS     = 4;             // 

                                                                  // Properties: Bits: 3:0, Type: ro, Reset Value: 0x9
const uintptr_t TPIU_PERIPHID1_PART_NUMBER1_MASK = 0x0000000F;    // PartNumber1
const uintptr_t TPIU_PERIPHID1_PART_NUMBER1_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) PERIPHID2
//
// Name                    TPIU_PERIPHID2_REG
// Relative Address        0x00000FE8
// Absolute Address        0xF8803FE8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000004B
// Description             Peripheral ID2
//
// Register TPIU_PERIPHID2_REG Details
//
                                                              // Properties: Bits: 7:4, Type: ro, Reset Value: 0x4
const uintptr_t TPIU_PERIPHID2_REV_NUM_MASK  = 0x000000F0;    // Revision number of Peripheral
const uintptr_t TPIU_PERIPHID2_REV_NUM_BPOS  = 4;             // 

                                                              // Properties: Bit: 3, Type: ro, Reset Value: 0x1
const uintptr_t TPIU_PERIPHID2_JEDEC_MASK    = 0x00000008;    // Indicates that a JEDEC assigned value is used
const uintptr_t TPIU_PERIPHID2_JEDEC_BPOS    = 3;             // 

                                                              // Properties: Bits: 2:0, Type: ro, Reset Value: 0x3
const uintptr_t TPIU_PERIPHID2_JEP106ID_MASK = 0x00000007;    // JEP106 Identity Code [6:4]
const uintptr_t TPIU_PERIPHID2_JEP106ID_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) PERIPHID3
//
// Name                    TPIU_PERIPHID3_REG
// Relative Address        0x00000FEC
// Absolute Address        0xF8803FEC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID3
//
// Register TPIU_PERIPHID3_REG Details
//
                                                              // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_PERIPHID3_REV_AND_MASK  = 0x000000F0;    // RevAnd, at top level
const uintptr_t TPIU_PERIPHID3_REV_AND_BPOS  = 4;             // 

                                                              // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
const uintptr_t TPIU_PERIPHID3_CUST_MOD_MASK = 0x0000000F;    // Customer Modified
const uintptr_t TPIU_PERIPHID3_CUST_MOD_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) COMPID0
//
// Name                    TPIU_COMPID0_REG
// Relative Address        0x00000FF0
// Absolute Address        0xF8803FF0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000000D
// Description             Component ID0
//
// Register TPIU_COMPID0_REG Details
//
                                                       // Properties: Bits: 7:0, Type: ro, Reset Value: 0xD
const uintptr_t TPIU_COMPID0_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t TPIU_COMPID0_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) COMPID1
//
// Name                    TPIU_COMPID1_REG
// Relative Address        0x00000FF4
// Absolute Address        0xF8803FF4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000090
// Description             Component ID1
//
// Register TPIU_COMPID1_REG Details
//
                                                       // Properties: Bits: 7:0, Type: ro, Reset Value: 0x90
const uintptr_t TPIU_COMPID1_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t TPIU_COMPID1_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) COMPID2
//
// Name                    TPIU_COMPID2_REG
// Relative Address        0x00000FF8
// Absolute Address        0xF8803FF8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000005
// Description             Component ID2
//
// Register TPIU_COMPID2_REG Details
//
                                                       // Properties: Bits: 7:0, Type: ro, Reset Value: 0x5
const uintptr_t TPIU_COMPID2_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t TPIU_COMPID2_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TPIU) COMPID3
//
// Name                    TPIU_COMPID3_REG
// Relative Address        0x00000FFC
// Absolute Address        0xF8803FFC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B1
// Description             Component ID3
//
// Register TPIU_COMPID3_REG Details
//
                                                       // Properties: Bits: 7:0, Type: ro, Reset Value: 0xB1
const uintptr_t TPIU_COMPID3_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t TPIU_COMPID3_VAL_BPOS = 0;             // 


#endif // PS7_TPIU_H

