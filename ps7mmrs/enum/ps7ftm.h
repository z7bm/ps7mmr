//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_FTM
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

#ifndef PS7_FTM_H
#define PS7_FTM_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    FTM MMRs
//
//  Name                   Address                         Width   Type  Reset Value   Description
enum TFTM
{
    FTM_GLBCTRL_REG      =  DEBUG_FTM_ADDR + 0x00000000, //   1    rw    0x00000000    FTM Global Control Register
    FTM_STATUS_REG       =  DEBUG_FTM_ADDR + 0x00000004, //   8    ro    0x00000082    FTM Status Register
    FTM_CONTROL_REG      =  DEBUG_FTM_ADDR + 0x00000008, //   3    rw    0x00000000    FTM Configuration
    FTM_P2FDBG0_REG      =  DEBUG_FTM_ADDR + 0x0000000C, //   8    rw    0x00000000    FPGA Debug Register P2F0
    FTM_P2FDBG1_REG      =  DEBUG_FTM_ADDR + 0x00000010, //   8    rw    0x00000000    FPGA Debug Register P2F1
    FTM_P2FDBG2_REG      =  DEBUG_FTM_ADDR + 0x00000014, //   8    rw    0x00000000    FPGA Debug Register P2F2
    FTM_P2FDBG3_REG      =  DEBUG_FTM_ADDR + 0x00000018, //   8    rw    0x00000000    FPGA Debug Register P2F3
    FTM_F2PDBG0_REG      =  DEBUG_FTM_ADDR + 0x0000001C, //   8    ro    0x00000000    FPGA Debug Register F2P0
    FTM_F2PDBG1_REG      =  DEBUG_FTM_ADDR + 0x00000020, //   8    ro    0x00000000    FPGA Debug Register F2P1
    FTM_F2PDBG2_REG      =  DEBUG_FTM_ADDR + 0x00000024, //   8    ro    0x00000000    FPGA Debug Register F2P2
    FTM_F2PDBG3_REG      =  DEBUG_FTM_ADDR + 0x00000028, //   8    ro    0x00000000    FPGA Debug Register F2P3
    FTM_CYCOUNTPRE_REG   =  DEBUG_FTM_ADDR + 0x0000002C, //   4    rw    0x00000000    AXI Cycle Count clock pre-scaler
    FTM_SYNCRELOAD_REG   =  DEBUG_FTM_ADDR + 0x00000030, //  12    rw    0x00000000    FTM Synchronization Counter reload value
    FTM_SYNCCOUT_REG     =  DEBUG_FTM_ADDR + 0x00000034, //  12    ro    0x00000000    FTM Synchronization Counter value
    FTM_ATID_REG         =  DEBUG_FTM_ADDR + 0x00000400, //   7    rw    0x00000000    FTM ATID Value Register
    FTM_ITTRIGOUTACK_REG =  DEBUG_FTM_ADDR + 0x00000ED0, //   4    ro    0x00000000    Trigger Output Acknowledge Integration Test Register
    FTM_ITTRIGGER_REG    =  DEBUG_FTM_ADDR + 0x00000ED4, //   4    wo    0x00000000    Trigger Output Integration Test Register
    FTM_ITTRACEDIS_REG   =  DEBUG_FTM_ADDR + 0x00000ED8, //   1    ro    0x00000000    External Trace Disable Integration Test Register
    FTM_ITCYCCOUNT_REG   =  DEBUG_FTM_ADDR + 0x00000EDC, //  32    rw    0x00000001    Cycle Counter Test Register
    FTM_ITATBDATA0_REG   =  DEBUG_FTM_ADDR + 0x00000EEC, //   5    wo    0x00000000    ATB Data Integration Test Register 0
    FTM_ITATBCTR2_REG    =  DEBUG_FTM_ADDR + 0x00000EF0, //   2    ro    0x00000001    ATB Control Integration Test Register 2
    FTM_ITATBCTR1_REG    =  DEBUG_FTM_ADDR + 0x00000EF4, //   7    rw    0x00000000    ATB Control Integration Test Register 1
    FTM_ITATBCTR0_REG    =  DEBUG_FTM_ADDR + 0x00000EF8, //  10    wo    0x00000000    ATB Control Integration Test Register 0
    FTM_ITCR_REG         =  DEBUG_FTM_ADDR + 0x00000F00, //   1    rw    0x00000000    FTM Test Control Register
    FTM_CLAIMTAGSET_REG  =  DEBUG_FTM_ADDR + 0x00000FA0, //   8    rw    0x000000FF    Claim Tag Set Register
    FTM_CLAIMTAGCLR_REG  =  DEBUG_FTM_ADDR + 0x00000FA4, //   8    rw    0x00000000    Claim Tag Clear Register
    FTM_LOCK_ACCESS_REG  =  DEBUG_FTM_ADDR + 0x00000FB0, //  32    wo    0x00000000    Lock Access Register
    FTM_LOCK_STATUS_REG  =  DEBUG_FTM_ADDR + 0x00000FB4, //   3    ro    0x00000003    Lock Status Register
    FTM_AUTHSTATUS_REG   =  DEBUG_FTM_ADDR + 0x00000FB8, //   8    ro    0x00000088    Authentication Status Register
    FTM_DEVID_REG        =  DEBUG_FTM_ADDR + 0x00000FC8, //   1    ro    0x00000000    Device Configuration Register
    FTM_DEV_TYPE_REG     =  DEBUG_FTM_ADDR + 0x00000FCC, //   8    ro    0x00000033    Device Type Identification Register
    FTM_PERIPHID4_REG    =  DEBUG_FTM_ADDR + 0x00000FD0, //   8    ro    0x00000000    Peripheral ID4
    FTM_PERIPHID5_REG    =  DEBUG_FTM_ADDR + 0x00000FD4, //   8    ro    0x00000000    Peripheral ID5
    FTM_PERIPHID6_REG    =  DEBUG_FTM_ADDR + 0x00000FD8, //   8    ro    0x00000000    Peripheral ID6
    FTM_PERIPHID7_REG    =  DEBUG_FTM_ADDR + 0x00000FDC, //   8    ro    0x00000000    Peripheral ID7
    FTM_PERIPHID0_REG    =  DEBUG_FTM_ADDR + 0x00000FE0, //   8    ro    0x00000001    Peripheral ID0
    FTM_PERIPHID1_REG    =  DEBUG_FTM_ADDR + 0x00000FE4, //   8    ro    0x00000090    Peripheral ID1
    FTM_PERIPHID2_REG    =  DEBUG_FTM_ADDR + 0x00000FE8, //   8    ro    0x0000000C    Peripheral ID2
    FTM_PERIPHID3_REG    =  DEBUG_FTM_ADDR + 0x00000FEC, //   8    ro    0x00000000    Peripheral ID3
    FTM_COMPONID0_REG    =  DEBUG_FTM_ADDR + 0x00000FF0, //   8    ro    0x0000000D    Component ID0
    FTM_COMPONID1_REG    =  DEBUG_FTM_ADDR + 0x00000FF4, //   8    ro    0x00000090    Component ID1
    FTM_COMPONID2_REG    =  DEBUG_FTM_ADDR + 0x00000FF8, //   8    ro    0x00000005    Component ID2
    FTM_COMPONID3_REG    =  DEBUG_FTM_ADDR + 0x00000FFC  //   8    ro    0x000000B1    Component ID3
};
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (FTM) GLBCTRL
//
// Name                    FTM_GLBCTRL_REG
// Relative Address        0x00000000
// Absolute Address        0xF880B000
// Width                   1 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             FTM Global Control Register
//
// Register FTM_GLBCTRL_REG Details
//
enum TFTM_GLBCTRL_REG
{
                                                   // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    FTM_GLBCTRL_FTMENABLE_MASK =  0x00000001UL,    // Enable FTM
    FTM_GLBCTRL_FTMENABLE_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) STATUS
//
// Name                    FTM_STATUS_REG
// Relative Address        0x00000004
// Absolute Address        0xF880B004
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000082
// Description             FTM Status Register
//
// Register FTM_STATUS_REG Details
//
enum TFTM_STATUS_REG
{
                                                  // Properties: Bit: 7, Type: ro, Reset Value: 0x1
    FTM_STATUS_IDLE_MASK      =  0x00000080UL,    // FTM IDLE Status
    FTM_STATUS_IDLE_BPOS      =  7UL,             // 

                                                  // Properties: Bit: 6, Type: ro, Reset Value: 0x0
    FTM_STATUS_SPIDEN_MASK    =  0x00000040UL,    // Trustzone SPIDEN signal status
    FTM_STATUS_SPIDEN_BPOS    =  6UL,             // 

                                                  // Properties: Bit: 5, Type: ro, Reset Value: 0x0
    FTM_STATUS_DBGEN_MASK     =  0x00000020UL,    // Trustzone DBGEN signal status
    FTM_STATUS_DBGEN_BPOS     =  5UL,             // 

                                                  // Properties: Bit: 4, Type: ro, Reset Value: 0x0
    FTM_STATUS_SPNIDEN_MASK   =  0x00000010UL,    // Trustzone SPNIDEN signal status
    FTM_STATUS_SPNIDEN_BPOS   =  4UL,             // 

                                                  // Properties: Bit: 3, Type: ro, Reset Value: 0x0
    FTM_STATUS_NIDEN_MASK     =  0x00000008UL,    // Trustzone NIDEN signal status
    FTM_STATUS_NIDEN_BPOS     =  3UL,             // 

                                                  // Properties: Bit: 2, Type: ro, Reset Value: 0x0
    FTM_STATUS_FIFOFULL_MASK  =  0x00000004UL,    // 1 = FIFO is full
    FTM_STATUS_FIFOFULL_BPOS  =  2UL,             // 

                                                  // Properties: Bit: 1, Type: ro, Reset Value: 0x1
    FTM_STATUS_FIFOEMPTY_MASK =  0x00000002UL,    // 1 = FIFO is empty
    FTM_STATUS_FIFOEMPTY_BPOS =  1UL,             // 

                                                  // Properties: Bit: 0, Type: ro, Reset Value: 0x0
    FTM_STATUS_LOCKED_MASK    =  0x00000001UL,    // Always read as zero
    FTM_STATUS_LOCKED_BPOS    =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) CONTROL
//
// Name                    FTM_CONTROL_REG
// Relative Address        0x00000008
// Absolute Address        0xF880B008
// Width                   3 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             FTM Configuration
//
// Register FTM_CONTROL_REG Details
//
enum TFTM_CONTROL_REG
{
                                                // Properties: Bit: 2, Type: rw, Reset Value: 0x0
    FTM_CONTROL_CYCEN_MASK  =  0x00000004UL,    // Enable Cycle Count packets
    FTM_CONTROL_CYCEN_BPOS  =  2UL,             // 

                                                // Properties: Bit: 1, Type: rw, Reset Value: 0x0
    FTM_CONTROL_TRACEN_MASK =  0x00000002UL,    // Enable Trace packets
    FTM_CONTROL_TRACEN_BPOS =  1UL,             // 

                                                // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    FTM_CONTROL_PROG_MASK   =  0x00000001UL,    // Not used
    FTM_CONTROL_PROG_BPOS   =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) P2FDBG0
//
// Name                    FTM_P2FDBG0_REG
// Relative Address        0x0000000C
// Absolute Address        0xF880B00C
// Width                   8 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             FPGA Debug Register P2F0
//
// Register FTM_P2FDBG0_REG Details
//
enum TFTM_P2FDBG0_REG
{
                                                  // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
    FTM_P2FDBG0_PSS2FPGA_MASK =  0x000000FFUL,    // Signals presented to the fabric. These signals do
    FTM_P2FDBG0_PSS2FPGA_BPOS =  0UL              // not affect the FTM, they are provided for user
                                                  // specific debug. To modify the contents of this
                                                  // register, the SPIDEN pin must be asserted.

};

//------------------------------------------------------------------------------
//
// Register (FTM) P2FDBG1
//
// Name                    FTM_P2FDBG1_REG
// Relative Address        0x00000010
// Absolute Address        0xF880B010
// Width                   8 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             FPGA Debug Register P2F1
//
// Register FTM_P2FDBG1_REG Details
//
enum TFTM_P2FDBG1_REG
{
                                                  // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
    FTM_P2FDBG1_PSS2FPGA_MASK =  0x000000FFUL,    // Signals presented to the fabric. These signals do
    FTM_P2FDBG1_PSS2FPGA_BPOS =  0UL              // not affect the FTM, they are provided for user
                                                  // specific debug. To modify the contents of this
                                                  // register, the SPIDEN pin must be asserted.

};

//------------------------------------------------------------------------------
//
// Register (FTM) P2FDBG2
//
// Name                    FTM_P2FDBG2_REG
// Relative Address        0x00000014
// Absolute Address        0xF880B014
// Width                   8 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             FPGA Debug Register P2F2
//
// Register FTM_P2FDBG2_REG Details
//
enum TFTM_P2FDBG2_REG
{
                                                  // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
    FTM_P2FDBG2_PSS2FPGA_MASK =  0x000000FFUL,    // Signals presented to the fabric. These signals do
    FTM_P2FDBG2_PSS2FPGA_BPOS =  0UL              // not affect the FTM, they are provided for user
                                                  // specific debug. To modify the contents of this
                                                  // register, the SPIDEN pin must be asserted.

};

//------------------------------------------------------------------------------
//
// Register (FTM) P2FDBG3
//
// Name                    FTM_P2FDBG3_REG
// Relative Address        0x00000018
// Absolute Address        0xF880B018
// Width                   8 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             FPGA Debug Register P2F3
//
// Register FTM_P2FDBG3_REG Details
//
enum TFTM_P2FDBG3_REG
{
                                                  // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
    FTM_P2FDBG3_PSS2FPGA_MASK =  0x000000FFUL,    // Signals presented to the fabric. These signals do
    FTM_P2FDBG3_PSS2FPGA_BPOS =  0UL              // not affect the FTM, they are provided for user
                                                  // specific debug. To modify the contents of this
                                                  // register, the SPIDEN pin must be asserted.

};

//------------------------------------------------------------------------------
//
// Register (FTM) F2PDBG0
//
// Name                    FTM_F2PDBG0_REG
// Relative Address        0x0000001C
// Absolute Address        0xF880B01C
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             FPGA Debug Register F2P0
//
// Register FTM_F2PDBG0_REG Details
//
enum TFTM_F2PDBG0_REG
{
                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    FTM_F2PDBG0_FPGA2PSS_MASK =  0x000000FFUL,    // Signals that are presented to the PSS from the
    FTM_F2PDBG0_FPGA2PSS_BPOS =  0UL              // Fabric.

};

//------------------------------------------------------------------------------
//
// Register (FTM) F2PDBG1
//
// Name                    FTM_F2PDBG1_REG
// Relative Address        0x00000020
// Absolute Address        0xF880B020
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             FPGA Debug Register F2P1
//
// Register FTM_F2PDBG1_REG Details
//
enum TFTM_F2PDBG1_REG
{
                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    FTM_F2PDBG1_FPGA2PSS_MASK =  0x000000FFUL,    // Signals that are presented to the PSS from the
    FTM_F2PDBG1_FPGA2PSS_BPOS =  0UL              // Fabric.

};

//------------------------------------------------------------------------------
//
// Register (FTM) F2PDBG2
//
// Name                    FTM_F2PDBG2_REG
// Relative Address        0x00000024
// Absolute Address        0xF880B024
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             FPGA Debug Register F2P2
//
// Register FTM_F2PDBG2_REG Details
//
enum TFTM_F2PDBG2_REG
{
                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    FTM_F2PDBG2_FPGA2PSS_MASK =  0x000000FFUL,    // Signals that are presented to the PSS from the
    FTM_F2PDBG2_FPGA2PSS_BPOS =  0UL              // Fabric.

};

//------------------------------------------------------------------------------
//
// Register (FTM) F2PDBG3
//
// Name                    FTM_F2PDBG3_REG
// Relative Address        0x00000028
// Absolute Address        0xF880B028
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             FPGA Debug Register F2P3
//
// Register FTM_F2PDBG3_REG Details
//
enum TFTM_F2PDBG3_REG
{
                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    FTM_F2PDBG3_FPGA2PSS_MASK =  0x000000FFUL,    // Signals that are presented to the PSS from the
    FTM_F2PDBG3_FPGA2PSS_BPOS =  0UL              // Fabric.

};

//------------------------------------------------------------------------------
//
// Register (FTM) CYCOUNTPRE
//
// Name                    FTM_CYCOUNTPRE_REG
// Relative Address        0x0000002C
// Absolute Address        0xF880B02C
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             AXI Cycle Count clock pre-scaler
//
// Register FTM_CYCOUNTPRE_REG Details
//
enum TFTM_CYCOUNTPRE_REG
{
                                                     // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    FTM_CYCOUNTPRE_PRESCALE_MASK =  0x0000000FUL,    // The incoming clock is divided by 2^ PRESCALE.
    FTM_CYCOUNTPRE_PRESCALE_BPOS =  0UL              // For example: PRESCALE = 15 indicates that the
                                                     // Cycle Counter runs at the AXI clock divided by
                                                     // 2^15 = 32,768 (PRESCALE = 0 indicates no clock
                                                     // scaling)

};

//------------------------------------------------------------------------------
//
// Register (FTM) SYNCRELOAD
//
// Name                    FTM_SYNCRELOAD_REG
// Relative Address        0x00000030
// Absolute Address        0xF880B030
// Width                   12 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             FTM Synchronization Counter reload value
//
// Register FTM_SYNCRELOAD_REG Details
//
enum TFTM_SYNCRELOAD_REG
{
                                                          // Properties: Bits: 11:0, Type: rw, Reset Value: 0x0
    FTM_SYNCRELOAD_SYNCCOUNTTERM_MASK =  0x00000FFFUL,    // Reset FTM Synchronization packet counter when
    FTM_SYNCRELOAD_SYNCCOUNTTERM_BPOS =  0UL              // this number of packets has been transmitted.
                                                          // THIS NUMBER HAS A MINIMUM VALUE of 12.

};

//------------------------------------------------------------------------------
//
// Register (FTM) SYNCCOUT
//
// Name                    FTM_SYNCCOUT_REG
// Relative Address        0x00000034
// Absolute Address        0xF880B034
// Width                   12 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             FTM Synchronization Counter value
//
// Register FTM_SYNCCOUT_REG Details
//
enum TFTM_SYNCCOUT_REG
{
                                              // Properties: Bits: 11:0, Type: ro, Reset Value: 0x0
    FTM_SYNCCOUT_VAL_MASK =  0x00000FFFUL,    // Current value of the Synchronization packet
    FTM_SYNCCOUT_VAL_BPOS =  0UL              // counter. The initial value is zero. The counter
                                              // value increments every time a packet is issued by
                                              // the FTM. When the counter reaches
                                              // SYNCCOUNTTERM, a Synchronization packet is
                                              // emitted.

};

//------------------------------------------------------------------------------
//
// Register (FTM) ATID
//
// Name                     FTM_ATID_REG
// Relative Address         0x00000400
// Absolute Address         0xF880B400
// Width                    7 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              FTM ATID Value Register
//
// Register FTM_ATID_REG Details
//
enum TFTM_ATID_REG
{
                                          // Properties: Bits: 6:0, Type: rw, Reset Value: 0x0
    FTM_ATID_VAL_MASK =  0x0000007FUL,    // ATID value supplied to ATB bus. The upper three
    FTM_ATID_VAL_BPOS =  0UL              // bits, ATID[6:4], are directly driven from this
                                          // register. The lower four bits, ATID[3:0], are OR-ed
                                          // with the FPGAATID[3:0] pins.

};

//------------------------------------------------------------------------------
//
// Register (FTM) ITTRIGOUTACK
//
// Name                     FTM_ITTRIGOUTACK_REG
// Relative Address         0x00000ED0
// Absolute Address         0xF880BED0
// Width                    4 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Trigger Output Acknowledge Integration Test Register
//
// Register FTM_ITTRIGOUTACK_REG Details
//
enum TFTM_ITTRIGOUTACK_REG
{
                                                      // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
    FTM_ITTRIGOUTACK_TRIGACK_MASK =  0x0000000FUL,    // Read the current value of the
    FTM_ITTRIGOUTACK_TRIGACK_BPOS =  0UL              // FTMTrigOutAck[3:0] inputs

};

//------------------------------------------------------------------------------
//
// Register (FTM) ITTRIGGER
//
// Name                    FTM_ITTRIGGER_REG
// Relative Address        0x00000ED4
// Absolute Address        0xF880BED4
// Width                   4 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Trigger Output Integration Test Register
//
// Register FTM_ITTRIGGER_REG Details
//
enum TFTM_ITTRIGGER_REG
{
                                                   // Properties: Bits: 3:0, Type: wo, Reset Value: 0x0
    FTM_ITTRIGGER_TRIGGER_MASK =  0x0000000FUL,    // When ITEN is 1, this field determines the
    FTM_ITTRIGGER_TRIGGER_BPOS =  0UL              // FTMTrigOut[3:0]

};

//------------------------------------------------------------------------------
//
// Register (FTM) ITTRACEDIS
//
// Name                    FTM_ITTRACEDIS_REG
// Relative Address        0x00000ED8
// Absolute Address        0xF880BED8
// Width                   1 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             External Trace Disable Integration Test Register
//
// Register FTM_ITTRACEDIS_REG Details
//
enum TFTM_ITTRACEDIS_REG
{
                                                     // Properties: Bit: 0, Type: ro, Reset Value: 0x0
    FTM_ITTRACEDIS_TRACEDIS_MASK =  0x00000001UL,    // Always read as zero.
    FTM_ITTRACEDIS_TRACEDIS_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) ITCYCCOUNT
//
// Name                    FTM_ITCYCCOUNT_REG
// Relative Address        0x00000EDC
// Absolute Address        0xF880BEDC
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000001
// Description             Cycle Counter Test Register
//
// Register FTM_ITCYCCOUNT_REG Details
//
enum TFTM_ITCYCCOUNT_REG
{
                                                        // Properties: Bits: 31:0, Type: rw, Reset Value: 0x1
    FTM_ITCYCCOUNT_FTMCYCCOUNT_MASK =  0xFFFFFFFFUL,    // Read/write the value of the cycle counter
    FTM_ITCYCCOUNT_FTMCYCCOUNT_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) ITATBDATA0
//
// Name                    FTM_ITATBDATA0_REG
// Relative Address        0x00000EEC
// Absolute Address        0xF880BEEC
// Width                   5 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             ATB Data Integration Test Register 0
//
// Register FTM_ITATBDATA0_REG Details
//
enum TFTM_ITATBDATA0_REG
{
                                                     // Properties: Bit: 4, Type: wo, Reset Value: 0x0
    FTM_ITATBDATA0_ATDATA31_MASK =  0x00000010UL,    // When ITEN is 1, this value determines the
    FTM_ITATBDATA0_ATDATA31_BPOS =  4UL,             // ATDATAM[31] output

                                                     // Properties: Bit: 3, Type: wo, Reset Value: 0x0
    FTM_ITATBDATA0_ATDATA23_MASK =  0x00000008UL,    // When ITEN is 1, this value determines the
    FTM_ITATBDATA0_ATDATA23_BPOS =  3UL,             // ATDATAM[23] output

                                                     // Properties: Bit: 2, Type: wo, Reset Value: 0x0
    FTM_ITATBDATA0_ATDATA15_MASK =  0x00000004UL,    // When ITEN is 1, this value determines the
    FTM_ITATBDATA0_ATDATA15_BPOS =  2UL,             // ATDATAM[15] output

                                                     // Properties: Bit: 1, Type: wo, Reset Value: 0x0
    FTM_ITATBDATA0_ATDATA7_MASK  =  0x00000002UL,    // When ITEN is 1, this value determines the
    FTM_ITATBDATA0_ATDATA7_BPOS  =  1UL,             // ATDATAM[7] output

                                                     // Properties: Bit: 0, Type: wo, Reset Value: 0x0
    FTM_ITATBDATA0_ATDATA0_MASK  =  0x00000001UL,    // When ITEN is 1, this value determines the
    FTM_ITATBDATA0_ATDATA0_BPOS  =  0UL              // ATDATAM[0] output

};

//------------------------------------------------------------------------------
//
// Register (FTM) ITATBCTR2
//
// Name                    FTM_ITATBCTR2_REG
// Relative Address        0x00000EF0
// Absolute Address        0xF880BEF0
// Width                   2 bits
// Access Type             ro
// Reset Value             0x00000001
// Description             ATB Control Integration Test Register 2
//
// Register FTM_ITATBCTR2_REG Details
//
enum TFTM_ITATBCTR2_REG
{
                                                   // Properties: Bit: 1, Type: ro, Reset Value: 0x0
    FTM_ITATBCTR2_AFVALID_MASK =  0x00000002UL,    // Read the current value of the AFVALIDM input
    FTM_ITATBCTR2_AFVALID_BPOS =  1UL,             // 

                                                   // Properties: Bit: 0, Type: ro, Reset Value: 0x1
    FTM_ITATBCTR2_ATREADY_MASK =  0x00000001UL,    // Read the current value of the ATREADYM input
    FTM_ITATBCTR2_ATREADY_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) ITATBCTR1
//
// Name                    FTM_ITATBCTR1_REG
// Relative Address        0x00000EF4
// Absolute Address        0xF880BEF4
// Width                   7 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ATB Control Integration Test Register 1
//
// Register FTM_ITATBCTR1_REG Details
//
enum TFTM_ITATBCTR1_REG
{
                                                     // Properties: Bits: 6:0, Type: rw, Reset Value: 0x0
    FTM_ITATBCTR1_ATID_TEST_MASK =  0x0000007FUL,    // When ITEN is 1, this value determines the ATID
    FTM_ITATBCTR1_ATID_TEST_BPOS =  0UL              // output

};

//------------------------------------------------------------------------------
//
// Register (FTM) ITATBCTR0
//
// Name                    FTM_ITATBCTR0_REG
// Relative Address        0x00000EF8
// Absolute Address        0xF880BEF8
// Width                   10 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             ATB Control Integration Test Register 0
//
// Register FTM_ITATBCTR0_REG Details
//
enum TFTM_ITATBCTR0_REG
{
                                                   // Properties: Bits: 9:8, Type: wo, Reset Value: 0x0
    FTM_ITATBCTR0_ATBYTES_MASK =  0x00000300UL,    // When ITEN is 1, this value determines the
    FTM_ITATBCTR0_ATBYTES_BPOS =  8UL,             // ATBYTESM[1:0] output

// RESERVED                                           Properties: Bits: 7:2, Type: wo, Reset Value: 0x0

                                                   // Properties: Bit: 1, Type: wo, Reset Value: 0x0
    FTM_ITATBCTR0_AFREADY_MASK =  0x00000002UL,    // When ITEN is 1, this value determines the
    FTM_ITATBCTR0_AFREADY_BPOS =  1UL,             // AFREADY output

                                                   // Properties: Bit: 0, Type: wo, Reset Value: 0x0
    FTM_ITATBCTR0_ATVALID_MASK =  0x00000001UL,    // When ITEN is 1, this value determines the
    FTM_ITATBCTR0_ATVALID_BPOS =  0UL              // ATVALID output

};

//------------------------------------------------------------------------------
//
// Register (FTM) ITCR
//
// Name                     FTM_ITCR_REG
// Relative Address         0x00000F00
// Absolute Address         0xF880BF00
// Width                    1 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              FTM Test Control Register
//
// Register FTM_ITCR_REG Details
//
enum TFTM_ITCR_REG
{
                                           // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    FTM_ITCR_ITEN_MASK =  0x00000001UL,    // Integration Test Enable
    FTM_ITCR_ITEN_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) CLAIMTAGSET
//
// Name                     FTM_CLAIMTAGSET_REG
// Relative Address         0x00000FA0
// Absolute Address        0xF880BFA0
// Width                    8 bits
// Access Type              rw
// Reset Value              0x000000FF
// Description              Claim Tag Set Register
//
// Register FTM_CLAIMTAGSET_REG Details
//
enum TFTM_CLAIMTAGSET_REG
{
                                                 // Properties: Bits: 7:0, Type: rw, Reset Value: 0xFF
    FTM_CLAIMTAGSET_VAL_MASK =  0x000000FFUL,    // Read: 1 = Claim tag implemented, 0 = not
    FTM_CLAIMTAGSET_VAL_BPOS =  0UL              // implemented
                                                 // Write: 1 = Set claim tag bit, 0 = no effect

};

//------------------------------------------------------------------------------
//
// Register (FTM) CLAIMTAGCLR
//
// Name                    FTM_CLAIMTAGCLR_REG
// Relative Address        0x00000FA4
// Absolute Address        0xF880BFA4
// Width                   8 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Claim Tag Clear Register
//
// Register FTM_CLAIMTAGCLR_REG Details
//
enum TFTM_CLAIMTAGCLR_REG
{
                                                 // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
    FTM_CLAIMTAGCLR_VAL_MASK =  0x000000FFUL,    // Read: value of CLAIMTAGSETVAL
    FTM_CLAIMTAGCLR_VAL_BPOS =  0UL              // Write: 1 = Clear claim tag bit, 0 = no effect

};

//------------------------------------------------------------------------------
//
// Register (FTM) LOCK_ACCESS
//
// Name                    FTM_LOCK_ACCESS_REG
// Relative Address        0x00000FB0
// Absolute Address        0xF880BFB0
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Lock Access Register
//
// Register FTM_LOCK_ACCESS_REG Details
//
enum TFTM_LOCK_ACCESS_REG
{
                                                 // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
    FTM_LOCK_ACCESS_VAL_MASK =  0xFFFFFFFFUL,    // A value of 0xC5ACCE55 allows write access to
    FTM_LOCK_ACCESS_VAL_BPOS =  0UL              // FTM, any other value blocks write access

};

//------------------------------------------------------------------------------
//
// Register (FTM) LOCK_STATUS
//
// Name                    FTM_LOCK_STATUS_REG
// Relative Address        0x00000FB4
// Absolute Address        0xF880BFB4
// Width                   3 bits
// Access Type             ro
// Reset Value             0x00000003
// Description             Lock Status Register
//
// Register FTM_LOCK_STATUS_REG Details
//
enum TFTM_LOCK_STATUS_REG
{
                                                        // Properties: Bit: 2, Type: ro, Reset Value: 0x0
    FTM_LOCK_STATUS_8BITACCESS_MASK =  0x00000004UL,    // 8-bit lock access is not used
    FTM_LOCK_STATUS_8BITACCESS_BPOS =  2UL,             // 

                                                        // Properties: Bit: 1, Type: ro, Reset Value: 0x1
    FTM_LOCK_STATUS_LOCKSTATUS_MASK =  0x00000002UL,    // 1:Access Locked, 0:Access OK
    FTM_LOCK_STATUS_LOCKSTATUS_BPOS =  1UL,             // 

                                                        // Properties: Bit: 0, Type: ro, Reset Value: 0x1
    FTM_LOCK_STATUS_LOCKIMP_MASK    =  0x00000001UL,    // 1:Lock exists if PADDRDBG31 is low, else 0
    FTM_LOCK_STATUS_LOCKIMP_BPOS    =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) AUTHSTATUS
//
// Name                    FTM_AUTHSTATUS_REG
// Relative Address        0x00000FB8
// Absolute Address        0xF880BFB8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000088
// Description             Authentication Status Register
//
// Register FTM_AUTHSTATUS_REG Details
//
enum TFTM_AUTHSTATUS_REG
{
                                                    // Properties: Bits: 7:6, Type: ro, Reset Value: 0x2
    FTM_AUTHSTATUS_SPNIDEN_MASK =  0x000000C0UL,    // Secure Non-Invasive Debug
    FTM_AUTHSTATUS_SPNIDEN_BPOS =  6UL,             // 

// RESERVED                                            Properties: Bits: 5:4, Type: ro, Reset Value: 0x0

                                                    // Properties: Bits: 3:2, Type: ro, Reset Value: 0x2
    FTM_AUTHSTATUS_NIDEN_MASK   =  0x0000000CUL,    // Non-Secure Non-Invasive Debug
    FTM_AUTHSTATUS_NIDEN_BPOS   =  2UL,             // 

// RESERVED                                            Properties: Bits: 1:0, Type: ro, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (FTM) DEVID
//
// Name                    FTM_DEVID_REG
// Relative Address        0x00000FC8
// Absolute Address        0xF880BFC8
// Width                   1 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Device Configuration Register
//
// Register FTM_DEVID_REG Details
//
enum TFTM_DEVID_REG
{
// RESERVED                              Properties: Bit: 0, Type: ro, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (FTM) DEV_TYPE
//
// Name                    FTM_DEV_TYPE_REG
// Relative Address        0x00000FCC
// Absolute Address        0xF880BFCC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000033
// Description             Device Type Identification Register
//
// Register FTM_DEV_TYPE_REG Details
//
enum TFTM_DEV_TYPE_REG
{
                                                     // Properties: Bits: 7:4, Type: ro, Reset Value: 0x3
    FTM_DEV_TYPE_SUB_TYPE_MASK   =  0x000000F0UL,    // Sub Type: Associated with a Data Engine or
    FTM_DEV_TYPE_SUB_TYPE_BPOS   =  4UL,             // Co-processor

                                                     // Properties: Bits: 3:0, Type: ro, Reset Value: 0x3
    FTM_DEV_TYPE_MAJOR_TYPE_MASK =  0x0000000FUL,    // Major Type: Trace Source
    FTM_DEV_TYPE_MAJOR_TYPE_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) PERIPHID4
//
// Name                    FTM_PERIPHID4_REG
// Relative Address        0x00000FD0
// Absolute Address        0xF880BFD0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID4
//
// Register FTM_PERIPHID4_REG Details
//
enum TFTM_PERIPHID4_REG
{
                                                    // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
    FTM_PERIPHID4_4KBCOUNT_MASK =  0x000000F0UL,    // 4KB Count
    FTM_PERIPHID4_4KBCOUNT_BPOS =  4UL,             // 

                                                    // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
    FTM_PERIPHID4_JEP106_MASK   =  0x0000000FUL,    // JEP106 Continuation Code
    FTM_PERIPHID4_JEP106_BPOS   =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) PERIPHID5
//
// Name                    FTM_PERIPHID5_REG
// Relative Address        0x00000FD4
// Absolute Address        0xF880BFD4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID5
//
// Register FTM_PERIPHID5_REG Details
//
enum TFTM_PERIPHID5_REG
{
// RESERVED                              Properties: Bits: 7:0, Type: ro, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (FTM) PERIPHID6
//
// Name                    FTM_PERIPHID6_REG
// Relative Address        0x00000FD8
// Absolute Address        0xF880BFD8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID6
//
// Register FTM_PERIPHID6_REG Details
//
enum TFTM_PERIPHID6_REG
{
// RESERVED                              Properties: Bits: 7:0, Type: ro, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (FTM) PERIPHID7
//
// Name                    FTM_PERIPHID7_REG
// Relative Address        0x00000FDC
// Absolute Address        0xF880BFDC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID7
//
// Register FTM_PERIPHID7_REG Details
//
enum TFTM_PERIPHID7_REG
{
// RESERVED                              Properties: Bits: 7:0, Type: ro, Reset Value: 0x0

};

//------------------------------------------------------------------------------
//
// Register (FTM) PERIPHID0
//
// Name                    FTM_PERIPHID0_REG
// Relative Address        0x00000FE0
// Absolute Address        0xF880BFE0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000001
// Description             Peripheral ID0
//
// Register FTM_PERIPHID0_REG Details
//
enum TFTM_PERIPHID0_REG
{
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x1
    FTM_PERIPHID0_PARTNUMLOWER_MASK =  0x000000FFUL,    // Part Number Lower
    FTM_PERIPHID0_PARTNUMLOWER_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) PERIPHID1
//
// Name                    FTM_PERIPHID1_REG
// Relative Address        0x00000FE4
// Absolute Address        0xF880BFE4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000090
// Description             Peripheral ID1
//
// Register FTM_PERIPHID1_REG Details
//
enum TFTM_PERIPHID1_REG
{
                                                        // Properties: Bits: 7:4, Type: ro, Reset Value: 0x9
    FTM_PERIPHID1_JEP106_MASK       =  0x000000F0UL,    // JEP106 identity bits [3:0]
    FTM_PERIPHID1_JEP106_BPOS       =  4UL,             // 

                                                        // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
    FTM_PERIPHID1_PARTNUMUPPER_MASK =  0x0000000FUL,    // Part Number Upper [11:8]
    FTM_PERIPHID1_PARTNUMUPPER_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) PERIPHID2
//
// Name                    FTM_PERIPHID2_REG
// Relative Address        0x00000FE8
// Absolute Address        0xF880BFE8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000000C
// Description             Peripheral ID2
//
// Register FTM_PERIPHID2_REG Details
//
enum TFTM_PERIPHID2_REG
{
                                                    // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
    FTM_PERIPHID2_REVISION_MASK =  0x000000F0UL,    // Revision
    FTM_PERIPHID2_REVISION_BPOS =  4UL,             // 

                                                    // Properties: Bit: 3, Type: ro, Reset Value: 0x1
    FTM_PERIPHID2_JEDEC_MASK    =  0x00000008UL,    // JEDEC used
    FTM_PERIPHID2_JEDEC_BPOS    =  3UL,             // 

                                                    // Properties: Bits: 2:0, Type: ro, Reset Value: 0x4
    FTM_PERIPHID2_JEP106_MASK   =  0x00000007UL,    // JEP106 Identity [6:4]
    FTM_PERIPHID2_JEP106_BPOS   =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) PERIPHID3
//
// Name                    FTM_PERIPHID3_REG
// Relative Address        0x00000FEC
// Absolute Address        0xF880BFEC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID3
//
// Register FTM_PERIPHID3_REG Details
//
enum TFTM_PERIPHID3_REG
{
                                                    // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
    FTM_PERIPHID3_REV_AND_MASK  =  0x000000F0UL,    // RevAnd
    FTM_PERIPHID3_REV_AND_BPOS  =  4UL,             // 

                                                    // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
    FTM_PERIPHID3_CUST_MOD_MASK =  0x0000000FUL,    // Customer Modified
    FTM_PERIPHID3_CUST_MOD_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) COMPONID0
//
// Name                    FTM_COMPONID0_REG
// Relative Address        0x00000FF0
// Absolute Address        0xF880BFF0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000000D
// Description             Component ID0
//
// Register FTM_COMPONID0_REG Details
//
enum TFTM_COMPONID0_REG
{
                                                    // Properties: Bits: 7:0, Type: ro, Reset Value: 0xD
    FTM_COMPONID0_PREAMBLE_MASK =  0x000000FFUL,    // Preamble
    FTM_COMPONID0_PREAMBLE_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) COMPONID1
//
// Name                    FTM_COMPONID1_REG
// Relative Address        0x00000FF4
// Absolute Address        0xF880BFF4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000090
// Description             Component ID1
//
// Register FTM_COMPONID1_REG Details
//
enum TFTM_COMPONID1_REG
{
                                                      // Properties: Bits: 7:4, Type: ro, Reset Value: 0x9
    FTM_COMPONID1_COMP_CLASS_MASK =  0x000000F0UL,    // Component Class :CoreSight Component
    FTM_COMPONID1_COMP_CLASS_BPOS =  4UL,             // 

                                                      // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
    FTM_COMPONID1_PREAMBLE_MASK   =  0x0000000FUL,    // Preamble
    FTM_COMPONID1_PREAMBLE_BPOS   =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) COMPONID2
//
// Name                    FTM_COMPONID2_REG
// Relative Address        0x00000FF8
// Absolute Address        0xF880BFF8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000005
// Description             Component ID2
//
// Register FTM_COMPONID2_REG Details
//
enum TFTM_COMPONID2_REG
{
                                                    // Properties: Bits: 7:0, Type: ro, Reset Value: 0x5
    FTM_COMPONID2_PREAMBLE_MASK =  0x000000FFUL,    // Preamble
    FTM_COMPONID2_PREAMBLE_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (FTM) COMPONID3
//
// Name                    FTM_COMPONID3_REG
// Relative Address        0x00000FFC
// Absolute Address        0xF880BFFC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B1
// Description             Component ID3
//
// Register FTM_COMPONID3_REG Details
//
enum TFTM_COMPONID3_REG
{
                                                    // Properties: Bits: 7:0, Type: ro, Reset Value: 0xB1
    FTM_COMPONID3_PREAMBLE_MASK =  0x000000FFUL,    // Preamble
    FTM_COMPONID3_PREAMBLE_BPOS =  0UL              // 

};

#endif // PS7_FTM_H

