//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_TTC
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

#ifndef PS7_TTC_H
#define PS7_TTC_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    TTC0 MMRs
//
//              Name                       Address                   Width   Type       Reset Value   Description
const uintptr_t TTC_CLK_CTRL1_REG0       = TTC0_ADDR + 0x00000000; //   7    rw         0x00000000    Clock Control register
const uintptr_t TTC_CLK_CTRL2_REG0       = TTC0_ADDR + 0x00000004; //   7    rw         0x00000000    Clock Control register
const uintptr_t TTC_CLK_CTRL3_REG0       = TTC0_ADDR + 0x00000008; //   7    rw         0x00000000    Clock Control register
const uintptr_t TTC_CNT_CTRL1_REG0       = TTC0_ADDR + 0x0000000C; //   7    rw         0x00000021    Operational mode and reset
const uintptr_t TTC_CNT_CTRL2_REG0       = TTC0_ADDR + 0x00000010; //   7    rw         0x00000021    Operational mode and reset
const uintptr_t TTC_CNT_CTRL3_REG0       = TTC0_ADDR + 0x00000014; //   7    rw         0x00000021    Operational mode and reset
const uintptr_t TTC_CNT_VAL1_REG0        = TTC0_ADDR + 0x00000018; //  16    ro         0x00000000    Current counter value
const uintptr_t TTC_CNT_VAL2_REG0        = TTC0_ADDR + 0x0000001C; //  16    ro         0x00000000    Current counter value
const uintptr_t TTC_CNT_VAL3_REG0        = TTC0_ADDR + 0x00000020; //  16    ro         0x00000000    Current counter value
const uintptr_t TTC_INTERVAL_CNT1_REG0   = TTC0_ADDR + 0x00000024; //  16    rw         0x00000000    Interval value
const uintptr_t TTC_INTERVAL_CNT2_REG0   = TTC0_ADDR + 0x00000028; //  16    rw         0x00000000    Interval value
const uintptr_t TTC_INTERVAL_CNT3_REG0   = TTC0_ADDR + 0x0000002C; //  16    rw         0x00000000    Interval value
const uintptr_t TTC_MATCH1_CNT1_REG0     = TTC0_ADDR + 0x00000030; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH1_CNT2_REG0     = TTC0_ADDR + 0x00000034; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH1_CNT3_REG0     = TTC0_ADDR + 0x00000038; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH2_CNT1_REG0     = TTC0_ADDR + 0x0000003C; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH2_CNT2_REG0     = TTC0_ADDR + 0x00000040; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH2_CNT3_REG0     = TTC0_ADDR + 0x00000044; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH3_CNT1_REG0     = TTC0_ADDR + 0x00000048; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH3_CNT2_REG0     = TTC0_ADDR + 0x0000004C; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH3_CNT3_REG0     = TTC0_ADDR + 0x00000050; //  16    rw         0x00000000    Match value
const uintptr_t TTC_INT1_REG0            = TTC0_ADDR + 0x00000054; //   6    clronrd    0x00000000    Counter 1 Interval Overflow and Event interrupts
const uintptr_t TTC_INT2_REG0            = TTC0_ADDR + 0x00000058; //   6    clronrd    0x00000000    Counter 2 Interval Overflow and Event interrupts
const uintptr_t TTC_INT3_REG0            = TTC0_ADDR + 0x0000005C; //   6    clronrd    0x00000000    Counter 3 Interval Overflow and Event interrupts
const uintptr_t TTC_INT_EN1_REG0         = TTC0_ADDR + 0x00000060; //   6    rw         0x00000000    ANDed with corresponding Interrupt Register
const uintptr_t TTC_INT_EN2_REG0         = TTC0_ADDR + 0x00000064; //   6    rw         0x00000000    ANDed with corresponding Interrupt Register
const uintptr_t TTC_INT_EN3_REG0         = TTC0_ADDR + 0x00000068; //   6    rw         0x00000000    ANDed with corresponding Interrupt Register
const uintptr_t TTC_EVENT_CTRL_TMR1_REG0 = TTC0_ADDR + 0x0000006C; //   3    rw         0x00000000    Enable
const uintptr_t TTC_EVENT_CTRL_TMR2_REG0 = TTC0_ADDR + 0x00000070; //   3    rw         0x00000000    Enable
const uintptr_t TTC_EVENT_CTRL_TMR3_REG0 = TTC0_ADDR + 0x00000074; //   3    rw         0x00000000    Enable
const uintptr_t TTC_EVENT1_REG0          = TTC0_ADDR + 0x00000078; //  16    ro         0x00000000    pclk cycle count for event
const uintptr_t TTC_EVENT2_REG0          = TTC0_ADDR + 0x0000007C; //  16    ro         0x00000000    pclk cycle count for event
const uintptr_t TTC_EVENT3_REG0          = TTC0_ADDR + 0x00000080; //  16    ro         0x00000000    pclk cycle count for event
//------------------------------------------------------------------------------
//
//    TTC1 MMRs
//
//              Name                       Address                   Width   Type       Reset Value   Description
const uintptr_t TTC_CLK_CTRL1_REG1       = TTC1_ADDR + 0x00000000; //   7    rw         0x00000000    Clock Control register
const uintptr_t TTC_CLK_CTRL2_REG1       = TTC1_ADDR + 0x00000004; //   7    rw         0x00000000    Clock Control register
const uintptr_t TTC_CLK_CTRL3_REG1       = TTC1_ADDR + 0x00000008; //   7    rw         0x00000000    Clock Control register
const uintptr_t TTC_CNT_CTRL1_REG1       = TTC1_ADDR + 0x0000000C; //   7    rw         0x00000021    Operational mode and reset
const uintptr_t TTC_CNT_CTRL2_REG1       = TTC1_ADDR + 0x00000010; //   7    rw         0x00000021    Operational mode and reset
const uintptr_t TTC_CNT_CTRL3_REG1       = TTC1_ADDR + 0x00000014; //   7    rw         0x00000021    Operational mode and reset
const uintptr_t TTC_CNT_VAL1_REG1        = TTC1_ADDR + 0x00000018; //  16    ro         0x00000000    Current counter value
const uintptr_t TTC_CNT_VAL2_REG1        = TTC1_ADDR + 0x0000001C; //  16    ro         0x00000000    Current counter value
const uintptr_t TTC_CNT_VAL3_REG1        = TTC1_ADDR + 0x00000020; //  16    ro         0x00000000    Current counter value
const uintptr_t TTC_INTERVAL_CNT1_REG1   = TTC1_ADDR + 0x00000024; //  16    rw         0x00000000    Interval value
const uintptr_t TTC_INTERVAL_CNT2_REG1   = TTC1_ADDR + 0x00000028; //  16    rw         0x00000000    Interval value
const uintptr_t TTC_INTERVAL_CNT3_REG1   = TTC1_ADDR + 0x0000002C; //  16    rw         0x00000000    Interval value
const uintptr_t TTC_MATCH1_CNT1_REG1     = TTC1_ADDR + 0x00000030; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH1_CNT2_REG1     = TTC1_ADDR + 0x00000034; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH1_CNT3_REG1     = TTC1_ADDR + 0x00000038; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH2_CNT1_REG1     = TTC1_ADDR + 0x0000003C; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH2_CNT2_REG1     = TTC1_ADDR + 0x00000040; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH2_CNT3_REG1     = TTC1_ADDR + 0x00000044; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH3_CNT1_REG1     = TTC1_ADDR + 0x00000048; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH3_CNT2_REG1     = TTC1_ADDR + 0x0000004C; //  16    rw         0x00000000    Match value
const uintptr_t TTC_MATCH3_CNT3_REG1     = TTC1_ADDR + 0x00000050; //  16    rw         0x00000000    Match value
const uintptr_t TTC_INT1_REG1            = TTC1_ADDR + 0x00000054; //   6    clronrd    0x00000000    Counter 1 Interval Overflow and Event interrupts
const uintptr_t TTC_INT2_REG1            = TTC1_ADDR + 0x00000058; //   6    clronrd    0x00000000    Counter 2 Interval Overflow and Event interrupts
const uintptr_t TTC_INT3_REG1            = TTC1_ADDR + 0x0000005C; //   6    clronrd    0x00000000    Counter 3 Interval Overflow and Event interrupts
const uintptr_t TTC_INT_EN1_REG1         = TTC1_ADDR + 0x00000060; //   6    rw         0x00000000    ANDed with corresponding Interrupt Register
const uintptr_t TTC_INT_EN2_REG1         = TTC1_ADDR + 0x00000064; //   6    rw         0x00000000    ANDed with corresponding Interrupt Register
const uintptr_t TTC_INT_EN3_REG1         = TTC1_ADDR + 0x00000068; //   6    rw         0x00000000    ANDed with corresponding Interrupt Register
const uintptr_t TTC_EVENT_CTRL_TMR1_REG1 = TTC1_ADDR + 0x0000006C; //   3    rw         0x00000000    Enable
const uintptr_t TTC_EVENT_CTRL_TMR2_REG1 = TTC1_ADDR + 0x00000070; //   3    rw         0x00000000    Enable
const uintptr_t TTC_EVENT_CTRL_TMR3_REG1 = TTC1_ADDR + 0x00000074; //   3    rw         0x00000000    Enable
const uintptr_t TTC_EVENT1_REG1          = TTC1_ADDR + 0x00000078; //  16    ro         0x00000000    pclk cycle count for event
const uintptr_t TTC_EVENT2_REG1          = TTC1_ADDR + 0x0000007C; //  16    ro         0x00000000    pclk cycle count for event
const uintptr_t TTC_EVENT3_REG1          = TTC1_ADDR + 0x00000080; //  16    ro         0x00000000    pclk cycle count for event
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (TTC) CLK_CTRL1
//
// Name                    TTC_CLK_CTRL1_REG
// Software Name           CLK_CNTRL
// Relative Address        0x00000000
// Absolute Address        ttc0: 0xF8001000
//                         ttc1: 0xF8002000
// Width                   7 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Clock Control register
//
// Register TTC_CLK_CTRL1_REG Details
//
                                                          // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL1_EX_E_MASK  = 0x00000040;    // External Clock Edge: when this bit is set and the
const uintptr_t TTC_CLK_CTRL1_EX_E_BPOS  = 6;             // extend clock is selected, the counter clocks on the
                                                          // negative going edge of the external clock input.

                                                          // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL1_C_SRC_MASK = 0x00000020;    // Clock Source: when this bit is set the counter uses
const uintptr_t TTC_CLK_CTRL1_C_SRC_BPOS = 5;             // the external clock input, ext_clk; the default clock
                                                          // source is pclk.

                                                          // Properties: Bits: 4:1, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL1_PS_V_MASK  = 0x0000001E;    // Prescale value (N): if prescale is enabled, the
const uintptr_t TTC_CLK_CTRL1_PS_V_BPOS  = 1;             // count rate is divided by 2^(N+1)

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL1_PS_EN_MASK = 0x00000001;    // Prescale enable: when this bit is set the counter,
const uintptr_t TTC_CLK_CTRL1_PS_EN_BPOS = 0;             // clock source is prescaled; the default clock source
                                                          // is that defined by C_Src.the default


//------------------------------------------------------------------------------
//
// Register (TTC) CLK_CTRL2
//
// Name                     TTC_CLK_CTRL2_REG
// Relative Address         0x00000004
// Absolute Address         ttc0: 0xF8001004
//                          ttc1: 0xF8002004
// Width                    7 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Clock Control register
//
// Register TTC_CLK_CTRL2_REG Details
//
                                                          // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL2_EX_E_MASK  = 0x00000040;    // External Clock Edge: when this bit is set and the
const uintptr_t TTC_CLK_CTRL2_EX_E_BPOS  = 6;             // extend clock is selected, the counter clocks on the
                                                          // negative going edge of the external clock input.

                                                          // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL2_C_SRC_MASK = 0x00000020;    // Clock Source: when this bit is set the counter uses
const uintptr_t TTC_CLK_CTRL2_C_SRC_BPOS = 5;             // the external clock input, ext_clk; the default clock
                                                          // source is pclk.

                                                          // Properties: Bits: 4:1, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL2_PS_V_MASK  = 0x0000001E;    // Prescale value (N): if prescale is enabled, the
const uintptr_t TTC_CLK_CTRL2_PS_V_BPOS  = 1;             // count rate is divided by 2^(N+1)

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL2_PS_EN_MASK = 0x00000001;    // Prescale enable: when this bit is set the counter,
const uintptr_t TTC_CLK_CTRL2_PS_EN_BPOS = 0;             // clock source is prescaled; the default clock source
                                                          // is that defined by C_Src.the default


//------------------------------------------------------------------------------
//
// Register (TTC) CLK_CTRL3
//
// Name                     TTC_CLK_CTRL3_REG
// Relative Address         0x00000008
// Absolute Address         ttc0: 0xF8001008
//                          ttc1: 0xF8002008
// Width                    7 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Clock Control register
//
// Register TTC_CLK_CTRL3_REG Details
//
                                                          // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL3_EX_E_MASK  = 0x00000040;    // External Clock Edge: when this bit is set and the
const uintptr_t TTC_CLK_CTRL3_EX_E_BPOS  = 6;             // extend clock is selected, the counter clocks on the
                                                          // negative going edge of the external clock input.

                                                          // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL3_C_SRC_MASK = 0x00000020;    // Clock Source: when this bit is set the counter uses
const uintptr_t TTC_CLK_CTRL3_C_SRC_BPOS = 5;             // the external clock input, ext_clk; the default clock
                                                          // source is pclk.

                                                          // Properties: Bits: 4:1, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL3_PS_V_MASK  = 0x0000001E;    // Prescale value (N): if prescale is enabled, the
const uintptr_t TTC_CLK_CTRL3_PS_V_BPOS  = 1;             // count rate is divided by 2^(N+1)

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CLK_CTRL3_PS_EN_MASK = 0x00000001;    // Prescale enable: when this bit is set the counter,
const uintptr_t TTC_CLK_CTRL3_PS_EN_BPOS = 0;             // clock source is prescaled; the default clock source
                                                          // is that defined by C_Src.the default


//------------------------------------------------------------------------------
//
// Register (TTC) CNT_CTRL1
//
// Name                     TTC_CNT_CTRL1_REG
// Software Name            CNT_CNTRL
// Relative Address         0x0000000C
// Absolute Address         ttc0: 0xF800100C
//                          ttc1: 0xF800200C
// Width                    7 bits
// Access Type              rw
// Reset Value              0x00000021
// Description              Operational mode and reset
//
// Register TTC_CNT_CTRL1_REG Details
//
                                                             // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL1_WAVE_POL_MASK = 0x00000040;    // Waveform polarity: When this bit is high, the
const uintptr_t TTC_CNT_CTRL1_WAVE_POL_BPOS = 6;             // waveform output goes from high to low on
                                                             // Match_1 interrupt and returns high on overflow
                                                             // or interval interrupt; when low, the waveform
                                                             // goes from low to high on Match_1 interrupt and
                                                             // returns low on overflow or interval interrupt.

                                                             // Properties: Bit: 5, Type: rw, Reset Value: 0x1
const uintptr_t TTC_CNT_CTRL1_WAVE_EN_MASK  = 0x00000020;    // Output waveform enable, active low.
const uintptr_t TTC_CNT_CTRL1_WAVE_EN_BPOS  = 5;             // 

                                                             // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL1_RST_MASK      = 0x00000010;    // Setting this bit high resets the counter value and
const uintptr_t TTC_CNT_CTRL1_RST_BPOS      = 4;             // restarts counting; the RST bit is automatically
                                                             // cleared on restart.

                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL1_MATCH_MASK    = 0x00000008;    // Register Match mode: when Match is set, an
const uintptr_t TTC_CNT_CTRL1_MATCH_BPOS    = 3;             // interrupt is generated when the count value
                                                             // matches one of the three match registers and the
                                                             // corresponding bit is set in the Interrupt Enable
                                                             // register.

                                                             // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL1_DEC_MASK      = 0x00000004;    // Decrement: when this bit is high the counter
const uintptr_t TTC_CNT_CTRL1_DEC_BPOS      = 2;             // counts down.

                                                             // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL1_INT_MASK      = 0x00000002;    // When this bit is high, the timer is in Interval
const uintptr_t TTC_CNT_CTRL1_INT_BPOS      = 1;             // Mode, and the counter generates interrupts at
                                                             // regular intervals; when low, the timer is in
                                                             // overflow mode.

                                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x1
const uintptr_t TTC_CNT_CTRL1_DIS_MASK      = 0x00000001;    // Disable counter: when this bit is high, the counter
const uintptr_t TTC_CNT_CTRL1_DIS_BPOS      = 0;             // is stopped, holding its last value until reset,
                                                             // restarted or enabled again.


//------------------------------------------------------------------------------
//
// Register (TTC) CNT_CTRL2
//
// Name                    TTC_CNT_CTRL2_REG
// Relative Address        0x00000010
// Absolute Address        ttc0: 0xF8001010
//                         ttc1: 0xF8002010
// Width                   7 bits
// Access Type             rw
// Reset Value             0x00000021
// Description             Operational mode and reset
//
// Register TTC_CNT_CTRL2_REG Details
//
                                                             // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL2_WAVE_POL_MASK = 0x00000040;    // Waveform polarity: When this bit is high, the
const uintptr_t TTC_CNT_CTRL2_WAVE_POL_BPOS = 6;             // waveform output goes from high to low on
                                                             // Match_1 interrupt and returns high on overflow
                                                             // or interval interrupt; when low, the waveform
                                                             // goes from low to high on Match_1 interrupt and
                                                             // returns low on overflow or interval interrupt.

                                                             // Properties: Bit: 5, Type: rw, Reset Value: 0x1
const uintptr_t TTC_CNT_CTRL2_WAVE_EN_MASK  = 0x00000020;    // Output waveform enable, active low.
const uintptr_t TTC_CNT_CTRL2_WAVE_EN_BPOS  = 5;             // 

                                                             // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL2_RST_MASK      = 0x00000010;    // Setting this bit high resets the counter value and
const uintptr_t TTC_CNT_CTRL2_RST_BPOS      = 4;             // restarts counting; the RST bit is automatically
                                                             // cleared on restart.

                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL2_MATCH_MASK    = 0x00000008;    // Register Match mode: when Match is set, an
const uintptr_t TTC_CNT_CTRL2_MATCH_BPOS    = 3;             // interrupt is generated when the count value
                                                             // matches one of the three match registers and the
                                                             // corresponding bit is set in the Interrupt Enable
                                                             // register.

                                                             // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL2_DEC_MASK      = 0x00000004;    // Decrement: when this bit is high the counter
const uintptr_t TTC_CNT_CTRL2_DEC_BPOS      = 2;             // counts down.

                                                             // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL2_INT_MASK      = 0x00000002;    // When this bit is high, the timer is in Interval
const uintptr_t TTC_CNT_CTRL2_INT_BPOS      = 1;             // Mode, and the counter generates interrupts at
                                                             // regular intervals; when low, the timer is in
                                                             // overflow mode.

                                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x1
const uintptr_t TTC_CNT_CTRL2_DIS_MASK      = 0x00000001;    // Disable counter: when this bit is high, the counter
const uintptr_t TTC_CNT_CTRL2_DIS_BPOS      = 0;             // is stopped, holding its last value until reset,
                                                             // restarted or enabled again.


//------------------------------------------------------------------------------
//
// Register (TTC) CNT_CTRL3
//
// Name                    TTC_CNT_CTRL3_REG
// Relative Address        0x00000014
// Absolute Address        ttc0: 0xF8001014
//                         ttc1: 0xF8002014
// Width                   7 bits
// Access Type             rw
// Reset Value             0x00000021
// Description             Operational mode and reset
//
// Register TTC_CNT_CTRL3_REG Details
//
                                                             // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL3_WAVE_POL_MASK = 0x00000040;    // Waveform polarity: When this bit is high, the
const uintptr_t TTC_CNT_CTRL3_WAVE_POL_BPOS = 6;             // waveform output goes from high to low on
                                                             // Match_1 interrupt and returns high on overflow
                                                             // or interval interrupt; when low, the waveform
                                                             // goes from low to high on Match_1 interrupt and
                                                             // returns low on overflow or interval interrupt.

                                                             // Properties: Bit: 5, Type: rw, Reset Value: 0x1
const uintptr_t TTC_CNT_CTRL3_WAVE_EN_MASK  = 0x00000020;    // Output waveform enable, active low.
const uintptr_t TTC_CNT_CTRL3_WAVE_EN_BPOS  = 5;             // 

                                                             // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL3_RST_MASK      = 0x00000010;    // Setting this bit high resets the counter value and
const uintptr_t TTC_CNT_CTRL3_RST_BPOS      = 4;             // restarts counting; the RST bit is automatically
                                                             // cleared on restart.

                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL3_MATCH_MASK    = 0x00000008;    // Register Match mode: when Match is set, an
const uintptr_t TTC_CNT_CTRL3_MATCH_BPOS    = 3;             // interrupt is generated when the count value
                                                             // matches one of the three match registers and the
                                                             // corresponding bit is set in the Interrupt Enable
                                                             // register.

                                                             // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL3_DEC_MASK      = 0x00000004;    // Decrement: when this bit is high the counter
const uintptr_t TTC_CNT_CTRL3_DEC_BPOS      = 2;             // counts down.

                                                             // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t TTC_CNT_CTRL3_INT_MASK      = 0x00000002;    // When this bit is high, the timer is in Interval
const uintptr_t TTC_CNT_CTRL3_INT_BPOS      = 1;             // Mode, and the counter generates interrupts at
                                                             // regular intervals; when low, the timer is in
                                                             // overflow mode.

                                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x1
const uintptr_t TTC_CNT_CTRL3_DIS_MASK      = 0x00000001;    // Disable counter: when this bit is high, the counter
const uintptr_t TTC_CNT_CTRL3_DIS_BPOS      = 0;             // is stopped, holding its last value until reset,
                                                             // restarted or enabled again.


//------------------------------------------------------------------------------
//
// Register (TTC) CNT1
//
// Name                    TTC_CNT_VAL1_REG
// Software Name           COUNT_VALUE
// Relative Address        0x00000018
// Absolute Address        ttc0: 0xF8001018
//                         ttc1: 0xF8002018
// Width                   16 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Current counter value
//
// Register TTC_CNT_VAL1_REG Details
//
                                                   // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t TTC_CNT1_VAL_MASK = 0x0000FFFF;    // At any time, a Timer Counter's count value can be
const uintptr_t TTC_CNT1_VAL_BPOS = 0;             // read from its Counter Value Register.


//------------------------------------------------------------------------------
//
// Register (TTC) CNT2
//
// Name                    TTC_CNT_VAL2_REG
// Relative Address        0x0000001C
// Absolute Address        ttc0: 0xF800101C
//                         ttc1: 0xF800201C
// Width                   16 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Current counter value
//
// Register TTC_CNT_VAL2_REG Details
//
                                                   // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t TTC_CNT2_VAL_MASK = 0x0000FFFF;    // At any time, a Timer Counter's count value can be
const uintptr_t TTC_CNT2_VAL_BPOS = 0;             // read from its Counter Value Register.


//------------------------------------------------------------------------------
//
// Register (TTC) CNT3
//
// Name                    TTC_CNT_VAL3_REG
// Relative Address        0x00000020
// Absolute Address        ttc0: 0xF8001020
//                         ttc1: 0xF8002020
// Width                   16 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Current counter value
//
// Register TTC_CNT_VAL3_REG Details
//
                                                   // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t TTC_CNT3_VAL_MASK = 0x0000FFFF;    // At any time, a Timer Counter's count value can be
const uintptr_t TTC_CNT3_VAL_BPOS = 0;             // read from its Counter Value Register.


//------------------------------------------------------------------------------
//
// Register (TTC) INTERVAL_CNT1
//
// Name                     TTC_INTERVAL_CNT1_REG
// Software Name            INTERVAL_VAL
// Relative Address         0x00000024
// Absolute Address         ttc0: 0xF8001024
//                          ttc1: 0xF8002024
// Width                    16 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Interval value
//
// Register TTC_INTERVAL_CNT1_REG Details
//
                                                            // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_INTERVAL_CNT1_VAL_MASK = 0x0000FFFF;    // If interval is enabled, this is the maximum value
const uintptr_t TTC_INTERVAL_CNT1_VAL_BPOS = 0;             // that the counter will count up to or down from.


//------------------------------------------------------------------------------
//
// Register (TTC) INTERVAL_CNT2
//
// Name                     TTC_INTERVAL_CNT2_REG
// Relative Address         0x00000028
// Absolute Address         ttc0: 0xF8001028
//                          ttc1: 0xF8002028
// Width                    16 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Interval value
//
// Register TTC_INTERVAL_CNT2_REG Details
//
                                                            // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_INTERVAL_CNT2_VAL_MASK = 0x0000FFFF;    // If interval is enabled, this is the maximum value
const uintptr_t TTC_INTERVAL_CNT2_VAL_BPOS = 0;             // that the counter will count up to or down from.


//------------------------------------------------------------------------------
//
// Register (TTC) INTERVAL_CNT3
//
// Name                     TTC_INTERVAL_CNT3_REG
// Relative Address         0x0000002C
// Absolute Address         ttc0: 0xF800102C
//                          ttc1: 0xF800202C
// Width                    16 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Interval value
//
// Register TTC_INTERVAL_CNT3_REG Details
//
                                                            // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_INTERVAL_CNT3_VAL_MASK = 0x0000FFFF;    // If interval is enabled, this is the maximum value
const uintptr_t TTC_INTERVAL_CNT3_VAL_BPOS = 0;             // that the counter will count up to or down from.


//------------------------------------------------------------------------------
//
// Register (TTC) MATCH1_CNT1
//
// Name                     TTC_MATCH1_CNT1_REG
// Software Name            MATCH_0
// Relative Address         0x00000030
// Absolute Address         ttc0: 0xF8001030
//                          ttc1: 0xF8002030
// Width                    16 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Match value
//
// Register TTC_MATCH1_CNT1_REG Details
//
                                                          // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_MATCH1_CNT1_VAL_MASK = 0x0000FFFF;    // When a counter has the same value as is stored in
const uintptr_t TTC_MATCH1_CNT1_VAL_BPOS = 0;             // one of its match registers and match mode is
                                                          // enabled, a match interrupt is generated. Each
                                                          // counter has three match registers.


//------------------------------------------------------------------------------
//
// Register (TTC) MATCH1_CNT2
//
// Name                     TTC_MATCH1_CNT2_REG
// Relative Address         0x00000034
// Absolute Address         ttc0: 0xF8001034
//                          ttc1: 0xF8002034
// Width                    16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Match value
//
// Register TTC_MATCH1_CNT2_REG Details
//
                                                          // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_MATCH1_CNT2_VAL_MASK = 0x0000FFFF;    // When a counter has the same value as is stored in
const uintptr_t TTC_MATCH1_CNT2_VAL_BPOS = 0;             // one of its match registers and match mode is
                                                          // enabled, a match interrupt is generated. Each
                                                          // counter has three match registers.


//------------------------------------------------------------------------------
//
// Register (TTC) MATCH1_CNT3
//
// Name                    TTC_MATCH1_CNT3_REG
// Relative Address        0x00000038
// Absolute Address        ttc0: 0xF8001038
//                         ttc1: 0xF8002038
// Width                   16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Match value
//
// Register TTC_MATCH1_CNT3_REG Details
//
                                                          // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_MATCH1_CNT3_VAL_MASK = 0x0000FFFF;    // When a counter has the same value as is stored in
const uintptr_t TTC_MATCH1_CNT3_VAL_BPOS = 0;             // one of its match registers and match mode is
                                                          // enabled, a match interrupt is generated. Each
                                                          // counter has three match registers.


//------------------------------------------------------------------------------
//
// Register (TTC) MATCH2_CNT1
//
// Name                    TTC_MATCH2_CNT1_REG
// Software Name           MATCH_1
// Relative Address        0x0000003C
// Absolute Address        ttc0: 0xF800103C
//                         ttc1: 0xF800203C
// Width                   16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Match value
//
// Register TTC_MATCH2_CNT1_REG Details
//
                                                          // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_MATCH2_CNT1_VAL_MASK = 0x0000FFFF;    // When a counter has the same value as is stored in
const uintptr_t TTC_MATCH2_CNT1_VAL_BPOS = 0;             // one of its match registers and match mode is
                                                          // enabled, a match interrupt is generated. Each
                                                          // counter has three match registers.


//------------------------------------------------------------------------------
//
// Register (TTC) MATCH2_CNT2
//
// Name                    TTC_MATCH2_CNT2_REG
// Relative Address        0x00000040
// Absolute Address        ttc0: 0xF8001040
//                         ttc1: 0xF8002040
// Width                   16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Match value
//
// Register TTC_MATCH2_CNT2_REG Details
//
                                                          // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_MATCH2_CNT2_VAL_MASK = 0x0000FFFF;    // When a counter has the same value as is stored in
const uintptr_t TTC_MATCH2_CNT2_VAL_BPOS = 0;             // one of its match registers and match mode is
                                                          // enabled, a match interrupt is generated. Each
                                                          // counter has three match registers.


//------------------------------------------------------------------------------
//
// Register (TTC) MATCH2_CNT3
//
// Name                    TTC_MATCH2_CNT3_REG
// Relative Address        0x00000044
// Absolute Address        ttc0: 0xF8001044
//                         ttc1: 0xF8002044
// Width                   16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Match value
//
// Register TTC_MATCH2_CNT3_REG Details
//
                                                          // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_MATCH2_CNT3_VAL_MASK = 0x0000FFFF;    // When a counter has the same value as is stored in
const uintptr_t TTC_MATCH2_CNT3_VAL_BPOS = 0;             // one of its match registers and match mode is
                                                          // enabled, a match interrupt is generated. Each
                                                          // counter has three match registers.


//------------------------------------------------------------------------------
//
// Register (TTC) MATCH3_CNT1
//
// Name                    TTC_MATCH3_CNT1_REG
// Software Name           MATCH_2
// Relative Address        0x00000048
// Absolute Address        ttc0: 0xF8001048
//                         ttc1: 0xF8002048
// Width                   16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Match value
//
// Register TTC_MATCH3_CNT1_REG Details
//
                                                          // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_MATCH3_CNT1_VAL_MASK = 0x0000FFFF;    // When a counter has the same value as is stored in
const uintptr_t TTC_MATCH3_CNT1_VAL_BPOS = 0;             // one of its match registers and match mode is
                                                          // enabled, a match interrupt is generated. Each
                                                          // counter has three match registers.


//------------------------------------------------------------------------------
//
// Register (TTC) MATCH3_CNT2
//
// Name                    TTC_MATCH3_CNT2_REG
// Relative Address        0x0000004C
// Absolute Address        ttc0: 0xF800104C
//                         ttc1: 0xF800204C
// Width                   16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Match value
//
// Register TTC_MATCH3_CNT2_REG Details
//
                                                          // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_MATCH3_CNT2_VAL_MASK = 0x0000FFFF;    // When a counter has the same value as is stored in
const uintptr_t TTC_MATCH3_CNT2_VAL_BPOS = 0;             // one of its match registers and match mode is
                                                          // enabled, a match interrupt is generated. Each
                                                          // counter has three match registers.


//------------------------------------------------------------------------------
//
// Register (TTC) MATCH3_CNT3
//
// Name                    TTC_MATCH3_CNT3_REG
// Relative Address        0x00000050
// Absolute Address        ttc0: 0xF8001050
//                         ttc1: 0xF8002050
// Width                   16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Match value
//
// Register TTC_MATCH3_CNT3_REG Details
//
                                                          // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_MATCH3_CNT3_VAL_MASK = 0x0000FFFF;    // When a counter has the same value as is stored in
const uintptr_t TTC_MATCH3_CNT3_VAL_BPOS = 0;             // one of its match registers and match mode is
                                                          // enabled, a match interrupt is generated. Each
                                                          // counter has three match registers.


//------------------------------------------------------------------------------
//
// Register (TTC) INT1
//
// Name                    TTC_INT1_REG
// Software Name           ISR
// Relative Address        0x00000054
// Absolute Address        ttc0: 0xF8001054
//                         ttc1: 0xF8002054
// Width                   6 bits
// Access Type             clronrd
// Reset Value             0x00000000
// Description             Counter 1 Interval, Match, Overflow
//                         and Event interrupts
//
// Register TTC_INT1_REG Details
//
                                                  // Properties: Bit: 5, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT1_EV_MASK = 0x00000020;    // Event timer overflow interrupt
const uintptr_t TTC_INT1_EV_BPOS = 5;             // 

                                                  // Properties: Bit: 4, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT1_OV_MASK = 0x00000010;    // Counter overflow
const uintptr_t TTC_INT1_OV_BPOS = 4;             // 

                                                  // Properties: Bit: 3, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT1_M3_MASK = 0x00000008;    // Match 3 interrupt
const uintptr_t TTC_INT1_M3_BPOS = 3;             // 

                                                  // Properties: Bit: 2, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT1_M2_MASK = 0x00000004;    // Match 2 interrupt
const uintptr_t TTC_INT1_M2_BPOS = 2;             // 

                                                  // Properties: Bit: 1, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT1_M1_MASK = 0x00000002;    // Match 1 interrupt
const uintptr_t TTC_INT1_M1_BPOS = 1;             // 

                                                  // Properties: Bit: 0, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT1_IV_MASK = 0x00000001;    // Interval interrupt
const uintptr_t TTC_INT1_IV_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TTC) INT2
//
// Name                    TTC_INT2_REG
// Relative Address        0x00000058
// Absolute Address        ttc0: 0xF8001058
//                         ttc1: 0xF8002058
// Width                   6 bits
// Access Type             clronrd
// Reset Value             0x00000000
// Description             Counter 2 Interval, Match, Overflow and Event interrupts
//
// Register TTC_INT2_REG Details
//
                                                  // Properties: Bit: 5, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT2_EV_MASK = 0x00000020;    // Event timer overflow interrupt
const uintptr_t TTC_INT2_EV_BPOS = 5;             // 

                                                  // Properties: Bit: 4, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT2_OV_MASK = 0x00000010;    // Counter overflow
const uintptr_t TTC_INT2_OV_BPOS = 4;             // 

                                                  // Properties: Bit: 3, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT2_M3_MASK = 0x00000008;    // Match 3 interrupt
const uintptr_t TTC_INT2_M3_BPOS = 3;             // 

                                                  // Properties: Bit: 2, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT2_M2_MASK = 0x00000004;    // Match 2 interrupt
const uintptr_t TTC_INT2_M2_BPOS = 2;             // 

                                                  // Properties: Bit: 1, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT2_M1_MASK = 0x00000002;    // Match 1 interrupt
const uintptr_t TTC_INT2_M1_BPOS = 1;             // 

                                                  // Properties: Bit: 0, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT2_IV_MASK = 0x00000001;    // Interval interrupt
const uintptr_t TTC_INT2_IV_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TTC) INT3
//
// Name                    TTC_INT3_REG
// Relative Address        0x0000005C
// Absolute Address        ttc0: 0xF800105C
//                         ttc1: 0xF800205C
// Width                   6 bits
// Access Type             clronrd
// Reset Value             0x00000000
// Description             Counter 3 Interval, Match, Overflow and Event interrupts
//
// Register TTC_INT3_REG Details
//
                                                  // Properties: Bit: 5, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT3_EV_MASK = 0x00000020;    // Event timer overflow interrupt
const uintptr_t TTC_INT3_EV_BPOS = 5;             // 

                                                  // Properties: Bit: 4, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT3_OV_MASK = 0x00000010;    // Counter overflow
const uintptr_t TTC_INT3_OV_BPOS = 4;             // 

                                                  // Properties: Bit: 3, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT3_M3_MASK = 0x00000008;    // Match 3 interrupt
const uintptr_t TTC_INT3_M3_BPOS = 3;             // 

                                                  // Properties: Bit: 2, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT3_M2_MASK = 0x00000004;    // Match 2 interrupt
const uintptr_t TTC_INT3_M2_BPOS = 2;             // 

                                                  // Properties: Bit: 1, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT3_M1_MASK = 0x00000002;    // Match 1 interrupt
const uintptr_t TTC_INT3_M1_BPOS = 1;             // 

                                                  // Properties: Bit: 0, Type: clronrd, Reset Value: 0x0
const uintptr_t TTC_INT3_IV_MASK = 0x00000001;    // Interval interrupt
const uintptr_t TTC_INT3_IV_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (TTC) INT_EN1
//
// Name                    TTC_INT_EN1_REG
// Software Name           IER
// Relative Address        0x00000060
// Absolute Address        ttc0: 0xF8001060
//                         ttc1: 0xF8002060
// Width                   6 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ANDed with corresponding Interrupt
//                         Register
//
// Register TTC_INT_EN1_REG Details
//
                                                      // Properties: Bits: 5:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_INT_EN1_IEN_MASK = 0x0000003F;    // Enables for bits 05:00 in Interrupt Register:
const uintptr_t TTC_INT_EN1_IEN_BPOS = 0;             // corresponding bits must be set to enable the
                                                      // interrupt.


//------------------------------------------------------------------------------
//
// Register (TTC) INT_EN2
//
// Name                    TTC_INT_EN2_REG
// Relative Address        0x00000064
// Absolute Address        ttc0: 0xF8001064
//                         ttc1: 0xF8002064
// Width                   6 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ANDed with corresponding Interrupt
//                         Register
//
// Register TTC_INT_EN2_REG Details
//
                                                      // Properties: Bits: 5:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_INT_EN2_IEN_MASK = 0x0000003F;    // Enables for bits 05:00 in Interrupt Register:
const uintptr_t TTC_INT_EN2_IEN_BPOS = 0;             // corresponding bits must be set to enable the
                                                      // interrupt.


//------------------------------------------------------------------------------
//
// Register (TTC) INT_EN3
//
// Name                    TTC_INT_EN3_REG
// Relative Address        0x00000068
// Absolute Address        ttc0: 0xF8001068
//                         ttc1: 0xF8002068
// Width                   6 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ANDed with corresponding Interrupt Register
//
// Register TTC_INT_EN3_REG Details
//
                                                      // Properties: Bits: 5:0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_INT_EN3_IEN_MASK = 0x0000003F;    // Enables for bits 05:00 in Interrupt Register:
const uintptr_t TTC_INT_EN3_IEN_BPOS = 0;             // corresponding bits must be set to enable the
                                                      // interrupt.


//------------------------------------------------------------------------------
//
// Register (TTC) EVENT_CTRL_TMR1
//
// Name                     TTC_EVENT_CTRL_TMR1_REG
// Relative Address         0x0000006C
// Absolute Address         ttc0: 0xF800106C
//                          ttc1: 0xF800206C
// Width                    3 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Enable, pulse and overflow
//
// Register TTC_EVENT_CTRL_TMR1_REG Details
//
                                                               // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t TTC_EVENT_CTRL_TMR1_E_OV_MASK = 0x00000004;    // When this bit is low, the event timer is disabled
const uintptr_t TTC_EVENT_CTRL_TMR1_E_OV_BPOS = 2;             // and set to zero when an Event Timer Register
                                                               // overflow occurs; when set high, the timer
                                                               // continues counting on overflow.

                                                               // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t TTC_EVENT_CTRL_TMR1_E_LO_MASK = 0x00000002;    // When this bit is high, the timer counts pclk cycles
const uintptr_t TTC_EVENT_CTRL_TMR1_E_LO_BPOS = 1;             // during the low level duration of ext_clk; when
                                                               // low, the event timer counts the high level duration
                                                               // of ext_clk.

                                                               // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_EVENT_CTRL_TMR1_E_EN_MASK = 0x00000001;    // Enable timer: when this bit is high, the event timer
const uintptr_t TTC_EVENT_CTRL_TMR1_E_EN_BPOS = 0;             // is enabled.


//------------------------------------------------------------------------------
//
// Register (TTC) EVENT_CTRL_TMR2
//
// Name                     TTC_EVENT_CTRL_TMR2_REG
// Relative Address         0x00000070
// Absolute Address         ttc0: 0xF8001070
//                          ttc1: 0xF8002070
// Width                    3 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Enable, pulse and overflow
//
// Register TTC_EVENT_CTRL_TMR2_REG Details
//
                                                               // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t TTC_EVENT_CTRL_TMR2_E_OV_MASK = 0x00000004;    // When this bit is low, the event timer is disabled
const uintptr_t TTC_EVENT_CTRL_TMR2_E_OV_BPOS = 2;             // and set to zero when an Event Timer Register
                                                               // overflow occurs; when set high, the timer
                                                               // continues counting on overflow.

                                                               // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t TTC_EVENT_CTRL_TMR2_E_LO_MASK = 0x00000002;    // When this bit is high, the timer counts pclk cycles
const uintptr_t TTC_EVENT_CTRL_TMR2_E_LO_BPOS = 1;             // during the low level duration of ext_clk; when
                                                               // low, the event timer counts the high level duration
                                                               // of ext_clk.

                                                               // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_EVENT_CTRL_TMR2_E_EN_MASK = 0x00000001;    // Enable timer: when this bit is high, the event timer
const uintptr_t TTC_EVENT_CTRL_TMR2_E_EN_BPOS = 0;             // is enabled.


//------------------------------------------------------------------------------
//
// Register (TTC) EVENT_CTRL_TMR3
//
// Name                     TTC_EVENT_CTRL_TMR3_REG
// Relative Address         0x00000074
// Absolute Address         ttc0: 0xF8001074
//                          ttc1: 0xF8002074
// Width                    3 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Enable, pulse and overflow
//
// Register TTC_EVENT_CTRL_TMR3_REG Details
//
                                                               // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t TTC_EVENT_CTRL_TMR3_E_OV_MASK = 0x00000004;    // When this bit is low, the event timer is disabled
const uintptr_t TTC_EVENT_CTRL_TMR3_E_OV_BPOS = 2;             // and set to zero when an Event Timer Register
                                                               // overflow occurs; when set high, the timer
                                                               // continues counting on overflow.

                                                               // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t TTC_EVENT_CTRL_TMR3_E_LO_MASK = 0x00000002;    // When this bit is high, the timer counts pclk cycles
const uintptr_t TTC_EVENT_CTRL_TMR3_E_LO_BPOS = 1;             // during the low level duration of ext_clk; when
                                                               // low, the event timer counts the high level duration
                                                               // of ext_clk.

                                                               // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t TTC_EVENT_CTRL_TMR3_E_EN_MASK = 0x00000001;    // Enable timer: when this bit is high, the event timer
const uintptr_t TTC_EVENT_CTRL_TMR3_E_EN_BPOS = 0;             // is enabled.


//------------------------------------------------------------------------------
//
// Register (TTC) EVENT1
//
// Name                     TTC_EVENT1_REG
// Relative Address         0x00000078
// Absolute Address         ttc0: 0xF8001078
//                          ttc1: 0xF8002078
// Width                    16 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              pclk cycle count for event
//
// Register TTC_EVENT1_REG Details
//
                                                     // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t TTC_EVENT1_VAL_MASK = 0x0000FFFF;    // This register stores the result of the pclk count
const uintptr_t TTC_EVENT1_VAL_BPOS = 0;             // during the ext_clk high or low pulse.


//------------------------------------------------------------------------------
//
// Register (TTC) EVENT2
//
// Name                     TTC_EVENT2_REG
// Relative Address         0x0000007C
// Absolute Address         ttc0: 0xF800107C
//                          ttc1: 0xF800207C
// Width                    16 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              pclk cycle count for event
//
// Register TTC_EVENT2_REG Details
//
                                                     // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t TTC_EVENT2_VAL_MASK = 0x0000FFFF;    // This register stores the result of the pclk count
const uintptr_t TTC_EVENT2_VAL_BPOS = 0;             // during the ext_clk high or low pulse.


//------------------------------------------------------------------------------
//
// Register (TTC) EVENT3
//
// Name                    TTC_EVENT3_REG
// Relative Address        0x00000080
// Absolute Address        ttc0: 0xF8001080
//                         ttc1: 0xF8002080
// Width                   16 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             pclk cycle count for event
//
// Register TTC_EVENT3_REG Details
//
                                                     // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t TTC_EVENT3_VAL_MASK = 0x0000FFFF;    // This register stores the result of the pclk count
const uintptr_t TTC_EVENT3_VAL_BPOS = 0;             // during the ext_clk high or low pulse.


#endif // PS7_TTC_H

