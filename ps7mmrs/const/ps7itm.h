//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_ITM
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

#ifndef PS7_ITM_H
#define PS7_ITM_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    ITM MMRs
//
//              Name                   Address                        Width   Type     Reset Value   Description
const uintptr_t ITM_STIMPORT00_REG   = DEBUG_ITM_ADDR + 0x00000000; //  32    rw       0x00000000    Stimulus Port Register 0
const uintptr_t ITM_STIMPORT01_REG   = DEBUG_ITM_ADDR + 0x00000004; //  32    rw       0x00000000    Stimulus Port Register 1
const uintptr_t ITM_STIMPORT02_REG   = DEBUG_ITM_ADDR + 0x00000008; //  32    rw       0x00000000    Stimulus Port Register 2
const uintptr_t ITM_STIMPORT03_REG   = DEBUG_ITM_ADDR + 0x0000000C; //  32    rw       0x00000000    Stimulus Port Register 3
const uintptr_t ITM_STIMPORT04_REG   = DEBUG_ITM_ADDR + 0x00000010; //  32    rw       0x00000000    Stimulus Port Register 4
const uintptr_t ITM_STIMPORT05_REG   = DEBUG_ITM_ADDR + 0x00000014; //  32    rw       0x00000000    Stimulus Port Register 5
const uintptr_t ITM_STIMPORT06_REG   = DEBUG_ITM_ADDR + 0x00000018; //  32    rw       0x00000000    Stimulus Port Register 6
const uintptr_t ITM_STIMPORT07_REG   = DEBUG_ITM_ADDR + 0x0000001C; //  32    rw       0x00000000    Stimulus Port Register 7
const uintptr_t ITM_STIMPORT08_REG   = DEBUG_ITM_ADDR + 0x00000020; //  32    rw       0x00000000    Stimulus Port Register 8
const uintptr_t ITM_STIMPORT09_REG   = DEBUG_ITM_ADDR + 0x00000024; //  32    rw       0x00000000    Stimulus Port Register 9
const uintptr_t ITM_STIMPORT10_REG   = DEBUG_ITM_ADDR + 0x00000028; //  32    rw       0x00000000    Stimulus Port Register 10
const uintptr_t ITM_STIMPORT11_REG   = DEBUG_ITM_ADDR + 0x0000002C; //  32    rw       0x00000000    Stimulus Port Register 11
const uintptr_t ITM_STIMPORT12_REG   = DEBUG_ITM_ADDR + 0x00000030; //  32    rw       0x00000000    Stimulus Port Register 12
const uintptr_t ITM_STIMPORT13_REG   = DEBUG_ITM_ADDR + 0x00000034; //  32    rw       0x00000000    Stimulus Port Register 13
const uintptr_t ITM_STIMPORT14_REG   = DEBUG_ITM_ADDR + 0x00000038; //  32    rw       0x00000000    Stimulus Port Register 14
const uintptr_t ITM_STIMPORT15_REG   = DEBUG_ITM_ADDR + 0x0000003C; //  32    rw       0x00000000    Stimulus Port Register 15
const uintptr_t ITM_STIMPORT16_REG   = DEBUG_ITM_ADDR + 0x00000040; //  32    rw       0x00000000    Stimulus Port Register 16
const uintptr_t ITM_STIMPORT17_REG   = DEBUG_ITM_ADDR + 0x00000044; //  32    rw       0x00000000    Stimulus Port Register 17
const uintptr_t ITM_STIMPORT18_REG   = DEBUG_ITM_ADDR + 0x00000048; //  32    rw       0x00000000    Stimulus Port Register 18
const uintptr_t ITM_STIMPORT19_REG   = DEBUG_ITM_ADDR + 0x0000004C; //  32    rw       0x00000000    Stimulus Port Register 19
const uintptr_t ITM_STIMPORT20_REG   = DEBUG_ITM_ADDR + 0x00000050; //  32    rw       0x00000000    Stimulus Port Register 20
const uintptr_t ITM_STIMPORT21_REG   = DEBUG_ITM_ADDR + 0x00000054; //  32    rw       0x00000000    Stimulus Port Register 21
const uintptr_t ITM_STIMPORT22_REG   = DEBUG_ITM_ADDR + 0x00000058; //  32    rw       0x00000000    Stimulus Port Register 22
const uintptr_t ITM_STIMPORT23_REG   = DEBUG_ITM_ADDR + 0x0000005C; //  32    rw       0x00000000    Stimulus Port Register 23
const uintptr_t ITM_STIMPORT24_REG   = DEBUG_ITM_ADDR + 0x00000060; //  32    rw       0x00000000    Stimulus Port Register 24
const uintptr_t ITM_STIMPORT25_REG   = DEBUG_ITM_ADDR + 0x00000064; //  32    rw       0x00000000    Stimulus Port Register 25
const uintptr_t ITM_STIMPORT26_REG   = DEBUG_ITM_ADDR + 0x00000068; //  32    rw       0x00000000    Stimulus Port Register 26
const uintptr_t ITM_STIMPORT27_REG   = DEBUG_ITM_ADDR + 0x0000006C; //  32    rw       0x00000000    Stimulus Port Register 27
const uintptr_t ITM_STIMPORT28_REG   = DEBUG_ITM_ADDR + 0x00000070; //  32    rw       0x00000000    Stimulus Port Register 28
const uintptr_t ITM_STIMPORT29_REG   = DEBUG_ITM_ADDR + 0x00000074; //  32    rw       0x00000000    Stimulus Port Register 29
const uintptr_t ITM_STIMPORT30_REG   = DEBUG_ITM_ADDR + 0x00000078; //  32    rw       0x00000000    Stimulus Port Register 30
const uintptr_t ITM_STIMPORT31_REG   = DEBUG_ITM_ADDR + 0x0000007C; //  32    rw       0x00000000    Stimulus Port Register 31
const uintptr_t ITM_TER_REG          = DEBUG_ITM_ADDR + 0x00000E00; //  32    rw       0x00000000    Trace Enable Register
const uintptr_t ITM_TTR_REG          = DEBUG_ITM_ADDR + 0x00000E20; //  32    rw       0x00000000    Trace Trigger Register
const uintptr_t ITM_CR_REG           = DEBUG_ITM_ADDR + 0x00000E80; //  24    mixed    0x00000004    Control Register
const uintptr_t ITM_SCR_REG          = DEBUG_ITM_ADDR + 0x00000E90; //  12    rw       0x00000400    Synchronization Control Register
const uintptr_t ITM_ITTRIGOUTACK_REG = DEBUG_ITM_ADDR + 0x00000EE4; //   1    ro       0x00000000    Integration Test Trigger Out Acknowledge Register
const uintptr_t ITM_ITTRIGOUT_REG    = DEBUG_ITM_ADDR + 0x00000EE8; //   1    wo       0x00000000    Integration Test Trigger Out Register
const uintptr_t ITM_ITATBDATA0_REG   = DEBUG_ITM_ADDR + 0x00000EEC; //   2    wo       0x00000000    Integration Test ATB Data Register 0
const uintptr_t ITM_ITATBCTR2_REG    = DEBUG_ITM_ADDR + 0x00000EF0; //   1    ro       0x00000001    Integration Test ATB Control Register 2
const uintptr_t ITM_ITATABCTR1_REG   = DEBUG_ITM_ADDR + 0x00000EF4; //   7    wo       0x00000000    Integration Test ATB Control Register 1
const uintptr_t ITM_ITATBCTR0_REG    = DEBUG_ITM_ADDR + 0x00000EF8; //   2    wo       0x00000000    Integration Test ATB Control Register 0
const uintptr_t ITM_IMCR_REG         = DEBUG_ITM_ADDR + 0x00000F00; //   1    rw       0x00000000    Integration Mode Control Register
const uintptr_t ITM_CTSR_REG         = DEBUG_ITM_ADDR + 0x00000FA0; //   8    rw       0x000000FF    Claim Tag Set Register
const uintptr_t ITM_CTCR_REG         = DEBUG_ITM_ADDR + 0x00000FA4; //   8    rw       0x00000000    Claim Tag Clear Register
const uintptr_t ITM_LAR_REG          = DEBUG_ITM_ADDR + 0x00000FB0; //  32    wo       0x00000000    Lock Access Register
const uintptr_t ITM_LSR_REG          = DEBUG_ITM_ADDR + 0x00000FB4; //   3    ro       0x00000003    Lock Status Register
const uintptr_t ITM_ASR_REG          = DEBUG_ITM_ADDR + 0x00000FB8; //   8    ro       0x00000088    Authentication Status Register
const uintptr_t ITM_DEVID_REG        = DEBUG_ITM_ADDR + 0x00000FC8; //  13    ro       0x00000020    Device ID
const uintptr_t ITM_DTIR_REG         = DEBUG_ITM_ADDR + 0x00000FCC; //   8    ro       0x00000043    Device Type Identifier Register
const uintptr_t ITM_PERIPHID4_REG    = DEBUG_ITM_ADDR + 0x00000FD0; //   8    ro       0x00000004    Peripheral ID4
const uintptr_t ITM_PERIPHID5_REG    = DEBUG_ITM_ADDR + 0x00000FD4; //   8    ro       0x00000000    Peripheral ID5
const uintptr_t ITM_PERIPHID6_REG    = DEBUG_ITM_ADDR + 0x00000FD8; //   8    ro       0x00000000    Peripheral ID6
const uintptr_t ITM_PERIPHID7_REG    = DEBUG_ITM_ADDR + 0x00000FDC; //   8    ro       0x00000000    Peripheral ID7
const uintptr_t ITM_PERIPHID0_REG    = DEBUG_ITM_ADDR + 0x00000FE0; //   8    ro       0x00000013    Peripheral ID0
const uintptr_t ITM_PERIPHID1_REG    = DEBUG_ITM_ADDR + 0x00000FE4; //   8    ro       0x000000B9    Peripheral ID1
const uintptr_t ITM_PERIPHID2_REG    = DEBUG_ITM_ADDR + 0x00000FE8; //   8    ro       0x0000002B    Peripheral ID2
const uintptr_t ITM_PERIPHID3_REG    = DEBUG_ITM_ADDR + 0x00000FEC; //   8    ro       0x00000000    Peripheral ID3
const uintptr_t ITM_COMPID0_REG      = DEBUG_ITM_ADDR + 0x00000FF0; //   8    ro       0x0000000D    Component ID0
const uintptr_t ITM_COMPID1_REG      = DEBUG_ITM_ADDR + 0x00000FF4; //   8    ro       0x00000090    Component ID1
const uintptr_t ITM_COMPID2_REG      = DEBUG_ITM_ADDR + 0x00000FF8; //   8    ro       0x00000005    Component ID2
const uintptr_t ITM_COMPID3_REG      = DEBUG_ITM_ADDR + 0x00000FFC; //   8    ro       0x000000B1    Component ID3
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT00
//
// Name                    ITM_STIMPORT00_REG
// Relative Address        0x00000000
// Absolute Address        0xF8805000
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 0
//
// Register ITM_STIMPORT00_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT00_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT00_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT01
//
// Name                    ITM_STIMPORT01_REG
// Relative Address        0x00000004
// Absolute Address        0xF8805004
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 1
//
// Register ITM_STIMPORT01_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT01_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT01_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT02
//
// Name                    ITM_STIMPORT02_REG
// Relative Address        0x00000008
// Absolute Address        0xF8805008
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 2
//
// Register ITM_STIMPORT02_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT02_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT02_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT03
//
// Name                    ITM_STIMPORT03_REG
// Relative Address        0x0000000C
// Absolute Address        0xF880500C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 3
//
// Register ITM_STIMPORT03_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT03_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT03_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT04
//
// Name                    ITM_STIMPORT04_REG
// Relative Address        0x00000010
// Absolute Address        0xF8805010
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 4
//
// Register ITM_STIMPORT04_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT04_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT04_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT05
//
// Name                    ITM_STIMPORT05_REG
// Relative Address        0x00000014
// Absolute Address        0xF8805014
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 5
//
// Register ITM_STIMPORT05_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT05_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT05_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT06
//
// Name                    ITM_STIMPORT06_REG
// Relative Address        0x00000018
// Absolute Address        0xF8805018
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 6
//
// Register ITM_STIMPORT06_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT06_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT06_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT07
//
// Name                    ITM_STIMPORT07_REG
// Relative Address        0x0000001C
// Absolute Address        0xF880501C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 7
//
// Register ITM_STIMPORT07_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT07_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT07_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT08
//
// Name                    ITM_STIMPORT08_REG
// Relative Address        0x00000020
// Absolute Address        0xF8805020
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 8
//
// Register ITM_STIMPORT08_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT08_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT08_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT09
//
// Name                    ITM_STIMPORT09_REG
// Relative Address        0x00000024
// Absolute Address        0xF8805024
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 9
//
// Register ITM_STIMPORT09_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT09_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT09_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT10
//
// Name                    ITM_STIMPORT10_REG
// Relative Address        0x00000028
// Absolute Address        0xF8805028
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 10
//
// Register ITM_STIMPORT10_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT10_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT10_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT11
//
// Name                    ITM_STIMPORT11_REG
// Relative Address        0x0000002C
// Absolute Address        0xF880502C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 11
//
// Register ITM_STIMPORT11_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT11_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT11_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT12
//
// Name                    ITM_STIMPORT12_REG
// Relative Address        0x00000030
// Absolute Address        0xF8805030
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 12
//
// Register ITM_STIMPORT12_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT12_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT12_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT13
//
// Name                    ITM_STIMPORT13_REG
// Relative Address        0x00000034
// Absolute Address        0xF8805034
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 13
//
// Register ITM_STIMPORT13_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT13_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT13_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT14
//
// Name                    ITM_STIMPORT14_REG
// Relative Address        0x00000038
// Absolute Address        0xF8805038
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 14
//
// Register ITM_STIMPORT14_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT14_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT14_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT15
//
// Name                    ITM_STIMPORT15_REG
// Relative Address        0x0000003C
// Absolute Address        0xF880503C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 15
//
// Register ITM_STIMPORT15_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT15_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT15_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT16
//
// Name                    ITM_STIMPORT16_REG
// Relative Address        0x00000040
// Absolute Address        0xF8805040
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 16
//
// Register ITM_STIMPORT16_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT16_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT16_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT17
//
// Name                    ITM_STIMPORT17_REG
// Relative Address        0x00000044
// Absolute Address        0xF8805044
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 17
//
// Register ITM_STIMPORT17_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT17_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT17_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT18
//
// Name                    ITM_STIMPORT18_REG
// Relative Address        0x00000048
// Absolute Address        0xF8805048
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 18
//
// Register ITM_STIMPORT18_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT18_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT18_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT19
//
// Name                    ITM_STIMPORT19_REG
// Relative Address        0x0000004C
// Absolute Address        0xF880504C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 19
//
// Register ITM_STIMPORT19_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT19_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT19_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT20
//
// Name                    ITM_STIMPORT20_REG
// Relative Address        0x00000050
// Absolute Address        0xF8805050
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 20
//
// Register ITM_STIMPORT20_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT20_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT20_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT21
//
// Name                    ITM_STIMPORT21_REG
// Relative Address        0x00000054
// Absolute Address        0xF8805054
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 21
//
// Register ITM_STIMPORT21_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT21_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT21_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT22
//
// Name                    ITM_STIMPORT22_REG
// Relative Address        0x00000058
// Absolute Address        0xF8805058
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 22
//
// Register ITM_STIMPORT22_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT22_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT22_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT23
//
// Name                    ITM_STIMPORT23_REG
// Relative Address        0x0000005C
// Absolute Address        0xF880505C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 23
//
// Register ITM_STIMPORT23_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT23_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT23_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT24
//
// Name                    ITM_STIMPORT24_REG
// Relative Address        0x00000060
// Absolute Address        0xF8805060
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 24
//
// Register ITM_STIMPORT24_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT24_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT24_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT25
//
// Name                    ITM_STIMPORT25_REG
// Relative Address        0x00000064
// Absolute Address        0xF8805064
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 25
//
// Register ITM_STIMPORT25_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT25_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT25_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT26
//
// Name                    ITM_STIMPORT26_REG
// Relative Address        0x00000068
// Absolute Address        0xF8805068
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 26
//
// Register ITM_STIMPORT26_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT26_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT26_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT27
//
// Name                    ITM_STIMPORT27_REG
// Relative Address        0x0000006C
// Absolute Address        0xF880506C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 27
//
// Register ITM_STIMPORT27_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT27_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT27_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT28
//
// Name                    ITM_STIMPORT28_REG
// Relative Address        0x00000070
// Absolute Address        0xF8805070
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 28
//
// Register ITM_STIMPORT28_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT28_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT28_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT29
//
// Name                    ITM_STIMPORT29_REG
// Relative Address        0x00000074
// Absolute Address        0xF8805074
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 29
//
// Register ITM_STIMPORT29_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT29_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT29_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT30
//
// Name                    ITM_STIMPORT30_REG
// Relative Address        0x00000078
// Absolute Address        0xF8805078
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 30
//
// Register ITM_STIMPORT30_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT30_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT30_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) STIMPORT31
//
// Name                    ITM_STIMPORT31_REG
// Relative Address        0x0000007C
// Absolute Address        0xF880507C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Stimulus Port Register 31
//
// Register ITM_STIMPORT31_REG Details
//
                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_STIMPORT31_VAL_MASK = 0xFFFFFFFF;    // Each of the 32 stimulus ports is represented by a
const uintptr_t ITM_STIMPORT31_VAL_BPOS = 0;             // virtual address, creating 32 stimulus registers. A
                                                         // write to one of these locations causes data to be
                                                         // written into the FIFO if the corresponding bit in
                                                         // the Trace Enable Register is set and ITM is
                                                         // enabled. Reading from any of the stimulus ports
                                                         // returns the FIFO status (notFull(1) / Full(0)) only
                                                         // if the ITM is enabled. This enables more efficient
                                                         // core register allocation because the stimulus
                                                         // address has already been generated.
                                                         // The ITM transmits SWIT packets using leading
                                                         // zero compression. Packets can be 8, 16, or 32 bits.
                                                         // The bank of 32 registers is split into a low-16 (0 to
                                                         // 15) and a high-16 (16 to 31). Writes to the high-16
                                                         // are discarded by the ITM whenever secure
                                                         // non-invasive trace is disabled, regardless of how
                                                         // the Trace Enable Register bits [31:16] are set. Both
                                                         // the high-16 and
                                                         // low-16 are be disabled when non-invasive trace is
                                                         // disabled. When an input is disabled it must not
                                                         // alter the interface response and must always
                                                         // return an OK without stalling.


//------------------------------------------------------------------------------
//
// Register (ITM) TER
//
// Name                    ITM_TER_REG
// Relative Address        0x00000E00
// Absolute Address        0xF8805E00
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Trace Enable Register
//
// Register ITM_TER_REG Details
//
                                                  // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_TER_VAL_MASK = 0xFFFFFFFF;    // Bit mask to enable tracing on ITM stimulus ports.
const uintptr_t ITM_TER_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) TTR
//
// Name                    ITM_TTR_REG
// Relative Address        0x00000E20
// Absolute Address        0xF8805E20
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Trace Trigger Register
//
// Register ITM_TTR_REG Details
//
                                                  // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_TTR_VAL_MASK = 0xFFFFFFFF;    // Bit mask to enable trigger generation, TRIGOUT,
const uintptr_t ITM_TTR_VAL_BPOS = 0;             // on selected writes to the Stimulus Registers.


//------------------------------------------------------------------------------
//
// Register (ITM) CR
//
// Name                    ITM_CR_REG
// Relative Address        0x00000E80
// Absolute Address        0xF8805E80
// Width                   24 bits
// Access Type             mixed
// Reset Value             0x00000004
// Description             Control Register
//
// Register ITM_CR_REG Details
//
                                                        // Properties: Bit: 23, Type: rw, Reset Value: 0x0
const uintptr_t ITM_CR_ITMBUSY_MASK    = 0x00800000;    // ITM is transmitting trace and FIFO is not empty
const uintptr_t ITM_CR_ITMBUSY_BPOS    = 23;            // 

                                                        // Properties: Bits: 22:16, Type: rw, Reset Value: 0x0
const uintptr_t ITM_CR_TRACE_ID_MASK   = 0x007F0000;    // ATIDM[6:0] value
const uintptr_t ITM_CR_TRACE_ID_BPOS   = 16;            // 

// RESERVED                                                Properties: Bits: 15:10, Type: ro, Reset Value: 0x0

                                                        // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t ITM_CR_TSPRESCALE_MASK = 0x00000300;    // Timestamp Prescaler
const uintptr_t ITM_CR_TSPRESCALE_BPOS = 8;             // Enumerated Value List:
                                                        // DIVBY1=0.
                                                        // DIVBY4=1.
                                                        // DIVBY16=2.
                                                        // DIVBY64=3.

// RESERVED                                                Properties: Bits: 7:4, Type: ro, Reset Value: 0x0

                                                        // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t ITM_CR_DWTEN_MASK      = 0x00000008;    // Enable DWT input port
const uintptr_t ITM_CR_DWTEN_BPOS      = 3;             // 

                                                        // Properties: Bit: 2, Type: ro, Reset Value: 0x1
const uintptr_t ITM_CR_SYNCEN_MASK     = 0x00000004;    // Enable sync packets
const uintptr_t ITM_CR_SYNCEN_BPOS     = 2;             // 

                                                        // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t ITM_CR_TSSEN_MASK      = 0x00000002;    // Enable timestamps, delta
const uintptr_t ITM_CR_TSSEN_BPOS      = 1;             // 

                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_CR_ITMEN_MASK      = 0x00000001;    // Enable ITM Stimulus, also acts as a global enable
const uintptr_t ITM_CR_ITMEN_BPOS      = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) SCR
//
// Name                    ITM_SCR_REG
// Relative Address        0x00000E90
// Absolute Address        0xF8805E90
// Width                   12 bits
// Access Type             rw
// Reset Value             0x00000400
// Description             Synchronization Control Register
//
// Register ITM_SCR_REG Details
//
                                                         // Properties: Bits: 11:0, Type: rw, Reset Value: 0x400
const uintptr_t ITM_SCR_SYNC_COUNT_MASK = 0x00000FFF;    // Counter value for time between synchronization
const uintptr_t ITM_SCR_SYNC_COUNT_BPOS = 0;             // markers


//------------------------------------------------------------------------------
//
// Register (ITM) ITTRIGOUTACK
//
// Name                    ITM_ITTRIGOUTACK_REG
// Relative Address        0x00000EE4
// Absolute Address        0xF8805EE4
// Width                   1 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Integration Test Trigger Out Acknowledge Register
//
// Register ITM_ITTRIGOUTACK_REG Details
//
                                                           // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t ITM_ITTRIGOUTACK_VAL_MASK = 0x00000001;    // Read the value of TRIGOUTACK
const uintptr_t ITM_ITTRIGOUTACK_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) ITTRIGOUT
//
// Name                    ITM_ITTRIGOUT_REG
// Relative Address        0x00000EE8
// Absolute Address        0xF8805EE8
// Width                   1 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Integration Test Trigger Out Register
//
// Register ITM_ITTRIGOUT_REG Details
//
                                                        // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t ITM_ITTRIGOUT_VAL_MASK = 0x00000001;    // Set the value of TRIGOUT
const uintptr_t ITM_ITTRIGOUT_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) ITATBDATA0
//
// Name                    ITM_ITATBDATA0_REG
// Relative Address        0x00000EEC
// Absolute Address        0xF8805EEC
// Width                   2 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Integration Test ATB Data Register 0
//
// Register ITM_ITATBDATA0_REG Details
//
                                                                // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t ITM_ITATBDATA0_ITATDATAM7_MASK = 0x00000002;    // Set the value of ATDATAM[7]
const uintptr_t ITM_ITATBDATA0_ITATDATAM7_BPOS = 1;             // 

                                                                // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t ITM_ITATBDATA0_ITATDATAM0_MASK = 0x00000001;    // Set the value of ATDATAM[0]
const uintptr_t ITM_ITATBDATA0_ITATDATAM0_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) ITATBCTR2
//
// Name                    ITM_ITATBCTR2_REG
// Relative Address        0x00000EF0
// Absolute Address        0xF8805EF0
// Width                   1 bits
// Access Type             ro
// Reset Value             0x00000001
// Description             Integration Test ATB Control Register 2
//
// Register ITM_ITATBCTR2_REG Details
//
                                                               // Properties: Bit: 0, Type: ro, Reset Value: 0x1
const uintptr_t ITM_ITATBCTR2_ITATREADYM_MASK = 0x00000001;    // Read the value of ATREADYM
const uintptr_t ITM_ITATBCTR2_ITATREADYM_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) ITATABCTR1
//
// Name                    ITM_ITATABCTR1_REG
// Relative Address        0x00000EF4
// Absolute Address        0xF8805EF4
// Width                   7 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Integration Test ATB Control Register 1
//
// Register ITM_ITATABCTR1_REG Details
//
                                                             // Properties: Bits: 6:0, Type: wo, Reset Value: 0x0
const uintptr_t ITM_ITATABCTR1_ITATIDM_MASK = 0x0000007F;    // Set the value of ATIDM[6:0]
const uintptr_t ITM_ITATABCTR1_ITATIDM_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) ITATBCTR0
//
// Name                    ITM_ITATBCTR0_REG
// Relative Address        0x00000EF8
// Absolute Address        0xF8805EF8
// Width                   2 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Integration Test ATB Control Register 0
//
// Register ITM_ITATBCTR0_REG Details
//
                                                               // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t ITM_ITATBCTR0_ITAFREADYM_MASK = 0x00000002;    // Set the value of AFREADYM
const uintptr_t ITM_ITATBCTR0_ITAFREADYM_BPOS = 1;             // 

                                                               // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t ITM_ITATBCTR0_ITATVALIDM_MASK = 0x00000001;    // Set the value of ATVALIDM
const uintptr_t ITM_ITATBCTR0_ITATVALIDM_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) IMCR
//
// Name                    ITM_IMCR_REG
// Relative Address        0x00000F00
// Absolute Address        0xF8805F00
// Width                   1 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Integration Mode Control Register
//
// Register ITM_IMCR_REG Details
//
                                                   // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_IMCR_VAL_MASK = 0x00000001;    // Enable Integration Test registers.
const uintptr_t ITM_IMCR_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) CTSR
//
// Name                    ITM_CTSR_REG
// Relative Address        0x00000FA0
// Absolute Address        0xF8805FA0
// Width                   8 bits
// Access Type             rw
// Reset Value             0x000000FF
// Description             Claim Tag Set Register
//
// Register ITM_CTSR_REG Details
//
                                                   // Properties: Bits: 7:0, Type: rw, Reset Value: 0xFF
const uintptr_t ITM_CTSR_VAL_MASK = 0x000000FF;    // The claim tag register is used for any
const uintptr_t ITM_CTSR_VAL_BPOS = 0;             // interrogating tools to determine if the device is
                                                   // being programmed or has been programmed.
                                                   // Read:
                                                   // 1= Claim tag is implemented, 0 = Claim tag is not
                                                   // implemented
                                                   // Write:
                                                   // 1= Set claim tag bit, 0= No effect


//------------------------------------------------------------------------------
//
// Register (ITM) CTCR
//
// Name                    ITM_CTCR_REG
// Relative Address        0x00000FA4
// Absolute Address        0xF8805FA4
// Width                   8 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Claim Tag Clear Register
//
// Register ITM_CTCR_REG Details
//
                                                   // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t ITM_CTCR_VAL_MASK = 0x000000FF;    // The claim tag register is used for any
const uintptr_t ITM_CTCR_VAL_BPOS = 0;             // interrogating tools to determine if the device is
                                                   // being programmed or has been programmed.
                                                   // Read: Current value of claim tag.
                                                   // Write: 1= Clear claim tag bit, 0= No effect


//------------------------------------------------------------------------------
//
// Register (ITM) LAR
//
// Name                    ITM_LAR_REG
// Relative Address        0x00000FB0
// Absolute Address        0xF8805FB0
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Lock Access Register
//
// Register ITM_LAR_REG Details
//
                                                  // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
const uintptr_t ITM_LAR_VAL_MASK = 0xFFFFFFFF;    // Write Access Code.
const uintptr_t ITM_LAR_VAL_BPOS = 0;             // Write behavior depends on PADDRDBG31 pin:
                                                  // - PADDRDBG31=0 (lower 2GB):
                                                  // After reset (via PRESETDBGn), ITM is locked, i.e.,
                                                  // writes to all other registers using lower 2GB
                                                  // addresses are ignored.
                                                  // To unlock, 0xC5ACCE55 must be written this
                                                  // register.
                                                  // After the required registers are written, to lock
                                                  // again, write a value other than 0xC5ACCE55 to
                                                  // this register.
                                                  // - PADDRDBG31=1 (upper 2GB):
                                                  // ITM is unlocked when upper 2GB addresses are
                                                  // used to write to all the registers.
                                                  // However, write to this register is ignored using a
                                                  // upper 2GB address!
                                                  // Note: read from this register always returns 0,
                                                  // regardless of PADDRDBG31.


//------------------------------------------------------------------------------
//
// Register (ITM) LSR
//
// Name                    ITM_LSR_REG
// Relative Address         0x00000FB4
// Absolute Address         0xF8805FB4
// Width                    3 bits
// Access Type              ro
// Reset Value              0x00000003
// Description              Lock Status Register
//
// Register ITM_LSR_REG Details
//
                                                     // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t ITM_LSR_8BIT_MASK   = 0x00000004;    // Set to 0 since ITM implements a 32-bit lock access
const uintptr_t ITM_LSR_8BIT_BPOS   = 2;             // register

                                                     // Properties: Bit: 1, Type: ro, Reset Value: 0x1
const uintptr_t ITM_LSR_STATUS_MASK = 0x00000002;    // Read behavior depends on PADDRDBG31 pin:
const uintptr_t ITM_LSR_STATUS_BPOS = 1;             // - PADDRDBG31=0 (lower 2GB):
                                                     // When a lower 2GB address is used to read this
                                                     // register, this bit indicates whether ITM is in
                                                     // locked state
                                                     // (1= locked, 0= unlocked).
                                                     // - PADDRDBG31=1 (upper 2GB):
                                                     // always returns 0.

                                                     // Properties: Bit: 0, Type: ro, Reset Value: 0x1
const uintptr_t ITM_LSR_IMP_MASK    = 0x00000001;    // Read behavior depends on PADDRDBG31 pin:
const uintptr_t ITM_LSR_IMP_BPOS    = 0;             // - PADDRDBG31=0 (lower 2GB):
                                                     // always returns 1, meaning lock mechanism are
                                                     // implemented.
                                                     // - PADDRDBG31=1 (upper 2GB):
                                                     // always returns 0, meaning lock mechanism is
                                                     // NOT implemented.


//------------------------------------------------------------------------------
//
// Register (ITM) ASR
//
// Name                     ITM_ASR_REG
// Relative Address         0x00000FB8
// Absolute Address         0xF8805FB8
// Width                    8 bits
// Access Type              ro
// Reset Value              0x00000088
// Description              Authentication Status Register
//
// Register ITM_ASR_REG Details
//
                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x88
const uintptr_t ITM_ASR_VAL_MASK = 0x000000FF;    // Value is 0b1S001N00 where S is secure
const uintptr_t ITM_ASR_VAL_BPOS = 0;             // non-invasive debug state and N is non-secure,
                                                  // non-invasive debug.


//------------------------------------------------------------------------------
//
// Register (ITM) DEVID
//
// Name                    ITM_DEVID_REG
// Relative Address        0x00000FC8
// Absolute Address        0xF8805FC8
// Width                   13 bits
// Access Type             ro
// Reset Value             0x00000020
// Description             Device ID
//
// Register ITM_DEVID_REG Details
//
                                                              // Properties: Bits: 12:0, Type: ro, Reset Value: 0x20
const uintptr_t ITM_DEVID_NUM_STIM_REGS_MASK = 0x00001FFF;    // Number of stimulus registers
const uintptr_t ITM_DEVID_NUM_STIM_REGS_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) DTIR
//
// Name                    ITM_DTIR_REG
// Relative Address        0x00000FCC
// Absolute Address        0xF8805FCC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000043
// Description             Device Type Identifier Register
//
// Register ITM_DTIR_REG Details
//
                                                   // Properties: Bits: 7:0, Type: ro, Reset Value: 0x43
const uintptr_t ITM_DTIR_VAL_MASK = 0x000000FF;    // Indicates a Trace Source and the stimulus is
const uintptr_t ITM_DTIR_VAL_BPOS = 0;             // devifed from bus activity


//------------------------------------------------------------------------------
//
// Register (ITM) PERIPHID4
//
// Name                    ITM_PERIPHID4_REG
// Relative Address        0x00000FD0
// Absolute Address        0xF8805FD0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000004
// Description             Peripheral ID4
//
// Register ITM_PERIPHID4_REG Details
//
                                                              // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
const uintptr_t ITM_PERIPHID4_4KB_COUNT_MASK = 0x000000F0;    // 4KB Count, set to 0
const uintptr_t ITM_PERIPHID4_4KB_COUNT_BPOS = 4;             // 

                                                              // Properties: Bits: 3:0, Type: ro, Reset Value: 0x4
const uintptr_t ITM_PERIPHID4_JEP106ID_MASK  = 0x0000000F;    // JEP106 continuation code
const uintptr_t ITM_PERIPHID4_JEP106ID_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) PERIPHID5
//
// Name                    ITM_PERIPHID5_REG
// Relative Address        0x00000FD4
// Absolute Address        0xF8805FD4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID5
//
// Register ITM_PERIPHID5_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t ITM_PERIPHID5_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t ITM_PERIPHID5_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) PERIPHID6
//
// Name                    ITM_PERIPHID6_REG
// Relative Address        0x00000FD8
// Absolute Address        0xF8805FD8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID6
//
// Register ITM_PERIPHID6_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t ITM_PERIPHID6_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t ITM_PERIPHID6_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) PERIPHID7
//
// Name                    ITM_PERIPHID7_REG
// Relative Address        0x00000FDC
// Absolute Address        0xF8805FDC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID7
//
// Register ITM_PERIPHID7_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t ITM_PERIPHID7_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t ITM_PERIPHID7_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) PERIPHID0
//
// Name                    ITM_PERIPHID0_REG
// Relative Address        0x00000FE0
// Absolute Address        0xF8805FE0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000013
// Description             Peripheral ID0
//
// Register ITM_PERIPHID0_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x13
const uintptr_t ITM_PERIPHID0_VAL_MASK = 0x000000FF;    // PartNumber0
const uintptr_t ITM_PERIPHID0_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) PERIPHID1
//
// Name                    ITM_PERIPHID1_REG
// Relative Address        0x00000FE4
// Absolute Address        0xF8805FE4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B9
// Description             Peripheral ID1
//
// Register ITM_PERIPHID1_REG Details
//
                                                                 // Properties: Bits: 7:4, Type: ro, Reset Value: 0xB
const uintptr_t ITM_PERIPHID1_JEP106ID_MASK     = 0x000000F0;    // JEP106 Identity Code [3:0]
const uintptr_t ITM_PERIPHID1_JEP106ID_BPOS     = 4;             // 

                                                                 // Properties: Bits: 3:0, Type: ro, Reset Value: 0x9
const uintptr_t ITM_PERIPHID1_PART_NUMBER1_MASK = 0x0000000F;    // PartNumber1
const uintptr_t ITM_PERIPHID1_PART_NUMBER1_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) PERIPHID2
//
// Name                    ITM_PERIPHID2_REG
// Relative Address        0x00000FE8
// Absolute Address        0xF8805FE8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000002B
// Description             Peripheral ID2
//
// Register ITM_PERIPHID2_REG Details
//
                                                             // Properties: Bits: 7:4, Type: ro, Reset Value: 0x2
const uintptr_t ITM_PERIPHID2_REV_NUM_MASK  = 0x000000F0;    // Revision number of Peripheral
const uintptr_t ITM_PERIPHID2_REV_NUM_BPOS  = 4;             // 

                                                             // Properties: Bit: 3, Type: ro, Reset Value: 0x1
const uintptr_t ITM_PERIPHID2_JEDEC_MASK    = 0x00000008;    // Indicates that a JEDEC assigned value is used
const uintptr_t ITM_PERIPHID2_JEDEC_BPOS    = 3;             // 

                                                             // Properties: Bits: 2:0, Type: ro, Reset Value: 0x3
const uintptr_t ITM_PERIPHID2_JEP106ID_MASK = 0x00000007;    // JEP106 Identity Code [6:4]
const uintptr_t ITM_PERIPHID2_JEP106ID_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) PERIPHID3
//
// Name                    ITM_PERIPHID3_REG
// Relative Address        0x00000FEC
// Absolute Address        0xF8805FEC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID3
//
// Register ITM_PERIPHID3_REG Details
//
                                                             // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
const uintptr_t ITM_PERIPHID3_REV_AND_MASK  = 0x000000F0;    // RevAnd, at top level
const uintptr_t ITM_PERIPHID3_REV_AND_BPOS  = 4;             // 

                                                             // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
const uintptr_t ITM_PERIPHID3_CUST_MOD_MASK = 0x0000000F;    // Customer Modified
const uintptr_t ITM_PERIPHID3_CUST_MOD_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) COMPID0
//
// Name                    ITM_COMPID0_REG
// Relative Address        0x00000FF0
// Absolute Address        0xF8805FF0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000000D
// Description             Component ID0
//
// Register ITM_COMPID0_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0xD
const uintptr_t ITM_COMPID0_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t ITM_COMPID0_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) COMPID1
//
// Name                    ITM_COMPID1_REG
// Relative Address        0x00000FF4
// Absolute Address        0xF8805FF4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000090
// Description             Component ID1
//
// Register ITM_COMPID1_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0x90
const uintptr_t ITM_COMPID1_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t ITM_COMPID1_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) COMPID2
//
// Name                    ITM_COMPID2_REG
// Relative Address        0x00000FF8
// Absolute Address        0xF8805FF8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000005
// Description             Component ID2
//
// Register ITM_COMPID2_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0x5
const uintptr_t ITM_COMPID2_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t ITM_COMPID2_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (ITM) COMPID3
//
// Name                    ITM_COMPID3_REG
// Relative Address        0x00000FFC
// Absolute Address        0xF8805FFC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B1
// Description             Component ID3
//
// Register ITM_COMPID3_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0xB1
const uintptr_t ITM_COMPID3_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t ITM_COMPID3_VAL_BPOS = 0;             // 


#endif // PS7_ITM_H

