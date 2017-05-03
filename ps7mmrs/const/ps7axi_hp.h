//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_AXI_HP
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

#ifndef PS7_AXI_HP_H
#define PS7_AXI_HP_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    AXI_HP0 MMRs
//
//              Name                         Address                      Width   Type     Reset Value   Description
const uintptr_t AFI_RDCHAN_CTRL_REG0       = AXI_HP0_ADDR + 0x00000000; //  32    mixed    0x00000000    Read Channel Control Register
const uintptr_t AFI_RDCHAN_ISSUINGCAP_REG0 = AXI_HP0_ADDR + 0x00000004; //  32    mixed    0x00000007    Read Issuing Capability Register
const uintptr_t AFI_RDQOS_REG0             = AXI_HP0_ADDR + 0x00000008; //  32    mixed    0x00000000    QOS Read Channel Register
const uintptr_t AFI_RDDATAFIFO_LEVEL_REG0  = AXI_HP0_ADDR + 0x0000000C; //  32    mixed    0x00000000    Read Data FIFO Level Register
const uintptr_t AFI_RDDEBUG_REG0           = AXI_HP0_ADDR + 0x00000010; //  32    mixed    0x00000000    Read Channel Debug Register
const uintptr_t AFI_WRCHAN_CTRL_REG0       = AXI_HP0_ADDR + 0x00000014; //  32    mixed    0x00000F00    Write Channel Control Register
const uintptr_t AFI_WRCHAN_ISSUINGCAP_REG0 = AXI_HP0_ADDR + 0x00000018; //  32    mixed    0x00000007    Write Issuing Capability Register
const uintptr_t AFI_WRQOS_REG0             = AXI_HP0_ADDR + 0x0000001C; //  32    mixed    0x00000000    QOS Write Channel Register
const uintptr_t AFI_WRDATAFIFO_LEVEL_REG0  = AXI_HP0_ADDR + 0x00000020; //  32    mixed    0x00000000    Write Data FIFO Level Register
const uintptr_t AFI_WRDEBUG_REG0           = AXI_HP0_ADDR + 0x00000024; //  32    mixed    0x00000000    Write Channel Debug Register
//------------------------------------------------------------------------------
//
//    AXI_HP1 MMRs
//
//              Name                         Address                      Width   Type     Reset Value   Description
const uintptr_t AFI_RDCHAN_CTRL_REG1       = AXI_HP1_ADDR + 0x00000000; //  32    mixed    0x00000000    Read Channel Control Register
const uintptr_t AFI_RDCHAN_ISSUINGCAP_REG1 = AXI_HP1_ADDR + 0x00000004; //  32    mixed    0x00000007    Read Issuing Capability Register
const uintptr_t AFI_RDQOS_REG1             = AXI_HP1_ADDR + 0x00000008; //  32    mixed    0x00000000    QOS Read Channel Register
const uintptr_t AFI_RDDATAFIFO_LEVEL_REG1  = AXI_HP1_ADDR + 0x0000000C; //  32    mixed    0x00000000    Read Data FIFO Level Register
const uintptr_t AFI_RDDEBUG_REG1           = AXI_HP1_ADDR + 0x00000010; //  32    mixed    0x00000000    Read Channel Debug Register
const uintptr_t AFI_WRCHAN_CTRL_REG1       = AXI_HP1_ADDR + 0x00000014; //  32    mixed    0x00000F00    Write Channel Control Register
const uintptr_t AFI_WRCHAN_ISSUINGCAP_REG1 = AXI_HP1_ADDR + 0x00000018; //  32    mixed    0x00000007    Write Issuing Capability Register
const uintptr_t AFI_WRQOS_REG1             = AXI_HP1_ADDR + 0x0000001C; //  32    mixed    0x00000000    QOS Write Channel Register
const uintptr_t AFI_WRDATAFIFO_LEVEL_REG1  = AXI_HP1_ADDR + 0x00000020; //  32    mixed    0x00000000    Write Data FIFO Level Register
const uintptr_t AFI_WRDEBUG_REG1           = AXI_HP1_ADDR + 0x00000024; //  32    mixed    0x00000000    Write Channel Debug Register
//------------------------------------------------------------------------------
//
//    AXI_HP2 MMRs
//
//              Name                         Address                      Width   Type     Reset Value   Description
const uintptr_t AFI_RDCHAN_CTRL_REG2       = AXI_HP2_ADDR + 0x00000000; //  32    mixed    0x00000000    Read Channel Control Register
const uintptr_t AFI_RDCHAN_ISSUINGCAP_REG2 = AXI_HP2_ADDR + 0x00000004; //  32    mixed    0x00000007    Read Issuing Capability Register
const uintptr_t AFI_RDQOS_REG2             = AXI_HP2_ADDR + 0x00000008; //  32    mixed    0x00000000    QOS Read Channel Register
const uintptr_t AFI_RDDATAFIFO_LEVEL_REG2  = AXI_HP2_ADDR + 0x0000000C; //  32    mixed    0x00000000    Read Data FIFO Level Register
const uintptr_t AFI_RDDEBUG_REG2           = AXI_HP2_ADDR + 0x00000010; //  32    mixed    0x00000000    Read Channel Debug Register
const uintptr_t AFI_WRCHAN_CTRL_REG2       = AXI_HP2_ADDR + 0x00000014; //  32    mixed    0x00000F00    Write Channel Control Register
const uintptr_t AFI_WRCHAN_ISSUINGCAP_REG2 = AXI_HP2_ADDR + 0x00000018; //  32    mixed    0x00000007    Write Issuing Capability Register
const uintptr_t AFI_WRQOS_REG2             = AXI_HP2_ADDR + 0x0000001C; //  32    mixed    0x00000000    QOS Write Channel Register
const uintptr_t AFI_WRDATAFIFO_LEVEL_REG2  = AXI_HP2_ADDR + 0x00000020; //  32    mixed    0x00000000    Write Data FIFO Level Register
const uintptr_t AFI_WRDEBUG_REG2           = AXI_HP2_ADDR + 0x00000024; //  32    mixed    0x00000000    Write Channel Debug Register
//------------------------------------------------------------------------------
//
//    AXI_HP3 MMRs
//
//              Name                         Address                      Width   Type     Reset Value   Description
const uintptr_t AFI_RDCHAN_CTRL_REG3       = AXI_HP3_ADDR + 0x00000000; //  32    mixed    0x00000000    Read Channel Control Register
const uintptr_t AFI_RDCHAN_ISSUINGCAP_REG3 = AXI_HP3_ADDR + 0x00000004; //  32    mixed    0x00000007    Read Issuing Capability Register
const uintptr_t AFI_RDQOS_REG3             = AXI_HP3_ADDR + 0x00000008; //  32    mixed    0x00000000    QOS Read Channel Register
const uintptr_t AFI_RDDATAFIFO_LEVEL_REG3  = AXI_HP3_ADDR + 0x0000000C; //  32    mixed    0x00000000    Read Data FIFO Level Register
const uintptr_t AFI_RDDEBUG_REG3           = AXI_HP3_ADDR + 0x00000010; //  32    mixed    0x00000000    Read Channel Debug Register
const uintptr_t AFI_WRCHAN_CTRL_REG3       = AXI_HP3_ADDR + 0x00000014; //  32    mixed    0x00000F00    Write Channel Control Register
const uintptr_t AFI_WRCHAN_ISSUINGCAP_REG3 = AXI_HP3_ADDR + 0x00000018; //  32    mixed    0x00000007    Write Issuing Capability Register
const uintptr_t AFI_WRQOS_REG3             = AXI_HP3_ADDR + 0x0000001C; //  32    mixed    0x00000000    QOS Write Channel Register
const uintptr_t AFI_WRDATAFIFO_LEVEL_REG3  = AXI_HP3_ADDR + 0x00000020; //  32    mixed    0x00000000    Write Data FIFO Level Register
const uintptr_t AFI_WRDEBUG_REG3           = AXI_HP3_ADDR + 0x00000024; //  32    mixed    0x00000000    Write Channel Debug Register
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (AXI_HP) RDCHAN_CTRL
//
// Name                    AFI_RDCHAN_CTRL_REG
// Relative Address        0x00000000
// Absolute Address        axi_hp0: 0xF8008000
//                         axi_hp1: 0xF8009000
//                         axi_hp2: 0xF800A000
//                         axi_hp3: 0xF800B000
// Width                   32 bits
// Access Type             mixed
// Reset Value                0x00000000
// Description                Read Channel Control Register
//
// Register AFI_RDCHAN_CTRL_REG Details
//           Control fields for Read Channel operation.
//           The associated "FPGA_RST_CTRL.FPGA_AXDSN_RST" register field
//           must be written with "0" before accessing this register
//
// RESERVED                                                            Properties: Bits: 31:4, Type: raz, Reset Value: 0x0

                                                                    // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_RD_QOS_HEAD_OF_CMD_QEN_MASK = 0x00000008;    // When set, allows the priority of a transaction at
const uintptr_t AXI_HP_RD_QOS_HEAD_OF_CMD_QEN_BPOS = 3;             // the head of the RdCmdQ to be promoted if higher
                                                                    // priority transactions are backed up behind it. The
                                                                    // entire RdCmdQ will therefore be promoted when
                                                                    // the fabric RdQos signal is promoted.
                                                                    // When disabled, only the new read commands
                                                                    // issued will receive the promotion.

                                                                    // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_RD_FABRIC_OUT_CMD_EN_MASK   = 0x00000004;    // Enable control of outstanding read commands
const uintptr_t AXI_HP_RD_FABRIC_OUT_CMD_EN_BPOS   = 2;             // from the fabric
                                                                    // 0: The maximum number of outstanding read
                                                                    // commands is always taken from APB register
                                                                    // field, rdIssueCap0
                                                                    // 1: The maximum outstanding number of
                                                                    // read commands is selected from the fabric input,
                                                                    // axds_rdissuecap1_en, as follows:
                                                                    // Max Outstanding Read Commands =
                                                                    // axds_rdissuecap1_en ? rdIssueCap1 :
                                                                    // rdIssueCap0

                                                                    // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_RD_FABRIC_QOS_EN_MASK       = 0x00000002;    // Enable control of qos from the fabric
const uintptr_t AXI_HP_RD_FABRIC_QOS_EN_BPOS       = 1;             // 0: The qos bits are derived from APB register,
                                                                    // AFI_RDQOS.staticQos
                                                                    // 1: The qos bits are dynamically driven from the
                                                                    // fabric input, axds_arqos[3:0]

                                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_RD32BIT_EN_MASK             = 0x00000001;    // Configures the Read Channel as a 32-bit interface.
const uintptr_t AXI_HP_RD32BIT_EN_BPOS             = 0;             // 1: 32-bit enabled
                                                                    // 0: 64-bit enabled


//------------------------------------------------------------------------------
//
// Register (AXI_HP) RDCHAN_ISSUINGCAP
//
// Name                       AFI_RDCHAN_ISSUINGCAP_REG
// Relative Address           0x00000004
// Absolute Address         axi_hp0: 0xF8008004
//                          axi_hp1: 0xF8009004
//                          axi_hp2: 0xF800A004
//                          axi_hp3: 0xF800B004
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000007
// Description              Read Issuing Capability Register
//
// Register AFI_RDCHAN_ISSUINGCAP_REG Details
//         Sets the maximum number of Outstanding Read Commands allowed (Issuing Capability). Refers to the
//         commands that can be outstanding from the AXI_HP to the SAM switch and back. Fields are selected by
//         the 'axds_rdissuecap1_en' input. The associated "FPGA_RST_CTRL.FPGA_AXDSN_RST" register field
//         must be written with "0" before accessing this register
//
// RESERVED                                                   Properties: Bits: 31:7, Type: raz, Reset Value: 0x0

                                                           // Properties: Bits: 6:4, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_RD_ISSUE_CAP1_MASK = 0x00000070;    // Max number of outstanding read commands
const uintptr_t AXI_HP_RD_ISSUE_CAP1_BPOS = 4;             // (Read Issuing Capability) field 1:
                                                           // 3'b000: 1 command
                                                           // 3'b001: 2 commands' ' '3'b111: 8 commands

// RESERVED                                                   Properties: Bit: 3, Type: raz, Reset Value: 0x0

                                                           // Properties: Bits: 2:0, Type: rw, Reset Value: 0x7
const uintptr_t AXI_HP_RD_ISSUE_CAP0_MASK = 0x00000007;    // Max number of outstanding read commands
const uintptr_t AXI_HP_RD_ISSUE_CAP0_BPOS = 0;             // (Read Issuing Capability) field 0:
                                                           // 3'b000: 1 command
                                                           // 3'b001: 2 commands' ' '3'b111: 8 commands


//------------------------------------------------------------------------------
//
// Register (AXI_HP) RDQOS
//
// Name                     AFI_RDQOS_REG
// Relative Address         0x00000008
// Absolute Address         axi_hp0: 0xF8008008
//                          axi_hp1: 0xF8009008
//                          axi_hp2: 0xF800A008
//                          axi_hp3: 0xF800B008
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              QOS Read Channel Register
//
// Register AFI_RDQOS_REG Details
//         Sets the static Qos value to be used for the read channel. If APB register field, 'FabricQosEn' is 0 or
//         ('FabricQosEn' is 1 and 'QosHeadOfCmdQEn' is 1), this static Qos value will be applied to all read
//         commands enqueued into the RdCmdQ. If ('FabricQosEn' is 1 and 'QosHeadOfCmdQEn' is 0), this static
//         Qos field will be ignored. The associated "FPGA_RST_CTRL.FPGA_AXDSN_RST" register field
//         must be written with "0" before accessing this register
//
// RESERVED                                                   Properties: Bits: 31:4, Type: raz, Reset Value: 0x0

                                                           // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_RD_STATIC_QOS_MASK = 0x0000000F;    // Sets the level of the Qos field to be used for the
const uintptr_t AXI_HP_RD_STATIC_QOS_BPOS = 0;             // read channel
                                                           // 4'b0000: Lowest Priority' ' '4'b1111: Highest
                                                           // Priority


//------------------------------------------------------------------------------
//
// Register (AXI_HP) RDDATAFIFO_LEVEL
//
// Name                     AFI_RDDATAFIFO_LEVEL_REG
// Relative Address         0x0000000C
// Absolute Address         axi_hp0: 0xF800800C
//                          axi_hp1: 0xF800900C
//                          axi_hp2: 0xF800A00C
//                          axi_hp3: 0xF800B00C
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Read Data FIFO Level Register
//
// Register AFI_RDDATAFIFO_LEVEL_REG Details
//         Returns the Level of the Read Data FIFO in Qwords. Note that this register should only be read if a valid
//         HP port clock is actively running. If no clock is running the APB access will hang. The associated
//         "FPGA_RST_CTRL.FPGA_AXDSN_RST" register field
//         must be written with "0" before accessing this register
//
// RESERVED                                                   Properties: Bits: 31:8, Type: raz, Reset Value: 0x0

                                                           // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t AXI_HP_RD_FIFO_LEVEL_MASK = 0x000000FF;    // Returns the level measured in Dwords (64-bits) of
const uintptr_t AXI_HP_RD_FIFO_LEVEL_BPOS = 0;             // the Read Data FIFO
                                                           // 8'h00: 0 Entries
                                                           // 8'h01: 1 Entry' ' '8'h8F: 128 Entries


//------------------------------------------------------------------------------
//
// Register (AXI_HP) RDDEBUG
//
// Name                     AFI_RDDEBUG_REG
// Relative Address         0x00000010
// Absolute Address         axi_hp0: 0xF8008010
//                          axi_hp1: 0xF8009010
//                          axi_hp2: 0xF800A010
//                          axi_hp3: 0xF800B010
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Read Channel Debug Register
//
// Register AFI_RDDEBUG_REG Details
//         Miscellaneous debug fields for the Read channel. Not to be used for functional purposes. The associated
//         "FPGA_RST_CTRL.FPGA_AXDSN_RST" register field
//         must be written with "0" before accessing this register
//
// RESERVED                                                           Properties: Bits: 31:5, Type: raz, Reset Value: 0x0

                                                                   // Properties: Bits: 4:1, Type: ro, Reset Value: 0x0
const uintptr_t AXI_HP_RD_OUT_RD_CMDS_MASK        = 0x0000001E;    // Returns the number of read commands in flight
const uintptr_t AXI_HP_RD_OUT_RD_CMDS_BPOS        = 1;             // between the AXI_HP and the SAM switch
                                                                   // 4'h0: 0
                                                                   // 4'h1: 1
                                                                   // etc

                                                                   // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t AXI_HP_RD_DATA_FIFO_OVERFLOW_MASK = 0x00000001;    // Bit is set if the RdDataFIFO overflows
const uintptr_t AXI_HP_RD_DATA_FIFO_OVERFLOW_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (AXI_HP) WRCHAN_CTRL
//
// Name                     AFI_WRCHAN_CTRL_REG
// Relative Address         0x00000014
// Absolute Address         axi_hp0: 0xF8008014
//                          axi_hp1: 0xF8009014
//                          axi_hp2: 0xF800A014
//                          axi_hp3: 0xF800B014
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000F00
// Description              Write Channel Control Register
//
// Register AFI_WRCHAN_CTRL_REG Details
//         Control fields for Write Channel operation. The associated "FPGA_RST_CTRL.FPGA_AXDSN_RST"
//         register field
//         must be written with "0" before accessing this register
//
// RESERVED                                                            Properties: Bits: 31:12, Type: raz, Reset Value: 0x0

                                                                    // Properties: Bits: 11:8, Type: rw, Reset Value: 0xF
const uintptr_t AXI_HP_WR_DATA_THRESHOLD_MASK      = 0x00000F00;    // Sets the threshold at which to send the write
const uintptr_t AXI_HP_WR_DATA_THRESHOLD_BPOS      = 8;             // command. Note that this is measured in data
                                                                    // beats, and is therefore dependent on the '32bitEn'
                                                                    // field.
                                                                    // 4'b0000: Send Write Command When 1 data beat
                                                                    // is pushed into the Write Data FIFO
                                                                    // 4'b0001: Send Write Command When 2 data beats
                                                                    // are pushed into the Write Data FIFO' ' '4'b1111:
                                                                    // Send Write Command When 16 data beats are
                                                                    // pushed into the Write Data FIFO
                                                                    // Note: If this field is programmed to be less than
                                                                    // the actual burst length of the write command, the
                                                                    // 'Wlast' will take priority. For example, if
                                                                    // 'WrDataThreshold' is set to 4'b1111 (indicates 16
                                                                    // beats), and a Wlast is received after 8 beats, the
                                                                    // write command is sent.

// RESERVED                                                            Properties: Bits: 7:6, Type: raz, Reset Value: 0x0

                                                                    // Properties: Bits: 5:4, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_WR_CMD_RELEASE_MODE_MASK    = 0x00000030;    // Mode of Write Command Release.
const uintptr_t AXI_HP_WR_CMD_RELEASE_MODE_BPOS    = 4;             // 2'b00: Release Wr Command on 'Wlast' enqueue
                                                                    // into Write Data FIFO
                                                                    // 2'b01: Release Wr Command on a particular
                                                                    // threshold being reached on the enqueue into
                                                                    // Write Data FIFO. The 'WrDataThreshold' field is
                                                                    // used to program the actual threshold.
                                                                    // 2'b10: Reserved
                                                                    // 2'b11: Reserved

                                                                    // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_WR_QOS_HEAD_OF_CMD_QEN_MASK = 0x00000008;    // When set, allows the priority of a transaction at
const uintptr_t AXI_HP_WR_QOS_HEAD_OF_CMD_QEN_BPOS = 3;             // the head of the WrCmdQ to be promoted if higher
                                                                    // priority transactions are backed up behind it. The
                                                                    // entire WrCmdQ will therefore be 'promoted'
                                                                    // when the fabric 'WrQos' signal is promoted.
                                                                    // When disabled, only the new write commands
                                                                    // issued will receive the 'promotion'.

                                                                    // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_WR_FABRIC_OUT_CMD_EN_MASK   = 0x00000004;    // Enable control of outstanding write commands
const uintptr_t AXI_HP_WR_FABRIC_OUT_CMD_EN_BPOS   = 2;             // from the fabric
                                                                    // 0: The maximum number of outstanding write
                                                                    // commands is always taken from APB register
                                                                    // field, 'wrIssueCap0'1: The maximum outstanding
                                                                    // number of
                                                                    // write commands is selected from the fabric input,
                                                                    // 'axds_wrissuecap1_en', as follows:
                                                                    // Max Outstanding Write Commands =
                                                                    // axds_wrissuecap1_en ? wrIssueCap1 :
                                                                    // wrIssueCap0

                                                                    // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_WR_FABRIC_QOS_EN_MASK       = 0x00000002;    // Enable control of qos from the fabric
const uintptr_t AXI_HP_WR_FABRIC_QOS_EN_BPOS       = 1;             // 0: The qos bits are derived from APB register,
                                                                    // 'AFI_WRQOS.staticQos'1: The qos bits are
                                                                    // dynamically driven from the fabric input,
                                                                    // 'axds_awqos[3:0]'

                                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_WR32BIT_EN_MASK             = 0x00000001;    // Configures the Write Channel as a 32-bit interface.
const uintptr_t AXI_HP_WR32BIT_EN_BPOS             = 0;             // 1: 32-bit enabled
                                                                    // 0: 64-bit enabled


//------------------------------------------------------------------------------
//
// Register (AXI_HP) WRCHAN_ISSUINGCAP
//
// Name                       AFI_WRCHAN_ISSUINGCAP_REG
// Relative Address           0x00000018
// Absolute Address           axi_hp0: 0xF8008018
//                            axi_hp1: 0xF8009018
//                            axi_hp2: 0xF800A018
//                            axi_hp3: 0xF800B018
// Width                      32 bits
// Access Type                mixed
// Reset Value                0x00000007
// Description                Write Issuing Capability Register
//
// Register AFI_WRCHAN_ISSUINGCAP_REG Details
//           Sets the maximum number of Outstanding Write Commands (Issuing Capability) allowed. Refers to the
//           commands that can be outstanding from the AXI_HP to the SAM switch and back. Fields are selected by
//           the 'axds_wrissuecap1_en' input. The associated "FPGA_RST_CTRL.FPGA_AXDSN_RST" register field
//           must be written with "0" before accessing this register
//
// RESERVED                                                   Properties: Bits: 31:7, Type: raz, Reset Value: 0x0

                                                           // Properties: Bits: 6:4, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_WR_ISSUE_CAP1_MASK = 0x00000070;    // Max number of outstanding write commands
const uintptr_t AXI_HP_WR_ISSUE_CAP1_BPOS = 4;             // (Write Issuing Capability) field 1:
                                                           // 3'b000: 1 command
                                                           // 3'b001: 2 commands' ' '3'b111: 8 commands

// RESERVED                                                   Properties: Bit: 3, Type: raz, Reset Value: 0x0

                                                           // Properties: Bits: 2:0, Type: rw, Reset Value: 0x7
const uintptr_t AXI_HP_WR_ISSUE_CAP0_MASK = 0x00000007;    // Max number of outstanding write commands
const uintptr_t AXI_HP_WR_ISSUE_CAP0_BPOS = 0;             // (Write Issuing Capability) field 0:
                                                           // 3'b000: 1 command
                                                           // 3'b001: 2 commands' ' '3'b111: 8 commands


//------------------------------------------------------------------------------
//
// Register (AXI_HP) WRQOS
//
// Name                     AFI_WRQOS_REG
// Relative Address         0x0000001C
// Absolute Address         axi_hp0: 0xF800801C
//                          axi_hp1: 0xF800901C
//                          axi_hp2: 0xF800A01C
//                          axi_hp3: 0xF800B01C
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              QOS Write Channel Register
//
// Register AFI_WRQOS_REG Details
//         Sets the static Qos value to be used for the write channel. If APB register field, 'FabricQosEn' is 0 or
//         ('FabricQosEn' is 1 and 'QosHeadOfCmdQEn' is 1), this static Qos value will be applied to all write
//         commands enqueued into the WrCmdQ. If ('FabricQosEn' is 1 and 'QosHeadOfCmdQEn' is 0), this static
//         Qos field will be ignored. The associated "FPGA_RST_CTRL.FPGA_AXDSN_RST" register field
//         must be written with "0" before accessing this register
//
// RESERVED                                                  Properties: Bits: 31:4, Type: raz, Reset Value: 0x0

                                                          // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
const uintptr_t AXI_HP_WRSTATIC_QOS_MASK = 0x0000000F;    // Sets the level of the Qos field to be used for the
const uintptr_t AXI_HP_WRSTATIC_QOS_BPOS = 0;             // write channel
                                                          // 4'b0000: Lowest Priority' ' '4'b1111: Highest
                                                          // Priority


//------------------------------------------------------------------------------
//
// Register (AXI_HP) WRDATAFIFO_LEVEL
//
// Name                     AFI_WRDATAFIFO_LEVEL_REG
// Relative Address         0x00000020
// Absolute Address         axi_hp0: 0xF8008020
//                          axi_hp1: 0xF8009020
//                          axi_hp2: 0xF800A020
//                          axi_hp3: 0xF800B020
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Write Data FIFO Level Register
//
// Register AFI_WRDATAFIFO_LEVEL_REG Details
//         Returns the Level of the Write Data FIFO in Dwords. Note that this register should only be read if a valid
//         HP port clock is actively running. If no clock is present, the APB access will hang. The associated
//         "FPGA_RST_CTRL.FPGA_AXDSN_RST" register field
//         must be written with "0" before accessing this register
//
// RESERVED                                                   Properties: Bits: 31:8, Type: raz, Reset Value: 0x0

                                                           // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t AXI_HP_WR_FIFO_LEVEL_MASK = 0x000000FF;    // Returns the level measured in Dwords (64-bits) of
const uintptr_t AXI_HP_WR_FIFO_LEVEL_BPOS = 0;             // the Write Data FIFO
                                                           // 8'h00: 0 Entries
                                                           // 8'h01: 1 Entry' ' '8'h8F: 128 Entries


//------------------------------------------------------------------------------
//
// Register (AXI_HP) WRDEBUG
//
// Name                     AFI_WRDEBUG_REG
// Relative Address         0x00000024
// Absolute Address         axi_hp0: 0xF8008024
//                          axi_hp1: 0xF8009024
//                          axi_hp2: 0xF800A024
//                          axi_hp3: 0xF800B024
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Write Channel Debug Register
//
// Register AFI_WRDEBUG_REG Details
//         The associated "FPGA_RST_CTRL.FPGA_AXDSN_RST" register field
//         must be written with "0" before accessing this register
//
// RESERVED                                                           Properties: Bits: 31:5, Type: raz, Reset Value: 0x0

                                                                   // Properties: Bits: 4:1, Type: ro, Reset Value: 0x0
const uintptr_t AXI_HP_WR_OUT_WR_CMDS_MASK        = 0x0000001E;    // Returns the number of write commands in flight
const uintptr_t AXI_HP_WR_OUT_WR_CMDS_BPOS        = 1;             // between the AXI_HP and the SAM switch
                                                                   // 4'h0: 0
                                                                   // 4'h1: 1
                                                                   // etc

                                                                   // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t AXI_HP_WR_DATA_FIFO_OVERFLOW_MASK = 0x00000001;    // Bit is set if the WrDataFIFO overflows
const uintptr_t AXI_HP_WR_DATA_FIFO_OVERFLOW_BPOS = 0;             // 


#endif // PS7_AXI_HP_H

