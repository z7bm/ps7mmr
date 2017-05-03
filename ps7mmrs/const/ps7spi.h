//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_SPI
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

#ifndef PS7_SPI_H
#define PS7_SPI_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    SPI0 MMRs
//
//              Name                        Address                   Width   Type     Reset Value   Description
const uintptr_t SPI_CONFIG_REG0           = SPI0_ADDR + 0x00000000; //  32    mixed    0x00020000    SPI configuration register
const uintptr_t SPI_INT_STS_REG0          = SPI0_ADDR + 0x00000004; //  32    mixed    0x00000004    SPI interrupt status register
const uintptr_t SPI_INT_EN_REG0           = SPI0_ADDR + 0x00000008; //  32    mixed    0x00000000    Interrupt Enable register
const uintptr_t SPI_INT_DIS_REG0          = SPI0_ADDR + 0x0000000C; //  32    mixed    0x00000000    Interrupt disable register
const uintptr_t SPI_INT_MASK_REG0         = SPI0_ADDR + 0x00000010; //  32    ro       0x00000000    Interrupt mask register
const uintptr_t SPI_EN_REG0               = SPI0_ADDR + 0x00000014; //  32    mixed    0x00000000    SPI_Enable Register
const uintptr_t SPI_DELAY_REG0            = SPI0_ADDR + 0x00000018; //  32    rw       0x00000000    Delay Register
const uintptr_t SPI_TX_DATA_REG0          = SPI0_ADDR + 0x0000001C; //  32    wo       0x00000000    Transmit Data Register
const uintptr_t SPI_RX_DATA_REG0          = SPI0_ADDR + 0x00000020; //  32    ro       0x00000000    Receive Data Register
const uintptr_t SPI_SLAVE_IDLE_COUNT_REG0 = SPI0_ADDR + 0x00000024; //  32    mixed    0x000000FF    Slave Idle Count Register
const uintptr_t SPI_TX_THRES_REG0         = SPI0_ADDR + 0x00000028; //  32    rw       0x00000001    TX_FIFO Threshold Register
const uintptr_t SPI_RX_THRES_REG0         = SPI0_ADDR + 0x0000002C; //  32    rw       0x00000001    RX FIFO Threshold Register
const uintptr_t SPI_MOD_ID_REG0           = SPI0_ADDR + 0x000000FC; //  32    ro       0x00090106    Module ID register
//------------------------------------------------------------------------------
//
//    SPI1 MMRs
//
//              Name                        Address                   Width   Type     Reset Value   Description
const uintptr_t SPI_CONFIG_REG1           = SPI1_ADDR + 0x00000000; //  32    mixed    0x00020000    SPI configuration register
const uintptr_t SPI_INT_STS_REG1          = SPI1_ADDR + 0x00000004; //  32    mixed    0x00000004    SPI interrupt status register
const uintptr_t SPI_INT_EN_REG1           = SPI1_ADDR + 0x00000008; //  32    mixed    0x00000000    Interrupt Enable register
const uintptr_t SPI_INT_DIS_REG1          = SPI1_ADDR + 0x0000000C; //  32    mixed    0x00000000    Interrupt disable register
const uintptr_t SPI_INT_MASK_REG1         = SPI1_ADDR + 0x00000010; //  32    ro       0x00000000    Interrupt mask register
const uintptr_t SPI_EN_REG1               = SPI1_ADDR + 0x00000014; //  32    mixed    0x00000000    SPI_Enable Register
const uintptr_t SPI_DELAY_REG1            = SPI1_ADDR + 0x00000018; //  32    rw       0x00000000    Delay Register
const uintptr_t SPI_TX_DATA_REG1          = SPI1_ADDR + 0x0000001C; //  32    wo       0x00000000    Transmit Data Register
const uintptr_t SPI_RX_DATA_REG1          = SPI1_ADDR + 0x00000020; //  32    ro       0x00000000    Receive Data Register
const uintptr_t SPI_SLAVE_IDLE_COUNT_REG1 = SPI1_ADDR + 0x00000024; //  32    mixed    0x000000FF    Slave Idle Count Register
const uintptr_t SPI_TX_THRES_REG1         = SPI1_ADDR + 0x00000028; //  32    rw       0x00000001    TX_FIFO Threshold Register
const uintptr_t SPI_RX_THRES_REG1         = SPI1_ADDR + 0x0000002C; //  32    rw       0x00000001    RX FIFO Threshold Register
const uintptr_t SPI_MOD_ID_REG1           = SPI1_ADDR + 0x000000FC; //  32    ro       0x00090106    Module ID register
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (SPI) CONFIG
//
// Name                    SPI_CONFIG_REG 
// Software Name           CR
// Relative Address        0x00000000
// Absolute Address        spi0: 0xE0006000
//                         spi1: 0xE0007000
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00020000
// Description             SPI configuration register
//
// Register SPI_CONFIG_REG Details
//
// RESERVED                                                  Properties: Bits: 31:18, Type: ro, Reset Value: 0x0

                                                          // Properties: Bit: 17, Type: rw, Reset Value: 0x1
const uintptr_t SPI_MODEFAIL_GEN_EN_MASK = 0x00020000;    // ModeFail Generation Enable
const uintptr_t SPI_MODEFAIL_GEN_EN_BPOS = 17;            // 1: enable
                                                          // 0: disable

                                                          // Properties: Bit: 16, Type: wo, Reset Value: 0x0
const uintptr_t SPI_MAN_START_COM_MASK   = 0x00010000;    // Manual Start Command
const uintptr_t SPI_MAN_START_COM_BPOS   = 16;            // 1: start transmission of data
                                                          // 0: don't care

                                                          // Properties: Bit: 15, Type: rw, Reset Value: 0x0
const uintptr_t SPI_MAN_START_EN_MASK    = 0x00008000;    // Manual Start Enable
const uintptr_t SPI_MAN_START_EN_BPOS    = 15;            // : enables manual start
                                                          // : auto mode

                                                          // Properties: Bit: 14, Type: rw, Reset Value: 0x0
const uintptr_t SPI_MANUAL_CS_MASK       = 0x00004000;    // Manual CS
const uintptr_t SPI_MANUAL_CS_BPOS       = 14;            // : manual CS mode
                                                          // : auto mode

                                                          // Properties: Bits: 13:10, Type: rw, Reset Value: 0x0
const uintptr_t SPI_CS_MASK              = 0x00003C00;    // Peripheral chip select lines (only valid if
const uintptr_t SPI_CS_BPOS              = 10;            // Manual_CS=1)
                                                          // xxx0 - slave 0 selected
                                                          // xx01 - slave 1 selected
                                                          // x011 - slave 2 selected
                                                          // 0111 - reserved
                                                          // 1111 - No slave selected

                                                          // Properties: Bit: 9, Type: rw, Reset Value: 0x0
const uintptr_t SPI_PERI_SEL_MASK        = 0x00000200;    // Peripheral select decode
const uintptr_t SPI_PERI_SEL_BPOS        = 9;             // 1: allow external 3-to-8 decode
                                                          // 0: only 1 of 3 selects

                                                          // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t SPI_REF_CLK_MASK         = 0x00000100;    // Master reference clock select
const uintptr_t SPI_REF_CLK_BPOS         = 8;             // 1: not supported
                                                          // 0: use SPI REFERENCE CLOCK

// RESERVED                                                  Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                          // Properties: Bits: 5:3, Type: rw, Reset Value: 0x0
const uintptr_t SPI_BAUD_RATE_DIV_MASK   = 0x00000038;    // Master mode baud rate divisor controls the
const uintptr_t SPI_BAUD_RATE_DIV_BPOS   = 3;             // amount the spi_ref_clk is divided inside the SPI
                                                          // block
                                                          // 000: not supported
                                                          // 001: divide by 4
                                                          // 010: divide by 8
                                                          // 011: divide by 16
                                                          // 100: divide by 32
                                                          // 101: divide by 64
                                                          // 110: divide by 128
                                                          // 111: divide by 256

                                                          // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t SPI_CLK_PH_MASK          = 0x00000004;    // Clock phase
const uintptr_t SPI_CLK_PH_BPOS          = 2;             // 1: the SPI clock is inactive outside the word
                                                          // 0: the SPI clock is active outside the word

                                                          // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t SPI_CLK_POL_MASK         = 0x00000002;    // Clock polarity outside SPI word
const uintptr_t SPI_CLK_POL_BPOS         = 1;             // 1: the SPI clock is quiescent high
                                                          // 0: the SPI clock is quiescent low

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t SPI_MODE_SEL_MASK        = 0x00000001;    // Mode select
const uintptr_t SPI_MODE_SEL_BPOS        = 0;             // 1: the SPI is in master mode
                                                          // 0: the SPI is in slave mode


//------------------------------------------------------------------------------
//
// Register (SPI) INT_STS
//
// Name                       SPI_INT_STS_REG 
// Software Name              SR
// Relative Address           0x00000004
// Absolute Address           spi0: 0xE0006004
//                            spi1: 0xE0007004
// Width                      32 bits
// Access Type                mixed
// Reset Value                0x00000004
// Description                SPI interrupt status register
//
// Register SPI_INT_STS_REG Details
//          This register is set when the described event occurs and the interrupt is enabled in the mask register. When
//          any of these bits are set the interrupt output is asserted high. In the default configuration, these bits are all
//          cleared simultaneously by reading this register, though this may be configured for an individual
//          write-one-to-clear scheme.
//
// RESERVED                                                            Properties: Bits: 31:7, Type: ro, Reset Value: 0x0

                                                                    // Properties: Bit: 6, Type: wtc, Reset Value: 0x0
const uintptr_t SPI_INT_STS_TX_FIFO_UNDERFLOW_MASK = 0x00000040;    // TX FIFO underflow, write one to this bit location
const uintptr_t SPI_INT_STS_TX_FIFO_UNDERFLOW_BPOS = 6;             // to clear.
                                                                    // 1: underflow is detected
                                                                    // 0: no underflow has been detected

                                                                    // Properties: Bit: 5, Type: wtc, Reset Value: 0x0
const uintptr_t SPI_INT_STS_RX_FIFO_FULL_MASK      = 0x00000020;    // RX FIFO full
const uintptr_t SPI_INT_STS_RX_FIFO_FULL_BPOS      = 5;             // 1: FIFO is full
                                                                    // 0: FIFO is not full

                                                                    // Properties: Bit: 4, Type: wtc, Reset Value: 0x0
const uintptr_t SPI_INT_STS_RX_FIFO_NOT_EMPTY_MASK = 0x00000010;    // RX FIFO not empty
const uintptr_t SPI_INT_STS_RX_FIFO_NOT_EMPTY_BPOS = 4;             // 1: FIFO has more than or equal to THRESHOLD
                                                                    // entries
                                                                    // 0: FIFO has less than RX THRESHOLD entries

                                                                    // Properties: Bit: 3, Type: wtc, Reset Value: 0x0
const uintptr_t SPI_INT_STS_TX_FIFO_FULL_MASK      = 0x00000008;    // TX FIFO full
const uintptr_t SPI_INT_STS_TX_FIFO_FULL_BPOS      = 3;             // 1: FIFO is full
                                                                    // 0: FIFO is not full

                                                                    // Properties: Bit: 2, Type: wtc, Reset Value: 0x1
const uintptr_t SPI_INT_STS_TX_FIFO_NOT_FULL_MASK  = 0x00000004;    // TX FIFO not full
const uintptr_t SPI_INT_STS_TX_FIFO_NOT_FULL_BPOS  = 2;             // 1: FIFO has less than THRESHOLD entries
                                                                    // 0: FIFO has more than or equal toTHRESHOLD
                                                                    // entries

                                                                    // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
const uintptr_t SPI_INT_STS_MODE_FAIL_MASK         = 0x00000002;    // Indicates the voltage on pin n_ss_in is
const uintptr_t SPI_INT_STS_MODE_FAIL_BPOS         = 1;             // inconsistent with the SPI mode. Set =1 if n_ss_in is
                                                                    // low in master mode (multi-master contention) or
                                                                    // n_ss_in goes high during a transmission in slave
                                                                    // mode. These conditions will clear the spi_enable
                                                                    // bit and disable the SPI. This bit is reset only by a
                                                                    // system reset and cleared only when this register is
                                                                    // read.
                                                                    // ModeFail interrupt, write one to this bit location
                                                                    // to clear.
                                                                    // 1: a mode fault has occurred
                                                                    // 0: no mode fault has been detected

                                                                    // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
const uintptr_t SPI_INT_STS_RX_OVERFLOW_MASK       = 0x00000001;    // Receive Overflow interrupt, write one to this bit
const uintptr_t SPI_INT_STS_RX_OVERFLOW_BPOS       = 0;             // location to clear.
                                                                    // 1: overflow occured
                                                                    // 0: no overflow occurred


//------------------------------------------------------------------------------
//
// Register (SPI) INT_EN
//
// Name                    SPI_INT_EN_REG 
// Software Name           IER
// Relative Address        0x00000008
// Absolute Address        spi0: 0xE0006008
//                         spi1: 0xE0007008
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Interrupt Enable register
//
// Register SPI_INT_EN_REG Details
//
// RESERVED                                                           Properties: Bits: 31:7, Type: ro, Reset Value: 0x0

                                                                   // Properties: Bit: 6, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_EN_TX_FIFO_UNDERFLOW_MASK = 0x00000040;    // TX FIFO underflow
const uintptr_t SPI_INT_EN_TX_FIFO_UNDERFLOW_BPOS = 6;             // enable
                                                                   // 1: enable the interrupt
                                                                   // 0: no effect

                                                                   // Properties: Bit: 5, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_EN_RX_FIFO_FULL_MASK      = 0x00000020;    // RX FIFO full
const uintptr_t SPI_INT_EN_RX_FIFO_FULL_BPOS      = 5;             // enable
                                                                   // 1: enable the interrupt
                                                                   // 0: no effect

                                                                   // Properties: Bit: 4, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_EN_RX_FIFO_NOT_EMPTY_MASK = 0x00000010;    // RX FIFO not empty
const uintptr_t SPI_INT_EN_RX_FIFO_NOT_EMPTY_BPOS = 4;             // enable
                                                                   // 1: enable the interrupt
                                                                   // 0: no effect

                                                                   // Properties: Bit: 3, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_EN_TX_FIFO_FULL_MASK      = 0x00000008;    // TX FIFO full
const uintptr_t SPI_INT_EN_TX_FIFO_FULL_BPOS      = 3;             // enable
                                                                   // 1: enable the interrupt
                                                                   // 0: no effect

                                                                   // Properties: Bit: 2, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_EN_TX_FIFO_NOT_FULL_MASK  = 0x00000004;    // TX FIFO not full
const uintptr_t SPI_INT_EN_TX_FIFO_NOT_FULL_BPOS  = 2;             // enable
                                                                   // 1: enable the interrupt
                                                                   // 0: no effect

                                                                   // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_EN_MODE_FAIL_MASK         = 0x00000002;    // ModeFail interrupt
const uintptr_t SPI_INT_EN_MODE_FAIL_BPOS         = 1;             // enable
                                                                   // 1: enable the interrupt
                                                                   // 0: no effect

                                                                   // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_EN_RX_OVERFLOW_MASK       = 0x00000001;    // Receive Overflow interrupt enable
const uintptr_t SPI_INT_EN_RX_OVERFLOW_BPOS       = 0;             // 1: enable the interrupt
                                                                   // 0: no effect


//------------------------------------------------------------------------------
//
// Register (SPI) INT_DIS
//
// Name                    SPI_INT_DIS_REG 
// Software Name           IDR
// Relative Address        0x0000000C
// Absolute Address        spi0: 0xE000600C
//                         spi1: 0xE000700C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Interrupt disable register
//
// Register SPI_INT_DIS_REG Details
//
// RESERVED                                                            Properties: Bits: 31:7, Type: ro, Reset Value: 0x0

                                                                    // Properties: Bit: 6, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_DIS_TX_FIFO_UNDERFLOW_MASK = 0x00000040;    // TX FIFO underflow
const uintptr_t SPI_INT_DIS_TX_FIFO_UNDERFLOW_BPOS = 6;             // enable
                                                                    // 1: disables the interrupt
                                                                    // 0: no effect

                                                                    // Properties: Bit: 5, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_DIS_RX_FIFO_FULL_MASK      = 0x00000020;    // RX FIFO full
const uintptr_t SPI_INT_DIS_RX_FIFO_FULL_BPOS      = 5;             // enable
                                                                    // 1: disables the interrupt
                                                                    // 0: no effect

                                                                    // Properties: Bit: 4, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_DIS_RX_FIFO_NOT_EMPTY_MASK = 0x00000010;    // RX FIFO not empty
const uintptr_t SPI_INT_DIS_RX_FIFO_NOT_EMPTY_BPOS = 4;             // enable
                                                                    // 1: disables the interrupt
                                                                    // 0: no effect

                                                                    // Properties: Bit: 3, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_DIS_TX_FIFO_FULL_MASK      = 0x00000008;    // TX FIFO full
const uintptr_t SPI_INT_DIS_TX_FIFO_FULL_BPOS      = 3;             // enable
                                                                    // 1: disables the interrupt
                                                                    // 0: no effect

                                                                    // Properties: Bit: 2, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_DIS_TX_FIFO_NOT_FULL_MASK  = 0x00000004;    // TX FIFO not full
const uintptr_t SPI_INT_DIS_TX_FIFO_NOT_FULL_BPOS  = 2;             // enable
                                                                    // 1: disables the interrupt
                                                                    // 0: no effect

                                                                    // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_DIS_MODE_FAIL_MASK         = 0x00000002;    // ModeFail interrupt
const uintptr_t SPI_INT_DIS_MODE_FAIL_BPOS         = 1;             // enable
                                                                    // 1: disables the interrupt
                                                                    // 0: no effect

                                                                    // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t SPI_INT_DIS_RX_OVERFLOW_MASK       = 0x00000001;    // Receive Overflow interrupt enable
const uintptr_t SPI_INT_DIS_RX_OVERFLOW_BPOS       = 0;             // 1: disables the interrupt
                                                                    // 0: no effect


//------------------------------------------------------------------------------
//
// Register (SPI) INT_MASK
//
// Name                    SPI_INT_MASK_REG 
// Software Name           IMR
// Relative Address        0x00000010
// Absolute Address        spi0: 0xE0006010
//                         spi1: 0xE0007010
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Interrupt mask register
//
// Register SPI_INT_MASK_REG Details
//
// RESERVED                                                             Properties: Bits: 31:7, Type: ro, Reset Value: 0x0

                                                                     // Properties: Bit: 6, Type: ro, Reset Value: 0x0
const uintptr_t SPI_INT_MASK_TX_FIFO_UNDERFLOW_MASK = 0x00000040;    // TX FIFO underflow
const uintptr_t SPI_INT_MASK_TX_FIFO_UNDERFLOW_BPOS = 6;             // enable
                                                                     // 1: interrupt is disabled
                                                                     // 0: interrupt is enabled

                                                                     // Properties: Bit: 5, Type: ro, Reset Value: 0x0
const uintptr_t SPI_INT_MASK_RX_FIFO_FULL_MASK      = 0x00000020;    // RX FIFO full
const uintptr_t SPI_INT_MASK_RX_FIFO_FULL_BPOS      = 5;             // enable
                                                                     // 1: interrupt is disabled
                                                                     // 0: interrupt is enabled

                                                                     // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t SPI_INT_MASK_RX_FIFO_NOT_EMPTY_MASK = 0x00000010;    // RX FIFO not empty
const uintptr_t SPI_INT_MASK_RX_FIFO_NOT_EMPTY_BPOS = 4;             // enable
                                                                     // 1: interrupt is disabled
                                                                     // 0: interrupt is enabled

                                                                     // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t SPI_INT_MASK_TX_FIFO_FULL_MASK      = 0x00000008;    // TX FIFO full
const uintptr_t SPI_INT_MASK_TX_FIFO_FULL_BPOS      = 3;             // enable
                                                                     // 1: interrupt is disabled
                                                                     // 0: interrupt is enabled

                                                                     // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t SPI_INT_MASK_TX_FIFO_NOT_FULL_MASK  = 0x00000004;    // TX FIFO not full
const uintptr_t SPI_INT_MASK_TX_FIFO_NOT_FULL_BPOS  = 2;             // enable
                                                                     // 1: interrupt is disabled
                                                                     // 0: interrupt is enabled

                                                                     // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t SPI_INT_MASK_MODE_FAIL_MASK         = 0x00000002;    // ModeFail interrupt
const uintptr_t SPI_INT_MASK_MODE_FAIL_BPOS         = 1;             // enable
                                                                     // 1: interrupt is disabled
                                                                     // 0: interrupt is enabled

                                                                     // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t SPI_INT_MASK_RX_OVERFLOW_MASK       = 0x00000001;    // Receive Overflow interrupt enable
const uintptr_t SPI_INT_MASK_RX_OVERFLOW_BPOS       = 0;             // 1: interrupt is disabled
                                                                     // 0: interrupt is enabled


//------------------------------------------------------------------------------
//
// Register (SPI) EN
//
// Name                    SPI_EN_REG 
// Software Name           ER
// Relative Address        0x00000014
// Absolute Address        spi0: 0xE0006014
//                         spi1: 0xE0007014
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             SPI_Enable Register
//
// Register SPI_EN_REG Details
//
// RESERVED                                       Properties: Bits: 31:1, Type: ro, Reset Value: 0x0

                                               // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t SPI_EN_MASK   = 0x00000001;    // SPI_Enable
const uintptr_t SPI_EN_BPOS   = 0;             // 1: enable the SPI
                                               // 0: disable the SPI


//------------------------------------------------------------------------------
//
// Register (SPI) DELAY
//
// Name                    SPI_DELAY_REG 
// Software Name             DR
// Relative Address          0x00000018
// Absolute Address          spi0: 0xE0006018
//                           spi1: 0xE0007018
// Width                     32 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               Delay Register
//
// Register SPI_DELAY_REG Details
//
                                                  // Properties: Bits: 31:24, Type: rw, Reset Value: 0x0
const uintptr_t SPI_D_NSS_MASK   = 0xFF000000;    // Delay in SPI REFERENCE CLOCK or ext_clk
const uintptr_t SPI_D_NSS_BPOS   = 24;            // cycles
                                                  // for the length that the master mode chip select
                                                  // outputs are de-asserted between words when
                                                  // cpha=0.

                                                  // Properties: Bits: 23:16, Type: rw, Reset Value: 0x0
const uintptr_t SPI_D_BTWN_MASK  = 0x00FF0000;    // Delay in SPI REFERENCE CLOCK or ext_clk
const uintptr_t SPI_D_BTWN_BPOS  = 16;            // cycles
                                                  // between one chip select being de-activated and
                                                  // the
                                                  // activation of another

                                                  // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t SPI_D_AFTER_MASK = 0x0000FF00;    // Delay in SPI REFERENCE CLOCK or ext_clk
const uintptr_t SPI_D_AFTER_BPOS = 8;             // cycles between last bit of current word and the
                                                  // first bit of the next word.

                                                  // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t SPI_D_INT_MASK   = 0x000000FF;    // Added delay in SPI REFERENCE CLOCK or
const uintptr_t SPI_D_INT_BPOS   = 0;             // ext_clk
                                                  // cycles between setting n_ss_out low and first bit
                                                  // transfer.


//------------------------------------------------------------------------------
//
// Register (SPI) TX_DATA
//
// Name                      SPI_TX_DATA_REG
// Software Name             TXD
// Relative Address          0x0000001C
// Absolute Address          spi0: 0xE000601C
//                           spi1: 0xE000701C
// Width                     32 bits
// Access Type               wo
// Reset Value               0x00000000
// Description               Transmit Data Register.
//
// Register SPI_TX_DATA_REG Details
//
                                                       // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
const uintptr_t SPI_TX_FIFO_DATA_MASK = 0xFFFFFFFF;    // Data to TX FIFO. Valid data bits are [7:0].
const uintptr_t SPI_TX_FIFO_DATA_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (SPI) RX_DATA
//
// Name                    SPI_RX_DATA_REG 
// Software Name           RXD
// Relative Address        0x00000020
// Absolute Address        spi0: 0xE0006020
//                         spi1: 0xE0007020
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Receive Data Register
//
// Register SPI_RX_DATA_REG Details
//
                                                       // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t SPI_RX_FIFO_DATA_MASK = 0xFFFFFFFF;    // Data from RX FIFO. Valid data bits are [7:0].
const uintptr_t SPI_RX_FIFO_DATA_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (SPI) SLAVE_IDLE_COUNT
//
// Name                    SPI_SLAVE_IDLE_COUNT_REG 
// Software Name           SICR
// Relative Address        0x00000024
// Absolute Address        spi0: 0xE0006024
//                         spi1: 0xE0007024
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x000000FF
// Description             Slave Idle Count Register
//
// Register SPI_SLAVE_IDLE_COUNT_REG Details
//
// RESERVED                                                  Properties: Bits: 31:8, Type: ro, Reset Value: 0x0

                                                          // Properties: Bits: 7:0, Type: rw, Reset Value: 0xFF
const uintptr_t SPI_SLAVE_IDLE_COUN_MASK = 0x000000FF;    // SPI in slave mode detects a start only when the
const uintptr_t SPI_SLAVE_IDLE_COUN_BPOS = 0;             // external SPI master serial clock (sclk_in) is stable
                                                          // (quiescent state) for SPI REFERENCE CLOCK
                                                          // cycles
                                                          // specified by slave idle count register or when the
                                                          // SPI
                                                          // is deselected.


//------------------------------------------------------------------------------
//
// Register (SPI) TX_THRES
//
// Name                    SPI_TX_THRES_REG 
// Software Name           TXWR
// Relative Address        0x00000028
// Absolute Address        spi0: 0xE0006028
//                         spi1: 0xE0007028
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000001
// Description             TX_FIFO Threshold Register
//
// Register SPI_TX_THRES_REG Details
//
                                                               // Properties: Bits: 31:0, Type: rw, Reset Value: 0x1
const uintptr_t SPI_THRESHOLD_OF_TX_FIFO_MASK = 0xFFFFFFFF;    // Defines the level at which the TX FIFO not full
const uintptr_t SPI_THRESHOLD_OF_TX_FIFO_BPOS = 0;             // interrupt is generated


//------------------------------------------------------------------------------
//
// Register (SPI) RX_THRES
//
// Name                    SPI_RX_THRES_REG
// Relative Address        0x0000002C
// Absolute Address        spi0: 0xE000602C
//                         spi1: 0xE000702C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000001
// Description             RX FIFO Threshold Register
//
// Register SPI_RX_THRES_REG Details
//
                                                               // Properties: Bits: 31:0, Type: rw, Reset Value: 0x1
const uintptr_t SPI_THRESHOLD_OF_RX_FIFO_MASK = 0xFFFFFFFF;    // Defines the level at which the RX FIFO not empty
const uintptr_t SPI_THRESHOLD_OF_RX_FIFO_BPOS = 0;             // interrupt is generated


//------------------------------------------------------------------------------
//
// Register (SPI) MOD_ID
//
// Name                    SPI_MOD_ID_REG
// Relative Address        0x000000FC
// Absolute Address        spi0: 0xE00060FC
//                         spi1: 0xE00070FC
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00090106
// Description             Module ID register
//
// Register SPI_MOD_ID_REG Details
//
// RESERVED                                            Properties: Bits: 31:25, Type: ro, Reset Value: 0x0

                                                    // Properties: Bits: 24:0, Type: ro, Reset Value: 0x90106
const uintptr_t SPI_MODULE_ID_MASK = 0x01FFFFFF;    // Module ID number
const uintptr_t SPI_MODULE_ID_BPOS = 0;             // 


#endif // PS7_SPI_H

