//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_SWDT
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

#ifndef PS7_SWDT_H
#define PS7_SWDT_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    SWDT MMRs
//
//              Name               Address                   Width   Type     Reset Value   Description
const uintptr_t SWDT_MODE_REG    = SWDT_ADDR + 0x00000000; //  24    mixed    0x000001C0    WD zero mode register
const uintptr_t SWDT_CTRL_REG    = SWDT_ADDR + 0x00000004; //  26    mixed    0x00003FFC    Counter Control Register
const uintptr_t SWDT_RESTART_REG = SWDT_ADDR + 0x00000008; //  16    wo       0x00000000    Restart key register - this not a real register as no data is stored
const uintptr_t SWDT_STS_REG     = SWDT_ADDR + 0x0000000C; //   1    ro       0x00000000    Status Register
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (SWDT) MODE
//
// Name                    SWDT_MODE_REG
// Software Name           ZMR
// Relative Address        0x00000000
// Absolute Address        0xF8005000
// Width                   24 bits
// Access Type             mixed
// Reset Value             0x000001C0
// Description             WD zero mode register
//
// Register SWDT_MODE_REG Details
//
                                                      // Properties: Bits: 23:12, Type: wo, Reset Value: 0x0
const uintptr_t SWDT_MODE_ZKEY_MASK  = 0x00FFF000;    // Zero access key - writes to the zero mode register
const uintptr_t SWDT_MODE_ZKEY_BPOS  = 12;            // are only valid if this field is set to 0xABC; this field
                                                      // is write only.

// RESERVED                                              Properties: Bits: 11:9, Type: waz, Reset Value: 0x0

                                                      // Properties: Bits: 8:7, Type: rw, Reset Value: 0x3
const uintptr_t SWDT_MODE_IRQLN_MASK = 0x00000180;    // Interrupt request length - selects the number of
const uintptr_t SWDT_MODE_IRQLN_BPOS = 7;             // pclk cycles during which an interrupt request is
                                                      // held active after it is invoked:
                                                      // 00 = 4
                                                      // 01 = 8
                                                      // 10 = 16
                                                      // 11 = 32

// RESERVED                                              Properties: Bits: 6:4, Type: rw, Reset Value: 0x4

// RESERVED                                              Properties: Bit: 3, Type: waz, Reset Value: 0x0

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t SWDT_MODE_IRQEN_MASK = 0x00000004;    // Interrupt request enable - if set, the watchdog will
const uintptr_t SWDT_MODE_IRQEN_BPOS = 2;             // issue an interrupt request when the counter
                                                      // reaches zero, if WDEN = 1.

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t SWDT_MODE_RSTEN_MASK = 0x00000002;    // Reset enable - if set, the watchdog will issue an
const uintptr_t SWDT_MODE_RSTEN_BPOS = 1;             // internal reset when the counter reaches zero, if
                                                      // WDEN = 1.

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t SWDT_MODE_WDEN_MASK  = 0x00000001;    // Watchdog enable - if set, the watchdog is enabled
const uintptr_t SWDT_MODE_WDEN_BPOS  = 0;             // and can generate any signals that are enabled.


//------------------------------------------------------------------------------
//
// Register (SWDT) CTRL
//
// Name                    SWDT_CTRL_REG
// Software Name           CCR
// Relative Address        0x00000004
// Absolute Address        0xF8005004
// Width                   26 bits
// Access Type             mixed
// Reset Value             0x00003FFC
// Description             Counter Control Register
//
// Register SWDT_CTRL_REG Details
//
                                                       // Properties: Bits: 25:14, Type: wo, Reset Value: 0x0
const uintptr_t SWDT_CTRL_CKEY_MASK   = 0x03FFC000;    // Counter access key - writes to the control register
const uintptr_t SWDT_CTRL_CKEY_BPOS   = 14;            // are only valid if this field is set to 0x248; this field
                                                       // is write only.

                                                       // Properties: Bits: 13:2, Type: rw, Reset Value: 0xFFF
const uintptr_t SWDT_CTRL_CRV_MASK    = 0x00003FFC;    // Counter restart value - the counter is restarted
const uintptr_t SWDT_CTRL_CRV_BPOS    = 2;             // with the value 0xNNNFFF, where NNN is the
                                                       // value of this field.

                                                       // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t SWDT_CTRL_CLKSEL_MASK = 0x00000003;    // Counter clock prescale - selects the prescaler
const uintptr_t SWDT_CTRL_CLKSEL_BPOS = 0;             // division ratio:
                                                       // 00 = pclk divided by 8
                                                       // 01 = pclk divided by 64
                                                       // 10 = pclk divided by 512
                                                       // 11 = pclk divided by 4096
                                                       // Note: If a restart signal is received the prescaler
                                                       // should be reset.


//------------------------------------------------------------------------------
//
// Register (SWDT) RESTART
//
// Name                    SWDT_RESTART_REG
// Relative Address        0x00000008
// Absolute Address        0xF8005008
// Width                   16 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Restart key register - this not a real register as no data is stored
//
// Register SWDT_RESTART_REG Details
//
                                                          // Properties: Bits: 15:0, Type: wo, Reset Value: 0x0
const uintptr_t SWDT_RESTART_RSTKEY_MASK = 0x0000FFFF;    // Restart key - the watchdog is restarted if this field
const uintptr_t SWDT_RESTART_RSTKEY_BPOS = 0;             // is set to the value 0x1999


//------------------------------------------------------------------------------
//
// Register (SWDT) STS
//
// Name                    SWDT_STS_REG
// Software Name           SR
// Relative Address        0x0000000C
// Absolute Address        0xF800500C
// Width                   1 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Status Register
//
// Register SWDT_STS_REG Details
//
                                                   // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t SWDT_STS_WDZ_MASK = 0x00000001;    // set when the watchdog reaches zero count
const uintptr_t SWDT_STS_WDZ_BPOS = 0;             // 


#endif // PS7_SWDT_H

