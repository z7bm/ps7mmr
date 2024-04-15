//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_CAN
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

#ifndef PS7_CAN_H
#define PS7_CAN_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    CAN0 MMRs
//
//              Name                    Address                   Width   Type     Reset Value   Description
const uintptr_t CAN_SRR_REG0          = CAN0_ADDR + 0x00000000; //  32    rw       0x00000000    Software Reset Register
const uintptr_t CAN_MSR_REG0          = CAN0_ADDR + 0x00000004; //  32    rw       0x00000000    Mode Select Register
const uintptr_t CAN_BRPR_REG0         = CAN0_ADDR + 0x00000008; //  32    rw       0x00000000    Baud Rate Prescaler Register
const uintptr_t CAN_BTR_REG0          = CAN0_ADDR + 0x0000000C; //  32    rw       0x00000000    Bit Timing Register
const uintptr_t CAN_ECR_REG0          = CAN0_ADDR + 0x00000010; //  32    ro       0x00000000    Error Counter Register
const uintptr_t CAN_ESR_REG0          = CAN0_ADDR + 0x00000014; //  32    mixed    0x00000000    Error Status Register
const uintptr_t CAN_SR_REG0           = CAN0_ADDR + 0x00000018; //  32    mixed    0x00000001    Status Register
const uintptr_t CAN_ISR_REG0          = CAN0_ADDR + 0x0000001C; //  32    mixed    0x00006000    Interrupt Status Register
const uintptr_t CAN_IER_REG0          = CAN0_ADDR + 0x00000020; //  32    rw       0x00000000    Interrupt Enable Register
const uintptr_t CAN_ICR_REG0          = CAN0_ADDR + 0x00000024; //  32    mixed    0x00000000    Interrupt Clear Register
const uintptr_t CAN_TCR_REG0          = CAN0_ADDR + 0x00000028; //  32    mixed    0x00000000    Timestamp Control Register
const uintptr_t CAN_WIR_REG0          = CAN0_ADDR + 0x0000002C; //  32    rw       0x00003F3F    Watermark Interrupt Register
const uintptr_t CAN_TXFIFO_ID_REG0    = CAN0_ADDR + 0x00000030; //  32    wo       0x00000000    transmit message fifo message identifier
const uintptr_t CAN_TXFIFO_DLC_REG0   = CAN0_ADDR + 0x00000034; //  32    rw       0x00000000    transmit message fifo data length code
const uintptr_t CAN_TXFIFO_DATA1_REG0 = CAN0_ADDR + 0x00000038; //  32    rw       0x00000000    transmit message fifo data word 1
const uintptr_t CAN_TXFIFO_DATA2_REG0 = CAN0_ADDR + 0x0000003C; //  32    rw       0x00000000    transmit message fifo data word 2
const uintptr_t CAN_TXHPB_ID_REG0     = CAN0_ADDR + 0x00000040; //  32    wo       0x00000000    transmit high priority buffer message identifier
const uintptr_t CAN_TXHPB_DLC_REG0    = CAN0_ADDR + 0x00000044; //  32    rw       0x00000000    transmit high priority buffer data length code
const uintptr_t CAN_TXHPB_DATA1_REG0  = CAN0_ADDR + 0x00000048; //  32    rw       0x00000000    transmit high priority buffer data word 1
const uintptr_t CAN_TXHPB_DATA2_REG0  = CAN0_ADDR + 0x0000004C; //  32    rw       0x00000000    transmit high priority buffer data word 2
const uintptr_t CAN_RXFIFO_ID_REG0    = CAN0_ADDR + 0x00000050; //  32    ro       x             receive message fifo message identifier
const uintptr_t CAN_RXFIFO_DLC_REG0   = CAN0_ADDR + 0x00000054; //  32    rw       x             receive message fifo data length code
const uintptr_t CAN_RXFIFO_DATA1_REG0 = CAN0_ADDR + 0x00000058; //  32    rw       x             receive message fifo data word 1
const uintptr_t CAN_RXFIFO_DATA2_REG0 = CAN0_ADDR + 0x0000005C; //  32    rw       x             receive message fifo data word 2
const uintptr_t CAN_AFR_REG0          = CAN0_ADDR + 0x00000060; //  32    rw       0x00000000    Acceptance Filter Register
const uintptr_t CAN_AFMR1_REG0        = CAN0_ADDR + 0x00000064; //  32    rw       x             Acceptance Filter Mask Register 1
const uintptr_t CAN_AFIR1_REG0        = CAN0_ADDR + 0x00000068; //  32    rw       x             Acceptance Filter ID Register 1
const uintptr_t CAN_AFMR2_REG0        = CAN0_ADDR + 0x0000006C; //  32    rw       x             Acceptance Filter Mask Register 2
const uintptr_t CAN_AFIR2_REG0        = CAN0_ADDR + 0x00000070; //  32    rw       x             Acceptance Filter ID Register 2
const uintptr_t CAN_AFMR3_REG0        = CAN0_ADDR + 0x00000074; //  32    rw       x             Acceptance Filter Mask Register 3
const uintptr_t CAN_AFIR3_REG0        = CAN0_ADDR + 0x00000078; //  32    rw       x             Acceptance Filter ID Register 3
const uintptr_t CAN_AFMR4_REG0        = CAN0_ADDR + 0x0000007C; //  32    rw       x             Acceptance Filter Mask Register 4
const uintptr_t CAN_AFIR4_REG0        = CAN0_ADDR + 0x00000080; //  32    rw       x             Acceptance Filter ID Register 4
//------------------------------------------------------------------------------
//
//    CAN1 MMRs
//
//              Name                    Address                   Width   Type     Reset Value   Description
const uintptr_t CAN_SRR_REG1          = CAN1_ADDR + 0x00000000; //  32    rw       0x00000000    Software Reset Register
const uintptr_t CAN_MSR_REG1          = CAN1_ADDR + 0x00000004; //  32    rw       0x00000000    Mode Select Register
const uintptr_t CAN_BRPR_REG1         = CAN1_ADDR + 0x00000008; //  32    rw       0x00000000    Baud Rate Prescaler Register
const uintptr_t CAN_BTR_REG1          = CAN1_ADDR + 0x0000000C; //  32    rw       0x00000000    Bit Timing Register
const uintptr_t CAN_ECR_REG1          = CAN1_ADDR + 0x00000010; //  32    ro       0x00000000    Error Counter Register
const uintptr_t CAN_ESR_REG1          = CAN1_ADDR + 0x00000014; //  32    mixed    0x00000000    Error Status Register
const uintptr_t CAN_SR_REG1           = CAN1_ADDR + 0x00000018; //  32    mixed    0x00000001    Status Register
const uintptr_t CAN_ISR_REG1          = CAN1_ADDR + 0x0000001C; //  32    mixed    0x00006000    Interrupt Status Register
const uintptr_t CAN_IER_REG1          = CAN1_ADDR + 0x00000020; //  32    rw       0x00000000    Interrupt Enable Register
const uintptr_t CAN_ICR_REG1          = CAN1_ADDR + 0x00000024; //  32    mixed    0x00000000    Interrupt Clear Register
const uintptr_t CAN_TCR_REG1          = CAN1_ADDR + 0x00000028; //  32    mixed    0x00000000    Timestamp Control Register
const uintptr_t CAN_WIR_REG1          = CAN1_ADDR + 0x0000002C; //  32    rw       0x00003F3F    Watermark Interrupt Register
const uintptr_t CAN_TXFIFO_ID_REG1    = CAN1_ADDR + 0x00000030; //  32    wo       0x00000000    transmit message fifo message identifier
const uintptr_t CAN_TXFIFO_DLC_REG1   = CAN1_ADDR + 0x00000034; //  32    rw       0x00000000    transmit message fifo data length code
const uintptr_t CAN_TXFIFO_DATA1_REG1 = CAN1_ADDR + 0x00000038; //  32    rw       0x00000000    transmit message fifo data word 1
const uintptr_t CAN_TXFIFO_DATA2_REG1 = CAN1_ADDR + 0x0000003C; //  32    rw       0x00000000    transmit message fifo data word 2
const uintptr_t CAN_TXHPB_ID_REG1     = CAN1_ADDR + 0x00000040; //  32    wo       0x00000000    transmit high priority buffer message identifier
const uintptr_t CAN_TXHPB_DLC_REG1    = CAN1_ADDR + 0x00000044; //  32    rw       0x00000000    transmit high priority buffer data length code
const uintptr_t CAN_TXHPB_DATA1_REG1  = CAN1_ADDR + 0x00000048; //  32    rw       0x00000000    transmit high priority buffer data word 1
const uintptr_t CAN_TXHPB_DATA2_REG1  = CAN1_ADDR + 0x0000004C; //  32    rw       0x00000000    transmit high priority buffer data word 2
const uintptr_t CAN_RXFIFO_ID_REG1    = CAN1_ADDR + 0x00000050; //  32    ro       x             receive message fifo message identifier
const uintptr_t CAN_RXFIFO_DLC_REG1   = CAN1_ADDR + 0x00000054; //  32    rw       x             receive message fifo data length code
const uintptr_t CAN_RXFIFO_DATA1_REG1 = CAN1_ADDR + 0x00000058; //  32    rw       x             receive message fifo data word 1
const uintptr_t CAN_RXFIFO_DATA2_REG1 = CAN1_ADDR + 0x0000005C; //  32    rw       x             receive message fifo data word 2
const uintptr_t CAN_AFR_REG1          = CAN1_ADDR + 0x00000060; //  32    rw       0x00000000    Acceptance Filter Register
const uintptr_t CAN_AFMR1_REG1        = CAN1_ADDR + 0x00000064; //  32    rw       x             Acceptance Filter Mask Register 1
const uintptr_t CAN_AFIR1_REG1        = CAN1_ADDR + 0x00000068; //  32    rw       x             Acceptance Filter ID Register 1
const uintptr_t CAN_AFMR2_REG1        = CAN1_ADDR + 0x0000006C; //  32    rw       x             Acceptance Filter Mask Register 2
const uintptr_t CAN_AFIR2_REG1        = CAN1_ADDR + 0x00000070; //  32    rw       x             Acceptance Filter ID Register 2
const uintptr_t CAN_AFMR3_REG1        = CAN1_ADDR + 0x00000074; //  32    rw       x             Acceptance Filter Mask Register 3
const uintptr_t CAN_AFIR3_REG1        = CAN1_ADDR + 0x00000078; //  32    rw       x             Acceptance Filter ID Register 3
const uintptr_t CAN_AFMR4_REG1        = CAN1_ADDR + 0x0000007C; //  32    rw       x             Acceptance Filter Mask Register 4
const uintptr_t CAN_AFIR4_REG1        = CAN1_ADDR + 0x00000080; //  32    rw       x             Acceptance Filter ID Register 4
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (CAN) SRR
//
// Name                    CAN_SRR_REG
// Relative Address        0x00000000
// Absolute Address        can0: 0xE0008000
//                         can1: 0xE0009000
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Software Reset Register
//
// Register CAN_SRR_REG Details
//         Writing to the Software Reset Register (SRR) places the CAN controller in Configuration mode. Once in
//         Configuration mode, the CAN controller drives recessive on the bus line and does not transmit or receive
//         messages. During power-up, CEN and SRST bits are '0' and CONFIG bit in the Status Register (SR) is '1.'
//                                           
//         The Transfer Layer Configuration Registers can be changed only when CEN bit in the SRR Register is '0.' If
//         the CEN bit is changed during core operation, it is recommended to reset the core so that operations start
//         afresh.
//
// RESERVED                                           Properties: Bits: 31:2, Type: rw, Reset Value: 0x0

                                                   // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t CAN_SRR_CEN_MASK  = 0x00000002;    // Can Enable
const uintptr_t CAN_SRR_CEN_BPOS  = 1;             // The Enable bit for the CAN controller.
                                                   // 1: The CAN controller is in Loop Back, Sleep or
                                                   // Normal mode depending on the LBACK and
                                                   // SLEEP bits in the MSR.
                                                   // 0: The CAN controller is in the Configuration
                                                   // mode.
                                                   // If the CEN bit is changed during core operation, it
                                                   // is recommended to reset the core so that
                                                   // operations start afresh.

                                                   // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t CAN_SRR_SRST_MASK = 0x00000001;    // Reset
const uintptr_t CAN_SRR_SRST_BPOS = 0;             // The Software reset bit for the CAN controller.
                                                   // 1: CAN controller is reset.
                                                   // If a 1 is written to this bit, all the CAN controller
                                                   // configuration registers (including the SRR) are
                                                   // reset. Reads to this bit always return a 0.


//------------------------------------------------------------------------------
//
// Register (CAN) MSR
//
// Name                     CAN_MSR_REG
// Relative Address         0x00000004
// Absolute Address         can0: 0xE0008004
//                          can1: 0xE0009004
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Mode Select Register
//
// Register CAN_MSR_REG Details
//         Writing to the Mode Select Register (MSR) enables the CAN controller to enter Snoop, Sleep, Loop Back, or
//         Normal modes. In Normal mode, the CAN controller participates in normal bus communication. If the
//         SLEEP bit is set to '1,' the CAN controller enters Sleep mode. If the LBACK bit is set to '1,' the CAN
//         controller enters Loop Back mode. If the SNOOP mode is set to '1', the CAN controller enters Snoop mode
//         and does not participate in bus communication but only receives messages.
//         The LBACK and SLEEP bits should never be set to '1' at the same time. At any given point the CAN
//         controller can be either in Loop Back mode or Sleep mode, but not both simultaneously. If both bits are set,
//         then LBACK Mode takes priority. SNOOP Mode has least priority. In order for core to enter SNOOP mode
//         LBACK and SLEEP modes should be set to '0'.
//
// RESERVED                                            Properties: Bits: 31:3, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t CAN_MSR_SNOOP_MASK = 0x00000004;    // Snoop Mode Select
const uintptr_t CAN_MSR_SNOOP_BPOS = 2;             // The Snoop Mode Select bit.
                                                    // 1: CAN controller is in Snoop mode.
                                                    // 0: CAN controller is in Normal, Loop Back,
                                                    // Configuration, or Sleep mode.
                                                    // This bit can be written to only when CEN bit in
                                                    // SRR is 0.

                                                    // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t CAN_MSR_LBACK_MASK = 0x00000002;    // Loop Back Mode Select
const uintptr_t CAN_MSR_LBACK_BPOS = 1;             // The Loop Back Mode Select bit.
                                                    // 1: CAN controller is in Loop Back mode.
                                                    // 0: CAN controller is in Normal, Snoop,
                                                    // Configuration, or Sleep mode.
                                                    // This bit can be written to only when CEN bit in
                                                    // SRR is 0.

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t CAN_MSR_SLEEP_MASK = 0x00000001;    // Sleep Mode Select
const uintptr_t CAN_MSR_SLEEP_BPOS = 0;             // The Sleep Mode select bit.
                                                    // 1: CAN controller is in Sleep mode.
                                                    // 0: CAN controller is in Normal, Snoop,
                                                    // Configuration or Loop Back mode.
                                                    // This bit is cleared when the CAN controller wakes
                                                    // up from the Sleep mode.


//------------------------------------------------------------------------------
//
// Register (CAN) BRPR
//
// Name                    CAN_BRPR_REG
// Relative Address        0x00000008
// Absolute Address        can0: 0xE0008008
//                         can1: 0xE0009008
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Baud Rate Prescaler Register
//
// Register CAN_BRPR_REG Details
//         The BRPR can be programmed to any value in the range 0-255. The actual value is 1 more than the value
//         written into the register.
//         Please refer to the CAN chapter for more details.
//
// RESERVED                                           Properties: Bits: 31:8, Type: rw, Reset Value: 0x0

                                                   // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t CAN_BRPR_BRP_MASK = 0x000000FF;    // Baud Rate Prescaler
const uintptr_t CAN_BRPR_BRP_BPOS = 0;             // These bits indicate the prescaler value. The actual
                                                   // value ranges from 1 to 256.


//------------------------------------------------------------------------------
//
// Register (CAN) BTR
//
// Name                     CAN_BTR_REG
// Relative Address         0x0000000C
// Absolute Address         can0: 0xE000800C
//                          can1: 0xE000900C
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Bit Timing Register
//
// Register CAN_BTR_REG Details
//         The Bit Timing Register (BTR) specifies the bits needed to configure bit time. Specifically, the Propagation
//         Segment, Phase segment 1, Phase segment 2, and Synchronization Jump Width (as defined in CAN 2.0A,
//         CAN 2.0B and ISO 11891-1) are written to the BTR. The actual value of each of these fields is one more than
//         the value written to this register.
//
// RESERVED                                          Properties: Bits: 31:9, Type: rw, Reset Value: 0x0

                                                  // Properties: Bits: 8:7, Type: rw, Reset Value: 0x0
const uintptr_t CAN_BTR_SJW_MASK = 0x00000180;    // Synchronization Jump Width
const uintptr_t CAN_BTR_SJW_BPOS = 7;             // Indicates the Synchronization Jump Width as
                                                  // specified in the CAN 2.0A and CAN 2.0B
                                                  // standard. The actual value is one more than the
                                                  // value written to the register.

                                                  // Properties: Bits: 6:4, Type: rw, Reset Value: 0x0
const uintptr_t CAN_BTR_TS2_MASK = 0x00000070;    // Time Segment 2
const uintptr_t CAN_BTR_TS2_BPOS = 4;             // Indicates Phase Segment 2 as specified in the
                                                  // CAN 2.0A and CAN 2.0B standard. The actual
                                                  // value is one more than the value written to the
                                                  // register.

                                                  // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
const uintptr_t CAN_BTR_TS1_MASK = 0x0000000F;    // Time Segment 1
const uintptr_t CAN_BTR_TS1_BPOS = 0;             // Indicates the Sum of Propagation Segment and
                                                  // Phase Segment 1 as specified in the CAN 2.0A and
                                                  // CAN 2.0B standard. The actual value is one more
                                                  // than the value written to the register.


//------------------------------------------------------------------------------
//
// Register (CAN) ECR
//
// Name                     CAN_ECR_REG
// Relative Address         0x00000010
// Absolute Address         can0: 0xE0008010
//                          can1: 0xE0009010
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Error Counter Register
//
// Register CAN_ECR_REG Details
//         The ECR is a read-only register. Writes to the ECR have no effect. The value of the error counters in the
//         register reflect the values of the transmit and receive error counters in the CAN Protocol Engine Module
//         (see Figure 1).
//         The following conditions reset the Transmit and Receive Error counters:
//         * When '1' is written to the SRST bit in the SRR
//         * When '0' is written to the CEN bit in the SRR
//         * When the CAN controller enters Bus Off state
//         * During Bus Off recovery when the CAN controller enters Error Active state after 128 occurrences of 11
//         consecutive recessive bits
//         When in Bus Off recovery, the Receive Error counter is advanced by 1 when a sequence of 11 consecutive
//         recessive bits is seen.
//
// RESERVED                                          Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                  // Properties: Bits: 15:8, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ECR_REC_MASK = 0x0000FF00;    // Receive Error Counter
const uintptr_t CAN_ECR_REC_BPOS = 8;             // Indicates the Value of the Receive Error Counter.

                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ECR_TEC_MASK = 0x000000FF;    // Transmit Error Counter
const uintptr_t CAN_ECR_TEC_BPOS = 0;             // Indicates the Value of the Transmit Error Counter.


//------------------------------------------------------------------------------
//
// Register (CAN) ESR
//
// Name                     CAN_ESR_REG
// Relative Address         0x00000014
// Absolute Address         can0: 0xE0008014
//                          can1: 0xE0009014
// Width                    32 bits
// Access Type              mixed
// Reset Value               0x00000000
// Description               Error Status Register
//
// Register CAN_ESR_REG Details
//         The Error Status Register (ESR) indicates the type of error that has occurred on the bus. If more than one
//         error occurs, all relevant error flag bits are set in this register. The ESR is a write-to-clear register. Writes to
//         this register will not set any bits, but will clear the bits that are set.
//
// RESERVED                                            Properties: Bits: 31:5, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 4, Type: wtc, Reset Value: 0x0
const uintptr_t CAN_ESR_ACKER_MASK = 0x00000010;    // ACK Error
const uintptr_t CAN_ESR_ACKER_BPOS = 4;             // Indicates an acknowledgment error.
                                                    // 1: Indicates an acknowledgment error has
                                                    // occurred.
                                                    // 0: Indicates an acknowledgment error has not
                                                    // occurred on the bus since the last write to this
                                                    // register.
                                                    // If this bit is set, writing a 1 clears it.

                                                    // Properties: Bit: 3, Type: wtc, Reset Value: 0x0
const uintptr_t CAN_ESR_BERR_MASK  = 0x00000008;    // Bit Error
const uintptr_t CAN_ESR_BERR_BPOS  = 3;             // Indicates the received bit is not the same as the
                                                    // transmitted bit during bus communication.
                                                    // 1: Indicates a bit error has occurred.
                                                    // 0: Indicates a bit error has not occurred on the bus
                                                    // since the last write to this register.
                                                    // If this bit is set, writing a 1 clears it.

                                                    // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
const uintptr_t CAN_ESR_STER_MASK  = 0x00000004;    // Stuff Error
const uintptr_t CAN_ESR_STER_BPOS  = 2;             // Indicates an error if there is a stuffing violation.
                                                    // 1: Indicates a stuff error has occurred.
                                                    // 0: Indicates a stuff error has not occurred on the
                                                    // bus since the last write to this register.
                                                    // If this bit is set, writing a 1 clears it.

                                                    // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
const uintptr_t CAN_ESR_FMER_MASK  = 0x00000002;    // Form Error
const uintptr_t CAN_ESR_FMER_BPOS  = 1;             // Indicates an error in one of the fixed form fields in
                                                    // the message frame.
                                                    // 1: Indicates a form error has occurred.
                                                    // 0: Indicates a form error has not occurred on the
                                                    // bus since the last write to this register.
                                                    // If this bit is set, writing a 1 clears it.

                                                    // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
const uintptr_t CAN_ESR_CRCER_MASK = 0x00000001;    // CRC Error
const uintptr_t CAN_ESR_CRCER_BPOS = 0;             // Indicates a CRC error has occurred.
                                                    // 1: Indicates a CRC error has occurred.
                                                    // 0: Indicates a CRC error has not occurred on the
                                                    // bus since the last write to this register.
                                                    // If this bit is set, writing a 1 clears it.
                                                    // In case of a CRC Error and a CRC delimiter
                                                    // corruption, only the FMER bit is set.


//------------------------------------------------------------------------------
//
// Register (CAN) SR
//
// Name                     CAN_SR_REG
// Relative Address         0x00000018
// Absolute Address         can0: 0xE0008018
//                          can1: 0xE0009018
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000001
// Description              Status Register
//
// Register CAN_SR_REG Details
//         The CAN Status Register provides a status of all conditions of the Core. Specifically, FIFO status, Error
//         State, Bus State and Configuration mode are reported.
//
// RESERVED                                            Properties: Bits: 31:13, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 12, Type: ro, Reset Value: 0x0
const uintptr_t CAN_SR_SNOOP_MASK  = 0x00001000;    // Snoop Mode
const uintptr_t CAN_SR_SNOOP_BPOS  = 12;            // Indicates the CAN controller is in Snoop Mode.
                                                    // 1: Indicates the CAN controller is in Snoop Mode.
                                                    // 0: Indicates the CAN controller is not in Snoop
                                                    // mode.

                                                    // Properties: Bit: 11, Type: ro, Reset Value: 0x0
const uintptr_t CAN_SR_ACFBSY_MASK = 0x00000800;    // Acceptance Filter Busy indicator.
const uintptr_t CAN_SR_ACFBSY_BPOS = 11;            // Indicates write-ablity of the Mask and ID
                                                    // registers, read-only:
                                                    // 0: writable
                                                    // 1: not writable. This bit reads 1 when a 0 is written
                                                    // to any of the valid UAF bits in an Acceptance
                                                    // Filter Register.

                                                    // Properties: Bit: 10, Type: ro, Reset Value: 0x0
const uintptr_t CAN_SR_TXFLL_MASK  = 0x00000400;    // Transmit FIFO Full
const uintptr_t CAN_SR_TXFLL_BPOS  = 10;            // Indicates that the TX FIFO is full.
                                                    // 1: Indicates the TX FIFO is full.
                                                    // 0: Indicates the TX FIFO is not full.

                                                    // Properties: Bit: 9, Type: ro, Reset Value: 0x0
const uintptr_t CAN_SR_TXBFLL_MASK = 0x00000200;    // High Priority Transmit Buffer Full
const uintptr_t CAN_SR_TXBFLL_BPOS = 9;             // Indicates the High Priority Transmit Buffer is full.
                                                    // 1: Indicates the High Priority Transmit Buffer is
                                                    // full.
                                                    // 0: Indicates the High Priority Transmit Buffer is
                                                    // not full.

                                                    // Properties: Bits: 8:7, Type: ro, Reset Value: 0x0
const uintptr_t CAN_SR_ESTAT_MASK  = 0x00000180;    // Error Status
const uintptr_t CAN_SR_ESTAT_BPOS  = 7;             // Indicates the error status of the CAN controller.
                                                    // 00: Indicates Configuration Mode (CONFIG = 1).
                                                    // Error State is undefined.
                                                    // 01: Indicates Error Active State.
                                                    // 11: Indicates Error Passive State.
                                                    // 10: Indicates Bus Off State.

                                                    // Properties: Bit: 6, Type: ro, Reset Value: 0x0
const uintptr_t CAN_SR_ERRWRN_MASK = 0x00000040;    // Error Warning
const uintptr_t CAN_SR_ERRWRN_BPOS = 6;             // Indicates that either the Transmit Error counter or
                                                    // the Receive Error counter has exceeded a value of
                                                    // 96.
                                                    // 1: One or more error counters have a value greater
                                                    // than or equal to 96.
                                                    // 0: Neither of the error counters has a value greater
                                                    // than or equal to 96.

                                                    // Properties: Bit: 5, Type: ro, Reset Value: 0x0
const uintptr_t CAN_SR_BBSY_MASK   = 0x00000020;    // Bus Busy
const uintptr_t CAN_SR_BBSY_BPOS   = 5;             // Indicates the CAN bus status.
                                                    // 1: Indicates that the CAN controller is either
                                                    // receiving a message or transmitting a message.
                                                    // 0: Indicates that the CAN controller is either in
                                                    // Configuration mode or the bus is idle.

                                                    // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t CAN_SR_BIDLE_MASK  = 0x00000010;    // Bus Idle
const uintptr_t CAN_SR_BIDLE_BPOS  = 4;             // Indicates the CAN bus status.
                                                    // 1: Indicates no bus communication is taking place.
                                                    // 0: Indicates the CAN controller is either in
                                                    // Configuration mode or the bus is busy.

                                                    // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t CAN_SR_NORMAL_MASK = 0x00000008;    // Normal Mode
const uintptr_t CAN_SR_NORMAL_BPOS = 3;             // Indicates the CAN controller is in Normal Mode.
                                                    // 1: Indicates the CAN controller is in Normal
                                                    // Mode.
                                                    // 0: Indicates the CAN controller is not in Normal
                                                    // mode.

                                                    // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t CAN_SR_SLEEP_MASK  = 0x00000004;    // Sleep Mode
const uintptr_t CAN_SR_SLEEP_BPOS  = 2;             // Indicates the CAN controller is in Sleep mode.
                                                    // 1: Indicates the CAN controller is in Sleep mode.
                                                    // 0: Indicates the CAN controller is not in Sleep
                                                    // mode.

                                                    // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t CAN_SR_LBACK_MASK  = 0x00000002;    // Loop Back Mode
const uintptr_t CAN_SR_LBACK_BPOS  = 1;             // Indicates the CAN controller is in Loop Back
                                                    // mode.
                                                    // 1: Indicates the CAN controller is in Loop Back
                                                    // mode.
                                                    // 0: Indicates the CAN controller is not in Loop
                                                    // Back mode.

                                                    // Properties: Bit: 0, Type: ro, Reset Value: 0x1
const uintptr_t CAN_SR_CONFIG_MASK = 0x00000001;    // Configuration Mode Indicator
const uintptr_t CAN_SR_CONFIG_BPOS = 0;             // Indicates the CAN controller is in Configuration
                                                    // mode.
                                                    // 1: Indicates the CAN controller is in
                                                    // Configuration mode.
                                                    // 0: Indicates the CAN controller is not in
                                                    // Configuration mode.


//------------------------------------------------------------------------------
//
// Register (CAN) ISR
//
// Name                      CAN_ISR_REG
// Relative Address          0x0000001C
// Absolute Address          can0: 0xE000801C
//                           can1: 0xE000901C
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x00006000
// Description               Interrupt Status Register
//
// Register CAN_ISR_REG Details
//         The Interrupt Status Register (ISR) contains bits that are set when a particular interrupt condition occurs. If
//         the corresponding mask bit in the Interrupt Enable Register is set, an interrupt is generated.
//         Interrupt bits in the ISR can be cleared by writing to the Interrupt Clear Register. For all bits in the ISR, a set
//         condition takes priority over the clear condition and the bit continues to remain '1.'
//
// RESERVED                                               Properties: Bits: 31:15, Type: rw, Reset Value: 0x0

                                                       // Properties: Bit: 14, Type: ro, Reset Value: 0x1
const uintptr_t CAN_ISR_TXFEMP_MASK   = 0x00004000;    // Transmit FIFO EmptyInterrupt
const uintptr_t CAN_ISR_TXFEMP_BPOS   = 14;            // A 1 indicates that the Transmit FIFO is empty.
                                                       // The interrupt continues to assert as long as the TX
                                                       // FIFO is empty.
                                                       // This bit can be cleared only by writing to the ICR.

                                                       // Properties: Bit: 13, Type: ro, Reset Value: 0x1
const uintptr_t CAN_ISR_TXFWMEMP_MASK = 0x00002000;    // Transmit FIFO Watermark Empty Interrupt
const uintptr_t CAN_ISR_TXFWMEMP_BPOS = 13;            // A 1 indicates that the TX FIFO is empty based on
                                                       // watermark programming.
                                                       // The interrupt continues to assert as long as the
                                                       // number of empty spaces in the TX FIFO is greater
                                                       // than TX FIFO empty watermark.
                                                       // This bit can be cleared only by writing to the
                                                       // Interrupt Clear Register.

                                                       // Properties: Bit: 12, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_RXFWMFLL_MASK = 0x00001000;    // Receive FIFO Watermark Full Interrupt
const uintptr_t CAN_ISR_RXFWMFLL_BPOS = 12;            // A 1 indicates that the RX FIFO is full based on
                                                       // watermark programming.
                                                       // The interrupt continues to assert as long as the RX
                                                       // FIFO count is above RX FIFO Full watermark.
                                                       // This bit can be cleared only by writing to the
                                                       // Interrupt Clear Register.

                                                       // Properties: Bit: 11, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_WKUP_MASK     = 0x00000800;    // Wake up Interrupt
const uintptr_t CAN_ISR_WKUP_BPOS     = 11;            // A 1 indicates that the CAN controller entered
                                                       // Normal mode from Sleep Mode.
                                                       // This bit can be cleared by writing to the ICR.
                                                       // This bit is also cleared when a 0 is written to the
                                                       // CEN bit in the SRR.

                                                       // Properties: Bit: 10, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_SLP_MASK      = 0x00000400;    // Sleep Interrupt
const uintptr_t CAN_ISR_SLP_BPOS      = 10;            // A 1 indicates that the CAN controller entered
                                                       // Sleep mode.
                                                       // This bit can be cleared by writing to the ICR.
                                                       // This bit is also cleared when a 0 is written to the
                                                       // CEN bit in the SRR.

                                                       // Properties: Bit: 9, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_BSOFF_MASK    = 0x00000200;    // Bus Off Interrupt
const uintptr_t CAN_ISR_BSOFF_BPOS    = 9;             // A 1 indicates that the CAN controller entered the
                                                       // Bus Off state.
                                                       // This bit can be cleared by writing to the ICR.
                                                       // This bit is also cleared when a 0 is written to the
                                                       // CEN bit in the SRR.

                                                       // Properties: Bit: 8, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_ERROR_MASK    = 0x00000100;    // Error Interrupt
const uintptr_t CAN_ISR_ERROR_BPOS    = 8;             // A 1 indicates that an error occurred during
                                                       // message transmission or reception.
                                                       // This bit can be cleared by writing to the ICR.
                                                       // This bit is also cleared when a 0 is written to the
                                                       // CEN bit in the SRR.

                                                       // Properties: Bit: 7, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_RXNEMP_MASK   = 0x00000080;    // Receive FIFO Not Empty Interrupt
const uintptr_t CAN_ISR_RXNEMP_BPOS   = 7;             // A 1 indicates that the Receive FIFO is not empty.
                                                       // This bit can be cleared only by writing to the ICR.

                                                       // Properties: Bit: 6, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_RXOFLW_MASK   = 0x00000040;    // RX FIFO Overflow Interrupt
const uintptr_t CAN_ISR_RXOFLW_BPOS   = 6;             // A 1 indicates that a message has been lost. This
                                                       // condition occurs when a new message is being
                                                       // received and the Receive FIFO is Full.
                                                       // This bit can be cleared by writing to the ICR.
                                                       // This bit is also cleared when a 0 is written to the
                                                       // CEN bit in the SRR.

                                                       // Properties: Bit: 5, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_RXUFLW_MASK   = 0x00000020;    // RX FIFO Underflow Interrupt
const uintptr_t CAN_ISR_RXUFLW_BPOS   = 5;             // A 1 indicates that a read operation was attempted
                                                       // on an empty RX FIFO.
                                                       // This bit can be cleared only by writing to the ICR.

                                                       // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_RXOK_MASK     = 0x00000010;    // New Message Received Interrupt
const uintptr_t CAN_ISR_RXOK_BPOS     = 4;             // A 1 indicates that a message was received
                                                       // successfully and stored into the RX FIFO.
                                                       // This bit can be cleared by writing to the ICR.
                                                       // This bit is also cleared when a 0 is written to the
                                                       // CEN bit in the SRR.

                                                       // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_TXBFLL_MASK   = 0x00000008;    // High Priority Transmit Buffer Full Interrupt
const uintptr_t CAN_ISR_TXBFLL_BPOS   = 3;             // A 1 indicates that the High Priority Transmit
                                                       // Buffer is full.
                                                       // The status of the bit is unaffected if write
                                                       // transactions occur on the High Priority Transmit
                                                       // Buffer when it is already full.
                                                       // This bit can be cleared only by writing to the ICR.

                                                       // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_TXFLL_MASK    = 0x00000004;    // Transmit FIFO Full Interrupt
const uintptr_t CAN_ISR_TXFLL_BPOS    = 2;             // A 1 indicates that the TX FIFO is full.
                                                       // The status of the bit is unaffected if write
                                                       // transactions occur on the Transmit FIFO when it is
                                                       // already full.
                                                       // This bit can be cleared only by writing to the
                                                       // Interrupt Clear Register.

                                                       // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_TXOK_MASK     = 0x00000002;    // Transmission Successful Interrupt
const uintptr_t CAN_ISR_TXOK_BPOS     = 1;             // A 1 indicates that a message was transmitted
                                                       // successfully.
                                                       // This bit can be cleared by writing to the ICR.
                                                       // This bit is also cleared when a 0 is written to the
                                                       // CEN bit in the SRR.
                                                       // In Loop Back mode, both TXOK and RXOK bits
                                                       // are set. The RXOK bit is set before the TXOK bit.

                                                       // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t CAN_ISR_ARBLST_MASK   = 0x00000001;    // Arbitration Lost Interrupt
const uintptr_t CAN_ISR_ARBLST_BPOS   = 0;             // A 1 indicates that arbitration was lost during
                                                       // message transmission.
                                                       // This bit can be cleared by writing to the ICR.
                                                       // This bit is also cleared when a 0 is written to the
                                                       // CEN bit in the SRR.


//------------------------------------------------------------------------------
//
// Register (CAN) IER
//
// Name                    CAN_IER_REG
// Relative Address        0x00000020
// Absolute Address        can0: 0xE0008020
//                         can1: 0xE0009020
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Enable Register
//
// Register CAN_IER_REG Details
//
// RESERVED                                                Properties: Bits: 31:15, Type: rw, Reset Value: 0x0

                                                        // Properties: Bit: 14, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_ETXFEMP_MASK   = 0x00004000;    // Enable TXFIFO Empty Interrupt
const uintptr_t CAN_IER_ETXFEMP_BPOS   = 14;            // Writes to this bit enable or disable interrupts
                                                        // when the TXFEMP bit in the ISR is set.
                                                        // 1: Enable interrupt generation if TXFEMP bit in
                                                        // ISR is set.
                                                        // 0: Disable interrupt generation if TXFEMP bit in
                                                        // ISR is set.

                                                        // Properties: Bit: 13, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_ETXFWMEMP_MASK = 0x00002000;    // Enable TXFIFO watermark Empty Interrupt
const uintptr_t CAN_IER_ETXFWMEMP_BPOS = 13;            // Writes to this bit enable or disable interrupts
                                                        // when the TXFWMEMP bit in the ISR is set.
                                                        // 1: Enable interrupt generation if TXFWMEMP bit
                                                        // in ISR is set.
                                                        // 0: Disable interrupt generation if TXFWMEMP bit
                                                        // in ISR is set.

                                                        // Properties: Bit: 12, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_ERXFWMFLL_MASK = 0x00001000;    // Enable RXFIFO watermark Full Interrupt
const uintptr_t CAN_IER_ERXFWMFLL_BPOS = 12;            // Writes to this bit enable or disable interrupts
                                                        // when the RXFLL bit in the ISR is set.
                                                        // 1: Enable interrupt generation if RXFWMFLL bit
                                                        // in ISR is set.
                                                        // 0: Disable interrupt generation if RXFWMFLL bit
                                                        // in ISR is set.

                                                        // Properties: Bit: 11, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_EWKUP_MASK     = 0x00000800;    // Enable Wake up Interrupt
const uintptr_t CAN_IER_EWKUP_BPOS     = 11;            // Writes to this bit enable or disable interrupts
                                                        // when the WKUP bit in the ISR is set.
                                                        // 1: Enable interrupt generation if WKUP bit in ISR
                                                        // is set.
                                                        // 0: Disable interrupt generation if WKUP bit in ISR
                                                        // is set.

                                                        // Properties: Bit: 10, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_ESLP_MASK      = 0x00000400;    // Enable Sleep Interrupt
const uintptr_t CAN_IER_ESLP_BPOS      = 10;            // Writes to this bit enable or disable interrupts
                                                        // when the SLP bit in the ISR is set.
                                                        // 1: Enable interrupt generation if SLP bit in ISR is
                                                        // set.
                                                        // 0: Disable interrupt generation if SLP bit in ISR is
                                                        // set.

                                                        // Properties: Bit: 9, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_EBSOFF_MASK    = 0x00000200;    // Enable Bus OFF Interrupt
const uintptr_t CAN_IER_EBSOFF_BPOS    = 9;             // Writes to this bit enable or disable interrupts
                                                        // when the BSOFF bit in the ISR is set.
                                                        // 1: Enable interrupt generation if BSOFF bit in ISR
                                                        // is set.
                                                        // 0: Disable interrupt generation if BSOFF bit in ISR
                                                        // is set.

                                                        // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_EERROR_MASK    = 0x00000100;    // Enable Error Interrupt
const uintptr_t CAN_IER_EERROR_BPOS    = 8;             // Writes to this bit enable or disable interrupts
                                                        // when the ERROR bit in the ISR is set.
                                                        // 1: Enable interrupt generation if ERROR bit in ISR
                                                        // is set.
                                                        // 0: Disable interrupt generation if ERROR bit in
                                                        // ISR is set.

                                                        // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_ERXNEMP_MASK   = 0x00000080;    // Enable Receive FIFO Not Empty Interrupt
const uintptr_t CAN_IER_ERXNEMP_BPOS   = 7;             // Writes to this bit enable or disable interrupts
                                                        // when the RXNEMP bit in the ISR is set.
                                                        // 1: Enable interrupt generation if RXNEMP bit in
                                                        // ISR is set.
                                                        // 0: Disable interrupt generation if RXNEMP bit in
                                                        // ISR is set.

                                                        // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_ERXOFLW_MASK   = 0x00000040;    // Enable RX FIFO Overflow Interrupt
const uintptr_t CAN_IER_ERXOFLW_BPOS   = 6;             // Writes to this bit enable or disable interrupts
                                                        // when the RXOFLW bit in the ISR is set.
                                                        // 1: Enable interrupt generation if RXOFLW bit in
                                                        // ISR is set.
                                                        // 0: Disable interrupt generation if RXOFLW bit in
                                                        // ISR is set.

                                                        // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_ERXUFLW_MASK   = 0x00000020;    // Enable RX FIFO Underflow Interrupt
const uintptr_t CAN_IER_ERXUFLW_BPOS   = 5;             // Writes to this bit enable or disable interrupts
                                                        // when the RXUFLW bit in the ISR is set.
                                                        // 1: Enable interrupt generation if RXUFLW bit in
                                                        // ISR is set.
                                                        // 0: Disable interrupt generation if RXUFLW bit in
                                                        // ISR is set.

                                                        // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_ERXOK_MASK     = 0x00000010;    // Enable New Message Received Interrupt
const uintptr_t CAN_IER_ERXOK_BPOS     = 4;             // Writes to this bit enable or disable interrupts
                                                        // when the RXOK bit in the ISR is set.
                                                        // 1: Enable interrupt generation if RXOK bit in ISR
                                                        // is set.
                                                        // 0: Disable interrupt generation if RXOK bit in ISR
                                                        // is set.

                                                        // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_ETXBFLL_MASK   = 0x00000008;    // Enable High Priority Transmit Buffer Full
const uintptr_t CAN_IER_ETXBFLL_BPOS   = 3;             // Interrupt
                                                        // Writes to this bit enable or disable interrupts
                                                        // when the TXBFLL bit in the ISR is set.
                                                        // 1: Enable interrupt generation if TXBFLL bit in
                                                        // ISR is set.
                                                        // 0: Disable interrupt generation if TXBFLL bit in
                                                        // ISR is set.

                                                        // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_ETXFLL_MASK    = 0x00000004;    // Enable Transmit FIFO Full Interrupt
const uintptr_t CAN_IER_ETXFLL_BPOS    = 2;             // Writes to this bit enable or disable interrupts
                                                        // when TXFLL bit in the ISR is set.
                                                        // 1: Enable interrupt generation if TXFLL bit in ISR
                                                        // is set.
                                                        // 0: Disable interrupt generation if TXFLL bit in ISR
                                                        // is set.

                                                        // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_ETXOK_MASK     = 0x00000002;    // Enable Transmission Successful Interrupt
const uintptr_t CAN_IER_ETXOK_BPOS     = 1;             // Writes to this bit enable or disable interrupts
                                                        // when the TXOK bit in the ISR is set.
                                                        // 1: Enable interrupt generation if TXOK bit in ISR
                                                        // is set.
                                                        // 0: Disable interrupt generation if TXOK bit in ISR
                                                        // is set.

                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t CAN_IER_EARBLST_MASK   = 0x00000001;    // Enable Arbitration Lost Interrupt
const uintptr_t CAN_IER_EARBLST_BPOS   = 0;             // Writes to this bit enable or disable interrupts
                                                        // when the ARBLST bit in the ISR is set.
                                                        // 1: Enable interrupt generation if ARBLST bit in
                                                        // ISR is set.
                                                        // 0: Disable interrupt generation if ARBLST bit in
                                                        // ISR is set.


//------------------------------------------------------------------------------
//
// Register (CAN) ICR
//
// Name                    CAN_ICR_REG
// Relative Address        0x00000024
// Absolute Address        can0: 0xE0008024
//                         can1: 0xE0009024
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Interrupt Clear Register
//
// Register CAN_ICR_REG Details
//
// RESERVED                                                Properties: Bits: 31:15, Type: rw, Reset Value: 0x0

                                                        // Properties: Bit: 14, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CTXFEMP_MASK   = 0x00004000;    // Clear TXFIFO Empty Interrupt
const uintptr_t CAN_ICR_CTXFEMP_BPOS   = 14;            // Writing a 1 to this bit clears the TXFEMP bit in the
                                                        // ISR.

                                                        // Properties: Bit: 13, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CTXFWMEMP_MASK = 0x00002000;    // Clear TXFIFO Watermark Empty Interrupt
const uintptr_t CAN_ICR_CTXFWMEMP_BPOS = 13;            // Writing a 1 to this bit clears the TXFWMEMP bit
                                                        // in the ISR.

                                                        // Properties: Bit: 12, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CRXFWMFLL_MASK = 0x00001000;    // Clear RXFIFO Watermark Full Interrupt
const uintptr_t CAN_ICR_CRXFWMFLL_BPOS = 12;            // Writing a 1 to this bit clears the RXFWMFLL bit in
                                                        // the ISR.

                                                        // Properties: Bit: 11, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CWKUP_MASK     = 0x00000800;    // Clear Wake up Interrupt
const uintptr_t CAN_ICR_CWKUP_BPOS     = 11;            // Writing a 1 to this bit clears the WKUP bit in the
                                                        // ISR.

                                                        // Properties: Bit: 10, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CSLP_MASK      = 0x00000400;    // Clear Sleep Interrupt
const uintptr_t CAN_ICR_CSLP_BPOS      = 10;            // Writing a 1 to this bit clears the SLP bit in the ISR.

                                                        // Properties: Bit: 9, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CBSOFF_MASK    = 0x00000200;    // Clear Bus Off Interrupt
const uintptr_t CAN_ICR_CBSOFF_BPOS    = 9;             // Writing a 1 to this bit clears the BSOFF bit in the
                                                        // ISR.

                                                        // Properties: Bit: 8, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CERROR_MASK    = 0x00000100;    // Clear Error Interrupt
const uintptr_t CAN_ICR_CERROR_BPOS    = 8;             // Writing a 1 to this bit clears the ERROR bit in the
                                                        // ISR.

                                                        // Properties: Bit: 7, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CRXNEMP_MASK   = 0x00000080;    // Clear Receive FIFO Not Empty Interrupt
const uintptr_t CAN_ICR_CRXNEMP_BPOS   = 7;             // Writing a 1 to this bit clears the RXNEMP bit in the
                                                        // ISR.

                                                        // Properties: Bit: 6, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CRXOFLW_MASK   = 0x00000040;    // Clear RX FIFO Overflow Interrupt
const uintptr_t CAN_ICR_CRXOFLW_BPOS   = 6;             // Writing a 1 to this bit clears the RXOFLW bit in the
                                                        // ISR.

                                                        // Properties: Bit: 5, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CRXUFLW_MASK   = 0x00000020;    // Clear RX FIFO Underflow Interrupt
const uintptr_t CAN_ICR_CRXUFLW_BPOS   = 5;             // Writing a 1 to this bit clears the RXUFLW bit in the
                                                        // ISR.

                                                        // Properties: Bit: 4, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CRXOK_MASK     = 0x00000010;    // Clear New Message Received Interrupt
const uintptr_t CAN_ICR_CRXOK_BPOS     = 4;             // Writing a 1 to this bit clears the RXOK bit in the
                                                        // ISR.

                                                        // Properties: Bit: 3, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CTXBFLL_MASK   = 0x00000008;    // Clear High Priority Transmit Buffer Full Interrupt
const uintptr_t CAN_ICR_CTXBFLL_BPOS   = 3;             // Writing a 1 to this bit clears the TXBFLL bit in the
                                                        // ISR.

                                                        // Properties: Bit: 2, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CTXFLL_MASK    = 0x00000004;    // Clear Transmit FIFO Full Interrupt
const uintptr_t CAN_ICR_CTXFLL_BPOS    = 2;             // Writing a 1 to this bit clears the TXFLL bit in the
                                                        // ISR.

                                                        // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CTXOK_MASK     = 0x00000002;    // Clear Transmission Successful Interrupt
const uintptr_t CAN_ICR_CTXOK_BPOS     = 1;             // Writing a 1 to this bit clears the CTXOK bit in the
                                                        // ISR.

                                                        // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t CAN_ICR_CARBLST_MASK   = 0x00000001;    // Clear Arbitration Lost Interrupt
const uintptr_t CAN_ICR_CARBLST_BPOS   = 0;             // Writing a 1 to this bit clears the ARBLST bit in the
                                                        // ISR.


//------------------------------------------------------------------------------
//
// Register (CAN) TCR
//
// Name                     CAN_TCR_REG
// Relative Address         0x00000028
// Absolute Address        can0: 0xE0008028
//                         can1: 0xE0009028
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Timestamp Control Register
//
// Register CAN_TCR_REG Details
//
// RESERVED                                          Properties: Bits: 31:1, Type: rw, Reset Value: 0x0

                                                  // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t CAN_TCR_CTS_MASK = 0x00000001;    // Clear Timestamp
const uintptr_t CAN_TCR_CTS_BPOS = 0;             // Internal free running counter is cleared to 0 when
                                                  // CTS=1.
                                                  // This bit only needs to be written once with a 1 to
                                                  // clear the counter.
                                                  // The bit will automatically return to 0.


//------------------------------------------------------------------------------
//
// Register (CAN) WIR
//
// Name                    CAN_WIR_REG
// Relative Address        0x0000002C
// Absolute Address        can0: 0xE000802C
//                         can1: 0xE000902C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00003F3F
// Description             Watermark Interrupt Register
//
// Register CAN_WIR_REG Details
//         The TXFIFO Empty watermark (EW) programmed in this register will be applied to TX FIFO only. The
//         RXFIFO Full watermark (FW) programmed in this register will be applied to RX FIFO only. The watermark
//         register is allowed to program only when CEN=0 in SRR register.
//         The TXFIFO Watermark EMPTY interrupt (TXFWMEMP) will continue to assert as long as the number of
//         empty spaces in the TX FIFO is greater than the TXFIFO Empty watermark (EW). The RXFLL interrupt will
//         continue to assert as long as the RX FIFO count remains above the RXFIFO Full watermark (FW).
//
// RESERVED                                         Properties: Bits: 31:16, Type: rw, Reset Value: 0x0

                                                 // Properties: Bits: 15:8, Type: rw, Reset Value: 0x3F
const uintptr_t CAN_WIR_EW_MASK = 0x0000FF00;    // TXFIFO Empty watermark
const uintptr_t CAN_WIR_EW_BPOS = 8;             // TXFIFO generates an EMPTY interrupt based on
                                                 // the value programmed in this field. The valid
                                                 // range is (1-63). No protection is given for illegal
                                                 // programming in this field. This field can be
                                                 // written to only when CEN bit in SRR is 0.

                                                 // Properties: Bits: 7:0, Type: rw, Reset Value: 0x3F
const uintptr_t CAN_WIR_FW_MASK = 0x000000FF;    // RXFIFO Full watermark
const uintptr_t CAN_WIR_FW_BPOS = 0;             // RXFIFO generates FULL interrupt based on the
                                                 // value programmed in this field. The valid range is
                                                 // (1-63). No protection is given for illegal
                                                 // programming in this field. This field can be
                                                 // written to only when CEN bit in SRR is 0.


//------------------------------------------------------------------------------
//
// Register (CAN) TXFIFO_ID
//
// Name                    CAN_TXFIFO_ID_REG
// Relative Address        0x00000030
// Absolute Address        can0: 0xE0008030
//                         can1: 0xE0009030
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             transmit message fifo message identifier
//
// Register CAN_TXFIFO_ID_REG Details
//
                                                           // Properties: Bits: 31:21, Type: wo, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_ID_IDH_MASK    = 0xFFE00000;    // Standard Message ID
const uintptr_t CAN_TXFIFO_ID_IDH_BPOS    = 21;            // The Identifier portion for a Standard Frame is 11
                                                           // bits. These bits indicate the Standard Frame ID.
                                                           // This field is valid for both Standard and Extended
                                                           // Frames.

                                                           // Properties: Bit: 20, Type: wo, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_ID_SRRRTR_MASK = 0x00100000;    // Substitute Remote Transmission Request
const uintptr_t CAN_TXFIFO_ID_SRRRTR_BPOS = 20;            // This bit differentiates between data frames and
                                                           // remote frames. Valid only for Standard Frames.
                                                           // For Extended frames this bit is 1.
                                                           // 1: Indicates that the message frame is a Remote
                                                           // Frame.
                                                           // 0: Indicates that the message frame is a Data
                                                           // Frame.

                                                           // Properties: Bit: 19, Type: wo, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_ID_IDE_MASK    = 0x00080000;    // Identifier Extension
const uintptr_t CAN_TXFIFO_ID_IDE_BPOS    = 19;            // This bit differentiates between frames using the
                                                           // Standard Identifier and those using the Extended
                                                           // Identifier. Valid for both Standard and Extended
                                                           // Frames.
                                                           // 1: Indicates the use of an Extended Message
                                                           // Identifier.
                                                           // 0: Indicates the use of a Standard Message
                                                           // Identifier.

                                                           // Properties: Bits: 18:1, Type: wo, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_ID_IDL_MASK    = 0x0007FFFE;    // Extended Message ID
const uintptr_t CAN_TXFIFO_ID_IDL_BPOS    = 1;             // This field indicates the Extended Identifier. Valid
                                                           // only for Extended Frames. For Standard Frames,
                                                           // reads from this field return 0s. For Standard
                                                           // Frames, writes to this field should be 0s.

                                                           // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_ID_RTR_MASK    = 0x00000001;    // Remote Transmission Request
const uintptr_t CAN_TXFIFO_ID_RTR_BPOS    = 0;             // This bit differentiates between data frames and
                                                           // remote frames. Valid only for Extended Frames.
                                                           // 1: Indicates the message object is a Remote Frame
                                                           // 0: Indicates the message object is a Data Frame
                                                           // For Standard Frames, reads from this bit returns 0
                                                           // For Standard Frames, writes to this bit should be 0


//------------------------------------------------------------------------------
//
// Register (CAN) TXFIFO_DLC
//
// Name                    CAN_TXFIFO_DLC_REG
// Relative Address        0x00000034
// Absolute Address        can0: 0xE0008034
//                         can1: 0xE0009034
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             transmit message fifo data length code
//
// Register CAN_TXFIFO_DLC_REG Details
//
                                                         // Properties: Bits: 31:28, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_DLC_DLC_MASK = 0xF0000000;    // Data Length Code
const uintptr_t CAN_TXFIFO_DLC_DLC_BPOS = 28;            // This is the data length portion of the control field
                                                         // of the CAN frame. This indicates the number
                                                         // valid data bytes in Data Word 1 and Data Word 2
                                                         // registers.

// RESERVED                                                 Properties: Bits: 27:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (CAN) TXFIFO_DATA1
//
// Name                    CAN_TXFIFO_DATA1_REG
// Software Name           TXFIFO_DW1
// Relative Address        0x00000038
// Absolute Address        can0: 0xE0008038
//                         can1: 0xE0009038
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             transmit message fifo data word 1
//
// Register CAN_TXFIFO_DATA1_REG Details
//
                                                           // Properties: Bits: 31:24, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_DATA1_DB0_MASK = 0xFF000000;    // Data Byte 0
const uintptr_t CAN_TXFIFO_DATA1_DB0_BPOS = 24;            // Reads from this field return invalid data if the
                                                           // message has no data.

                                                           // Properties: Bits: 23:16, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_DATA1_DB1_MASK = 0x00FF0000;    // Data Byte 1
const uintptr_t CAN_TXFIFO_DATA1_DB1_BPOS = 16;            // Reads from this field return invalid data if the
                                                           // message has only 1 byte of data or fewer

                                                           // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_DATA1_DB2_MASK = 0x0000FF00;    // Data Byte 2
const uintptr_t CAN_TXFIFO_DATA1_DB2_BPOS = 8;             // Reads from this field return invalid data if the
                                                           // message has only 2 byte of data or fewer

                                                           // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_DATA1_DB3_MASK = 0x000000FF;    // Data Byte 3
const uintptr_t CAN_TXFIFO_DATA1_DB3_BPOS = 0;             // Reads from this field return invalid data if the
                                                           // message has only 3 byte of data or fewer


//------------------------------------------------------------------------------
//
// Register (CAN) TXFIFO_DATA2
//
// Name                    CAN_TXFIFO_DATA2_REG
// Software Name           TXFIFO_DW2
// Relative Address        0x0000003C
// Absolute Address        can0: 0xE000803C
//                         can1: 0xE000903C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             transmit message fifo data word 2
//
// Register CAN_TXFIFO_DATA2_REG Details
//
                                                           // Properties: Bits: 31:24, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_DATA2_DB0_MASK = 0xFF000000;    // Data Byte 4
const uintptr_t CAN_TXFIFO_DATA2_DB0_BPOS = 24;            // Reads from this field return invalid data if the
                                                           // message has only 4 byte of data or fewer

                                                           // Properties: Bits: 23:16, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_DATA2_DB1_MASK = 0x00FF0000;    // Data Byte 5
const uintptr_t CAN_TXFIFO_DATA2_DB1_BPOS = 16;            // Reads from this field return invalid data if the
                                                           // message has only 5 byte of data or fewer

                                                           // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_DATA2_DB2_MASK = 0x0000FF00;    // Data Byte 6
const uintptr_t CAN_TXFIFO_DATA2_DB2_BPOS = 8;             // Reads from this field return invalid data if the
                                                           // message has only 6 byte of data or fewer

                                                           // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXFIFO_DATA2_DB3_MASK = 0x000000FF;    // Data Byte 7
const uintptr_t CAN_TXFIFO_DATA2_DB3_BPOS = 0;             // Reads from this field return invalid data if the
                                                           // message has 7 byte of data or fewer


//------------------------------------------------------------------------------
//
// Register (CAN) TXHPB_ID
//
// Name                    CAN_TXHPB_ID_REG
// Relative Address        0x00000040
// Absolute Address        can0: 0xE0008040
//                         can1: 0xE0009040
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             transmit high priority buffer message identifier
//
// Register CAN_TXHPB_ID_REG Details
//
                                                          // Properties: Bits: 31:21, Type: wo, Reset Value: 0x0
const uintptr_t CAN_TXHPB_ID_IDH_MASK    = 0xFFE00000;    // Standard Message ID
const uintptr_t CAN_TXHPB_ID_IDH_BPOS    = 21;            // The Identifier portion for a Standard Frame is 11
                                                          // bits. These bits indicate the Standard Frame ID.
                                                          // This field is valid for both Standard and Extended
                                                          // Frames.

                                                          // Properties: Bit: 20, Type: wo, Reset Value: 0x0
const uintptr_t CAN_TXHPB_ID_SRRRTR_MASK = 0x00100000;    // Substitute Remote Transmission Request
const uintptr_t CAN_TXHPB_ID_SRRRTR_BPOS = 20;            // This bit differentiates between data frames and
                                                          // remote frames. Valid only for Standard Frames.
                                                          // For Extended frames this bit is 1.
                                                          // 1: Indicates that the message frame is a Remote
                                                          // Frame.
                                                          // 0: Indicates that the message frame is a Data
                                                          // Frame.

                                                          // Properties: Bit: 19, Type: wo, Reset Value: 0x0
const uintptr_t CAN_TXHPB_ID_IDE_MASK    = 0x00080000;    // Identifier Extension
const uintptr_t CAN_TXHPB_ID_IDE_BPOS    = 19;            // This bit differentiates between frames using the
                                                          // Standard Identifier and those using the Extended
                                                          // Identifier. Valid for both Standard and Extended
                                                          // Frames.
                                                          // 1: Indicates the use of an Extended Message
                                                          // Identifier.
                                                          // 0: Indicates the use of a Standard Message
                                                          // Identifier.

                                                          // Properties: Bits: 18:1, Type: wo, Reset Value: 0x0
const uintptr_t CAN_TXHPB_ID_IDL_MASK    = 0x0007FFFE;    // Extended Message ID
const uintptr_t CAN_TXHPB_ID_IDL_BPOS    = 1;             // This field indicates the Extended Identifier. Valid
                                                          // only for Extended Frames. For Standard Frames,
                                                          // reads from this field return 0s. For Standard
                                                          // Frames, writes to this field should be 0s.

                                                          // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t CAN_TXHPB_ID_RTR_MASK    = 0x00000001;    // Remote Transmission Request
const uintptr_t CAN_TXHPB_ID_RTR_BPOS    = 0;             // This bit differentiates between data frames and
                                                          // remote frames. Valid only for Extended Frames.
                                                          // 1: Indicates the message object is a Remote Frame
                                                          // 0: Indicates the message object is a Data Frame
                                                          // For Standard Frames, reads from this bit returns 0
                                                          // For Standard Frames, writes to this bit should be 0


//------------------------------------------------------------------------------
//
// Register (CAN) TXHPB_DLC
//
// Name                    CAN_TXHPB_DLC_REG
// Relative Address        0x00000044
// Absolute Address        can0: 0xE0008044
//                         can1: 0xE0009044
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             transmit high priority buffer data length code
//
// Register CAN_TXHPB_DLC_REG Details
//
                                                        // Properties: Bits: 31:28, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXHPB_DLC_DLC_MASK = 0xF0000000;    // Data Length Code
const uintptr_t CAN_TXHPB_DLC_DLC_BPOS = 28;            // This is the data length portion of the control field
                                                        // of the CAN frame. This indicates the number
                                                        // valid data bytes in Data Word 1 and Data Word 2
                                                        // registers.

// RESERVED                                                Properties: Bits: 27:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (CAN) TXHPB_DATA1
//
// Name                    CAN_TXHPB_DATA1_REG
// Software Name           TXHPB_DW1
// Relative Address        0x00000048
// Absolute Address        can0: 0xE0008048
//                         can1: 0xE0009048
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             transmit high priority buffer data word 1
//
// Register CAN_TXHPB_DATA1_REG Details
//
                                                          // Properties: Bits: 31:24, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXHPB_DATA1_DB0_MASK = 0xFF000000;    // Data Byte 0
const uintptr_t CAN_TXHPB_DATA1_DB0_BPOS = 24;            // Reads from this field return invalid data if the
                                                          // message has no data.

                                                          // Properties: Bits: 23:16, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXHPB_DATA1_DB1_MASK = 0x00FF0000;    // Data Byte 1
const uintptr_t CAN_TXHPB_DATA1_DB1_BPOS = 16;            // Reads from this field return invalid data if the
                                                          // message has only 1 byte of data or fewer

                                                          // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXHPB_DATA1_DB2_MASK = 0x0000FF00;    // Data Byte 2
const uintptr_t CAN_TXHPB_DATA1_DB2_BPOS = 8;             // Reads from this field return invalid data if the
                                                          // message has only 2 byte of data or fewer

                                                          // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXHPB_DATA1_DB3_MASK = 0x000000FF;    // Data Byte 3
const uintptr_t CAN_TXHPB_DATA1_DB3_BPOS = 0;             // Reads from this field return invalid data if the
                                                          // message has only 3 byte of data or fewer


//------------------------------------------------------------------------------
//
// Register (CAN) TXHPB_DATA2
//
// Name                    CAN_TXHPB_DATA2_REG
// Software Name           TXHPB_DW2
// Relative Address        0x0000004C
// Absolute Address        can0: 0xE000804C
//                         can1: 0xE000904C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             transmit high priority buffer data word 2
//
// Register CAN_TXHPB_DATA2_REG Details
//
                                                          // Properties: Bits: 31:24, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXHPB_DATA2_DB0_MASK = 0xFF000000;    // Data Byte 4
const uintptr_t CAN_TXHPB_DATA2_DB0_BPOS = 24;            // Reads from this field return invalid data if the
                                                          // message has only 4 byte of data or fewer

                                                          // Properties: Bits: 23:16, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXHPB_DATA2_DB1_MASK = 0x00FF0000;    // Data Byte 5
const uintptr_t CAN_TXHPB_DATA2_DB1_BPOS = 16;            // Reads from this field return invalid data if the
                                                          // message has only 5 byte of data or fewer

                                                          // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXHPB_DATA2_DB2_MASK = 0x0000FF00;    // Data Byte 6
const uintptr_t CAN_TXHPB_DATA2_DB2_BPOS = 8;             // Reads from this field return invalid data if the
                                                          // message has only 6 byte of data or fewer

                                                          // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t CAN_TXHPB_DATA2_DB3_MASK = 0x000000FF;    // Data Byte 7
const uintptr_t CAN_TXHPB_DATA2_DB3_BPOS = 0;             // Reads from this field return invalid data if the
                                                          // message has 7 byte of data or fewer


//------------------------------------------------------------------------------
//
// Register (CAN) RXFIFO_ID
//
// Name                    CAN_RXFIFO_ID_REG
// Relative Address        0x00000050
// Absolute Address        can0: 0xE0008050
//                         can1: 0xE0009050
// Width                   32 bits
// Access Type             ro
// Reset Value             x
// Description             receive message fifo message identifier
//
// Register CAN_RXFIFO_ID_REG Details
//
                                                           // Properties: Bits: 31:21, Type: ro, Reset Value: x
const uintptr_t CAN_RXFIFO_ID_IDH_MASK    = 0xFFE00000;    // Standard Message ID
const uintptr_t CAN_RXFIFO_ID_IDH_BPOS    = 21;            // The Identifier portion for a Standard Frame is 11
                                                           // bits.
                                                           // These bits indicate the Standard Frame ID.
                                                           // This field is valid for both Standard and Extended
                                                           // Frames.

                                                           // Properties: Bit: 20, Type: ro, Reset Value: x
const uintptr_t CAN_RXFIFO_ID_SRRRTR_MASK = 0x00100000;    // Substitute Remote Transmission Request
const uintptr_t CAN_RXFIFO_ID_SRRRTR_BPOS = 20;            // This bit differentiates between data frames and
                                                           // remote frames. Valid only for Standard Frames.
                                                           // For Extended frames this bit is 1.
                                                           // 1: Indicates that the message frame is a Remote
                                                           // Frame.
                                                           // 0: Indicates that the message frame is a Data
                                                           // Frame.

                                                           // Properties: Bit: 19, Type: ro, Reset Value: x
const uintptr_t CAN_RXFIFO_ID_IDE_MASK    = 0x00080000;    // Identifier Extension
const uintptr_t CAN_RXFIFO_ID_IDE_BPOS    = 19;            // This bit differentiates between frames using the
                                                           // Standard Identifier and those using the Extended
                                                           // Identifier. Valid for both Standard and Extended
                                                           // Frames.
                                                           // 1: Indicates the use of an Extended Message
                                                           // Identifier.
                                                           // 0: Indicates the use of a Standard Message
                                                           // Identifier.

                                                           // Properties: Bits: 18:1, Type: ro, Reset Value: x
const uintptr_t CAN_RXFIFO_ID_IDL_MASK    = 0x0007FFFE;    // Extended Message ID
const uintptr_t CAN_RXFIFO_ID_IDL_BPOS    = 1;             // This field indicates the Extended Identifier.
                                                           // Valid only for Extended Frames.
                                                           // For Standard Frames, reads from this field return
                                                           // 0s
                                                           // For Standard Frames, writes to this field should
                                                           // be 0s

                                                           // Properties: Bit: 0, Type: ro, Reset Value: x
const uintptr_t CAN_RXFIFO_ID_RTR_MASK    = 0x00000001;    // Remote Transmission Request
const uintptr_t CAN_RXFIFO_ID_RTR_BPOS    = 0;             // This bit differentiates between data frames and
                                                           // remote frames.
                                                           // Valid only for Extended Frames.
                                                           // 1: Indicates the message object is a Remote Frame
                                                           // 0: Indicates the message object is a Data Frame
                                                           // For Standard Frames, reads from this bit returns 0
                                                           // For Standard Frames, writes to this bit should be 0


//------------------------------------------------------------------------------
//
// Register (CAN) RXFIFO_DLC
//
// Name                    CAN_RXFIFO_DLC_REG
// Relative Address        0x00000054
// Absolute Address        can0: 0xE0008054
//                         can1: 0xE0009054
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             receive message fifo data length code
//
// Register CAN_RXFIFO_DLC_REG Details
//
                                                         // Properties: Bits: 31:28, Type: rw, Reset Value: x
const uintptr_t CAN_RXFIFO_DLC_DLC_MASK = 0xF0000000;    // Data Length Code
const uintptr_t CAN_RXFIFO_DLC_DLC_BPOS = 28;            // This is the data length portion of the control field
                                                         // of the CAN frame. This indicates the number
                                                         // valid data bytes in Data Word 1 and Data Word 2
                                                         // registers.

// RESERVED                                                 Properties: Bits: 27:16, Type: rw, Reset Value: x

                                                         // Properties: Bits: 15:0, Type: rw, Reset Value: x
const uintptr_t CAN_RXFIFO_DLC_RXT_MASK = 0x0000FFFF;    // RX Timestamp
const uintptr_t CAN_RXFIFO_DLC_RXT_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (CAN) RXFIFO_DATA1
//
// Name                    CAN_RXFIFO_DATA1_REG
// Software Name           RXFIFO_DW1
// Relative Address        0x00000058
// Absolute Address        can0: 0xE0008058
//                         can1: 0xE0009058
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             receive message fifo data word 1
//
// Register CAN_RXFIFO_DATA1_REG Details
//
                                                           // Properties: Bits: 31:24, Type: rw, Reset Value: x
const uintptr_t CAN_RXFIFO_DATA1_DB0_MASK = 0xFF000000;    // Data Byte 0
const uintptr_t CAN_RXFIFO_DATA1_DB0_BPOS = 24;            // Reads from this field return invalid data if the
                                                           // message has no data.

                                                           // Properties: Bits: 23:16, Type: rw, Reset Value: x
const uintptr_t CAN_RXFIFO_DATA1_DB1_MASK = 0x00FF0000;    // Data Byte 1
const uintptr_t CAN_RXFIFO_DATA1_DB1_BPOS = 16;            // Reads from this field return invalid data if the
                                                           // message has only 1 byte of data or fewer

                                                           // Properties: Bits: 15:8, Type: rw, Reset Value: x
const uintptr_t CAN_RXFIFO_DATA1_DB2_MASK = 0x0000FF00;    // Data Byte 2
const uintptr_t CAN_RXFIFO_DATA1_DB2_BPOS = 8;             // Reads from this field return invalid data if the
                                                           // message has only 2 byte of data or fewer

                                                           // Properties: Bits: 7:0, Type: rw, Reset Value: x
const uintptr_t CAN_RXFIFO_DATA1_DB3_MASK = 0x000000FF;    // Data Byte 3
const uintptr_t CAN_RXFIFO_DATA1_DB3_BPOS = 0;             // Reads from this field return invalid data if the
                                                           // message has only 3 byte of data or fewer


//------------------------------------------------------------------------------
//
// Register (CAN) RXFIFO_DATA2
//
// Name                    CAN_RXFIFO_DATA2_REG
// Software Name           RXFIFO_DW2
// Relative Address        0x0000005C
// Absolute Address        can0: 0xE000805C
//                         can1: 0xE000905C
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             receive message fifo data word 2
//
// Register CAN_RXFIFO_DATA2_REG Details
//
                                                           // Properties: Bits: 31:24, Type: rw, Reset Value: x
const uintptr_t CAN_RXFIFO_DATA2_DB0_MASK = 0xFF000000;    // Data Byte 4
const uintptr_t CAN_RXFIFO_DATA2_DB0_BPOS = 24;            // Reads from this field return invalid data if the
                                                           // message has only 4 byte of data or fewer

                                                           // Properties: Bits: 23:16, Type: rw, Reset Value: x
const uintptr_t CAN_RXFIFO_DATA2_DB1_MASK = 0x00FF0000;    // Data Byte 5
const uintptr_t CAN_RXFIFO_DATA2_DB1_BPOS = 16;            // Reads from this field return invalid data if the
                                                           // message has only 5 byte of data or fewer

                                                           // Properties: Bits: 15:8, Type: rw, Reset Value: x
const uintptr_t CAN_RXFIFO_DATA2_DB2_MASK = 0x0000FF00;    // Data Byte 6
const uintptr_t CAN_RXFIFO_DATA2_DB2_BPOS = 8;             // Reads from this field return invalid data if the
                                                           // message has only 6 byte of data or fewer

                                                           // Properties: Bits: 7:0, Type: rw, Reset Value: x
const uintptr_t CAN_RXFIFO_DATA2_DB3_MASK = 0x000000FF;    // Data Byte 7
const uintptr_t CAN_RXFIFO_DATA2_DB3_BPOS = 0;             // Reads from this field return invalid data if the
                                                           // message has 7 byte of data or fewer


//------------------------------------------------------------------------------
//
// Register (CAN) AFR
//
// Name                    CAN_AFR_REG
// Relative Address        0x00000060
// Absolute Address         can0: 0xE0008060
//                          can1: 0xE0009060
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Acceptance Filter Register
//
// Register CAN_AFR_REG Details
//         The Acceptance Filter Register (AFR) defines which acceptance filters to use. Each Acceptance Filter ID
//         Register (AFIR) and Acceptance Filter Mask Register (AFMR) pair is associated with a UAF bit.
//         When the UAF bit is '1,' the corresponding acceptance filter pair is used for acceptance filtering. When the
//         UAF bit is '0,' the corresponding acceptance filter pair is not used for acceptance filtering.
//         To modify an acceptance filter pair in Normal mode, the corresponding UAF bit in this register must be set
//         to '0.'After the acceptance filter is modified, the corresponding UAF bit must be set to '1.'The following
//         conditions govern the number of UAF bits that can exist in the.
//         * If all UAF bits are set to '0,' then all received messages are stored in the RX FIFO
//         * If the UAF bits are changed from a '1' to '0' during reception of a CAN message, the message may not be
//         stored in the RX FIFO.
//
// RESERVED                                           Properties: Bits: 31:4, Type: rw, Reset Value: 0x0

                                                   // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t CAN_AFR_UAF4_MASK = 0x00000008;    // Use Acceptance Filter Number 4
const uintptr_t CAN_AFR_UAF4_BPOS = 3;             // Enables the use of acceptance filter pair 4.
                                                   // 1: Indicates Acceptance Filter Mask Register 4 and
                                                   // Acceptance Filter ID Register 4 are used for
                                                   // acceptance filtering.
                                                   // 0: Indicates Acceptance Filter Mask Register 4 and
                                                   // Acceptance Filter ID Register 4 are not used for
                                                   // acceptance filtering.

                                                   // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t CAN_AFR_UAF3_MASK = 0x00000004;    // Use Acceptance Filter Number 3
const uintptr_t CAN_AFR_UAF3_BPOS = 2;             // Enables the use of acceptance filter pair 3.
                                                   // 1: Indicates Acceptance Filter Mask Register 3 and
                                                   // Acceptance Filter ID Register 3 are used for
                                                   // acceptance filtering.
                                                   // 0: Indicates Acceptance Filter Mask Register 3 and
                                                   // Acceptance Filter ID Register 3 are not used for
                                                   // acceptance filtering.

                                                   // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t CAN_AFR_UAF2_MASK = 0x00000002;    // Use Acceptance Filter Number 2
const uintptr_t CAN_AFR_UAF2_BPOS = 1;             // Enables the use of acceptance filter pair 2.
                                                   // 1: Indicates Acceptance Filter Mask Register 2 and
                                                   // Acceptance Filter ID Register 2 are used for
                                                   // acceptance filtering.
                                                   // 0: Indicates Acceptance Filter Mask Register 2 and
                                                   // Acceptance Filter ID Register 2 are not used for
                                                   // acceptance filtering.

                                                   // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t CAN_AFR_UAF1_MASK = 0x00000001;    // Use Acceptance Filter Number 1.
const uintptr_t CAN_AFR_UAF1_BPOS = 0;             // Enables the use of acceptance filter pair 1.
                                                   // 1: Indicates Acceptance Filter Mask Register 1 and
                                                   // Acceptance Filter ID Register 1 are used for
                                                   // acceptance filtering.
                                                   // 0: Indicates Acceptance Filter Mask Register 1 and
                                                   // Acceptance Filter ID Register 1 are not used for
                                                   // acceptance filtering.


//------------------------------------------------------------------------------
//
// Register (CAN) AFMR1
//
// Name                    CAN_AFMR1_REG
// Relative Address        0x00000064
// Absolute Address        can0: 0xE0008064
//                         can1: 0xE0009064
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             Acceptance Filter Mask Register 1
//
// Register CAN_AFMR1_REG Details
//
                                                      // Properties: Bits: 31:21, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR1_AMIDH_MASK = 0xFFE00000;    // Standard Message ID Mask
const uintptr_t CAN_AFMR1_AMIDH_BPOS = 21;            // These bits are used for masking the Identifier in a
                                                      // Standard Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 20, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR1_AMSRR_MASK = 0x00100000;    // Substitute Remote Transmission Request Mask
const uintptr_t CAN_AFMR1_AMSRR_BPOS = 20;            // This bit is used for masking the RTR bit in a
                                                      // Standard Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 19, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR1_AMIDE_MASK = 0x00080000;    // Identifier Extension Mask
const uintptr_t CAN_AFMR1_AMIDE_BPOS = 19;            // Used for masking the IDE bit in CAN frames.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.
                                                      // If AMIDE = 1 and the AIIDE bit in the
                                                      // corresponding Acceptance ID register is 0, this
                                                      // mask is applicable to only Standard frames.
                                                      // If AMIDE = 1 and the AIIDE bit in the
                                                      // corresponding Acceptance ID register is 1, this
                                                      // mask is applicable to only extended frames.
                                                      // If AMIDE = 0 this mask is applicable to Standard
                                                      // frame.

                                                      // Properties: Bits: 18:1, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR1_AMIDL_MASK = 0x0007FFFE;    // Extended Message ID Mask
const uintptr_t CAN_AFMR1_AMIDL_BPOS = 1;             // These bits are used for masking the Identifier in
                                                      // an Extended Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 0, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR1_AMRTR_MASK = 0x00000001;    // Remote Transmission Request Mask.
const uintptr_t CAN_AFMR1_AMRTR_BPOS = 0;             // This bit is used for masking the RTR bit in an
                                                      // Extended Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.


//------------------------------------------------------------------------------
//
// Register (CAN) AFIR1
//
// Name                    CAN_AFIR1_REG
// Relative Address        0x00000068
// Absolute Address        can0: 0xE0008068
//                         can1: 0xE0009068
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             Acceptance Filter ID Register 1
//
// Register CAN_AFIR1_REG Details
//
                                                      // Properties: Bits: 31:21, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR1_AIIDH_MASK = 0xFFE00000;    // Standard Message ID
const uintptr_t CAN_AFIR1_AIIDH_BPOS = 21;            // Standard Identifier

                                                      // Properties: Bit: 20, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR1_AISRR_MASK = 0x00100000;    // Substitute Remote Transmission Request
const uintptr_t CAN_AFIR1_AISRR_BPOS = 20;            // Indicates the Remote Transmission Request bit for
                                                      // Standard frames

                                                      // Properties: Bit: 19, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR1_AIIDE_MASK = 0x00080000;    // Identifier Extension
const uintptr_t CAN_AFIR1_AIIDE_BPOS = 19;            // Differentiates between Standard and Extended
                                                      // frames

                                                      // Properties: Bits: 18:1, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR1_AIIDL_MASK = 0x0007FFFE;    // Extended Message ID Mask Extended Identifier
const uintptr_t CAN_AFIR1_AIIDL_BPOS = 1;             // 

                                                      // Properties: Bit: 0, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR1_AIRTR_MASK = 0x00000001;    // Remote Transmission Request Mask RTR bit for
const uintptr_t CAN_AFIR1_AIRTR_BPOS = 0;             // Extended frames.


//------------------------------------------------------------------------------
//
// Register (CAN) AFMR2
//
// Name                    CAN_AFMR2_REG
// Relative Address        0x0000006C
// Absolute Address        can0: 0xE000806C
//                         can1: 0xE000906C
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             Acceptance Filter Mask Register 2
//
// Register CAN_AFMR2_REG Details
//
                                                      // Properties: Bits: 31:21, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR2_AMIDH_MASK = 0xFFE00000;    // Standard Message ID Mask
const uintptr_t CAN_AFMR2_AMIDH_BPOS = 21;            // These bits are used for masking the Identifier in a
                                                      // Standard Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 20, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR2_AMSRR_MASK = 0x00100000;    // Substitute Remote Transmission Request Mask
const uintptr_t CAN_AFMR2_AMSRR_BPOS = 20;            // This bit is used for masking the RTR bit in a
                                                      // Standard Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 19, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR2_AMIDE_MASK = 0x00080000;    // Identifier Extension Mask
const uintptr_t CAN_AFMR2_AMIDE_BPOS = 19;            // Used for masking the IDE bit in CAN frames.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.
                                                      // If AMIDE = 1 and the AIIDE bit in the
                                                      // corresponding Acceptance ID register is 0, this
                                                      // mask is applicable to only Standard frames.
                                                      // If AMIDE = 1 and the AIIDE bit in the
                                                      // corresponding Acceptance ID register is 1, this
                                                      // mask is applicable to only extended frames.
                                                      // If AMIDE = 0 this mask is applicable to Standard
                                                      // frame.

                                                      // Properties: Bits: 18:1, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR2_AMIDL_MASK = 0x0007FFFE;    // Extended Message ID Mask
const uintptr_t CAN_AFMR2_AMIDL_BPOS = 1;             // These bits are used for masking the Identifier in
                                                      // an Extended Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 0, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR2_AMRTR_MASK = 0x00000001;    // Remote Transmission Request Mask.
const uintptr_t CAN_AFMR2_AMRTR_BPOS = 0;             // This bit is used for masking the RTR bit in an
                                                      // Extended Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.


//------------------------------------------------------------------------------
//
// Register (CAN) AFIR2
//
// Name                    CAN_AFIR2_REG
// Relative Address        0x00000070
// Absolute Address        can0: 0xE0008070
//                         can1: 0xE0009070
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             Acceptance Filter ID Register 2
//
// Register CAN_AFIR2_REG Details
//
                                                      // Properties: Bits: 31:21, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR2_AIIDH_MASK = 0xFFE00000;    // Standard Message ID
const uintptr_t CAN_AFIR2_AIIDH_BPOS = 21;            // Standard Identifier

                                                      // Properties: Bit: 20, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR2_AISRR_MASK = 0x00100000;    // Substitute Remote Transmission Request
const uintptr_t CAN_AFIR2_AISRR_BPOS = 20;            // Indicates the Remote Transmission Request bit for
                                                      // Standard frames

                                                      // Properties: Bit: 19, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR2_AIIDE_MASK = 0x00080000;    // Identifier Extension
const uintptr_t CAN_AFIR2_AIIDE_BPOS = 19;            // Differentiates between Standard and Extended
                                                      // frames

                                                      // Properties: Bits: 18:1, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR2_AIIDL_MASK = 0x0007FFFE;    // Extended Message ID Mask Extended Identifier
const uintptr_t CAN_AFIR2_AIIDL_BPOS = 1;             // 

                                                      // Properties: Bit: 0, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR2_AIRTR_MASK = 0x00000001;    // Remote Transmission Request Mask RTR bit for
const uintptr_t CAN_AFIR2_AIRTR_BPOS = 0;             // Extended frames.


//------------------------------------------------------------------------------
//
// Register (CAN) AFMR3
//
// Name                    CAN_AFMR3_REG
// Relative Address        0x00000074
// Absolute Address        can0: 0xE0008074
//                         can1: 0xE0009074
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             Acceptance Filter Mask Register 3
//
// Register CAN_AFMR3_REG Details
//
                                                      // Properties: Bits: 31:21, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR3_AMIDH_MASK = 0xFFE00000;    // Standard Message ID Mask
const uintptr_t CAN_AFMR3_AMIDH_BPOS = 21;            // These bits are used for masking the Identifier in a
                                                      // Standard Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 20, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR3_AMSRR_MASK = 0x00100000;    // Substitute Remote Transmission Request Mask
const uintptr_t CAN_AFMR3_AMSRR_BPOS = 20;            // This bit is used for masking the RTR bit in a
                                                      // Standard Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 19, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR3_AMIDE_MASK = 0x00080000;    // Identifier Extension Mask
const uintptr_t CAN_AFMR3_AMIDE_BPOS = 19;            // Used for masking the IDE bit in CAN frames.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.
                                                      // If AMIDE = 1 and the AIIDE bit in the
                                                      // corresponding Acceptance ID register is 0, this
                                                      // mask is applicable to only Standard frames.
                                                      // If AMIDE = 1 and the AIIDE bit in the
                                                      // corresponding Acceptance ID register is 1, this
                                                      // mask is applicable to only extended frames.
                                                      // If AMIDE = 0 this mask is applicable to Standard
                                                      // frame.

                                                      // Properties: Bits: 18:1, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR3_AMIDL_MASK = 0x0007FFFE;    // Extended Message ID Mask
const uintptr_t CAN_AFMR3_AMIDL_BPOS = 1;             // These bits are used for masking the Identifier in
                                                      // an Extended Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 0, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR3_AMRTR_MASK = 0x00000001;    // Remote Transmission Request Mask.
const uintptr_t CAN_AFMR3_AMRTR_BPOS = 0;             // This bit is used for masking the RTR bit in an
                                                      // Extended Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.


//------------------------------------------------------------------------------
//
// Register (CAN) AFIR3
//
// Name                    CAN_AFIR3_REG
// Relative Address        0x00000078
// Absolute Address        can0: 0xE0008078
//                         can1: 0xE0009078
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             Acceptance Filter ID Register 3
//
// Register CAN_AFIR3_REG Details
//
                                                      // Properties: Bits: 31:21, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR3_AIIDH_MASK = 0xFFE00000;    // Standard Message ID
const uintptr_t CAN_AFIR3_AIIDH_BPOS = 21;            // Standard Identifier

                                                      // Properties: Bit: 20, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR3_AISRR_MASK = 0x00100000;    // Substitute Remote Transmission Request
const uintptr_t CAN_AFIR3_AISRR_BPOS = 20;            // Indicates the Remote Transmission Request bit for
                                                      // Standard frames

                                                      // Properties: Bit: 19, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR3_AIIDE_MASK = 0x00080000;    // Identifier Extension
const uintptr_t CAN_AFIR3_AIIDE_BPOS = 19;            // Differentiates between Standard and Extended
                                                      // frames

                                                      // Properties: Bits: 18:1, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR3_AIIDL_MASK = 0x0007FFFE;    // Extended Message ID Mask Extended Identifier
const uintptr_t CAN_AFIR3_AIIDL_BPOS = 1;             // 

                                                      // Properties: Bit: 0, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR3_AIRTR_MASK = 0x00000001;    // Remote Transmission Request Mask RTR bit for
const uintptr_t CAN_AFIR3_AIRTR_BPOS = 0;             // Extended frames.


//------------------------------------------------------------------------------
//
// Register (CAN) AFMR4
//
// Name                    CAN_AFMR4_REG
// Relative Address        0x0000007C
// Absolute Address        can0: 0xE000807C
//                         can1: 0xE000907C
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             Acceptance Filter Mask Register 4
//
// Register CAN_AFMR4_REG Details
//
                                                      // Properties: Bits: 31:21, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR4_AMIDH_MASK = 0xFFE00000;    // Standard Message ID Mask
const uintptr_t CAN_AFMR4_AMIDH_BPOS = 21;            // These bits are used for masking the Identifier in a
                                                      // Standard Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 20, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR4_AMSRR_MASK = 0x00100000;    // Substitute Remote Transmission Request Mask
const uintptr_t CAN_AFMR4_AMSRR_BPOS = 20;            // This bit is used for masking the RTR bit in a
                                                      // Standard Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 19, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR4_AMIDE_MASK = 0x00080000;    // Identifier Extension Mask
const uintptr_t CAN_AFMR4_AMIDE_BPOS = 19;            // Used for masking the IDE bit in CAN frames.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.
                                                      // If AMIDE = 1 and the AIIDE bit in the
                                                      // corresponding Acceptance ID register is 0, this
                                                      // mask is applicable to only Standard frames.
                                                      // If AMIDE = 1 and the AIIDE bit in the
                                                      // corresponding Acceptance ID register is 1, this
                                                      // mask is applicable to only extended frames.
                                                      // If AMIDE = 0 this mask is applicable to Standard
                                                      // frame.

                                                      // Properties: Bits: 18:1, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR4_AMIDL_MASK = 0x0007FFFE;    // Extended Message ID Mask
const uintptr_t CAN_AFMR4_AMIDL_BPOS = 1;             // These bits are used for masking the Identifier in
                                                      // an Extended Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.

                                                      // Properties: Bit: 0, Type: rw, Reset Value: x
const uintptr_t CAN_AFMR4_AMRTR_MASK = 0x00000001;    // Remote Transmission Request Mask.
const uintptr_t CAN_AFMR4_AMRTR_BPOS = 0;             // This bit is used for masking the RTR bit in an
                                                      // Extended Frame.
                                                      // 1: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is used when comparing the
                                                      // incoming message identifier.
                                                      // 0: Indicates the corresponding bit in Acceptance
                                                      // Mask ID Register is not used when comparing the
                                                      // incoming message identifier.


//------------------------------------------------------------------------------
//
// Register (CAN) AFIR4
//
// Name                    CAN_AFIR4_REG
// Relative Address        0x00000080
// Absolute Address        can0: 0xE0008080
//                         can1: 0xE0009080
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             Acceptance Filter ID Register 4
//
// Register CAN_AFIR4_REG Details
//
                                                      // Properties: Bits: 31:21, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR4_AIIDH_MASK = 0xFFE00000;    // Standard Message ID
const uintptr_t CAN_AFIR4_AIIDH_BPOS = 21;            // Standard Identifier

                                                      // Properties: Bit: 20, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR4_AISRR_MASK = 0x00100000;    // Substitute Remote Transmission Request
const uintptr_t CAN_AFIR4_AISRR_BPOS = 20;            // Indicates the Remote Transmission Request bit for
                                                      // Standard frames

                                                      // Properties: Bit: 19, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR4_AIIDE_MASK = 0x00080000;    // Identifier Extension
const uintptr_t CAN_AFIR4_AIIDE_BPOS = 19;            // Differentiates between Standard and Extended
                                                      // frames

                                                      // Properties: Bits: 18:1, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR4_AIIDL_MASK = 0x0007FFFE;    // Extended Message ID Mask Extended Identifier
const uintptr_t CAN_AFIR4_AIIDL_BPOS = 1;             // 

                                                      // Properties: Bit: 0, Type: rw, Reset Value: x
const uintptr_t CAN_AFIR4_AIRTR_MASK = 0x00000001;    // Remote Transmission Request Mask RTR bit for
const uintptr_t CAN_AFIR4_AIRTR_BPOS = 0;             // Extended frames.


#endif // PS7_CAN_H

