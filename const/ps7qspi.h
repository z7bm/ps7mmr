//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_QSPI
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

#ifndef PS7_QSPI_H
#define PS7_QSPI_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    QSPI MMRs
//
//              Name                        Address                   Width   Type     Reset Value   Description
const uintptr_t QSPI_CONFIG_REG           = QSPI_ADDR + 0x00000000; //  32    mixed    0x80020000    QSPI configuration register
const uintptr_t QSPI_INT_STS_REG          = QSPI_ADDR + 0x00000004; //  32    mixed    0x00000004    QSPI interrupt status register
const uintptr_t QSPI_INT_EN_REG           = QSPI_ADDR + 0x00000008; //  32    mixed    0x00000000    Interrupt Enable register
const uintptr_t QSPI_INT_DIS_REG          = QSPI_ADDR + 0x0000000C; //  32    mixed    0x00000000    Interrupt disable register
const uintptr_t QSPI_INT_MASK_REG         = QSPI_ADDR + 0x00000010; //  32    ro       0x00000000    Interrupt mask register
const uintptr_t QSPI_EN_REG               = QSPI_ADDR + 0x00000014; //  32    mixed    0x00000000    SPI_Enable Register
const uintptr_t QSPI_DELAY_REG            = QSPI_ADDR + 0x00000018; //  32    rw       0x00000000    Delay Register
const uintptr_t QSPI_TXD0_REG             = QSPI_ADDR + 0x0000001C; //  32    wo       0x00000000    Transmit Data Register
const uintptr_t QSPI_RX_DATA_REG          = QSPI_ADDR + 0x00000020; //  32    ro       0x00000000    Receive Data Register
const uintptr_t QSPI_SLAVE_IDLE_COUNT_REG = QSPI_ADDR + 0x00000024; //  32    mixed    0x000000FF    Slave Idle Count Register
const uintptr_t QSPI_TX_THRES_REG         = QSPI_ADDR + 0x00000028; //  32    rw       0x00000001    TX_FIFO Threshold Register
const uintptr_t QSPI_RX_THRES_REG         = QSPI_ADDR + 0x0000002C; //  32    rw       0x00000001    RX FIFO Threshold Register
const uintptr_t QSPI_GPIO_REG             = QSPI_ADDR + 0x00000030; //  32    rw       0x00000001    General Purpose Inputs and Outputs Register for the Quad-SPI Controller core
const uintptr_t QSPI_LPBK_DLY_ADJ_REG     = QSPI_ADDR + 0x00000038; //  32    rw       0x00000033    Loopback Master Clock Delay Adjustment Register
const uintptr_t QSPI_TXD1_REG             = QSPI_ADDR + 0x00000080; //  32    wo       0x00000000    Transmit Data Register
const uintptr_t QSPI_TXD2_REG             = QSPI_ADDR + 0x00000084; //  32    wo       0x00000000    Transmit Data Register
const uintptr_t QSPI_TXD3_REG             = QSPI_ADDR + 0x00000088; //  32    wo       0x00000000    Transmit Data Register
const uintptr_t QSPI_LQSPI_CFG_REG        = QSPI_ADDR + 0x000000A0; //  32    rw       x             Configuration Register specifically for the Linear Quad-SPI Controller
const uintptr_t QSPI_LQSPI_STS_REG        = QSPI_ADDR + 0x000000A4; //   9    rw       0x00000000    Status Register specifically for the Linear Quad-SPI Controller QSPI_MOD_ID                   0x000000FC       32      rw      0x01090101      Module Identification register
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (QSPI) CONFIG
//
// Name                     QSPI_CONFIG_REG
// Software Name            CR
// Relative Address         0x00000000
// Absolute Address         0xE000D000
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x80020000
// Description              QSPI configuration register
//
// Register QSPI_CONFIG_REG Details
//
                                                         // Properties: Bit: 31, Type: rw, Reset Value: 0x1
const uintptr_t QSPI_IFMODE_MASK        = 0x80000000;    // Flash memory interface mode control:
const uintptr_t QSPI_IFMODE_BPOS        = 31;            // 0: legacy SPI mode
                                                         // 1: Flash memory interface mode
                                                         // This control is required to enable or disable
                                                         // automatic recognition of instruction bytes in the
                                                         // first byte of a transfer.
                                                         // If this mode is disabled, the core will operate in
                                                         // standard SPI mode, with no dual- or quad-bit
                                                         // input or output capability; the extended bits will
                                                         // be configured as inputs to prevent any driver
                                                         // contention on these pins.
                                                         // If enabled, flash memory interface instructions
                                                         // are automatically recognized and the I/O
                                                         // configured accordingly.

// RESERVED                                                 Properties: Bits: 30:27, Type: ro, Reset Value: 0x0

                                                         // Properties: Bit: 26, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_ENDIAN_MASK        = 0x04000000;    // 0 for little endian format when writing to the
const uintptr_t QSPI_ENDIAN_BPOS        = 26;            // transmit data register 0x1C or reading from the
                                                         // receive data register 0x20.
                                                         // 1 for big endian format when writing to the
                                                         // transmit data register 0x1C or reading from the
                                                         // receive data register 0x20.

// RESERVED                                                 Properties: Bits: 25:20, Type: ro, Reset Value: 0x0

                                                         // Properties: Bit: 19, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_HOLDB_DR_MASK      = 0x00080000;    // If set, Holdb and WPn pins are actively driven by
const uintptr_t QSPI_HOLDB_DR_BPOS      = 19;            // the qspi controller in 1-bit and 2-bit modes .
                                                         // If not set, then external pull up is required on
                                                         // HOLDb and WPn pins .
                                                         // Note that this bit doesn't affect the quad(4-bit)
                                                         // mode as Controller always drives these pins in
                                                         // quad mode.
                                                         // It is highly recommended to set this bit
                                                         // always(irrespective of mode of operation) while
                                                         // using QSPI

// RESERVED                                                 Properties: Bit: 18, Type: rw, Reset Value: 0x0

// RESERVED                                                 Properties: Bit: 17, Type: rw, Reset Value: 0x1

                                                         // Properties: Bit: 16, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_MAN_START_COM_MASK = 0x00010000;    // Manual Start Command
const uintptr_t QSPI_MAN_START_COM_BPOS = 16;            // 1: start transmission of data
                                                         // 0: don't care

                                                         // Properties: Bit: 15, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_MAN_START_EN_MASK  = 0x00008000;    // Manual Start Enable
const uintptr_t QSPI_MAN_START_EN_BPOS  = 15;            // 1: enables manual start
                                                         // 0: auto mode

                                                         // Properties: Bit: 14, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_MANUAL_CS_MASK     = 0x00004000;    // Manual CS
const uintptr_t QSPI_MANUAL_CS_BPOS     = 14;            // 1: manual CS mode
                                                         // 0: auto mode

// RESERVED                                                 Properties: Bits: 13:11, Type: rw, Reset Value: 0x0

                                                         // Properties: Bit: 10, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_PCS_MASK           = 0x00000400;    // Peripheral chip select line, directly drive n_ss_out
const uintptr_t QSPI_PCS_BPOS           = 10;            // if Manual_C is set

// RESERVED                                                 Properties: Bit: 9, Type: rw, Reset Value: 0x0

                                                         // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_REF_CLK_MASK       = 0x00000100;    // Reserved. Must be 0
const uintptr_t QSPI_REF_CLK_BPOS       = 8;             // 

                                                         // Properties: Bits: 7:6, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_FIFO_WIDTH_MASK    = 0x000000C0;    // FIFO width
const uintptr_t QSPI_FIFO_WIDTH_BPOS    = 6;             // Must be set to 2'b11 (32bits). All other settings are
                                                         // not supported.

                                                         // Properties: Bits: 5:3, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_BAUD_RATE_DIV_MASK = 0x00000038;    // Master mode baud rate divisor
const uintptr_t QSPI_BAUD_RATE_DIV_BPOS = 3;             // 000: divide by 2. This is the only baud rate setting
                                                         // that can be used if the loopback clock is enabled
                                                         // (USE_LPBK). This setting also works in
                                                         // non-loopback mode.
                                                         // 001: divide by 4
                                                         // 010: divide by 8
                                                         // 011: divide by 16
                                                         // 100: divide by 32
                                                         // 101: divide by 64
                                                         // 110: divide by 128
                                                         // 111: divide by 256

                                                         // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_CLK_PH_MASK        = 0x00000004;    // Clock phase
const uintptr_t QSPI_CLK_PH_BPOS        = 2;             // 1: the QSPI clock is inactive outside the word
                                                         // 0: the QSPI clock is active outside the word
                                                         // Note : For {CLK_PH, CLK_POL}, only 2'b11 and
                                                         // 2'b00 are supported.

                                                         // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_CLK_POL_MASK       = 0x00000002;    // Clock polarity outside QSPI word
const uintptr_t QSPI_CLK_POL_BPOS       = 1;             // 1: The QSPI clock is quiescent high
                                                         // 0: The QSPI clock is quiescent low
                                                         // Note : For {CLK_PH, CLK_POL}, only 2'b11 and
                                                         // 2'b00 are supported.

                                                         // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_MODE_SEL_MASK      = 0x00000001;    // Mode select
const uintptr_t QSPI_MODE_SEL_BPOS      = 0;             // 1: The QSPI is in master mode
                                                         // 0: RESERVED
                                                         // In QSPI boot mode, ROM code will set this bit. In
                                                         // other boot modes, this bit must be set before using
                                                         // QSPI.


//------------------------------------------------------------------------------
//
// Register (QSPI) INT_STS
//
// Name                    QSPI_INT_STS_REG
// Software Name           SR
// Relative Address        0x00000004
// Absolute Address        0xE000D004
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000004
// Description             QSPI interrupt status register
//
// Register QSPI_INT_STS_REG Details
//         This register is set when the described event occurs. Interrupt mask value does not affect interrupt status
//         register. Mask value is only used to mask interrupt output.
//         Bit 0 and 6 are write to clear. All other bits are read only.
//
// RESERVED                                                             Properties: Bits: 31:7, Type: ro, Reset Value: 0x0

                                                                     // Properties: Bit: 6, Type: wtc, Reset Value: 0x0
const uintptr_t QSPI_INT_STS_TX_FIFO_UNDERFLOW_MASK = 0x00000040;    // TX FIFO underflow, write one to this bit location
const uintptr_t QSPI_INT_STS_TX_FIFO_UNDERFLOW_BPOS = 6;             // to clear.
                                                                     // 1: underflow is detected
                                                                     // 0: no underflow has been detected
                                                                     // Write 1 to this bit location to clear

                                                                     // Properties: Bit: 5, Type: ro, Reset Value: 0x0
const uintptr_t QSPI_INT_STS_RX_FIFO_FULL_MASK      = 0x00000020;    // RX FIFO full (current FIFO status)
const uintptr_t QSPI_INT_STS_RX_FIFO_FULL_BPOS      = 5;             // 1: FIFO is full
                                                                     // 0: FIFO is not full

                                                                     // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t QSPI_INT_STS_RX_FIFO_NOT_EMPTY_MASK = 0x00000010;    // RX FIFO not empty (current FIFO status)
const uintptr_t QSPI_INT_STS_RX_FIFO_NOT_EMPTY_BPOS = 4;             // 1: FIFO has more than or equal to THRESHOLD
                                                                     // entries
                                                                     // 0: FIFO has less than RX THRESHOLD entries

                                                                     // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t QSPI_INT_STS_TX_FIFO_FULL_MASK      = 0x00000008;    // TX FIFO full (current FIFO status)
const uintptr_t QSPI_INT_STS_TX_FIFO_FULL_BPOS      = 3;             // 1: FIFO is full
                                                                     // 0: FIFO is not full

                                                                     // Properties: Bit: 2, Type: ro, Reset Value: 0x1
const uintptr_t QSPI_INT_STS_TX_FIFO_NOT_FULL_MASK  = 0x00000004;    // TX FIFO not full (current FIFO status)
const uintptr_t QSPI_INT_STS_TX_FIFO_NOT_FULL_BPOS  = 2;             // 1: FIFO has less than THRESHOLD entries
                                                                     // 0: FIFO has more than or equal toTHRESHOLD
                                                                     // entries

// RESERVED                                                             Properties: Bit: 1, Type: ro, Reset Value: 0x0

                                                                     // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
const uintptr_t QSPI_INT_STS__RX_OVERFLOW_MASK      = 0x00000001;    // Receive Overflow interrupt, write one to this bit
const uintptr_t QSPI_INT_STS__RX_OVERFLOW_BPOS      = 0;             // location to clear.
                                                                     // 1: overflow occurred
                                                                     // 0: no overflow occurred
                                                                     // Write 1 to this bit location to clear


//------------------------------------------------------------------------------
//
// Register (QSPI) INT_EN
//
// Name                      QSPI_INT_EN_REG
// Software Name             IER
// Relative Address          0x00000008
// Absolute Address          0xE000D008
// Width                     32 bits
// Access Type               mixed
// Reset Value              0x00000000
// Description              Interrupt Enable register.
//
// Register QSPI_INT_EN_REG Details
//         Writing a 1 to this register sets the corresponding bits of the interrupt mask register.
//
// RESERVED                                                            Properties: Bits: 31:7, Type: ro, Reset Value: 0x0

                                                                    // Properties: Bit: 6, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_EN_TX_FIFO_UNDERFLOW_MASK = 0x00000040;    // TX FIFO underflow
const uintptr_t QSPI_INT_EN_TX_FIFO_UNDERFLOW_BPOS = 6;             // enable
                                                                    // 1: enable the interrupt
                                                                    // 0: no effect

                                                                    // Properties: Bit: 5, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_EN_RX_FIFO_FULL_MASK      = 0x00000020;    // RX FIFO full
const uintptr_t QSPI_INT_EN_RX_FIFO_FULL_BPOS      = 5;             // enable
                                                                    // 1: enable the interrupt
                                                                    // 0: no effect

                                                                    // Properties: Bit: 4, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_EN_RX_FIFO_NOT_EMPTY_MASK = 0x00000010;    // RX FIFO not empty
const uintptr_t QSPI_INT_EN_RX_FIFO_NOT_EMPTY_BPOS = 4;             // enable
                                                                    // 1: enable the interrupt
                                                                    // 0: no effect

                                                                    // Properties: Bit: 3, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_EN_TX_FIFO_FULL_MASK      = 0x00000008;    // TX FIFO full
const uintptr_t QSPI_INT_EN_TX_FIFO_FULL_BPOS      = 3;             // enable
                                                                    // 1: enable the interrupt
                                                                    // 0: no effect

                                                                    // Properties: Bit: 2, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_EN_TX_FIFO_NOT_FULL_MASK  = 0x00000004;    // TX FIFO not full
const uintptr_t QSPI_INT_EN_TX_FIFO_NOT_FULL_BPOS  = 2;             // enable
                                                                    // 1: enable the interrupt
                                                                    // 0: no effect

// RESERVED                                                            Properties: Bit: 1, Type: wo, Reset Value: 0x0

                                                                    // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_EN_RX_OVERFLOW_MASK       = 0x00000001;    // Receive Overflow interrupt enable
const uintptr_t QSPI_INT_EN_RX_OVERFLOW_BPOS       = 0;             // 1: enable the interrupt
                                                                    // 0: no effect


//------------------------------------------------------------------------------
//
// Register (QSPI) INT_DIS
//
// Name                     QSPI_INT_DIS_REG
// Software Name            IDR
// Relative Address         0x0000000C
// Absolute Address         0xE000D00C
// Width                    32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Interrupt disable register.
//
// Register QSPI_INT_DIS_REG Details
//
// RESERVED                                                             Properties: Bits: 31:7, Type: ro, Reset Value: 0x0

                                                                     // Properties: Bit: 6, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_DIS_TX_FIFO_UNDERFLOW_MASK = 0x00000040;    // TX FIFO underflow
const uintptr_t QSPI_INT_DIS_TX_FIFO_UNDERFLOW_BPOS = 6;             // enable
                                                                     // 1: disables the interrupt
                                                                     // 0: no effect

                                                                     // Properties: Bit: 5, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_DIS_RX_FIFO_FULL_MASK      = 0x00000020;    // RX FIFO full
const uintptr_t QSPI_INT_DIS_RX_FIFO_FULL_BPOS      = 5;             // enable
                                                                     // 1: disables the interrupt
                                                                     // 0: no effect

                                                                     // Properties: Bit: 4, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_DIS_RX_FIFO_NOT_EMPTY_MASK = 0x00000010;    // RX FIFO not empty
const uintptr_t QSPI_INT_DIS_RX_FIFO_NOT_EMPTY_BPOS = 4;             // enable
                                                                     // 1: disables the interrupt
                                                                     // 0: no effect

                                                                     // Properties: Bit: 3, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_DIS_TX_FIFO_FULL_MASK      = 0x00000008;    // TX FIFO full
const uintptr_t QSPI_INT_DIS_TX_FIFO_FULL_BPOS      = 3;             // enable
                                                                     // 1: disables the interrupt
                                                                     // 0: no effect

                                                                     // Properties: Bit: 2, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_DIS_TX_FIFO_NOT_FULL_MASK  = 0x00000004;    // TX FIFO not full
const uintptr_t QSPI_INT_DIS_TX_FIFO_NOT_FULL_BPOS  = 2;             // enable
                                                                     // 1: disables the interrupt
                                                                     // 0: no effect

// RESERVED                                                             Properties: Bit: 1, Type: wo, Reset Value: 0x0

                                                                     // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_INT_DIS_RX_OVERFLOW_MASK       = 0x00000001;    // Receive Overflow interrupt enable
const uintptr_t QSPI_INT_DIS_RX_OVERFLOW_BPOS       = 0;             // 1: disables the interrupt
                                                                     // 0: no effect


//------------------------------------------------------------------------------
//
// Register (QSPI) INT_MASK
//
// Name                    QSPI_INT_MASK_REG
// Software Name           IMR
// Relative Address        0x00000010
// Absolute Address        0xE000D010
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Interrupt mask register
//
// Register QSPI_INT_MASK_REG Details
//
// RESERVED                                                              Properties: Bits: 31:7, Type: ro, Reset Value: 0x0

                                                                      // Properties: Bit: 6, Type: ro, Reset Value: 0x0
const uintptr_t QSPI_INT_MASK_TX_FIFO_UNDERFLOW_MASK = 0x00000040;    // TX FIFO underflow
const uintptr_t QSPI_INT_MASK_TX_FIFO_UNDERFLOW_BPOS = 6;             // enable
                                                                      // 0: interrupt is disabled
                                                                      // 1: interrupt is enabled

                                                                      // Properties: Bit: 5, Type: ro, Reset Value: 0x0
const uintptr_t QSPI_INT_MASK_RX_FIFO_FULL_MASK      = 0x00000020;    // RX FIFO full
const uintptr_t QSPI_INT_MASK_RX_FIFO_FULL_BPOS      = 5;             // enable
                                                                      // 0: interrupt is disabled
                                                                      // 1: interrupt is enabled

                                                                      // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t QSPI_INT_MASK_RX_FIFO_NOT_EMPTY_MASK = 0x00000010;    // RX FIFO not empty
const uintptr_t QSPI_INT_MASK_RX_FIFO_NOT_EMPTY_BPOS = 4;             // enable
                                                                      // 0: interrupt is disabled
                                                                      // 1: interrupt is enabled

                                                                      // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t QSPI_INT_MASK_TX_FIFO_FULL_MASK      = 0x00000008;    // TX FIFO full
const uintptr_t QSPI_INT_MASK_TX_FIFO_FULL_BPOS      = 3;             // enable
                                                                      // 0: interrupt is disabled
                                                                      // 1: interrupt is enabled

                                                                      // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t QSPI_INT_MASK_TX_FIFO_NOT_FULL_MASK  = 0x00000004;    // TX FIFO not full
const uintptr_t QSPI_INT_MASK_TX_FIFO_NOT_FULL_BPOS  = 2;             // enable
                                                                      // 0: interrupt is disabled
                                                                      // 1: interrupt is enabled

// RESERVED                                                              Properties: Bit: 1, Type: ro, Reset Value: 0x0

                                                                      // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t QSPI_INT_MASK_RX_OVERFLOW_MASK       = 0x00000001;    // Receive Overflow interrupt enable
const uintptr_t QSPI_INT_MASK_RX_OVERFLOW_BPOS       = 0;             // 0: interrupt is disabled
                                                                      // 1: interrupt is enabled


//------------------------------------------------------------------------------
//
// Register (QSPI) EN
//
// Name                    QSPI_EN_REG
// Software Name           ER
// Relative Address        0x00000014
// Absolute Address        0xE000D014
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             SPI_Enable Register
//
// Register QSPI_EN_REG Details
//
// RESERVED                                          Properties: Bits: 31:1, Type: ro, Reset Value: 0x0

                                                  // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_SPI_EN_MASK = 0x00000001;    // SPI_Enable
const uintptr_t QSPI_SPI_EN_BPOS = 0;             // 1: enable the SPI
                                                  // 0: disable the SPI


//------------------------------------------------------------------------------
//
// Register (QSPI) DELAY
//
// Name                      QSPI_DELAY_REG
// Software Name             DR
// Relative Address          0x00000018
// Absolute Address          0xE000D018
// Width                     32 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               Delay Register
//
// Register QSPI_DELAY_REG Details
//           This register is only used in master mode to introduce relative delays into the generation of the master
//           output signals. All timings are defined in cycles of the SPI REFERENCE CLOCK/ext_clk, defined in this
//           table as SPI master ref clock.
//
                                                   // Properties: Bits: 31:24, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_D_NSS_MASK   = 0xFF000000;    // Delay in SPI REFERENCE CLOCK or ext_clk
const uintptr_t QSPI_D_NSS_BPOS   = 24;            // cycles for the length that the master mode chip
                                                   // select outputs are de-asserted between words
                                                   // when cpha=0.

                                                   // Properties: Bits: 23:16, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_D_BTWN_MASK  = 0x00FF0000;    // Delay in SPI REFERENCE CLOCK or ext_clk
const uintptr_t QSPI_D_BTWN_BPOS  = 16;            // cycles between one chip select being de-activated
                                                   // and the activation of another

                                                   // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_D_AFTER_MASK = 0x0000FF00;    // Delay in SPI REFERENCE CLOCK or ext_clk
const uintptr_t QSPI_D_AFTER_BPOS = 8;             // cycles between last bit of current word and the
                                                   // first bit of the next word.

                                                   // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_D_INT_MASK   = 0x000000FF;    // Added delay in SPI REFERENCE CLOCK or
const uintptr_t QSPI_D_INT_BPOS   = 0;             // ext_clk cycles between setting n_ss_out low and
                                                   // first bit transfer.


//------------------------------------------------------------------------------
//
// Register (QSPI) TXD0
//
// Name                    QSPI_TXD0_REG
// Software Name           TXD_00
// Relative Address        0x0000001C
// Absolute Address        0xE000D01C
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Transmit Data Register. Keyhole addresses for the Transmit data FIFO. See also
//                         TXD1-3.
//
// Register QSPI_TXD0_REG Details
//
                                                    // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_TXD0_TXD_MASK = 0xFFFFFFFF;    // Data to TX FIFO, for 4-byte instruction for normal
const uintptr_t QSPI_TXD0_TXD_BPOS = 0;             // read/write data transfer.


//------------------------------------------------------------------------------
//
// Register (QSPI) RX_DATA
//
// Name                    QSPI_RX_DATA_REG
// Software Name           RXD
// Relative Address        0x00000020
// Absolute Address        0xE000D020
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Receive Data Register
//
// Register QSPI_RX_DATA_REG Details
//
                                                        // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t QSPI_RX_FIFO_DATA_MASK = 0xFFFFFFFF;    // Data from TX FIFO
const uintptr_t QSPI_RX_FIFO_DATA_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (QSPI) SLAVE_IDLE_COUNT
//
// Name                    QSPI_SLAVE_IDLE_COUNT_REG
// Software Name           SICR
// Relative Address        0x00000024
// Absolute Address        0xE000D024
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x000000FF
// Description             Slave Idle Count Register
//
// Register QSPI_SLAVE_IDLE_COUNT_REG Details
//
// RESERVED                                                    Properties: Bits: 31:8, Type: ro, Reset Value: 0x0

                                                            // Properties: Bits: 7:0, Type: rw, Reset Value: 0xFF
const uintptr_t QSPI_SLAVE_IDLE_COUNT_MASK = 0x000000FF;    // SPI in slave mode detects a start only when the
const uintptr_t QSPI_SLAVE_IDLE_COUNT_BPOS = 0;             // external SPI master serial clock (sclk_in) is stable
                                                            // (quiescent state) for SPI REFERENCE CLOCK
                                                            // cycles specified by slave idle count register or
                                                            // when the SPI
                                                            // is deselected.


//------------------------------------------------------------------------------
//
// Register (QSPI) TX_THRES
//
// Name                    QSPI_TX_THRES_REG
// Software Name           TXWR
// Relative Address        0x00000028
// Absolute Address        0xE000D028
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000001
// Description             TX_FIFO Threshold Register
//
// Register QSPI_TX_THRES_REG Details
//
                                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0x1
const uintptr_t QSPI_THRESHOLD_TX_FIFO_MASK = 0xFFFFFFFF;    // Defines the level at which the TX FIFO not full
const uintptr_t QSPI_THRESHOLD_TX_FIFO_BPOS = 0;             // interrupt is generated


//------------------------------------------------------------------------------
//
// Register (QSPI) RX_THRES_REG
//
// Name                    QSPI_RX_THRES_REG
// Relative Address        0x0000002C
// Absolute Address        0xE000D02C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000001
// Description             RX FIFO Threshold Register
//
// Register QSPI_RX_THRES_REG Details
//
                                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0x1
const uintptr_t QSPI_THRESHOLD_RX_FIFO_MASK = 0xFFFFFFFF;    // Defines the level at which the RX FIFO not empty
const uintptr_t QSPI_THRESHOLD_RX_FIFO_BPOS = 0;             // interrupt is generated


//------------------------------------------------------------------------------
//
// Register (QSPI) GPIO
//
// Name                    QSPI_GPIO_REG
// Relative Address        0x00000030
// Absolute Address        0xE000D030
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000001
// Description             General Purpose Inputs and Outputs Register for the Quad-SPI Controller core
//
// Register QSPI_GPIO_REG Details
//
// RESERVED                                             Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x1
const uintptr_t QSPI_GPIO_WP_N_MASK = 0x00000001;    // Write Protect.
const uintptr_t QSPI_GPIO_WP_N_BPOS = 0;             // Write Protect output for flash devices supporting
                                                     // this function.
                                                     // Active low (may be inverted externally to the core
                                                     // if required for flash devices requiring active high
                                                     // write protect signal.)


//------------------------------------------------------------------------------
//
// Register (QSPI) LPBK_DLY_ADJ
//
// Name                    QSPI_LPBK_DLY_ADJ_REG
// Relative Address        0x00000038
// Absolute Address        0xE000D038
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000033
// Description             Loopback Master Clock Delay Adjustment Register
//
// Register QSPI_LPBK_DLY_ADJ_REG Details
//         Register for adjusting the internal loopback clock delay for read data capturing.
//         This feature is only active if bit 5 is set AND if the baud rate divisor in reg 0x00 is programmed to 2 (i.e.,
//         000).
//
// RESERVED                                            Properties: Bits: 31:9, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_LPBK_SEL_MASK = 0x00000100;    // Set to 0, do not modify
const uintptr_t QSPI_LPBK_SEL_BPOS = 8;             // 

                                                    // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_LPBK_PH_MASK  = 0x00000080;    // Set to 0, do not modify
const uintptr_t QSPI_LPBK_PH_BPOS  = 7;             // 

// RESERVED                                            Properties: Bit: 6, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 5, Type: rw, Reset Value: 0x1
const uintptr_t QSPI_USE_LPBK_MASK = 0x00000020;    // Use internal loopback master clock for read data
const uintptr_t QSPI_USE_LPBK_BPOS = 5;             // capturing when baud rate divisor (reg 0x00) is 2

                                                    // Properties: Bits: 4:3, Type: rw, Reset Value: 0x2
const uintptr_t QSPI_DLY1_MASK     = 0x00000018;    // Must be set to 00 if Loopback clk used
const uintptr_t QSPI_DLY1_BPOS     = 3;             // 

                                                    // Properties: Bits: 2:0, Type: rw, Reset Value: 0x3
const uintptr_t QSPI_DLY0_MASK     = 0x00000007;    // Must be set to 00 if Loopback clk used
const uintptr_t QSPI_DLY0_BPOS     = 0;             // 


//------------------------------------------------------------------------------
//
// Register (QSPI) TXD1
//
// Name                     QSPI_TXD1_REG
// Software Name            TXD_01
// Relative Address         0x00000080
// Absolute Address         0xE000D080
// Width                    32 bits
// Access Type              wo
// Reset Value              0x00000000
// Description              Transmit Data Register. Keyhole addresses for the Transmit data FIFO.
//
// Register QSPI_TXD1_REG Details
//
                                                // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_TXD1_MASK = 0xFFFFFFFF;    // Data to TX FIFO, for 1-byte instruction, not for
const uintptr_t QSPI_TXD1_BPOS = 0;             // normal data transfer.
                                                // In little endian mode (default), only bits 7:0 are
                                                // valid, bits 31:8 are ignored.
                                                // In big endian mode, only the 8 MS bits are valid.


//------------------------------------------------------------------------------
//
// Register (QSPI) TXD2
//
// Name                     QSPI_TXD2_REG
// Software Name            TXD_10
// Relative Address         0x00000084
// Absolute Address        0xE000D084
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Transmit Data Register. Keyhole addresses for the Transmit data FIFO.
//
// Register QSPI_TXD2_REG Details
//
                                                // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_TXD2_MASK = 0xFFFFFFFF;    // Data to TX FIFO, for 2-byte instruction, not for
const uintptr_t QSPI_TXD2_BPOS = 0;             // normal data transfer.
                                                // In little endian mode (default), only bits 15:0 are
                                                // valid, bits 31:16 are ignored.
                                                // In big endian mode, only the 16 MS bits are valid.


//------------------------------------------------------------------------------
//
// Register (QSPI) TXD3
//
// Name                    QSPI_TXD3_REG
// Software Name           TXD_11
// Relative Address        0x00000088
// Absolute Address        0xE000D088
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Transmit Data Register. Keyhole addresses for the Transmit data FIFO.
//
// Register QSPI_TXD3_REG Details
//
                                                // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
const uintptr_t QSPI_TXD3_MASK = 0xFFFFFFFF;    // Data to TX FIFO, for 3-byte instruction, not for
const uintptr_t QSPI_TXD3_BPOS = 0;             // normal data transfer.
                                                // In little endian mode (default), only bits 23:0 are
                                                // valid, bits 31:24 are ignored.
                                                // In big endian mode, only the 24 MS bits are valid.


//------------------------------------------------------------------------------
//
// Register (QSPI) LQSPI_CFG
//
// Name                    QSPI_LQSPI_CFG_REG
// Software Name           LQSPI_CR
// Relative Address        0x000000A0
// Absolute Address        0xE000D0A0
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             Configuration Register specifically for the Linear Quad-SPI Controller
//
// Register QSPI_LQSPI_CFG_REG Details
//
                                                      // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_LQ_MODE_MASK    = 0x80000000;    // Linear quad SPI mode, if set, else quad SPI mode
const uintptr_t QSPI_LQ_MODE_BPOS    = 31;            // 

                                                      // Properties: Bit: 30, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_TWO_MEM_MASK    = 0x40000000;    // Both upper and lower memories are active, if set
const uintptr_t QSPI_TWO_MEM_BPOS    = 30;            // 

                                                      // Properties: Bit: 29, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_SEP_BUS_MASK    = 0x20000000;    // Separate memory bus, if set.
const uintptr_t QSPI_SEP_BUS_BPOS    = 29;            // Only has meaning if bit 30 is set

                                                      // Properties: Bit: 28, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_U_PAGE_MASK     = 0x10000000;    // Upper memory page, if set.
const uintptr_t QSPI_U_PAGE_BPOS     = 28;            // Only has meaning if bit 30 is set AND bit 29 is
                                                      // clear AND bit 31 is clear.
                                                      // In LQSPI mode, address bit 25 will indicate lower
                                                      // (0) or upper (1) page.
                                                      // In IO mode, this bit is used to select the lower or
                                                      // upper memory for configuration or read/write
                                                      // operations.

// RESERVED                                              Properties: Bit: 27, Type: rw, Reset Value: 0x0

// RESERVED                                              Properties: Bit: 26, Type: rw, Reset Value: 0x1

                                                      // Properties: Bit: 25, Type: rw, Reset Value: 0x1
const uintptr_t QSPI_MODE_EN_MASK    = 0x02000000;    // Enable MODE_BITS[23:16] to be sent, if set.
const uintptr_t QSPI_MODE_EN_BPOS    = 25;            // This bit MUST BE SET for dual I/O or quad I/O
                                                      // read (specified through [7:0]).
                                                      // This bit MUST BE CLEAR for all other read
                                                      // modes as they do not have mode bits.
                                                      // If this bit is 0, bits 24, and [23:16] are ignored.
                                                      // Here is a summary of how bits 25, 24 and 23:16 are
                                                      // related:
                                                      // if ( [ Bit25 == 0 ] && [ Bit24 == x ] ) then [ Bits23:16
                                                      // =x]
                                                      // if ( [ Bit25 == 1 ] && [ Bit24 == 0 ] ) then [ Bits23:16
                                                      // = ~(8'bxx10xxxx) ]
                                                      // if ( [ Bit25 == 1 ] && [ Bit24 == 1 ] ) then [ Bits23:16
                                                      // = 8'bxx10xxxx ]

                                                      // Properties: Bit: 24, Type: rw, Reset Value: 0x1
const uintptr_t QSPI_MODE_ON_MASK    = 0x01000000;    // This bit is only relevant if bit 25 is set, else it is
const uintptr_t QSPI_MODE_ON_BPOS    = 24;            // ignored.
                                                      // If this bit is set, instruction code is only sent for the
                                                      // very first read transfer.
                                                      // If this bit is clear, instruction code will be sent for
                                                      // all read transfers.
                                                      // This bit is configured in association with the
                                                      // MODE_BITS.
                                                      // For Winbond devices, this bit MUST BE SET if the
                                                      // MODE_BITS are 8'bxx10xxxx, else this bit MUST
                                                      // BE CLEAR.

                                                      // Properties: Bits: 23:16, Type: rw, Reset Value: 0xA0
const uintptr_t QSPI_MODE_BITS_MASK  = 0x00FF0000;    // These bits are only relevant if bit 25 is set, else it is
const uintptr_t QSPI_MODE_BITS_BPOS  = 16;            // ignored.
                                                      // If bit 25 is set, this value is required for both dual
                                                      // I/O read and quad I/O read.
                                                      // See vendor's datasheet for more information.
                                                      // For Winbond's device, the continuous read mode
                                                      // value is 8'bxx10xxxx to skip the instruction code
                                                      // for the next read transfer, else instruction code is
                                                      // sent for all read transfers.
                                                      // Bit 24 has to be configured accordingly with this
                                                      // value.

// RESERVED                                              Properties: Bits: 15:11, Type: rw, Reset Value: x

                                                      // Properties: Bits: 10:8, Type: rw, Reset Value: 0x2
const uintptr_t QSPI_DUMMY_BYTE_MASK = 0x00000700;    // Number of dummy bytes between address and
const uintptr_t QSPI_DUMMY_BYTE_BPOS = 8;             // return read data

                                                      // Properties: Bits: 7:0, Type: rw, Reset Value: 0xEB
const uintptr_t QSPI_INST_CODE_MASK  = 0x000000FF;    // Read instruction code.
const uintptr_t QSPI_INST_CODE_BPOS  = 0;             // The known read instruction codes are:
                                                      // 8'h03 - Read
                                                      // 8'h0B - Fast read
                                                      // 8'h3B - Fast read dual output
                                                      // 8'h6B - Fast read quad output
                                                      // 8'hBB - Fast read dual I/O
                                                      // 8'hEB - Fast read quad I/O


//------------------------------------------------------------------------------
//
// Register (QSPI) LQSPI_STS
//
// Name                    QSPI_LQSPI_STS_REG
// Software Name           LQSPI_SR
// Relative Address        0x000000A4
// Absolute Address        0xE000D0A4
// Width                   9 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Status Register specifically for the Linear Quad-SPI Controller
//
// Register QSPI_LQSPI_STS_REG Details
//
// RESERVED                                             Properties: Bits: 8:3, Type: rw, Reset Value: 0x0

                                                     // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_D_FSM_ERR_MASK = 0x00000004;    // Data FSM error, if set
const uintptr_t QSPI_D_FSM_ERR_BPOS = 2;             // 

                                                     // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t QSPI_WR_RECVD_MASK  = 0x00000002;    // AXI write command received, if set
const uintptr_t QSPI_WR_RECVD_BPOS  = 1;             // 

// RESERVED                                             Properties: Bit: 0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (QSPI) MOD_ID
//
// Name                    QSPI_MOD_ID_REG
// Relative Address        0x000000FC
// Absolute Address        0xE000D0FC
// Width                   32 bits
// Access Type             rw
// Reset Value             0x01090101
// Description             Module Identification register
//
// Register QSPI_MOD_ID_REG Details
//
                                               // Properties: Bits: 31:0, Type: rw, Reset Value: 0x1090101
const uintptr_t QSPI_VAL_MASK = 0xFFFFFFFF;    // Module ID value.
const uintptr_t QSPI_VAL_BPOS = 0;             // 


#endif // PS7_QSPI_H

