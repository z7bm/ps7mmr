//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_SDIO
//*
//*      Version 1.0
//*
//*      Copyright (c) 2017, emb-lib Project Team
//*
//*      This file is part of the zynq7000 library project.
//*      Visit https://github.com/emb-lib/zynq7000 for new versions.
//*
//*      Permission is hereby granted, free of charge, to any person
//*      obtaining  a copy of this software and associated documentation
//*      files (the "Software"), to deal in the Software without restriction,
//*      including without limitation the rights to use, copy, modify, merge,
//*      publish, distribute, sublicense, and/or sell copies of the Software,
//*      and to permit persons to whom the Software is furnished to do so,
//*      subject to the following conditions:
//*
//*      The above copyright notice and this permission notice shall be included
//*      in all copies or substantial portions of the Software.
//*
//*      THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//*      EXPRESS  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//*      MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//*      IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
//*      CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
//*      TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
//*      THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//*
//------------------------------------------------------------------------------

#ifndef PS7_SDIO_H
#define PS7_SDIO_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    SDIO0 MMRs
//
//              Name                        Address                  Width   Type     Reset Value   Description
const uintptr_t SD_SDMA_ADDR_REG0         = SD0_ADDR + 0x00000000; //  32    rw       0x00000000    System DMA Address Register
const uintptr_t SD_BLOCK_SIZE_COUNT_REG0  = SD0_ADDR + 0x00000004; //  32    mixed    0x00000000    Block Size
const uintptr_t SD_ARGUMENT_REG0          = SD0_ADDR + 0x00000008; //  32    rw       0x00000000    Argument register
const uintptr_t SD_TRANSFER_MODE_CMD_REG0 = SD0_ADDR + 0x0000000C; //  32    mixed    0x00000000    Transfer Mode
const uintptr_t SD_RESPONSE_REG00         = SD0_ADDR + 0x00000010; //  32    ro       0x00000000    Response register
const uintptr_t SD_RESPONSE_REG10         = SD0_ADDR + 0x00000014; //  32    ro       0x00000000    Response register
const uintptr_t SD_RESPONSE_REG20         = SD0_ADDR + 0x00000018; //  32    ro       0x00000000    Response register
const uintptr_t SD_RESPONSE_REG30         = SD0_ADDR + 0x0000001C; //  32    ro       0x00000000    Response register
const uintptr_t SD_BUFFER_DATA_PORT_REG0  = SD0_ADDR + 0x00000020; //  32    rw       0x00000000    Buffer data port register
const uintptr_t SD_PRESENT_STATE_REG0     = SD0_ADDR + 0x00000024; //  25    ro       0x01F20000    Present State register
const uintptr_t SD_HS_PWR_BGAP_WKUP_REG0  = SD0_ADDR + 0x00000028; //  32    mixed    0x00000000    Host
const uintptr_t SD_CLK_TOUT_SWRST_REG0    = SD0_ADDR + 0x0000002C; //  27    mixed    0x00000000    Clock
const uintptr_t SD_INT_STS_REG0           = SD0_ADDR + 0x00000030; //  30    mixed    0x00000000    Normal
const uintptr_t SD_INT_STS_EN_REG0        = SD0_ADDR + 0x00000034; //  30    mixed    0x00000000    Normal
const uintptr_t SD_INT_EN_REG0            = SD0_ADDR + 0x00000038; //  30    mixed    0x00000000    Normal
const uintptr_t SD_AUTO_CMD12_ERRST_REG0  = SD0_ADDR + 0x0000003C; //   8    ro       0x00000000    Auto CMD12 error status register
const uintptr_t SD_CAPABILITIES_REG0      = SD0_ADDR + 0x00000040; //  31    ro       0x69EC0080    Capabilities register
const uintptr_t SD_MAX_CURR_CAP_REG0      = SD0_ADDR + 0x00000048; //  24    ro       0x00000001    Maximum current capabilities register
const uintptr_t SD_FORCE_EVENT_REG0       = SD0_ADDR + 0x00000050; //  32    mixed    0x00000000    Force event register for Auto CMD12 error status
const uintptr_t SD_ADMA_ERR_STS_REG0      = SD0_ADDR + 0x00000054; //   3    mixed    0x00000000    ADMA error status register
const uintptr_t SD_ADMA_SYS_ADDR_REG0     = SD0_ADDR + 0x00000058; //  32    rw       0x00000000    ADMA system address register
const uintptr_t SD_BOOT_TOUT_CTRL_REG0    = SD0_ADDR + 0x00000060; //  32    rw       0x00000000    Boot Timeout control register
const uintptr_t SD_DEBUG_SELECTION_REG0   = SD0_ADDR + 0x00000064; //   1    wo       0x00000000    Debug Selection Register
const uintptr_t SD_SPI_INT_SUPPORT_REG0   = SD0_ADDR + 0x000000F0; //   8    rw       0x00000000    SPI interrupt support register
const uintptr_t SD_SLOT_INT_STS_HCV_REG0  = SD0_ADDR + 0x000000FC; //  32    ro       0x89010000    Slot interrupt status register and Host controller version register
//------------------------------------------------------------------------------
//
//    SDIO1 MMRs
//
//              Name                        Address                  Width   Type     Reset Value   Description
const uintptr_t SD_SDMA_ADDR_REG1         = SD1_ADDR + 0x00000000; //  32    rw       0x00000000    System DMA Address Register
const uintptr_t SD_BLOCK_SIZE_COUNT_REG1  = SD1_ADDR + 0x00000004; //  32    mixed    0x00000000    Block Size
const uintptr_t SD_ARGUMENT_REG1          = SD1_ADDR + 0x00000008; //  32    rw       0x00000000    Argument register
const uintptr_t SD_TRANSFER_MODE_CMD_REG1 = SD1_ADDR + 0x0000000C; //  32    mixed    0x00000000    Transfer Mode
const uintptr_t SD_RESPONSE_REG01         = SD1_ADDR + 0x00000010; //  32    ro       0x00000000    Response register
const uintptr_t SD_RESPONSE_REG11         = SD1_ADDR + 0x00000014; //  32    ro       0x00000000    Response register
const uintptr_t SD_RESPONSE_REG21         = SD1_ADDR + 0x00000018; //  32    ro       0x00000000    Response register
const uintptr_t SD_RESPONSE_REG31         = SD1_ADDR + 0x0000001C; //  32    ro       0x00000000    Response register
const uintptr_t SD_BUFFER_DATA_PORT_REG1  = SD1_ADDR + 0x00000020; //  32    rw       0x00000000    Buffer data port register
const uintptr_t SD_PRESENT_STATE_REG1     = SD1_ADDR + 0x00000024; //  25    ro       0x01F20000    Present State register
const uintptr_t SD_HS_PWR_BGAP_WKUP_REG1  = SD1_ADDR + 0x00000028; //  32    mixed    0x00000000    Host
const uintptr_t SD_CLK_TOUT_SWRST_REG1    = SD1_ADDR + 0x0000002C; //  27    mixed    0x00000000    Clock
const uintptr_t SD_INT_STS_REG1           = SD1_ADDR + 0x00000030; //  30    mixed    0x00000000    Normal
const uintptr_t SD_INT_STS_EN_REG1        = SD1_ADDR + 0x00000034; //  30    mixed    0x00000000    Normal
const uintptr_t SD_INT_EN_REG1            = SD1_ADDR + 0x00000038; //  30    mixed    0x00000000    Normal
const uintptr_t SD_AUTO_CMD12_ERRST_REG1  = SD1_ADDR + 0x0000003C; //   8    ro       0x00000000    Auto CMD12 error status register
const uintptr_t SD_CAPABILITIES_REG1      = SD1_ADDR + 0x00000040; //  31    ro       0x69EC0080    Capabilities register
const uintptr_t SD_MAX_CURR_CAP_REG1      = SD1_ADDR + 0x00000048; //  24    ro       0x00000001    Maximum current capabilities register
const uintptr_t SD_FORCE_EVENT_REG1       = SD1_ADDR + 0x00000050; //  32    mixed    0x00000000    Force event register for Auto CMD12 error status
const uintptr_t SD_ADMA_ERR_STS_REG1      = SD1_ADDR + 0x00000054; //   3    mixed    0x00000000    ADMA error status register
const uintptr_t SD_ADMA_SYS_ADDR_REG1     = SD1_ADDR + 0x00000058; //  32    rw       0x00000000    ADMA system address register
const uintptr_t SD_BOOT_TOUT_CTRL_REG1    = SD1_ADDR + 0x00000060; //  32    rw       0x00000000    Boot Timeout control register
const uintptr_t SD_DEBUG_SELECTION_REG1   = SD1_ADDR + 0x00000064; //   1    wo       0x00000000    Debug Selection Register
const uintptr_t SD_SPI_INT_SUPPORT_REG1   = SD1_ADDR + 0x000000F0; //   8    rw       0x00000000    SPI interrupt support register
const uintptr_t SD_SLOT_INT_STS_HCV_REG1  = SD1_ADDR + 0x000000FC; //  32    ro       0x89010000    Slot interrupt status register and Host controller version register
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (SD) SDMA_ADDR
//
// Name                     SD_SDMA_ADDR_REG
// Relative Address         0x00000000
// Absolute Address         sd0: 0xE0100000
//                          sd1: 0xE0101000
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              System DMA Address Register
//
// Register SD_SDMA_ADDR_REG Details
//         This register contains the system memory address for a DMA transfer. When the Host Controller (HC)
//         stops a DMA transfer, this register shall point to the system address of the next contiguous data position.
//         It can be accessed only if no transaction is executing (i.e. after a transaction has stopped). Read operations
//         during transfer return an invalid value. The Host Driver (HD) shall initialize this register before starting a
//         DMA transaction. After DMA has stopped, the next system address of the next contiguous data position
//         can be read from this register. The DMA transfer waits at every boundary specified by the Host DMA
//         Buffer Size in the Block Size register. The Host Controller generates DMA Interrupt to request to update
//         this register. The HD sets the next system address of the next data position to this register. When most
//         upper byte of this register (003h) is written, the HC restart the DMA transfer. When restarting DMA by the
//         resume command or by setting Continue Request in the Block Gap Control register, the HC shall start at
//         the next contiguous address stored here in the System Address register
//
                                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t SD_SDMA_SYSTEM_ADDRESS_MASK = 0xFFFFFFFF;    // Watchdog enable - if set, the watchdog is enabled
const uintptr_t SD_SDMA_SYSTEM_ADDRESS_BPOS = 0;             // and can generate any signals that are enabled.


//------------------------------------------------------------------------------
//
// Register (SD) BLOCK_SIZE_COUNT
//
// Name                     SD_BLOCK_SIZE_COUNT_REG
// Relative Address         0x00000004
// Absolute Address         sd0: 0xE0100004
//                          sd1: 0xE0101004
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Block size register
//                          Block count register
//
// Register SD_BLOCK_SIZE_COUNT_REG Details
//
                                                                           // Properties: Bits: 31:16, Type: rw, Reset Value: 0x0
const uintptr_t SD_BLOCKS_COUNT_FOR_CURRENT_TRANSFER_MASK = 0xFFFF0000;    // This register is enabled when Block Count Enable
const uintptr_t SD_BLOCKS_COUNT_FOR_CURRENT_TRANSFER_BPOS = 16;            // in the Transfer
                                                                           // Mode register is set to 1 and is valid only for
                                                                           // multiple block transfers. The HC decrements the
                                                                           // block count after each block transfer and stops
                                                                           // when the count reaches zero. It can be accessed
                                                                           // only if no transaction is
                                                                           // executing (i.e. after a transaction has stopped).
                                                                           // Read operations
                                                                           // during transfer return an invalid value and write
                                                                           // operations shall
                                                                           // be ignored. When saving transfer context as a
                                                                           // result of Suspend command, the number of blocks
                                                                           // yet to be transferred can be determined
                                                                           // by reading this register. When restoring transfer
                                                                           // context prior to
                                                                           // issuing a Resume command, the HD shall restore
                                                                           // the previously
                                                                           // save block count.
                                                                           // 0000h - Stop Count
                                                                           // 0001h - 1 block
                                                                           // 0002h - 2 blocks
                                                                           // --- ---
                                                                           // FFFFh - 65535 blocks

// RESERVED                                                                   Properties: Bit: 15, Type: ro, Reset Value: 0x0

                                                                           // Properties: Bits: 14:12, Type: rw, Reset Value: 0x0
const uintptr_t SD_HOST_SDMA_BUFFER_SIZE_MASK             = 0x00007000;    // To perform long DMA transfer, the System
const uintptr_t SD_HOST_SDMA_BUFFER_SIZE_BPOS             = 12;            // Address register shall be updated at every system
                                                                           // boundary during a DMA transfer. These bits
                                                                           // specify the size of contiguous buffer in the system
                                                                           // memory. The DMA transfer shall wait at every
                                                                           // boundary specified by these fields and the HC
                                                                           // generates the DMA Interrupt to request the HD to
                                                                           // update the System Address register.
                                                                           // These bits shall support when the DMA Support
                                                                           // in the Capabilities register is set to 1 and this
                                                                           // function is active when the DMA Enable in the
                                                                           // Transfer Mode register is set to 1.
                                                                           // 000b - 4KB(Detects A11 Carry out)
                                                                           // 001b - 8KB(Detects A12 Carry out)
                                                                           // 010b - 16KB(Detects A13 Carry out)
                                                                           // 011b - 32KB(Detects A14 Carry out)
                                                                           // 100b - 64KB(Detects A15 Carry out)
                                                                           // 101b -128KB(Detects A16 Carry out)
                                                                           // 110b - 256KB(Detects A17 Carry out)
                                                                           // 111b - 512KB(Detects A18 Carry out)

                                                                           // Properties: Bits: 11:0, Type: rw, Reset Value: 0x0
const uintptr_t SD_TRANSFER_BLOCK_SIZE_MASK               = 0x00000FFF;    // This register specifies the block size for block data
const uintptr_t SD_TRANSFER_BLOCK_SIZE_BPOS               = 0;             // transfers for CMD17, CMD18, CMD24, CMD25,
                                                                           // and CMD53. It can be accessed only if no
                                                                           // transaction is executing (i.e. after a transaction has
                                                                           // stopped). Read operations during transfer return
                                                                           // an invalid value and write operations shall be
                                                                           // ignored.
                                                                           // 0000h - No Data Transfer
                                                                           // 0001h - 1 Byte
                                                                           // 0002h - 2 Bytes
                                                                           // 0003h - 3 Bytes
                                                                           // 0004h - 4 Bytes
                                                                           // --- ---
                                                                           // 01FFh - 511 Bytes
                                                                           // 0200h - 512 Bytes
                                                                           // --- ---
                                                                           // 0800h - 2048 Bytes


//------------------------------------------------------------------------------
//
// Register (SD) ARGUMENT
//
// Name                    SD_ARGUMENT_REG
// Relative Address        0x00000008
// Absolute Address        sd0: 0xE0100008
//                         sd1: 0xE0101008
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Argument register
//
// Register SD_ARGUMENT_REG Details
//
                                                          // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_ARGUMENT_MASK = 0xFFFFFFFF;    // The SD Command Argument is specified as bit
const uintptr_t SD_COMMAND_ARGUMENT_BPOS = 0;             // 39-8 of Command-Format.


//------------------------------------------------------------------------------
//
// Register (SD) TRANSFER_MODE_CMD
//
// Name                    SD_TRANSFER_MODE_CMD_REG
// Relative Address        0x0000000C
// Absolute Address        sd0: 0xE010000C
//                         sd1: 0xE010100C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Transfer mode register
//                         Command register
//
// Register SD_TRANSFER_MODE_CMD_REG Details
//
// RESERVED                                                                Properties: Bits: 31:30, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bits: 29:24, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_INDEX_MASK                  = 0x3F000000;    // This bit shall be set to the command number
const uintptr_t SD_COMMAND_INDEX_BPOS                  = 24;            // (CMD0-63, ACMD0-63).

                                                                        // Properties: Bits: 23:22, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_TYPE_MASK                   = 0x00C00000;    // There are three types of special commands.
const uintptr_t SD_COMMAND_TYPE_BPOS                   = 22;            // Suspend, Resume and Abort. These bits shall bet
                                                                        // set to 00b for all other commands. Suspend
                                                                        // Command If the Suspend command succeeds, the
                                                                        // HC shall assume the SD Bus has been released
                                                                        // and that it is possible to issue the next command
                                                                        // which uses the DAT line. The HC shall de-assert
                                                                        // Read Wait for read transactions and stop checking
                                                                        // busy for write transactions. The Interrupt cycle
                                                                        // shall start, in 4-bit mode. If the Suspend command
                                                                        // fails, the HC shall maintain its current state. and
                                                                        // the HD shall restart the transfer by setting
                                                                        // Continue Request in the Block Gap Control
                                                                        // Register. Resume Command The HD re-starts the
                                                                        // data transfer by restoring the registers in the
                                                                        // range of 000-00Dh. The HC shall check for busy
                                                                        // before starting write transfers. Abort Command If
                                                                        // this command is set when executing a read
                                                                        // transfer, the HC shall stop reads to the buffer. If
                                                                        // this command is set when executing a write
                                                                        // transfer, the HC shall stop driving the DAT line.
                                                                        // After issuing the Abort command, the HD should
                                                                        // issue a software reset
                                                                        // 00b - Normal
                                                                        // 01b - Suspend
                                                                        // 10b - Resume
                                                                        // 11b - Abort

                                                                        // Properties: Bit: 21, Type: rw, Reset Value: 0x0
const uintptr_t SD_DATA_PRESENT_SELECT_MASK            = 0x00200000;    // This bit is set to 1 to indicate that data is present
const uintptr_t SD_DATA_PRESENT_SELECT_BPOS            = 21;            // and shall be transferred using the DAT line. If is
                                                                        // set to 0 for the following:
                                                                        // 1. Commands using only CMD line (ex. CMD52)
                                                                        // 2. Commands with no data transfer but using
                                                                        // busy signal on DAT[0]
                                                                        // line (R1b or R5b ex. CMD38)
                                                                        // 3. Resume Command
                                                                        // 0 - No Data Present
                                                                        // 1 - Data Present

                                                                        // Properties: Bit: 20, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_INDEX_CHECK_ENABLE_MASK     = 0x00100000;    // If this bit is set to 1, the HC shall check the index
const uintptr_t SD_COMMAND_INDEX_CHECK_ENABLE_BPOS     = 20;            // field in the response to see if it has the same value
                                                                        // as the command index. If it is not, it is reported as
                                                                        // a Command Index Error. If this bit is set to 0, the
                                                                        // Index field is not checked.
                                                                        // 0 - Disable
                                                                        // 1 - Enable

                                                                        // Properties: Bit: 19, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_CRC_CHECK_ENABLE_MASK       = 0x00080000;    // If this bit is set to 1, the HC shall check the CRC
const uintptr_t SD_COMMAND_CRC_CHECK_ENABLE_BPOS       = 19;            // field in the response. If an error is detected, it is
                                                                        // reported as a Command CRC Error. If this bit is
                                                                        // set to 0, the CRC field is not checked.
                                                                        // 0 - Disable
                                                                        // 1 - Enable

// RESERVED                                                                Properties: Bit: 18, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t SD_RESPONSE_TYPE_SELECT_MASK           = 0x00030000;    // Response Type Select
const uintptr_t SD_RESPONSE_TYPE_SELECT_BPOS           = 16;            // 00 - No Response
                                                                        // 01 - Response length 136
                                                                        // 10 - Response length 48
                                                                        // 11 - Response length 48 check
                                                                        // Busy after response

// RESERVED                                                                Properties: Bits: 15:6, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t SD_MULTI_SINGLE_BLOCK_SELECT_MASK      = 0x00000020;    // This bit enables multiple block DAT line data
const uintptr_t SD_MULTI_SINGLE_BLOCK_SELECT_BPOS      = 5;             // transfers.
                                                                        // 0 - Single Block
                                                                        // 1 - Multiple Block

                                                                        // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t SD_DATA_TRANSFER_DIRECTION_SELECT_MASK = 0x00000010;    // This bit defines the direction of DAT line data
const uintptr_t SD_DATA_TRANSFER_DIRECTION_SELECT_BPOS = 4;             // transfers.
                                                                        // 0 - Write (Host to Card)
                                                                        // 1 - Read (Card to Host)

// RESERVED                                                                Properties: Bit: 3, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t SD_AUTO_CMD12_ENABLE_MASK              = 0x00000004;    // Multiple block transfers for memory require
const uintptr_t SD_AUTO_CMD12_ENABLE_BPOS              = 2;             // CMD12 to stop the transaction. When this bit is
                                                                        // set to 1, the HC shall issue CMD12 automatically
                                                                        // when last block transfer is completed. The HD
                                                                        // shall not set this bit to issue commands that do not
                                                                        // require CMD12 to stop data transfer.
                                                                        // 0 - Disable
                                                                        // 1 - Enable

                                                                        // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t SD_BLOCK_COUNT_ENABLE_MASK             = 0x00000002;    // This bit is used to enable the Block count register,
const uintptr_t SD_BLOCK_COUNT_ENABLE_BPOS             = 1;             // which is only relevant for multiple block
                                                                        // transfers. When this bit is 0, the Block Count
                                                                        // register is disabled, which is useful in executing
                                                                        // an infinite transfer.
                                                                        // 0 - Disable
                                                                        // 1 - Enable

                                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t SD_DMA_ENABLE_MASK                     = 0x00000001;    // DMA can be enabled only if DMA Support bit in
const uintptr_t SD_DMA_ENABLE_BPOS                     = 0;             // the Capabilities register is set. If this bit is set to 1,
                                                                        // a DMA operation shall begin when the HD writes
                                                                        // to the upper byte of Command register (00Fh).
                                                                        // 0 - Disable
                                                                        // 1 - Enable


//------------------------------------------------------------------------------
//
// Register (SD) RESPONSE
//
// Name                      SD_RESPONSE_REG
// Relative Address          0x00000010
// Absolute Address          sd0: 0xE0100010
//                           sd1: 0xE0101010
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Response register
//         Note: This register is the first in an array of 4 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//         Name                        Address
// Response0                 0xe0100010
// Response1                 0xe0100014
// Response2                 0xe0100018
// Response3                 0xe010001c
//
// Register Response0 to Response3 Details
//
                                                          // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t SD_COMMAND_RESPONSE_MASK = 0xFFFFFFFF;    // command responses registers
const uintptr_t SD_COMMAND_RESPONSE_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (SD) BUFFER_DATA_PORT
//
// Name                      SD_BUFFER_DATA_PORT_REG
// Relative Address          0x00000020
// Absolute Address          sd0: 0xE0100020
//                           sd1: 0xE0101020
// Width                     32 bits
// Access Type               rw
// Reset Value               0x00000000
// Description               Buffer data port register
//
// Register SD_RESPONSE_REG Details
//
                                                          // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t SD_BUFFER_DATA_PORT_MASK = 0xFFFFFFFF;    // The Host Controller Buffer can be accessed
const uintptr_t SD_BUFFER_DATA_PORT_BPOS = 0;             // through this 32-bit Data Port Register.


//------------------------------------------------------------------------------
//
// Register (SD) PRESENT_STATE
//
// Name                     SD_PRESENT_STATE_REG
// Relative Address         0x00000024
// Absolute Address         sd0: 0xE0100024
//                          sd1: 0xE0101024
// Width                    25 bits
// Access Type              ro
// Reset Value              0x01F20000
// Description              Present State register
//         Register SD_PRESENT_STATE_REG Details
//       Field Name          Bits     Type     Reset Value                        Description
// CMD_Line_Signal_Lev      24        ro      0x1            This status is used to check CMD line level to
// el                                                        recover from errors, and for debugging.
// DAT_Bit3_Bit0_Line_Si 23:20        ro      0xF            This status is used to check DAT line level to
// gnal_Level                                                recover from errors, and for debugging. This is
//                                                           especially useful in detecting the busy signal level
//                                                           from DAT[0].
//                                                           D23 - DAT[3]
//                                                           D22 - DAT[2]
//                                                           D21 - DAT[1]
//                                                           D20 - DAT[0]
// Write_Protect_Switch_    19        ro      0x0            The Write Protect Switch is supported for
// Pin_Level                                                 memory and combo cards. This bit reflects the
//                                                           SDWP# pin.
//                                                           0 - Write protected (SDWP# = 0)
//                                                           1 - Write enabled (SDWP# = 1)
// Card_Detect_Pin_Level 18           ro      0x0            This bit reflects the inverse value of the SDCD#
//                                                           pin.
//                                                           0 - No Card present (SDCD# = 1)
//                                                           1 - Card present (SDCD# = 0)
// Card_State_Stable        17        ro      0x1            This bit is used for testing. If it is 0, the Card
//                                                           Detect Pin Level is not stable. If this bit is set to 1,
//                                                           it means the Card Detect Pin Level is stable. The
//                                                           Software Reset For All in the Software Reset
//                                                           Register shall not affect this bit.
//                                                           0 - Reset of Debouncing
//                                                           1 - No Card or Inserted
//       Field Name         Bits   Type    Reset Value                        Description
// Card_Inserted           16      ro     0x0            This bit indicates whether a card has been
//                                                       inserted. Changing from 0 to 1 generates a Card
//                                                       Insertion interrupt in the Normal Interrupt Status
//                                                       register and changing from 1 to 0 generates a Card
//                                                       Removal Interrupt in the Normal Interrupt Status
//                                                       register. The Software Reset For All in the
//                                                       Software Reset register shall not affect this bit. If a
//                                                       Card is removed while its power is on and its
//                                                       clock is oscillating, the HC shall clear SD Bus
//                                                       Power in the Power Control register and SD Clock
//                                                       Enable in the Clock control register. In addition
//                                                       the HD should clear the HC by the Software Reset
//                                                       For All in Software register. The card detect is
//                                                       active regardless of the SD Bus Power.
//                                                       0 - Reset or Debouncing or No Card
//                                                       1 - Card Inserted
// reserved                15:12   ro     0x0            Reserved
// Buffer_Read_Enable      11      ro     0x0            This status is used for non-DMA read transfers.
//                                                       This read only flag indicates that valid data exists
//                                                       in the host side buffer status. If this bit is 1,
//                                                       readable data exists in the buffer. A change of this
//                                                       bit from 1 to 0 occurs when all the block data is
//                                                       read from the buffer. A change of this bit from 0 to
//                                                       1 occurs when all the block data is ready in the
//                                                       buffer and generates the Buffer Read Ready
//                                                       Interrupt.
//                                                       0 - Read Disable
//                                                       1 - Read Enable.
// Buffer_Write_Enable     10      ro     0x0            This status is used for non-DMA write transfers.
//                                                       This read only flag indicates if space is available
//                                                       for write data. If this bit is 1, data can be written to
//                                                       the buffer. A change of this bit from 1 to 0 occurs
//                                                       when all the block data is written to the buffer. A
//                                                       change of this bit from 0 to 1 occurs when top of
//                                                       block data can be written to the buffer and
//                                                       generates the Buffer Write Ready Interrupt.
//                                                       0 - Write Disable
//                                                       1 - Write Enable.
//       Field Name         Bits   Type    Reset Value                       Description
// Read_Transfer_Active    9       ro     0x0            This status is used for detecting completion of a
//                                                       read transfer.
//                                                       This bit is set to 1 for either of the following
//                                                       conditions:
//                                                       1. After the end bit of the read command
//                                                       2. When writing a 1 to continue Request in the
//                                                       Block Gap Control register to restart a read
//                                                       transfer
//                                                       This bit is cleared to 0 for either of the following
//                                                       conditions:
//                                                       1. When the last data block as specified by block
//                                                       length is transferred to the system.
//                                                       2. When all valid data blocks have been
//                                                       transferred to the system and no current block
//                                                       transfers are being sent as a result of the Stop At
//                                                       Block Gap Request set to 1. A transfer complete
//                                                       interrupt is generated when this bit changes to 0.
//                                                       1 - Transferring data
//                                                       0 - No valid data
// Write_Transfer_Active   8       ro     0x0            This status indicates a write transfer is active. If
//                                                       this bit is 0, it means no valid write data exists in
//                                                       the HC. This bit is set in either of the following
//                                                       cases:
//                                                       1. After the end bit of the write command.
//                                                       2. When writing a 1 to Continue Request in the
//                                                       Block Gap Control register to restart a write
//                                                       transfer.
//                                                       This bit is cleared in either of the following cases:
//                                                       1. After getting the CRC status of the last data
//                                                       block as specified by the transfer count (Single or
//                                                       Multiple)
//                                                       2. After getting a CRC status of any block where
//                                                       data transmission is about to be stopped by a Stop
//                                                       At Block Gap Request.
//                                                       During a write transaction, a Block Gap Event
//                                                       interrupt is generated when this bit is changed to
//                                                       0, as a result of the Stop At Block Gap Request
//                                                       being set. This status is useful for the HD in
//                                                       determining when to issue commands during
//                                                       write busy.
//                                                       1 - transferring data
//                                                       0 - No valid data
// reserved                7:3     ro     0x0            Reserved
// DAT_Line_Active         2       ro     0x0            This bit indicates whether one of the DAT line on
//                                                       SD bus is in use.
//                                                       1 - DAT line active
//                                                       0 - DAT line inactive
//       Field Name         Bits     Type    Reset Value                       Description
// Command_Inhibit_DA      1         ro      0x0           This status bit is generated if either the DAT Line
// T                                                       Active or the Read transfer Active is set to 1. If this
//                                                         bit is 0, it indicates the HC can issue the next SD
//                                                         command. Commands with busy signal belong to
//                                                         Command Inhibit (DAT) (ex. R1b, R5b type).
//                                                         Changing from 1 to 0 generates a Transfer
//                                                         Complete interrupt in the Normal interrupt status
//                                                         register.
//                                                         Note: The SD Host Driver can save registers in the
//                                                         range of 000-00Dh for a suspend transaction after
//                                                         this bit has changed from 1 to 0.
//                                                         1 - cannot issue command which uses the DAT
//                                                         line
//                                                         0 - Can issue command which uses the DAT line
// Command_Inhibit_CM      0         ro      0x0           If this bit is 0, it indicates the CMD line is not in
// D                                                       use and the HC can issue a SD command using
//                                                         the CMD line. This bit is set immediately after the
//                                                         Command register (00Fh) is written. This bit is
//                                                         cleared when the command response is received.
//                                                         Even if the Command Inhibit (DAT) is set to 1,
//                                                         Commands using only the CMD line can be
//                                                         issued if this bit is 0. Changing from 1 to 0
//                                                         generates a Command complete interrupt in the
//                                                         Normal Interrupt Status register. If the HC cannot
//                                                         issue the command because of a command
//                                                         conflict error or because of Command Not Issued
//                                                         By Auto CMD12 Error, this bit shall remain 1 and
//                                                         the Command Complete is not set. Status issuing
//                                                         Auto CMD12 is not read from this bit. Note: The
//                                                         SD host controller requires couple of clocks to
//                                                         update this register bit after the command is
//                                                         posted to command register.
//                    Register (SD*) HS_PWR_BGAP_WKUP
// Name                    SD_HS_PWR_BGAP_WKUP_REG
// Relative Address        0x00000028
// Absolute Address        sd0: 0xE0100028
//                         sd1: 0xE0101028
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Host control register
//                         Power control register
//                         Block gap control register
//                         Wake-up control register
//
// Register Host_control_Power_control_Block_Gap_Control_Wakeup_control Details
//
// RESERVED                                                                          Properties: Bits: 31:27, Type: ro, Reset Value: 0x0

                                                                                  // Properties: Bit: 26, Type: rw, Reset Value: 0x0
const uintptr_t SD_WAKEUP_EVENT_ENABLE_ON_SD_CARD_REMOVAL_MASK   = 0x04000000;    // This bit enables wakeup event via
const uintptr_t SD_WAKEUP_EVENT_ENABLE_ON_SD_CARD_REMOVAL_BPOS   = 26;            // Card Removal assertion in the
                                                                                  // Normal Interrupt Status register.
                                                                                  // FN_WUS (Wake up Support) in
                                                                                  // CIS does not affect this bit.
                                                                                  // 1 - Enable
                                                                                  // 0 - Disable

                                                                                  // Properties: Bit: 25, Type: rw, Reset Value: 0x0
const uintptr_t SD_WAKEUP_EVENT_ENABLE_ON_SD_CARD_INSERTION_MASK = 0x02000000;    // This bit enables wakeup event via Card Insertion
const uintptr_t SD_WAKEUP_EVENT_ENABLE_ON_SD_CARD_INSERTION_BPOS = 25;            // assertion in the Normal Interrupt Status register.
                                                                                  // FN_WUS (Wake up Support) in CIS does not
                                                                                  // affect this bit.
                                                                                  // 1 - Enable
                                                                                  // 0 - Disable

                                                                                  // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t SD_WAKEUP_EVENT_ENABLE_ON_CARD_INTERRUPT_MASK    = 0x01000000;    // This bit enables wakeup event via
const uintptr_t SD_WAKEUP_EVENT_ENABLE_ON_CARD_INTERRUPT_BPOS    = 24;            // Card Interrupt assertion in the
                                                                                  // Normal Interrupt Status register.
                                                                                  // This bit can be set to 1 if FN_WUS
                                                                                  // (Wake Up Support) in CIS is set to
                                                                                  // 1.
                                                                                  // 1 - Enable
                                                                                  // 0 - Disable

// RESERVED                                                                          Properties: Bits: 23:20, Type: ro, Reset Value: 0x0

                                                                                  // Properties: Bit: 19, Type: rw, Reset Value: 0x0
const uintptr_t SD_INTERRUPT_AT_BLOCK_GAP_MASK                   = 0x00080000;    // This bit is valid only in 4-bit mode of the SDIO
const uintptr_t SD_INTERRUPT_AT_BLOCK_GAP_BPOS                   = 19;            // card and selects a sample point in the interrupt
                                                                                  // cycle. Setting to 1 enables interrupt detection at
                                                                                  // the block gap for a multiple block transfer. If the
                                                                                  // SD card cannot signal an interrupt during a
                                                                                  // multiple
                                                                                  // block transfer, this bit should be set to 0.
                                                                                  // When the HD detects an SD card insertion, it shall
                                                                                  // set this bit according to the CCCR of the SDIO
                                                                                  // card.

                                                                                  // Properties: Bit: 18, Type: rw, Reset Value: 0x0
const uintptr_t SD_READ_WAIT_CONTROL_MASK                        = 0x00040000;    // The read wait function is optional for SDIO cards.
const uintptr_t SD_READ_WAIT_CONTROL_BPOS                        = 18;            // If the card supports read wait, set this bit to
                                                                                  // enable use of the read wait protocol to stop read
                                                                                  // data using DAT[2] line. Otherwise the HC has to
                                                                                  // stop the SD clock to hold read data, which
                                                                                  // restricts commands generation. When the HD
                                                                                  // detects an SD card insertion, it shall set this bit
                                                                                  // according to the CCCR of the SDIO card. If the
                                                                                  // card does not support read wait, this bit shall
                                                                                  // never be set to 1 otherwise DAT line conflict may
                                                                                  // occur. If this bit is set to 0, Suspend / Resume
                                                                                  // cannot be supported
                                                                                  // 1 - Enable Read Wait Control
                                                                                  // 0 - Disable Read Wait Control

                                                                                  // Properties: Bit: 17, Type: rw, Reset Value: 0x0
const uintptr_t SD_CONTINUE_REQUEST_MASK                         = 0x00020000;    // This bit is used to restart a transaction which was
const uintptr_t SD_CONTINUE_REQUEST_BPOS                         = 17;            // stopped using the Stop At Block Gap Request. To
                                                                                  // cancel stop at the block gap, set Stop At block
                                                                                  // Gap Request to 0 and set this bit to restart the
                                                                                  // transfer.
                                                                                  // The HC automatically clears this bit in either of
                                                                                  // the following cases:
                                                                                  // 1) In the case of a read transaction, the DAT Line
                                                                                  // Active changes from 0 to 1 as a read transaction
                                                                                  // restarts.
                                                                                  // 2) In the case of a write transaction, the Write
                                                                                  // transfer active changes from 0 to 1 as the write
                                                                                  // transaction restarts.
                                                                                  // Therefore it is not necessary for Host driver to set
                                                                                  // this bit to 0. If Stop At Block Gap Request is set to
                                                                                  // 1, any write to this bit is ignored.
                                                                                  // 1 - Restart
                                                                                  // 0 - Ignored

                                                                                  // Properties: Bit: 16, Type: rw, Reset Value: 0x0
const uintptr_t SD_STOP_AT_BLOCK_GAP_REQUEST_MASK                = 0x00010000;    // This bit is used to stop executing a transaction at
const uintptr_t SD_STOP_AT_BLOCK_GAP_REQUEST_BPOS                = 16;            // the next block gap for non- DMA,SDMA and
                                                                                  // ADMA transfers. Until the transfer complete is set
                                                                                  // to 1, indicating a transfer completion the HD shall
                                                                                  // leave this bit set to 1. Clearing both the Stop At
                                                                                  // Block Gap Request and Continue Request shall
                                                                                  // not cause the transaction to restart. Read Wait is
                                                                                  // used to stop the read transaction at the block gap.
                                                                                  // The HC shall honor Stop At Block Gap Request
                                                                                  // for write transfers, but for read transfers it
                                                                                  // requires that the SD card support Read Wait.
                                                                                  // Therefore the HD shall not set this bit during read
                                                                                  // transfers unless the SD card supports Read Wait
                                                                                  // and has set Read Wait Control to 1. In case of write
                                                                                  // transfers in which the HD writes data to the
                                                                                  // Buffer Data Port register, the HD shall set this bit
                                                                                  // after all block data is written. If this bit is set to 1,
                                                                                  // the HD shall not write data to Buffer data port
                                                                                  // register. This bit affects Read Transfer Active,
                                                                                  // Write Transfer Active, DAT line active and
                                                                                  // Command Inhibit (DAT) in the Present State
                                                                                  // register.
                                                                                  // 1 - Stop
                                                                                  // 0 - Transfer

// RESERVED                                                                          Properties: Bits: 15:12, Type: ro, Reset Value: 0x0

                                                                                  // Properties: Bits: 11:9, Type: rw, Reset Value: 0x0
const uintptr_t SD_SD_BUS_VOLTAGE_SELECT_MASK                    = 0x00000E00;    // By setting these bits, the HD selects the voltage
const uintptr_t SD_SD_BUS_VOLTAGE_SELECT_BPOS                    = 9;             // level for the SD card. Before setting this register,
                                                                                  // the HD shall check the voltage support bits
                                                                                  // in the capabilities register. If an unsupported
                                                                                  // voltage is selected, the
                                                                                  // Host System shall not supply SD bus voltage
                                                                                  // 111b - 3.3 Flattop.)
                                                                                  // 110b - 3.0 V(Typ.)
                                                                                  // 101b - 1.8 V(Typ.)
                                                                                  // 100b - 000b - Reserved

                                                                                  // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t SD_SD_BUS_POWER_MASK                             = 0x00000100;    // Before setting this bit, the SD host driver shall set
const uintptr_t SD_SD_BUS_POWER_BPOS                             = 8;             // SD Bus Voltage Select. If the HC detects the No
                                                                                  // Card State, this bit shall be cleared.
                                                                                  // 1 - Power on
                                                                                  // 0 - Power off

                                                                                  // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t SD_CARD_DETECT_SIGNAL_DETETCTION_MASK            = 0x00000080;    // This bit selects source for card detection.
const uintptr_t SD_CARD_DETECT_SIGNAL_DETETCTION_BPOS            = 7;             // 1- The card detect test level is selected
                                                                                  // 0 -SDCD# is selected (for normal use)

                                                                                  // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t SD_CARD_DETECT_TEST_LEVEL_MASK                   = 0x00000040;    // This bit is enabled while the Card Detect Signal
const uintptr_t SD_CARD_DETECT_TEST_LEVEL_BPOS                   = 6;             // Selection is set to 1 and it
                                                                                  // indicates card inserted or not. Generates (card ins
                                                                                  // or card removal) interrupt when the normal int sts
                                                                                  // enable bit is set.
                                                                                  // 1 - Card Inserted
                                                                                  // 0 - No Card

// RESERVED                                                                          Properties: Bit: 5, Type: ro, Reset Value: 0x0

                                                                                  // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
const uintptr_t SD_DMA_SELECT_MASK                               = 0x00000018;    // One of supported DMA modes can be selected.
const uintptr_t SD_DMA_SELECT_BPOS                               = 3;             // The host driver shall check support of DMA
                                                                                  // modes by referring the Capabilities register.
                                                                                  // 00 - SDMA is selected
                                                                                  // 01 - 32-bit Address ADMA1 is selected
                                                                                  // 10 -32-bit Address ADMA2 is selected
                                                                                  // 11 - 64-bit Address ADMA2 is selected

                                                                                  // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t SD_HIGH_SPEED_ENABLE_MASK                        = 0x00000004;    // This bit is optional. Before setting this bit, the HD
const uintptr_t SD_HIGH_SPEED_ENABLE_BPOS                        = 2;             // shall check the High Speed Support in the
                                                                                  // capabilities register. If this bit is set to 0 (default),
                                                                                  // the HC outputs CMD line and DAT lines at the
                                                                                  // falling edge of the SD clock (up to 25 MHz/20
                                                                                  // MHz for MMC). If this bit is set to 1, the HC
                                                                                  // outputs CMD line and DAT lines at the rising
                                                                                  // edge of the SD clock (up to 50 MHz for SD/52
                                                                                  // MHz for MMC)
                                                                                  // 1 - High Speed Mode
                                                                                  // 0 - Normal Speed Mode

                                                                                  // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t SD_DATA_TRANSFER_WIDTH_SD1_OR_SD4_MASK           = 0x00000002;    // This bit selects the data width of the HC. The HD
const uintptr_t SD_DATA_TRANSFER_WIDTH_SD1_OR_SD4_BPOS           = 1;             // shall select it to match the data width of the SD
                                                                                  // card.
                                                                                  // 1 - 4 bit mode
                                                                                  // 0 - 1 bit mode

                                                                                  // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t SD_LED_CONTROL_MASK                              = 0x00000001;    // This bit is used to caution the user not to remove
const uintptr_t SD_LED_CONTROL_BPOS                              = 0;             // the card while the SD card is being accessed. If the
                                                                                  // software is going to issue multiple SD commands,
                                                                                  // this bit can be set during all transactions. It is not
                                                                                  // necessary to change for each transaction.
                                                                                  // 1 - LED on
                                                                                  // 0 - LED off


//------------------------------------------------------------------------------
//
// Register (SD) CLK_TOUT_SWRST
//
// Name                    SD_CLK_TOUT_SWRST_REG
// Relative Address        0x0000002C
// Absolute Address        sd0: 0xE010002C
//                         sd1: 0xE010102C
// Width                   27 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Clock Control register
//                         Timeout control register
//                         Software reset register
//
// Register SD_CLK_TOUT_SWRST_REG Details
//
                                                                     // Properties: Bit: 26, Type: rw, Reset Value: 0x0
const uintptr_t SD_SOFTWARE_RESET_FOR_DAT_LINE_MASK = 0x04000000;    // Only part of data circuit is reset. The following
const uintptr_t SD_SOFTWARE_RESET_FOR_DAT_LINE_BPOS = 26;            // registers and bits are cleared by this bit:
                                                                     // Buffer Data Port Register
                                                                     // Buffer is cleared and Initialized.
                                                                     // Present State register
                                                                     // Buffer read Enable
                                                                     // Buffer write Enable
                                                                     // Read Transfer Active
                                                                     // Write Transfer Active
                                                                     // DAT Line Active
                                                                     // Command Inhibit (DAT)
                                                                     // Block Gap Control register
                                                                     // Continue Request
                                                                     // Stop At Block Gap Request
                                                                     // Normal Interrupt Status register
                                                                     // Buffer Read Ready
                                                                     // Buffer Write Ready
                                                                     // Block Gap Event
                                                                     // Transfer Complete
                                                                     // 1 - Reset
                                                                     // 0 - Work

                                                                     // Properties: Bit: 25, Type: rw, Reset Value: 0x0
const uintptr_t SD_SOFTWARE_RESET_FOR_CMD_LINE_MASK = 0x02000000;    // Only part of command circuit is reset. The
const uintptr_t SD_SOFTWARE_RESET_FOR_CMD_LINE_BPOS = 25;            // following registers and bits are cleared by this bit:
                                                                     // Present State register
                                                                     // Command Inhibit (CMD)
                                                                     // Normal Interrupt Status register
                                                                     // Command Complete
                                                                     // 1 - Reset
                                                                     // 0 - Work

                                                                     // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t SD_SOFTWARE_RESET_FOR_ALL_MASK      = 0x01000000;    // This reset affects the entire HC except for the card
const uintptr_t SD_SOFTWARE_RESET_FOR_ALL_BPOS      = 24;            // detection circuit. Register bits of type ROC, RW,
                                                                     // RW1C, RWAC are cleared to 0. During its
                                                                     // initialization, the HD shall set this bit to 1 to reset
                                                                     // the HC. The HC shall reset this bit to 0 when
                                                                     // capabilities registers are valid and the HD
                                                                     // can read them. Additional use of Software Reset
                                                                     // For All may not affect the value of the Capabilities
                                                                     // registers. If this bit is set to 1, the SD card shall
                                                                     // reset itself and must be re initialized by the HD.
                                                                     // 1 - Reset
                                                                     // 0 - Work

// RESERVED                                                             Properties: Bits: 23:20, Type: ro, Reset Value: 0x0

                                                                     // Properties: Bits: 19:16, Type: rw, Reset Value: 0x0
const uintptr_t SD_DATA_TIMEOUT_COUNTER_VALUE__MASK = 0x000F0000;    // This value determines the interval by which DAT
const uintptr_t SD_DATA_TIMEOUT_COUNTER_VALUE__BPOS = 16;            // line time-outs are detected. Refer to the Data
                                                                     // Timeout Error in the Error Interrupt Status
                                                                     // register for information on factors that dictate
                                                                     // Timeout generation. Timeout clock frequency will
                                                                     // be generated by dividing the sdclockTMCLK by
                                                                     // this value. When setting this register, prevent
                                                                     // inadvertent Timeout events by clearing the Data
                                                                     // Time-out Error Status Enable (in the Error
                                                                     // Interrupt Status Enable register)
                                                                     // 1111 - Reserved
                                                                     // 1110 - TMCLK * 2^27
                                                                     // ------------------------------
                                                                     // ------------------------------
                                                                     // 0001 - TMCLK * 2^14
                                                                     // 0000 - TMCLK * 2^13

                                                                     // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t SD_SDCLK_FREQUENCY_SELECT_MASK      = 0x0000FF00;    // This register is used to select the frequency of the
const uintptr_t SD_SDCLK_FREQUENCY_SELECT_BPOS      = 8;             // SDCLK pin. The frequency is not programmed
                                                                     // directly; rather this register holds the divisor of
                                                                     // the Base Clock Frequency For SD clock in the
                                                                     // capabilities register. Only the following settings
                                                                     // are allowed.
                                                                     // 80h - base clock divided by 256
                                                                     // 40h - base clock divided by 128
                                                                     // 20h - base clock divided by 64
                                                                     // 10h - base clock divided by 32
                                                                     // 08h - base clock divided by 16
                                                                     // 04h - base clock divided by 8
                                                                     // 02h - base clock divided by 4
                                                                     // 01h - base clock divided by 2
                                                                     // 00h - base clock(10MHz-63MHz)
                                                                     // Setting 00h specifies the highest frequency of the
                                                                     // SD Clock. When setting multiple bits, the most
                                                                     // significant bit is used as the divisor. But multiple
                                                                     // bits should not be set. The two default divider
                                                                     // values can be calculated by the frequency that is
                                                                     // defined by the Base Clock Frequency For SD
                                                                     // Clock in the Capabilities register.
                                                                     // 1) 25 MHz divider value
                                                                     // 2) 400 KHz divider value
                                                                     // The frequency of the SDCLK is set by the
                                                                     // following formula:
                                                                     // Clock Frequency = (Baseclock) / divisor.
                                                                     // Thus choose the smallest possible divisor which
                                                                     // results in a clock frequency that is less than or
                                                                     // equal to the target frequency.
                                                                     // Maximum Frequency for SD = 50Mhz (base clock)
                                                                     // Maximum Frequency for MMC = 52Mhz (base
                                                                     // clock)
                                                                     // Minimum Frequency = 195.3125Khz (50Mhz /
                                                                     // 256), same calc for MMC also

// RESERVED                                                             Properties: Bits: 7:3, Type: ro, Reset Value: 0x0

                                                                     // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t SD_SD_CLOCK_ENABLE_MASK             = 0x00000004;    // The HC shall stop SDCLK when writing this bit to
const uintptr_t SD_SD_CLOCK_ENABLE_BPOS             = 2;             // 0. SDCLK frequency Select can be changed when
                                                                     // this bit is 0. Then, the HC shall maintain the same
                                                                     // clock frequency until SDCLK is stopped (Stop at
                                                                     // SDCLK = 0). If the HC detects the No Card state,
                                                                     // this bit shall be cleared.
                                                                     // 1 - Enable
                                                                     // 0 - Disable

                                                                     // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t SD_INTERNAL_CLOCK_STABLE_MASK       = 0x00000002;    // This bit is set to 1 when SD clock is stable after
const uintptr_t SD_INTERNAL_CLOCK_STABLE_BPOS       = 1;             // writing to Internal Clock Enable in this register to
                                                                     // 1. The SD Host Driver shall wait to set SD Clock
                                                                     // Enable until this bit is set to 1.
                                                                     // Note: This is useful when using PLL for a clock
                                                                     // oscillator that requires setup time.
                                                                     // 1 - Ready
                                                                     // 0 - Not Ready

                                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t SD_INTERNAL_CLOCK_ENABLE_MASK       = 0x00000001;    // This bit is set to 0 when the HD is not using the
const uintptr_t SD_INTERNAL_CLOCK_ENABLE_BPOS       = 0;             // HC or the HC awaits a wakeup event. The HC
                                                                     // should stop its internal clock to go very low
                                                                     // power state. Still, registers shall be able to be read
                                                                     // and written. Clock starts to oscillate when this bit
                                                                     // is set to 1. When clock oscillation is stable, the HC
                                                                     // shall set Internal Clock Stable in this register to 1.
                                                                     // This bit shall not affect card detection.
                                                                     // 1 - Oscillate
                                                                     // 0 - Stop


//------------------------------------------------------------------------------
//
// Register (SD) INT_STS
//
// Name                    SD_INT_STS_REG
// Relative Address        0x00000030
// Absolute Address        sd0: 0xE0100030
//                         sd1: 0xE0101030
// Width                   30 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Normal interrupt status register
//                         Error interrupt status register
//
// Register SD_INT_STS_REG Details
//
                                                                   // Properties: Bit: 29, Type: wtc, Reset Value: 0x0
const uintptr_t SD_CEATA_ERROR_STATUS_MASK        = 0x20000000;    // Occurs when ATA command termination has
const uintptr_t SD_CEATA_ERROR_STATUS_BPOS        = 29;            // occurred due to an error condition the device has
                                                                   // encountered.
                                                                   // 0 - no error
                                                                   // 1 - error

                                                                   // Properties: Bit: 28, Type: wtc, Reset Value: 0x0
const uintptr_t SD_TARGET_RESPONSE_ERROR_MASK     = 0x10000000;    // Occurs when detecting ERROR in m_hresp(dma
const uintptr_t SD_TARGET_RESPONSE_ERROR_BPOS     = 28;            // transaction)
                                                                   // 0 - no error
                                                                   // 1 - error

// RESERVED                                                           Properties: Bits: 27:26, Type: ro, Reset Value: 0x0

                                                                   // Properties: Bit: 25, Type: wtc, Reset Value: 0x0
const uintptr_t SD_ADMA_ERROR_MASK                = 0x02000000;    // This bit is set when the Host Controller detects
const uintptr_t SD_ADMA_ERROR_BPOS                = 25;            // errors during ADMA based data transfer. The
                                                                   // state of the ADMA at an error occurrence is saved
                                                                   // in the ADMA Error Status Register.
                                                                   // 1- Error
                                                                   // 0 -No error

                                                                   // Properties: Bit: 24, Type: wtc, Reset Value: 0x0
const uintptr_t SD_INT_STATUS_AUTO_CMD12_ERR_MASK = 0x01000000;    // Occurs when detecting that one of the bits in Auto
const uintptr_t SD_INT_STATUS_AUTO_CMD12_ERR_BPOS = 24;            // CMD12 Error Status register has changed from 0
                                                                   // to 1. This bit is set to 1 also when Auto CMD12 is
                                                                   // not executed due to the previous command error.
                                                                   // 0 - No Error
                                                                   // 1 - Error

                                                                   // Properties: Bit: 23, Type: wtc, Reset Value: 0x0
const uintptr_t SD_CURRENT_LIMIT_ERROR_MASK       = 0x00800000;    // By setting the SD Bus Power bit in the Power
const uintptr_t SD_CURRENT_LIMIT_ERROR_BPOS       = 23;            // Control Register, the HC is requested to supply
                                                                   // power for the SD Bus. If the HC supports the
                                                                   // Current Limit Function, it can be protected from
                                                                   // an Illegal card by stopping power supply to the
                                                                   // card in which case this bit indicates a failure
                                                                   // status. Reading 1 means the HC is not supplying
                                                                   // power to SD card due to some failure. Reading 0
                                                                   // means that the HC is supplying power and no
                                                                   // error has occurred. This bit shall always set to be
                                                                   // 0, if the HC does not support this function.
                                                                   // 0 - No Error
                                                                   // 1 - Power Fail

                                                                   // Properties: Bit: 22, Type: wtc, Reset Value: 0x0
const uintptr_t SD_DATA_END_BIT_ERROR_MASK        = 0x00400000;    // Occurs when detecting 0 at the end bit position of
const uintptr_t SD_DATA_END_BIT_ERROR_BPOS        = 22;            // read data which uses the DAT line or the end bit
                                                                   // position of the CRC status.
                                                                   // 0 - No Error
                                                                   // 1 - Error

                                                                   // Properties: Bit: 21, Type: wtc, Reset Value: 0x0
const uintptr_t SD_DATA_CRC_ERROR_MASK            = 0x00200000;    // Occurs when detecting CRC error when
const uintptr_t SD_DATA_CRC_ERROR_BPOS            = 21;            // transferring read data which uses the DAT line or
                                                                   // when detecting the Write CRC Status having a
                                                                   // value of other than '010'.
                                                                   // 0 - No Error
                                                                   // 1 - Error

                                                                   // Properties: Bit: 20, Type: wtc, Reset Value: 0x0
const uintptr_t SD_DATA_TIMEOUT_ERROR_MASK        = 0x00100000;    // Occurs when detecting one of following timeout
const uintptr_t SD_DATA_TIMEOUT_ERROR_BPOS        = 20;            // conditions.
                                                                   // 1. Busy Timeout for R1b, R5b type.
                                                                   // 2. Busy Timeout after Write CRC status
                                                                   // 3. Write CRC status Timeout
                                                                   // 4. Read Data Timeout
                                                                   // 0 - No Error
                                                                   // 1 - Timeout

                                                                   // Properties: Bit: 19, Type: wtc, Reset Value: 0x0
const uintptr_t SD_COMMAND_INDEX_ERROR_MASK       = 0x00080000;    // Occurs if a Command Index error occurs in the
const uintptr_t SD_COMMAND_INDEX_ERROR_BPOS       = 19;            // Command Response.
                                                                   // 0 - No Error
                                                                   // 1 - Error

                                                                   // Properties: Bit: 18, Type: wtc, Reset Value: 0x0
const uintptr_t SD_COMMAND_END_BIT_ERROR_MASK     = 0x00040000;    // Occurs when detecting that the end bit of a
const uintptr_t SD_COMMAND_END_BIT_ERROR_BPOS     = 18;            // command response is 0.
                                                                   // 0 - No Error
                                                                   // 1 - End Bit Error Generated

                                                                   // Properties: Bit: 17, Type: wtc, Reset Value: 0x0
const uintptr_t SD_COMMAND_CRC_ERROR_MASK         = 0x00020000;    // Command CRC Error is generated in two cases.
const uintptr_t SD_COMMAND_CRC_ERROR_BPOS         = 17;            // 1. If a response is returned and the Command
                                                                   // Timeout Error is set to 0, this bit is set to 1 when
                                                                   // detecting a CRT error in the command response
                                                                   // 2. The HC detects a CMD line conflict by
                                                                   // monitoring the CMD line when a command is
                                                                   // issued. If the HC drives the CMD line to 1 level,
                                                                   // but detects 0 level on the CMD line at the next
                                                                   // SDCLK edge, then the HC shall abort the
                                                                   // command (Stop driving CMD line) and set this bit
                                                                   // to 1. The Command Timeout Error shall also be
                                                                   // set to 1 to distinguish CMD line conflict.
                                                                   // 0 - No Error
                                                                   // 1 - CRC Error Generated

                                                                   // Properties: Bit: 16, Type: wtc, Reset Value: 0x0
const uintptr_t SD_COMMAND_TIMEOUT_ERROR_MASK     = 0x00010000;    // Occurs only if the no response is returned within 64
const uintptr_t SD_COMMAND_TIMEOUT_ERROR_BPOS     = 16;            // SDCLK cycles from the end bit of the
                                                                   // command. If the HC detects a CMD line conflict,
                                                                   // in which case Command CRC Error shall also be
                                                                   // set. This bit shall be set without waiting for 64
                                                                   // SDCLK cycles because the command will be
                                                                   // aborted by the HC.
                                                                   // 0 - No Error
                                                                   // 1 - Timeout

                                                                   // Properties: Bit: 15, Type: ro, Reset Value: 0x0
const uintptr_t SD_ERROR_INTERRUPT_MASK           = 0x00008000;    // If any of the bits in the Error Interrupt Status
const uintptr_t SD_ERROR_INTERRUPT_BPOS           = 15;            // Register are set, then this bit is set. Therefore the
                                                                   // HD can test for an error by checking this bit first.
                                                                   // 0 - No Error.
                                                                   // 1 - Error.

// RESERVED                                                           Properties: Bits: 14:11, Type: ro, Reset Value: 0x0

                                                                   // Properties: Bit: 10, Type: wtc, Reset Value: 0x0
const uintptr_t SD_BOOT_TERMINATE_INTERRUPT_MASK  = 0x00000400;    // This status is set if the boot operation get
const uintptr_t SD_BOOT_TERMINATE_INTERRUPT_BPOS  = 10;            // terminated
                                                                   // 0 - Boot operation is not terminated.
                                                                   // 1 - Boot operation is terminated

                                                                   // Properties: Bit: 9, Type: wtc, Reset Value: 0x0
const uintptr_t SD_BOOT_ACK_RCV_MASK              = 0x00000200;    // This status is set if the boot acknowledge is
const uintptr_t SD_BOOT_ACK_RCV_BPOS              = 9;             // received from device.
                                                                   // 0 - Boot ack is not received.
                                                                   // 1 - Boot ack is received.

                                                                   // Properties: Bit: 8, Type: ro, Reset Value: 0x0
const uintptr_t SD_CARD_INTERRUPT_MASK            = 0x00000100;    // Writing this bit to 1 does not clear this bit. It is
const uintptr_t SD_CARD_INTERRUPT_BPOS            = 8;             // cleared by resetting the SD card interrupt factor.
                                                                   // In 1-bit mode, the HC shall detect the Card
                                                                   // Interrupt without SD Clock to support wakeup.
                                                                   // In 4-bit mode, the card interrupt signal is sampled
                                                                   // during the interrupt cycle, so there are some
                                                                   // sample delays between the interrupt signal from
                                                                   // the card and the interrupt to the Host system.
                                                                   // when this status has been set and the HD needs to
                                                                   // start this interrupt service, Card Interrupt Status
                                                                   // Enable in the Normal Interrupt Status register
                                                                   // shall be set to 0 in order to clear the card interrupt
                                                                   // statuses latched in the HC and stop driving the
                                                                   // Host System. After completion of the card
                                                                   // interrupt service (the reset factor in the SD card
                                                                   // and the interrupt signal may not be asserted), set
                                                                   // Card Interrupt Status Enable to 1 and start
                                                                   // sampling the interrupt signal again.
                                                                   // 0 - No Card Interrupt
                                                                   // 1 - Generate Card Interrupt

                                                                   // Properties: Bit: 7, Type: wtc, Reset Value: 0x0
const uintptr_t SD_CARD_REMOVAL_MASK              = 0x00000080;    // This status is set if the Card Inserted in the Present
const uintptr_t SD_CARD_REMOVAL_BPOS              = 7;             // State register changes from 1 to 0. When the HD
                                                                   // writes this bit to 1 to clear this status the status of
                                                                   // the Card Inserted in the Present State register
                                                                   // should be confirmed.
                                                                   // Because the card detect may possibly be changed
                                                                   // when the HD clear this bit an Interrupt event may
                                                                   // not be generated.
                                                                   // 0 - Card State Stable or Debouncing
                                                                   // 1 - Card Removed

                                                                   // Properties: Bit: 6, Type: wtc, Reset Value: 0x0
const uintptr_t SD_CARD_INSERTION_MASK            = 0x00000040;    // This status is set if the Card Inserted in the Present
const uintptr_t SD_CARD_INSERTION_BPOS            = 6;             // State register changes from 0 to 1. When the HD
                                                                   // writes this bit to 1 to clear this status the status of
                                                                   // the Card Inserted in the Present State register
                                                                   // should be confirmed.
                                                                   // Because the card detect may possibly be changed
                                                                   // when the HD clear this bit an Interrupt event may
                                                                   // not be generated.
                                                                   // 0 - Card State Stable or Debouncing
                                                                   // 1 - Card Inserted

                                                                   // Properties: Bit: 5, Type: wtc, Reset Value: 0x0
const uintptr_t SD_BUFFER_READ_READY_MASK         = 0x00000020;    // This status is set if the Buffer Read Enable
const uintptr_t SD_BUFFER_READ_READY_BPOS         = 5;             // changes from 0 to 1.
                                                                   // 0 - Not Ready to read Buffer.
                                                                   // 1 - Ready to read Buffer.

                                                                   // Properties: Bit: 4, Type: wtc, Reset Value: 0x0
const uintptr_t SD_BUFFER_WRITE_READY_MASK        = 0x00000010;    // This status is set if the Buffer Write Enable
const uintptr_t SD_BUFFER_WRITE_READY_BPOS        = 4;             // changes from 0 to 1.
                                                                   // 0 - Not Ready to Write Buffer.
                                                                   // 1 - Ready to Write Buffer.

                                                                   // Properties: Bit: 3, Type: wtc, Reset Value: 0x0
const uintptr_t SD_DMA_INTERRUPT_MASK             = 0x00000008;    // This status is set if the HC detects the Host
const uintptr_t SD_DMA_INTERRUPT_BPOS             = 3;             // DMA Buffer Boundary in the Block Size
                                                                   // register.
                                                                   // 0 - No DMA Interrupt
                                                                   // 1 - DMA Interrupt is Generated

                                                                   // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
const uintptr_t SD_BLOCK_GAP_EVENT_MASK           = 0x00000004;    // If the Stop At Block Gap Request in the Block
const uintptr_t SD_BLOCK_GAP_EVENT_BPOS           = 2;             // Gap Control Register is set, this bit is set.
                                                                   // Read Transaction:
                                                                   // This bit is set at the falling edge of the DAT
                                                                   // Line Active Status (When the transaction is
                                                                   // stopped at SD Bus timing. The Read Wait
                                                                   // must be supported in order to use this function).
                                                                   // Write Transaction:
                                                                   // This bit is set at the falling edge of Write
                                                                   // Transfer Active Status (After getting CRC status
                                                                   // at SD Bus timing).
                                                                   // 0 - No Block Gap Event
                                                                   // 1 - Transaction stopped at Block Gap

                                                                   // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
const uintptr_t SD_TRANSFER_COMPLETE_MASK         = 0x00000002;    // This bit is set when a read / write transaction is
const uintptr_t SD_TRANSFER_COMPLETE_BPOS         = 1;             // completed.
                                                                   // Read Transaction:
                                                                   // This bit is set at the falling edge of Read Transfer
                                                                   // Active Status.
                                                                   // There are two cases in which the Interrupt is
                                                                   // generated. The first is when a data transfer is
                                                                   // completed as specified by data length (After the
                                                                   // last data has been read to the Host System). The
                                                                   // second is when data has stopped at the block gap
                                                                   // and completed the data transfer by setting the
                                                                   // Stop At Block Gap Request in the Block Gap
                                                                   // Control Register (After valid
                                                                   // data has been read to the Host System).
                                                                   // Write Transaction:
                                                                   // This bit is set at the falling edge of the DAT
                                                                   // Line Active Status.
                                                                   // There are two cases in which the Interrupt is
                                                                   // generated. The first is when the last data is written
                                                                   // to the card as specified by data length and Busy
                                                                   // signal is released. The second is when data
                                                                   // transfers are stopped at the block gap by setting
                                                                   // Stop At Block Gap Request in the Block Gap
                                                                   // Control Register and data transfers completed.
                                                                   // (After valid data is written to the SD card and the
                                                                   // busy signal is released).
                                                                   // Note: Transfer Complete has higher priority than
                                                                   // Data Timeout Error. If both bits are set to 1, the
                                                                   // data transfer can be considered complete
                                                                   // 0 - No Data Transfer Complete
                                                                   // 1 - Data Transfer Complete

                                                                   // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
const uintptr_t SD_COMMAND_COMPLETE_MASK          = 0x00000001;    // This bit is set when get the end bit of the
const uintptr_t SD_COMMAND_COMPLETE_BPOS          = 0;             // command response (Except Auto CMD12).
                                                                   // Note: Command Timeout Error has higher
                                                                   // priority than Command Complete. If both are set
                                                                   // to 1, it can be considered that the response was not
                                                                   // received correctly.
                                                                   // 0 - No Command Complete
                                                                   // 1 - Command Complete


//------------------------------------------------------------------------------
//
// Register (SD) INT_STS_EN
//
// Name                    SD_INT_STS_EN_REG
// Relative Address        0x00000034
// Absolute Address        sd0: 0xE0100034
//                         sd1: 0xE0101034
// Width                   30 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Normal interrupt status enable register
//                         Error interrupt status enable register
//
// Register SD_INT_STS_EN_REG Details
//
                                                                             // Properties: Bit: 29, Type: rw, Reset Value: 0x0
const uintptr_t SD_CEATA_ERROR_STATUS_ENABLE_MASK           = 0x20000000;    // 0 - Masked
const uintptr_t SD_CEATA_ERROR_STATUS_ENABLE_BPOS           = 29;            // 1 - Enabled

                                                                             // Properties: Bit: 28, Type: rw, Reset Value: 0x0
const uintptr_t SD_TARGET_RESPONSE_ERROR_STATUS_ENABLE_MASK = 0x10000000;    // 0 - Masked
const uintptr_t SD_TARGET_RESPONSE_ERROR_STATUS_ENABLE_BPOS = 28;            // 1 - Enabled

// RESERVED                                                                     Properties: Bits: 27:26, Type: ro, Reset Value: 0x0

                                                                             // Properties: Bit: 25, Type: rw, Reset Value: 0x0
const uintptr_t SD_ADMA_ERROR_STATUS_ENABLE_MASK            = 0x02000000;    // 0 - Masked
const uintptr_t SD_ADMA_ERROR_STATUS_ENABLE_BPOS            = 25;            // 1 - Enabled

                                                                             // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t SD_AUTO_CMD12_ERROR_STATUS_ENABLE_MASK      = 0x01000000;    // 0 - Masked
const uintptr_t SD_AUTO_CMD12_ERROR_STATUS_ENABLE_BPOS      = 24;            // 1 - Enabled

                                                                             // Properties: Bit: 23, Type: rw, Reset Value: 0x0
const uintptr_t SD_CURRENT_LIMIT_ERROR_STATUS_ENABLE_MASK   = 0x00800000;    // 0 - Masked
const uintptr_t SD_CURRENT_LIMIT_ERROR_STATUS_ENABLE_BPOS   = 23;            // 1 - Enabled

                                                                             // Properties: Bit: 22, Type: rw, Reset Value: 0x0
const uintptr_t SD_DATA_END_BIT_ERROR_STATUS_ENABLE_MASK    = 0x00400000;    // 0 - Masked
const uintptr_t SD_DATA_END_BIT_ERROR_STATUS_ENABLE_BPOS    = 22;            // 1 - Enabled

                                                                             // Properties: Bit: 21, Type: rw, Reset Value: 0x0
const uintptr_t SD_DATA_CRC_ERROR_STATUS_ENABLE_MASK        = 0x00200000;    // 0 - Masked
const uintptr_t SD_DATA_CRC_ERROR_STATUS_ENABLE_BPOS        = 21;            // 1 - Enabled

                                                                             // Properties: Bit: 20, Type: rw, Reset Value: 0x0
const uintptr_t SD_DATA_TIMEOUT_ERROR_STATUS_ENABLE_MASK    = 0x00100000;    // 0 - Masked
const uintptr_t SD_DATA_TIMEOUT_ERROR_STATUS_ENABLE_BPOS    = 20;            // 1 - Enabled

                                                                             // Properties: Bit: 19, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_INDEX_ERROR_STATUS_ENABLE_MASK   = 0x00080000;    // 0 - Masked
const uintptr_t SD_COMMAND_INDEX_ERROR_STATUS_ENABLE_BPOS   = 19;            // 1 - Enabled

                                                                             // Properties: Bit: 18, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_END_BIT_ERROR_STATUS_ENABLE_MASK = 0x00040000;    // 0 - Masked
const uintptr_t SD_COMMAND_END_BIT_ERROR_STATUS_ENABLE_BPOS = 18;            // 1 - Enabled

                                                                             // Properties: Bit: 17, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_CRC_ERROR_STATUS_ENABLE_MASK     = 0x00020000;    // 0 - Masked
const uintptr_t SD_COMMAND_CRC_ERROR_STATUS_ENABLE_BPOS     = 17;            // 1 - Enabled

                                                                             // Properties: Bit: 16, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_TIMEOUT_ERROR_STATUS_ENABLE_MASK = 0x00010000;    // 0 - Masked
const uintptr_t SD_COMMAND_TIMEOUT_ERROR_STATUS_ENABLE_BPOS = 16;            // 1 - Enabled

                                                                             // Properties: Bit: 15, Type: ro, Reset Value: 0x0
const uintptr_t SD_FIXED_TO_0_STATUS_ENABLE_MASK            = 0x00008000;    // The HC shall control error Interrupts using the
const uintptr_t SD_FIXED_TO_0_STATUS_ENABLE_BPOS            = 15;            // Error Interrupt Status Enable register.

// RESERVED                                                                     Properties: Bits: 14:11, Type: ro, Reset Value: 0x0

                                                                             // Properties: Bit: 10, Type: rw, Reset Value: 0x0
const uintptr_t SD_BOOT_TERMINATE_INTERRUPT_ENABLE_MASK     = 0x00000400;    // 0 - Masked
const uintptr_t SD_BOOT_TERMINATE_INTERRUPT_ENABLE_BPOS     = 10;            // 1 - Enabled

                                                                             // Properties: Bit: 9, Type: rw, Reset Value: 0x0
const uintptr_t SD_BOOT_ACK_RCV_ENABLE_MASK                 = 0x00000200;    // 0 - Masked
const uintptr_t SD_BOOT_ACK_RCV_ENABLE_BPOS                 = 9;             // 1 - Enabled

                                                                             // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t SD_CARD_INTERRUPT_STATUS_ENABLE_MASK        = 0x00000100;    // If this bit is set to 0, the HC shall clear Interrupt
const uintptr_t SD_CARD_INTERRUPT_STATUS_ENABLE_BPOS        = 8;             // request to the System. The Card Interrupt
                                                                             // detection is stopped when this bit is cleared and
                                                                             // restarted when this bit is set to 1. The HD should
                                                                             // clear the Card Interrupt Status Enable before
                                                                             // servicing the Card Interrupt and should set this
                                                                             // bit again after all Interrupt requests from the card
                                                                             // are cleared to prevent inadvertent Interrupts.
                                                                             // 0 - Masked
                                                                             // 1 - Enabled

                                                                             // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t SD_CARD_REMOVAL_STATUS_ENABLE_MASK          = 0x00000080;    // 0 - Masked
const uintptr_t SD_CARD_REMOVAL_STATUS_ENABLE_BPOS          = 7;             // 1 - Enabled

                                                                             // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t SD_CARD_INSERTION_STATUS_ENABLE_MASK        = 0x00000040;    // 0 - Masked
const uintptr_t SD_CARD_INSERTION_STATUS_ENABLE_BPOS        = 6;             // 1 - Enabled

                                                                             // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t SD_BUFFER_READ_READY_STATUS_ENABLE_MASK     = 0x00000020;    // 0 - Masked
const uintptr_t SD_BUFFER_READ_READY_STATUS_ENABLE_BPOS     = 5;             // 1 - Enabled

                                                                             // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t SD_BUFFER_WRITE_READY_STATUS_ENABLE_MASK    = 0x00000010;    // 0 - Masked
const uintptr_t SD_BUFFER_WRITE_READY_STATUS_ENABLE_BPOS    = 4;             // 1 - Enabled

                                                                             // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t SD_DMA_INTERRUPT_STATUS_ENABLE_MASK         = 0x00000008;    // 0 - Masked
const uintptr_t SD_DMA_INTERRUPT_STATUS_ENABLE_BPOS         = 3;             // 1 - Enabled

                                                                             // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t SD_BLOCK_GAP_EVENT_STATUS_ENABLE_MASK       = 0x00000004;    // 0 - Masked
const uintptr_t SD_BLOCK_GAP_EVENT_STATUS_ENABLE_BPOS       = 2;             // 1 - Enabled

                                                                             // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t SD_TRANSFER_COMPLETE_STATUS_ENABLE_MASK     = 0x00000002;    // 0 - Masked
const uintptr_t SD_TRANSFER_COMPLETE_STATUS_ENABLE_BPOS     = 1;             // 1 - Enabled

                                                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_COMPLETE_STATUS_ENABLE_MASK      = 0x00000001;    // 0 - Masked
const uintptr_t SD_COMMAND_COMPLETE_STATUS_ENABLE_BPOS      = 0;             // 1 - Enabled


//------------------------------------------------------------------------------
//
// Register (SD) INT_EN
//
// Name                     SD_INT_EN_REG
// Relative Address         0x00000038
// Absolute Address         sd0: 0xE0100038
//                          sd1: 0xE0101038
// Width                    30 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Normal interrupt signal enable register
//                          Error interrupt signal enable register
//
// Register SD_INT_EN_REG Details
//
                                                                                // Properties: Bit: 29, Type: rw, Reset Value: 0x0
const uintptr_t SD_CEATA_ERROR_SIGNAL_ENABLE_MASK              = 0x20000000;    // 0 - Masked
const uintptr_t SD_CEATA_ERROR_SIGNAL_ENABLE_BPOS              = 29;            // 1 - Enabled

                                                                                // Properties: Bit: 28, Type: rw, Reset Value: 0x0
const uintptr_t SD_TARGET_RESPONSE_ERROR_SIGNAL_ENABLE_MASK    = 0x10000000;    // 0 - Masked
const uintptr_t SD_TARGET_RESPONSE_ERROR_SIGNAL_ENABLE_BPOS    = 28;            // 1 - Enabled

// RESERVED                                                                        Properties: Bits: 27:26, Type: ro, Reset Value: 0x0

                                                                                // Properties: Bit: 25, Type: rw, Reset Value: 0x0
const uintptr_t SD_ADMA_ERROR_SIGNAL_ENABLE_MASK               = 0x02000000;    // 0 - Masked
const uintptr_t SD_ADMA_ERROR_SIGNAL_ENABLE_BPOS               = 25;            // 1 - Enabled

                                                                                // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t SD_AUTO_CMD12_ERROR_SIGNAL_ENABLE_MASK         = 0x01000000;    // 0 - Masked
const uintptr_t SD_AUTO_CMD12_ERROR_SIGNAL_ENABLE_BPOS         = 24;            // 1 - Enabled

                                                                                // Properties: Bit: 23, Type: rw, Reset Value: 0x0
const uintptr_t SD_CURRENT_LIMIT_ERROR_SIGNAL_ENABLE_MASK      = 0x00800000;    // 0 - Masked
const uintptr_t SD_CURRENT_LIMIT_ERROR_SIGNAL_ENABLE_BPOS      = 23;            // 1 - Enabled

                                                                                // Properties: Bit: 22, Type: rw, Reset Value: 0x0
const uintptr_t SD_DATA_END_BIT_ERROR_SIGNAL_ENABLE_MASK       = 0x00400000;    // 0 - Masked
const uintptr_t SD_DATA_END_BIT_ERROR_SIGNAL_ENABLE_BPOS       = 22;            // 1 - Enabled

                                                                                // Properties: Bit: 21, Type: rw, Reset Value: 0x0
const uintptr_t SD_DATA_CRC_ERROR_SIGNAL_ENABLE_MASK           = 0x00200000;    // 0 - Masked
const uintptr_t SD_DATA_CRC_ERROR_SIGNAL_ENABLE_BPOS           = 21;            // 1 - Enabled

                                                                                // Properties: Bit: 20, Type: rw, Reset Value: 0x0
const uintptr_t SD_DATA_TIMEOUT_ERROR_SIGNAL_ENABLE_MASK       = 0x00100000;    // 0 - Masked
const uintptr_t SD_DATA_TIMEOUT_ERROR_SIGNAL_ENABLE_BPOS       = 20;            // 1 - Enabled

                                                                                // Properties: Bit: 19, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_INDEX_ERROR_SIGNAL_ENABLE_MASK      = 0x00080000;    // 0 - Masked
const uintptr_t SD_COMMAND_INDEX_ERROR_SIGNAL_ENABLE_BPOS      = 19;            // 1 - Enabled

                                                                                // Properties: Bit: 18, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_END_BIT_ERROR_SIGNAL_ENABLE_MASK    = 0x00040000;    // 0 - Masked
const uintptr_t SD_COMMAND_END_BIT_ERROR_SIGNAL_ENABLE_BPOS    = 18;            // 1 - Enabled

                                                                                // Properties: Bit: 17, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_CRC_ERROR_SIGNAL_ENABLE_MASK        = 0x00020000;    // 0 - Masked
const uintptr_t SD_COMMAND_CRC_ERROR_SIGNAL_ENABLE_BPOS        = 17;            // 1 - Enabled

                                                                                // Properties: Bit: 16, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_TIMEOUT_ERROR_SIGNAL_ENABLE_MASK    = 0x00010000;    // 0 - Masked
const uintptr_t SD_COMMAND_TIMEOUT_ERROR_SIGNAL_ENABLE_BPOS    = 16;            // 1 - Enabled

                                                                                // Properties: Bit: 15, Type: ro, Reset Value: 0x0
const uintptr_t SD_FIXED_TO_0_SIGNAL_ENABLE_MASK               = 0x00008000;    // The HD shall control error Interrupts using the
const uintptr_t SD_FIXED_TO_0_SIGNAL_ENABLE_BPOS               = 15;            // Error Interrupt Signal Enable register.

// RESERVED                                                                        Properties: Bits: 14:11, Type: ro, Reset Value: 0x0

                                                                                // Properties: Bit: 10, Type: rw, Reset Value: 0x0
const uintptr_t SD_BOOT_TERMINATE_INTERRUPT_SIGNAL_ENABLE_MASK = 0x00000400;    // 0 - Masked
const uintptr_t SD_BOOT_TERMINATE_INTERRUPT_SIGNAL_ENABLE_BPOS = 10;            // 1 - Enabled

                                                                                // Properties: Bit: 9, Type: rw, Reset Value: 0x0
const uintptr_t SD_BOOT_ACK_RCV_SIGNAL_ENABLE_MASK             = 0x00000200;    // 0 - Masked
const uintptr_t SD_BOOT_ACK_RCV_SIGNAL_ENABLE_BPOS             = 9;             // 1 - Enabled

                                                                                // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t SD_CARD_INTERRUPT_SIGNAL_ENABLE_MASK           = 0x00000100;    // 0 - Masked
const uintptr_t SD_CARD_INTERRUPT_SIGNAL_ENABLE_BPOS           = 8;             // 1 - Enabled

                                                                                // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t SD_CARD_REMOVAL_SIGNAL_ENABLE_MASK             = 0x00000080;    // 0 - Masked
const uintptr_t SD_CARD_REMOVAL_SIGNAL_ENABLE_BPOS             = 7;             // 1 - Enabled

                                                                                // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t SD_CARD_INSERTION_SIGNAL_ENABLE_MASK           = 0x00000040;    // 0 - Masked
const uintptr_t SD_CARD_INSERTION_SIGNAL_ENABLE_BPOS           = 6;             // 1 - Enabled

                                                                                // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t SD_BUFFER_READ_READY_SIGNAL_ENABLE_MASK        = 0x00000020;    // 0 - Masked
const uintptr_t SD_BUFFER_READ_READY_SIGNAL_ENABLE_BPOS        = 5;             // 1 - Enabled

                                                                                // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t SD_BUFFER_WRITE_READY_SIGNAL_ENABLE_MASK       = 0x00000010;    // 0 - Masked
const uintptr_t SD_BUFFER_WRITE_READY_SIGNAL_ENABLE_BPOS       = 4;             // 1 - Enabled

                                                                                // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t SD_DMA_INTERRUPT_SIGNAL_ENABLE_MASK            = 0x00000008;    // 0 - Masked
const uintptr_t SD_DMA_INTERRUPT_SIGNAL_ENABLE_BPOS            = 3;             // 1 - Enabled

                                                                                // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t SD_BLOCK_GAP_EVENT_SIGNAL_ENABLE_MASK          = 0x00000004;    // 0 - Masked
const uintptr_t SD_BLOCK_GAP_EVENT_SIGNAL_ENABLE_BPOS          = 2;             // 1 - Enabled

                                                                                // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t SD_TRANSFER_COMPLETE_SIGNAL_ENABLE_MASK        = 0x00000002;    // 0 - Masked
const uintptr_t SD_TRANSFER_COMPLETE_SIGNAL_ENABLE_BPOS        = 1;             // 1 - Enabled

                                                                                // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t SD_COMMAND_COMPLETE_SIGNAL_ENABLE_MASK         = 0x00000001;    // 0 - Masked
const uintptr_t SD_COMMAND_COMPLETE_SIGNAL_ENABLE_BPOS         = 0;             // 1 - Enabled


//------------------------------------------------------------------------------
//
// Register (SD) AUTO_CMD12_ERRST
//
// Name                    SD_AUTO_CMD12_ERRST_REG
// Relative Address        0x0000003C
// Absolute Address        sd0: 0xE010003C
//                         sd1: 0xE010103C
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Auto CMD12 error status register
//
// Register SD_AUTO_CMD12_ERRST_REG Details
//         When Auto CMD12 Error Status is set, the HD shall check this register to identify what kind of error Auto
//         CMD12 indicated. This register is valid only when the Auto CMD12 Error is set.
//
                                                                                // Properties: Bit: 7, Type: ro, Reset Value: 0x0
const uintptr_t SD_COMMAND_NOT_ISSUED_BY_AUTO_CMD12_ERROR_MASK = 0x00000080;    // Setting this bit to 1 means CMD_wo_DAT is not
const uintptr_t SD_COMMAND_NOT_ISSUED_BY_AUTO_CMD12_ERROR_BPOS = 7;             // executed due to an Auto CMD12 error (D04 - D01)
                                                                                // in this register.
                                                                                // 0 - No Error
                                                                                // 1 - Not Issued

// RESERVED                                                                        Properties: Bits: 6:5, Type: ro, Reset Value: 0x0

                                                                                // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t SD_AUTO_CMD12_INDEX_ERROR_MASK                 = 0x00000010;    // Occurs if the Command Index error occurs in
const uintptr_t SD_AUTO_CMD12_INDEX_ERROR_BPOS                 = 4;             // response to a command.
                                                                                // 0 - No Error
                                                                                // 1 - Error

                                                                                // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t SD_AUTO_CMD12_END_BIT_ERROR_MASK               = 0x00000008;    // Occurs when detecting that the end bit of
const uintptr_t SD_AUTO_CMD12_END_BIT_ERROR_BPOS               = 3;             // command response is 0.
                                                                                // 0 - No Error
                                                                                // 1 - End Bit Error Generated

                                                                                // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t SD_AUTO_CMD12_CRC_ERROR_MASK                   = 0x00000004;    // Occurs when detecting a CRC error in the
const uintptr_t SD_AUTO_CMD12_CRC_ERROR_BPOS                   = 2;             // command response.
                                                                                // 0 - No Error
                                                                                // 1 - CRC Error Generated

                                                                                // Properties: Bit: 1, Type: ro, Reset Value: 0x0
const uintptr_t SD_AUTO_CMD12_TIMEOUT_ERROR_MASK               = 0x00000002;    // Occurs if the no response is returned within 64
const uintptr_t SD_AUTO_CMD12_TIMEOUT_ERROR_BPOS               = 1;             // SDCLK cycles from the end bit of the command. If
                                                                                // this bit is set to 1, the other error status bits (D04 -
                                                                                // D02) are meaningless.
                                                                                // 0 - No Error
                                                                                // 1 - Timeout

                                                                                // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t SD_AUTO_CMD12_NOT_EXECUTED_MASK                = 0x00000001;    // If memory multiple block data transfer is not
const uintptr_t SD_AUTO_CMD12_NOT_EXECUTED_BPOS                = 0;             // started due to command
                                                                                // error, this bit is not set because it is not necessary
                                                                                // to issue Auto CMD12. Setting this bit to 1 means
                                                                                // the HC cannot issue Auto CMD12 to stop
                                                                                // memory multiple block transfer due to some
                                                                                // error. If this bit is set to 1, other error status bits
                                                                                // (D04 - D01) are meaningless.
                                                                                // 0 - Executed
                                                                                // 1 - Not Executed


//------------------------------------------------------------------------------
//
// Register (SD) CAPABILITIES
//
// Name                    SD_CAPABILITIES_REG
// Relative Address        0x00000040
// Absolute Address        sd0: 0xE0100040
//                         sd1: 0xE0101040
// Width                   31 bits
// Access Type             ro
// Reset Value             0x69EC0080
// Description             Capabilities register
//
// Register SD_CAPABILITIES_REG Details
//         This register provides the HD with information specific to the HC implementation. The HC may
//         implement these values as fixed or loaded from flash memory during power on initialization.
//
                                                                    // Properties: Bit: 30, Type: ro, Reset Value: 0x1
const uintptr_t SD_SPI_BLOCK_MODE_MASK             = 0x40000000;    // Spi block mode
const uintptr_t SD_SPI_BLOCK_MODE_BPOS             = 30;            // 0 - Not Supported
                                                                    // 1 - Supported

                                                                    // Properties: Bit: 29, Type: ro, Reset Value: 0x1
const uintptr_t SD_SPI_MODE_MASK                   = 0x20000000;    // Spi mode
const uintptr_t SD_SPI_MODE_BPOS                   = 29;            // 0 - Not Supported
                                                                    // 1 - Supported

                                                                    // Properties: Bit: 28, Type: ro, Reset Value: 0x0
const uintptr_t SD_64_BIT_SYSTEM_BUS_SUPPORT_MASK  = 0x10000000;    // 1 - supports 64 bit system address
const uintptr_t SD_64_BIT_SYSTEM_BUS_SUPPORT_BPOS  = 28;            // 0 - Does not support 64 bit system
                                                                    // address

                                                                    // Properties: Bit: 27, Type: ro, Reset Value: 0x1
const uintptr_t SD_INTERRUPT_MODE_MASK             = 0x08000000;    // Interrupt mode
const uintptr_t SD_INTERRUPT_MODE_BPOS             = 27;            // 0 - Not Supported
                                                                    // 1 - Supported

                                                                    // Properties: Bit: 26, Type: ro, Reset Value: 0x0
const uintptr_t SD_VOLTAGE_SUPPORT_1_8_V_MASK      = 0x04000000;    // 0 - 1.8 V Not Supported
const uintptr_t SD_VOLTAGE_SUPPORT_1_8_V_BPOS      = 26;            // 1 - 1.8 V Supported

                                                                    // Properties: Bit: 25, Type: ro, Reset Value: 0x0
const uintptr_t SD_VOLTAGE_SUPPORT_3_0_V_MASK      = 0x02000000;    // 0 - 3.0 V Not Supported
const uintptr_t SD_VOLTAGE_SUPPORT_3_0_V_BPOS      = 25;            // 1 - 3.0 V Supported

                                                                    // Properties: Bit: 24, Type: ro, Reset Value: 0x1
const uintptr_t SD_VOLTAGE_SUPPORT_3_3_V_MASK      = 0x01000000;    // 0 - 3.3 V Not Supported
const uintptr_t SD_VOLTAGE_SUPPORT_3_3_V_BPOS      = 24;            // 1 - 3.3 V Supported

                                                                    // Properties: Bit: 23, Type: ro, Reset Value: 0x1
const uintptr_t SD_SUSPEND_RESUME_SUPPORT_MASK     = 0x00800000;    // This bit indicates whether the HC supports
const uintptr_t SD_SUSPEND_RESUME_SUPPORT_BPOS     = 23;            // Suspend / Resume functionality. If this bit is 0, the
                                                                    // Suspend and Resume mechanism are not
                                                                    // supported and the HD shall not issue either
                                                                    // Suspend / Resume commands.
                                                                    // 0 - Not Supported
                                                                    // 1 - Supported

                                                                    // Properties: Bit: 22, Type: ro, Reset Value: 0x1
const uintptr_t SD_SDMA_SUPPORT_MASK               = 0x00400000;    // This bit indicates whether the HC is capable of
const uintptr_t SD_SDMA_SUPPORT_BPOS               = 22;            // using DMA to transfer data between system
                                                                    // memory and the HC directly.
                                                                    // 0 - SDMA Not Supported
                                                                    // 1 - SDMA Supported.

                                                                    // Properties: Bit: 21, Type: ro, Reset Value: 0x1
const uintptr_t SD_HIGH_SPEED_SUPPORT_MASK         = 0x00200000;    // This bit indicates whether the HC and the Host
const uintptr_t SD_HIGH_SPEED_SUPPORT_BPOS         = 21;            // System support High Speed mode and they can
                                                                    // supply SD Clock frequency from 25Mhz to 50
                                                                    // MHz (for SD)/ 20MHz to 52MHz (for MMC).
                                                                    // 0 - High Speed Not Supported
                                                                    // 1 - High Speed Supported

// RESERVED                                                            Properties: Bit: 20, Type: ro, Reset Value: 0x0

                                                                    // Properties: Bit: 19, Type: ro, Reset Value: 0x1
const uintptr_t SD_ADMA2_SUPPORT_MASK              = 0x00080000;    // 1 - ADMA2 support.
const uintptr_t SD_ADMA2_SUPPORT_BPOS              = 19;            // 0 - ADMA2 not support

                                                                    // Properties: Bit: 18, Type: ro, Reset Value: 0x1
const uintptr_t SD_EXTENDED_MEDIA_BUS_SUPPORT_MASK = 0x00040000;    // This bit indicates whether the Host Controller is
const uintptr_t SD_EXTENDED_MEDIA_BUS_SUPPORT_BPOS = 18;            // capable bus.
                                                                    // 1 - Extended Media Bus Supported
                                                                    // 0 - Extended Media Bus not Supported

                                                                    // Properties: Bits: 17:16, Type: ro, Reset Value: 0x0
const uintptr_t SD_MAX_BLOCK_LENGTH_MASK           = 0x00030000;    // This value indicates the maximum block size that
const uintptr_t SD_MAX_BLOCK_LENGTH_BPOS           = 16;            // the HD can read and write to the buffer in the HC.
                                                                    // The buffer shall transfer this block size without
                                                                    // wait cycles. Three sizes can be defined as
                                                                    // indicated below.
                                                                    // 00 - 512 byte
                                                                    // 01 - 1024 byte
                                                                    // 10 - 2048 byte
                                                                    // 11 - 4096 byte

// RESERVED                                                            Properties: Bits: 15:14, Type: ro, Reset Value: 0x0

// RESERVED                                                            Properties: Bits: 13:8, Type: ro, Reset Value: 0x0

                                                                    // Properties: Bit: 7, Type: ro, Reset Value: 0x1
const uintptr_t SD_TIMEOUT_CLOCK_UNIT_MASK         = 0x00000080;    // This bit shows the unit of base clock frequency
const uintptr_t SD_TIMEOUT_CLOCK_UNIT_BPOS         = 7;             // used to detect Data Timeout Error.
                                                                    // 0 - KHz
                                                                    // 1 - MHz

// RESERVED                                                            Properties: Bit: 6, Type: ro, Reset Value: 0x0

// RESERVED                                                            Properties: Bits: 5:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (SD) MAX_CURR_CAP
//
// Name                    SD_MAX_CURR_CAP_REG
// Relative Address        0x00000048
// Absolute Address        sd0: 0xE0100048
//                         sd1: 0xE0101048
// Width                   24 bits
// Access Type             ro
// Reset Value             0x00000001
// Description              Maximum current capabilities register
//
// Register SD_MAX_CURR_CAP_REG Details
//
                                                                  // Properties: Bits: 23:16, Type: ro, Reset Value: 0x0
const uintptr_t SD_MAXIMUM_CURRENT_FOR_1_8V_MASK = 0x00FF0000;    // Maximum Current for 1.8V
const uintptr_t SD_MAXIMUM_CURRENT_FOR_1_8V_BPOS = 16;            // 

                                                                  // Properties: Bits: 15:8, Type: ro, Reset Value: 0x0
const uintptr_t SD_MAXIMUM_CURRENT_FOR_3_0V_MASK = 0x0000FF00;    // Maximum Current for 3.0V
const uintptr_t SD_MAXIMUM_CURRENT_FOR_3_0V_BPOS = 8;             // 

                                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x1
const uintptr_t SD_MAXIMUM_CURRENT_FOR_3_3V_MASK = 0x000000FF;    // Maximum Current for 3.3V
const uintptr_t SD_MAXIMUM_CURRENT_FOR_3_3V_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (SD) FORCE_EVENT
//
// Name                     SD_FORCE_EVENT_REG
// Relative Address         0x00000050
// Absolute Address         sd0: 0xE0100050
//                          sd1: 0xE0101050
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Force event register for Auto CMD12 error status register
//                          Force event register for error interrupt status
//
// Register SD_FORCE_EVENT_REG Details
//         The Force Event Register is not a physically implemented register. Rather, it is an address at which the
//         Auto CMD12 Error Status Register can be written.
//         Writing 1:set each bit of the Auto CMD12 Error Status Register
//         Writing 0:no effect.
//         The Force Event Register is not a physically implemented register. Rather, it is an address at which the
//         Error Interrupt Status register can be written. The effect of a write to this address will be reflected in the
//         Error Interrupt Status Register if the corresponding bit of the Error Interrupt Status Enable Register is set.
//         Writing 1:set each bit of the Error Interrupt Status Register
//         Writing 0:no effect
//
                                                                                                // Properties: Bits: 31:30, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_VENDOR_SPECIFIC_ERROR_STATUS_MASK           = 0xC0000000;    // Additional status bits can be defined in
const uintptr_t SD_FORCE_EVENT_FOR_VENDOR_SPECIFIC_ERROR_STATUS_BPOS           = 30;            // this register by the vendor.
                                                                                                // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

                                                                                                // Properties: Bit: 29, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_CEATA_ERROR_MASK                            = 0x20000000;    // Force Event for Ceata Error
const uintptr_t SD_FORCE_EVENT_FOR_CEATA_ERROR_BPOS                            = 29;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

                                                                                                // Properties: Bit: 28, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_TARGET_RESPONSE_ERROR_MASK                  = 0x10000000;    // Force Event for Target Response Error
const uintptr_t SD_FORCE_EVENT_FOR_TARGET_RESPONSE_ERROR_BPOS                  = 28;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

// RESERVED                                                                                        Properties: Bits: 27:26, Type: ro, Reset Value: 0x0

                                                                                                // Properties: Bit: 25, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_ADMA_ERROR_MASK                             = 0x02000000;    // Force Event for ADMA Error
const uintptr_t SD_FORCE_EVENT_FOR_ADMA_ERROR_BPOS                             = 25;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

                                                                                                // Properties: Bit: 24, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_ERROR_MASK                       = 0x01000000;    // Force Event for Auto CMD12 Error
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_ERROR_BPOS                       = 24;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

                                                                                                // Properties: Bit: 23, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_CURRENT_LIMIT_ERROR_MASK                    = 0x00800000;    // Force Event for Current Limit Error
const uintptr_t SD_FORCE_EVENT_FOR_CURRENT_LIMIT_ERROR_BPOS                    = 23;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

                                                                                                // Properties: Bit: 22, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_DATA_END_BIT_ERROR_MASK                     = 0x00400000;    // Force Event for Data End Bit Error
const uintptr_t SD_FORCE_EVENT_FOR_DATA_END_BIT_ERROR_BPOS                     = 22;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

                                                                                                // Properties: Bit: 21, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_DATA_CRC_ERROR_MASK                         = 0x00200000;    // Force Event for Data CRC Error
const uintptr_t SD_FORCE_EVENT_FOR_DATA_CRC_ERROR_BPOS                         = 21;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

                                                                                                // Properties: Bit: 20, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_DATA__TIMEOUT_ERROR_MASK                    = 0x00100000;    // Force Event for Data Timeout Error
const uintptr_t SD_FORCE_EVENT_FOR_DATA__TIMEOUT_ERROR_BPOS                    = 20;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

                                                                                                // Properties: Bit: 19, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_COMMAND_INDEX_ERROR_MASK                    = 0x00080000;    // Force Event for Command Index Error
const uintptr_t SD_FORCE_EVENT_FOR_COMMAND_INDEX_ERROR_BPOS                    = 19;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

                                                                                                // Properties: Bit: 18, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_COMMAND_END_BIT_ERROR_MASK                  = 0x00040000;    // Force Event for Command End Bit Error
const uintptr_t SD_FORCE_EVENT_FOR_COMMAND_END_BIT_ERROR_BPOS                  = 18;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

                                                                                                // Properties: Bit: 17, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_COMMAND_CRC_ERROR_MASK                      = 0x00020000;    // Force Event for Command CRC Error
const uintptr_t SD_FORCE_EVENT_FOR_COMMAND_CRC_ERROR_BPOS                      = 17;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

                                                                                                // Properties: Bit: 16, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_COMMAND_TIMEOUT_ERROR_MASK                  = 0x00010000;    // Force Event for Command Timeout Error
const uintptr_t SD_FORCE_EVENT_FOR_COMMAND_TIMEOUT_ERROR_BPOS                  = 16;            // 1 - Interrupt is generated
                                                                                                // 0 - No interrupt

// RESERVED                                                                                        Properties: Bits: 15:8, Type: ro, Reset Value: 0x0

                                                                                                // Properties: Bit: 7, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_COMMAND_NOT_ISSUED_BY_AUTO_CMD12_ERROR_MASK = 0x00000080;    // 1 - Interrupt is generated
const uintptr_t SD_FORCE_EVENT_FOR_COMMAND_NOT_ISSUED_BY_AUTO_CMD12_ERROR_BPOS = 7;             // 0 - no interrupt

// RESERVED                                                                                        Properties: Bits: 6:5, Type: ro, Reset Value: 0x0

                                                                                                // Properties: Bit: 4, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_INDEX_ERROR_MASK                 = 0x00000010;    // 1 - Interrupt is generated
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_INDEX_ERROR_BPOS                 = 4;             // 0 - no interrupt

                                                                                                // Properties: Bit: 3, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_END_BIT_ERROR_MASK               = 0x00000008;    // 1 - Interrupt is generated
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_END_BIT_ERROR_BPOS               = 3;             // 0 - no interrupt

                                                                                                // Properties: Bit: 2, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_CRC_ERROR_MASK                   = 0x00000004;    // 1 - Interrupt is generated
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_CRC_ERROR_BPOS                   = 2;             // 0 - no interrupt

                                                                                                // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_TIMEOUT_ERROR_MASK               = 0x00000002;    // 1 - Interrupt is generated
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_TIMEOUT_ERROR_BPOS               = 1;             // 0 - no interrupt

                                                                                                // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_NOT_EXECUTED_MASK                = 0x00000001;    // 1 - Interrupt is generated
const uintptr_t SD_FORCE_EVENT_FOR_AUTO_CMD12_NOT_EXECUTED_BPOS                = 0;             // 0 - no interrupt


//------------------------------------------------------------------------------
//
// Register (SD) ADMA_ERR_ST
//
// Name                    SD_ADMA_ERR_ST_REG
// Relative Address        0x00000054
// Absolute Address        sd0: 0xE0100054
//                         sd1: 0xE0101054
// Width                   3 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             ADMA error status register
//
// Register SD_ADMA_ERR_ST_REG Details
//         When ADMA Error Interrupt occurs, the ADMA Error States field in this register holds the ADMA state
//         and the ADMA System Address Register holds the address around the error descriptor.
//
                                                                    // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
const uintptr_t SD_ADMA_LENGTH_MISMATCH_ERROR_MASK = 0x00000004;    // This error occurs in the following 2 cases.
const uintptr_t SD_ADMA_LENGTH_MISMATCH_ERROR_BPOS = 2;             // 1. While Block Count Enable being set, the total
                                                                    // data length specified by the
                                                                    // Descriptor table is different from that specified by
                                                                    // the Block Count and
                                                                    // Block Length.
                                                                    // 2. Total data length can not be divided by the
                                                                    // block
                                                                    // length.
                                                                    // 1 - Error
                                                                    // 0 - No error

                                                                    // Properties: Bits: 1:0, Type: ro, Reset Value: 0x0
const uintptr_t SD_ADMA_ERROR_STATE_MASK           = 0x00000003;    // This field indicates the state of ADMA when error
const uintptr_t SD_ADMA_ERROR_STATE_BPOS           = 0;             // is occurred during ADMA data transfer. This field
                                                                    // never indicates "10" because ADMA never stops
                                                                    // in this state.
                                                                    // D01 - D00 : ADMA Error State when
                                                                    // error is occurred
                                                                    // Contents of SYS_SDR register
                                                                    // 00 - ST_STOP (Stop DMA) Points next of the error
                                                                    // descriptor
                                                                    // 01 - ST_FDS (Fetch Descriptor) Points the error
                                                                    // descriptor
                                                                    // 10 - Never set this state (Not used)
                                                                    // 11 - ST_TFR (Transfer Data) Points the next of the
                                                                    // error descriptor


//------------------------------------------------------------------------------
//
// Register (SD) ADMA_SYS_ADDR
//
// Name                    SD_ADMA_SYS_ADDR_REG
// Relative Address        0x00000058
// Absolute Address        sd0: 0xE0100058
//                         sd1: 0xE0101058
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ADMA system address register
//
// Register SD_ADMA_SYS_ADDR_REG Details
//
                                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t SD_ADMA_SYSTEM_ADDRESS_MASK = 0xFFFFFFFF;    // This register holds byte address of executing
const uintptr_t SD_ADMA_SYSTEM_ADDRESS_BPOS = 0;             // command of the Descriptor table.
                                                             // 32-bit Address Descriptor uses lower 32-
                                                             // bit of this register. At the start of ADMA,
                                                             // the Host Driver shall set start address of
                                                             // the Descriptor table. The ADMA
                                                             // increments this register address, which
                                                             // points to next line, when every fetching a
                                                             // Descriptor line. When the ADMA Error
                                                             // Interrupt is generated, this register shall
                                                             // hold valid Descriptor address depending
                                                             // on the ADMA state. The Host Driver shall
                                                             // program Descriptor Table on 32-bit
                                                             // boundary and set 32-bit boundary
                                                             // address to this register. ADMA2 ignores
                                                             // lower 2-bit of this register and assumes it
                                                             // to be 00b.
                                                             // 32-bit Address ADMA Register Value 32-
                                                             // bit System Address
                                                             // 0x00000000 0x00000000
                                                             // 0x00000004 0x00000004
                                                             // to
                                                             // 0xFFFFFFFC 0xFFFFFFFC


//------------------------------------------------------------------------------
//
// Register (SD) BOOT_TOUT_CTRL
//
// Name                    SD_BOOT_TOUT_CTRL_REG
// Relative Address        0x00000060
// Absolute Address        sd0: 0xE0100060
//                         sd1: 0xE0101060
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Boot Timeout control register
//
// Register SD_BOOT_TOUT_CTRL_REG Details
//
                                                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t SD_BOOT_DATA_TIMEOUT_COUNTER_VALUE_MASK = 0xFFFFFFFF;    // This value determines the interval by
const uintptr_t SD_BOOT_DATA_TIMEOUT_COUNTER_VALUE_BPOS = 0;             // which DAT line time-outs are detected
                                                                         // during boot operation for MMC3.31
                                                                         // card.
                                                                         // The value is in number of sd clock.


//------------------------------------------------------------------------------
//
// Register (SD) DEBUG_SELECTION
//
// Name                    SD_DEBUG_SELECTION_REG
// Relative Address        0x00000064
// Absolute Address        sd0: 0xE0100064
//                         sd1: 0xE0101064
// Width                   1 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Debug Selection Register
//
// Register SD_DEBUG_SELECTION_REG Details
//
                                                   // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t SD_DEBUG_SEL_MASK = 0x00000001;    // 1- cmd register, Interrupt status, transmitter
const uintptr_t SD_DEBUG_SEL_BPOS = 0;             // module, ahb_iface module and clk
                                                   // sdcard signals are probed out.
                                                   // 0 - receiver module and fifo_ctrl module
                                                   // signals are probed out


//------------------------------------------------------------------------------
//
// Register (SD) SPI_INT_SUPPORT
//
// Name                    SD_SPI_INT_SUPPORT_REG
// Relative Address        0x000000F0
// Absolute Address        sd0: 0xE01000F0
//                         sd1: 0xE01010F0
// Width                   8 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             SPI interrupt support register
//
// Register SD_SPI_INT_SUPPORT_REG Details
//
                                                         // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t SD_SPI_INT_SUPPORT_MASK = 0x000000FF;    // This bit is set to indicate the assertion of interrupts
const uintptr_t SD_SPI_INT_SUPPORT_BPOS = 0;             // in the SPI mode at any time, irrespective of the
                                                         // status of the card select (CS) line. If this bit is zero,
                                                         // then SDIO card can only assert the interrupt line
                                                         // in the SPI mode when the CS line is asserted.


//------------------------------------------------------------------------------
//
// Register (SD) SLOT_INT_ST_HCV
//
// Name                     SD_SLOT_INT_ST_HCV_REG
// Relative Address         0x000000FC
// Absolute Address         sd0: 0xE01000FC
//                          sd1: 0xE01010FC
// Width                    32 bits
// Access Type              ro
// Reset Value              0x89010000
// Description              Slot interrupt status register and
//                          Host controller version register
//
// Register SD_SLOT_INT_ST_HCV_REG Details
//
                                                                        // Properties: Bits: 31:24, Type: ro, Reset Value: 0x89
const uintptr_t SD_VENDOR_VERSION_NUMBER_MASK          = 0xFF000000;    // This status is reserved for the vendor version
const uintptr_t SD_VENDOR_VERSION_NUMBER_BPOS          = 24;            // number. The HD should not use this status.

                                                                        // Properties: Bits: 23:16, Type: ro, Reset Value: 0x1
const uintptr_t SD_SPECIFICATION_VERSION_NUMBER_MASK   = 0x00FF0000;    // This status indicates the Host Controller Spec.
const uintptr_t SD_SPECIFICATION_VERSION_NUMBER_BPOS   = 16;            // Version. The upper and lower 4-bits indicate the
                                                                        // version.
                                                                        // 00 - SD Host Specification version 1.0
                                                                        // 01 - SD Host Specification version 2.00 including
                                                                        // only the feature of the Test Register
                                                                        // others - Reserved

// RESERVED                                                                Properties: Bits: 15:8, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t SD_INTERRUPT_SIGNAL_FOR_EACH_SLOT_MASK = 0x000000FF;    // These status bit indicate the logical OR of
const uintptr_t SD_INTERRUPT_SIGNAL_FOR_EACH_SLOT_BPOS = 0;             // Interrupt signal and Wakeup signal for each slot.
                                                                        // A maximum of 8 slots can be defined. If one
                                                                        // interrupt signal is associated with multiple slots.
                                                                        // the HD can know which interrupt is generated by
                                                                        // reading these status bits. By a power on reset or by
                                                                        // Software Reset For All, the Interrupt signal shall
                                                                        // be de asserted and this status shall read 00h.
                                                                        // Bit 00 - Slot 1
                                                                        // Bit 01 - Slot 2
                                                                        // Bit 02 - Slot 3
                                                                        // ----- -----
                                                                        // Bit 07 - Slot 8


#endif // PS7_SDIO_H

