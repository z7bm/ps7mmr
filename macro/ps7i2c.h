//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_I2C
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

#ifndef PS7_I2C_H
#define PS7_I2C_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    I2C0 MMRs
//
//      Name                    Address                     Width   Type     Reset Value   Description
#define I2C_CTRL_REG0          (I2C0_ADDR + 0x00000000UL) //  16    mixed    0x00000000    Control Register
#define I2C_STS_REG0           (I2C0_ADDR + 0x00000004UL) //  16    ro       0x00000000    Status register
#define I2C_ADDR_REG0          (I2C0_ADDR + 0x00000008UL) //  16    mixed    0x00000000    IIC Address register
#define I2C_DATA_REG0          (I2C0_ADDR + 0x0000000CUL) //  16    mixed    0x00000000    IIC data register
#define I2C_INT_STS_REG0       (I2C0_ADDR + 0x00000010UL) //  16    mixed    0x00000000    IIC interrupt status register
#define I2C_TRSIZE_REG0        (I2C0_ADDR + 0x00000014UL) //   8    rw       0x00000000    Transfer Size Register
#define I2C_SLVMON_PAUSE_REG0  (I2C0_ADDR + 0x00000018UL) //   8    mixed    0x00000000    Slave Monitor Pause Register
#define I2C_TIMEOUT_REG0       (I2C0_ADDR + 0x0000001CUL) //   8    rw       0x0000001F    Time out register
#define I2C_INT_MASK_REG0      (I2C0_ADDR + 0x00000020UL) //  16    ro       0x000002FF    Interrupt mask register
#define I2C_INT_EN_REG0        (I2C0_ADDR + 0x00000024UL) //  16    mixed    0x00000000    Interrupt Enable Register
#define I2C_INT_DISE_REG0      (I2C0_ADDR + 0x00000028UL) //  16    mixed    0x00000000    Interrupt Disable Register
//------------------------------------------------------------------------------
//
//    I2C1 MMRs
//
//      Name                    Address                     Width   Type     Reset Value   Description
#define I2C_CTRL_REG1          (I2C1_ADDR + 0x00000000UL) //  16    mixed    0x00000000    Control Register
#define I2C_STS_REG1           (I2C1_ADDR + 0x00000004UL) //  16    ro       0x00000000    Status register
#define I2C_ADDR_REG1          (I2C1_ADDR + 0x00000008UL) //  16    mixed    0x00000000    IIC Address register
#define I2C_DATA_REG1          (I2C1_ADDR + 0x0000000CUL) //  16    mixed    0x00000000    IIC data register
#define I2C_INT_STS_REG1       (I2C1_ADDR + 0x00000010UL) //  16    mixed    0x00000000    IIC interrupt status register
#define I2C_TRSIZE_REG1        (I2C1_ADDR + 0x00000014UL) //   8    rw       0x00000000    Transfer Size Register
#define I2C_SLVMON_PAUSE_REG1  (I2C1_ADDR + 0x00000018UL) //   8    mixed    0x00000000    Slave Monitor Pause Register
#define I2C_TIMEOUT_REG1       (I2C1_ADDR + 0x0000001CUL) //   8    rw       0x0000001F    Time out register
#define I2C_INT_MASK_REG1      (I2C1_ADDR + 0x00000020UL) //  16    ro       0x000002FF    Interrupt mask register
#define I2C_INT_EN_REG1        (I2C1_ADDR + 0x00000024UL) //  16    mixed    0x00000000    Interrupt Enable Register
#define I2C_INT_DISE_REG1      (I2C1_ADDR + 0x00000028UL) //  16    mixed    0x00000000    Interrupt Disable Register
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (I2C) CTRL
//
// Name                    I2C_CTRL_REG
// Software Name           CR
// Relative Address        0x00000000
// Absolute Address        i2c0: 0xE0004000
//                         i2c1: 0xE0005000
// Width                   16 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Control Register
//
// Register I2C_CTRL_REG Details
//
                                                 // Properties: Bits: 15:14, Type: rw, Reset Value: 0x0
#define I2C_CTRL_DIVISOR_A_MASK  0x0000C000UL    // Divisor for stage A clock divider.
#define I2C_CTRL_DIVISOR_A_BPOS  14UL            // 0 - 3: Divides the input pclk frequency by
                                                 // divisor_a + 1.

                                                 // Properties: Bits: 13:8, Type: rw, Reset Value: 0x0
#define I2C_CTRL_DIVISOR_B_MASK  0x00003F00UL    // Divisor for stage B clock divider.
#define I2C_CTRL_DIVISOR_B_BPOS  8UL             // 0 - 63 : Divides the output frequency from
                                                 // divisor_a by divisor_b + 1.

// RESERVED                                         Properties: Bit: 7, Type: ro, Reset Value: 0x0

                                                 // Properties: Bit: 6, Type: rw, Reset Value: 0x0
#define I2C_CTRL_CLR_FIFO_MASK   0x00000040UL    // 1 - initializes the FIFO to all zeros and clears the
#define I2C_CTRL_CLR_FIFO_BPOS   6UL             // transfer size register. Automatically gets cleared
                                                 // on the next APB clock after
                                                 // being set.

                                                 // Properties: Bit: 5, Type: rw, Reset Value: 0x0
#define I2C_CTRL_SLVMON_MASK     0x00000020UL    // Slave monitor mode
#define I2C_CTRL_SLVMON_BPOS     5UL             // 1 - monitor mode.
                                                 // 0 - normal operation.

                                                 // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define I2C_CTRL_HOLD_MASK       0x00000010UL    // hold_bus
#define I2C_CTRL_HOLD_BPOS       4UL             // 1 - when no more data is available for transmit or
                                                 // no more data can be received, hold the sclk line
                                                 // low until serviced by the host.
                                                 // 0 - allow the transfer to terminate as soon as all the
                                                 // data has been transmitted or received.

                                                 // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define I2C_CTRL_ACK_EN_MASK     0x00000008UL    // This bit needs to be set to 1
#define I2C_CTRL_ACK_EN_BPOS     3UL             // 1 - acknowledge enabled, ACK transmitted
                                                 // 0 - acknowledge disabled, NACK transmitted.

                                                 // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define I2C_CTRL_NEA_MASK        0x00000004UL    // Addressing mode: This bit is used in master
#define I2C_CTRL_NEA_BPOS        2UL             // mode only.
                                                 // 1 - normal (7-bit) address
                                                 // 0 - reserved

                                                 // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define I2C_CTRL_MS_MASK         0x00000002UL    // Overall interface mode:
#define I2C_CTRL_MS_BPOS         1UL             // 1 - master
                                                 // 0 - slave

                                                 // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define I2C_CTRL_RW_MASK         0x00000001UL    // Direction of transfer:
#define I2C_CTRL_RW_BPOS         0UL             // This bit is used in master mode only.
                                                 // 1 - master receiver
                                                 // 0 - master transmitter.


//------------------------------------------------------------------------------
//
// Register (I2C) STS
//
// Name                    I2C_STS_REG
// Software Name           SR
// Relative Address        0x00000004
// Absolute Address        i2c0: 0xE0004004
//                         i2c1: 0xE0005004
// Width                   16 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Status register
//
// Register I2C_STS_REG Details
//
// RESERVED                                Properties: Bits: 15:9, Type: ro, Reset Value: 0x0

                                        // Properties: Bit: 8, Type: ro, Reset Value: 0x0
#define I2C_BA_MASK     0x00000100UL    // Bus Active
#define I2C_BA_BPOS     8UL             // 1 - ongoing transfer on the I2C bus.

                                        // Properties: Bit: 7, Type: ro, Reset Value: 0x0
#define I2C_RXOVF_MASK  0x00000080UL    // Receiver Overflow
#define I2C_RXOVF_BPOS  7UL             // 1 - This bit is set whenever FIFO is full and a new
                                        // byte is received. The new byte is not
                                        // acknowledged and contents of the FIFO remains
                                        // unchanged.

                                        // Properties: Bit: 6, Type: ro, Reset Value: 0x0
#define I2C_TXDV_MASK   0x00000040UL    // Transmit Data Valid - SW should not use this to
#define I2C_TXDV_BPOS   6UL             // determine data completion, it is the RAW value
                                        // on the interface.
                                        // Please use COMP in the ISR.
                                        // 1 - still a byte of data to be transmitted by the
                                        // interface.

                                        // Properties: Bit: 5, Type: ro, Reset Value: 0x0
#define I2C_RXDV_MASK   0x00000020UL    // Receiver Data Valid
#define I2C_RXDV_BPOS   5UL             // 1 -valid, new data to be read from the interface.

// RESERVED                                Properties: Bit: 4, Type: ro, Reset Value: 0x0

                                        // Properties: Bit: 3, Type: ro, Reset Value: 0x0
#define I2C_RXRW_MASK   0x00000008UL    // RX read_write
#define I2C_RXRW_BPOS   3UL             // 1 - mode of the transmission received from a
                                        // master.

// RESERVED                                Properties: Bits: 2:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (I2C) ADDR_REG
//
// Name                    I2C_ADDR_REG
// Software Name           ADDR
// Relative Address        0x00000008
// Absolute Address        i2c0: 0xE0004008
//                         i2c1: 0xE0005008
// Width                   16 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             IIC Address register
//
// Register I2C_ADDR_REG Details
//
// RESERVED                               Properties: Bits: 15:10, Type: ro, Reset Value: 0x0

                                       // Properties: Bits: 9:0, Type: rw, Reset Value: 0x0
#define I2C_ADDR_MASK  0x000003FFUL    // Address
#define I2C_ADDR_BPOS  0UL             // 0 - 1024: Normal addressing mode uses add[6:0].
                                       // Extended addressing mode uses add[9:0].


//------------------------------------------------------------------------------
//
// Register (I2C) DATA
//
// Name                    I2C_DATA_REG
// Software Name           DATA
// Relative Address        0x0000000C
// Absolute Address        i2c0: 0xE000400C
//                         i2c1: 0xE000500C
// Width                   16 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             IIC data register
//
// Register I2C_DATA_REG Details
//
                                       // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
#define I2C_DATA_MASK  0x000000FFUL    // data
#define I2C_DATA_BPOS  0UL             // 0 -255: When written to, the data register sets data
                                       // to transmit. When read from, the data register
                                       // reads the last received byte of data.


//------------------------------------------------------------------------------
//
// Register (I2C) INT_STS
//
// Name                    I2C_INT_STS_REG
// Software Name           ISR
// Relative Address        0x00000010
// Absolute Address        i2c0: 0xE0004010
//                         i2c1: 0xE0005010
// Width                   16 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             IIC interrupt status register
//
// Register I2C_INT_STS_REG Details
//
// RESERVED                                           Properties: Bits: 15:10, Type: ro, Reset Value: 0x0

                                                   // Properties: Bit: 9, Type: wtc, Reset Value: 0x0
#define I2C_INT_STS_ARB_LOST_MASK  0x00000200UL    // arbitration lost
#define I2C_INT_STS_ARB_LOST_BPOS  9UL             // 1 = master loses bus ownership during a transfer
                                                   // due to ongoing arbitration

// RESERVED                                           Properties: Bit: 8, Type: ro, Reset Value: 0x0

                                                   // Properties: Bit: 7, Type: wtc, Reset Value: 0x0
#define I2C_INT_STS_RX_UNF_MASK    0x00000080UL    // FIFO receive underflow
#define I2C_INT_STS_RX_UNF_BPOS    7UL             // = host attempts to read from the I2C data
                                                   // egister more times than the value of the transfer
                                                   // ize register plus one

                                                   // Properties: Bit: 6, Type: wtc, Reset Value: 0x0
#define I2C_INT_STS_TX_OVF_MASK    0x00000040UL    // FIFO transmit overflow
#define I2C_INT_STS_TX_OVF_BPOS    6UL             // 1 = host attempts to write to the I2C data register
                                                   // more times than the FIFO depth

                                                   // Properties: Bit: 5, Type: wtc, Reset Value: 0x0
#define I2C_INT_STS_RX_OVF_MASK    0x00000020UL    // Receive overflow
#define I2C_INT_STS_RX_OVF_BPOS    5UL             // 1 = This bit is set whenever FIFO is full and a new
                                                   // byte is received. The new byte is not
                                                   // acknowledged and contents of the FIFO remains
                                                   // unchanged.

                                                   // Properties: Bit: 4, Type: wtc, Reset Value: 0x0
#define I2C_INT_STS_SLV_RDY_MASK   0x00000010UL    // Monitored slave ready
#define I2C_INT_STS_SLV_RDY_BPOS   4UL             // 1=
                                                   // addressed slave returns ACK.

                                                   // Properties: Bit: 3, Type: wtc, Reset Value: 0x0
#define I2C_INT_STS_TO_MASK        0x00000008UL    // Transfer time out
#define I2C_INT_STS_TO_BPOS        3UL             // 1=
                                                   // I2C sclk line is kept low for longer time

                                                   // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
#define I2C_INT_STS_NACK_MASK      0x00000004UL    // Transfer not acknowledged
#define I2C_INT_STS_NACK_BPOS      2UL             // = slave responds with a NACK or master
                                                   // erminates the transfer before all data is supplied

                                                   // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
#define I2C_INT_STS_DATA_MASK      0x00000002UL    // More data
#define I2C_INT_STS_DATA_BPOS      1UL             // 1=
                                                   // Data being sent or received

                                                   // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
#define I2C_INT_STS_COMP_MASK      0x00000001UL    // Transfer complete
#define I2C_INT_STS_COMP_BPOS      0UL             // 1=
                                                   // transfer is complete


//------------------------------------------------------------------------------
//
// Register (I2C) TRSIZE_REG
//
// Name                      I2C_TRSIZE_REG
// Software Name             TRANS_SIZE
// Relative Address          0x00000014
// Absolute Address          i2c0: 0xE0004014
//                           i2c1: 0xE0005014
// Width                     8 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               Transfer Size Register
//
// Register I2C_TRSIZE_REG Details
//         This register's meaning varies according to the operating mode as follows:
//         * Master transmitter mode: number of data bytes still not transmitted minus one
//         * Master receiver mode: number of data bytes that are still expected to be received
//         * Slave transmitter mode: number of bytes remaining in the FIFO after the master terminates the transfer
//         * Slave receiver mode: number of valid data bytes in the FIFO
//         This register is cleared if CLR_FIFO bit in the control register is set.
//
                                                // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
#define I2C_TRANSFER_SIZE_MASK  0x000000FFUL    // Transfer Size
#define I2C_TRANSFER_SIZE_BPOS  0UL             // 0-255


//------------------------------------------------------------------------------
//
// Register (I2C) SLVMON_PAUSE
//
// Name                      I2C_SLVMON_PAUSE_REG
// Software Name             SLV_PAUSE
// Relative Address          0x00000018
// Absolute Address          i2c0: 0xE0004018
//                           i2c1: 0xE0005018
// Width                     8 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               Slave Monitor Pause Register
//
// Register I2C_SLVMON_PAUSE_REG Details
//
// RESERVED                                       Properties: Bits: 7:4, Type: ro, Reset Value: 0x0

                                               // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
#define I2C_SLVMON_PAUSE_MASK  0x0000000FUL    // pause interval
#define I2C_SLVMON_PAUSE_BPOS  0UL             // 0 - 7: pause interval


//------------------------------------------------------------------------------
//
// Register (I2C) TIMEOUT
//
// Name                    I2C_TIMEOUT_REG0
// Software Name           TIME_OUT
// Relative Address        0x0000001C
// Absolute Address        i2c0: 0xE000401C
//                         i2c1: 0xE000501C
// Width                   8 bits
// Access Type             rw
// Reset Value             0x0000001F
// Description             Time out register
//
// Register I2C_TIMEOUT_REG0 Details
//
                                          // Properties: Bits: 7:0, Type: rw, Reset Value: 0x1F
#define I2C_TIMEOUT_MASK  0x000000FFUL    // Time Out
#define I2C_TIMEOUT_BPOS  0UL             // 255 - 31 : value of time out register


//------------------------------------------------------------------------------
//
// Register (I2C) INT_MASK
//
// Name                    I2C_INT_MASK_REG
// Software Name           IMR
// Relative Address        0x00000020
// Absolute Address        i2c0: 0xE0004020
//                         i2c1: 0xE0005020
// Width                   16 bits
// Access Type             ro
// Reset Value             0x000002FF
// Description             Interrupt mask register
//
// Register I2C_INT_MASK_REG Details
//         Each bit in this register corresponds to a bit in the interrupt status register. If bit i in the interrupt mask
//         register is set, the corresponding bit in the interrupt status register is ignored. Otherwise, an interrupt is
//         generated whenever bit i in the interrupt status register is set.
//         Bits in this register are set through a write to the interrupt disable register and are cleared through a write
//         to the interrupt enable register.
//         All mask bits are set and all interrupts are disabled after reset.
//         Interrupt mask register has the same format as the interrupt status register.
//
// RESERVED                                            Properties: Bits: 15:10, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 9, Type: ro, Reset Value: 0x1
#define I2C_INT_MASK_ARB_LOST_MASK  0x00000200UL    // arbitration lost
#define I2C_INT_MASK_ARB_LOST_BPOS  9UL             // 1 = Mask this interrupt
                                                    // 0 = unmask this interrupt

// RESERVED                                            Properties: Bit: 8, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 7, Type: ro, Reset Value: 0x1
#define I2C_INT_MASK_RX_UNF_MASK    0x00000080UL    // FIFO receive underflow
#define I2C_INT_MASK_RX_UNF_BPOS    7UL             // 1 = Mask this interrupt
                                                    // 0 = unmask this interrupt

                                                    // Properties: Bit: 6, Type: ro, Reset Value: 0x1
#define I2C_INT_MASK_TX_OVF_MASK    0x00000040UL    // FIFO transmit overflow
#define I2C_INT_MASK_TX_OVF_BPOS    6UL             // 1 = Mask this interrupt
                                                    // 0 = unmask this interrupt

                                                    // Properties: Bit: 5, Type: ro, Reset Value: 0x1
#define I2C_INT_MASK_RX_OVF_MASK    0x00000020UL    // Receive overflow
#define I2C_INT_MASK_RX_OVF_BPOS    5UL             // 1 = Mask this interrupt
                                                    // 0 = unmask this interrupt

                                                    // Properties: Bit: 4, Type: ro, Reset Value: 0x1
#define I2C_INT_MASK_SLV_RDY_MASK   0x00000010UL    // Monitored slave ready
#define I2C_INT_MASK_SLV_RDY_BPOS   4UL             // 1 = Mask this interrupt
                                                    // 0 = unmask this interrupt

                                                    // Properties: Bit: 3, Type: ro, Reset Value: 0x1
#define I2C_INT_MASK_TO_MASK        0x00000008UL    // Transfer time out
#define I2C_INT_MASK_TO_BPOS        3UL             // 1 = Mask this interrupt
                                                    // 0 = unmask this interrupt

                                                    // Properties: Bit: 2, Type: ro, Reset Value: 0x1
#define I2C_INT_MASK_NACK_MASK      0x00000004UL    // Transfer not acknowledged
#define I2C_INT_MASK_NACK_BPOS      2UL             // 1 = Mask this interrupt
                                                    // 0 = unmask this interrupt

                                                    // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define I2C_INT_MASK_DATA_MASK      0x00000002UL    // More data
#define I2C_INT_MASK_DATA_BPOS      1UL             // 1 = Mask this interrupt
                                                    // 0 = unmask this interrupt

                                                    // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define I2C_INT_MASK_COMP_MASK      0x00000001UL    // Transfer complete
#define I2C_INT_MASK_COMP_BPOS      0UL             // 1 = Mask this interrupt
                                                    // 0 = unmask this interrupt


//------------------------------------------------------------------------------
//
// Register (I2C) INT_EN
//
// Name                     I2C_INT_EN_REG
// Software Name            IER
// Relative Address         0x00000024
// Absolute Address         i2c0: 0xE0004024
//                          i2c1: 0xE0005024
// Width                    16 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Interrupt Enable Register
//
// Register I2C_INT_EN_REG Details
//         This register has the same format as the interrupt status register.
//         Setting a bit in the interrupt enable register clears the corresponding mask bit in the interrupt mask register,
//         effectively enabling corresponding interrupt to be generated.
//
// RESERVED                                          Properties: Bits: 15:10, Type: ro, Reset Value: 0x0

                                                  // Properties: Bit: 9, Type: wo, Reset Value: 0x0
#define I2C_INT_EN_ARB_LOST_MASK  0x00000200UL    // arbitration lost
#define I2C_INT_EN_ARB_LOST_BPOS  9UL             // 1 = enable this interrupt

// RESERVED                                          Properties: Bit: 8, Type: ro, Reset Value: 0x0

                                                  // Properties: Bit: 7, Type: wo, Reset Value: 0x0
#define I2C_INT_EN_RX_UNF_MASK    0x00000080UL    // FIFO receive underflow
#define I2C_INT_EN_RX_UNF_BPOS    7UL             // 1 = enable this interrupt

                                                  // Properties: Bit: 6, Type: wo, Reset Value: 0x0
#define I2C_INT_EN_TX_OVF_MASK    0x00000040UL    // FIFO transmit overflow
#define I2C_INT_EN_TX_OVF_BPOS    6UL             // 1 = enable this interrupt

                                                  // Properties: Bit: 5, Type: wo, Reset Value: 0x0
#define I2C_INT_EN_RX_OVF_MASK    0x00000020UL    // Receive overflow
#define I2C_INT_EN_RX_OVF_BPOS    5UL             // 1 = enable this interrupt

                                                  // Properties: Bit: 4, Type: wo, Reset Value: 0x0
#define I2C_INT_EN_SLV_RDY_MASK   0x00000010UL    // Monitored slave ready
#define I2C_INT_EN_SLV_RDY_BPOS   4UL             // 1 = enable this interrupt

                                                  // Properties: Bit: 3, Type: wo, Reset Value: 0x0
#define I2C_INT_EN_TO_MASK        0x00000008UL    // Transfer time out
#define I2C_INT_EN_TO_BPOS        3UL             // 1 = enable this interrupt

                                                  // Properties: Bit: 2, Type: wo, Reset Value: 0x0
#define I2C_INT_EN_NACK_MASK      0x00000004UL    // Transfer not acknowledged
#define I2C_INT_EN_NACK_BPOS      2UL             // 1 = enable this interrupt

                                                  // Properties: Bit: 1, Type: wo, Reset Value: 0x0
#define I2C_INT_EN_DATA_MASK      0x00000002UL    // More data
#define I2C_INT_EN_DATA_BPOS      1UL             // 1 = enable this interrupt

                                                  // Properties: Bit: 0, Type: wo, Reset Value: 0x0
#define I2C_INT_EN_COMP_MASK      0x00000001UL    // Transfer complete
#define I2C_INT_EN_COMP_BPOS      0UL             // Will be set when transfer is complete
                                                  // 1 = enable this interrupt


//------------------------------------------------------------------------------
//
// Register (I2C) INT_DIS
//
// Name                     I2C_INT_DIS_REG0
// Software Name            IDR
// Relative Address         0x00000028
// Absolute Address         i2c0: 0xE0004028
//                          i2c1: 0xE0005028
// Width                    16 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Interrupt Disable Register
//
// Register I2C_INT_DIS_REG0 Details
//         This register has the same format as the interrupt status register.
//         Setting a bit in the interrupt disable register sets the corresponding mask bit in the interrupt mask register,
//         effectively disabling corresponding interrupt to be generated.
//
// RESERVED                                           Properties: Bits: 15:10, Type: ro, Reset Value: 0x0

                                                   // Properties: Bit: 9, Type: wo, Reset Value: 0x0
#define I2C_INT_DIS_ARB_LOST_MASK  0x00000200UL    // arbitration lost
#define I2C_INT_DIS_ARB_LOST_BPOS  9UL             // 1 = disable this interrupt

// RESERVED                                           Properties: Bit: 8, Type: ro, Reset Value: 0x0

                                                   // Properties: Bit: 7, Type: wo, Reset Value: 0x0
#define I2C_INT_DIS_RX_UNF_MASK    0x00000080UL    // FIFO receive underflow
#define I2C_INT_DIS_RX_UNF_BPOS    7UL             // 1 = disable this interrupt

                                                   // Properties: Bit: 6, Type: wo, Reset Value: 0x0
#define I2C_INT_DIS_TX_OVF_MASK    0x00000040UL    // FIFO transmit overflow
#define I2C_INT_DIS_TX_OVF_BPOS    6UL             // 1 = disable this interrupt

                                                   // Properties: Bit: 5, Type: wo, Reset Value: 0x0
#define I2C_INT_DIS_RX_OVF_MASK    0x00000020UL    // Receive overflow
#define I2C_INT_DIS_RX_OVF_BPOS    5UL             // 1 = disable this interrupt

                                                   // Properties: Bit: 4, Type: wo, Reset Value: 0x0
#define I2C_INT_DIS_SLV_RDY_MASK   0x00000010UL    // Monitored slave ready
#define I2C_INT_DIS_SLV_RDY_BPOS   4UL             // 1 = disable this interrupt

                                                   // Properties: Bit: 3, Type: wo, Reset Value: 0x0
#define I2C_INT_DIS_TO_MASK        0x00000008UL    // Transfer time out
#define I2C_INT_DIS_TO_BPOS        3UL             // 1 = disable this interrupt

                                                   // Properties: Bit: 2, Type: wo, Reset Value: 0x0
#define I2C_INT_DIS_NACK_MASK      0x00000004UL    // Transfer not acknowledged
#define I2C_INT_DIS_NACK_BPOS      2UL             // 1 = disable this interrupt

                                                   // Properties: Bit: 1, Type: wo, Reset Value: 0x0
#define I2C_INT_DIS_DATA_MASK      0x00000002UL    // Master Write or Slave Transmitter
#define I2C_INT_DIS_DATA_BPOS      1UL             // Master Read or Slave Receiver
                                                   // 1 = disable this interrupt

                                                   // Properties: Bit: 0, Type: wo, Reset Value: 0x0
#define I2C_INT_DIS_COMP_MASK      0x00000001UL    // Transfer complete
#define I2C_INT_DIS_COMP_BPOS      0UL             // Will be set when transfer is complete
                                                   // 1 = disable this interrupt


#endif // PS7_I2C_H

