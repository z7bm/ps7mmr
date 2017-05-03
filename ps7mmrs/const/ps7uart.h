//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_UART
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

#ifndef PS7_UART_H
#define PS7_UART_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    UART0 MMRs
//
//              Name                          Address                    Width   Type     Reset Value   Description
const uintptr_t UART_CTRL_REG0              = UART0_ADDR + 0x00000000; //  32    mixed    0x00000128    UART Control Register
const uintptr_t UART_MODE_REG0              = UART0_ADDR + 0x00000004; //  32    mixed    0x00000000    UART Mode Register
const uintptr_t UART_INT_EN_REG0            = UART0_ADDR + 0x00000008; //  32    mixed    0x00000000    Interrupt Enable Register
const uintptr_t UART_INT_DIS_REG0           = UART0_ADDR + 0x0000000C; //  32    mixed    0x00000000    Interrupt Disable Register
const uintptr_t UART_INT_MASK_REG0          = UART0_ADDR + 0x00000010; //  32    ro       0x00000000    Interrupt Mask Register
const uintptr_t UART_CHNL_INT_STS_REG0      = UART0_ADDR + 0x00000014; //  32    wtc      0x00000000    Channel Interrupt Status Register
const uintptr_t UART_BAUD_RATE_GEN_REG0     = UART0_ADDR + 0x00000018; //  32    mixed    0x0000028B    Baud Rate Generator Register
const uintptr_t UART_RX_TIMEOUT_REG0        = UART0_ADDR + 0x0000001C; //  32    mixed    0x00000000    Receiver Timeout Register
const uintptr_t UART_RX_FIFO_TRG_LVL_REG0   = UART0_ADDR + 0x00000020; //  32    mixed    0x00000020    Receiver FIFO Trigger Level Register
const uintptr_t UART_MODEM_CTRL_REG0        = UART0_ADDR + 0x00000024; //  32    mixed    0x00000000    Modem Control Register
const uintptr_t UART_MODEM_STS_REG0         = UART0_ADDR + 0x00000028; //  32    mixed    x             Modem Status Register
const uintptr_t UART_CHANNEL_STS_REG0       = UART0_ADDR + 0x0000002C; //  32    ro       0x00000000    Channel Status Register
const uintptr_t UART_TX_RX_FIFO_REG0        = UART0_ADDR + 0x00000030; //  32    mixed    0x00000000    Transmit and Receive FIFO
const uintptr_t UART_BAUD_RATE_DIVIDER_REG0 = UART0_ADDR + 0x00000034; //  32    mixed    0x0000000F    Baud Rate Divider Register
const uintptr_t UART_FLOW_DELAY_REG0        = UART0_ADDR + 0x00000038; //  32    mixed    0x00000000    Flow Control Delay Register
const uintptr_t UART_TX_FIFO_TRG_LVL_REG0   = UART0_ADDR + 0x00000044; //  32    mixed    0x00000020    Transmitter FIFO Trigger Level Register
//------------------------------------------------------------------------------
//
//    UART1 MMRs
//
//              Name                          Address                    Width   Type     Reset Value   Description
const uintptr_t UART_CTRL_REG1              = UART1_ADDR + 0x00000000; //  32    mixed    0x00000128    UART Control Register
const uintptr_t UART_MODE_REG1              = UART1_ADDR + 0x00000004; //  32    mixed    0x00000000    UART Mode Register
const uintptr_t UART_INT_EN_REG1            = UART1_ADDR + 0x00000008; //  32    mixed    0x00000000    Interrupt Enable Register
const uintptr_t UART_INT_DIS_REG1           = UART1_ADDR + 0x0000000C; //  32    mixed    0x00000000    Interrupt Disable Register
const uintptr_t UART_INT_MASK_REG1          = UART1_ADDR + 0x00000010; //  32    ro       0x00000000    Interrupt Mask Register
const uintptr_t UART_CHNL_INT_STS_REG1      = UART1_ADDR + 0x00000014; //  32    wtc      0x00000000    Channel Interrupt Status Register
const uintptr_t UART_BAUD_RATE_GEN_REG1     = UART1_ADDR + 0x00000018; //  32    mixed    0x0000028B    Baud Rate Generator Register
const uintptr_t UART_RX_TIMEOUT_REG1        = UART1_ADDR + 0x0000001C; //  32    mixed    0x00000000    Receiver Timeout Register
const uintptr_t UART_RX_FIFO_TRG_LVL_REG1   = UART1_ADDR + 0x00000020; //  32    mixed    0x00000020    Receiver FIFO Trigger Level Register
const uintptr_t UART_MODEM_CTRL_REG1        = UART1_ADDR + 0x00000024; //  32    mixed    0x00000000    Modem Control Register
const uintptr_t UART_MODEM_STS_REG1         = UART1_ADDR + 0x00000028; //  32    mixed    x             Modem Status Register
const uintptr_t UART_CHANNEL_STS_REG1       = UART1_ADDR + 0x0000002C; //  32    ro       0x00000000    Channel Status Register
const uintptr_t UART_TX_RX_FIFO_REG1        = UART1_ADDR + 0x00000030; //  32    mixed    0x00000000    Transmit and Receive FIFO
const uintptr_t UART_BAUD_RATE_DIVIDER_REG1 = UART1_ADDR + 0x00000034; //  32    mixed    0x0000000F    Baud Rate Divider Register
const uintptr_t UART_FLOW_DELAY_REG1        = UART1_ADDR + 0x00000038; //  32    mixed    0x00000000    Flow Control Delay Register
const uintptr_t UART_TX_FIFO_TRG_LVL_REG1   = UART1_ADDR + 0x00000044; //  32    mixed    0x00000020    Transmitter FIFO Trigger Level Register
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (UART) CTRL
//
// Name                     UART_CTRL_REG
// Software Name            CR
// Relative Address         0x00000000
// Absolute Address         uart0: 0xE0000000
//                          uart1: 0xE0001000
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000128
// Description              UART Control Register
//
// Register UART_CTRL_REG Details
//         The UART Control register is used to enable and reset the transmitter and receiver blocks. It also controls
//         the receiver timeout and the transmission of breaks.
//
// RESERVED                                               Properties: Bits: 31:9, Type: ro, Reset Value: 0x0

                                                       // Properties: Bit: 8, Type: rw, Reset Value: 0x1
const uintptr_t UART_CTRL_STPBRK_MASK = 0x00000100;    // Stop transmitter break:
const uintptr_t UART_CTRL_STPBRK_BPOS = 8;             // 0: no affect
                                                       // 1: stop transmission of the break after a minimum
                                                       // of one character length and transmit a high level
                                                       // during 12 bit periods. It can be set regardless of
                                                       // the value of STTBRK.

                                                       // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t UART_CTRL_STTBRK_MASK = 0x00000080;    // Start transmitter break:
const uintptr_t UART_CTRL_STTBRK_BPOS = 7;             // 0: no affect
                                                       // 1: start to transmit a break after the characters
                                                       // currently present in the FIFO and the transmit
                                                       // shift register have been transmitted. It can only be
                                                       // set if STPBRK (Stop transmitter break) is not high.

                                                       // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t UART_CTRL_RSTTO_MASK  = 0x00000040;    // Restart receiver timeout counter:
const uintptr_t UART_CTRL_RSTTO_BPOS  = 6;             // 1: receiver timeout counter is restarted.
                                                       // This bit is self clearing once the restart has
                                                       // completed.

                                                       // Properties: Bit: 5, Type: rw, Reset Value: 0x1
const uintptr_t UART_CTRL_TXDIS_MASK  = 0x00000020;    // Transmit disable:
const uintptr_t UART_CTRL_TXDIS_BPOS  = 5;             // 0: enable transmitter
                                                       // 1: disable transmitter

                                                       // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t UART_CTRL_TXEN_MASK   = 0x00000010;    // Transmit enable:
const uintptr_t UART_CTRL_TXEN_BPOS   = 4;             // 0: disable transmitter
                                                       // 1: enable transmitter, provided the TXDIS field is
                                                       // set to 0.

                                                       // Properties: Bit: 3, Type: rw, Reset Value: 0x1
const uintptr_t UART_CTRL_RXDIS_MASK  = 0x00000008;    // Receive disable:
const uintptr_t UART_CTRL_RXDIS_BPOS  = 3;             // 0: enable
                                                       // 1: disable, regardless of the value of RXEN

                                                       // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t UART_CTRL_RXEN_MASK   = 0x00000004;    // Receive enable:
const uintptr_t UART_CTRL_RXEN_BPOS   = 2;             // 0: disable
                                                       // 1: enable
                                                       // When set to one, the receiver logic is enabled,
                                                       // provided the RXDIS field is set to zero.

                                                       // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t UART_CTRL_TXRES_MASK  = 0x00000002;    // Software reset for Tx data path:
const uintptr_t UART_CTRL_TXRES_BPOS  = 1;             // 0: no affect
                                                       // 1: transmitter logic is reset and all pending
                                                       // transmitter data is discarded
                                                       // This bit is self clearing once the reset has
                                                       // completed.

                                                       // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t UART_CTRL_RXRES_MASK  = 0x00000001;    // Software reset for Rx data path:
const uintptr_t UART_CTRL_RXRES_BPOS  = 0;             // 0: no affect
                                                       // 1: receiver logic is reset and all pending receiver
                                                       // data is discarded.
                                                       // This bit is self clearing once the reset has
                                                       // completed.


//------------------------------------------------------------------------------
//
// Register (UART) MODE
//
// Name                     UART_MODE_REG
// Software Name            MR
// Relative Address         0x00000004
// Absolute Address         uart0: 0xE0000004
//                          uart1: 0xE0001004
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              UART Mode Register
//
// Register UART_MODE_REG Details
//         The UART Mode register defines the setup of the data format to be transmitted or received. If this register
//         is modified during transmission or reception, data validity cannot be guaranteed.
//
// RESERVED                                               Properties: Bits: 31:12, Type: ro, Reset Value: 0x0

// RESERVED                                               Properties: Bit: 11, Type: rw, Reset Value: 0x0

// RESERVED                                               Properties: Bit: 10, Type: rw, Reset Value: 0x0

                                                       // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t UART_MODE_CHMODE_MASK = 0x00000300;    // Channel mode: Defines the mode of operation of
const uintptr_t UART_MODE_CHMODE_BPOS = 8;             // the UART.
                                                       // 00: normal
                                                       // 01: automatic echo
                                                       // 10: local loopback
                                                       // 11: remote loopback

                                                       // Properties: Bits: 7:6, Type: rw, Reset Value: 0x0
const uintptr_t UART_MODE_NBSTOP_MASK = 0x000000C0;    // Number of stop bits: Defines the number of stop
const uintptr_t UART_MODE_NBSTOP_BPOS = 6;             // bits to detect on receive and to generate on
                                                       // transmit.
                                                       // 00: 1 stop bit
                                                       // 01: 1.5 stop bits
                                                       // 10: 2 stop bits
                                                       // 11: reserved

                                                       // Properties: Bits: 5:3, Type: rw, Reset Value: 0x0
const uintptr_t UART_MODE_PAR_MASK    = 0x00000038;    // Parity type select: Defines the expected parity to
const uintptr_t UART_MODE_PAR_BPOS    = 3;             // check on receive and the parity to generate on
                                                       // transmit.
                                                       // 000: even parity
                                                       // 001: odd parity
                                                       // 010: forced to 0 parity (space)
                                                       // 011: forced to 1 parity (mark)
                                                       // 1xx: no parity

                                                       // Properties: Bits: 2:1, Type: rw, Reset Value: 0x0
const uintptr_t UART_MODE_CHRL_MASK   = 0x00000006;    // Character length select: Defines the number of
const uintptr_t UART_MODE_CHRL_BPOS   = 1;             // bits in each character.
                                                       // 11: 6 bits
                                                       // 10: 7 bits
                                                       // 0x: 8 bits

                                                       // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t UART_MODE_CLKS_MASK   = 0x00000001;    // Clock source select: This field defines whether a
const uintptr_t UART_MODE_CLKS_BPOS   = 0;             // pre-scalar of 8 is applied to the baud rate
                                                       // generator input clock.
                                                       // 0: clock source is uart_ref_clk
                                                       // 1: clock source is uart_ref_clk/8


//------------------------------------------------------------------------------
//
// Register (UART) INT_EN
//
// Name                    UART_INT_EN_REG
// Software Name           IER
// Relative Address        0x00000008
// Absolute Address        uart0: 0xE0000008
//                         uart1: 0xE0001008
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Interrupt Enable Register
//
// Register UART_INT_EN_REG Details
//         This write only register is used to enable interrupts. When any bit is written high, the corresponding
//         interrupt is enabled. Writing a low to any bit has no effect.
//
// RESERVED                                                  Properties: Bits: 31:13, Type: ro, Reset Value: 0x0

                                                          // Properties: Bit: 12, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_TOVR_MASK    = 0x00001000;    // Transmitter FIFO Overflow interrupt:
const uintptr_t UART_INT_EN_TOVR_BPOS    = 12;            // 0: no affect
                                                          // 1: enable (clears mask = 0)

                                                          // Properties: Bit: 11, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_TNFUL_MASK   = 0x00000800;    // Transmitter FIFO Nearly Full interrupt:
const uintptr_t UART_INT_EN_TNFUL_BPOS   = 11;            // 0: no affect
                                                          // 1: enable (clears mask = 0)

                                                          // Properties: Bit: 10, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_TTRIG_MASK   = 0x00000400;    // Transmitter FIFO Trigger interrupt:
const uintptr_t UART_INT_EN_TTRIG_BPOS   = 10;            // 0: disable 1: enable

                                                          // Properties: Bit: 9, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_DMSI_MASK    = 0x00000200;    // Delta Modem Status Indicator interrupt:
const uintptr_t UART_INT_EN_DMSI_BPOS    = 9;             // 0: no affect
                                                          // 1: enable (clears mask = 0)

                                                          // Properties: Bit: 8, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_TIMEOUT_MASK = 0x00000100;    // Receiver Timeout Error interrupt:
const uintptr_t UART_INT_EN_TIMEOUT_BPOS = 8;             // 0: no affect
                                                          // 1: enable (clears mask = 0)

                                                          // Properties: Bit: 7, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_PARE_MASK    = 0x00000080;    // Receiver Parity Error interrupt:
const uintptr_t UART_INT_EN_PARE_BPOS    = 7;             // 0: disable 1: enable

                                                          // Properties: Bit: 6, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_FRAME_MASK   = 0x00000040;    // Receiver Framing Error interrupt:
const uintptr_t UART_INT_EN_FRAME_BPOS   = 6;             // 0: no affect
                                                          // 1: enable (clears mask = 0)

                                                          // Properties: Bit: 5, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_ROVR_MASK    = 0x00000020;    // Receiver Overflow Error interrupt:
const uintptr_t UART_INT_EN_ROVR_BPOS    = 5;             // 0: no affect
                                                          // 1: enable (clears mask = 0)

                                                          // Properties: Bit: 4, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_TFUL_MASK    = 0x00000010;    // Transmitter FIFO Full interrupt:
const uintptr_t UART_INT_EN_TFUL_BPOS    = 4;             // 0: no affect
                                                          // 1: enable (clears mask = 0)

                                                          // Properties: Bit: 3, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_TEMPTY_MASK  = 0x00000008;    // Transmitter FIFO Empty interrupt:
const uintptr_t UART_INT_EN_TEMPTY_BPOS  = 3;             // 0: disable
                                                          // 1: enable

                                                          // Properties: Bit: 2, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_RFUL_MASK    = 0x00000004;    // Receiver FIFO Full interrupt:
const uintptr_t UART_INT_EN_RFUL_BPOS    = 2;             // 0: no affect
                                                          // 1: enable (clears mask = 0)

                                                          // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_REMPTY_MASK  = 0x00000002;    // Receiver FIFO Empty interrupt:
const uintptr_t UART_INT_EN_REMPTY_BPOS  = 1;             // 0: no affect
                                                          // 1: enable (clears mask = 0)

                                                          // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_EN_RTRIG_MASK   = 0x00000001;    // Receiver FIFO Trigger interrupt:
const uintptr_t UART_INT_EN_RTRIG_BPOS   = 0;             // 0: no affect
                                                          // 1: enable (clears mask = 0)


//------------------------------------------------------------------------------
//
// Register (UART) INT_DIS
//
// Name                     UART_INT_DIS_REG
// Software Name            IDR
// Relative Address         0x0000000C
// Absolute Address         uart0: 0xE000000C
//                          uart1: 0xE000100C
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Interrupt Disable Register
//
// Register UART_INT_DIS_REG Details
//         This write only register is used to disable interrupts. When any bit is written high, the corresponding
//         interrupt is disabled. Writing a low to any bit has no effect.
//
// RESERVED                                                   Properties: Bits: 31:13, Type: ro, Reset Value: 0x0

                                                           // Properties: Bit: 12, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_TOVR_MASK    = 0x00001000;    // Transmitter FIFO Overflow interrupt:
const uintptr_t UART_INT_DIS_TOVR_BPOS    = 12;            // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 11, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_TNFUL_MASK   = 0x00000800;    // Transmitter FIFO Nearly Full interrupt:
const uintptr_t UART_INT_DIS_TNFUL_BPOS   = 11;            // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 10, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_TTRIG_MASK   = 0x00000400;    // Transmitter FIFO Trigger interrupt:
const uintptr_t UART_INT_DIS_TTRIG_BPOS   = 10;            // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 9, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_DMSI_MASK    = 0x00000200;    // Delta Modem Status Indicator interrupt:
const uintptr_t UART_INT_DIS_DMSI_BPOS    = 9;             // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 8, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_TIMEOUT_MASK = 0x00000100;    // Receiver Timeout Error interrupt:
const uintptr_t UART_INT_DIS_TIMEOUT_BPOS = 8;             // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 7, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_PARE_MASK    = 0x00000080;    // Receiver Parity Error interrupt:
const uintptr_t UART_INT_DIS_PARE_BPOS    = 7;             // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 6, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_FRAME_MASK   = 0x00000040;    // Receiver Framing Error interrupt:
const uintptr_t UART_INT_DIS_FRAME_BPOS   = 6;             // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 5, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_ROVR_MASK    = 0x00000020;    // Receiver Overflow Error interrupt:
const uintptr_t UART_INT_DIS_ROVR_BPOS    = 5;             // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 4, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_TFUL_MASK    = 0x00000010;    // Transmitter FIFO Full interrupt:
const uintptr_t UART_INT_DIS_TFUL_BPOS    = 4;             // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 3, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_TEMPTY_MASK  = 0x00000008;    // Transmitter FIFO Empty interrupt:
const uintptr_t UART_INT_DIS_TEMPTY_BPOS  = 3;             // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 2, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_RFUL_MASK    = 0x00000004;    // Receiver FIFO Full interrupt:
const uintptr_t UART_INT_DIS_RFUL_BPOS    = 2;             // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_REMPTY_MASK  = 0x00000002;    // Receiver FIFO Empty interrupt:
const uintptr_t UART_INT_DIS_REMPTY_BPOS  = 1;             // 0: no affect
                                                           // 1: disable (sets mask = 1)

                                                           // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t UART_INT_DIS_RTRIG_MASK   = 0x00000001;    // Receiver FIFO Trigger interrupt:
const uintptr_t UART_INT_DIS_RTRIG_BPOS   = 0;             // 0: no affect
                                                           // 1: disable (sets mask = 1)


//------------------------------------------------------------------------------
//
// Register (UART) INT_MASK
//
// Name                    UART_INT_MASK_REG
// Software Name           IMR
// Relative Address        0x00000010
// Absolute Address        uart0: 0xE0000010
//                         uart1: 0xE0001010
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Interrupt Mask Register
//
// Register UART_INT_MASK_REG Details
//         This read only register, indicates the current state of the interrupts mask. A high value indicates the
//         interrupt is unmasked and therefore is enabled to generate an interrupt. A low value indicates the
//         interrupt is masked and therefore is disabled from generating an interrupt.
//
// RESERVED                                                    Properties: Bits: 31:13, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 12, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_TOVR_MASK    = 0x00001000;    // Transmitter FIFO Overflow interrupt status:
const uintptr_t UART_INT_MASK_TOVR_BPOS    = 12;            // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 11, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_TNFUL_MASK   = 0x00000800;    // Transmitter FIFO Nearly Full interrupt mask
const uintptr_t UART_INT_MASK_TNFUL_BPOS   = 11;            // status:
                                                            // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 10, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_TTRIG_MASK   = 0x00000400;    // Transmitter FIFO Trigger interrupt mask status:
const uintptr_t UART_INT_MASK_TTRIG_BPOS   = 10;            // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 9, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_DMSI_MASK    = 0x00000200;    // Delta Modem Status Indicator interrupt mask
const uintptr_t UART_INT_MASK_DMSI_BPOS    = 9;             // status:
                                                            // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 8, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_TIMEOUT_MASK = 0x00000100;    // Receiver Timeout Error interrupt mask status:
const uintptr_t UART_INT_MASK_TIMEOUT_BPOS = 8;             // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 7, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_PARE_MASK    = 0x00000080;    // Receiver Parity Error interrupt mask status:
const uintptr_t UART_INT_MASK_PARE_BPOS    = 7;             // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 6, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_FRAME_MASK   = 0x00000040;    // Receiver Framing Error interrupt mask status:
const uintptr_t UART_INT_MASK_FRAME_BPOS   = 6;             // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 5, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_ROVR_MASK    = 0x00000020;    // Receiver Overflow Error interrupt mask status:
const uintptr_t UART_INT_MASK_ROVR_BPOS    = 5;             // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_TFUL_MASK    = 0x00000010;    // Transmitter FIFO Full interrupt mask status:
const uintptr_t UART_INT_MASK_TFUL_BPOS    = 4;             // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_TEMPTY_MASK  = 0x00000008;    // Transmitter FIFO Empty interrupt mask status:
const uintptr_t UART_INT_MASK_TEMPTY_BPOS  = 3;             // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_RFUL_MASK    = 0x00000004;    // Receiver FIFO Full interrupt mask status:
const uintptr_t UART_INT_MASK_RFUL_BPOS    = 2;             // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_REMPTY_MASK  = 0x00000002;    // Receiver FIFO Empty interrupt mask status:
const uintptr_t UART_INT_MASK_REMPTY_BPOS  = 1;             // 0: interrupt is disabled
                                                            // 1: interrupt is enabled

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t UART_INT_MASK_RTRIG_MASK   = 0x00000001;    // Receiver FIFO Trigger interrupt mask status:
const uintptr_t UART_INT_MASK_RTRIG_BPOS   = 0;             // 0: interrupt is enabled
                                                            // 1: interrupt is enabled


//------------------------------------------------------------------------------
//
// Register (UART) CHNL_INT_STS
//
// Name                     UART_CHNL_INT_STS_REG
// Software Name            ISR
// Relative Address         0x00000014
// Absolute Address         uart0: 0xE0000014
//                          uart1: 0xE0001014
// Width                    32 bits
// Access Type              wtc
// Reset Value              0x00000000
// Description              Channel Interrupt Status Register
//
// Register UART_CHNL_INT_STS_REG Details
//         The Channel Interrupt Status register indicates any interrupt events that have occurred since this register
//         was last cleared. The bits in this register are compared with the interrupt mask and used to assert the
//         interrupt output.
//         This register indicated the unmasked status, allowing software to implement a polling method of interrupt
//         handling.
//
// RESERVED                                                        Properties: Bits: 31:13, Type: wtc, Reset Value: 0x0

                                                                // Properties: Bit: 12, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_TOVR_MASK    = 0x00001000;    // Transmitter FIFO Overflow interrupt mask status:
const uintptr_t UART_CHNL_INT_STS_TOVR_BPOS    = 12;            // This event is triggered whenever a new word is
                                                                // pushed into the transmit FIFO when there is not
                                                                // enough room for all of the data. This will be set as
                                                                // a result of any write when the TFUL flag in
                                                                // Channel_sts_reg0 is already set, or a double byte
                                                                // write when the TNFUL flag in Channel_sts_reg0
                                                                // is already set.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 11, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_TNFUL_MASK   = 0x00000800;    // Transmitter FIFO Nearly Full interrupt mask
const uintptr_t UART_CHNL_INT_STS_TNFUL_BPOS   = 11;            // status:
                                                                // This event is triggered whenever a new word is
                                                                // pushed into the transmit FIFO causing the fill
                                                                // level to be such that there is not enough space for
                                                                // a further write of the number of bytes currently
                                                                // specified in the WSIZE bits in the Mode register. If
                                                                // this further write were currently attempted it
                                                                // would cause an overflow.
                                                                // Note that when WSIZE is 00, this assumes that a
                                                                // two byte write would be attempted and hence a
                                                                // single byte write is still possible without overflow
                                                                // by driving byte_sel low for the write.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 10, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_TTRIG_MASK   = 0x00000400;    // Transmitter FIFO Trigger interrupt mask status.
const uintptr_t UART_CHNL_INT_STS_TTRIG_BPOS   = 10;            // This event is triggered whenever a new word is
                                                                // pushed into the transmit FIFO causing the fill
                                                                // level to become equal to the value defined by
                                                                // TTRIG.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 9, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_DMSI_MASK    = 0x00000200;    // Delta Modem Status Indicator interrupt mask
const uintptr_t UART_CHNL_INT_STS_DMSI_BPOS    = 9;             // status:
                                                                // This event is triggered whenever the DCTS,
                                                                // DDSR, TERI, or DDCD in the modem status
                                                                // register are being set.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 8, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_TIMEOUT_MASK = 0x00000100;    // Receiver Timeout Error interrupt mask status:
const uintptr_t UART_CHNL_INT_STS_TIMEOUT_BPOS = 8;             // This event is triggered whenever the receiver
                                                                // timeout counter has expired due to a long idle
                                                                // condition.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 7, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_PARE_MASK    = 0x00000080;    // Receiver Parity Error interrupt mask status:
const uintptr_t UART_CHNL_INT_STS_PARE_BPOS    = 7;             // This event is triggered whenever the received
                                                                // parity bit does not match the expected value.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 6, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_FRAME_MASK   = 0x00000040;    // Receiver Framing Error interrupt mask status:
const uintptr_t UART_CHNL_INT_STS_FRAME_BPOS   = 6;             // This event is triggered whenever the receiver fails
                                                                // to detect a valid stop bit.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 5, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_ROVR_MASK    = 0x00000020;    // Receiver Overflow Error interrupt mask status:
const uintptr_t UART_CHNL_INT_STS_ROVR_BPOS    = 5;             // This event is triggered whenever the contents of
                                                                // the receiver shift register have not yet been
                                                                // transferred to the receiver FIFO and a new start
                                                                // bit is detected. This may be due to the FIFO being
                                                                // full, or due to excessive clock boundary delays.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 4, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_TFUL_MASK    = 0x00000010;    // Transmitter FIFO Full interrupt mask status:
const uintptr_t UART_CHNL_INT_STS_TFUL_BPOS    = 4;             // This event is triggered whenever a new word is
                                                                // inserted into the transmit FIFO causing it to go
                                                                // from a non-full condition to a full condition.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 3, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_TEMPTY_MASK  = 0x00000008;    // Transmitter FIFO Empty interrupt mask status:
const uintptr_t UART_CHNL_INT_STS_TEMPTY_BPOS  = 3;             // This event is triggered whenever the final word is
                                                                // removed from the transmit FIFO.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_RFUL_MASK    = 0x00000004;    // Receiver FIFO Full interrupt mask status:
const uintptr_t UART_CHNL_INT_STS_RFUL_BPOS    = 2;             // This event is triggered whenever a new word is
                                                                // inserted into the receive FIFO causing it to go
                                                                // from a non-full condition to a full condition.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_REMPTY_MASK  = 0x00000002;    // Receiver FIFO Empty interrupt mask status:
const uintptr_t UART_CHNL_INT_STS_REMPTY_BPOS  = 1;             // This event is triggered upon exit of the final word
                                                                // from the receive FIFO.
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred

                                                                // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
const uintptr_t UART_CHNL_INT_STS_RTRIG_MASK   = 0x00000001;    // Receiver FIFO Trigger interrupt mask status:
const uintptr_t UART_CHNL_INT_STS_RTRIG_BPOS   = 0;             // This event is triggered whenever a new word is
                                                                // inserted into the receive FIFO .
                                                                // 0: no interrupt occurred
                                                                // 1: interrupt occurred


//------------------------------------------------------------------------------
//
// Register (UART) BAUD_RATE_GEN
//
// Name                    UART_BAUD_RATE_GEN_REG
// Software Name           BAUDGEN
// Relative Address        0x00000018
// Absolute Address        uart0: 0xE0000018
//                         uart1: 0xE0001018
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x0000028B
// Description             Baud Rate Generator Register.
//
// Register UART_BAUD_RATE_GEN_REG Details
//         The read/write baud rate generator control register controls the amount by which to divide sel_clk to
//         generate the bit rate clock enable, baud_sample.
//
// RESERVED                                                    Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                            // Properties: Bits: 15:0, Type: rw, Reset Value: 0x28B
const uintptr_t UART_BAUD_RATE_GEN_CD_MASK = 0x0000FFFF;    // Baud Rate Clock Divisor Value:
const uintptr_t UART_BAUD_RATE_GEN_CD_BPOS = 0;             // 0: Disables baud_sample
                                                            // 1: Clock divisor bypass (baud_sample = sel_clk)
                                                            // 2 - 65535: baud_sample


//------------------------------------------------------------------------------
//
// Register (UART) RX_TIMEOUT
//
// Name                    UART_RX_TIMEOUT_REG
// Software Name           RXTOUT
// Relative Address        0x0000001C
// Absolute Address        uart0: 0xE000001C
//                         uart1: 0xE000101C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Receiver Timeout Register
//
// Register UART_RX_TIMEOUT_REG Details
//         The read/write Receiver Timeout register is used to enable the UART to detect an idle condition on the
//         receiver data line. The timeout value (RTO) indicates the maximum delay for which the UART should wait
//         for a new character to arrive before issuing a timeout interrupt.
//
// RESERVED                                                  Properties: Bits: 31:8, Type: ro, Reset Value: 0x0

                                                          // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t UART_RX_TIMEOUT_VAL_MASK = 0x000000FF;    // Receiver timeout value:
const uintptr_t UART_RX_TIMEOUT_VAL_BPOS = 0;             // 0: Disables receiver timeout counter
                                                          // 1 - 255: Receiver timeout in number of
                                                          // baud_sample clocks.


//------------------------------------------------------------------------------
//
// Register (UART) RX_FIFO_TRG_LVL
//
// Name                    UART_RX_FIFO_TRG_LVL_REG
// Software Name           RXWM
// Relative Address        0x00000020
// Absolute Address        uart0: 0xE0000020
//                         uart1: 0xE0001020
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000020
// Description             Receiver FIFO Trigger Level Register
//
// Register UART_RX_FIFO_TRG_LVL_REG Details
//         The read/write Receiver FIFO Trigger Level Register is used to set the value at which the receiver FIFO
//         triggers an interrupt event.
//
// RESERVED                                                         Properties: Bits: 31:6, Type: ro, Reset Value: 0x0

                                                                 // Properties: Bits: 5:0, Type: rw, Reset Value: 0x20
const uintptr_t UART_RX_FIFO_TRG_LVL_RTRIG_MASK = 0x0000003F;    // Receiver FIFO trigger level value:
const uintptr_t UART_RX_FIFO_TRG_LVL_RTRIG_BPOS = 0;             // 0: Disables receiver FIFO trigger level function
                                                                 // 1 - 63:Trigger set when receiver FIFO fills to
                                                                 // RTRIG bytes


//------------------------------------------------------------------------------
//
// Register (UART) MODEM_CTRL
//
// Name                    UART_MODEM_CTRL_REG
// Software Name           MODEMCR
// Relative Address        0x00000024
// Absolute Address        uart0: 0xE0000024
//                         uart1: 0xE0001024
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Modem Control Register
//
// Register UART_MODEM_CTRL_REG Details
//         The read/write Modem Control register controls the interface with the modem or data set, or a peripheral
//         device emulating a modem.
//
// RESERVED                                                  Properties: Bits: 31:6, Type: ro, Reset Value: 0x0

                                                          // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t UART_MODEM_CTRL_FCM_MASK = 0x00000020;    // Automatic flow control mode:
const uintptr_t UART_MODEM_CTRL_FCM_BPOS = 5;             // 0: disable
                                                          // Transmission is continuous regardless of the
                                                          // value of the EMIOUARTxCTSN input, and the
                                                          // EMIOUARTxRTSN output is driven completely
                                                          // under software control.
                                                          // 1: enable
                                                          // Transmission will only occur when the
                                                          // EMIOUARTxCTSN input is asserted low, and the
                                                          // EMIOUARTxRTSN output is driven using a
                                                          // compare of the RX FIFO fill level to the
                                                          // programmed FDEL value.

// RESERVED                                                  Properties: Bits: 4:2, Type: ro, Reset Value: 0x0

                                                          // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t UART_MODEM_CTRL_RTS_MASK = 0x00000002;    // Request to send output control:
const uintptr_t UART_MODEM_CTRL_RTS_BPOS = 1;             // This bit is ignored if automatic flow control mode
                                                          // is enabled by FCM being high. If FCM is low, the
                                                          // value of this bit is inverted when applied to the
                                                          // EMIOUARTxRTSN output.
                                                          // 0: EMIOUARTxRTSN output forced to logic 1
                                                          // 1: EMIOUARTxRTSN output forced to logic 0

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t UART_MODEM_CTRL_DTR_MASK = 0x00000001;    // Data Terminal Ready:
const uintptr_t UART_MODEM_CTRL_DTR_BPOS = 0;             // The value of this bit is inverted when applied to
                                                          // the EMIOUARTxDTRN output.
                                                          // 0: EMIOUARTxDTRN output forced to logic 1
                                                          // 1: EMIOUARTxDTRN output forced to logic 0


//------------------------------------------------------------------------------
//
// Register (UART) MODEM_STS
//
// Name                    UART_MODEM_STS_REG
// Software Name           MODEMSR
// Relative Address        0x00000028
// Absolute Address        uart0: 0xE0000028
//                         uart1: 0xE0001028
// Width                   32 bits
// Access Type             mixed
// Reset Value             x
// Description             Modem Status Register
//
// Register UART_MODEM_STS_REG Details
//         The Modem Status register indicates the current state of the control lines from the modem, or peripheral
//         device, to the CPU. In addition, four bits of the modem status register provide change of state or delta
//         information. These bits are set to logic 1 whenever a control input from the modem changes state. In the
//         default configuration, these delta bits are all cleared simultaneously when this register is read. This may be
//         parameterised at compile time such that a one must be written to a bit in order to clear it and a read has no
//         effect.
//
// RESERVED                                                  Properties: Bits: 31:9, Type: ro, Reset Value: x

                                                          // Properties: Bit: 8, Type: rw, Reset Value: x
const uintptr_t UART_MODEM_STS_FCMS_MASK = 0x00000100;    // Flow Control Mode:
const uintptr_t UART_MODEM_STS_FCMS_BPOS = 8;             // 0: disabled
                                                          // 1: enabled

                                                          // Properties: Bit: 7, Type: ro, Reset Value: x
const uintptr_t UART_MODEM_STS_DCD_MASK  = 0x00000080;    // Data Carrier Detect (DCD) input signal from PL
const uintptr_t UART_MODEM_STS_DCD_BPOS  = 7;             // (EMIOUARTxDCDN) status:
                                                          // 0: input is high
                                                          // 1: input is low

                                                          // Properties: Bit: 6, Type: ro, Reset Value: x
const uintptr_t UART_MODEM_STS_RI_MASK   = 0x00000040;    // Ring Indicator (RI) input signal from PL
const uintptr_t UART_MODEM_STS_RI_BPOS   = 6;             // (EMIOUARTxRIN) status:
                                                          // 0: input is high
                                                          // 1: input is low

                                                          // Properties: Bit: 5, Type: ro, Reset Value: x
const uintptr_t UART_MODEM_STS_DSR_MASK  = 0x00000020;    // Data Set Ready (DSR) input signal from PL
const uintptr_t UART_MODEM_STS_DSR_BPOS  = 5;             // (EMIOUARTxDSRN) status:
                                                          // 0: input is high
                                                          // 1: input is low

                                                          // Properties: Bit: 4, Type: ro, Reset Value: x
const uintptr_t UART_MODEM_STS_CTS_MASK  = 0x00000010;    // Clear to Send (CTS) input signal from PL
const uintptr_t UART_MODEM_STS_CTS_BPOS  = 4;             // (EMIOUARTxCTSN) status:
                                                          // 0: input is high
                                                          // 1: input is low

                                                          // Properties: Bit: 3, Type: wtc, Reset Value: x
const uintptr_t UART_MODEM_STS_DDCD_MASK = 0x00000008;    // Delta Data Carrier Detect status:
const uintptr_t UART_MODEM_STS_DDCD_BPOS = 3;             // Indicates a change in state of the
                                                          // EMIOUARTxDCDN input since this bit was last
                                                          // cleared.
                                                          // 0: No change has occurred
                                                          // 1: Change has occurred

                                                          // Properties: Bit: 2, Type: wtc, Reset Value: x
const uintptr_t UART_MODEM_STS_TERI_MASK = 0x00000004;    // Trailing Edge Ring Indicator status:
const uintptr_t UART_MODEM_STS_TERI_BPOS = 2;             // Indicates that the EMIOUARTxRIN input has
                                                          // change from high to low state since this bit was
                                                          // last cleared.
                                                          // 0: No trailing edge has occurred
                                                          // 1: Trailing edge has occurred

                                                          // Properties: Bit: 1, Type: wtc, Reset Value: x
const uintptr_t UART_MODEM_STS_DDSR_MASK = 0x00000002;    // Delta Data Set Ready status:
const uintptr_t UART_MODEM_STS_DDSR_BPOS = 1;             // Indicates a change in state of the
                                                          // EMIOUARTxDSRN input since this bit was last
                                                          // cleared.
                                                          // 0: No change has occurred
                                                          // 1: Change has occurred

                                                          // Properties: Bit: 0, Type: wtc, Reset Value: x
const uintptr_t UART_MODEM_STS_DCTS_MASK = 0x00000001;    // Delta Clear To Send status:
const uintptr_t UART_MODEM_STS_DCTS_BPOS = 0;             // Indicates a change in state of the
                                                          // EMIOUARTxCTSN input since this bit was last
                                                          // cleared.
                                                          // 0: No change has occurred
                                                          // 1: Change has occurred


//------------------------------------------------------------------------------
//
// Register (UART) CHNL_STS
//
// Name                     UART_CHANNEL_STS_REG
// Software Name            SR
// Relative Address         0x0000002C
// Absolute Address         uart0: 0xE000002C
//                          uart1: 0xE000102C
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Channel Status Register
//
// Register UART_CHANNEL_STS_REG Details
//         The read only Channel Status register is provided to enable the continuous monitoring of the raw
//         unmasked status information of the UART design.
//         Bits [4:0] and [14:10] are not latched and provide raw status of the FIFO flags, such that if the FIFO level
//         changes these bits are updated immediately.
//
// RESERVED                                                    Properties: Bits: 31:15, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 14, Type: ro, Reset Value: 0x0
const uintptr_t UART_CHNL_STS_TNFUL_MASK   = 0x00004000;    // Transmitter FIFO Nearly Full continuous status:
const uintptr_t UART_CHNL_STS_TNFUL_BPOS   = 14;            // This indicates that there is not enough space for
                                                            // the number of bytes currently specified in the
                                                            // WSIZE bits in the Mode register. If a write were
                                                            // currently attempted it would cause an overflow.
                                                            // Note that when WSIZE is 00, this assumes that a
                                                            // two byte write would be attempted and hence a
                                                            // single byte write is still possible without overflow
                                                            // by driving byte_sel low for the write.
                                                            // 0: More than one byte is unused in the Tx FIFO
                                                            // 1: Only one byte is free in the Tx FIFO

                                                            // Properties: Bit: 13, Type: ro, Reset Value: 0x0
const uintptr_t UART_CHNL_STS_TTRIG_MASK   = 0x00002000;    // Transmitter FIFO Trigger continuous status:
const uintptr_t UART_CHNL_STS_TTRIG_BPOS   = 13;            // 0: Tx FIFO fill level is less than TTRIG
                                                            // 1: Tx FIFO fill level is greater than or equal to
                                                            // TTRIG

                                                            // Properties: Bit: 12, Type: ro, Reset Value: 0x0
const uintptr_t UART_CHNL_STS_FDELT_MASK   = 0x00001000;    // Receiver flow delay trigger continuous status:
const uintptr_t UART_CHNL_STS_FDELT_BPOS   = 12;            // 0: Rx FIFO fill level is less than FDEL
                                                            // 1: Rx FIFO fill level is greater than or equal to
                                                            // FDEL

                                                            // Properties: Bit: 11, Type: ro, Reset Value: 0x0
const uintptr_t UART_CHNL_STS_TACTIVE_MASK = 0x00000800;    // Transmitter state machine active status:
const uintptr_t UART_CHNL_STS_TACTIVE_BPOS = 11;            // 0: inactive state
                                                            // 1: active state

                                                            // Properties: Bit: 10, Type: ro, Reset Value: 0x0
const uintptr_t UART_CHNL_STS_RACTIVE_MASK = 0x00000400;    // Receiver state machine active status:
const uintptr_t UART_CHNL_STS_RACTIVE_BPOS = 10;            // 0: inactive state
                                                            // 1: active state

// RESERVED                                                    Properties: Bit: 9, Type: ro, Reset Value: 0x0

// RESERVED                                                    Properties: Bit: 8, Type: ro, Reset Value: 0x0

// RESERVED                                                    Properties: Bit: 7, Type: ro, Reset Value: 0x0

// RESERVED                                                    Properties: Bit: 6, Type: ro, Reset Value: 0x0

// RESERVED                                                    Properties: Bit: 5, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t UART_CHNL_STS_TFUL_MASK    = 0x00000010;    // Transmitter FIFO Full continuous status:
const uintptr_t UART_CHNL_STS_TFUL_BPOS    = 4;             // 0: Tx FIFO is not full
                                                            // 1: Tx FIFO is full

                                                            // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t UART_CHNL_STS_TEMPTY_MASK  = 0x00000008;    // Transmitter FIFO Empty continuous status:
const uintptr_t UART_CHNL_STS_TEMPTY_BPOS  = 3;             // 0: Tx FIFO is not empty
                                                            // 1: Tx FIFO is empty

                                                            // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t UART_CHNL_STS_RFUL_MASK    = 0x00000004;    // Receiver FIFO Full continuous status:
const uintptr_t UART_CHNL_STS_RFUL_BPOS    = 2;             // 1: Rx FIFO is full
                                                            // 0: Rx FIFO is not full

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t UART_CHNL_STS_REMPTY_MASK  = 0x00000002;    // Receiver FIFO Full continuous status:
const uintptr_t UART_CHNL_STS_REMPTY_BPOS  = 1;             // 0: Rx FIFO is not empty
                                                            // 1: Rx FIFO is empty

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t UART_CHNL_STS_RTRIG_MASK   = 0x00000001;    // Receiver FIFO Trigger continuous status:
const uintptr_t UART_CHNL_STS_RTRIG_BPOS   = 0;             // 0: Rx FIFO fill level is less than RTRIG
                                                            // 1: Rx FIFO fill level is greater than or equal to
                                                            // RTRIG


//------------------------------------------------------------------------------
//
// Register (UART) TX_RX_FIFO
//
// Name                     UART_TX_RX_FIFO_REG
// Software Name            FIFO
// Relative Address         0x00000030
// Absolute Address         uart0: 0xE0000030
//                          uart1: 0xE0001030
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Transmit and Receive FIFO
//
// Register UART_TX_RX_FIFO_REG Details
//
// RESERVED                                                   Properties: Bits: 31:8, Type: ro, Reset Value: 0x0

                                                           // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t UART_TX_RX_FIFO_DATA_MASK = 0x000000FF;    // Operates as Tx FIFO and Rx FIFO.
const uintptr_t UART_TX_RX_FIFO_DATA_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (UART) BRDIV
//
// Name                     UART_BAUD_RATE_DIVIDER_REG
// Relative Address         0x00000034
// Absolute Address         uart0: 0xE0000034
//                          uart1: 0xE0001034
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x0000000F
// Description              Baud Rate Divider Register
//
// Register UART_BAUD_RATE_DIVIDER_REG Details
//         The baud rate divider register controls how much baud_sample is divided by to generate the baud rate
//         clock enables, baud_rx_rate and baud_tx_rate.
//
// RESERVED                                             Properties: Bits: 31:8, Type: ro, Reset Value: 0x0

                                                     // Properties: Bits: 7:0, Type: rw, Reset Value: 0xF
const uintptr_t UART_BRDIV_VAL_MASK = 0x000000FF;    // Baud rate divider value:
const uintptr_t UART_BRDIV_VAL_BPOS = 0;             // 0 - 3: ignored
                                                     // 4 - 255: Baud rate


//------------------------------------------------------------------------------
//
// Register (UART) FDEL
//
// Name                     UART_FLOW_DELAY_REG
// Relative Address         0x00000038
// Absolute Address         uart0: 0xE0000038
//                          uart1: 0xE0001038
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Flow Control Delay Register
//
// Register UART_FLOW_DELAY_REG Details
//         The Flow Control Delay register is only used if automatic flow control mode is enabled in the FCM field in
//         the Modem Control register. When automatic flow control mode is enabled, this register specifies the
//         receiver FIFO level at which the EMIOUARTxRTSN output is de-asserted. The EMIOUARTxRTSN output
//         is only asserted again once the fill level drops to below four less than FDEL.
//
// RESERVED                                            Properties: Bits: 31:6, Type: ro, Reset Value: 0x0

                                                    // Properties: Bits: 5:0, Type: rw, Reset Value: 0x0
const uintptr_t UART_FDEL_VAL_MASK = 0x0000003F;    // RxFIFO trigger level for Ready To Send (RTS)
const uintptr_t UART_FDEL_VAL_BPOS = 0;             // output signal (EMIOUARTxRTSN) de-assertion:
                                                    // 0 - 3: Flow delay triggering is disabled, since
                                                    // minimum 4 word hysteresis cannot be satisfied.
                                                    // 4 to 65535: EMIOUARTxRTSN is driven high
                                                    // when Rx FIFO fill level equals FDEL


//------------------------------------------------------------------------------
//
// Register (UART) TX_FIFO_TRG_LVL
//
// Name                     UART_TX_FIFO_TRG_LVL_REG
// Relative Address         0x00000044
// Absolute Address         uart0: 0xE0000044
//                          uart1: 0xE0001044
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000020
// Description              Transmitter FIFO Trigger Level Register
//
// Register UART_TX_FIFO_TRG_LVL_REG Details
//         The read/write Transmitter FIFO Trigger Level Register is used to set the value at which the transmitter
//         FIFO triggers an interrupt event.
//
// RESERVED                                                         Properties: Bits: 31:6, Type: ro, Reset Value: 0x0

                                                                 // Properties: Bits: 5:0, Type: rw, Reset Value: 0x20
const uintptr_t UART_TX_FIFO_TRG_LVL_TTRIG_MASK = 0x0000003F;    // Transmitter FIFO trigger level:
const uintptr_t UART_TX_FIFO_TRG_LVL_TTRIG_BPOS = 0;             // 0: Disables transmitter FIFO trigger level function
                                                                 // 1 - 63: Trigger set when transmitter FIFO fills to
                                                                 // TTRIG bytes


#endif // PS7_UART_H

