//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_DEVCFG
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

#ifndef PS7_DEVCFG_H
#define PS7_DEVCFG_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    DEVCFG MMRs
//
//              Name                         Address                     Width   Type     Reset Value   Description
const uintptr_t DEVCFG_CTRL_REG            = DEVCFG_ADDR + 0x00000000; //  32    mixed    0x0C006000    Control Register  defines basic control registers. Some of the register bits can be locked by control bits in the LOCK Register 0x004.
const uintptr_t DEVCFG_LOCK_REG            = DEVCFG_ADDR + 0x00000004; //  32    mixed    0x00000000    This register defines LOCK register used to lock changes in the Control Register 0x000 after configuration. All those LOCK register is set only register. The only way to clear those registers is power on reset signal.
const uintptr_t DEVCFG_CFG_REG             = DEVCFG_ADDR + 0x00000008; //  32    rw       0x00000508    Configuration Register  register contains configuration information for the AXI transfers, and other general setup.
const uintptr_t DEVCFG_INT_STS_REG         = DEVCFG_ADDR + 0x0000000C; //  32    mixed    0x00000000    Interrupt Status Register  register contains interrupt status flags. All register bits are clear on write by writing 1s to those bits, however the register bits will only be cleared if the condition that sets the interrupt flag is no longer true. Note that individual status bits will be set if the corresponding condition is satisfied regardless of whether the interrupt mask bit in 0x010 is set. However, external interrupt will only be generated if an interrupt status flag is set and the corresponding mask bit is not set
const uintptr_t DEVCFG_INT_MASK_REG        = DEVCFG_ADDR + 0x00000010; //  32    rw       0xFFFFFFFF    Interrupt Mask Register register contains interrupt mask information. Set a bit to 1 to mask the interrupt generation from the corresponding interrupting source in Interrupt Status Register 0x00C.
const uintptr_t DEVCFG_STATUS_REG          = DEVCFG_ADDR + 0x00000014; //  32    mixed    0x40000820    Status Register contains miscellaneous status.
const uintptr_t DEVCFG_DMA_SRC_ADDR_REG    = DEVCFG_ADDR + 0x00000018; //  32    rw       0x00000000    DMA Source address Register This register contains the source address for DMA transfer. A DMA command consists of source address, destination address, source transfer length, and destination transfer length. It is important that the parameters are programmed in the exact sequence as described
const uintptr_t DEVCFG_DMA_DST_ADDR        = DEVCFG_ADDR + 0x0000001C; //  32    rw       0x00000000    DMA Destination address Register: This register contains the destination address for DMA transfer. A DMA command consists of source address, destination address, source transfer length, and destination transfer length. It is important that the parameters are programmed in the exact sequence as described.
const uintptr_t DEVCFG_DMA_SRC_LEN_REG     = DEVCFG_ADDR + 0x00000020; //  32    rw       0x00000000    DMA Source transfer Length Register: This register contains the DMA source transfer length in unit of 4-byte word. A DMA command that consists of source address, destination address, source transfer length, and destination transfer length. It is important that the parameters are programmed in the exact sequence as described.
const uintptr_t DEVCFG_DMA_DEST_LEN_REG    = DEVCFG_ADDR + 0x00000024; //  32    rw       0x00000000    DMA Destination transfer Length Register: This register contains the DMA destination transfer length in unit of 4-byte word. A DMA command that consists of source address, destination address, source transfer length, and destination transfer length is accepted when this register is written to. It is important that the parameters are programmed in the exact sequence as described.
const uintptr_t DEVCFG_MULTIBOOT_ADDR_RE   = DEVCFG_ADDR + 0x0000002C; //  13    rw       0x00000000    MULTI Boot Addr Pointer Register: This register defines multi-boot address pointer. This register is power on reset only used to remember multi-boot address pointer set by previous boot.
const uintptr_t DEVCFG_UNLOCK_REG          = DEVCFG_ADDR + 0x00000034; //  32    rw       0x00000000    Unlock Register used to protect the DEVCI configuration registers from ROM code corruption. The boot ROM will unlock the DEVCI by writing 0x757BDF0D to this register. Writing anything other than the unlock word to this register will cause an illegal access state and make the DEVCI inaccessible until a system reset occurs.
const uintptr_t DEVCFG_MCTRL_REG           = DEVCFG_ADDR + 0x00000080; //  32    mixed    x             Miscellaneous control Register This register contains miscellaneous controls.
const uintptr_t DEVCFG_XADCIF_CFG_REG      = DEVCFG_ADDR + 0x00000100; //  32    rw       0x00001114    XADC Interface Configuration Register : This register configures the XADC Interface operation
const uintptr_t DEVCFG_XADCIF_INT_STS_REG  = DEVCFG_ADDR + 0x00000104; //  32    mixed    0x00000200    XADC Interface Interrupt Status Register : This register contains the interrupt status flags of the XADC interface block. All register bits are clear on write by writing 1s to those bits, however the register bits will only be cleared if the condition that sets the interrupt flag is no longer true. Note that individual status bits will be set if the corresponding condition is satisfied regardless of whether the interrupt mask bit in 0x108 is set. However, external interrupt will only be generated if an interrupt status flag is set and the corresponding mask bit is not set
const uintptr_t DEVCFG_XADCIF_INT_MASK_REG = DEVCFG_ADDR + 0x00000108; //  32    rw       0xFFFFFFFF    XADC Interface Interrupt Mask Register : This register contains the interrupt mask information. Set a bit to 1 to mask the interrupt generation from the corresponding interrupting source in 0x104
const uintptr_t DEVCFG_XADCIF_MSTS_REG     = DEVCFG_ADDR + 0x0000010C; //  32    ro       0x00000500    XADC Interface miscellaneous Status Register : This register contains miscellaneous status of the XADC Interface
const uintptr_t DEVCFG_XADCIF_CMDFIFO_REG  = DEVCFG_ADDR + 0x00000110; //  32    wo       0x00000000    XADC Interface Command FIFO Register : This address is the entry point to the command FIFO. Commands get push into the FIFO when there is a write to this address
const uintptr_t DEVCFG_XADCIF_RDFIFO_REG   = DEVCFG_ADDR + 0x00000114; //  32    ro       0x00000000    XADC Interface Data FIFO Register : This address is the exit point of the read data FIFO. Read data is returned when there is a read from this address
const uintptr_t DEVCFG_XADCIF_MCTL_REG     = DEVCFG_ADDR + 0x00000118; //  32    rw       0x00000010    XADC Interface Miscellaneous Control Register : This register provides miscellaneous control of the XADC Interface.
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (DEVCFG) CTRL
//
// Name                    DEVCFG_CTRL_REG
// Relative Address        0x00000000
// Absolute Address        0xF8007000
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x0C006000
// Description             Control Register : This register defines basic control registers.
//                         Some of the register bits can be locked by control bits in the LOCK Register 0x004.
//
// Register DEVCFG_CTRL_REG Details
//
                                                                       // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_FORCE_RST_MASK            = 0x80000000;    // Force the PS into secure lockdown.
const uintptr_t DEVCFG_CTRL_FORCE_RST_BPOS            = 31;            // The secure lockdown state can only be cleared by
                                                                       // issuing a PS_POR_B reset

                                                                       // Properties: Bit: 30, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_PCFG_PROG_B_MASK          = 0x40000000;    // Program Signal used to reset the PL.
const uintptr_t DEVCFG_CTRL_PCFG_PROG_B_BPOS          = 30;            // It acts as the PROG_B signal in the PL.

                                                                       // Properties: Bit: 29, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_PCFG_POR_CNT_4K_MASK      = 0x20000000;    // This register controls which POR timer the PL will
const uintptr_t DEVCFG_CTRL_PCFG_POR_CNT_4K_BPOS      = 29;            // use for power-up.
                                                                       // 0 - Use 64k timer
                                                                       // 1 - Use 4k timer

// RESERVED                                                               Properties: Bit: 28, Type: rw, Reset Value: 0x0

                                                                       // Properties: Bit: 27, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_CTRL_PCAP_PR_MASK              = 0x08000000;    // After the initial configuration of the PL, a partial
const uintptr_t DEVCFG_CTRL_PCAP_PR_BPOS              = 27;            // reconfiguration can be performed using either the
                                                                       // ICAP or PCAP interface.
                                                                       // These interfaces are mutually exclusive and
                                                                       // cannot be used simultaneously.
                                                                       // Switching between ICAP and PCAP is possible
                                                                       // but users should ensure that no commands or
                                                                       // data are being transmitted or received before
                                                                       // changing interfaces.
                                                                       // Failure to do this could lead to unexpected
                                                                       // behavior.
                                                                       // This bit selects between ICAP and PCAP for PL
                                                                       // reconfiguration.
                                                                       // 0 - ICAP is selected for reconfiguration
                                                                       // 1 - PCAP is selected for reconfiguration

                                                                       // Properties: Bit: 26, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_CTRL_PCAP_MODE_MASK            = 0x04000000;    // This bit enables the PCAP interface
const uintptr_t DEVCFG_CTRL_PCAP_MODE_BPOS            = 26;            // 

                                                                       // Properties: Bit: 25, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_QUARTER_PCAP_RATE_EN_MASK = 0x02000000;    // This bit is used to reduce the PCAP data
const uintptr_t DEVCFG_CTRL_QUARTER_PCAP_RATE_EN_BPOS = 25;            // transmission to once every 4 clock cycles.
                                                                       // This bit MUST be set when the AES engine is
                                                                       // being used to decrypt configuration data for
                                                                       // either the PS or PL.
                                                                       // Setting this bit for non-encrypted PCAP data
                                                                       // transmission is allowed but not recommended.
                                                                       // 0 - PCAP data transmitted every clock cycle
                                                                       // 1 - PCAP data transmitted every 4th clock cycle
                                                                       // (must be used for encrypted data)

                                                                       // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_MULTIBOOT_EN_MASK         = 0x01000000;    // This bit enables multi-boot out of reset. This bit is
const uintptr_t DEVCFG_CTRL_MULTIBOOT_EN_BPOS         = 24;            // only cleared by a PS_POR_B reset,
                                                                       // 0 - Boot from default boot image base address
                                                                       // 1 - Boot from multi-boot offset address

                                                                       // Properties: Bit: 23, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_JTAG_CHAIN_DIS_MASK       = 0x00800000;    // This bit is used to disable the JTAG scan chain.
const uintptr_t DEVCFG_CTRL_JTAG_CHAIN_DIS_BPOS       = 23;            // The primary purpose is to protect the PL from
                                                                       // unwanted JTAG accesses.
                                                                       // The JTAG connection to the PS DAP and PL TAP
                                                                       // will be disabled when this bit is set.

// RESERVED                                                               Properties: Bits: 22:16, Type: rw, Reset Value: 0x0

// RESERVED                                                               Properties: Bit: 15, Type: wo, Reset Value: 0x0

// RESERVED                                                               Properties: Bit: 14, Type: rw, Reset Value: 0x1

// RESERVED                                                               Properties: Bit: 13, Type: rw, Reset Value: 0x1

                                                                       // Properties: Bit: 12, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_PCFG_AES_FUSE_MASK        = 0x00001000;    // (Lockable, see 0x004, bit 4)
const uintptr_t DEVCFG_CTRL_PCFG_AES_FUSE_BPOS        = 12;            // This bit is used to select the AES key source
                                                                       // 0 - BBRAM key
                                                                       // 1 - eFuse key
                                                                       // User access to this bit is restricted.
                                                                       // The boot ROM will make the key selection and
                                                                       // lock this bit during the initial boot sequence.
                                                                       // This bit is only cleared by PS_POR_B reset.

                                                                       // Properties: Bits: 11:9, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_PCFG_AES_EN_MASK          = 0x00000E00;    // (Lockable, see 0x004, bit 3)
const uintptr_t DEVCFG_CTRL_PCFG_AES_EN_BPOS          = 9;             // This bit enables the AES engine within the PL.
                                                                       // The three bits need to be either all 0's or 1's, any
                                                                       // inconsistency will lead to security lockdown.
                                                                       // 000 - Disable AES engine
                                                                       // 111 - Enable AES engine
                                                                       // All others - Secure lockdown
                                                                       // User access to this bit is restricted.
                                                                       // The boot ROM will enable the AES engine for
                                                                       // secure boot and will always lock this bit before
                                                                       // passing control to user code.
                                                                       // This bit is only cleared by PS_POR_B reset.

                                                                       // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_SEU_EN_MASK               = 0x00000100;    // (Lockable, see 0x004, bit 2)
const uintptr_t DEVCFG_CTRL_SEU_EN_BPOS               = 8;             // This bit enables an automatic lockdown of the PS
                                                                       // when a PL SEU is detected.
                                                                       // 0 - Ignore SEU signal from PL
                                                                       // 1 - Initiate secure lockdown when SEU signal
                                                                       // received from PL
                                                                       // This bit is sticky, once set it can only be cleared
                                                                       // with a PS_POR_B reset.

                                                                       // Properties: Bit: 7, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_SEC_EN_MASK               = 0x00000080;    // (Lockable, see 0x004, bit 1)
const uintptr_t DEVCFG_CTRL_SEC_EN_BPOS               = 7;             // This bit is used to indicate if the PS has been
                                                                       // booted securely.
                                                                       // 0 - PS was not booted securely
                                                                       // 1 - PS was booted securely
                                                                       // User access to this bit is restricted.
                                                                       // The boot ROM will set this bit when a secure boot
                                                                       // is initiated and will always lock the bit before
                                                                       // passing control to user code.
                                                                       // This bit is only cleared by PS_POR_B reset.

                                                                       // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_SPNIDEN_MASK              = 0x00000040;    // (Lockable, see 0x004, bit 0)
const uintptr_t DEVCFG_CTRL_SPNIDEN_BPOS              = 6;             // Secure Non-Invasive Debug Enable
                                                                       // 0 - Disable
                                                                       // 1 - Enable

                                                                       // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_SPIDEN_MASK               = 0x00000020;    // (Lockable, see 0x004, bit 0)
const uintptr_t DEVCFG_CTRL_SPIDEN_BPOS               = 5;             // Secure Invasive Debug Enable
                                                                       // 0 - Disable
                                                                       // 1 - Enable

                                                                       // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_NIDEN_MASK                = 0x00000010;    // (Lockable, see 0x004, bit 0)
const uintptr_t DEVCFG_CTRL_NIDEN_BPOS                = 4;             // Non-Invasive Debug Enable
                                                                       // 0 - Disable
                                                                       // 1 - Enable

                                                                       // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_DBGEN_MASK                = 0x00000008;    // (Lockable, see 0x004, bit 0)
const uintptr_t DEVCFG_CTRL_DBGEN_BPOS                = 3;             // Invasive Debug Enable
                                                                       // 0 - Disable
                                                                       // 1 - Enable

                                                                       // Properties: Bits: 2:0, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CTRL_DAP_EN_MASK               = 0x00000007;    // (Lockable, see 0x004, bit 0)
const uintptr_t DEVCFG_CTRL_DAP_EN_BPOS               = 0;             // These bits will enable the ARM DAP.
                                                                       // 111 - ARM DAP Enabled
                                                                       // Others - ARM DAP will be bypassed


//------------------------------------------------------------------------------
//
// Register (DEVCFG) LOCK
//
// Name                    DEVCFG_LOCK_REG
// Relative Address        0x00000004
// Absolute Address        0xF8007004
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             This register defines LOCK register used to lock changes in the Control Register
//                         0x000 after configuration. All those LOCK register is set only register. The only way
//                         to clear those registers is power on reset signal.
//
// Register DEVCFG_LOCK_REG Details
//
// RESERVED                                                        Properties: Bits: 31:5, Type: rw, Reset Value: 0x0

                                                                // Properties: Bit: 4, Type: rwso, Reset Value: 0x0
const uintptr_t DEVCFG_LOCK_AES_FUSE_LOCK_MASK = 0x00000010;    // This bit locks the PCFG_AES_FUSE bit
const uintptr_t DEVCFG_LOCK_AES_FUSE_LOCK_BPOS = 4;             // (CTRL[12]).
                                                                // 0 - Open
                                                                // 1 - Locked
                                                                // User access to this bit is restricted, the boot ROM
                                                                // will always set this bit prior to handing control
                                                                // over to user code.
                                                                // This bit is only cleared by a PS_POR_B reset.

                                                                // Properties: Bit: 3, Type: rwso, Reset Value: 0x0
const uintptr_t DEVCFG_LOCK_AES_EN_LOCK_MASK   = 0x00000008;    // This bit locks the PCFG_AES_EN bits
const uintptr_t DEVCFG_LOCK_AES_EN_LOCK_BPOS   = 3;             // (CTRL[11:9]).
                                                                // 0 - Open
                                                                // 1 - Locked
                                                                // User access to this bit is restricted, the boot ROM
                                                                // will always set this bit prior to handing control
                                                                // over to user code.
                                                                // This bit is only cleared by a PS_POR_B reset.

                                                                // Properties: Bit: 2, Type: rwso, Reset Value: 0x0
const uintptr_t DEVCFG_LOCK_SEU_LOCK_MASK      = 0x00000004;    // This bit locks the SEU_EN bit (CTRL[8]).
const uintptr_t DEVCFG_LOCK_SEU_LOCK_BPOS      = 2;             // 0 - Open
                                                                // 1 - Locked
                                                                // This bit is only cleared by a PS_POR_B reset.

                                                                // Properties: Bit: 1, Type: rwso, Reset Value: 0x0
const uintptr_t DEVCFG_LOCK_SEC_LOCK_MASK      = 0x00000002;    // This bit locks the SEC_EN bit (CTRL[7]).
const uintptr_t DEVCFG_LOCK_SEC_LOCK_BPOS      = 1;             // 0 - Open
                                                                // 1 - Locked
                                                                // User access to this bit is restricted, the boot ROM
                                                                // will always set this bit prior to handing control
                                                                // over to user code.
                                                                // This bit is only cleared by a PS_POR_B reset.

                                                                // Properties: Bit: 0, Type: rwso, Reset Value: 0x0
const uintptr_t DEVCFG_LOCK_DBG_LOCK_MASK      = 0x00000001;    // This bit locks the debug enable bits, SPNIDEN,
const uintptr_t DEVCFG_LOCK_DBG_LOCK_BPOS      = 0;             // SPIDEN, NIDEN, DBGEN, DAP_EN (CTRL[6:0]).
                                                                // 0 - Open
                                                                // 1 - Locked
                                                                // DBG_LOCK should only be used to prevent the
                                                                // debug access from being enabled. If DBG_LOCK
                                                                // is set and a soft-reset is issued, then the DAP_EN
                                                                // bits in the CTRL register (0x000) cannot be
                                                                // enabled until a power-on-reset is performed.
                                                                // This bit is only cleared by a PS_POR_B reset.


//------------------------------------------------------------------------------
//
// Register (DEVCFG) CFG
//
// Name                      DEVCFG_CFG_REG
// Relative Address          0x00000008
// Absolute Address          0xF8007008
// Width                     32 bits
// Access Type               rw
// Reset Value               0x00000508
// Description               Configuration Register : This register contains configuration information for the AXI
//                           transfers, and other general setup.
//
// Register DEVCFG_CFG_REG Details
//
// RESERVED                                                         Properties: Bits: 31:12, Type: rw, Reset Value: 0x0

                                                                 // Properties: Bits: 11:10, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_CFG_RFIFO_TH_MASK        = 0x00000C00;    // These two bits define Rx FIFO level that sets
const uintptr_t DEVCFG_CFG_RFIFO_TH_BPOS        = 10;            // interrupt flag
                                                                 // 00 - One fourth
                                                                 // full for read
                                                                 // 01 - Half full for read
                                                                 // 10 - Three fourth full for read
                                                                 // 11 - Full for read(User could use this signal to
                                                                 // trigger interrupt when read FIFO overflow)

                                                                 // Properties: Bits: 9:8, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_CFG_WFIFO_TH_MASK        = 0x00000300;    // These two bits define Tx FIFO level that sets
const uintptr_t DEVCFG_CFG_WFIFO_TH_BPOS        = 8;             // interrupt flag
                                                                 // 00 - One fourth empty for write
                                                                 // 01 - Half empty for write
                                                                 // 10 - Three fourth empty for write
                                                                 // 11 - Empty for write

                                                                 // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CFG_RCLK_EDGE_MASK       = 0x00000080;    // Read data active clock edge
const uintptr_t DEVCFG_CFG_RCLK_EDGE_BPOS       = 7;             // 0 - Falling edge
                                                                 // 1 - Rising edge

                                                                 // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CFG_WCLK_EDGE_MASK       = 0x00000040;    // Write data active clock edge
const uintptr_t DEVCFG_CFG_WCLK_EDGE_BPOS       = 6;             // 0 - Falling edge
                                                                 // 1 - Rising edge

                                                                 // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CFG_DISABLE_SRC_INC_MASK = 0x00000020;    // Disable automatic DMA AXI source address
const uintptr_t DEVCFG_CFG_DISABLE_SRC_INC_BPOS = 5;             // increment, if set, to allow AXI read from a keyhole
                                                                 // address

                                                                 // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_CFG_DISABLE_DST_INC_MASK = 0x00000010;    // Disable automatic DMA AXI destination address
const uintptr_t DEVCFG_CFG_DISABLE_DST_INC_BPOS = 4;             // increment, if set, to allow AXI read from a keyhole
                                                                 // address

// RESERVED                                                         Properties: Bit: 3, Type: rw, Reset Value: 0x1

// RESERVED                                                         Properties: Bit: 2, Type: rw, Reset Value: 0x0

// RESERVED                                                         Properties: Bit: 1, Type: rw, Reset Value: 0x0

// RESERVED                                                         Properties: Bit: 0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (DEVCFG) INT_STS
//
// Name                    DEVCFG_INT_STS_REG
// Relative Address        0x0000000C
// Absolute Address        0xF800700C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Interrupt Status Register : This register contains interrupt status flags.
//                         All register bits are clear on write by writing 1s to those bits, however the register bits
//                         will only be cleared if the condition that sets the interrupt flag is no longer true.
//                         Note that individual status bits will be set if the corresponding condition is satisfied
//                         regardless of whether the interrupt mask bit in 0x010 is set.
//                         However, external interrupt will only be generated if an interrupt status flag is set
//                         and the corresponding mask bit is not set
//
// Register DEVCFG_INT_STS_REG Details
//
                                                                         // Properties: Bit: 31, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PSS_GTS_USR_B_INT_MASK   = 0x80000000;    // Tri-state PL IO during HIZ, both edges
const uintptr_t DEVCFG_INT_STS_PSS_GTS_USR_B_INT_BPOS   = 31;            // 

                                                                         // Properties: Bit: 30, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PSS_FST_CFG_B_INT_MASK   = 0x40000000;    // First configuration done, both edges
const uintptr_t DEVCFG_INT_STS_PSS_FST_CFG_B_INT_BPOS   = 30;            // 

                                                                         // Properties: Bit: 29, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PSS_GPWRDWN_B_INT_MASK   = 0x20000000;    // Global power down, both edges
const uintptr_t DEVCFG_INT_STS_PSS_GPWRDWN_B_INT_BPOS   = 29;            // 

                                                                         // Properties: Bit: 28, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PSS_GTS_CFG_B_INT_MASK   = 0x10000000;    // Tri-state PL IO during configuration, both edges
const uintptr_t DEVCFG_INT_STS_PSS_GTS_CFG_B_INT_BPOS   = 28;            // 

                                                                         // Properties: Bit: 27, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PSS_CFG_RESET_B_INT_MASK = 0x08000000;    // PL configuration reset, both edges
const uintptr_t DEVCFG_INT_STS_PSS_CFG_RESET_B_INT_BPOS = 27;            // 

// RESERVED                                                                 Properties: Bits: 26:24, Type: rw, Reset Value: 0x0

                                                                         // Properties: Bit: 23, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_AXI_WTO_INT_MASK         = 0x00800000;    // AXI write address, data or response time out.
const uintptr_t DEVCFG_INT_STS_AXI_WTO_INT_BPOS         = 23;            // AXI write is taking longer than expected (> 6144
                                                                         // cpu_1x clock cycles), this can be an indication of
                                                                         // starvation

                                                                         // Properties: Bit: 22, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_AXI_WERR_INT_MASK        = 0x00400000;    // AXI write response error
const uintptr_t DEVCFG_INT_STS_AXI_WERR_INT_BPOS        = 22;            // 

                                                                         // Properties: Bit: 21, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_AXI_RTO_INT_MASK         = 0x00200000;    // AXI read address or response time out.
const uintptr_t DEVCFG_INT_STS_AXI_RTO_INT_BPOS         = 21;            // AXI read is taking longer than expected (> 2048
                                                                         // cpu_1x clock cycles), this can be an indication of
                                                                         // starvation

                                                                         // Properties: Bit: 20, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_AXI_RERR_INT_MASK        = 0x00100000;    // AXI read response error
const uintptr_t DEVCFG_INT_STS_AXI_RERR_INT_BPOS        = 20;            // 

// RESERVED                                                                 Properties: Bit: 19, Type: rw, Reset Value: 0x0

                                                                         // Properties: Bit: 18, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_RX_FIFO_OV_INT_MASK      = 0x00040000;    // This bit is used to indicate that RX FIFO
const uintptr_t DEVCFG_INT_STS_RX_FIFO_OV_INT_BPOS      = 18;            // overflows. Incoming read data from PCAP will be
                                                                         // dropped and the DEVCI DMA may enter an
                                                                         // unrecoverable state
                                                                         // .

                                                                         // Properties: Bit: 17, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_WR_FIFO_LVL_INT_MASK     = 0x00020000;    // Tx FIFO level < threshold, see reg 0x008
const uintptr_t DEVCFG_INT_STS_WR_FIFO_LVL_INT_BPOS     = 17;            // 

                                                                         // Properties: Bit: 16, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_RD_FIFO_LVL_INT_MASK     = 0x00010000;    // Rx FIFO level >= threshold, see reg 0x008
const uintptr_t DEVCFG_INT_STS_RD_FIFO_LVL_INT_BPOS     = 16;            // 

                                                                         // Properties: Bit: 15, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_DMA_CMD_ERR_INT_MASK     = 0x00008000;    // Illegal DMA command
const uintptr_t DEVCFG_INT_STS_DMA_CMD_ERR_INT_BPOS     = 15;            // 

                                                                         // Properties: Bit: 14, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_DMA_Q_OV_INT_MASK        = 0x00004000;    // DMA command queue overflows
const uintptr_t DEVCFG_INT_STS_DMA_Q_OV_INT_BPOS        = 14;            // 

                                                                         // Properties: Bit: 13, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_DMA_DONE_INT_MASK        = 0x00002000;    // This bit is used to indicate a DMA command
const uintptr_t DEVCFG_INT_STS_DMA_DONE_INT_BPOS        = 13;            // is done.
                                                                         // The bit is set either as soon as DMA is done (PCAP
                                                                         // may not be finished) or both DMA and PCAP are
                                                                         // done.

                                                                         // Properties: Bit: 12, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_D_P_DONE_INT_MASK        = 0x00001000;    // Both DMA and PCAP transfers are done for
const uintptr_t DEVCFG_INT_STS_D_P_DONE_INT_BPOS        = 12;            // intermediate and final transfers.

                                                                         // Properties: Bit: 11, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_P2D_LEN_ERR_INT_MASK     = 0x00000800;    // Inconsistent PCAP to DMA transfer length error
const uintptr_t DEVCFG_INT_STS_P2D_LEN_ERR_INT_BPOS     = 11;            // 

// RESERVED                                                                 Properties: Bits: 10:7, Type: rw, Reset Value: 0x0

                                                                         // Properties: Bit: 6, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PCFG_HMAC_ERR_INT_MASK   = 0x00000040;    // Triggers when an HMAC error is received from
const uintptr_t DEVCFG_INT_STS_PCFG_HMAC_ERR_INT_BPOS   = 6;             // the PL

                                                                         // Properties: Bit: 5, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PCFG_SEU_ERR_INT_MASK    = 0x00000020;    // Triggers when an SEU error is received from the
const uintptr_t DEVCFG_INT_STS_PCFG_SEU_ERR_INT_BPOS    = 5;             // PL

                                                                         // Properties: Bit: 4, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PCFG_POR_B_INT_MASK      = 0x00000010;    // Triggers if the PL loses power, PL POR_B signal
const uintptr_t DEVCFG_INT_STS_PCFG_POR_B_INT_BPOS      = 4;             // goes low

                                                                         // Properties: Bit: 3, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PCFG_CFG_RST_INT_MASK    = 0x00000008;    // Triggers if the PL configuration controller is
const uintptr_t DEVCFG_INT_STS_PCFG_CFG_RST_INT_BPOS    = 3;             // under reset

                                                                         // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PCFG_DONE_INT_MASK       = 0x00000004;    // DONE signal from PL indicating that
const uintptr_t DEVCFG_INT_STS_PCFG_DONE_INT_BPOS       = 2;             // programming is complete and PL is in user mode.

                                                                         // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PCFG_INIT_PE_INT_MASK    = 0x00000002;    // Triggered on the positive edge of the PL INIT
const uintptr_t DEVCFG_INT_STS_PCFG_INIT_PE_INT_BPOS    = 1;             // signal

                                                                         // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_INT_STS_PCFG_INIT_NE_INT_MASK    = 0x00000001;    // Triggered on the negative edge of the PL INIT
const uintptr_t DEVCFG_INT_STS_PCFG_INIT_NE_INT_BPOS    = 0;             // signal


//------------------------------------------------------------------------------
//
// Register (DEVCFG) INT_MASK
//
// Name                    DEVCFG_INT_MASK_REG
// Relative Address        0x00000010
// Absolute Address        0xF8007010
// Width                   32 bits
// Access Type             rw
// Reset Value             0xFFFFFFFF
// Description             Interrupt Mask Register: This register contains interrupt mask information.
//                         Set a bit to 1 to mask the interrupt generation from the corresponding interrupting
//                         source in Interrupt Status Register 0x00C.
//
// Register DEVCFG_INT_MASK_REG Details
//
                                                                            // Properties: Bit: 31, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PSS_GTS_USR_B_INT_MASK   = 0x80000000;    // Interrupt mask for tri-state IO during HIZ, both
const uintptr_t DEVCFG_INT_MASK_M_PSS_GTS_USR_B_INT_BPOS   = 31;            // edges

                                                                            // Properties: Bit: 30, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PSS_FST_CFG_B_INT_MASK   = 0x40000000;    // Interrupt mask for first config done, both edges
const uintptr_t DEVCFG_INT_MASK_M_PSS_FST_CFG_B_INT_BPOS   = 30;            // 

                                                                            // Properties: Bit: 29, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PSS_GPWRDWN_B_INT_MASK   = 0x20000000;    // Interrupt mask for global power down, both
const uintptr_t DEVCFG_INT_MASK_M_PSS_GPWRDWN_B_INT_BPOS   = 29;            // edges

                                                                            // Properties: Bit: 28, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PSS_GTS_CFG_B_INT_MASK   = 0x10000000;    // Interrupt mask for tri-state IO in config, both
const uintptr_t DEVCFG_INT_MASK_M_PSS_GTS_CFG_B_INT_BPOS   = 28;            // edges

                                                                            // Properties: Bit: 27, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PSS_CFG_RESET_B_INT_MASK = 0x08000000;    // Interrupt mask for config reset, both edges
const uintptr_t DEVCFG_INT_MASK_M_PSS_CFG_RESET_B_INT_BPOS = 27;            // 

// RESERVED                                                                    Properties: Bits: 26:24, Type: rw, Reset Value: 0x7

                                                                            // Properties: Bit: 23, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_AXI_WTO_INT_MASK         = 0x00800000;    // Interrupt mask for AXI write time out interrupt
const uintptr_t DEVCFG_INT_MASK_M_AXI_WTO_INT_BPOS         = 23;            // 

                                                                            // Properties: Bit: 22, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_AXI_WERR_INT_MASK        = 0x00400000;    // Interrupt mask for AXI write response error
const uintptr_t DEVCFG_INT_MASK_M_AXI_WERR_INT_BPOS        = 22;            // interrupt

                                                                            // Properties: Bit: 21, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_AXI_RTO_INT_MASK         = 0x00200000;    // Interrupt mask for AXI read time out interrupt
const uintptr_t DEVCFG_INT_MASK_M_AXI_RTO_INT_BPOS         = 21;            // 

                                                                            // Properties: Bit: 20, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_AXI_RERR_INT_MASK        = 0x00100000;    // Interrupt mask for AXI read response error
const uintptr_t DEVCFG_INT_MASK_M_AXI_RERR_INT_BPOS        = 20;            // interrupt

// RESERVED                                                                    Properties: Bit: 19, Type: rw, Reset Value: 0x1

                                                                            // Properties: Bit: 18, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_RX_FIFO_OV_INT_MASK      = 0x00040000;    // Interrupt mask for Rx FIFO overflow interrupt
const uintptr_t DEVCFG_INT_MASK_M_RX_FIFO_OV_INT_BPOS      = 18;            // 

                                                                            // Properties: Bit: 17, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_WR_FIFO_LVL_INT_MASK     = 0x00020000;    // Interrupt mask for Tx FIFO level < threshold
const uintptr_t DEVCFG_INT_MASK_M_WR_FIFO_LVL_INT_BPOS     = 17;            // interrupt

                                                                            // Properties: Bit: 16, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_RD_FIFO_LVL_INT_MASK     = 0x00010000;    // Interrupt mask for Rx FIFO level > threshold
const uintptr_t DEVCFG_INT_MASK_M_RD_FIFO_LVL_INT_BPOS     = 16;            // interrupt

                                                                            // Properties: Bit: 15, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_DMA_CMD_ERR_INT_MASK     = 0x00008000;    // Interrupt mask for illegal DMA command
const uintptr_t DEVCFG_INT_MASK_M_DMA_CMD_ERR_INT_BPOS     = 15;            // interrupt

                                                                            // Properties: Bit: 14, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_DMA_FIFO_OV_INT_MASK     = 0x00004000;    // Interrupt mask for DMA command FIFO
const uintptr_t DEVCFG_INT_MASK_M_DMA_FIFO_OV_INT_BPOS     = 14;            // overflows

                                                                            // Properties: Bit: 13, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_DMA_DONE_INT_MASK        = 0x00002000;    // Interrupt mask for DMA command done
const uintptr_t DEVCFG_INT_MASK_M_DMA_DONE_INT_BPOS        = 13;            // interrupt

                                                                            // Properties: Bit: 12, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_D_P_DONE_INT_MASK        = 0x00001000;    // Interrupt mask for DMA and PCAP done
const uintptr_t DEVCFG_INT_MASK_M_D_P_DONE_INT_BPOS        = 12;            // interrupt

                                                                            // Properties: Bit: 11, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_P2D_LEN_ERR_INT_MASK     = 0x00000800;    // Interrupt mask Inconsistent xfer length error
const uintptr_t DEVCFG_INT_MASK_M_P2D_LEN_ERR_INT_BPOS     = 11;            // interrupt

// RESERVED                                                                    Properties: Bits: 10:7, Type: rw, Reset Value: 0xF

                                                                            // Properties: Bit: 6, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PCFG_HMAC_ERR_INT_MASK   = 0x00000040;    // Interrupt mask for HMAC error
const uintptr_t DEVCFG_INT_MASK_M_PCFG_HMAC_ERR_INT_BPOS   = 6;             // 

                                                                            // Properties: Bit: 5, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PCFG_SEU_ERR_INT_MASK    = 0x00000020;    // Interrupt mask for PCFG_SEU_ERR interrupt
const uintptr_t DEVCFG_INT_MASK_M_PCFG_SEU_ERR_INT_BPOS    = 5;             // 

                                                                            // Properties: Bit: 4, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PCFG_POR_B_INT_MASK      = 0x00000010;    // Interrupt mask for PCFG_POR_B Interrupt
const uintptr_t DEVCFG_INT_MASK_M_PCFG_POR_B_INT_BPOS      = 4;             // 

                                                                            // Properties: Bit: 3, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PCFG_CFG_RST_INT_MASK    = 0x00000008;    // Interrupt mask for PCFG_CFG_RESET interrupt
const uintptr_t DEVCFG_INT_MASK_M_PCFG_CFG_RST_INT_BPOS    = 3;             // 

                                                                            // Properties: Bit: 2, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PCFG_DONE_INT_MASK       = 0x00000004;    // Interrupt mask for PCFG_DONE interrupt
const uintptr_t DEVCFG_INT_MASK_M_PCFG_DONE_INT_BPOS       = 2;             // 

                                                                            // Properties: Bit: 1, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PCFG_INIT_PE_INT_MASK    = 0x00000002;    // Interrupt mask for PCFG_INIT_PE interrupt
const uintptr_t DEVCFG_INT_MASK_M_PCFG_INIT_PE_INT_BPOS    = 1;             // 

                                                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_INT_MASK_M_PCFG_INIT_NE_INT_MASK    = 0x00000001;    // Interrupt mask for PCFG_INIT_NE interrupt
const uintptr_t DEVCFG_INT_MASK_M_PCFG_INIT_NE_INT_BPOS    = 0;             // 


//------------------------------------------------------------------------------
//
// Register (DEVCFG) STATUS
//
// Name                    DEVCFG_STATUS_REG
// Relative Address        0x00000014
// Absolute Address        0xF8007014
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x40000820
// Description             Status Register: This register contains miscellaneous status.
//
// Register DEVCFG_STATUS_REG Details
//
                                                                            // Properties: Bit: 31, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_DMA_CMD_Q_F_MASK             = 0x80000000;    // DMA command queue full, if set
const uintptr_t DEVCFG_STATUS_DMA_CMD_Q_F_BPOS             = 31;            // 

                                                                            // Properties: Bit: 30, Type: ro, Reset Value: 0x1
const uintptr_t DEVCFG_STATUS_DMA_CMD_Q_E_MASK             = 0x40000000;    // DMA command queue empty, if set
const uintptr_t DEVCFG_STATUS_DMA_CMD_Q_E_BPOS             = 30;            // 

                                                                            // Properties: Bits: 29:28, Type: clronwr, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_DMA_DONE_CNT_MASK            = 0x30000000;    // Number of completed DMA transfers that have
const uintptr_t DEVCFG_STATUS_DMA_DONE_CNT_BPOS            = 28;            // not been acknowledged by software:
                                                                            // 00 - all finished transfers have been
                                                                            // acknowledged
                                                                            // 01 - one finished transfer outstanding
                                                                            // 10 - two finished transfers outstanding
                                                                            // 11 - three or more finished transfers outstanding
                                                                            // A finished transfer is acknowledged by clearing
                                                                            // the DMA_DONE_INT interrupt status flag of the
                                                                            // interrupt status register 0x00C.
                                                                            // This count is cleared by writing a 1 to either bit
                                                                            // location.

// RESERVED                                                                    Properties: Bits: 27:25, Type: rw, Reset Value: 0x0

                                                                            // Properties: Bits: 24:20, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_RX_FIFO_LVL_MASK             = 0x01F00000;    // This register is used to indicate how many valid
const uintptr_t DEVCFG_STATUS_RX_FIFO_LVL_BPOS             = 20;            // 32-Bit words in the Rx FIFO, max. is 31

// RESERVED                                                                    Properties: Bit: 19, Type: rw, Reset Value: 0x0

                                                                            // Properties: Bits: 18:12, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_TX_FIFO_LVL_MASK             = 0x0007F000;    // This register is used to indicate how many valid
const uintptr_t DEVCFG_STATUS_TX_FIFO_LVL_BPOS             = 12;            // 32-Bit words in the Tx FIFO, max. is 127

                                                                            // Properties: Bit: 11, Type: ro, Reset Value: 0x1
const uintptr_t DEVCFG_STATUS_PSS_GTS_USR_B_MASK           = 0x00000800;    // Tri-state IO during HIZ, active low
const uintptr_t DEVCFG_STATUS_PSS_GTS_USR_B_BPOS           = 11;            // 

                                                                            // Properties: Bit: 10, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_PSS_FST_CFG_B_MASK           = 0x00000400;    // First PL configuration done, active low.
const uintptr_t DEVCFG_STATUS_PSS_FST_CFG_B_BPOS           = 10;            // 

                                                                            // Properties: Bit: 9, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_PSS_GPWRDWN_B_MASK           = 0x00000200;    // Global power down, active low
const uintptr_t DEVCFG_STATUS_PSS_GPWRDWN_B_BPOS           = 9;             // 

                                                                            // Properties: Bit: 8, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_PSS_GTS_CFG_B_MASK           = 0x00000100;    // Tri-state IO during config, active low. This signal
const uintptr_t DEVCFG_STATUS_PSS_GTS_CFG_B_BPOS           = 8;             // will only be low when the PL CFG block is being
                                                                            // used to configure the PL.
                                                                            // 0 - IO are tri-stated by CFG block

                                                                            // Properties: Bit: 7, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_SECURE_RST_MASK              = 0x00000080;    // This bit is used to indicate a secure lockdown.
const uintptr_t DEVCFG_STATUS_SECURE_RST_BPOS              = 7;             // Can only be cleared by a PS_POR_B reset.

                                                                            // Properties: Bit: 6, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_ILLEGAL_APB_ACCESS_MASK      = 0x00000040;    // Indicates the UNLOCK register was not written
const uintptr_t DEVCFG_STATUS_ILLEGAL_APB_ACCESS_BPOS      = 6;             // with the correct unlock word.
                                                                            // If set all secure boot features will be disabled, the
                                                                            // DAP will be disabled and writing to the DEVCI
                                                                            // registers will be disabled.
                                                                            // The illegal access mode can only be cleared with a
                                                                            // PS_POR_B reset.

                                                                            // Properties: Bit: 5, Type: ro, Reset Value: 0x1
const uintptr_t DEVCFG_STATUS_PSS_CFG_RESET_B_MASK         = 0x00000020;    // PL configuration reset, active low.
const uintptr_t DEVCFG_STATUS_PSS_CFG_RESET_B_BPOS         = 5;             // 

                                                                            // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_PCFG_INIT_MASK               = 0x00000010;    // PL INIT signal, indicates when housecleaning is
const uintptr_t DEVCFG_STATUS_PCFG_INIT_BPOS               = 4;             // done and the PL is ready to receive PCAP data.
                                                                            // Positive and negative edges of the signal generate
                                                                            // maskable interrupts in 0x00C.

                                                                            // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_EFUSE_BBRAM_KEY_DISABLE_MASK = 0x00000008;    // When this eFuse is blown, the BBRAM AES key is
const uintptr_t DEVCFG_STATUS_EFUSE_BBRAM_KEY_DISABLE_BPOS = 3;             // disabled.
                                                                            // If the device is booted securely, the eFuse key
                                                                            // must be used.

                                                                            // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_EFUSE_SEC_EN_MASK            = 0x00000004;    // When this eFuse is blown, the Zynq device must
const uintptr_t DEVCFG_STATUS_EFUSE_SEC_EN_BPOS            = 2;             // boot securely and use the eFuse as the AES key
                                                                            // source.
                                                                            // Non-secure boot will cause a security lockdown.

                                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_STATUS_EFUSE_JTAG_DIS_MASK          = 0x00000002;    // When this eFuse is blown, the ARM DAP
const uintptr_t DEVCFG_STATUS_EFUSE_JTAG_DIS_BPOS          = 1;             // controller is permanently set in bypass mode.
                                                                            // Any attempt to activate the DAP will cause a
                                                                            // security lockdown.

// RESERVED                                                                    Properties: Bit: 0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (DEVCFG) DMA_SRC_ADDR
//
// Name                    DEVCFG_DMA_SRC_ADDR_REG
// Relative Address        0x00000018
// Absolute Address        0xF8007018
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DMA Source address Register: This register contains the source address for DMA
//                         transfer.
//                         A DMA command consists of source address, destination address, source transfer
//                         length, and destination transfer length.
//                         It is important that the parameters are programmed in the exact sequence as
//                         described
//
// Register DEVCFG_DMA_SRC_ADDR_REG Details
//
                                                      // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_SRC_ADDR_MASK = 0xFFFFFFFF;    // Source address for DMA transfer of AXI read.
const uintptr_t DEVCFG_SRC_ADDR_BPOS = 0;             // Setting SRC_ADDR[1:0] and DST_ADDR[1:0] to
                                                      // 2'b01 will cause the DMA engine to hold the DMA
                                                      // DONE interrupt until both the AXI and PCAP
                                                      // interfaces are done with the data transfer.
                                                      // Otherwise the interrupt will trigger as soon as the
                                                      // AXI interface is done.


//------------------------------------------------------------------------------
//
// Register (DEVCFG) DMA_DST_ADDR
//
// Name                    DEVCFG_DMA_DST_ADDR_REG
// Software Name           DMA_DEST_ADDR
// Relative Address        0x0000001C
// Absolute Address        0xF800701C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DMA Destination address Register: This register contains the destination address for
//                         DMA transfer.
//                         A DMA command consists of source address, destination address, source transfer
//                         length, and destination transfer length.
//                         It is important that the parameters are programmed in the exact sequence as
//                         described.
//
// Register DEVCFG_DMA_DST_ADDR_REG Details
//
                                                      // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_DST_ADDR_MASK = 0xFFFFFFFF;    // Destination address for DMA transfer of AXI
const uintptr_t DEVCFG_DST_ADDR_BPOS = 0;             // write.
                                                      // Setting SRC_ADDR[1:0] and DST_ADDR[1:0] to
                                                      // 2'b01 will cause the DMA engine to hold the DMA
                                                      // DONE interrupt until both the AXI and PCAP
                                                      // interfaces are done with the data transfer.
                                                      // Otherwise the interrupt will trigger as soon as the
                                                      // AXI interface is done.


//------------------------------------------------------------------------------
//
// Register (DEVCFG) DMA_SRC_LEN
//
// Name                    DEVCFG_DMA_SRC_LEN_REG
// Relative Address        0x00000020
// Absolute Address        0xF8007020
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DMA Source transfer Length Register: This register contains the DMA source
//                         transfer length in unit of 4-byte word.
//                         A DMA command that consists of source address, destination address, source
//                         transfer length, and destination transfer length.
//                         It is important that the parameters are programmed in the exact sequence as
//                         described.
//
// Register DEVCFG_DMA_SRC_LEN_REG Details
//
// RESERVED                                                     Properties: Bits: 31:27, Type: rw, Reset Value: 0x0

                                                             // Properties: Bits: 26:0, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_DMA_SRC_LEN_VAL_MASK = 0x07FFFFFF;    // Up to 512MB data
const uintptr_t DEVCFG_DMA_SRC_LEN_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (DEVCFG) DMA_DEST_LEN
//
// Name                    DEVCFG_DMA_DEST_LEN_REG
// Relative Address        0x00000024
// Absolute Address        0xF8007024
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             DMA Destination transfer
//                         Length Register: This register contains the DMA destination transfer length in unit
//                         of 4-byte word.
//                         A DMA command that consists of source address, destination address, source
//                         transfer length, and destination transfer length is accepted when this register is
//                         written to.
//                         It is important that the parameters are programmed in the exact sequence as
//                         described.
//
// Register DEVCFG_DMA_DEST_LEN_REG Details
//
// RESERVED                                                      Properties: Bits: 31:27, Type: rw, Reset Value: 0x0

                                                              // Properties: Bits: 26:0, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_DMA_DEST_LEN_VAL_MASK = 0x07FFFFFF;    // Up to 512MB data
const uintptr_t DEVCFG_DMA_DEST_LEN_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (DEVCFG) MULTIBOOT_ADDR
//
// Name                    DEVCFG_MULTIBOOT_ADDR_REG
// Relative Address        0x0000002C
// Absolute Address        0xF800702C
// Width                   13 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             MULTI Boot Addr Pointer Register: This register defines multi-boot address pointer.
//                         This register is power on reset only used to remember multi-boot address pointer set
//                         by previous boot.
//
// Register DEVCFG_MULTIBOOT_ADDR_REG Details
//
                                                            // Properties: Bits: 12:0, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_MULTIBOOT_ADDR_MASK = 0x00001FFF;    // Multi-Boot offset address
const uintptr_t DEVCFG_MULTIBOOT_ADDR_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (DEVCFG) UNLOCK
//
// Name                    DEVCFG_UNLOCK_REG
// Relative Address        0x00000034
// Absolute Address        0xF8007034
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Unlock Register: This register is used to protect the DEVCI configuration registers
//                         from ROM code corruption.
//                         The boot ROM will unlock the DEVCI by writing 0x757BDF0D to this register.
//                         Writing anything other than the unlock word to this register will cause an illegal
//                         access state and make the DEVCI inaccessible until a system reset occurs.
//
// Register DEVCFG_UNLOCK_REG Details
//
                                                    // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_UNLOCK_MASK = 0xFFFFFFFF;    // Unlock value.
const uintptr_t DEVCFG_UNLOCK_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (DEVCFG) MCTRL
//
// Name                    DEVCFG_MCTRL_REG
// Relative Address        0x00000080
// Absolute Address        0xF8007080
// Width                   32 bits
// Access Type             mixed
// Reset Value             x
// Description             Miscellaneous control Register: This register contains miscellaneous controls.
//
// Register DEVCFG_MCTRL_REG Details
//
                                                                 // Properties: Bits: 31:28, Type: ro, Reset Value: x
const uintptr_t DEVCFG_MCTRL_PS_VERSION_MASK    = 0xF0000000;    // Version ID for silicon
const uintptr_t DEVCFG_MCTRL_PS_VERSION_BPOS    = 28;            // 0x0 = 1.0 Silicon
                                                                 // 0x1 = 2.0 Silicon
                                                                 // 0x2 = 3.0 Silicon
                                                                 // 0x3 = 3.1 Silicon

// RESERVED                                                         Properties: Bit: 27, Type: ro, Reset Value: 0x0

// RESERVED                                                         Properties: Bit: 26, Type: ro, Reset Value: 0x0

// RESERVED                                                         Properties: Bit: 25, Type: ro, Reset Value: 0x0

// RESERVED                                                         Properties: Bit: 24, Type: ro, Reset Value: 0x0

// RESERVED                                                         Properties: Bit: 23, Type: rw, Reset Value: 0x1

// RESERVED                                                         Properties: Bits: 22:14, Type: rw, Reset Value: 0x0

// RESERVED                                                         Properties: Bit: 13, Type: rw, Reset Value: 0x0

// RESERVED                                                         Properties: Bit: 12, Type: rw, Reset Value: 0x0

// RESERVED                                                         Properties: Bits: 11:9, Type: rw, Reset Value: 0x0

                                                                 // Properties: Bit: 8, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_MCTRL_PCFG_POR_B_MASK    = 0x00000100;    // PL POR_B signal used to determine power-up
const uintptr_t DEVCFG_MCTRL_PCFG_POR_B_BPOS    = 8;             // status of PL.

// RESERVED                                                         Properties: Bits: 7:5, Type: rw, Reset Value: 0x0

                                                                 // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_MCTRL_INT_PCAP_LPBK_MASK = 0x00000010;    // Internal PCAP loopback, if set
const uintptr_t DEVCFG_MCTRL_INT_PCAP_LPBK_BPOS = 4;             // 

// RESERVED                                                         Properties: Bits: 3:2, Type: rw, Reset Value: 0x0

// RESERVED                                                         Properties: Bit: 1, Type: rw, Reset Value: 0x0

// RESERVED                                                         Properties: Bit: 0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (DEVCFG) XADCIF_CFG
//
// Name                    DEVCFG_XADCIF_CFG_REG
// Relative Address        0x00000100
// Absolute Address        0xF8007100
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00001114
// Description             XADC Interface Configuration Register : This register configures the XADC Interface
//                         operation
//
// Register DEVCFG_XADCIF_CFG_REG Details
//
                                                                // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_CFG_ENABLE_MASK  = 0x80000000;    // Enable PS access of the XADC, if set
const uintptr_t DEVCFG_XADCIF_CFG_ENABLE_BPOS  = 31;            // 

// RESERVED                                                        Properties: Bits: 30:24, Type: rw, Reset Value: 0x0

                                                                // Properties: Bits: 23:20, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_CFG_CFIFOTH_MASK = 0x00F00000;    // Command FIFO level threshold.
const uintptr_t DEVCFG_XADCIF_CFG_CFIFOTH_BPOS = 20;            // Interrupt status flag is set if the FIFO level is less
                                                                // than or equal to the threshold

                                                                // Properties: Bits: 19:16, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_CFG_DFIFOTH_MASK = 0x000F0000;    // Data FIFO level threshold.
const uintptr_t DEVCFG_XADCIF_CFG_DFIFOTH_BPOS = 16;            // Interrupt status flag is set if FIFO level is greater
                                                                // than the threshold

// RESERVED                                                        Properties: Bits: 15:14, Type: rw, Reset Value: 0x0

                                                                // Properties: Bit: 13, Type: rw, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_CFG_WEDGE_MASK   = 0x00002000;    // Write launch edge :
const uintptr_t DEVCFG_XADCIF_CFG_WEDGE_BPOS   = 13;            // 0 - Falling edge
                                                                // 1 - Rising edge

                                                                // Properties: Bit: 12, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_XADCIF_CFG_REDGE_MASK   = 0x00001000;    // Read capture edge :
const uintptr_t DEVCFG_XADCIF_CFG_REDGE_BPOS   = 12;            // 0 - Falling edge
                                                                // 1 - Rising edge

// RESERVED                                                        Properties: Bits: 11:10, Type: rw, Reset Value: 0x0

                                                                // Properties: Bits: 9:8, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_XADCIF_CFG_TCKRATE_MASK = 0x00000300;    // XADC clock frequency control.
const uintptr_t DEVCFG_XADCIF_CFG_TCKRATE_BPOS = 8;             // The base frequency is pcap_2x clock which has a
                                                                // nominal frequency of 200 MHz.
                                                                // 00 - 1/2 of pcap_2x clock frequency
                                                                // 01 - 1/4 of pcap_2x clock frequency
                                                                // 10 - 1/8 of pcap_2x clock frequency
                                                                // 11 - 1/16 of pcap_2x clock frequency

// RESERVED                                                        Properties: Bits: 7:5, Type: rw, Reset Value: 0x0

                                                                // Properties: Bits: 4:0, Type: rw, Reset Value: 0x14
const uintptr_t DEVCFG_XADCIF_CFG_IGAP_MASK    = 0x0000001F;    // Minimum idle gap between successive
const uintptr_t DEVCFG_XADCIF_CFG_IGAP_BPOS    = 0;             // commands.
                                                                // Default is 20 cycles, the minimum required by the
                                                                // XADC is 10.


//------------------------------------------------------------------------------
//
// Register (DEVCFG) XADCIF_INT_STS
//
// Name                    DEVCFG_XADCIF_INT_STS_REG
// Relative Address        0x00000104
// Absolute Address        0xF8007104
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000200
// Description             XADC Interface Interrupt Status Register : This register contains the interrupt status
//                         flags of the XADC interface block.
//                         All register bits are clear on write by writing 1s to those bits, however the register bits
//                         will only be cleared if the condition that sets the interrupt flag is no longer true.
//                         Note that individual status bits will be set if the corresponding condition is satisfied
//                         regardless of whether the interrupt mask bit in 0x108 is set.
//                         However, external interrupt will only be generated if an interrupt status flag is set
//                         and the corresponding mask bit is not set
//
// Register DEVCFG_XADCIF_INT_STS_REG Details
//
// RESERVED                                                              Properties: Bits: 31:10, Type: rw, Reset Value: 0x0

                                                                      // Properties: Bit: 9, Type: wtc, Reset Value: 0x1
const uintptr_t DEVCFG_XADCIF_INT_STS_CFIFO_LTH_MASK = 0x00000200;    // Command FIFO level less than or equal to the
const uintptr_t DEVCFG_XADCIF_INT_STS_CFIFO_LTH_BPOS = 9;             // threshold (see register 0x100).

                                                                      // Properties: Bit: 8, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_INT_STS_DFIFO_GTH_MASK = 0x00000100;    // Data FIFO level greater than threshold (see
const uintptr_t DEVCFG_XADCIF_INT_STS_DFIFO_GTH_BPOS = 8;             // register 0x100).

                                                                      // Properties: Bit: 7, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_INT_STS_OT_MASK        = 0x00000080;    // Over temperature alarm from XADC.
const uintptr_t DEVCFG_XADCIF_INT_STS_OT_BPOS        = 7;             // This is a latched version of the raw signal which is
                                                                      // also available in register 0x10C

                                                                      // Properties: Bits: 6:0, Type: wtc, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_INT_STS_ALM_MASK       = 0x0000007F;    // Alarm signals from XADC.
const uintptr_t DEVCFG_XADCIF_INT_STS_ALM_BPOS       = 0;             // These are latched version of the raw input alarm
                                                                      // signals which are also available in register 0x10C


//------------------------------------------------------------------------------
//
// Register (DEVCFG) XADCIF_INT_MASK
//
// Name                    DEVCFG_XADCIF_INT_MASK_REG
// Relative Address        0x00000108
// Absolute Address        0xF8007108
// Width                   32 bits
// Access Type             rw
// Reset Value             0xFFFFFFFF
// Description             XADC Interface Interrupt Mask Register : This register contains the interrupt mask
//                         information.
//                         Set a bit to 1 to mask the interrupt generation from the corresponding interrupting
//                         source in 0x104
//
// Register DEVCFG_XADCIF_INT_MASK_REG Details
//
// RESERVED                                                                 Properties: Bits: 31:10, Type: rw, Reset Value: 0x3FFFFF

                                                                         // Properties: Bit: 9, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_XADCIF_INT_MASK_M_CFIFO_LTH_MASK = 0x00000200;    // Interrupt mask for command FIFO level threshold
const uintptr_t DEVCFG_XADCIF_INT_MASK_M_CFIFO_LTH_BPOS = 9;             // interrupt.

                                                                         // Properties: Bit: 8, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_XADCIF_INT_MASK_M_DFIFO_GTH_MASK = 0x00000100;    // Interrupt mask Data FIFO level greater than
const uintptr_t DEVCFG_XADCIF_INT_MASK_M_DFIFO_GTH_BPOS = 8;             // threshold interrupt.

                                                                         // Properties: Bit: 7, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_XADCIF_INT_MASK_M_OT_MASK        = 0x00000080;    // Interrupt mask for over temperature alarm
const uintptr_t DEVCFG_XADCIF_INT_MASK_M_OT_BPOS        = 7;             // interrupt

                                                                         // Properties: Bits: 6:0, Type: rw, Reset Value: 0x7F
const uintptr_t DEVCFG_XADCIF_INT_MASK_M_ALM_MASK       = 0x0000007F;    // Interrupt mask for alarm signals from XADC.
const uintptr_t DEVCFG_XADCIF_INT_MASK_M_ALM_BPOS       = 0;             // 


//------------------------------------------------------------------------------
//
// Register (DEVCFG) XADCIF_MSTS
//
// Name                    DEVCFG_XADCIF_MSTS_REG
// Relative Address        0x0000010C
// Absolute Address        0xF800710C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000500
// Description             XADC Interface miscellaneous Status Register : This register contains miscellaneous
//                         status of the XADC Interface
//
// Register DEVCFG_XADCIF_MSTS_REG Details
//
// RESERVED                                                           Properties: Bits: 31:20, Type: ro, Reset Value: 0x0

                                                                   // Properties: Bits: 19:16, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_MSTS_CFIFO_LVL_MASK = 0x000F0000;    // Command FIFO level.
const uintptr_t DEVCFG_XADCIF_MSTS_CFIFO_LVL_BPOS = 16;            // 

                                                                   // Properties: Bits: 15:12, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_MSTS_DFIFO_LVL_MASK = 0x0000F000;    // Data FIFO level.
const uintptr_t DEVCFG_XADCIF_MSTS_DFIFO_LVL_BPOS = 12;            // 

                                                                   // Properties: Bit: 11, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_MSTS_CFIFOF_MASK    = 0x00000800;    // Command FIFO full.
const uintptr_t DEVCFG_XADCIF_MSTS_CFIFOF_BPOS    = 11;            // 

                                                                   // Properties: Bit: 10, Type: ro, Reset Value: 0x1
const uintptr_t DEVCFG_XADCIF_MSTS_CFIFOE_MASK    = 0x00000400;    // Command FIFO empty.
const uintptr_t DEVCFG_XADCIF_MSTS_CFIFOE_BPOS    = 10;            // 

                                                                   // Properties: Bit: 9, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_MSTS_DFIFOF_MASK    = 0x00000200;    // Data FIFO full.
const uintptr_t DEVCFG_XADCIF_MSTS_DFIFOF_BPOS    = 9;             // 

                                                                   // Properties: Bit: 8, Type: ro, Reset Value: 0x1
const uintptr_t DEVCFG_XADCIF_MSTS_DFIFOE_MASK    = 0x00000100;    // Data FIFO empty.
const uintptr_t DEVCFG_XADCIF_MSTS_DFIFOE_BPOS    = 8;             // 

                                                                   // Properties: Bit: 7, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_MSTS_OT_MASK        = 0x00000080;    // Raw over temperature alarm from the XADC.
const uintptr_t DEVCFG_XADCIF_MSTS_OT_BPOS        = 7;             // Latched version of the signal is available in the
                                                                   // interrupt status register.

                                                                   // Properties: Bits: 6:0, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_MSTS_ALM_MASK       = 0x0000007F;    // Raw alarm signals from the XADC.
const uintptr_t DEVCFG_XADCIF_MSTS_ALM_BPOS       = 0;             // Latched version of the signals are available in the
                                                                   // interrupt status register.


//------------------------------------------------------------------------------
//
// Register (DEVCFG) XADCIF_CMDFIFO
//
// Name                    DEVCFG_XADCIF_CMDFIFO_REG
// Relative Address        0x00000110
// Absolute Address        0xF8007110
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             XADC Interface Command FIFO Register : This address is the entry point to the
//                         command FIFO.
//                         Commands get push into the FIFO when there is a write to this address
//
// Register DEVCFG_XADCIF_CMDFIFO_REG Details
//
                                                                // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_CMDFIFO_CMD_MASK = 0xFFFFFFFF;    // 32-bit command.
const uintptr_t DEVCFG_XADCIF_CMDFIFO_CMD_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (DEVCFG) XADCIF_RDFIFO
//
// Name                    DEVCFG_XADCIF_RDFIFO_REG
// Relative Address        0x00000114
// Absolute Address        0xF8007114
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             XADC Interface Data FIFO Register : This address is the exit point of the read data
//                         FIFO.
//                         Read data is returned when there is a read from this address
//
// Register DEVCFG_XADCIF_RDFIFO_REG Details
//
                                                                  // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t DEVCFG_XADCIF_RDFIFO_RDDATA_MASK = 0xFFFFFFFF;    // 32-bit read data.
const uintptr_t DEVCFG_XADCIF_RDFIFO_RDDATA_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (DEVCFG) XADCIF_MCTL
//
// Name                    DEVCFG_XADCIF_MCTL_REG
// Relative Address        0x00000118
// Absolute Address        0xF8007118
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000010
// Description             XADC Interface Miscellaneous Control Register : This register provides
//                         miscellaneous control of the XADC Interface.
//
// Register DEVCFG_XADCIF_MCTL_REG Details
//
// RESERVED                                                       Properties: Bits: 31:5, Type: rw, Reset Value: 0x0

                                                               // Properties: Bit: 4, Type: rw, Reset Value: 0x1
const uintptr_t DEVCFG_XADCIF_MCTL_RESET_MASK = 0x00000010;    // This bit will reset the communication channel
const uintptr_t DEVCFG_XADCIF_MCTL_RESET_BPOS = 4;             // between the PS and XADC.
                                                               // If set, the PS-XADC communication channel will
                                                               // remain in reset until a 0 is written to this bit.

// RESERVED                                                       Properties: Bits: 3:1, Type: rw, Reset Value: 0x0

// RESERVED                                                       Properties: Bit: 0, Type: rw, Reset Value: 0x0


#endif // PS7_DEVCFG_H

