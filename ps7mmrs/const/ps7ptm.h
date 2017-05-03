//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_PTM
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

#ifndef PS7_PTM_H
#define PS7_PTM_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    PTM_CPU0 MMRs
//
//              Name                         Address                             Width   Type     Reset Value   Description
const uintptr_t PTM_ETMCR_REG_CPU0         = DEBUG_CPU_PTM0_ADDR + 0x00000000; //  30    rw       0x00000401    Main Control Register
const uintptr_t PTM_ETMCCR_REG_CPU0        = DEBUG_CPU_PTM0_ADDR + 0x00000004; //  32    ro       0x8D294004    Configuration Code Register
const uintptr_t PTM_ETMTRIGGER_REG_CPU0    = DEBUG_CPU_PTM0_ADDR + 0x00000008; //  17    rw       0x00000000    Trigger Event Register
const uintptr_t PTM_ETMSR_REG_CPU0         = DEBUG_CPU_PTM0_ADDR + 0x00000010; //   4    mixed    0x00000002    Status Register
const uintptr_t PTM_ETMSCR_REG_CPU0        = DEBUG_CPU_PTM0_ADDR + 0x00000014; //  15    ro       0x00000000    System Configuration Register
const uintptr_t PTM_ETMTSSCR_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000018; //  24    rw       0x00000000    TraceEnable Start
const uintptr_t PTM_ETMTECR1_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000024; //  26    rw       0x00000000    TraceEnable Control Register 1
const uintptr_t PTM_ETMACVR1_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000040; //  32    rw       0x00000000    Address Comparator Value Register 1
const uintptr_t PTM_ETMACVR2_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000044; //  32    rw       0x00000000    Address Comparator Value Register 2
const uintptr_t PTM_ETMACVR3_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000048; //  32    rw       0x00000000    Address Comparator Value Register 3
const uintptr_t PTM_ETMACVR4_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x0000004C; //  32    rw       0x00000000    Address Comparator Value Register 4
const uintptr_t PTM_ETMACVR5_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000050; //  32    rw       0x00000000    Address Comparator Value Register 5
const uintptr_t PTM_ETMACVR6_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000054; //  32    rw       0x00000000    Address Comparator Value Register 6
const uintptr_t PTM_ETMACVR7_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000058; //  32    rw       0x00000000    Address Comparator Value Register 7
const uintptr_t PTM_ETMACVR8_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x0000005C; //  32    rw       0x00000000    Address Comparator Value Register 8
const uintptr_t PTM_ETMACTR1_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000080; //  12    mixed    0x00000001    Address Comparator Access Type Register 1
const uintptr_t PTM_ETMACTR2_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000084; //  12    mixed    0x00000001    Address Comparator Access Type Register 2
const uintptr_t PTM_ETMACTR3_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000088; //  12    mixed    0x00000001    Address Comparator Access Type Register 3
const uintptr_t PTM_ETMACTR4_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x0000008C; //  12    mixed    0x00000001    Address Comparator Access Type Register 4
const uintptr_t PTM_ETMACTR5_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000090; //  12    mixed    0x00000001    Address Comparator Access Type Register 5
const uintptr_t PTM_ETMACTR6_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000094; //  12    mixed    0x00000001    Address Comparator Access Type Register 6
const uintptr_t PTM_ETMACTR7_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000098; //  12    mixed    0x00000001    Address Comparator Access Type Register 7
const uintptr_t PTM_ETMACTR8_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x0000009C; //  12    mixed    0x00000001    Address Comparator Access Type Register 8
const uintptr_t PTM_ETMCNTRLDVR1_REG_CPU0  = DEBUG_CPU_PTM0_ADDR + 0x00000140; //  16    rw       0x00000000    Counter Reload Value Register 1
const uintptr_t PTM_ETMCNTRLDVR2_REG_CPU0  = DEBUG_CPU_PTM0_ADDR + 0x00000144; //  16    rw       0x00000000    Counter Reload Value Register 2
const uintptr_t PTM_ETMCNTENR1_REG_CPU0    = DEBUG_CPU_PTM0_ADDR + 0x00000150; //  18    mixed    0x00020000    Counter Enable Event Register 1
const uintptr_t PTM_ETMCNTENR2_REG_CPU0    = DEBUG_CPU_PTM0_ADDR + 0x00000154; //  18    mixed    0x00020000    Counter Enable Event Register 2
const uintptr_t PTM_ETMCNTRLDEVR1_REG_CPU0 = DEBUG_CPU_PTM0_ADDR + 0x00000160; //  17    rw       0x00000000    Counter Reload Event Register 1
const uintptr_t PTM_ETMCNTRLDEVR2_REG_CPU0 = DEBUG_CPU_PTM0_ADDR + 0x00000164; //  17    rw       0x00000000    Counter Reload Event Register 2
const uintptr_t PTM_ETMCNTVR1_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000170; //  16    rw       0x00000000    Counter Value Register 1
const uintptr_t PTM_ETMCNTVR2_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000174; //  16    rw       0x00000000    Counter Value Register 2
const uintptr_t PTM_ETMSQ12EVR_REG_CPU0    = DEBUG_CPU_PTM0_ADDR + 0x00000180; //  17    rw       0x00000000    Sequencer State Transition Event Register 12
const uintptr_t PTM_ETMSQ21EVR_REG_CPU0    = DEBUG_CPU_PTM0_ADDR + 0x00000184; //  17    rw       0x00000000    Sequencer State Transition Event Register 21
const uintptr_t PTM_ETMSQ23EVR_REG_CPU0    = DEBUG_CPU_PTM0_ADDR + 0x00000188; //  17    rw       0x00000000    Sequencer State Transition Event Register 23
const uintptr_t PTM_ETMSQ31EVR_REG_CPU0    = DEBUG_CPU_PTM0_ADDR + 0x0000018C; //  17    rw       0x00000000    Sequencer State Transition Event Register 31
const uintptr_t PTM_ETMSQ32EVR_REG_CPU0    = DEBUG_CPU_PTM0_ADDR + 0x00000190; //  17    rw       0x00000000    Sequencer State Transition Event Register 32
const uintptr_t PTM_ETMSQ13EVR_REG_CPU0    = DEBUG_CPU_PTM0_ADDR + 0x00000194; //  17    rw       0x00000000    Sequencer State Transition Event Register 13
const uintptr_t PTM_ETMSQR_REG_CPU0        = DEBUG_CPU_PTM0_ADDR + 0x0000019C; //   2    rw       0x00000000    Current Sequencer State Register
const uintptr_t PTM_ETMEXTOUTEVR1_REG_CPU0 = DEBUG_CPU_PTM0_ADDR + 0x000001A0; //  17    rw       0x00000000    External Output Event Register 1
const uintptr_t PTM_ETMEXTOUTEVR2_REG_CPU0 = DEBUG_CPU_PTM0_ADDR + 0x000001A4; //  17    rw       0x00000000    External Output Event Register 2
const uintptr_t PTM_ETMCIDCVR1_REG_CPU0    = DEBUG_CPU_PTM0_ADDR + 0x000001B0; //  32    rw       0x00000000    Context ID Comparator Value Register
const uintptr_t PTM_ETMCIDCMR_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x000001BC; //  32    rw       0x00000000    Context ID Comparator Mask Register
const uintptr_t PTM_ETMSYNCFR_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x000001E0; //  12    mixed    0x00000400    Synchronization Frequency Register
const uintptr_t PTM_ETMIDR_REG_CPU0        = DEBUG_CPU_PTM0_ADDR + 0x000001E4; //  32    ro       0x411CF301    ID Register
const uintptr_t PTM_ETMCCER_REG_CPU0       = DEBUG_CPU_PTM0_ADDR + 0x000001E8; //  26    ro       0x000008EA    Configuration Code Extension Register
const uintptr_t PTM_ETMEXTINSELR_REG_CPU0  = DEBUG_CPU_PTM0_ADDR + 0x000001EC; //  14    rw       0x00000000    Extended External Input Selection Register
const uintptr_t PTM_ETMAUXCR_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x000001FC; //   4    rw       0x00000000    Auxiliary Control Register
const uintptr_t PTM_ETMTRACEIDR_REG_CPU0   = DEBUG_CPU_PTM0_ADDR + 0x00000200; //   7    rw       0x00000000    CoreSight Trace ID Register
const uintptr_t PTM_OSLSR_REG_CPU0         = DEBUG_CPU_PTM0_ADDR + 0x00000304; //  32    ro       0x00000000    OS Lock Status Register
const uintptr_t PTM_ETMPDSR_REG_CPU0       = DEBUG_CPU_PTM0_ADDR + 0x00000314; //  32    ro       0x00000001    Device Powerdown Status Register
const uintptr_t PTM_ITMISCOUT_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000EDC; //  10    wo       0x00000000    Miscellaneous Outputs Register
const uintptr_t PTM_ITMISCIN_REG_CPU0      = DEBUG_CPU_PTM0_ADDR + 0x00000EE0; //   7    ro       x             Miscellaneous Inputs Register
const uintptr_t PTM_ITTRIGGER_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000EE8; //   1    wo       0x00000000    Trigger Register
const uintptr_t PTM_ITATBDATA0_REG_CPU0    = DEBUG_CPU_PTM0_ADDR + 0x00000EEC; //   5    wo       0x00000000    ATB Data 0 Register
const uintptr_t PTM_ITATBCTR2_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000EF0; //   2    ro       x             ATB Control 2 Register
const uintptr_t PTM_ITATBID_REG_CPU0       = DEBUG_CPU_PTM0_ADDR + 0x00000EF4; //   7    wo       0x00000000    ATB Identification Register
const uintptr_t PTM_ITATBCTR0_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000EF8; //  10    wo       0x00000000    ATB Control 0 Register
const uintptr_t PTM_ETMITCTRL_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000F00; //   1    rw       0x00000000    Integration Mode Control Register
const uintptr_t PTM_CTSR_REG_CPU0          = DEBUG_CPU_PTM0_ADDR + 0x00000FA0; //   8    rw       0x000000FF    Claim Tag Set Register
const uintptr_t PTM_CTCR_REG_CPU0          = DEBUG_CPU_PTM0_ADDR + 0x00000FA4; //   8    rw       0x00000000    Claim Tag Clear Register
const uintptr_t PTM_LAR_REG_CPU0           = DEBUG_CPU_PTM0_ADDR + 0x00000FB0; //  32    wo       0x00000000    Lock Access Register
const uintptr_t PTM_LSR_REG_CPU0           = DEBUG_CPU_PTM0_ADDR + 0x00000FB4; //   3    ro       0x00000003    Lock Status Register
const uintptr_t PTM_ASR_REG_CPU0           = DEBUG_CPU_PTM0_ADDR + 0x00000FB8; //   8    ro       x             Authentication Status Register
const uintptr_t PTM_DEVID_REG_CPU0         = DEBUG_CPU_PTM0_ADDR + 0x00000FC8; //  32    ro       0x00000000    Device ID
const uintptr_t PTM_DTIR_REG_CPU0          = DEBUG_CPU_PTM0_ADDR + 0x00000FCC; //   8    ro       0x00000013    Device Type Identifier Register
const uintptr_t PTM_PERIPHID4_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000FD0; //   8    ro       0x00000004    Peripheral ID4
const uintptr_t PTM_PERIPHID5_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000FD4; //   8    ro       0x00000000    Peripheral ID5
const uintptr_t PTM_PERIPHID6_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000FD8; //   8    ro       0x00000000    Peripheral ID6
const uintptr_t PTM_PERIPHID7_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000FDC; //   8    ro       0x00000000    Peripheral ID7
const uintptr_t PTM_PERIPHID0_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000FE0; //   8    ro       0x00000050    Peripheral ID0
const uintptr_t PTM_PERIPHID1_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000FE4; //   8    ro       0x000000B9    Peripheral ID1
const uintptr_t PTM_PERIPHID2_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000FE8; //   8    ro       0x0000001B    Peripheral ID2
const uintptr_t PTM_PERIPHID3_REG_CPU0     = DEBUG_CPU_PTM0_ADDR + 0x00000FEC; //   8    ro       0x00000000    Peripheral ID3
const uintptr_t PTM_COMPID0_REG_CPU0       = DEBUG_CPU_PTM0_ADDR + 0x00000FF0; //   8    ro       0x0000000D    Component ID0
const uintptr_t PTM_COMPID1_REG_CPU0       = DEBUG_CPU_PTM0_ADDR + 0x00000FF4; //   8    ro       0x00000090    Component ID1
const uintptr_t PTM_COMPID2_REG_CPU0       = DEBUG_CPU_PTM0_ADDR + 0x00000FF8; //   8    ro       0x00000005    Component ID2
const uintptr_t PTM_COMPID3_REG_CPU0       = DEBUG_CPU_PTM0_ADDR + 0x00000FFC; //   8    ro       0x000000B1    Component ID3
//------------------------------------------------------------------------------
//
//    PTM_CPU1 MMRs
//
//              Name                         Address                             Width   Type     Reset Value   Description
const uintptr_t PTM_ETMCR_REG_CPU1         = DEBUG_CPU_PTM1_ADDR + 0x00000000; //  30    rw       0x00000401    Main Control Register
const uintptr_t PTM_ETMCCR_REG_CPU1        = DEBUG_CPU_PTM1_ADDR + 0x00000004; //  32    ro       0x8D294004    Configuration Code Register
const uintptr_t PTM_ETMTRIGGER_REG_CPU1    = DEBUG_CPU_PTM1_ADDR + 0x00000008; //  17    rw       0x00000000    Trigger Event Register
const uintptr_t PTM_ETMSR_REG_CPU1         = DEBUG_CPU_PTM1_ADDR + 0x00000010; //   4    mixed    0x00000002    Status Register
const uintptr_t PTM_ETMSCR_REG_CPU1        = DEBUG_CPU_PTM1_ADDR + 0x00000014; //  15    ro       0x00000000    System Configuration Register
const uintptr_t PTM_ETMTSSCR_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000018; //  24    rw       0x00000000    TraceEnable Start
const uintptr_t PTM_ETMTECR1_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000024; //  26    rw       0x00000000    TraceEnable Control Register 1
const uintptr_t PTM_ETMACVR1_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000040; //  32    rw       0x00000000    Address Comparator Value Register 1
const uintptr_t PTM_ETMACVR2_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000044; //  32    rw       0x00000000    Address Comparator Value Register 2
const uintptr_t PTM_ETMACVR3_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000048; //  32    rw       0x00000000    Address Comparator Value Register 3
const uintptr_t PTM_ETMACVR4_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x0000004C; //  32    rw       0x00000000    Address Comparator Value Register 4
const uintptr_t PTM_ETMACVR5_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000050; //  32    rw       0x00000000    Address Comparator Value Register 5
const uintptr_t PTM_ETMACVR6_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000054; //  32    rw       0x00000000    Address Comparator Value Register 6
const uintptr_t PTM_ETMACVR7_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000058; //  32    rw       0x00000000    Address Comparator Value Register 7
const uintptr_t PTM_ETMACVR8_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x0000005C; //  32    rw       0x00000000    Address Comparator Value Register 8
const uintptr_t PTM_ETMACTR1_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000080; //  12    mixed    0x00000001    Address Comparator Access Type Register 1
const uintptr_t PTM_ETMACTR2_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000084; //  12    mixed    0x00000001    Address Comparator Access Type Register 2
const uintptr_t PTM_ETMACTR3_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000088; //  12    mixed    0x00000001    Address Comparator Access Type Register 3
const uintptr_t PTM_ETMACTR4_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x0000008C; //  12    mixed    0x00000001    Address Comparator Access Type Register 4
const uintptr_t PTM_ETMACTR5_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000090; //  12    mixed    0x00000001    Address Comparator Access Type Register 5
const uintptr_t PTM_ETMACTR6_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000094; //  12    mixed    0x00000001    Address Comparator Access Type Register 6
const uintptr_t PTM_ETMACTR7_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000098; //  12    mixed    0x00000001    Address Comparator Access Type Register 7
const uintptr_t PTM_ETMACTR8_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x0000009C; //  12    mixed    0x00000001    Address Comparator Access Type Register 8
const uintptr_t PTM_ETMCNTRLDVR1_REG_CPU1  = DEBUG_CPU_PTM1_ADDR + 0x00000140; //  16    rw       0x00000000    Counter Reload Value Register 1
const uintptr_t PTM_ETMCNTRLDVR2_REG_CPU1  = DEBUG_CPU_PTM1_ADDR + 0x00000144; //  16    rw       0x00000000    Counter Reload Value Register 2
const uintptr_t PTM_ETMCNTENR1_REG_CPU1    = DEBUG_CPU_PTM1_ADDR + 0x00000150; //  18    mixed    0x00020000    Counter Enable Event Register 1
const uintptr_t PTM_ETMCNTENR2_REG_CPU1    = DEBUG_CPU_PTM1_ADDR + 0x00000154; //  18    mixed    0x00020000    Counter Enable Event Register 2
const uintptr_t PTM_ETMCNTRLDEVR1_REG_CPU1 = DEBUG_CPU_PTM1_ADDR + 0x00000160; //  17    rw       0x00000000    Counter Reload Event Register 1
const uintptr_t PTM_ETMCNTRLDEVR2_REG_CPU1 = DEBUG_CPU_PTM1_ADDR + 0x00000164; //  17    rw       0x00000000    Counter Reload Event Register 2
const uintptr_t PTM_ETMCNTVR1_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000170; //  16    rw       0x00000000    Counter Value Register 1
const uintptr_t PTM_ETMCNTVR2_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000174; //  16    rw       0x00000000    Counter Value Register 2
const uintptr_t PTM_ETMSQ12EVR_REG_CPU1    = DEBUG_CPU_PTM1_ADDR + 0x00000180; //  17    rw       0x00000000    Sequencer State Transition Event Register 12
const uintptr_t PTM_ETMSQ21EVR_REG_CPU1    = DEBUG_CPU_PTM1_ADDR + 0x00000184; //  17    rw       0x00000000    Sequencer State Transition Event Register 21
const uintptr_t PTM_ETMSQ23EVR_REG_CPU1    = DEBUG_CPU_PTM1_ADDR + 0x00000188; //  17    rw       0x00000000    Sequencer State Transition Event Register 23
const uintptr_t PTM_ETMSQ31EVR_REG_CPU1    = DEBUG_CPU_PTM1_ADDR + 0x0000018C; //  17    rw       0x00000000    Sequencer State Transition Event Register 31
const uintptr_t PTM_ETMSQ32EVR_REG_CPU1    = DEBUG_CPU_PTM1_ADDR + 0x00000190; //  17    rw       0x00000000    Sequencer State Transition Event Register 32
const uintptr_t PTM_ETMSQ13EVR_REG_CPU1    = DEBUG_CPU_PTM1_ADDR + 0x00000194; //  17    rw       0x00000000    Sequencer State Transition Event Register 13
const uintptr_t PTM_ETMSQR_REG_CPU1        = DEBUG_CPU_PTM1_ADDR + 0x0000019C; //   2    rw       0x00000000    Current Sequencer State Register
const uintptr_t PTM_ETMEXTOUTEVR1_REG_CPU1 = DEBUG_CPU_PTM1_ADDR + 0x000001A0; //  17    rw       0x00000000    External Output Event Register 1
const uintptr_t PTM_ETMEXTOUTEVR2_REG_CPU1 = DEBUG_CPU_PTM1_ADDR + 0x000001A4; //  17    rw       0x00000000    External Output Event Register 2
const uintptr_t PTM_ETMCIDCVR1_REG_CPU1    = DEBUG_CPU_PTM1_ADDR + 0x000001B0; //  32    rw       0x00000000    Context ID Comparator Value Register
const uintptr_t PTM_ETMCIDCMR_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x000001BC; //  32    rw       0x00000000    Context ID Comparator Mask Register
const uintptr_t PTM_ETMSYNCFR_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x000001E0; //  12    mixed    0x00000400    Synchronization Frequency Register
const uintptr_t PTM_ETMIDR_REG_CPU1        = DEBUG_CPU_PTM1_ADDR + 0x000001E4; //  32    ro       0x411CF301    ID Register
const uintptr_t PTM_ETMCCER_REG_CPU1       = DEBUG_CPU_PTM1_ADDR + 0x000001E8; //  26    ro       0x000008EA    Configuration Code Extension Register
const uintptr_t PTM_ETMEXTINSELR_REG_CPU1  = DEBUG_CPU_PTM1_ADDR + 0x000001EC; //  14    rw       0x00000000    Extended External Input Selection Register
const uintptr_t PTM_ETMAUXCR_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x000001FC; //   4    rw       0x00000000    Auxiliary Control Register
const uintptr_t PTM_ETMTRACEIDR_REG_CPU1   = DEBUG_CPU_PTM1_ADDR + 0x00000200; //   7    rw       0x00000000    CoreSight Trace ID Register
const uintptr_t PTM_OSLSR_REG_CPU1         = DEBUG_CPU_PTM1_ADDR + 0x00000304; //  32    ro       0x00000000    OS Lock Status Register
const uintptr_t PTM_ETMPDSR_REG_CPU1       = DEBUG_CPU_PTM1_ADDR + 0x00000314; //  32    ro       0x00000001    Device Powerdown Status Register
const uintptr_t PTM_ITMISCOUT_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000EDC; //  10    wo       0x00000000    Miscellaneous Outputs Register
const uintptr_t PTM_ITMISCIN_REG_CPU1      = DEBUG_CPU_PTM1_ADDR + 0x00000EE0; //   7    ro       x             Miscellaneous Inputs Register
const uintptr_t PTM_ITTRIGGER_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000EE8; //   1    wo       0x00000000    Trigger Register
const uintptr_t PTM_ITATBDATA0_REG_CPU1    = DEBUG_CPU_PTM1_ADDR + 0x00000EEC; //   5    wo       0x00000000    ATB Data 0 Register
const uintptr_t PTM_ITATBCTR2_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000EF0; //   2    ro       x             ATB Control 2 Register
const uintptr_t PTM_ITATBID_REG_CPU1       = DEBUG_CPU_PTM1_ADDR + 0x00000EF4; //   7    wo       0x00000000    ATB Identification Register
const uintptr_t PTM_ITATBCTR0_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000EF8; //  10    wo       0x00000000    ATB Control 0 Register
const uintptr_t PTM_ETMITCTRL_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000F00; //   1    rw       0x00000000    Integration Mode Control Register
const uintptr_t PTM_CTSR_REG_CPU1          = DEBUG_CPU_PTM1_ADDR + 0x00000FA0; //   8    rw       0x000000FF    Claim Tag Set Register
const uintptr_t PTM_CTCR_REG_CPU1          = DEBUG_CPU_PTM1_ADDR + 0x00000FA4; //   8    rw       0x00000000    Claim Tag Clear Register
const uintptr_t PTM_LAR_REG_CPU1           = DEBUG_CPU_PTM1_ADDR + 0x00000FB0; //  32    wo       0x00000000    Lock Access Register
const uintptr_t PTM_LSR_REG_CPU1           = DEBUG_CPU_PTM1_ADDR + 0x00000FB4; //   3    ro       0x00000003    Lock Status Register
const uintptr_t PTM_ASR_REG_CPU1           = DEBUG_CPU_PTM1_ADDR + 0x00000FB8; //   8    ro       x             Authentication Status Register
const uintptr_t PTM_DEVID_REG_CPU1         = DEBUG_CPU_PTM1_ADDR + 0x00000FC8; //  32    ro       0x00000000    Device ID
const uintptr_t PTM_DTIR_REG_CPU1          = DEBUG_CPU_PTM1_ADDR + 0x00000FCC; //   8    ro       0x00000013    Device Type Identifier Register
const uintptr_t PTM_PERIPHID4_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000FD0; //   8    ro       0x00000004    Peripheral ID4
const uintptr_t PTM_PERIPHID5_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000FD4; //   8    ro       0x00000000    Peripheral ID5
const uintptr_t PTM_PERIPHID6_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000FD8; //   8    ro       0x00000000    Peripheral ID6
const uintptr_t PTM_PERIPHID7_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000FDC; //   8    ro       0x00000000    Peripheral ID7
const uintptr_t PTM_PERIPHID0_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000FE0; //   8    ro       0x00000050    Peripheral ID0
const uintptr_t PTM_PERIPHID1_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000FE4; //   8    ro       0x000000B9    Peripheral ID1
const uintptr_t PTM_PERIPHID2_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000FE8; //   8    ro       0x0000001B    Peripheral ID2
const uintptr_t PTM_PERIPHID3_REG_CPU1     = DEBUG_CPU_PTM1_ADDR + 0x00000FEC; //   8    ro       0x00000000    Peripheral ID3
const uintptr_t PTM_COMPID0_REG_CPU1       = DEBUG_CPU_PTM1_ADDR + 0x00000FF0; //   8    ro       0x0000000D    Component ID0
const uintptr_t PTM_COMPID1_REG_CPU1       = DEBUG_CPU_PTM1_ADDR + 0x00000FF4; //   8    ro       0x00000090    Component ID1
const uintptr_t PTM_COMPID2_REG_CPU1       = DEBUG_CPU_PTM1_ADDR + 0x00000FF8; //   8    ro       0x00000005    Component ID2
const uintptr_t PTM_COMPID3_REG_CPU1       = DEBUG_CPU_PTM1_ADDR + 0x00000FFC; //   8    ro       0x000000B1    Component ID3
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (PTM) ETMCR
//
// Name                    PTM_ETMCR_REG
// Relative Address        0x00000000
// Absolute Address        debug_cpu_ptm0: 0xF889C000
//                         debug_cpu_ptm1: 0xF889D000
// Width                   30 bits
// Access Type             rw
// Reset Value             0x00000401
// Description             Main Control Register
//
// Register PTM_ETMCR_REG Details
//
                                                                // Properties: Bit: 29, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCR_RETURN_STACK_EN_MASK = 0x20000000;    // Return stack enable
const uintptr_t PTM_ETMCR_RETURN_STACK_EN_BPOS = 29;            // 

                                                                // Properties: Bit: 28, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCR_TIMESTAMP_EN_MASK    = 0x10000000;    // Timestamp enable
const uintptr_t PTM_ETMCR_TIMESTAMP_EN_BPOS    = 28;            // 

                                                                // Properties: Bits: 27:25, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCR_PROC_SELECT_MASK     = 0x0E000000;    // Select for external multiplexor if PTM is shared
const uintptr_t PTM_ETMCR_PROC_SELECT_BPOS     = 25;            // between multiple processors.

// RESERVED                                                        Properties: Bits: 24:16, Type: rw, Reset Value: 0x0

                                                                // Properties: Bits: 15:14, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCR_CONTEX_IDSIZE_MASK   = 0x0000C000;    // Context ID Size
const uintptr_t PTM_ETMCR_CONTEX_IDSIZE_BPOS   = 14;            // Enumerated Value List:
                                                                // NONE=0.
                                                                // 8BIT=1.
                                                                // 16BIT=2.
                                                                // 32BIT=3.

// RESERVED                                                        Properties: Bit: 13, Type: rw, Reset Value: 0x0

                                                                // Properties: Bit: 12, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCR_CYCLE_ACCURATE_MASK  = 0x00001000;    // Enables cycle counting
const uintptr_t PTM_ETMCR_CYCLE_ACCURATE_BPOS  = 12;            // 

// RESERVED                                                        Properties: Bit: 11, Type: rw, Reset Value: 0x0

                                                                // Properties: Bit: 10, Type: rw, Reset Value: 0x1
const uintptr_t PTM_ETMCR_PROG_BIT_MASK        = 0x00000400;    // This bit must be set to b1 when the PTM is being
const uintptr_t PTM_ETMCR_PROG_BIT_BPOS        = 10;            // programmed.

                                                                // Properties: Bit: 9, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCR_DEBUG_REQ_CTRL_MASK  = 0x00000200;    // Debug Request Control
const uintptr_t PTM_ETMCR_DEBUG_REQ_CTRL_BPOS  = 9;             // When set to b1 and the trigger event occurs, the
                                                                // PTMDBGRQ output is asserted until
                                                                // PTMDBGACK is observed. This enables a
                                                                // debugger to force the processor into Debug state.

                                                                // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCR_BRANCH_OUTPUT_MASK   = 0x00000100;    // When this bit is set to b1, addresses are output for
const uintptr_t PTM_ETMCR_BRANCH_OUTPUT_BPOS   = 8;             // all executed branches, both direct and indirect.

// RESERVED                                                        Properties: Bits: 7:1, Type: rw, Reset Value: 0x0

                                                                // Properties: Bit: 0, Type: rw, Reset Value: 0x1
const uintptr_t PTM_ETMCR_POWER_DOWN_MASK      = 0x00000001;    // This bit enables external control of the PTM. This
const uintptr_t PTM_ETMCR_POWER_DOWN_BPOS      = 0;             // bit must be cleared by the trace software tools at
                                                                // the beginning of a debug session.
                                                                // When this bit is set to b0, both the PTM and the
                                                                // trace interface in the processor are enabled.
                                                                // To avoid corruption of trace data, this bit must not
                                                                // be set before the Programming Status bit in the
                                                                // PTM Status Register has been read as 1.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCCR
//
// Name                    PTM_ETMCCR_REG
// Relative Address        0x00000004
// Absolute Address        debug_cpu_ptm0: 0xF889C004
//                         debug_cpu_ptm1: 0xF889D004
// Width                   32 bits
// Access Type             ro
// Reset Value             0x8D294004
// Description             Configuration Code Register
//
// Register PTM_ETMCCR_REG Details
//
                                                                  // Properties: Bit: 31, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMCCR_IDREG_PRESENT_MASK    = 0x80000000;    // Indicates that the ID Register is present.
const uintptr_t PTM_ETMCCR_IDREG_PRESENT_BPOS    = 31;            // 

// RESERVED                                                          Properties: Bits: 30:28, Type: ro, Reset Value: 0x0

                                                                  // Properties: Bit: 27, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMCCR_SOFTWARE_ACCESS_MASK  = 0x08000000;    // Indicates that software access is supported.
const uintptr_t PTM_ETMCCR_SOFTWARE_ACCESS_BPOS  = 27;            // 

                                                                  // Properties: Bit: 26, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMCCR_TRACE_SSB_MASK        = 0x04000000;    // Indicates that the trace start/stop block is present.
const uintptr_t PTM_ETMCCR_TRACE_SSB_BPOS        = 26;            // 

                                                                  // Properties: Bits: 25:24, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMCCR_NUM_CNTXT_IDCOMP_MASK = 0x03000000;    // Specifies the number of Context ID comparators,
const uintptr_t PTM_ETMCCR_NUM_CNTXT_IDCOMP_BPOS = 24;            // one.

                                                                  // Properties: Bit: 23, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ETMCCR_FIFOFULLLOGIC_MASK    = 0x00800000;    // Indicates that it is not possible to stall the
const uintptr_t PTM_ETMCCR_FIFOFULLLOGIC_BPOS    = 23;            // processor to prevent FIFO overflow.

                                                                  // Properties: Bits: 22:20, Type: ro, Reset Value: 0x2
const uintptr_t PTM_ETMCCR_NUM_EXT_OUT_MASK      = 0x00700000;    // Specifies the number of external outputs, two.
const uintptr_t PTM_ETMCCR_NUM_EXT_OUT_BPOS      = 20;            // 

                                                                  // Properties: Bits: 19:17, Type: ro, Reset Value: 0x4
const uintptr_t PTM_ETMCCR_NUM_EXT_IN_MASK       = 0x000E0000;    // Specifies the number of external inputs, four.
const uintptr_t PTM_ETMCCR_NUM_EXT_IN_BPOS       = 17;            // 

                                                                  // Properties: Bit: 16, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMCCR_SEQUENCER_MASK        = 0x00010000;    // Indicates that the sequencer is present.
const uintptr_t PTM_ETMCCR_SEQUENCER_BPOS        = 16;            // 

                                                                  // Properties: Bits: 15:13, Type: ro, Reset Value: 0x2
const uintptr_t PTM_ETMCCR_NUM_COUNTERS_MASK     = 0x0000E000;    // Specifies the number of counters, two.
const uintptr_t PTM_ETMCCR_NUM_COUNTERS_BPOS     = 13;            // 

// RESERVED                                                          Properties: Bits: 12:4, Type: ro, Reset Value: 0x0

                                                                  // Properties: Bits: 3:0, Type: ro, Reset Value: 0x4
const uintptr_t PTM_ETMCCR_NUM_ADDR_COMP_MASK    = 0x0000000F;    // Specifies the number of address comparator pairs,
const uintptr_t PTM_ETMCCR_NUM_ADDR_COMP_BPOS    = 0;             // four.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMTRIGGER
//
// Name                    PTM_ETMTRIGGER_REG
// Relative Address        0x00000008
// Absolute Address        debug_cpu_ptm0: 0xF889C008
//                         debug_cpu_ptm1: 0xF889D008
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Trigger Event Register
//
// Register PTM_ETMTRIGGER_REG Details
//
                                                     // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_TRIG_EVENT_MASK = 0x0001FFFF;    // Trigger event. Subdivided as:
const uintptr_t PTM_TRIG_EVENT_BPOS = 0;             // Function, bits [16:14]
                                                     // Specifies the function that combines the two
                                                     // resources that define the event.
                                                     // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                     // Specify the two resources that are combined by
                                                     // the logical operation specified by the Function
                                                     // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMSR
//
// Name                    PTM_ETMSR_REG
// Relative Address        0x00000010
// Absolute Address        debug_cpu_ptm0: 0xF889C010
//                         debug_cpu_ptm1: 0xF889D010
// Width                   4 bits
// Access Type             mixed
// Reset Value             0x00000002
// Description             Status Register
//
// Register PTM_ETMSR_REG Details
//
                                                          // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMSR_TRIG_FLAG_MASK = 0x00000008;    // Trigger bit. Set when the trigger occurs and
const uintptr_t PTM_ETMSR_TRIG_FLAG_BPOS = 3;             // prevents the trigger from being output until the
                                                          // PTM is next programmed.

                                                          // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMSR_TSSRSTAT_MASK  = 0x00000004;    // Holds the current status of the trace start/stop
const uintptr_t PTM_ETMSR_TSSRSTAT_BPOS  = 2;             // resource. If set to 1, indicates that a trace start
                                                          // address has been matched, without a
                                                          // corresponding trace stop address match.

                                                          // Properties: Bit: 1, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMSR_PROG_BIT_MASK  = 0x00000002;    // Effective state of the Programming bit. You must
const uintptr_t PTM_ETMSR_PROG_BIT_BPOS  = 1;             // wait for this bit to go to b1 before starting to
                                                          // program the PTM.

                                                          // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ETMSR_OVERFLOW_MASK  = 0x00000001;    // If set to 1, there is an overflow that has not yet
const uintptr_t PTM_ETMSR_OVERFLOW_BPOS  = 0;             // been traced.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMSCR
//
// Name                    PTM_ETMSCR_REG
// Relative Address        0x00000014
// Absolute Address        debug_cpu_ptm0: 0xF889C014
//                         debug_cpu_ptm1: 0xF889D014
// Width                   15 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             System Configuration Register
//
// Register PTM_ETMSCR_REG Details
//
                                                           // Properties: Bits: 14:12, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ETMSCR_NUM_PROCS_MASK = 0x00007000;    // Number of supported processors minus 1.
const uintptr_t PTM_ETMSCR_NUM_PROCS_BPOS = 12;            // 

// RESERVED                                                   Properties: Bits: 11:9, Type: ro, Reset Value: 0x0

                                                           // Properties: Bit: 8, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ETMSCR_FIFOFULL_MASK  = 0x00000100;    // FIFOFULL not supported
const uintptr_t PTM_ETMSCR_FIFOFULL_BPOS  = 8;             // 

// RESERVED                                                   Properties: Bits: 7:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (PTM) ETMTSSCR
//
// Name                    PTM_ETMTSSCR_REG
// Relative Address        0x00000018
// Absolute Address        debug_cpu_ptm0: 0xF889C018
//                         debug_cpu_ptm1: 0xF889D018
// Width                   24 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             TraceEnable Start/Stop Control Register
//
// Register PTM_ETMTSSCR_REG Details
//
                                                         // Properties: Bits: 23:16, Type: rw, Reset Value: 0x0
const uintptr_t PTM_STOP_ADDR_SEL_MASK  = 0x00FF0000;    // When a bit is set to 1, it selects a single address
const uintptr_t PTM_STOP_ADDR_SEL_BPOS  = 16;            // comparator (8-1) as a stop address for the
                                                         // TraceEnable
                                                         // Start/Stop block. For example, if you set bit [16] to
                                                         // 1 it selects single address comparator 1 as a stop
                                                         // address.

// RESERVED                                                 Properties: Bits: 15:8, Type: rw, Reset Value: 0x0

                                                         // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_START_ADDR_SEL_MASK = 0x000000FF;    // When a bit is set to 1, it selects a single address
const uintptr_t PTM_START_ADDR_SEL_BPOS = 0;             // comparator (8-1) as a start address for the
                                                         // TraceEnable
                                                         // Start/Stop block. For example, if you set bit [0] to
                                                         // 1 it selects single address comparator 1 as a start
                                                         // address.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMTECR1
//
// Name                    PTM_ETMTECR1_REG
// Relative Address        0x00000024
// Absolute Address        debug_cpu_ptm0: 0xF889C024
//                         debug_cpu_ptm1: 0xF889D024
// Width                   26 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             TraceEnable Control Register 1
//
// Register PTM_ETMTECR1_REG Details
//
                                                        // Properties: Bit: 25, Type: rw, Reset Value: 0x0
const uintptr_t PTM_TRACE_SSEN_MASK    = 0x02000000;    // Trace start/stop control enable. The possible
const uintptr_t PTM_TRACE_SSEN_BPOS    = 25;            // values of this bit are:
                                                        // 0 Tracing is unaffected by the trace start/stop
                                                        // logic.
                                                        // 1 Tracing is controlled by the trace on and off
                                                        // addresses configured for the trace start/stop
                                                        // logic.
                                                        // The trace start/stop resource is not affected by the
                                                        // value of this bit.

                                                        // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t PTM_EXC_INC_FLAG_MASK  = 0x01000000;    // Exclude/include flag. The possible values of this
const uintptr_t PTM_EXC_INC_FLAG_BPOS  = 24;            // bit are:
                                                        // 0 Include. The specified address range
                                                        // comparators indicate the regions where tracing
                                                        // can occur.
                                                        // No tracing occurs outside this region.
                                                        // 1 Exclude. The specified address range
                                                        // comparators indicate regions to be excluded from
                                                        // the
                                                        // trace. When outside an exclude region, tracing
                                                        // can occur.

// RESERVED                                                Properties: Bits: 23:4, Type: rw, Reset Value: 0x0

                                                        // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ADDR_COMP_SEL_MASK = 0x0000000F;    // When a bit is set to 1, it selects an address range
const uintptr_t PTM_ADDR_COMP_SEL_BPOS = 0;             // comparator, 4-1, for include/exclude control. For
                                                        // example, bit [0] set to 1 selects address range
                                                        // comparator 1.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACVR1
//
// Name                    PTM_ETMACVR1_REG
// Relative Address        0x00000040
// Absolute Address        debug_cpu_ptm0: 0xF889C040
//                         debug_cpu_ptm1: 0xF889D040
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Address Comparator Value Register 1
//
// Register PTM_ETMACVR1_REG Details
//
                                                           // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACVR1_ADDRESS_MASK = 0xFFFFFFFF;    // Address for comparison
const uintptr_t PTM_ETMACVR1_ADDRESS_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACVR2
//
// Name                    PTM_ETMACVR2_REG
// Relative Address        0x00000044
// Absolute Address        debug_cpu_ptm0: 0xF889C044
//                         debug_cpu_ptm1: 0xF889D044
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Address Comparator Value Register 2
//
// Register PTM_ETMACVR2_REG Details
//
                                                           // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACVR2_ADDRESS_MASK = 0xFFFFFFFF;    // Address for comparison
const uintptr_t PTM_ETMACVR2_ADDRESS_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACVR3
//
// Name                    PTM_ETMACVR3_REG
// Relative Address        0x00000048
// Absolute Address        debug_cpu_ptm0: 0xF889C048
//                         debug_cpu_ptm1: 0xF889D048
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Address Comparator Value Register 3
//
// Register PTM_ETMACVR3_REG Details
//
                                                           // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACVR3_ADDRESS_MASK = 0xFFFFFFFF;    // Address for comparison
const uintptr_t PTM_ETMACVR3_ADDRESS_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACVR4
//
// Name                    PTM_ETMACVR4_REG
// Relative Address        0x0000004C
// Absolute Address        debug_cpu_ptm0: 0xF889C04C
//                         debug_cpu_ptm1: 0xF889D04C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Address Comparator Value Register 4
//
// Register PTM_ETMACVR4_REG Details
//
                                                           // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACVR4_ADDRESS_MASK = 0xFFFFFFFF;    // Address for comparison
const uintptr_t PTM_ETMACVR4_ADDRESS_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACVR5
//
// Name                    PTM_ETMACVR5_REG
// Relative Address        0x00000050
// Absolute Address        debug_cpu_ptm0: 0xF889C050
//                         debug_cpu_ptm1: 0xF889D050
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Address Comparator Value Register 5
//
// Register PTM_ETMACVR5_REG Details
//
                                                           // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACVR5_ADDRESS_MASK = 0xFFFFFFFF;    // Address for comparison
const uintptr_t PTM_ETMACVR5_ADDRESS_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACVR6
//
// Name                    PTM_ETMACVR6_REG
// Relative Address        0x00000054
// Absolute Address        debug_cpu_ptm0: 0xF889C054
//                         debug_cpu_ptm1: 0xF889D054
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Address Comparator Value Register 6
//
// Register PTM_ETMACVR6_REG Details
//
                                                           // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACVR6_ADDRESS_MASK = 0xFFFFFFFF;    // Address for comparison
const uintptr_t PTM_ETMACVR6_ADDRESS_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACVR7
//
// Name                    PTM_ETMACVR7_REG
// Relative Address        0x00000058
// Absolute Address        debug_cpu_ptm0: 0xF889C058
//                         debug_cpu_ptm1: 0xF889D058
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Address Comparator Value Register 7
//
// Register PTM_ETMACVR7_REG Details
//
                                                           // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACVR7_ADDRESS_MASK = 0xFFFFFFFF;    // Address for comparison
const uintptr_t PTM_ETMACVR7_ADDRESS_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACVR8
//
// Name                    PTM_ETMACVR8_REG
// Relative Address        0x0000005C
// Absolute Address        debug_cpu_ptm0: 0xF889C05C
//                         debug_cpu_ptm1: 0xF889D05C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Address Comparator Value Register 8
//
// Register PTM_ETMACVR8_REG Details
//
                                                           // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACVR8_ADDRESS_MASK = 0xFFFFFFFF;    // Address for comparison
const uintptr_t PTM_ETMACVR8_ADDRESS_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACTR1
//
// Name                    PTM_ETMACTR1_REG
// Relative Address        0x00000080
// Absolute Address        debug_cpu_ptm0: 0xF889C080
//                         debug_cpu_ptm1: 0xF889D080
// Width                   12 bits
// Access Type             mixed
// Reset Value             0x00000001
// Description             Address Comparator Access Type Register 1
//
// Register PTM_ETMACTR1_REG Details
//
                                                                       // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR1_SEC_LEVEL_CTRL_MASK      = 0x00000C00;    // Security level control
const uintptr_t PTM_ETMACTR1_SEC_LEVEL_CTRL_BPOS      = 10;            // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // NONSEC=1.
                                                                       // SECURE=2.

                                                                       // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR1_CONTEXT_IDCOMP_CTRL_MASK = 0x00000300;    // Context ID comparator control.
const uintptr_t PTM_ETMACTR1_CONTEXT_IDCOMP_CTRL_BPOS = 8;             // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // MATCH1=1.
                                                                       // MATCH2=2.
                                                                       // MATCH3=3.

// RESERVED                                                               Properties: Bits: 7:3, Type: rw, Reset Value: 0x0

                                                                       // Properties: Bits: 2:0, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMACTR1_ACCESS_TYPE_MASK         = 0x00000007;    // Access type. Returns the value: Instruction
const uintptr_t PTM_ETMACTR1_ACCESS_TYPE_BPOS         = 0;             // execute.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACTR2
//
// Name                    PTM_ETMACTR2_REG
// Relative Address        0x00000084
// Absolute Address        debug_cpu_ptm0: 0xF889C084
//                         debug_cpu_ptm1: 0xF889D084
// Width                   12 bits
// Access Type             mixed
// Reset Value             0x00000001
// Description             Address Comparator Access Type Register 2
//
// Register PTM_ETMACTR2_REG Details
//
                                                                       // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR2_SEC_LEVEL_CTRL_MASK      = 0x00000C00;    // Security level control
const uintptr_t PTM_ETMACTR2_SEC_LEVEL_CTRL_BPOS      = 10;            // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // NONSEC=1.
                                                                       // SECURE=2.

                                                                       // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR2_CONTEXT_IDCOMP_CTRL_MASK = 0x00000300;    // Context ID comparator control.
const uintptr_t PTM_ETMACTR2_CONTEXT_IDCOMP_CTRL_BPOS = 8;             // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // MATCH1=1.
                                                                       // MATCH2=2.
                                                                       // MATCH3=3.

// RESERVED                                                               Properties: Bits: 7:3, Type: rw, Reset Value: 0x0

                                                                       // Properties: Bits: 2:0, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMACTR2_ACCESS_TYPE_MASK         = 0x00000007;    // Access type. Returns the value: Instruction
const uintptr_t PTM_ETMACTR2_ACCESS_TYPE_BPOS         = 0;             // execute.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACTR3
//
// Name                    PTM_ETMACTR3_REG
// Relative Address        0x00000088
// Absolute Address        debug_cpu_ptm0: 0xF889C088
//                         debug_cpu_ptm1: 0xF889D088
// Width                   12 bits
// Access Type             mixed
// Reset Value             0x00000001
// Description             Address Comparator Access Type Register 3
//
// Register PTM_ETMACTR3_REG Details
//
                                                                       // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR3_SEC_LEVEL_CTRL_MASK      = 0x00000C00;    // Security level control
const uintptr_t PTM_ETMACTR3_SEC_LEVEL_CTRL_BPOS      = 10;            // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // NONSEC=1.
                                                                       // SECURE=2.

                                                                       // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR3_CONTEXT_IDCOMP_CTRL_MASK = 0x00000300;    // Context ID comparator control.
const uintptr_t PTM_ETMACTR3_CONTEXT_IDCOMP_CTRL_BPOS = 8;             // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // MATCH1=1.
                                                                       // MATCH2=2.
                                                                       // MATCH3=3.

// RESERVED                                                               Properties: Bits: 7:3, Type: rw, Reset Value: 0x0

                                                                       // Properties: Bits: 2:0, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMACTR3_ACCESS_TYPE_MASK         = 0x00000007;    // Access type. Returns the value: Instruction
const uintptr_t PTM_ETMACTR3_ACCESS_TYPE_BPOS         = 0;             // execute.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACTR4
//
// Name                    PTM_ETMACTR4_REG
// Relative Address        0x0000008C
// Absolute Address        debug_cpu_ptm0: 0xF889C08C
//                         debug_cpu_ptm1: 0xF889D08C
// Width                   12 bits
// Access Type             mixed
// Reset Value             0x00000001
// Description             Address Comparator Access Type Register 4
//
// Register PTM_ETMACTR4_REG Details
//
                                                                       // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR4_SEC_LEVEL_CTRL_MASK      = 0x00000C00;    // Security level control
const uintptr_t PTM_ETMACTR4_SEC_LEVEL_CTRL_BPOS      = 10;            // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // NONSEC=1.
                                                                       // SECURE=2.

                                                                       // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR4_CONTEXT_IDCOMP_CTRL_MASK = 0x00000300;    // Context ID comparator control.
const uintptr_t PTM_ETMACTR4_CONTEXT_IDCOMP_CTRL_BPOS = 8;             // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // MATCH1=1.
                                                                       // MATCH2=2.
                                                                       // MATCH3=3.

// RESERVED                                                               Properties: Bits: 7:3, Type: rw, Reset Value: 0x0

                                                                       // Properties: Bits: 2:0, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMACTR4_ACCESS_TYPE_MASK         = 0x00000007;    // Access type. Returns the value: Instruction
const uintptr_t PTM_ETMACTR4_ACCESS_TYPE_BPOS         = 0;             // execute.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACTR5
//
// Name                    PTM_ETMACTR5_REG
// Relative Address        0x00000090
// Absolute Address        debug_cpu_ptm0: 0xF889C090
//                         debug_cpu_ptm1: 0xF889D090
// Width                   12 bits
// Access Type             mixed
// Reset Value             0x00000001
// Description             Address Comparator Access Type Register 5
//
// Register PTM_ETMACTR5_REG Details
//
                                                                       // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR5_SEC_LEVEL_CTRL_MASK      = 0x00000C00;    // Security level control
const uintptr_t PTM_ETMACTR5_SEC_LEVEL_CTRL_BPOS      = 10;            // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // NONSEC=1.
                                                                       // SECURE=2.

                                                                       // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR5_CONTEXT_IDCOMP_CTRL_MASK = 0x00000300;    // Context ID comparator control.
const uintptr_t PTM_ETMACTR5_CONTEXT_IDCOMP_CTRL_BPOS = 8;             // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // MATCH1=1.
                                                                       // MATCH2=2.
                                                                       // MATCH3=3.

// RESERVED                                                               Properties: Bits: 7:3, Type: rw, Reset Value: 0x0

                                                                       // Properties: Bits: 2:0, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMACTR5_ACCESS_TYPE_MASK         = 0x00000007;    // Access type. Returns the value: Instruction
const uintptr_t PTM_ETMACTR5_ACCESS_TYPE_BPOS         = 0;             // execute.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACTR6
//
// Name                    PTM_ETMACTR6_REG
// Relative Address        0x00000094
// Absolute Address        debug_cpu_ptm0: 0xF889C094
//                         debug_cpu_ptm1: 0xF889D094
// Width                   12 bits
// Access Type             mixed
// Reset Value             0x00000001
// Description             Address Comparator Access Type Register 6
//
// Register PTM_ETMACTR6_REG Details
//
                                                                       // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR6_SEC_LEVEL_CTRL_MASK      = 0x00000C00;    // Security level control
const uintptr_t PTM_ETMACTR6_SEC_LEVEL_CTRL_BPOS      = 10;            // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // NONSEC=1.
                                                                       // SECURE=2.

                                                                       // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR6_CONTEXT_IDCOMP_CTRL_MASK = 0x00000300;    // Context ID comparator control.
const uintptr_t PTM_ETMACTR6_CONTEXT_IDCOMP_CTRL_BPOS = 8;             // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // MATCH1=1.
                                                                       // MATCH2=2.
                                                                       // MATCH3=3.

// RESERVED                                                               Properties: Bits: 7:3, Type: rw, Reset Value: 0x0

                                                                       // Properties: Bits: 2:0, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMACTR6_ACCESS_TYPE_MASK         = 0x00000007;    // Access type. Returns the value: Instruction
const uintptr_t PTM_ETMACTR6_ACCESS_TYPE_BPOS         = 0;             // execute.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACTR7
//
// Name                    PTM_ETMACTR7_REG
// Relative Address        0x00000098
// Absolute Address        debug_cpu_ptm0: 0xF889C098
//                         debug_cpu_ptm1: 0xF889D098
// Width                   12 bits
// Access Type             mixed
// Reset Value             0x00000001
// Description             Address Comparator Access Type Register 7
//
// Register PTM_ETMACTR7_REG Details
//
                                                                       // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR7_SEC_LEVEL_CTRL_MASK      = 0x00000C00;    // Security level control
const uintptr_t PTM_ETMACTR7_SEC_LEVEL_CTRL_BPOS      = 10;            // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // NONSEC=1.
                                                                       // SECURE=2.

                                                                       // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR7_CONTEXT_IDCOMP_CTRL_MASK = 0x00000300;    // Context ID comparator control.
const uintptr_t PTM_ETMACTR7_CONTEXT_IDCOMP_CTRL_BPOS = 8;             // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // MATCH1=1.
                                                                       // MATCH2=2.
                                                                       // MATCH3=3.

// RESERVED                                                               Properties: Bits: 7:3, Type: rw, Reset Value: 0x0

                                                                       // Properties: Bits: 2:0, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMACTR7_ACCESS_TYPE_MASK         = 0x00000007;    // Access type. Returns the value: Instruction
const uintptr_t PTM_ETMACTR7_ACCESS_TYPE_BPOS         = 0;             // execute.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMACTR8
//
// Name                    PTM_ETMACTR8_REG
// Relative Address        0x0000009C
// Absolute Address        debug_cpu_ptm0: 0xF889C09C
//                         debug_cpu_ptm1: 0xF889D09C
// Width                   12 bits
// Access Type             mixed
// Reset Value             0x00000001
// Description             Address Comparator Access Type Register 8
//
// Register PTM_ETMACTR8_REG Details
//
                                                                       // Properties: Bits: 11:10, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR8_SEC_LEVEL_CTRL_MASK      = 0x00000C00;    // Security level control
const uintptr_t PTM_ETMACTR8_SEC_LEVEL_CTRL_BPOS      = 10;            // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // NONSEC=1.
                                                                       // SECURE=2.

                                                                       // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMACTR8_CONTEXT_IDCOMP_CTRL_MASK = 0x00000300;    // Context ID comparator control.
const uintptr_t PTM_ETMACTR8_CONTEXT_IDCOMP_CTRL_BPOS = 8;             // Enumerated Value List:
                                                                       // IGNORE=0.
                                                                       // MATCH1=1.
                                                                       // MATCH2=2.
                                                                       // MATCH3=3.

// RESERVED                                                               Properties: Bits: 7:3, Type: rw, Reset Value: 0x0

                                                                       // Properties: Bits: 2:0, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMACTR8_ACCESS_TYPE_MASK         = 0x00000007;    // Access type. Returns the value: Instruction
const uintptr_t PTM_ETMACTR8_ACCESS_TYPE_BPOS         = 0;             // execute.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCNTRLDVR1
//
// Name                    PTM_ETMCNTRLDVR1_REG
// Relative Address        0x00000140
// Absolute Address        debug_cpu_ptm0: 0xF889C140
//                         debug_cpu_ptm1: 0xF889D140
// Width                   16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Counter Reload Value Register 1
//
// Register PTM_ETMCNTRLDVR1_REG Details
//
                                                                  // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCNTRLDVR1_INIT_VALUE_MASK = 0x0000FFFF;    // Counter initial value
const uintptr_t PTM_ETMCNTRLDVR1_INIT_VALUE_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCNTRLDVR2
//
// Name                    PTM_ETMCNTRLDVR2_REG
// Relative Address        0x00000144
// Absolute Address        debug_cpu_ptm0: 0xF889C144
//                         debug_cpu_ptm1: 0xF889D144
// Width                   16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Counter Reload Value Register 2
//
// Register PTM_ETMCNTRLDVR2_REG Details
//
                                                                  // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCNTRLDVR2_INIT_VALUE_MASK = 0x0000FFFF;    // Counter initial value
const uintptr_t PTM_ETMCNTRLDVR2_INIT_VALUE_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCNTENR1
//
// Name                    PTM_ETMCNTENR1_REG
// Relative Address        0x00000150
// Absolute Address        debug_cpu_ptm0: 0xF889C150
//                         debug_cpu_ptm1: 0xF889D150
// Width                   18 bits
// Access Type             mixed
// Reset Value             0x00020000
// Description             Counter Enable Event Register 1
//
// Register PTM_ETMCNTENR1_REG Details
//
                                                                   // Properties: Bit: 17, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMCNTENR1_RESERVED_1_MASK    = 0x00020000;    // Reserved, RAO/WI
const uintptr_t PTM_ETMCNTENR1_RESERVED_1_BPOS    = 17;            // 

                                                                   // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCNTENR1_EXT_OUT_EVENT_MASK = 0x0001FFFF;    // Count enable event. Subdivided as:
const uintptr_t PTM_ETMCNTENR1_EXT_OUT_EVENT_BPOS = 0;             // Function, bits [16:14]
                                                                   // Specifies the function that combines the two
                                                                   // resources that define the event.
                                                                   // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                                   // Specify the two resources that are combined by
                                                                   // the logical operation specified by the Function
                                                                   // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCNTENR2
//
// Name                    PTM_ETMCNTENR2_REG
// Relative Address        0x00000154
// Absolute Address        debug_cpu_ptm0: 0xF889C154
//                         debug_cpu_ptm1: 0xF889D154
// Width                   18 bits
// Access Type             mixed
// Reset Value             0x00020000
// Description             Counter Enable Event Register 2
//
// Register PTM_ETMCNTENR2_REG Details
//
                                                                   // Properties: Bit: 17, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMCNTENR2_RESERVED_1_MASK    = 0x00020000;    // Reserved, RAO/WI
const uintptr_t PTM_ETMCNTENR2_RESERVED_1_BPOS    = 17;            // 

                                                                   // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCNTENR2_EXT_OUT_EVENT_MASK = 0x0001FFFF;    // Count enable event. Subdivided as:
const uintptr_t PTM_ETMCNTENR2_EXT_OUT_EVENT_BPOS = 0;             // Function, bits [16:14]
                                                                   // Specifies the function that combines the two
                                                                   // resources that define the event.
                                                                   // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                                   // Specify the two resources that are combined by
                                                                   // the logical operation specified by the Function
                                                                   // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCNTRLDEVR1
//
// Name                    PTM_ETMCNTRLDEVR1_REG
// Relative Address        0x00000160
// Absolute Address        debug_cpu_ptm0: 0xF889C160
//                         debug_cpu_ptm1: 0xF889D160
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Counter Reload Event Register 1
//
// Register PTM_ETMCNTRLDEVR1_REG Details
//
                                                                         // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCNTRLDEVR1_CNT_RELOAD_EVENT_MASK = 0x0001FFFF;    // Count reload event. Subdivided as:
const uintptr_t PTM_ETMCNTRLDEVR1_CNT_RELOAD_EVENT_BPOS = 0;             // Function, bits [16:14]
                                                                         // Specifies the function that combines the two
                                                                         // resources that define the event.
                                                                         // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                                         // Specify the two resources that are combined by
                                                                         // the logical operation specified by the Function
                                                                         // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCNTRLDEVR2
//
// Name                    PTM_ETMCNTRLDEVR2_REG
// Relative Address        0x00000164
// Absolute Address        debug_cpu_ptm0: 0xF889C164
//                         debug_cpu_ptm1: 0xF889D164
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Counter Reload Event Register 2
//
// Register PTM_ETMCNTRLDEVR2_REG Details
//
                                                                         // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCNTRLDEVR2_CNT_RELOAD_EVENT_MASK = 0x0001FFFF;    // Count reload event. Subdivided as:
const uintptr_t PTM_ETMCNTRLDEVR2_CNT_RELOAD_EVENT_BPOS = 0;             // unction, bits [16:14]
                                                                         // pecifies the function that combines the two
                                                                         // esources that define the event.
                                                                         // esource B, bits [13:7] and Resource A, bits [6:0]
                                                                         // pecify the two resources that are combined by
                                                                         // he logical operation specified by the Function
                                                                         // ield.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCNTVR1
//
// Name                    PTM_ETMCNTVR1_REG
// Relative Address        0x00000170
// Absolute Address        debug_cpu_ptm0: 0xF889C170
//                         debug_cpu_ptm1: 0xF889D170
// Width                   16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Counter Value Register 1
//
// Register PTM_ETMCNTVR1_REG Details
//
                                                               // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCNTVR1_CURR_COUNT_MASK = 0x0000FFFF;    // Current counter value.
const uintptr_t PTM_ETMCNTVR1_CURR_COUNT_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCNTVR2
//
// Name                    PTM_ETMCNTVR2_REG
// Relative Address        0x00000174
// Absolute Address        debug_cpu_ptm0: 0xF889C174
//                         debug_cpu_ptm1: 0xF889D174
// Width                   16 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Counter Value Register 2
//
// Register PTM_ETMCNTVR2_REG Details
//
                                                               // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCNTVR2_CURR_COUNT_MASK = 0x0000FFFF;    // Current counter value.
const uintptr_t PTM_ETMCNTVR2_CURR_COUNT_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMSQ12EVR
//
// Name                    PTM_ETMSQ12EVR_REG
// Relative Address        0x00000180
// Absolute Address        debug_cpu_ptm0: 0xF889C180
//                         debug_cpu_ptm1: 0xF889D180
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Sequencer State Transition Event Register 12
//
// Register PTM_ETMSQ12EVR_REG Details
//
                                                                 // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMSQ12EVR_TRANS_EVENT_MASK = 0x0001FFFF;    // A Sequencer State Transition Event Register,
const uintptr_t PTM_ETMSQ12EVR_TRANS_EVENT_BPOS = 0;             // ETMSQmnEVR, defines the evnet that causes the
                                                                 // sequencer state transition from state m to state n.
                                                                 // The format is subdivided as:
                                                                 // Function, bits [16:14]
                                                                 // Specifies the function that combines the two
                                                                 // resources that define the event.
                                                                 // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                                 // Specify the two resources that are combined by
                                                                 // the logical operation specified by the Function
                                                                 // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMSQ21EVR
//
// Name                    PTM_ETMSQ21EVR_REG
// Relative Address        0x00000184
// Absolute Address        debug_cpu_ptm0: 0xF889C184
//                         debug_cpu_ptm1: 0xF889D184
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Sequencer State Transition Event Register 21
//
// Register PTM_ETMSQ21EVR_REG Details
//
                                                                 // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMSQ21EVR_TRANS_EVENT_MASK = 0x0001FFFF;    // A Sequencer State Transition Event Register,
const uintptr_t PTM_ETMSQ21EVR_TRANS_EVENT_BPOS = 0;             // ETMSQmnEVR, defines the evnet that causes the
                                                                 // sequencer state transition from state m to state n.
                                                                 // The format is subdivided as:
                                                                 // Function, bits [16:14]
                                                                 // Specifies the function that combines the two
                                                                 // resources that define the event.
                                                                 // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                                 // Specify the two resources that are combined by
                                                                 // the logical operation specified by the Function
                                                                 // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMSQ23EVR
//
// Name                    PTM_ETMSQ23EVR_REG
// Relative Address        0x00000188
// Absolute Address        debug_cpu_ptm0: 0xF889C188
//                         debug_cpu_ptm1: 0xF889D188
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Sequencer State Transition Event Register 23
//
// Register PTM_ETMSQ23EVR_REG Details
//
                                                                 // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMSQ23EVR_TRANS_EVENT_MASK = 0x0001FFFF;    // A Sequencer State Transition Event Register,
const uintptr_t PTM_ETMSQ23EVR_TRANS_EVENT_BPOS = 0;             // ETMSQmnEVR, defines the evnet that causes the
                                                                 // sequencer state transition from state m to state n.
                                                                 // The format is subdivided as:
                                                                 // Function, bits [16:14]
                                                                 // Specifies the function that combines the two
                                                                 // resources that define the event.
                                                                 // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                                 // Specify the two resources that are combined by
                                                                 // the logical operation specified by the Function
                                                                 // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMSQ31EVR
//
// Name                    PTM_ETMSQ31EVR_REG
// Relative Address        0x0000018C
// Absolute Address        debug_cpu_ptm0: 0xF889C18C
//                         debug_cpu_ptm1: 0xF889D18C
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Sequencer State Transition Event Register 31
//
// Register PTM_ETMSQ31EVR_REG Details
//
                                                                 // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMSQ31EVR_TRANS_EVENT_MASK = 0x0001FFFF;    // A Sequencer State Transition Event Register,
const uintptr_t PTM_ETMSQ31EVR_TRANS_EVENT_BPOS = 0;             // ETMSQmnEVR, defines the evnet that causes the
                                                                 // sequencer state transition from state m to state n.
                                                                 // The format is subdivided as:
                                                                 // Function, bits [16:14]
                                                                 // Specifies the function that combines the two
                                                                 // resources that define the event.
                                                                 // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                                 // Specify the two resources that are combined by
                                                                 // the logical operation specified by the Function
                                                                 // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMSQ32EVR
//
// Name                    PTM_ETMSQ32EVR_REG
// Relative Address        0x00000190
// Absolute Address        debug_cpu_ptm0: 0xF889C190
//                         debug_cpu_ptm1: 0xF889D190
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Sequencer State Transition Event Register 32
//
// Register PTM_ETMSQ32EVR_REG Details
//
                                                                 // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMSQ32EVR_TRANS_EVENT_MASK = 0x0001FFFF;    // A Sequencer State Transition Event Register,
const uintptr_t PTM_ETMSQ32EVR_TRANS_EVENT_BPOS = 0;             // ETMSQmnEVR, defines the evnet that causes the
                                                                 // sequencer state transition from state m to state n.
                                                                 // The format is subdivided as:
                                                                 // Function, bits [16:14]
                                                                 // Specifies the function that combines the two
                                                                 // resources that define the event.
                                                                 // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                                 // Specify the two resources that are combined by
                                                                 // the logical operation specified by the Function
                                                                 // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMSQ13EVR
//
// Name                    PTM_ETMSQ13EVR_REG
// Relative Address        0x00000194
// Absolute Address        debug_cpu_ptm0: 0xF889C194
//                         debug_cpu_ptm1: 0xF889D194
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Sequencer State Transition Event Register 13
//
// Register PTM_ETMSQ13EVR_REG Details
//
                                                                 // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMSQ13EVR_TRANS_EVENT_MASK = 0x0001FFFF;    // A Sequencer State Transition Event Register,
const uintptr_t PTM_ETMSQ13EVR_TRANS_EVENT_BPOS = 0;             // ETMSQmnEVR, defines the evnet that causes the
                                                                 // sequencer state transition from state m to state n.
                                                                 // The format is subdivided as:
                                                                 // Function, bits [16:14]
                                                                 // Specifies the function that combines the two
                                                                 // resources that define the event.
                                                                 // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                                 // Specify the two resources that are combined by
                                                                 // the logical operation specified by the Function
                                                                 // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMSQR
//
// Name                    PTM_ETMSQR_REG
// Relative Address        0x0000019C
// Absolute Address        debug_cpu_ptm0: 0xF889C19C
//                         debug_cpu_ptm1: 0xF889D19C
// Width                   2 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Current Sequencer State Register
//
// Register PTM_ETMSQR_REG Details
//
                                                                   // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMSQR_CURRENT_SEQ_STATE_MASK = 0x00000003;    // Indicates the current sequencer state
const uintptr_t PTM_ETMSQR_CURRENT_SEQ_STATE_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMEXTOUTEVR1
//
// Name                    PTM_ETMEXTOUTEVR1_REG
// Relative Address        0x000001A0
// Absolute Address        debug_cpu_ptm0: 0xF889C1A0
//                         debug_cpu_ptm1: 0xF889D1A0
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             External Output Event Register 1
//
// Register PTM_ETMEXTOUTEVR1_REG Details
//
                                                                         // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMEXTOUTEVR1_EXT_OUTPUT_EVENT_MASK = 0x0001FFFF;    // External output event. Subdivided as:
const uintptr_t PTM_ETMEXTOUTEVR1_EXT_OUTPUT_EVENT_BPOS = 0;             // Function, bits [16:14]
                                                                         // Specifies the function that combines the two
                                                                         // resources that define the event.
                                                                         // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                                         // Specify the two resources that are combined by
                                                                         // the logical operation specified by the Function
                                                                         // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMEXTOUTEVR2
//
// Name                    PTM_ETMEXTOUTEVR2_REG
// Relative Address        0x000001A4
// Absolute Address        debug_cpu_ptm0: 0xF889C1A4
//                         debug_cpu_ptm1: 0xF889D1A4
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             External Output Event Register 2
//
// Register PTM_ETMEXTOUTEVR2_REG Details
//
                                                                         // Properties: Bits: 16:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMEXTOUTEVR2_EXT_OUTPUT_EVENT_MASK = 0x0001FFFF;    // External output event. Subdivided as:
const uintptr_t PTM_ETMEXTOUTEVR2_EXT_OUTPUT_EVENT_BPOS = 0;             // Function, bits [16:14]
                                                                         // Specifies the function that combines the two
                                                                         // resources that define the event.
                                                                         // Resource B, bits [13:7] and Resource A, bits [6:0]
                                                                         // Specify the two resources that are combined by
                                                                         // the logical operation specified by the Function
                                                                         // field.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCIDCVR1
//
// Name                    PTM_ETMCIDCVR1_REG
// Relative Address        0x000001B0
// Absolute Address        debug_cpu_ptm0: 0xF889C1B0
//                         debug_cpu_ptm1: 0xF889D1B0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Context ID Comparator Value Register
//
// Register PTM_ETMCIDCVR1_REG Details
//
                                                                // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCIDCVR1_CONTEXT_ID_MASK = 0xFFFFFFFF;    // Holds a 32-bit Context ID value
const uintptr_t PTM_ETMCIDCVR1_CONTEXT_ID_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCIDCMR
//
// Name                    PTM_ETMCIDCMR_REG
// Relative Address        0x000001BC
// Absolute Address        debug_cpu_ptm0: 0xF889C1BC
//                         debug_cpu_ptm1: 0xF889D1BC
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Context ID Comparator Mask Register
//
// Register PTM_ETMCIDCMR_REG Details
//
                                                                 // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMCIDCMR_CONTEXT_MASK_MASK = 0xFFFFFFFF;    // Holds a 32-bit Context ID mask
const uintptr_t PTM_ETMCIDCMR_CONTEXT_MASK_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMSYNCFR
//
// Name                    PTM_ETMSYNCFR_REG
// Relative Address        0x000001E0
// Absolute Address        debug_cpu_ptm0: 0xF889C1E0
//                         debug_cpu_ptm1: 0xF889D1E0
// Width                   12 bits
// Access Type             mixed
// Reset Value             0x00000400
// Description             Synchronization Frequency Register
//
// Register PTM_ETMSYNCFR_REG Details
//
                                                              // Properties: Bits: 11:2, Type: rw, Reset Value: 0x100
const uintptr_t PTM_ETMSYNCFR_SYNC_FREQ_MASK = 0x00000FFC;    // Synchronization frequency
const uintptr_t PTM_ETMSYNCFR_SYNC_FREQ_BPOS = 2;             // 

// RESERVED                                                      Properties: Bits: 1:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (PTM) ETMIDR
//
// Name                    PTM_ETMIDR_REG
// Relative Address        0x000001E4
// Absolute Address        debug_cpu_ptm0: 0xF889C1E4
//                         debug_cpu_ptm1: 0xF889D1E4
// Width                   32 bits
// Access Type             ro
// Reset Value             0x411CF301
// Description             ID Register
//
// Register PTM_ETMIDR_REG Details
//
                                                              // Properties: Bits: 31:24, Type: ro, Reset Value: 0x41
const uintptr_t PTM_ETMIDR_IMPL_CODE_MASK    = 0xFF000000;    // Implementor code. The field reads 0x41, ASCII
const uintptr_t PTM_ETMIDR_IMPL_CODE_BPOS    = 24;            // code for A, indicating ARM Limited.

// RESERVED                                                      Properties: Bits: 23:21, Type: ro, Reset Value: 0x0

// RESERVED                                                      Properties: Bit: 20, Type: ro, Reset Value: 0x1

                                                              // Properties: Bit: 19, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMIDR_SEC_EXT_SUPP_MASK = 0x00080000;    // Support for security extensions.
const uintptr_t PTM_ETMIDR_SEC_EXT_SUPP_BPOS = 19;            // 

                                                              // Properties: Bit: 18, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMIDR_THUMB32SUPP_MASK  = 0x00040000;    // Support for 32-bit Thumb instructions.
const uintptr_t PTM_ETMIDR_THUMB32SUPP_BPOS  = 18;            // 

// RESERVED                                                      Properties: Bits: 17:16, Type: ro, Reset Value: 0x0

                                                              // Properties: Bits: 15:12, Type: ro, Reset Value: 0xF
const uintptr_t PTM_ETMIDR_RESERVED_F_MASK   = 0x0000F000;    // Reserved, 0b1111
const uintptr_t PTM_ETMIDR_RESERVED_F_BPOS   = 12;            // 

                                                              // Properties: Bits: 11:8, Type: ro, Reset Value: 0x3
const uintptr_t PTM_ETMIDR_MAJOR_VER_MASK    = 0x00000F00;    // Major architecture version number, 0b0011
const uintptr_t PTM_ETMIDR_MAJOR_VER_BPOS    = 8;             // 

                                                              // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ETMIDR_MINOR_VER_MASK    = 0x000000F0;    // Minor architecture version number, 0b0000
const uintptr_t PTM_ETMIDR_MINOR_VER_BPOS    = 4;             // 

                                                              // Properties: Bits: 3:0, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMIDR_IMPL_REV_MASK     = 0x0000000F;    // Implementation revision.
const uintptr_t PTM_ETMIDR_IMPL_REV_BPOS     = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMCCER
//
// Name                    PTM_ETMCCER_REG
// Relative Address        0x000001E8
// Absolute Address        debug_cpu_ptm0: 0xF889C1E8
//                         debug_cpu_ptm1: 0xF889D1E8
// Width                   26 bits
// Access Type             ro
// Reset Value             0x000008EA
// Description             Configuration Code Extension Register
//
// Register PTM_ETMCCER_REG Details
//
                                                              // Properties: Bit: 25, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ETMCCER_BARR_TS_MASK     = 0x02000000;    // Timestamps are not generated for DMB/DSB
const uintptr_t PTM_ETMCCER_BARR_TS_BPOS     = 25;            // 

                                                              // Properties: Bit: 24, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ETMCCER_BARR_WP_MASK     = 0x01000000;    // DMB/DSB instructions are not treated as
const uintptr_t PTM_ETMCCER_BARR_WP_BPOS     = 24;            // waypoints.

                                                              // Properties: Bit: 23, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ETMCCER_RET_STACK_MASK   = 0x00800000;    // Return stack implemented.
const uintptr_t PTM_ETMCCER_RET_STACK_BPOS   = 23;            // 

                                                              // Properties: Bit: 22, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ETMCCER_TIMESTAMP_MASK   = 0x00400000;    // Timestamping implemented.
const uintptr_t PTM_ETMCCER_TIMESTAMP_BPOS   = 22;            // 

// RESERVED                                                      Properties: Bits: 21:16, Type: ro, Reset Value: 0x0

                                                              // Properties: Bits: 15:13, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ETMCCER_INSTRUM_RES_MASK = 0x0000E000;    // Specifies the number of instrumentation
const uintptr_t PTM_ETMCCER_INSTRUM_RES_BPOS = 13;            // resources.

                                                              // Properties: Bit: 12, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ETMCCER_RESERVED_1_MASK  = 0x00001000;    // Reserved, RAO
const uintptr_t PTM_ETMCCER_RESERVED_1_BPOS  = 12;            // 

                                                              // Properties: Bit: 11, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMCCER_REG_READS_MASK   = 0x00000800;    // Indicates that all registers, except some
const uintptr_t PTM_ETMCCER_REG_READS_BPOS   = 11;            // Integration Test Registers, are readable.

                                                              // Properties: Bits: 10:3, Type: ro, Reset Value: 0x1D
const uintptr_t PTM_ETMCCER_EXT_IN_SIZE_MASK = 0x000007F8;    // Specifies the size of the extended external input
const uintptr_t PTM_ETMCCER_EXT_IN_SIZE_BPOS = 3;             // bus, 29.

                                                              // Properties: Bits: 2:0, Type: ro, Reset Value: 0x2
const uintptr_t PTM_ETMCCER_EXT_IN_SEL_MASK  = 0x00000007;    // Specifies the number of extended external input
const uintptr_t PTM_ETMCCER_EXT_IN_SEL_BPOS  = 0;             // selectors, 2.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMEXTINSELR
//
// Name                    PTM_ETMEXTINSELR_REG
// Relative Address        0x000001EC
// Absolute Address        debug_cpu_ptm0: 0xF889C1EC
//                         debug_cpu_ptm1: 0xF889D1EC
// Width                   14 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Extended External Input Selection Register
//
// Register PTM_ETMEXTINSELR_REG Details
//
                                                                   // Properties: Bits: 13:8, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMEXTINSELR_EXT_IN_SEL2_MASK = 0x00003F00;    // Second extended external input selector
const uintptr_t PTM_ETMEXTINSELR_EXT_IN_SEL2_BPOS = 8;             // 

// RESERVED                                                           Properties: Bits: 7:6, Type: rw, Reset Value: 0x0

                                                                   // Properties: Bits: 5:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMEXTINSELR_EXT_IN_SEL1_MASK = 0x0000003F;    // First extended external input selector
const uintptr_t PTM_ETMEXTINSELR_EXT_IN_SEL1_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMAUXCR
//
// Name                    PTM_ETMAUXCR_REG
// Relative Address        0x000001FC
// Absolute Address        debug_cpu_ptm0: 0xF889C1FC
//                         debug_cpu_ptm1: 0xF889D1FC
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Auxiliary Control Register
//
// Register PTM_ETMAUXCR_REG Details
//
                                                                     // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMAUXCR_FORCE_SYNC_INSERT_MASK = 0x00000008;    // Force insertion of synchronization packets,
const uintptr_t PTM_ETMAUXCR_FORCE_SYNC_INSERT_BPOS = 3;             // regardless of current trace activity.
                                                                     // Possible values for this bit are:
                                                                     // b0 = Synchronization packets delayed when trace
                                                                     // activity is high. This is the reset value.
                                                                     // b1 = Synchronization packets inserted regardless
                                                                     // of trace activity.
                                                                     // This bit might be set if synchronization packets
                                                                     // occur too far apart. Setting this bit might cause the
                                                                     // trace FIFO to overflow more frequently when
                                                                     // trace activity is high.

                                                                     // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMAUXCR_DISABLE_WPUPDATE_MASK  = 0x00000004;    // Specifies whether the PTM issues waypoint
const uintptr_t PTM_ETMAUXCR_DISABLE_WPUPDATE_BPOS  = 2;             // update packets if there are more than 4096 bytes
                                                                     // between waypoints. Possible values for this bit
                                                                     // are:
                                                                     // b0 = PTM always issues update packets if there
                                                                     // are more than 4096 bytes between waypoints.
                                                                     // This is the reset value.
                                                                     // b1 = PTM does not issue waypoint update packets
                                                                     // unless required to do so as the result of an
                                                                     // exception or debug entry.

                                                                     // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMAUXCR_DISABLE_TSON_BARR_MASK = 0x00000002;    // Specifies whether the PTM issues a timestamp on
const uintptr_t PTM_ETMAUXCR_DISABLE_TSON_BARR_BPOS = 1;             // a barrier instruction. Possible values for this bit
                                                                     // are:
                                                                     // b0 = PTM issues timestamps on barrier
                                                                     // instructions. This is the reset value.
                                                                     // b1 = PTM does not issue timestamps on barriers

                                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMAUXCR_DISABLE_FORCED_OF_MASK = 0x00000001;    // Specifies whether the PTM enters overflow state
const uintptr_t PTM_ETMAUXCR_DISABLE_FORCED_OF_BPOS = 0;             // when synchronization is requested,
                                                                     // and the previous synchronization sequence has
                                                                     // not yet completed. This does not affect entry to
                                                                     // overflow state when the FIFO becomes full.
                                                                     // Possible values for this bit are:
                                                                     // b0 = Forced overflow enabled. This is the reset
                                                                     // value.
                                                                     // b1 = Forced overflow disabled.


//------------------------------------------------------------------------------
//
// Register (PTM) ETMTRACEIDR
//
// Name                    PTM_ETMTRACEIDR_REG
// Relative Address        0x00000200
// Absolute Address        debug_cpu_ptm0: 0xF889C200
//                         debug_cpu_ptm1: 0xF889D200
// Width                   7 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CoreSight Trace ID Register
//
// Register PTM_ETMTRACEIDR_REG Details
//
                                                               // Properties: Bits: 6:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMTRACEIDR_TRACE_ID_MASK = 0x0000007F;    // Before trace is generated, you must program this
const uintptr_t PTM_ETMTRACEIDR_TRACE_ID_BPOS = 0;             // register with a non-reserved value.
                                                               // Reserved values are 0x00 and any value in the
                                                               // range 0x70-0x7F. The reset value of this register is
                                                               // 0x00.


//------------------------------------------------------------------------------
//
// Register (PTM) OSLSR
//
// Name                    PTM_OSLSR_REG
// Relative Address        0x00000304
// Absolute Address        debug_cpu_ptm0: 0xF889C304
//                         debug_cpu_ptm1: 0xF889D304
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             OS Lock Status Register
//
// Register PTM_OSLSR_REG Details
//
                                                    // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t PTM_OSLSR_VAL_MASK = 0xFFFFFFFF;    // Shows that OS Locking is not implemented.
const uintptr_t PTM_OSLSR_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMPDSR
//
// Name                    PTM_ETMPDSR_REG
// Relative Address        0x00000314
// Absolute Address        debug_cpu_ptm0: 0xF889C314
//                         debug_cpu_ptm1: 0xF889D314
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000001
// Description             Device Powerdown Status Register
//
// Register PTM_ETMPDSR_REG Details
//
                                                      // Properties: Bits: 31:0, Type: ro, Reset Value: 0x1
const uintptr_t PTM_ETMPDSR_VAL_MASK = 0xFFFFFFFF;    // Indicates that the PTM Trace Registers can be
const uintptr_t PTM_ETMPDSR_VAL_BPOS = 0;             // accessed.


//------------------------------------------------------------------------------
//
// Register (PTM) ITMISCOUT
//
// Name                    PTM_ITMISCOUT_REG
// Relative Address        0x00000EDC
// Absolute Address        debug_cpu_ptm0: 0xF889CEDC
//                         debug_cpu_ptm1: 0xF889DEDC
// Width                   10 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Miscellaneous Outputs Register
//
// Register PTM_ITMISCOUT_REG Details
//
                                                               // Properties: Bits: 9:8, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITMISCOUT_PTMEXTOUT_MASK  = 0x00000300;    // Drives the PTMEXTOUT[1:0] outputs
const uintptr_t PTM_ITMISCOUT_PTMEXTOUT_BPOS  = 8;             // 

// RESERVED                                                       Properties: Bits: 7:6, Type: wo, Reset Value: 0x0

                                                               // Properties: Bit: 5, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITMISCOUT_PTMIDLEACK_MASK = 0x00000020;    // Drives the PTMIDLEACK output
const uintptr_t PTM_ITMISCOUT_PTMIDLEACK_BPOS = 5;             // 

                                                               // Properties: Bit: 4, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITMISCOUT_PTMDBGREQ_MASK  = 0x00000010;    // Drives the PTMDBGREQ output
const uintptr_t PTM_ITMISCOUT_PTMDBGREQ_BPOS  = 4;             // 

// RESERVED                                                       Properties: Bits: 3:0, Type: wo, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (PTM) ITMISCIN
//
// Name                    PTM_ITMISCIN_REG
// Relative Address        0x00000EE0
// Absolute Address        debug_cpu_ptm0: 0xF889CEE0
//                         debug_cpu_ptm1: 0xF889DEE0
// Width                   7 bits
// Access Type             ro
// Reset Value             x
// Description             Miscellaneous Inputs Register
//
// Register PTM_ITMISCIN_REG Details
//
                                                              // Properties: Bit: 6, Type: ro, Reset Value: x
const uintptr_t PTM_ITMISCIN_STANDBYWFI_MASK = 0x00000040;    // Returns the value of the STANDBYWFI input
const uintptr_t PTM_ITMISCIN_STANDBYWFI_BPOS = 6;             // 

// RESERVED                                                      Properties: Bit: 5, Type: ro, Reset Value: 0x0

                                                              // Properties: Bit: 4, Type: ro, Reset Value: x
const uintptr_t PTM_ITMISCIN_PTMDBGACK_MASK  = 0x00000010;    // Returns the value of the PTMDBGACK input
const uintptr_t PTM_ITMISCIN_PTMDBGACK_BPOS  = 4;             // 

                                                              // Properties: Bits: 3:0, Type: ro, Reset Value: x
const uintptr_t PTM_ITMISCIN_EXTIN_MASK      = 0x0000000F;    // Returns the value of the EXTIN[3:0] inputs
const uintptr_t PTM_ITMISCIN_EXTIN_BPOS      = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ITTRIGGER
//
// Name                    PTM_ITTRIGGER_REG
// Relative Address        0x00000EE8
// Absolute Address        debug_cpu_ptm0: 0xF889CEE8
//                         debug_cpu_ptm1: 0xF889DEE8
// Width                   1 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Trigger Register
//
// Register PTM_ITTRIGGER_REG Details
//
                                                               // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITTRIGGER_PTMTRIGGER_MASK = 0x00000001;    // Drives the PTMTRIGGER output
const uintptr_t PTM_ITTRIGGER_PTMTRIGGER_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ITATBDATA0
//
// Name                    PTM_ITATBDATA0_REG
// Relative Address        0x00000EEC
// Absolute Address        debug_cpu_ptm0: 0xF889CEEC
//                         debug_cpu_ptm1: 0xF889DEEC
// Width                   5 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             ATB Data 0 Register
//
// Register PTM_ITATBDATA0_REG Details
//
                                                               // Properties: Bit: 4, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITATBDATA0_ATDATAM31_MASK = 0x00000010;    // Drives the ATDATAM[31] output
const uintptr_t PTM_ITATBDATA0_ATDATAM31_BPOS = 4;             // 

                                                               // Properties: Bit: 3, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITATBDATA0_ATDATAM23_MASK = 0x00000008;    // Drives the ATDATAM[23] output
const uintptr_t PTM_ITATBDATA0_ATDATAM23_BPOS = 3;             // 

                                                               // Properties: Bit: 2, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITATBDATA0_ATDATAM15_MASK = 0x00000004;    // Drives the ATDATAM[15] output
const uintptr_t PTM_ITATBDATA0_ATDATAM15_BPOS = 2;             // 

                                                               // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITATBDATA0_ATDATAM7_MASK  = 0x00000002;    // Drives the ATDATAM[7] output
const uintptr_t PTM_ITATBDATA0_ATDATAM7_BPOS  = 1;             // 

                                                               // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITATBDATA0_ATDATAM0_MASK  = 0x00000001;    // Drives the ATDATAM[0] output
const uintptr_t PTM_ITATBDATA0_ATDATAM0_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ITATBCTR2
//
// Name                    PTM_ITATBCTR2_REG
// Relative Address        0x00000EF0
// Absolute Address        debug_cpu_ptm0: 0xF889CEF0
//                         debug_cpu_ptm1: 0xF889DEF0
// Width                   2 bits
// Access Type             ro
// Reset Value             x
// Description             ATB Control 2 Register
//
// Register PTM_ITATBCTR2_REG Details
//
                                                             // Properties: Bit: 1, Type: ro, Reset Value: x
const uintptr_t PTM_ITATBCTR2_AFVALIDM_MASK = 0x00000002;    // Returns the value of the AFVALIDM input
const uintptr_t PTM_ITATBCTR2_AFVALIDM_BPOS = 1;             // 

                                                             // Properties: Bit: 0, Type: ro, Reset Value: x
const uintptr_t PTM_ITATBCTR2_ATREADYM_MASK = 0x00000001;    // Returns the value of the ATREADYM input
const uintptr_t PTM_ITATBCTR2_ATREADYM_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ITATBID
//
// Name                    PTM_ITATBID_REG
// Relative Address        0x00000EF4
// Absolute Address        debug_cpu_ptm0: 0xF889CEF4
//                         debug_cpu_ptm1: 0xF889DEF4
// Width                   7 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             ATB Identification Register
//
// Register PTM_ITATBID_REG Details
//
                                                        // Properties: Bits: 6:0, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITATBID_ATIDM_MASK = 0x0000007F;    // Drives the ATIDM[6:0] outputs
const uintptr_t PTM_ITATBID_ATIDM_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ITATBCTR0
//
// Name                    PTM_ITATBCTR0_REG
// Relative Address        0x00000EF8
// Absolute Address        debug_cpu_ptm0: 0xF889CEF8
//                         debug_cpu_ptm1: 0xF889DEF8
// Width                   10 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             ATB Control 0 Register
//
// Register PTM_ITATBCTR0_REG Details
//
                                                             // Properties: Bits: 9:8, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITATBCTR0_ATBYTESM_MASK = 0x00000300;    // Drives the ATBYTESM[9:8] outputs
const uintptr_t PTM_ITATBCTR0_ATBYTESM_BPOS = 8;             // 

// RESERVED                                                     Properties: Bits: 7:2, Type: wo, Reset Value: 0x0

                                                             // Properties: Bit: 1, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITATBCTR0_AFREADYM_MASK = 0x00000002;    // Drives the AFREADYM output
const uintptr_t PTM_ITATBCTR0_AFREADYM_BPOS = 1;             // 

                                                             // Properties: Bit: 0, Type: wo, Reset Value: 0x0
const uintptr_t PTM_ITATBCTR0_ATVALIDM_MASK = 0x00000001;    // Drives the ATVALIDM output
const uintptr_t PTM_ITATBCTR0_ATVALIDM_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) ETMITCTRL
//
// Name                    PTM_ETMITCTRL_REG
// Relative Address        0x00000F00
// Absolute Address        debug_cpu_ptm0: 0xF889CF00
//                         debug_cpu_ptm1: 0xF889DF00
// Width                   1 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Integration Mode Control Register
//
// Register PTM_ETMITCTRL_REG Details
//
                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_ETMITCTRL_VAL_MASK = 0x00000001;    // Enable Integration Test registers.
const uintptr_t PTM_ETMITCTRL_VAL_BPOS = 0;             // Before entering integration mode, the PTM must
                                                        // be powered up and in programming mode.
                                                        // THis means bit 0 of the Main Control Register is
                                                        // set to 0, and bit 10 of the Main Control Register ist
                                                        // set 1.
                                                        // After leaving integration mode, the PTM must be
                                                        // reset before attempting to perform tracing.


//------------------------------------------------------------------------------
//
// Register (PTM) CTSR
//
// Name                    PTM_CTSR_REG
// Relative Address        0x00000FA0
// Absolute Address        debug_cpu_ptm0: 0xF889CFA0
//                         debug_cpu_ptm1: 0xF889DFA0
// Width                   8 bits
// Access Type             rw
// Reset Value             0x000000FF
// Description             Claim Tag Set Register
//
// Register PTM_CTSR_REG Details
//
                                                   // Properties: Bits: 7:0, Type: rw, Reset Value: 0xFF
const uintptr_t PTM_CTSR_VAL_MASK = 0x000000FF;    // The claim tag register is used for any
const uintptr_t PTM_CTSR_VAL_BPOS = 0;             // interrogating tools to determine if the device is
                                                   // being programmed or has been programmed.
                                                   // Read:
                                                   // 1= Claim tag is implemented, 0 = Claim tag is not
                                                   // implemented
                                                   // Write:
                                                   // 1= Set claim tag bit, 0= No effect


//------------------------------------------------------------------------------
//
// Register (PTM) CTCR
//
// Name                    PTM_CTCR_REG
// Relative Address        0x00000FA4
// Absolute Address        debug_cpu_ptm0: 0xF889CFA4
//                         debug_cpu_ptm1: 0xF889DFA4
// Width                   8 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Claim Tag Clear Register
//
// Register PTM_CTCR_REG Details
//
                                                   // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t PTM_CTCR_VAL_MASK = 0x000000FF;    // The claim tag register is used for any
const uintptr_t PTM_CTCR_VAL_BPOS = 0;             // interrogating tools to determine if the device is
                                                   // being programmed or has been programmed.
                                                   // Read: Current value of claim tag.
                                                   // Write: 1= Clear claim tag bit, 0= No effect


//------------------------------------------------------------------------------
//
// Register (PTM) LAR
//
// Name                    PTM_LAR_REG
// Relative Address        0x00000FB0
// Absolute Address        debug_cpu_ptm0: 0xF889CFB0
//                         debug_cpu_ptm1: 0xF889DFB0
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Lock Access Register
//
// Register PTM_LAR_REG Details
//
                                                  // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
const uintptr_t PTM_LAR_VAL_MASK = 0xFFFFFFFF;    // Write Access Code.
const uintptr_t PTM_LAR_VAL_BPOS = 0;             // Write behavior depends on PADDRDBG31 pin:
                                                  // - PADDRDBG31=0 (lower 2GB):
                                                  // After reset (via PRESETDBGn), PTM is locked,
                                                  // i.e., writes to all other registers using lower 2GB
                                                  // addresses are ignored.
                                                  // To unlock, 0xC5ACCE55 must be written this
                                                  // register.
                                                  // After the required registers are written, to lock
                                                  // again, write a value other than 0xC5ACCE55 to
                                                  // this register.
                                                  // - PADDRDBG31=1 (upper 2GB):
                                                  // PTM is unlocked when upper 2GB addresses are
                                                  // used to write to all the registers.
                                                  // However, write to this register is ignored using a
                                                  // upper 2GB address!
                                                  // Note: read from this register always returns 0,
                                                  // regardless of PADDRDBG31.


//------------------------------------------------------------------------------
//
// Register (PTM) LSR
//
// Name                    PTM_LSR_REG
// Relative Address        0x00000FB4
// Absolute Address        debug_cpu_ptm0: 0xF889CFB4
//                         debug_cpu_ptm1: 0xF889DFB4
// Width                   3 bits
// Access Type             ro
// Reset Value             0x00000003
// Description             Lock Status Register
//
// Register PTM_LSR_REG Details
//
                                                     // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t PTM_LSR_8BIT_MASK   = 0x00000004;    // Set to 0 since PTM implements a 32-bit lock access
const uintptr_t PTM_LSR_8BIT_BPOS   = 2;             // register

                                                     // Properties: Bit: 1, Type: ro, Reset Value: 0x1
const uintptr_t PTM_LSR_STATUS_MASK = 0x00000002;    // Read behavior depends on PADDRDBG31 pin:
const uintptr_t PTM_LSR_STATUS_BPOS = 1;             // - PADDRDBG31=0 (lower 2GB):
                                                     // When a lower 2GB address is used to read this
                                                     // register, this bit indicates whether PTM is in
                                                     // locked state
                                                     // (1= locked, 0= unlocked).
                                                     // - PADDRDBG31=1 (upper 2GB):
                                                     // always returns 0.

                                                     // Properties: Bit: 0, Type: ro, Reset Value: 0x1
const uintptr_t PTM_LSR_IMP_MASK    = 0x00000001;    // Read behavior depends on PADDRDBG31 pin:
const uintptr_t PTM_LSR_IMP_BPOS    = 0;             // - PADDRDBG31=0 (lower 2GB):
                                                     // always returns 1, meaning lock mechanism are
                                                     // implemented.
                                                     // - PADDRDBG31=1 (upper 2GB):
                                                     // always returns 0, meaning lock mechanism is
                                                     // NOT implemented.


//------------------------------------------------------------------------------
//
// Register (PTM) ASR
//
// Name                     PTM_ASR_REG
// Relative Address         0x00000FB8
// Absolute Address         debug_cpu_ptm0: 0xF889CFB8
//                          debug_cpu_ptm1: 0xF889DFB8
// Width                    8 bits
// Access Type              ro
// Reset Value              x
// Description              Authentication Status Register
//
// Register PTM_ASR_REG Details
//
                                                   // Properties: Bits: 7:6, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ASR_SNI_MASK  = 0x000000C0;    // Secure non-invasive debug
const uintptr_t PTM_ASR_SNI_BPOS  = 6;             // Always 2'b00,.
                                                   // This functionality is not implemented

                                                   // Properties: Bits: 5:4, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ASR_SI_MASK   = 0x00000030;    // Secure invasive debug
const uintptr_t PTM_ASR_SI_BPOS   = 4;             // Always 2'b00.
                                                   // This functionality is not implemented.

                                                   // Properties: Bits: 3:2, Type: ro, Reset Value: x
const uintptr_t PTM_ASR_NSNI_MASK = 0x0000000C;    // Non-secure non-invasive debug
const uintptr_t PTM_ASR_NSNI_BPOS = 2;             // IF NIDEN or DBGEN is 1, this field is 2'b11,
                                                   // indicating the functionality is implemented and
                                                   // enabled.
                                                   // Otherwise, this field is 2'b10 (implemented but
                                                   // disabled)

                                                   // Properties: Bits: 1:0, Type: ro, Reset Value: 0x0
const uintptr_t PTM_ASR_NSI_MASK  = 0x00000003;    // Non-secure invasive debug
const uintptr_t PTM_ASR_NSI_BPOS  = 0;             // Always 2'b00.
                                                   // This functionality is not implemented.


//------------------------------------------------------------------------------
//
// Register (PTM) DEVID
//
// Name                     PTM_DEVID_REG
// Relative Address         0x00000FC8
// Absolute Address         debug_cpu_ptm0: 0xF889CFC8
//                          debug_cpu_ptm1: 0xF889DFC8
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Device ID
//
// Register PTM_DEVID_REG Details
//
                                                    // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t PTM_DEVID_VAL_MASK = 0xFFFFFFFF;    // Component capability
const uintptr_t PTM_DEVID_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) DTIR
//
// Name                     PTM_DTIR_REG
// Relative Address         0x00000FCC
// Absolute Address         debug_cpu_ptm0: 0xF889CFCC
//                          debug_cpu_ptm1: 0xF889DFCC
// Width                    8 bits
// Access Type              ro
// Reset Value              0x00000013
// Description              Device Type Identifier Register
//
// Register PTM_DTIR_REG Details
//
                                                   // Properties: Bits: 7:0, Type: ro, Reset Value: 0x13
const uintptr_t PTM_DTIR_VAL_MASK = 0x000000FF;    // A trace source and processor trace
const uintptr_t PTM_DTIR_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) PERIPHID4
//
// Name                    PTM_PERIPHID4_REG
// Relative Address        0x00000FD0
// Absolute Address        debug_cpu_ptm0: 0xF889CFD0
//                         debug_cpu_ptm1: 0xF889DFD0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000004
// Description             Peripheral ID4
//
// Register PTM_PERIPHID4_REG Details
//
                                                              // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
const uintptr_t PTM_PERIPHID4_4KB_COUNT_MASK = 0x000000F0;    // 4KB Count, set to 0
const uintptr_t PTM_PERIPHID4_4KB_COUNT_BPOS = 4;             // 

                                                              // Properties: Bits: 3:0, Type: ro, Reset Value: 0x4
const uintptr_t PTM_PERIPHID4_JEP106ID_MASK  = 0x0000000F;    // JEP106 continuation code
const uintptr_t PTM_PERIPHID4_JEP106ID_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) PERIPHID5
//
// Name                    PTM_PERIPHID5_REG
// Relative Address        0x00000FD4
// Absolute Address        debug_cpu_ptm0: 0xF889CFD4
//                         debug_cpu_ptm1: 0xF889DFD4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID5
//
// Register PTM_PERIPHID5_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t PTM_PERIPHID5_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t PTM_PERIPHID5_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) PERIPHID6
//
// Name                    PTM_PERIPHID6_REG
// Relative Address        0x00000FD8
// Absolute Address        debug_cpu_ptm0: 0xF889CFD8
//                         debug_cpu_ptm1: 0xF889DFD8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID6
//
// Register PTM_PERIPHID6_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t PTM_PERIPHID6_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t PTM_PERIPHID6_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) PERIPHID7
//
// Name                    PTM_PERIPHID7_REG
// Relative Address        0x00000FDC
// Absolute Address        debug_cpu_ptm0: 0xF889CFDC
//                         debug_cpu_ptm1: 0xF889DFDC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID7
//
// Register PTM_PERIPHID7_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t PTM_PERIPHID7_VAL_MASK = 0x000000FF;    // reserved
const uintptr_t PTM_PERIPHID7_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) PERIPHID0
//
// Name                    PTM_PERIPHID0_REG
// Relative Address        0x00000FE0
// Absolute Address        debug_cpu_ptm0: 0xF889CFE0
//                         debug_cpu_ptm1: 0xF889DFE0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000050
// Description             Peripheral ID0
//
// Register PTM_PERIPHID0_REG Details
//
                                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x50
const uintptr_t PTM_PERIPHID0_VAL_MASK = 0x000000FF;    // PartNumber0
const uintptr_t PTM_PERIPHID0_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) PERIPHID1
//
// Name                    PTM_PERIPHID1_REG
// Relative Address        0x00000FE4
// Absolute Address        debug_cpu_ptm0: 0xF889CFE4
//                         debug_cpu_ptm1: 0xF889DFE4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B9
// Description             Peripheral ID1
//
// Register PTM_PERIPHID1_REG Details
//
                                                                 // Properties: Bits: 7:4, Type: ro, Reset Value: 0xB
const uintptr_t PTM_PERIPHID1_JEP106ID_MASK     = 0x000000F0;    // JEP106 Identity Code [3:0]
const uintptr_t PTM_PERIPHID1_JEP106ID_BPOS     = 4;             // 

                                                                 // Properties: Bits: 3:0, Type: ro, Reset Value: 0x9
const uintptr_t PTM_PERIPHID1_PART_NUMBER1_MASK = 0x0000000F;    // PartNumber1
const uintptr_t PTM_PERIPHID1_PART_NUMBER1_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) PERIPHID2
//
// Name                    PTM_PERIPHID2_REG
// Relative Address        0x00000FE8
// Absolute Address        debug_cpu_ptm0: 0xF889CFE8
//                         debug_cpu_ptm1: 0xF889DFE8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000001B
// Description             Peripheral ID2
//
// Register PTM_PERIPHID2_REG Details
//
                                                             // Properties: Bits: 7:4, Type: ro, Reset Value: 0x1
const uintptr_t PTM_PERIPHID2_REV_NUM_MASK  = 0x000000F0;    // Revision number of Peripheral
const uintptr_t PTM_PERIPHID2_REV_NUM_BPOS  = 4;             // 

                                                             // Properties: Bit: 3, Type: ro, Reset Value: 0x1
const uintptr_t PTM_PERIPHID2_JEDEC_MASK    = 0x00000008;    // Indicates that a JEDEC assigned value is used
const uintptr_t PTM_PERIPHID2_JEDEC_BPOS    = 3;             // 

                                                             // Properties: Bits: 2:0, Type: ro, Reset Value: 0x3
const uintptr_t PTM_PERIPHID2_JEP106ID_MASK = 0x00000007;    // JEP106 Identity Code [6:4]
const uintptr_t PTM_PERIPHID2_JEP106ID_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) PERIPHID3
//
// Name                    PTM_PERIPHID3_REG
// Relative Address        0x00000FEC
// Absolute Address        debug_cpu_ptm0: 0xF889CFEC
//                         debug_cpu_ptm1: 0xF889DFEC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID3
//
// Register PTM_PERIPHID3_REG Details
//
                                                             // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
const uintptr_t PTM_PERIPHID3_REV_AND_MASK  = 0x000000F0;    // RevAnd, at top level
const uintptr_t PTM_PERIPHID3_REV_AND_BPOS  = 4;             // 

                                                             // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
const uintptr_t PTM_PERIPHID3_CUST_MOD_MASK = 0x0000000F;    // Customer Modified
const uintptr_t PTM_PERIPHID3_CUST_MOD_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) COMPID0
//
// Name                    PTM_COMPID0_REG
// Relative Address        0x00000FF0
// Absolute Address        debug_cpu_ptm0: 0xF889CFF0
//                         debug_cpu_ptm1: 0xF889DFF0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000000D
// Description             Component ID0
//
// Register PTM_COMPID0_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0xD
const uintptr_t PTM_COMPID0_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t PTM_COMPID0_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) COMPID1
//
// Name                    PTM_COMPID1_REG
// Relative Address        0x00000FF4
// Absolute Address        debug_cpu_ptm0: 0xF889CFF4
//                         debug_cpu_ptm1: 0xF889DFF4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000090
// Description             Component ID1
//
// Register PTM_COMPID1_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0x90
const uintptr_t PTM_COMPID1_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t PTM_COMPID1_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) COMPID2
//
// Name                    PTM_COMPID2_REG
// Relative Address        0x00000FF8
// Absolute Address        debug_cpu_ptm0: 0xF889CFF8
//                         debug_cpu_ptm1: 0xF889DFF8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000005
// Description             Component ID2
//
// Register PTM_COMPID2_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0x5
const uintptr_t PTM_COMPID2_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t PTM_COMPID2_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (PTM) COMPID3
//
// Name                    PTM_COMPID3_REG
// Relative Address        0x00000FFC
// Absolute Address        debug_cpu_ptm0: 0xF889CFFC
//                         debug_cpu_ptm1: 0xF889DFFC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B1
// Description             Component ID3
//
// Register PTM_COMPID3_REG Details
//
                                                      // Properties: Bits: 7:0, Type: ro, Reset Value: 0xB1
const uintptr_t PTM_COMPID3_VAL_MASK = 0x000000FF;    // Preamble
const uintptr_t PTM_COMPID3_VAL_BPOS = 0;             // 


#endif // PS7_PTM_H

