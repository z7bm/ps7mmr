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
//      Name                        Address                    Width   Type     Reset Value   Description
#define SD_SDMA_ADDR_REG0          (SD0_ADDR + 0x00000000UL) //  32    rw       0x00000000    System DMA Address Register
#define SD_BLOCK_SIZE_COUNT_REG0   (SD0_ADDR + 0x00000004UL) //  32    mixed    0x00000000    Block Size
#define SD_ARGUMENT_REG0           (SD0_ADDR + 0x00000008UL) //  32    rw       0x00000000    Argument register
#define SD_TRANSFER_MODE_CMD_REG0  (SD0_ADDR + 0x0000000CUL) //  32    mixed    0x00000000    Transfer Mode
#define SD_RESPONSE_REG00          (SD0_ADDR + 0x00000010UL) //  32    ro       0x00000000    Response register
#define SD_RESPONSE_REG10          (SD0_ADDR + 0x00000014UL) //  32    ro       0x00000000    Response register
#define SD_RESPONSE_REG20          (SD0_ADDR + 0x00000018UL) //  32    ro       0x00000000    Response register
#define SD_RESPONSE_REG30          (SD0_ADDR + 0x0000001CUL) //  32    ro       0x00000000    Response register
#define SD_BUFFER_DATA_PORT_REG0   (SD0_ADDR + 0x00000020UL) //  32    rw       0x00000000    Buffer data port register
#define SD_PRESENT_STATE_REG0      (SD0_ADDR + 0x00000024UL) //  25    ro       0x01F20000    Present State register
#define SD_HS_PWR_BGAP_WKUP_REG0   (SD0_ADDR + 0x00000028UL) //  32    mixed    0x00000000    Host
#define SD_CLK_TOUT_SWRST_REG0     (SD0_ADDR + 0x0000002CUL) //  27    mixed    0x00000000    Clock
#define SD_INT_STS_REG0            (SD0_ADDR + 0x00000030UL) //  30    mixed    0x00000000    Normal
#define SD_INT_STS_EN_REG0         (SD0_ADDR + 0x00000034UL) //  30    mixed    0x00000000    Normal
#define SD_INT_EN_REG0             (SD0_ADDR + 0x00000038UL) //  30    mixed    0x00000000    Normal
#define SD_AUTO_CMD12_ERRST_REG0   (SD0_ADDR + 0x0000003CUL) //   8    ro       0x00000000    Auto CMD12 error status register
#define SD_CAPABILITIES_REG0       (SD0_ADDR + 0x00000040UL) //  31    ro       0x69EC0080    Capabilities register
#define SD_MAX_CURR_CAP_REG0       (SD0_ADDR + 0x00000048UL) //  24    ro       0x00000001    Maximum current capabilities register
#define SD_FORCE_EVENT_REG0        (SD0_ADDR + 0x00000050UL) //  32    mixed    0x00000000    Force event register for Auto CMD12 error status
#define SD_ADMA_ERR_STS_REG0       (SD0_ADDR + 0x00000054UL) //   3    mixed    0x00000000    ADMA error status register
#define SD_ADMA_SYS_ADDR_REG0      (SD0_ADDR + 0x00000058UL) //  32    rw       0x00000000    ADMA system address register
#define SD_BOOT_TOUT_CTRL_REG0     (SD0_ADDR + 0x00000060UL) //  32    rw       0x00000000    Boot Timeout control register
#define SD_DEBUG_SELECTION_REG0    (SD0_ADDR + 0x00000064UL) //   1    wo       0x00000000    Debug Selection Register
#define SD_SPI_INT_SUPPORT_REG0    (SD0_ADDR + 0x000000F0UL) //   8    rw       0x00000000    SPI interrupt support register
#define SD_SLOT_INT_STS_HCV_REG0   (SD0_ADDR + 0x000000FCUL) //  32    ro       0x89010000    Slot interrupt status register and Host controller version register
//------------------------------------------------------------------------------
//
//    SDIO1 MMRs
//
//      Name                        Address                    Width   Type     Reset Value   Description
#define SD_SDMA_ADDR_REG1          (SD1_ADDR + 0x00000000UL) //  32    rw       0x00000000    System DMA Address Register
#define SD_BLOCK_SIZE_COUNT_REG1   (SD1_ADDR + 0x00000004UL) //  32    mixed    0x00000000    Block Size
#define SD_ARGUMENT_REG1           (SD1_ADDR + 0x00000008UL) //  32    rw       0x00000000    Argument register
#define SD_TRANSFER_MODE_CMD_REG1  (SD1_ADDR + 0x0000000CUL) //  32    mixed    0x00000000    Transfer Mode
#define SD_RESPONSE_REG01          (SD1_ADDR + 0x00000010UL) //  32    ro       0x00000000    Response register
#define SD_RESPONSE_REG11          (SD1_ADDR + 0x00000014UL) //  32    ro       0x00000000    Response register
#define SD_RESPONSE_REG21          (SD1_ADDR + 0x00000018UL) //  32    ro       0x00000000    Response register
#define SD_RESPONSE_REG31          (SD1_ADDR + 0x0000001CUL) //  32    ro       0x00000000    Response register
#define SD_BUFFER_DATA_PORT_REG1   (SD1_ADDR + 0x00000020UL) //  32    rw       0x00000000    Buffer data port register
#define SD_PRESENT_STATE_REG1      (SD1_ADDR + 0x00000024UL) //  25    ro       0x01F20000    Present State register
#define SD_HS_PWR_BGAP_WKUP_REG1   (SD1_ADDR + 0x00000028UL) //  32    mixed    0x00000000    Host
#define SD_CLK_TOUT_SWRST_REG1     (SD1_ADDR + 0x0000002CUL) //  27    mixed    0x00000000    Clock
#define SD_INT_STS_REG1            (SD1_ADDR + 0x00000030UL) //  30    mixed    0x00000000    Normal
#define SD_INT_STS_EN_REG1         (SD1_ADDR + 0x00000034UL) //  30    mixed    0x00000000    Normal
#define SD_INT_EN_REG1             (SD1_ADDR + 0x00000038UL) //  30    mixed    0x00000000    Normal
#define SD_AUTO_CMD12_ERRST_REG1   (SD1_ADDR + 0x0000003CUL) //   8    ro       0x00000000    Auto CMD12 error status register
#define SD_CAPABILITIES_REG1       (SD1_ADDR + 0x00000040UL) //  31    ro       0x69EC0080    Capabilities register
#define SD_MAX_CURR_CAP_REG1       (SD1_ADDR + 0x00000048UL) //  24    ro       0x00000001    Maximum current capabilities register
#define SD_FORCE_EVENT_REG1        (SD1_ADDR + 0x00000050UL) //  32    mixed    0x00000000    Force event register for Auto CMD12 error status
#define SD_ADMA_ERR_STS_REG1       (SD1_ADDR + 0x00000054UL) //   3    mixed    0x00000000    ADMA error status register
#define SD_ADMA_SYS_ADDR_REG1      (SD1_ADDR + 0x00000058UL) //  32    rw       0x00000000    ADMA system address register
#define SD_BOOT_TOUT_CTRL_REG1     (SD1_ADDR + 0x00000060UL) //  32    rw       0x00000000    Boot Timeout control register
#define SD_DEBUG_SELECTION_REG1    (SD1_ADDR + 0x00000064UL) //   1    wo       0x00000000    Debug Selection Register
#define SD_SPI_INT_SUPPORT_REG1    (SD1_ADDR + 0x000000F0UL) //   8    rw       0x00000000    SPI interrupt support register
#define SD_SLOT_INT_STS_HCV_REG1   (SD1_ADDR + 0x000000FCUL) //  32    ro       0x89010000    Slot interrupt status register and Host controller version register
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
#define SD_SDMA_SYSTEM_ADDRESS_MASK  0xFFFFFFFFUL    // Watchdog enable - if set, the watchdog is enabled
#define SD_SDMA_SYSTEM_ADDRESS_BPOS  0UL             // and can generate any signals that are enabled.


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
#define SD_BLOCKS_COUNT_FOR_CURRENT_TRANSFER_MASK  0xFFFF0000UL    // This register is enabled when Block Count Enable
#define SD_BLOCKS_COUNT_FOR_CURRENT_TRANSFER_BPOS  16UL            // in the Transfer
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

// RESERVED                                                           Properties: Bit: 15, Type: ro, Reset Value: 0x0

                                                                   // Properties: Bits: 14:12, Type: rw, Reset Value: 0x0
#define SD_HOST_SDMA_BUFFER_SIZE_MASK              0x00007000UL    // To perform long DMA transfer, the System
#define SD_HOST_SDMA_BUFFER_SIZE_BPOS              12UL            // Address register shall be updated at every system
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
#define SD_TRANSFER_BLOCK_SIZE_MASK                0x00000FFFUL    // This register specifies the block size for block data
#define SD_TRANSFER_BLOCK_SIZE_BPOS                0UL             // transfers for CMD17, CMD18, CMD24, CMD25,
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
#define SD_COMMAND_ARGUMENT_MASK  0xFFFFFFFFUL    // The SD Command Argument is specified as bit
#define SD_COMMAND_ARGUMENT_BPOS  0UL             // 39-8 of Command-Format.


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
// RESERVED                                                        Properties: Bits: 31:30, Type: ro, Reset Value: 0x0

                                                                // Properties: Bits: 29:24, Type: rw, Reset Value: 0x0
#define SD_COMMAND_INDEX_MASK                   0x3F000000UL    // This bit shall be set to the command number
#define SD_COMMAND_INDEX_BPOS                   24UL            // (CMD0-63, ACMD0-63).

                                                                // Properties: Bits: 23:22, Type: rw, Reset Value: 0x0
#define SD_COMMAND_TYPE_MASK                    0x00C00000UL    // There are three types of special commands.
#define SD_COMMAND_TYPE_BPOS                    22UL            // Suspend, Resume and Abort. These bits shall bet
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
#define SD_DATA_PRESENT_SELECT_MASK             0x00200000UL    // This bit is set to 1 to indicate that data is present
#define SD_DATA_PRESENT_SELECT_BPOS             21UL            // and shall be transferred using the DAT line. If is
                                                                // set to 0 for the following:
                                                                // 1. Commands using only CMD line (ex. CMD52)
                                                                // 2. Commands with no data transfer but using
                                                                // busy signal on DAT[0]
                                                                // line (R1b or R5b ex. CMD38)
                                                                // 3. Resume Command
                                                                // 0 - No Data Present
                                                                // 1 - Data Present

                                                                // Properties: Bit: 20, Type: rw, Reset Value: 0x0
#define SD_COMMAND_INDEX_CHECK_ENABLE_MASK      0x00100000UL    // If this bit is set to 1, the HC shall check the index
#define SD_COMMAND_INDEX_CHECK_ENABLE_BPOS      20UL            // field in the response to see if it has the same value
                                                                // as the command index. If it is not, it is reported as
                                                                // a Command Index Error. If this bit is set to 0, the
                                                                // Index field is not checked.
                                                                // 0 - Disable
                                                                // 1 - Enable

                                                                // Properties: Bit: 19, Type: rw, Reset Value: 0x0
#define SD_COMMAND_CRC_CHECK_ENABLE_MASK        0x00080000UL    // If this bit is set to 1, the HC shall check the CRC
#define SD_COMMAND_CRC_CHECK_ENABLE_BPOS        19UL            // field in the response. If an error is detected, it is
                                                                // reported as a Command CRC Error. If this bit is
                                                                // set to 0, the CRC field is not checked.
                                                                // 0 - Disable
                                                                // 1 - Enable

// RESERVED                                                        Properties: Bit: 18, Type: ro, Reset Value: 0x0

                                                                // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
#define SD_RESPONSE_TYPE_SELECT_MASK            0x00030000UL    // Response Type Select
#define SD_RESPONSE_TYPE_SELECT_BPOS            16UL            // 00 - No Response
                                                                // 01 - Response length 136
                                                                // 10 - Response length 48
                                                                // 11 - Response length 48 check
                                                                // Busy after response

// RESERVED                                                        Properties: Bits: 15:6, Type: ro, Reset Value: 0x0

                                                                // Properties: Bit: 5, Type: rw, Reset Value: 0x0
#define SD_MULTI_SINGLE_BLOCK_SELECT_MASK       0x00000020UL    // This bit enables multiple block DAT line data
#define SD_MULTI_SINGLE_BLOCK_SELECT_BPOS       5UL             // transfers.
                                                                // 0 - Single Block
                                                                // 1 - Multiple Block

                                                                // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define SD_DATA_TRANSFER_DIRECTION_SELECT_MASK  0x00000010UL    // This bit defines the direction of DAT line data
#define SD_DATA_TRANSFER_DIRECTION_SELECT_BPOS  4UL             // transfers.
                                                                // 0 - Write (Host to Card)
                                                                // 1 - Read (Card to Host)

// RESERVED                                                        Properties: Bit: 3, Type: ro, Reset Value: 0x0

                                                                // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define SD_AUTO_CMD12_ENABLE_MASK               0x00000004UL    // Multiple block transfers for memory require
#define SD_AUTO_CMD12_ENABLE_BPOS               2UL             // CMD12 to stop the transaction. When this bit is
                                                                // set to 1, the HC shall issue CMD12 automatically
                                                                // when last block transfer is completed. The HD
                                                                // shall not set this bit to issue commands that do not
                                                                // require CMD12 to stop data transfer.
                                                                // 0 - Disable
                                                                // 1 - Enable

                                                                // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define SD_BLOCK_COUNT_ENABLE_MASK              0x00000002UL    // This bit is used to enable the Block count register,
#define SD_BLOCK_COUNT_ENABLE_BPOS              1UL             // which is only relevant for multiple block
                                                                // transfers. When this bit is 0, the Block Count
                                                                // register is disabled, which is useful in executing
                                                                // an infinite transfer.
                                                                // 0 - Disable
                                                                // 1 - Enable

                                                                // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define SD_DMA_ENABLE_MASK                      0x00000001UL    // DMA can be enabled only if DMA Support bit in
#define SD_DMA_ENABLE_BPOS                      0UL             // the Capabilities register is set. If this bit is set to 1,
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
#define SD_COMMAND_RESPONSE_MASK  0xFFFFFFFFUL    // command responses registers
#define SD_COMMAND_RESPONSE_BPOS  0UL             // 


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
#define SD_BUFFER_DATA_PORT_MASK  0xFFFFFFFFUL    // The Host Controller Buffer can be accessed
#define SD_BUFFER_DATA_PORT_BPOS  0UL             // through this 32-bit Data Port Register.


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
// RESERVED                                                                  Properties: Bits: 31:27, Type: ro, Reset Value: 0x0

                                                                          // Properties: Bit: 26, Type: rw, Reset Value: 0x0
#define SD_WAKEUP_EVENT_ENABLE_ON_SD_CARD_REMOVAL_MASK    0x04000000UL    // This bit enables wakeup event via
#define SD_WAKEUP_EVENT_ENABLE_ON_SD_CARD_REMOVAL_BPOS    26UL            // Card Removal assertion in the
                                                                          // Normal Interrupt Status register.
                                                                          // FN_WUS (Wake up Support) in
                                                                          // CIS does not affect this bit.
                                                                          // 1 - Enable
                                                                          // 0 - Disable

                                                                          // Properties: Bit: 25, Type: rw, Reset Value: 0x0
#define SD_WAKEUP_EVENT_ENABLE_ON_SD_CARD_INSERTION_MASK  0x02000000UL    // This bit enables wakeup event via Card Insertion
#define SD_WAKEUP_EVENT_ENABLE_ON_SD_CARD_INSERTION_BPOS  25UL            // assertion in the Normal Interrupt Status register.
                                                                          // FN_WUS (Wake up Support) in CIS does not
                                                                          // affect this bit.
                                                                          // 1 - Enable
                                                                          // 0 - Disable

                                                                          // Properties: Bit: 24, Type: rw, Reset Value: 0x0
#define SD_WAKEUP_EVENT_ENABLE_ON_CARD_INTERRUPT_MASK     0x01000000UL    // This bit enables wakeup event via
#define SD_WAKEUP_EVENT_ENABLE_ON_CARD_INTERRUPT_BPOS     24UL            // Card Interrupt assertion in the
                                                                          // Normal Interrupt Status register.
                                                                          // This bit can be set to 1 if FN_WUS
                                                                          // (Wake Up Support) in CIS is set to
                                                                          // 1.
                                                                          // 1 - Enable
                                                                          // 0 - Disable

// RESERVED                                                                  Properties: Bits: 23:20, Type: ro, Reset Value: 0x0

                                                                          // Properties: Bit: 19, Type: rw, Reset Value: 0x0
#define SD_INTERRUPT_AT_BLOCK_GAP_MASK                    0x00080000UL    // This bit is valid only in 4-bit mode of the SDIO
#define SD_INTERRUPT_AT_BLOCK_GAP_BPOS                    19UL            // card and selects a sample point in the interrupt
                                                                          // cycle. Setting to 1 enables interrupt detection at
                                                                          // the block gap for a multiple block transfer. If the
                                                                          // SD card cannot signal an interrupt during a
                                                                          // multiple
                                                                          // block transfer, this bit should be set to 0.
                                                                          // When the HD detects an SD card insertion, it shall
                                                                          // set this bit according to the CCCR of the SDIO
                                                                          // card.

                                                                          // Properties: Bit: 18, Type: rw, Reset Value: 0x0
#define SD_READ_WAIT_CONTROL_MASK                         0x00040000UL    // The read wait function is optional for SDIO cards.
#define SD_READ_WAIT_CONTROL_BPOS                         18UL            // If the card supports read wait, set this bit to
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
#define SD_CONTINUE_REQUEST_MASK                          0x00020000UL    // This bit is used to restart a transaction which was
#define SD_CONTINUE_REQUEST_BPOS                          17UL            // stopped using the Stop At Block Gap Request. To
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
#define SD_STOP_AT_BLOCK_GAP_REQUEST_MASK                 0x00010000UL    // This bit is used to stop executing a transaction at
#define SD_STOP_AT_BLOCK_GAP_REQUEST_BPOS                 16UL            // the next block gap for non- DMA,SDMA and
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

// RESERVED                                                                  Properties: Bits: 15:12, Type: ro, Reset Value: 0x0

                                                                          // Properties: Bits: 11:9, Type: rw, Reset Value: 0x0
#define SD_SD_BUS_VOLTAGE_SELECT_MASK                     0x00000E00UL    // By setting these bits, the HD selects the voltage
#define SD_SD_BUS_VOLTAGE_SELECT_BPOS                     9UL             // level for the SD card. Before setting this register,
                                                                          // the HD shall check the voltage support bits
                                                                          // in the capabilities register. If an unsupported
                                                                          // voltage is selected, the
                                                                          // Host System shall not supply SD bus voltage
                                                                          // 111b - 3.3 Flattop.)
                                                                          // 110b - 3.0 V(Typ.)
                                                                          // 101b - 1.8 V(Typ.)
                                                                          // 100b - 000b - Reserved

                                                                          // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define SD_SD_BUS_POWER_MASK                              0x00000100UL    // Before setting this bit, the SD host driver shall set
#define SD_SD_BUS_POWER_BPOS                              8UL             // SD Bus Voltage Select. If the HC detects the No
                                                                          // Card State, this bit shall be cleared.
                                                                          // 1 - Power on
                                                                          // 0 - Power off

                                                                          // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define SD_CARD_DETECT_SIGNAL_DETETCTION_MASK             0x00000080UL    // This bit selects source for card detection.
#define SD_CARD_DETECT_SIGNAL_DETETCTION_BPOS             7UL             // 1- The card detect test level is selected
                                                                          // 0 -SDCD# is selected (for normal use)

                                                                          // Properties: Bit: 6, Type: rw, Reset Value: 0x0
#define SD_CARD_DETECT_TEST_LEVEL_MASK                    0x00000040UL    // This bit is enabled while the Card Detect Signal
#define SD_CARD_DETECT_TEST_LEVEL_BPOS                    6UL             // Selection is set to 1 and it
                                                                          // indicates card inserted or not. Generates (card ins
                                                                          // or card removal) interrupt when the normal int sts
                                                                          // enable bit is set.
                                                                          // 1 - Card Inserted
                                                                          // 0 - No Card

// RESERVED                                                                  Properties: Bit: 5, Type: ro, Reset Value: 0x0

                                                                          // Properties: Bits: 4:3, Type: rw, Reset Value: 0x0
#define SD_DMA_SELECT_MASK                                0x00000018UL    // One of supported DMA modes can be selected.
#define SD_DMA_SELECT_BPOS                                3UL             // The host driver shall check support of DMA
                                                                          // modes by referring the Capabilities register.
                                                                          // 00 - SDMA is selected
                                                                          // 01 - 32-bit Address ADMA1 is selected
                                                                          // 10 -32-bit Address ADMA2 is selected
                                                                          // 11 - 64-bit Address ADMA2 is selected

                                                                          // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define SD_HIGH_SPEED_ENABLE_MASK                         0x00000004UL    // This bit is optional. Before setting this bit, the HD
#define SD_HIGH_SPEED_ENABLE_BPOS                         2UL             // shall check the High Speed Support in the
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
#define SD_DATA_TRANSFER_WIDTH_SD1_OR_SD4_MASK            0x00000002UL    // This bit selects the data width of the HC. The HD
#define SD_DATA_TRANSFER_WIDTH_SD1_OR_SD4_BPOS            1UL             // shall select it to match the data width of the SD
                                                                          // card.
                                                                          // 1 - 4 bit mode
                                                                          // 0 - 1 bit mode

                                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define SD_LED_CONTROL_MASK                               0x00000001UL    // This bit is used to caution the user not to remove
#define SD_LED_CONTROL_BPOS                               0UL             // the card while the SD card is being accessed. If the
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
#define SD_SOFTWARE_RESET_FOR_DAT_LINE_MASK  0x04000000UL    // Only part of data circuit is reset. The following
#define SD_SOFTWARE_RESET_FOR_DAT_LINE_BPOS  26UL            // registers and bits are cleared by this bit:
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
#define SD_SOFTWARE_RESET_FOR_CMD_LINE_MASK  0x02000000UL    // Only part of command circuit is reset. The
#define SD_SOFTWARE_RESET_FOR_CMD_LINE_BPOS  25UL            // following registers and bits are cleared by this bit:
                                                             // Present State register
                                                             // Command Inhibit (CMD)
                                                             // Normal Interrupt Status register
                                                             // Command Complete
                                                             // 1 - Reset
                                                             // 0 - Work

                                                             // Properties: Bit: 24, Type: rw, Reset Value: 0x0
#define SD_SOFTWARE_RESET_FOR_ALL_MASK       0x01000000UL    // This reset affects the entire HC except for the card
#define SD_SOFTWARE_RESET_FOR_ALL_BPOS       24UL            // detection circuit. Register bits of type ROC, RW,
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

// RESERVED                                                     Properties: Bits: 23:20, Type: ro, Reset Value: 0x0

                                                             // Properties: Bits: 19:16, Type: rw, Reset Value: 0x0
#define SD_DATA_TIMEOUT_COUNTER_VALUE__MASK  0x000F0000UL    // This value determines the interval by which DAT
#define SD_DATA_TIMEOUT_COUNTER_VALUE__BPOS  16UL            // line time-outs are detected. Refer to the Data
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
#define SD_SDCLK_FREQUENCY_SELECT_MASK       0x0000FF00UL    // This register is used to select the frequency of the
#define SD_SDCLK_FREQUENCY_SELECT_BPOS       8UL             // SDCLK pin. The frequency is not programmed
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

// RESERVED                                                     Properties: Bits: 7:3, Type: ro, Reset Value: 0x0

                                                             // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define SD_SD_CLOCK_ENABLE_MASK              0x00000004UL    // The HC shall stop SDCLK when writing this bit to
#define SD_SD_CLOCK_ENABLE_BPOS              2UL             // 0. SDCLK frequency Select can be changed when
                                                             // this bit is 0. Then, the HC shall maintain the same
                                                             // clock frequency until SDCLK is stopped (Stop at
                                                             // SDCLK = 0). If the HC detects the No Card state,
                                                             // this bit shall be cleared.
                                                             // 1 - Enable
                                                             // 0 - Disable

                                                             // Properties: Bit: 1, Type: ro, Reset Value: 0x0
#define SD_INTERNAL_CLOCK_STABLE_MASK        0x00000002UL    // This bit is set to 1 when SD clock is stable after
#define SD_INTERNAL_CLOCK_STABLE_BPOS        1UL             // writing to Internal Clock Enable in this register to
                                                             // 1. The SD Host Driver shall wait to set SD Clock
                                                             // Enable until this bit is set to 1.
                                                             // Note: This is useful when using PLL for a clock
                                                             // oscillator that requires setup time.
                                                             // 1 - Ready
                                                             // 0 - Not Ready

                                                             // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define SD_INTERNAL_CLOCK_ENABLE_MASK        0x00000001UL    // This bit is set to 0 when the HD is not using the
#define SD_INTERNAL_CLOCK_ENABLE_BPOS        0UL             // HC or the HC awaits a wakeup event. The HC
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
#define SD_CEATA_ERROR_STATUS_MASK         0x20000000UL    // Occurs when ATA command termination has
#define SD_CEATA_ERROR_STATUS_BPOS         29UL            // occurred due to an error condition the device has
                                                           // encountered.
                                                           // 0 - no error
                                                           // 1 - error

                                                           // Properties: Bit: 28, Type: wtc, Reset Value: 0x0
#define SD_TARGET_RESPONSE_ERROR_MASK      0x10000000UL    // Occurs when detecting ERROR in m_hresp(dma
#define SD_TARGET_RESPONSE_ERROR_BPOS      28UL            // transaction)
                                                           // 0 - no error
                                                           // 1 - error

// RESERVED                                                   Properties: Bits: 27:26, Type: ro, Reset Value: 0x0

                                                           // Properties: Bit: 25, Type: wtc, Reset Value: 0x0
#define SD_ADMA_ERROR_MASK                 0x02000000UL    // This bit is set when the Host Controller detects
#define SD_ADMA_ERROR_BPOS                 25UL            // errors during ADMA based data transfer. The
                                                           // state of the ADMA at an error occurrence is saved
                                                           // in the ADMA Error Status Register.
                                                           // 1- Error
                                                           // 0 -No error

                                                           // Properties: Bit: 24, Type: wtc, Reset Value: 0x0
#define SD_INT_STATUS_AUTO_CMD12_ERR_MASK  0x01000000UL    // Occurs when detecting that one of the bits in Auto
#define SD_INT_STATUS_AUTO_CMD12_ERR_BPOS  24UL            // CMD12 Error Status register has changed from 0
                                                           // to 1. This bit is set to 1 also when Auto CMD12 is
                                                           // not executed due to the previous command error.
                                                           // 0 - No Error
                                                           // 1 - Error

                                                           // Properties: Bit: 23, Type: wtc, Reset Value: 0x0
#define SD_CURRENT_LIMIT_ERROR_MASK        0x00800000UL    // By setting the SD Bus Power bit in the Power
#define SD_CURRENT_LIMIT_ERROR_BPOS        23UL            // Control Register, the HC is requested to supply
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
#define SD_DATA_END_BIT_ERROR_MASK         0x00400000UL    // Occurs when detecting 0 at the end bit position of
#define SD_DATA_END_BIT_ERROR_BPOS         22UL            // read data which uses the DAT line or the end bit
                                                           // position of the CRC status.
                                                           // 0 - No Error
                                                           // 1 - Error

                                                           // Properties: Bit: 21, Type: wtc, Reset Value: 0x0
#define SD_DATA_CRC_ERROR_MASK             0x00200000UL    // Occurs when detecting CRC error when
#define SD_DATA_CRC_ERROR_BPOS             21UL            // transferring read data which uses the DAT line or
                                                           // when detecting the Write CRC Status having a
                                                           // value of other than '010'.
                                                           // 0 - No Error
                                                           // 1 - Error

                                                           // Properties: Bit: 20, Type: wtc, Reset Value: 0x0
#define SD_DATA_TIMEOUT_ERROR_MASK         0x00100000UL    // Occurs when detecting one of following timeout
#define SD_DATA_TIMEOUT_ERROR_BPOS         20UL            // conditions.
                                                           // 1. Busy Timeout for R1b, R5b type.
                                                           // 2. Busy Timeout after Write CRC status
                                                           // 3. Write CRC status Timeout
                                                           // 4. Read Data Timeout
                                                           // 0 - No Error
                                                           // 1 - Timeout

                                                           // Properties: Bit: 19, Type: wtc, Reset Value: 0x0
#define SD_COMMAND_INDEX_ERROR_MASK        0x00080000UL    // Occurs if a Command Index error occurs in the
#define SD_COMMAND_INDEX_ERROR_BPOS        19UL            // Command Response.
                                                           // 0 - No Error
                                                           // 1 - Error

                                                           // Properties: Bit: 18, Type: wtc, Reset Value: 0x0
#define SD_COMMAND_END_BIT_ERROR_MASK      0x00040000UL    // Occurs when detecting that the end bit of a
#define SD_COMMAND_END_BIT_ERROR_BPOS      18UL            // command response is 0.
                                                           // 0 - No Error
                                                           // 1 - End Bit Error Generated

                                                           // Properties: Bit: 17, Type: wtc, Reset Value: 0x0
#define SD_COMMAND_CRC_ERROR_MASK          0x00020000UL    // Command CRC Error is generated in two cases.
#define SD_COMMAND_CRC_ERROR_BPOS          17UL            // 1. If a response is returned and the Command
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
#define SD_COMMAND_TIMEOUT_ERROR_MASK      0x00010000UL    // Occurs only if the no response is returned within 64
#define SD_COMMAND_TIMEOUT_ERROR_BPOS      16UL            // SDCLK cycles from the end bit of the
                                                           // command. If the HC detects a CMD line conflict,
                                                           // in which case Command CRC Error shall also be
                                                           // set. This bit shall be set without waiting for 64
                                                           // SDCLK cycles because the command will be
                                                           // aborted by the HC.
                                                           // 0 - No Error
                                                           // 1 - Timeout

                                                           // Properties: Bit: 15, Type: ro, Reset Value: 0x0
#define SD_ERROR_INTERRUPT_MASK            0x00008000UL    // If any of the bits in the Error Interrupt Status
#define SD_ERROR_INTERRUPT_BPOS            15UL            // Register are set, then this bit is set. Therefore the
                                                           // HD can test for an error by checking this bit first.
                                                           // 0 - No Error.
                                                           // 1 - Error.

// RESERVED                                                   Properties: Bits: 14:11, Type: ro, Reset Value: 0x0

                                                           // Properties: Bit: 10, Type: wtc, Reset Value: 0x0
#define SD_BOOT_TERMINATE_INTERRUPT_MASK   0x00000400UL    // This status is set if the boot operation get
#define SD_BOOT_TERMINATE_INTERRUPT_BPOS   10UL            // terminated
                                                           // 0 - Boot operation is not terminated.
                                                           // 1 - Boot operation is terminated

                                                           // Properties: Bit: 9, Type: wtc, Reset Value: 0x0
#define SD_BOOT_ACK_RCV_MASK               0x00000200UL    // This status is set if the boot acknowledge is
#define SD_BOOT_ACK_RCV_BPOS               9UL             // received from device.
                                                           // 0 - Boot ack is not received.
                                                           // 1 - Boot ack is received.

                                                           // Properties: Bit: 8, Type: ro, Reset Value: 0x0
#define SD_CARD_INTERRUPT_MASK             0x00000100UL    // Writing this bit to 1 does not clear this bit. It is
#define SD_CARD_INTERRUPT_BPOS             8UL             // cleared by resetting the SD card interrupt factor.
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
#define SD_CARD_REMOVAL_MASK               0x00000080UL    // This status is set if the Card Inserted in the Present
#define SD_CARD_REMOVAL_BPOS               7UL             // State register changes from 1 to 0. When the HD
                                                           // writes this bit to 1 to clear this status the status of
                                                           // the Card Inserted in the Present State register
                                                           // should be confirmed.
                                                           // Because the card detect may possibly be changed
                                                           // when the HD clear this bit an Interrupt event may
                                                           // not be generated.
                                                           // 0 - Card State Stable or Debouncing
                                                           // 1 - Card Removed

                                                           // Properties: Bit: 6, Type: wtc, Reset Value: 0x0
#define SD_CARD_INSERTION_MASK             0x00000040UL    // This status is set if the Card Inserted in the Present
#define SD_CARD_INSERTION_BPOS             6UL             // State register changes from 0 to 1. When the HD
                                                           // writes this bit to 1 to clear this status the status of
                                                           // the Card Inserted in the Present State register
                                                           // should be confirmed.
                                                           // Because the card detect may possibly be changed
                                                           // when the HD clear this bit an Interrupt event may
                                                           // not be generated.
                                                           // 0 - Card State Stable or Debouncing
                                                           // 1 - Card Inserted

                                                           // Properties: Bit: 5, Type: wtc, Reset Value: 0x0
#define SD_BUFFER_READ_READY_MASK          0x00000020UL    // This status is set if the Buffer Read Enable
#define SD_BUFFER_READ_READY_BPOS          5UL             // changes from 0 to 1.
                                                           // 0 - Not Ready to read Buffer.
                                                           // 1 - Ready to read Buffer.

                                                           // Properties: Bit: 4, Type: wtc, Reset Value: 0x0
#define SD_BUFFER_WRITE_READY_MASK         0x00000010UL    // This status is set if the Buffer Write Enable
#define SD_BUFFER_WRITE_READY_BPOS         4UL             // changes from 0 to 1.
                                                           // 0 - Not Ready to Write Buffer.
                                                           // 1 - Ready to Write Buffer.

                                                           // Properties: Bit: 3, Type: wtc, Reset Value: 0x0
#define SD_DMA_INTERRUPT_MASK              0x00000008UL    // This status is set if the HC detects the Host
#define SD_DMA_INTERRUPT_BPOS              3UL             // DMA Buffer Boundary in the Block Size
                                                           // register.
                                                           // 0 - No DMA Interrupt
                                                           // 1 - DMA Interrupt is Generated

                                                           // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
#define SD_BLOCK_GAP_EVENT_MASK            0x00000004UL    // If the Stop At Block Gap Request in the Block
#define SD_BLOCK_GAP_EVENT_BPOS            2UL             // Gap Control Register is set, this bit is set.
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
#define SD_TRANSFER_COMPLETE_MASK          0x00000002UL    // This bit is set when a read / write transaction is
#define SD_TRANSFER_COMPLETE_BPOS          1UL             // completed.
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
#define SD_COMMAND_COMPLETE_MASK           0x00000001UL    // This bit is set when get the end bit of the
#define SD_COMMAND_COMPLETE_BPOS           0UL             // command response (Except Auto CMD12).
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
#define SD_CEATA_ERROR_STATUS_ENABLE_MASK            0x20000000UL    // 0 - Masked
#define SD_CEATA_ERROR_STATUS_ENABLE_BPOS            29UL            // 1 - Enabled

                                                                     // Properties: Bit: 28, Type: rw, Reset Value: 0x0
#define SD_TARGET_RESPONSE_ERROR_STATUS_ENABLE_MASK  0x10000000UL    // 0 - Masked
#define SD_TARGET_RESPONSE_ERROR_STATUS_ENABLE_BPOS  28UL            // 1 - Enabled

// RESERVED                                                             Properties: Bits: 27:26, Type: ro, Reset Value: 0x0

                                                                     // Properties: Bit: 25, Type: rw, Reset Value: 0x0
#define SD_ADMA_ERROR_STATUS_ENABLE_MASK             0x02000000UL    // 0 - Masked
#define SD_ADMA_ERROR_STATUS_ENABLE_BPOS             25UL            // 1 - Enabled

                                                                     // Properties: Bit: 24, Type: rw, Reset Value: 0x0
#define SD_AUTO_CMD12_ERROR_STATUS_ENABLE_MASK       0x01000000UL    // 0 - Masked
#define SD_AUTO_CMD12_ERROR_STATUS_ENABLE_BPOS       24UL            // 1 - Enabled

                                                                     // Properties: Bit: 23, Type: rw, Reset Value: 0x0
#define SD_CURRENT_LIMIT_ERROR_STATUS_ENABLE_MASK    0x00800000UL    // 0 - Masked
#define SD_CURRENT_LIMIT_ERROR_STATUS_ENABLE_BPOS    23UL            // 1 - Enabled

                                                                     // Properties: Bit: 22, Type: rw, Reset Value: 0x0
#define SD_DATA_END_BIT_ERROR_STATUS_ENABLE_MASK     0x00400000UL    // 0 - Masked
#define SD_DATA_END_BIT_ERROR_STATUS_ENABLE_BPOS     22UL            // 1 - Enabled

                                                                     // Properties: Bit: 21, Type: rw, Reset Value: 0x0
#define SD_DATA_CRC_ERROR_STATUS_ENABLE_MASK         0x00200000UL    // 0 - Masked
#define SD_DATA_CRC_ERROR_STATUS_ENABLE_BPOS         21UL            // 1 - Enabled

                                                                     // Properties: Bit: 20, Type: rw, Reset Value: 0x0
#define SD_DATA_TIMEOUT_ERROR_STATUS_ENABLE_MASK     0x00100000UL    // 0 - Masked
#define SD_DATA_TIMEOUT_ERROR_STATUS_ENABLE_BPOS     20UL            // 1 - Enabled

                                                                     // Properties: Bit: 19, Type: rw, Reset Value: 0x0
#define SD_COMMAND_INDEX_ERROR_STATUS_ENABLE_MASK    0x00080000UL    // 0 - Masked
#define SD_COMMAND_INDEX_ERROR_STATUS_ENABLE_BPOS    19UL            // 1 - Enabled

                                                                     // Properties: Bit: 18, Type: rw, Reset Value: 0x0
#define SD_COMMAND_END_BIT_ERROR_STATUS_ENABLE_MASK  0x00040000UL    // 0 - Masked
#define SD_COMMAND_END_BIT_ERROR_STATUS_ENABLE_BPOS  18UL            // 1 - Enabled

                                                                     // Properties: Bit: 17, Type: rw, Reset Value: 0x0
#define SD_COMMAND_CRC_ERROR_STATUS_ENABLE_MASK      0x00020000UL    // 0 - Masked
#define SD_COMMAND_CRC_ERROR_STATUS_ENABLE_BPOS      17UL            // 1 - Enabled

                                                                     // Properties: Bit: 16, Type: rw, Reset Value: 0x0
#define SD_COMMAND_TIMEOUT_ERROR_STATUS_ENABLE_MASK  0x00010000UL    // 0 - Masked
#define SD_COMMAND_TIMEOUT_ERROR_STATUS_ENABLE_BPOS  16UL            // 1 - Enabled

                                                                     // Properties: Bit: 15, Type: ro, Reset Value: 0x0
#define SD_FIXED_TO_0_STATUS_ENABLE_MASK             0x00008000UL    // The HC shall control error Interrupts using the
#define SD_FIXED_TO_0_STATUS_ENABLE_BPOS             15UL            // Error Interrupt Status Enable register.

// RESERVED                                                             Properties: Bits: 14:11, Type: ro, Reset Value: 0x0

                                                                     // Properties: Bit: 10, Type: rw, Reset Value: 0x0
#define SD_BOOT_TERMINATE_INTERRUPT_ENABLE_MASK      0x00000400UL    // 0 - Masked
#define SD_BOOT_TERMINATE_INTERRUPT_ENABLE_BPOS      10UL            // 1 - Enabled

                                                                     // Properties: Bit: 9, Type: rw, Reset Value: 0x0
#define SD_BOOT_ACK_RCV_ENABLE_MASK                  0x00000200UL    // 0 - Masked
#define SD_BOOT_ACK_RCV_ENABLE_BPOS                  9UL             // 1 - Enabled

                                                                     // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define SD_CARD_INTERRUPT_STATUS_ENABLE_MASK         0x00000100UL    // If this bit is set to 0, the HC shall clear Interrupt
#define SD_CARD_INTERRUPT_STATUS_ENABLE_BPOS         8UL             // request to the System. The Card Interrupt
                                                                     // detection is stopped when this bit is cleared and
                                                                     // restarted when this bit is set to 1. The HD should
                                                                     // clear the Card Interrupt Status Enable before
                                                                     // servicing the Card Interrupt and should set this
                                                                     // bit again after all Interrupt requests from the card
                                                                     // are cleared to prevent inadvertent Interrupts.
                                                                     // 0 - Masked
                                                                     // 1 - Enabled

                                                                     // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define SD_CARD_REMOVAL_STATUS_ENABLE_MASK           0x00000080UL    // 0 - Masked
#define SD_CARD_REMOVAL_STATUS_ENABLE_BPOS           7UL             // 1 - Enabled

                                                                     // Properties: Bit: 6, Type: rw, Reset Value: 0x0
#define SD_CARD_INSERTION_STATUS_ENABLE_MASK         0x00000040UL    // 0 - Masked
#define SD_CARD_INSERTION_STATUS_ENABLE_BPOS         6UL             // 1 - Enabled

                                                                     // Properties: Bit: 5, Type: rw, Reset Value: 0x0
#define SD_BUFFER_READ_READY_STATUS_ENABLE_MASK      0x00000020UL    // 0 - Masked
#define SD_BUFFER_READ_READY_STATUS_ENABLE_BPOS      5UL             // 1 - Enabled

                                                                     // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define SD_BUFFER_WRITE_READY_STATUS_ENABLE_MASK     0x00000010UL    // 0 - Masked
#define SD_BUFFER_WRITE_READY_STATUS_ENABLE_BPOS     4UL             // 1 - Enabled

                                                                     // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define SD_DMA_INTERRUPT_STATUS_ENABLE_MASK          0x00000008UL    // 0 - Masked
#define SD_DMA_INTERRUPT_STATUS_ENABLE_BPOS          3UL             // 1 - Enabled

                                                                     // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define SD_BLOCK_GAP_EVENT_STATUS_ENABLE_MASK        0x00000004UL    // 0 - Masked
#define SD_BLOCK_GAP_EVENT_STATUS_ENABLE_BPOS        2UL             // 1 - Enabled

                                                                     // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define SD_TRANSFER_COMPLETE_STATUS_ENABLE_MASK      0x00000002UL    // 0 - Masked
#define SD_TRANSFER_COMPLETE_STATUS_ENABLE_BPOS      1UL             // 1 - Enabled

                                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define SD_COMMAND_COMPLETE_STATUS_ENABLE_MASK       0x00000001UL    // 0 - Masked
#define SD_COMMAND_COMPLETE_STATUS_ENABLE_BPOS       0UL             // 1 - Enabled


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
#define SD_CEATA_ERROR_SIGNAL_ENABLE_MASK               0x20000000UL    // 0 - Masked
#define SD_CEATA_ERROR_SIGNAL_ENABLE_BPOS               29UL            // 1 - Enabled

                                                                        // Properties: Bit: 28, Type: rw, Reset Value: 0x0
#define SD_TARGET_RESPONSE_ERROR_SIGNAL_ENABLE_MASK     0x10000000UL    // 0 - Masked
#define SD_TARGET_RESPONSE_ERROR_SIGNAL_ENABLE_BPOS     28UL            // 1 - Enabled

// RESERVED                                                                Properties: Bits: 27:26, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bit: 25, Type: rw, Reset Value: 0x0
#define SD_ADMA_ERROR_SIGNAL_ENABLE_MASK                0x02000000UL    // 0 - Masked
#define SD_ADMA_ERROR_SIGNAL_ENABLE_BPOS                25UL            // 1 - Enabled

                                                                        // Properties: Bit: 24, Type: rw, Reset Value: 0x0
#define SD_AUTO_CMD12_ERROR_SIGNAL_ENABLE_MASK          0x01000000UL    // 0 - Masked
#define SD_AUTO_CMD12_ERROR_SIGNAL_ENABLE_BPOS          24UL            // 1 - Enabled

                                                                        // Properties: Bit: 23, Type: rw, Reset Value: 0x0
#define SD_CURRENT_LIMIT_ERROR_SIGNAL_ENABLE_MASK       0x00800000UL    // 0 - Masked
#define SD_CURRENT_LIMIT_ERROR_SIGNAL_ENABLE_BPOS       23UL            // 1 - Enabled

                                                                        // Properties: Bit: 22, Type: rw, Reset Value: 0x0
#define SD_DATA_END_BIT_ERROR_SIGNAL_ENABLE_MASK        0x00400000UL    // 0 - Masked
#define SD_DATA_END_BIT_ERROR_SIGNAL_ENABLE_BPOS        22UL            // 1 - Enabled

                                                                        // Properties: Bit: 21, Type: rw, Reset Value: 0x0
#define SD_DATA_CRC_ERROR_SIGNAL_ENABLE_MASK            0x00200000UL    // 0 - Masked
#define SD_DATA_CRC_ERROR_SIGNAL_ENABLE_BPOS            21UL            // 1 - Enabled

                                                                        // Properties: Bit: 20, Type: rw, Reset Value: 0x0
#define SD_DATA_TIMEOUT_ERROR_SIGNAL_ENABLE_MASK        0x00100000UL    // 0 - Masked
#define SD_DATA_TIMEOUT_ERROR_SIGNAL_ENABLE_BPOS        20UL            // 1 - Enabled

                                                                        // Properties: Bit: 19, Type: rw, Reset Value: 0x0
#define SD_COMMAND_INDEX_ERROR_SIGNAL_ENABLE_MASK       0x00080000UL    // 0 - Masked
#define SD_COMMAND_INDEX_ERROR_SIGNAL_ENABLE_BPOS       19UL            // 1 - Enabled

                                                                        // Properties: Bit: 18, Type: rw, Reset Value: 0x0
#define SD_COMMAND_END_BIT_ERROR_SIGNAL_ENABLE_MASK     0x00040000UL    // 0 - Masked
#define SD_COMMAND_END_BIT_ERROR_SIGNAL_ENABLE_BPOS     18UL            // 1 - Enabled

                                                                        // Properties: Bit: 17, Type: rw, Reset Value: 0x0
#define SD_COMMAND_CRC_ERROR_SIGNAL_ENABLE_MASK         0x00020000UL    // 0 - Masked
#define SD_COMMAND_CRC_ERROR_SIGNAL_ENABLE_BPOS         17UL            // 1 - Enabled

                                                                        // Properties: Bit: 16, Type: rw, Reset Value: 0x0
#define SD_COMMAND_TIMEOUT_ERROR_SIGNAL_ENABLE_MASK     0x00010000UL    // 0 - Masked
#define SD_COMMAND_TIMEOUT_ERROR_SIGNAL_ENABLE_BPOS     16UL            // 1 - Enabled

                                                                        // Properties: Bit: 15, Type: ro, Reset Value: 0x0
#define SD_FIXED_TO_0_SIGNAL_ENABLE_MASK                0x00008000UL    // The HD shall control error Interrupts using the
#define SD_FIXED_TO_0_SIGNAL_ENABLE_BPOS                15UL            // Error Interrupt Signal Enable register.

// RESERVED                                                                Properties: Bits: 14:11, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bit: 10, Type: rw, Reset Value: 0x0
#define SD_BOOT_TERMINATE_INTERRUPT_SIGNAL_ENABLE_MASK  0x00000400UL    // 0 - Masked
#define SD_BOOT_TERMINATE_INTERRUPT_SIGNAL_ENABLE_BPOS  10UL            // 1 - Enabled

                                                                        // Properties: Bit: 9, Type: rw, Reset Value: 0x0
#define SD_BOOT_ACK_RCV_SIGNAL_ENABLE_MASK              0x00000200UL    // 0 - Masked
#define SD_BOOT_ACK_RCV_SIGNAL_ENABLE_BPOS              9UL             // 1 - Enabled

                                                                        // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define SD_CARD_INTERRUPT_SIGNAL_ENABLE_MASK            0x00000100UL    // 0 - Masked
#define SD_CARD_INTERRUPT_SIGNAL_ENABLE_BPOS            8UL             // 1 - Enabled

                                                                        // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define SD_CARD_REMOVAL_SIGNAL_ENABLE_MASK              0x00000080UL    // 0 - Masked
#define SD_CARD_REMOVAL_SIGNAL_ENABLE_BPOS              7UL             // 1 - Enabled

                                                                        // Properties: Bit: 6, Type: rw, Reset Value: 0x0
#define SD_CARD_INSERTION_SIGNAL_ENABLE_MASK            0x00000040UL    // 0 - Masked
#define SD_CARD_INSERTION_SIGNAL_ENABLE_BPOS            6UL             // 1 - Enabled

                                                                        // Properties: Bit: 5, Type: rw, Reset Value: 0x0
#define SD_BUFFER_READ_READY_SIGNAL_ENABLE_MASK         0x00000020UL    // 0 - Masked
#define SD_BUFFER_READ_READY_SIGNAL_ENABLE_BPOS         5UL             // 1 - Enabled

                                                                        // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define SD_BUFFER_WRITE_READY_SIGNAL_ENABLE_MASK        0x00000010UL    // 0 - Masked
#define SD_BUFFER_WRITE_READY_SIGNAL_ENABLE_BPOS        4UL             // 1 - Enabled

                                                                        // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define SD_DMA_INTERRUPT_SIGNAL_ENABLE_MASK             0x00000008UL    // 0 - Masked
#define SD_DMA_INTERRUPT_SIGNAL_ENABLE_BPOS             3UL             // 1 - Enabled

                                                                        // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define SD_BLOCK_GAP_EVENT_SIGNAL_ENABLE_MASK           0x00000004UL    // 0 - Masked
#define SD_BLOCK_GAP_EVENT_SIGNAL_ENABLE_BPOS           2UL             // 1 - Enabled

                                                                        // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define SD_TRANSFER_COMPLETE_SIGNAL_ENABLE_MASK         0x00000002UL    // 0 - Masked
#define SD_TRANSFER_COMPLETE_SIGNAL_ENABLE_BPOS         1UL             // 1 - Enabled

                                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define SD_COMMAND_COMPLETE_SIGNAL_ENABLE_MASK          0x00000001UL    // 0 - Masked
#define SD_COMMAND_COMPLETE_SIGNAL_ENABLE_BPOS          0UL             // 1 - Enabled


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
#define SD_COMMAND_NOT_ISSUED_BY_AUTO_CMD12_ERROR_MASK  0x00000080UL    // Setting this bit to 1 means CMD_wo_DAT is not
#define SD_COMMAND_NOT_ISSUED_BY_AUTO_CMD12_ERROR_BPOS  7UL             // executed due to an Auto CMD12 error (D04 - D01)
                                                                        // in this register.
                                                                        // 0 - No Error
                                                                        // 1 - Not Issued

// RESERVED                                                                Properties: Bits: 6:5, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bit: 4, Type: ro, Reset Value: 0x0
#define SD_AUTO_CMD12_INDEX_ERROR_MASK                  0x00000010UL    // Occurs if the Command Index error occurs in
#define SD_AUTO_CMD12_INDEX_ERROR_BPOS                  4UL             // response to a command.
                                                                        // 0 - No Error
                                                                        // 1 - Error

                                                                        // Properties: Bit: 3, Type: ro, Reset Value: 0x0
#define SD_AUTO_CMD12_END_BIT_ERROR_MASK                0x00000008UL    // Occurs when detecting that the end bit of
#define SD_AUTO_CMD12_END_BIT_ERROR_BPOS                3UL             // command response is 0.
                                                                        // 0 - No Error
                                                                        // 1 - End Bit Error Generated

                                                                        // Properties: Bit: 2, Type: ro, Reset Value: 0x0
#define SD_AUTO_CMD12_CRC_ERROR_MASK                    0x00000004UL    // Occurs when detecting a CRC error in the
#define SD_AUTO_CMD12_CRC_ERROR_BPOS                    2UL             // command response.
                                                                        // 0 - No Error
                                                                        // 1 - CRC Error Generated

                                                                        // Properties: Bit: 1, Type: ro, Reset Value: 0x0
#define SD_AUTO_CMD12_TIMEOUT_ERROR_MASK                0x00000002UL    // Occurs if the no response is returned within 64
#define SD_AUTO_CMD12_TIMEOUT_ERROR_BPOS                1UL             // SDCLK cycles from the end bit of the command. If
                                                                        // this bit is set to 1, the other error status bits (D04 -
                                                                        // D02) are meaningless.
                                                                        // 0 - No Error
                                                                        // 1 - Timeout

                                                                        // Properties: Bit: 0, Type: ro, Reset Value: 0x0
#define SD_AUTO_CMD12_NOT_EXECUTED_MASK                 0x00000001UL    // If memory multiple block data transfer is not
#define SD_AUTO_CMD12_NOT_EXECUTED_BPOS                 0UL             // started due to command
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
#define SD_SPI_BLOCK_MODE_MASK              0x40000000UL    // Spi block mode
#define SD_SPI_BLOCK_MODE_BPOS              30UL            // 0 - Not Supported
                                                            // 1 - Supported

                                                            // Properties: Bit: 29, Type: ro, Reset Value: 0x1
#define SD_SPI_MODE_MASK                    0x20000000UL    // Spi mode
#define SD_SPI_MODE_BPOS                    29UL            // 0 - Not Supported
                                                            // 1 - Supported

                                                            // Properties: Bit: 28, Type: ro, Reset Value: 0x0
#define SD_64_BIT_SYSTEM_BUS_SUPPORT_MASK   0x10000000UL    // 1 - supports 64 bit system address
#define SD_64_BIT_SYSTEM_BUS_SUPPORT_BPOS   28UL            // 0 - Does not support 64 bit system
                                                            // address

                                                            // Properties: Bit: 27, Type: ro, Reset Value: 0x1
#define SD_INTERRUPT_MODE_MASK              0x08000000UL    // Interrupt mode
#define SD_INTERRUPT_MODE_BPOS              27UL            // 0 - Not Supported
                                                            // 1 - Supported

                                                            // Properties: Bit: 26, Type: ro, Reset Value: 0x0
#define SD_VOLTAGE_SUPPORT_1_8_V_MASK       0x04000000UL    // 0 - 1.8 V Not Supported
#define SD_VOLTAGE_SUPPORT_1_8_V_BPOS       26UL            // 1 - 1.8 V Supported

                                                            // Properties: Bit: 25, Type: ro, Reset Value: 0x0
#define SD_VOLTAGE_SUPPORT_3_0_V_MASK       0x02000000UL    // 0 - 3.0 V Not Supported
#define SD_VOLTAGE_SUPPORT_3_0_V_BPOS       25UL            // 1 - 3.0 V Supported

                                                            // Properties: Bit: 24, Type: ro, Reset Value: 0x1
#define SD_VOLTAGE_SUPPORT_3_3_V_MASK       0x01000000UL    // 0 - 3.3 V Not Supported
#define SD_VOLTAGE_SUPPORT_3_3_V_BPOS       24UL            // 1 - 3.3 V Supported

                                                            // Properties: Bit: 23, Type: ro, Reset Value: 0x1
#define SD_SUSPEND_RESUME_SUPPORT_MASK      0x00800000UL    // This bit indicates whether the HC supports
#define SD_SUSPEND_RESUME_SUPPORT_BPOS      23UL            // Suspend / Resume functionality. If this bit is 0, the
                                                            // Suspend and Resume mechanism are not
                                                            // supported and the HD shall not issue either
                                                            // Suspend / Resume commands.
                                                            // 0 - Not Supported
                                                            // 1 - Supported

                                                            // Properties: Bit: 22, Type: ro, Reset Value: 0x1
#define SD_SDMA_SUPPORT_MASK                0x00400000UL    // This bit indicates whether the HC is capable of
#define SD_SDMA_SUPPORT_BPOS                22UL            // using DMA to transfer data between system
                                                            // memory and the HC directly.
                                                            // 0 - SDMA Not Supported
                                                            // 1 - SDMA Supported.

                                                            // Properties: Bit: 21, Type: ro, Reset Value: 0x1
#define SD_HIGH_SPEED_SUPPORT_MASK          0x00200000UL    // This bit indicates whether the HC and the Host
#define SD_HIGH_SPEED_SUPPORT_BPOS          21UL            // System support High Speed mode and they can
                                                            // supply SD Clock frequency from 25Mhz to 50
                                                            // MHz (for SD)/ 20MHz to 52MHz (for MMC).
                                                            // 0 - High Speed Not Supported
                                                            // 1 - High Speed Supported

// RESERVED                                                    Properties: Bit: 20, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 19, Type: ro, Reset Value: 0x1
#define SD_ADMA2_SUPPORT_MASK               0x00080000UL    // 1 - ADMA2 support.
#define SD_ADMA2_SUPPORT_BPOS               19UL            // 0 - ADMA2 not support

                                                            // Properties: Bit: 18, Type: ro, Reset Value: 0x1
#define SD_EXTENDED_MEDIA_BUS_SUPPORT_MASK  0x00040000UL    // This bit indicates whether the Host Controller is
#define SD_EXTENDED_MEDIA_BUS_SUPPORT_BPOS  18UL            // capable bus.
                                                            // 1 - Extended Media Bus Supported
                                                            // 0 - Extended Media Bus not Supported

                                                            // Properties: Bits: 17:16, Type: ro, Reset Value: 0x0
#define SD_MAX_BLOCK_LENGTH_MASK            0x00030000UL    // This value indicates the maximum block size that
#define SD_MAX_BLOCK_LENGTH_BPOS            16UL            // the HD can read and write to the buffer in the HC.
                                                            // The buffer shall transfer this block size without
                                                            // wait cycles. Three sizes can be defined as
                                                            // indicated below.
                                                            // 00 - 512 byte
                                                            // 01 - 1024 byte
                                                            // 10 - 2048 byte
                                                            // 11 - 4096 byte

// RESERVED                                                    Properties: Bits: 15:14, Type: ro, Reset Value: 0x0

// RESERVED                                                    Properties: Bits: 13:8, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 7, Type: ro, Reset Value: 0x1
#define SD_TIMEOUT_CLOCK_UNIT_MASK          0x00000080UL    // This bit shows the unit of base clock frequency
#define SD_TIMEOUT_CLOCK_UNIT_BPOS          7UL             // used to detect Data Timeout Error.
                                                            // 0 - KHz
                                                            // 1 - MHz

// RESERVED                                                    Properties: Bit: 6, Type: ro, Reset Value: 0x0

// RESERVED                                                    Properties: Bits: 5:0, Type: ro, Reset Value: 0x0


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
#define SD_MAXIMUM_CURRENT_FOR_1_8V_MASK  0x00FF0000UL    // Maximum Current for 1.8V
#define SD_MAXIMUM_CURRENT_FOR_1_8V_BPOS  16UL            // 

                                                          // Properties: Bits: 15:8, Type: ro, Reset Value: 0x0
#define SD_MAXIMUM_CURRENT_FOR_3_0V_MASK  0x0000FF00UL    // Maximum Current for 3.0V
#define SD_MAXIMUM_CURRENT_FOR_3_0V_BPOS  8UL             // 

                                                          // Properties: Bits: 7:0, Type: ro, Reset Value: 0x1
#define SD_MAXIMUM_CURRENT_FOR_3_3V_MASK  0x000000FFUL    // Maximum Current for 3.3V
#define SD_MAXIMUM_CURRENT_FOR_3_3V_BPOS  0UL             // 


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
#define SD_FORCE_EVENT_FOR_VENDOR_SPECIFIC_ERROR_STATUS_MASK            0xC0000000UL    // Additional status bits can be defined in
#define SD_FORCE_EVENT_FOR_VENDOR_SPECIFIC_ERROR_STATUS_BPOS            30UL            // this register by the vendor.
                                                                                        // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

                                                                                        // Properties: Bit: 29, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_CEATA_ERROR_MASK                             0x20000000UL    // Force Event for Ceata Error
#define SD_FORCE_EVENT_FOR_CEATA_ERROR_BPOS                             29UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

                                                                                        // Properties: Bit: 28, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_TARGET_RESPONSE_ERROR_MASK                   0x10000000UL    // Force Event for Target Response Error
#define SD_FORCE_EVENT_FOR_TARGET_RESPONSE_ERROR_BPOS                   28UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

// RESERVED                                                                                Properties: Bits: 27:26, Type: ro, Reset Value: 0x0

                                                                                        // Properties: Bit: 25, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_ADMA_ERROR_MASK                              0x02000000UL    // Force Event for ADMA Error
#define SD_FORCE_EVENT_FOR_ADMA_ERROR_BPOS                              25UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

                                                                                        // Properties: Bit: 24, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_ERROR_MASK                        0x01000000UL    // Force Event for Auto CMD12 Error
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_ERROR_BPOS                        24UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

                                                                                        // Properties: Bit: 23, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_CURRENT_LIMIT_ERROR_MASK                     0x00800000UL    // Force Event for Current Limit Error
#define SD_FORCE_EVENT_FOR_CURRENT_LIMIT_ERROR_BPOS                     23UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

                                                                                        // Properties: Bit: 22, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_DATA_END_BIT_ERROR_MASK                      0x00400000UL    // Force Event for Data End Bit Error
#define SD_FORCE_EVENT_FOR_DATA_END_BIT_ERROR_BPOS                      22UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

                                                                                        // Properties: Bit: 21, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_DATA_CRC_ERROR_MASK                          0x00200000UL    // Force Event for Data CRC Error
#define SD_FORCE_EVENT_FOR_DATA_CRC_ERROR_BPOS                          21UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

                                                                                        // Properties: Bit: 20, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_DATA__TIMEOUT_ERROR_MASK                     0x00100000UL    // Force Event for Data Timeout Error
#define SD_FORCE_EVENT_FOR_DATA__TIMEOUT_ERROR_BPOS                     20UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

                                                                                        // Properties: Bit: 19, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_COMMAND_INDEX_ERROR_MASK                     0x00080000UL    // Force Event for Command Index Error
#define SD_FORCE_EVENT_FOR_COMMAND_INDEX_ERROR_BPOS                     19UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

                                                                                        // Properties: Bit: 18, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_COMMAND_END_BIT_ERROR_MASK                   0x00040000UL    // Force Event for Command End Bit Error
#define SD_FORCE_EVENT_FOR_COMMAND_END_BIT_ERROR_BPOS                   18UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

                                                                                        // Properties: Bit: 17, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_COMMAND_CRC_ERROR_MASK                       0x00020000UL    // Force Event for Command CRC Error
#define SD_FORCE_EVENT_FOR_COMMAND_CRC_ERROR_BPOS                       17UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

                                                                                        // Properties: Bit: 16, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_COMMAND_TIMEOUT_ERROR_MASK                   0x00010000UL    // Force Event for Command Timeout Error
#define SD_FORCE_EVENT_FOR_COMMAND_TIMEOUT_ERROR_BPOS                   16UL            // 1 - Interrupt is generated
                                                                                        // 0 - No interrupt

// RESERVED                                                                                Properties: Bits: 15:8, Type: ro, Reset Value: 0x0

                                                                                        // Properties: Bit: 7, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_COMMAND_NOT_ISSUED_BY_AUTO_CMD12_ERROR_MASK  0x00000080UL    // 1 - Interrupt is generated
#define SD_FORCE_EVENT_FOR_COMMAND_NOT_ISSUED_BY_AUTO_CMD12_ERROR_BPOS  7UL             // 0 - no interrupt

// RESERVED                                                                                Properties: Bits: 6:5, Type: ro, Reset Value: 0x0

                                                                                        // Properties: Bit: 4, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_INDEX_ERROR_MASK                  0x00000010UL    // 1 - Interrupt is generated
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_INDEX_ERROR_BPOS                  4UL             // 0 - no interrupt

                                                                                        // Properties: Bit: 3, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_END_BIT_ERROR_MASK                0x00000008UL    // 1 - Interrupt is generated
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_END_BIT_ERROR_BPOS                3UL             // 0 - no interrupt

                                                                                        // Properties: Bit: 2, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_CRC_ERROR_MASK                    0x00000004UL    // 1 - Interrupt is generated
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_CRC_ERROR_BPOS                    2UL             // 0 - no interrupt

                                                                                        // Properties: Bit: 1, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_TIMEOUT_ERROR_MASK                0x00000002UL    // 1 - Interrupt is generated
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_TIMEOUT_ERROR_BPOS                1UL             // 0 - no interrupt

                                                                                        // Properties: Bit: 0, Type: wo, Reset Value: 0x0
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_NOT_EXECUTED_MASK                 0x00000001UL    // 1 - Interrupt is generated
#define SD_FORCE_EVENT_FOR_AUTO_CMD12_NOT_EXECUTED_BPOS                 0UL             // 0 - no interrupt


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
#define SD_ADMA_LENGTH_MISMATCH_ERROR_MASK  0x00000004UL    // This error occurs in the following 2 cases.
#define SD_ADMA_LENGTH_MISMATCH_ERROR_BPOS  2UL             // 1. While Block Count Enable being set, the total
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
#define SD_ADMA_ERROR_STATE_MASK            0x00000003UL    // This field indicates the state of ADMA when error
#define SD_ADMA_ERROR_STATE_BPOS            0UL             // is occurred during ADMA data transfer. This field
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
#define SD_ADMA_SYSTEM_ADDRESS_MASK  0xFFFFFFFFUL    // This register holds byte address of executing
#define SD_ADMA_SYSTEM_ADDRESS_BPOS  0UL             // command of the Descriptor table.
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
#define SD_BOOT_DATA_TIMEOUT_COUNTER_VALUE_MASK  0xFFFFFFFFUL    // This value determines the interval by
#define SD_BOOT_DATA_TIMEOUT_COUNTER_VALUE_BPOS  0UL             // which DAT line time-outs are detected
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
#define SD_DEBUG_SEL_MASK  0x00000001UL    // 1- cmd register, Interrupt status, transmitter
#define SD_DEBUG_SEL_BPOS  0UL             // module, ahb_iface module and clk
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
#define SD_SPI_INT_SUPPORT_MASK  0x000000FFUL    // This bit is set to indicate the assertion of interrupts
#define SD_SPI_INT_SUPPORT_BPOS  0UL             // in the SPI mode at any time, irrespective of the
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
#define SD_VENDOR_VERSION_NUMBER_MASK           0xFF000000UL    // This status is reserved for the vendor version
#define SD_VENDOR_VERSION_NUMBER_BPOS           24UL            // number. The HD should not use this status.

                                                                // Properties: Bits: 23:16, Type: ro, Reset Value: 0x1
#define SD_SPECIFICATION_VERSION_NUMBER_MASK    0x00FF0000UL    // This status indicates the Host Controller Spec.
#define SD_SPECIFICATION_VERSION_NUMBER_BPOS    16UL            // Version. The upper and lower 4-bits indicate the
                                                                // version.
                                                                // 00 - SD Host Specification version 1.0
                                                                // 01 - SD Host Specification version 2.00 including
                                                                // only the feature of the Test Register
                                                                // others - Reserved

// RESERVED                                                        Properties: Bits: 15:8, Type: ro, Reset Value: 0x0

                                                                // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
#define SD_INTERRUPT_SIGNAL_FOR_EACH_SLOT_MASK  0x000000FFUL    // These status bit indicate the logical OR of
#define SD_INTERRUPT_SIGNAL_FOR_EACH_SLOT_BPOS  0UL             // Interrupt signal and Wakeup signal for each slot.
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

