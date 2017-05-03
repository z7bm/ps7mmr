//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_CTI
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

#ifndef PS7_CTI_H
#define PS7_CTI_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    CTI_CPU0 MMRs
//
//  Name                         Address                              Width   Type  Reset Value   Description
enum TCTI_CPU0
{
    CTI_CTRL_REG_CPU0          =  DEBUG_CPU_CTI0_ADDR + 0x00000000, //   1    rw    0x00000000    CTI Control Register
    CTI_INTACK_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x00000010, //   8    wo    0x00000000    CTI Interrupt Acknowledge Register
    CTI_APPSET_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x00000014, //   4    rw    0x00000000    CTI Application Trigger Set Register
    CTI_APPCLEAR_REG_CPU0      =  DEBUG_CPU_CTI0_ADDR + 0x00000018, //   4    wo    0x00000000    CTI Application Trigger Clear Register
    CTI_APPPULSE_REG_CPU0      =  DEBUG_CPU_CTI0_ADDR + 0x0000001C, //   4    wo    0x00000000    CTI Application Pulse Register
    CTI_INEN0_REG_CPU0         =  DEBUG_CPU_CTI0_ADDR + 0x00000020, //   4    rw    0x00000000    CTI Trigger to Channel Enable 0 Register
    CTI_INEN1_REG_CPU0         =  DEBUG_CPU_CTI0_ADDR + 0x00000024, //   4    rw    0x00000000    CTI Trigger to Channel Enable 1 Register
    CTI_INEN2_REG_CPU0         =  DEBUG_CPU_CTI0_ADDR + 0x00000028, //   4    rw    0x00000000    CTI Trigger to Channel Enable 2 Register
    CTI_INEN3_REG_CPU0         =  DEBUG_CPU_CTI0_ADDR + 0x0000002C, //   4    rw    0x00000000    CTI Trigger to Channel Enable 3 Register
    CTI_INEN4_REG_CPU0         =  DEBUG_CPU_CTI0_ADDR + 0x00000030, //   4    rw    0x00000000    CTI Trigger to Channel Enable 4 Register
    CTI_INEN5_REG_CPU0         =  DEBUG_CPU_CTI0_ADDR + 0x00000034, //   4    rw    0x00000000    CTI Trigger to Channel Enable 5 Register
    CTI_INEN6_REG_CPU0         =  DEBUG_CPU_CTI0_ADDR + 0x00000038, //   4    rw    0x00000000    CTI Trigger to Channel Enable 6 Register
    CTI_INEN7_REG_CPU0         =  DEBUG_CPU_CTI0_ADDR + 0x0000003C, //   4    rw    0x00000000    CTI Trigger to Channel Enable 7 Register
    CTI_OUTEN0_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x000000A0, //   4    rw    0x00000000    CTI Channel to Trigger Enable 0 Register
    CTI_OUTEN1_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x000000A4, //   4    rw    0x00000000    CTI Channel to Trigger Enable 1 Register
    CTI_OUTEN2_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x000000A8, //   4    rw    0x00000000    CTI Channel to Trigger Enable 2 Register
    CTI_OUTEN3_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x000000AC, //   4    rw    0x00000000    CTI Channel to Trigger Enable 3 Register
    CTI_OUTEN4_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x000000B0, //   4    rw    0x00000000    CTI Channel to Trigger Enable 4 Register
    CTI_OUTEN5_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x000000B4, //   4    rw    0x00000000    CTI Channel to Trigger Enable 5 Register
    CTI_OUTEN6_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x000000B8, //   4    rw    0x00000000    CTI Channel to Trigger Enable 6 Register
    CTI_OUTEN7_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x000000BC, //   4    rw    0x00000000    CTI Channel to Trigger Enable 7 Register
    CTI_TRIGINSTATUS_REG_CPU0  =  DEBUG_CPU_CTI0_ADDR + 0x00000130, //   8    ro    x             CTI Trigger In Status Register
    CTI_TRIGOUTSTATUS_REG_CPU0 =  DEBUG_CPU_CTI0_ADDR + 0x00000134, //   8    ro    0x00000000    CTI Trigger Out Status Register
    CTI_CHINSTATUS_REG_CPU0    =  DEBUG_CPU_CTI0_ADDR + 0x00000138, //   4    ro    x             CTI Channel In Status Register
    CTI_CHOUTSTATUS_REG_CPU0   =  DEBUG_CPU_CTI0_ADDR + 0x0000013C, //   4    ro    0x00000000    CTI Channel Out Status Register
    CTI_GATE_REG_CPU0          =  DEBUG_CPU_CTI0_ADDR + 0x00000140, //   4    rw    0x0000000F    Enable CTI Channel Gate Register
    CTI_ASICCTRL_REG_CPU0      =  DEBUG_CPU_CTI0_ADDR + 0x00000144, //   8    rw    0x00000000    External Multiplexor Control Register
    CTI_ITCHINACK_REG_CPU0     =  DEBUG_CPU_CTI0_ADDR + 0x00000EDC, //   4    wo    0x00000000    ITCHINACK Register
    CTI_ITTRIGINACK_REG_CPU0   =  DEBUG_CPU_CTI0_ADDR + 0x00000EE0, //   8    wo    0x00000000    ITTRIGINACK Register
    CTI_ITCHOUT_REG_CPU0       =  DEBUG_CPU_CTI0_ADDR + 0x00000EE4, //   4    wo    0x00000000    ITCHOUT Register
    CTI_ITTRIGOUT_REG_CPU0     =  DEBUG_CPU_CTI0_ADDR + 0x00000EE8, //   8    wo    0x00000000    ITTRIGOUT Register
    CTI_ITCHOUTACK_REG_CPU0    =  DEBUG_CPU_CTI0_ADDR + 0x00000EEC, //   4    ro    0x00000000    ITCHOUTACK Register
    CTI_ITTRIGOUTACK_REG_CPU0  =  DEBUG_CPU_CTI0_ADDR + 0x00000EF0, //   8    ro    0x00000000    ITTRIGOUTACK Register
    CTI_ITCHIN_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x00000EF4, //   4    ro    0x00000000    ITCHIN Register
    CTI_ITTRIGIN_REG_CPU0      =  DEBUG_CPU_CTI0_ADDR + 0x00000EF8, //   8    ro    0x00000000    ITTRIGIN Register
    CTI_ITCTRL_REG_CPU0        =  DEBUG_CPU_CTI0_ADDR + 0x00000F00, //   1    rw    0x00000000    IT Control Register
    CTI_CTSR_REG_CPU0          =  DEBUG_CPU_CTI0_ADDR + 0x00000FA0, //   4    rw    0x0000000F    Claim Tag Set Register
    CTI_CTCR_REG_CPU0          =  DEBUG_CPU_CTI0_ADDR + 0x00000FA4, //   4    rw    0x00000000    Claim Tag Clear Register
    CTI_LAR_REG_CPU0           =  DEBUG_CPU_CTI0_ADDR + 0x00000FB0, //  32    wo    0x00000000    Lock Access Register
    CTI_LSR_REG_CPU0           =  DEBUG_CPU_CTI0_ADDR + 0x00000FB4, //   3    ro    0x00000003    Lock Status Register
    CTI_ASR_REG_CPU0           =  DEBUG_CPU_CTI0_ADDR + 0x00000FB8, //   4    ro    x             Authentication Status Register
    CTI_DEVID_REG_CPU0         =  DEBUG_CPU_CTI0_ADDR + 0x00000FC8, //  20    ro    0x00040800    Device ID
    CTI_DTIR_REG_CPU0          =  DEBUG_CPU_CTI0_ADDR + 0x00000FCC, //   8    ro    0x00000014    Device Type Identifier Register
    CTI_PERIPHID4_REG_CPU0     =  DEBUG_CPU_CTI0_ADDR + 0x00000FD0, //   8    ro    0x00000004    Peripheral ID4
    CTI_PERIPHID5_REG_CPU0     =  DEBUG_CPU_CTI0_ADDR + 0x00000FD4, //   8    ro    0x00000000    Peripheral ID5
    CTI_PERIPHID6_REG_CPU0     =  DEBUG_CPU_CTI0_ADDR + 0x00000FD8, //   8    ro    0x00000000    Peripheral ID6
    CTI_PERIPHID7_REG_CPU0     =  DEBUG_CPU_CTI0_ADDR + 0x00000FDC, //   8    ro    0x00000000    Peripheral ID7
    CTI_PERIPHID0_REG_CPU0     =  DEBUG_CPU_CTI0_ADDR + 0x00000FE0, //   8    ro    0x00000006    Peripheral ID0
    CTI_PERIPHID1_REG_CPU0     =  DEBUG_CPU_CTI0_ADDR + 0x00000FE4, //   8    ro    0x000000B9    Peripheral ID1
    CTI_PERIPHID2_REG_CPU0     =  DEBUG_CPU_CTI0_ADDR + 0x00000FE8, //   8    ro    0x0000002B    Peripheral ID2
    CTI_PERIPHID3_REG_CPU0     =  DEBUG_CPU_CTI0_ADDR + 0x00000FEC, //   8    ro    0x00000000    Peripheral ID3
    CTI_COMPID0_REG_CPU0       =  DEBUG_CPU_CTI0_ADDR + 0x00000FF0, //   8    ro    0x0000000D    Component ID0
    CTI_COMPID1_REG_CPU0       =  DEBUG_CPU_CTI0_ADDR + 0x00000FF4, //   8    ro    0x00000090    Component ID1
    CTI_COMPID2_REG_CPU0       =  DEBUG_CPU_CTI0_ADDR + 0x00000FF8, //   8    ro    0x00000005    Component ID2
    CTI_COMPID3_REG_CPU0       =  DEBUG_CPU_CTI0_ADDR + 0x00000FFC  //   8    ro    0x000000B1    Component ID3
};
//------------------------------------------------------------------------------
//
//    CTI_CPU1 MMRs
//
//  Name                         Address                              Width   Type  Reset Value   Description
enum TCTI_CPU1
{
    CTI_CTRL_REG_CPU1          =  DEBUG_CPU_CTI1_ADDR + 0x00000000, //   1    rw    0x00000000    CTI Control Register
    CTI_INTACK_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x00000010, //   8    wo    0x00000000    CTI Interrupt Acknowledge Register
    CTI_APPSET_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x00000014, //   4    rw    0x00000000    CTI Application Trigger Set Register
    CTI_APPCLEAR_REG_CPU1      =  DEBUG_CPU_CTI1_ADDR + 0x00000018, //   4    wo    0x00000000    CTI Application Trigger Clear Register
    CTI_APPPULSE_REG_CPU1      =  DEBUG_CPU_CTI1_ADDR + 0x0000001C, //   4    wo    0x00000000    CTI Application Pulse Register
    CTI_INEN0_REG_CPU1         =  DEBUG_CPU_CTI1_ADDR + 0x00000020, //   4    rw    0x00000000    CTI Trigger to Channel Enable 0 Register
    CTI_INEN1_REG_CPU1         =  DEBUG_CPU_CTI1_ADDR + 0x00000024, //   4    rw    0x00000000    CTI Trigger to Channel Enable 1 Register
    CTI_INEN2_REG_CPU1         =  DEBUG_CPU_CTI1_ADDR + 0x00000028, //   4    rw    0x00000000    CTI Trigger to Channel Enable 2 Register
    CTI_INEN3_REG_CPU1         =  DEBUG_CPU_CTI1_ADDR + 0x0000002C, //   4    rw    0x00000000    CTI Trigger to Channel Enable 3 Register
    CTI_INEN4_REG_CPU1         =  DEBUG_CPU_CTI1_ADDR + 0x00000030, //   4    rw    0x00000000    CTI Trigger to Channel Enable 4 Register
    CTI_INEN5_REG_CPU1         =  DEBUG_CPU_CTI1_ADDR + 0x00000034, //   4    rw    0x00000000    CTI Trigger to Channel Enable 5 Register
    CTI_INEN6_REG_CPU1         =  DEBUG_CPU_CTI1_ADDR + 0x00000038, //   4    rw    0x00000000    CTI Trigger to Channel Enable 6 Register
    CTI_INEN7_REG_CPU1         =  DEBUG_CPU_CTI1_ADDR + 0x0000003C, //   4    rw    0x00000000    CTI Trigger to Channel Enable 7 Register
    CTI_OUTEN0_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x000000A0, //   4    rw    0x00000000    CTI Channel to Trigger Enable 0 Register
    CTI_OUTEN1_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x000000A4, //   4    rw    0x00000000    CTI Channel to Trigger Enable 1 Register
    CTI_OUTEN2_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x000000A8, //   4    rw    0x00000000    CTI Channel to Trigger Enable 2 Register
    CTI_OUTEN3_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x000000AC, //   4    rw    0x00000000    CTI Channel to Trigger Enable 3 Register
    CTI_OUTEN4_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x000000B0, //   4    rw    0x00000000    CTI Channel to Trigger Enable 4 Register
    CTI_OUTEN5_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x000000B4, //   4    rw    0x00000000    CTI Channel to Trigger Enable 5 Register
    CTI_OUTEN6_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x000000B8, //   4    rw    0x00000000    CTI Channel to Trigger Enable 6 Register
    CTI_OUTEN7_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x000000BC, //   4    rw    0x00000000    CTI Channel to Trigger Enable 7 Register
    CTI_TRIGINSTATUS_REG_CPU1  =  DEBUG_CPU_CTI1_ADDR + 0x00000130, //   8    ro    x             CTI Trigger In Status Register
    CTI_TRIGOUTSTATUS_REG_CPU1 =  DEBUG_CPU_CTI1_ADDR + 0x00000134, //   8    ro    0x00000000    CTI Trigger Out Status Register
    CTI_CHINSTATUS_REG_CPU1    =  DEBUG_CPU_CTI1_ADDR + 0x00000138, //   4    ro    x             CTI Channel In Status Register
    CTI_CHOUTSTATUS_REG_CPU1   =  DEBUG_CPU_CTI1_ADDR + 0x0000013C, //   4    ro    0x00000000    CTI Channel Out Status Register
    CTI_GATE_REG_CPU1          =  DEBUG_CPU_CTI1_ADDR + 0x00000140, //   4    rw    0x0000000F    Enable CTI Channel Gate Register
    CTI_ASICCTRL_REG_CPU1      =  DEBUG_CPU_CTI1_ADDR + 0x00000144, //   8    rw    0x00000000    External Multiplexor Control Register
    CTI_ITCHINACK_REG_CPU1     =  DEBUG_CPU_CTI1_ADDR + 0x00000EDC, //   4    wo    0x00000000    ITCHINACK Register
    CTI_ITTRIGINACK_REG_CPU1   =  DEBUG_CPU_CTI1_ADDR + 0x00000EE0, //   8    wo    0x00000000    ITTRIGINACK Register
    CTI_ITCHOUT_REG_CPU1       =  DEBUG_CPU_CTI1_ADDR + 0x00000EE4, //   4    wo    0x00000000    ITCHOUT Register
    CTI_ITTRIGOUT_REG_CPU1     =  DEBUG_CPU_CTI1_ADDR + 0x00000EE8, //   8    wo    0x00000000    ITTRIGOUT Register
    CTI_ITCHOUTACK_REG_CPU1    =  DEBUG_CPU_CTI1_ADDR + 0x00000EEC, //   4    ro    0x00000000    ITCHOUTACK Register
    CTI_ITTRIGOUTACK_REG_CPU1  =  DEBUG_CPU_CTI1_ADDR + 0x00000EF0, //   8    ro    0x00000000    ITTRIGOUTACK Register
    CTI_ITCHIN_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x00000EF4, //   4    ro    0x00000000    ITCHIN Register
    CTI_ITTRIGIN_REG_CPU1      =  DEBUG_CPU_CTI1_ADDR + 0x00000EF8, //   8    ro    0x00000000    ITTRIGIN Register
    CTI_ITCTRL_REG_CPU1        =  DEBUG_CPU_CTI1_ADDR + 0x00000F00, //   1    rw    0x00000000    IT Control Register
    CTI_CTSR_REG_CPU1          =  DEBUG_CPU_CTI1_ADDR + 0x00000FA0, //   4    rw    0x0000000F    Claim Tag Set Register
    CTI_CTCR_REG_CPU1          =  DEBUG_CPU_CTI1_ADDR + 0x00000FA4, //   4    rw    0x00000000    Claim Tag Clear Register
    CTI_LAR_REG_CPU1           =  DEBUG_CPU_CTI1_ADDR + 0x00000FB0, //  32    wo    0x00000000    Lock Access Register
    CTI_LSR_REG_CPU1           =  DEBUG_CPU_CTI1_ADDR + 0x00000FB4, //   3    ro    0x00000003    Lock Status Register
    CTI_ASR_REG_CPU1           =  DEBUG_CPU_CTI1_ADDR + 0x00000FB8, //   4    ro    x             Authentication Status Register
    CTI_DEVID_REG_CPU1         =  DEBUG_CPU_CTI1_ADDR + 0x00000FC8, //  20    ro    0x00040800    Device ID
    CTI_DTIR_REG_CPU1          =  DEBUG_CPU_CTI1_ADDR + 0x00000FCC, //   8    ro    0x00000014    Device Type Identifier Register
    CTI_PERIPHID4_REG_CPU1     =  DEBUG_CPU_CTI1_ADDR + 0x00000FD0, //   8    ro    0x00000004    Peripheral ID4
    CTI_PERIPHID5_REG_CPU1     =  DEBUG_CPU_CTI1_ADDR + 0x00000FD4, //   8    ro    0x00000000    Peripheral ID5
    CTI_PERIPHID6_REG_CPU1     =  DEBUG_CPU_CTI1_ADDR + 0x00000FD8, //   8    ro    0x00000000    Peripheral ID6
    CTI_PERIPHID7_REG_CPU1     =  DEBUG_CPU_CTI1_ADDR + 0x00000FDC, //   8    ro    0x00000000    Peripheral ID7
    CTI_PERIPHID0_REG_CPU1     =  DEBUG_CPU_CTI1_ADDR + 0x00000FE0, //   8    ro    0x00000006    Peripheral ID0
    CTI_PERIPHID1_REG_CPU1     =  DEBUG_CPU_CTI1_ADDR + 0x00000FE4, //   8    ro    0x000000B9    Peripheral ID1
    CTI_PERIPHID2_REG_CPU1     =  DEBUG_CPU_CTI1_ADDR + 0x00000FE8, //   8    ro    0x0000002B    Peripheral ID2
    CTI_PERIPHID3_REG_CPU1     =  DEBUG_CPU_CTI1_ADDR + 0x00000FEC, //   8    ro    0x00000000    Peripheral ID3
    CTI_COMPID0_REG_CPU1       =  DEBUG_CPU_CTI1_ADDR + 0x00000FF0, //   8    ro    0x0000000D    Component ID0
    CTI_COMPID1_REG_CPU1       =  DEBUG_CPU_CTI1_ADDR + 0x00000FF4, //   8    ro    0x00000090    Component ID1
    CTI_COMPID2_REG_CPU1       =  DEBUG_CPU_CTI1_ADDR + 0x00000FF8, //   8    ro    0x00000005    Component ID2
    CTI_COMPID3_REG_CPU1       =  DEBUG_CPU_CTI1_ADDR + 0x00000FFC  //   8    ro    0x000000B1    Component ID3
};
//------------------------------------------------------------------------------
//
//    CTI_ETB_TPIU MMRs
//
//  Name                             Address                                  Width   Type  Reset Value   Description
enum TCTI_ETB_TPIU
{
    CTI_CTRL_REG_ETB_TPIU          =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000000, //   1    rw    0x00000000    CTI Control Register
    CTI_INTACK_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000010, //   8    wo    0x00000000    CTI Interrupt Acknowledge Register
    CTI_APPSET_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000014, //   4    rw    0x00000000    CTI Application Trigger Set Register
    CTI_APPCLEAR_REG_ETB_TPIU      =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000018, //   4    wo    0x00000000    CTI Application Trigger Clear Register
    CTI_APPPULSE_REG_ETB_TPIU      =  DEBUG_CTI_ETB_TPIU_ADDR + 0x0000001C, //   4    wo    0x00000000    CTI Application Pulse Register
    CTI_INEN0_REG_ETB_TPIU         =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000020, //   4    rw    0x00000000    CTI Trigger to Channel Enable 0 Register
    CTI_INEN1_REG_ETB_TPIU         =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000024, //   4    rw    0x00000000    CTI Trigger to Channel Enable 1 Register
    CTI_INEN2_REG_ETB_TPIU         =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000028, //   4    rw    0x00000000    CTI Trigger to Channel Enable 2 Register
    CTI_INEN3_REG_ETB_TPIU         =  DEBUG_CTI_ETB_TPIU_ADDR + 0x0000002C, //   4    rw    0x00000000    CTI Trigger to Channel Enable 3 Register
    CTI_INEN4_REG_ETB_TPIU         =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000030, //   4    rw    0x00000000    CTI Trigger to Channel Enable 4 Register
    CTI_INEN5_REG_ETB_TPIU         =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000034, //   4    rw    0x00000000    CTI Trigger to Channel Enable 5 Register
    CTI_INEN6_REG_ETB_TPIU         =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000038, //   4    rw    0x00000000    CTI Trigger to Channel Enable 6 Register
    CTI_INEN7_REG_ETB_TPIU         =  DEBUG_CTI_ETB_TPIU_ADDR + 0x0000003C, //   4    rw    0x00000000    CTI Trigger to Channel Enable 7 Register
    CTI_OUTEN0_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x000000A0, //   4    rw    0x00000000    CTI Channel to Trigger Enable 0 Register
    CTI_OUTEN1_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x000000A4, //   4    rw    0x00000000    CTI Channel to Trigger Enable 1 Register
    CTI_OUTEN2_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x000000A8, //   4    rw    0x00000000    CTI Channel to Trigger Enable 2 Register
    CTI_OUTEN3_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x000000AC, //   4    rw    0x00000000    CTI Channel to Trigger Enable 3 Register
    CTI_OUTEN4_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x000000B0, //   4    rw    0x00000000    CTI Channel to Trigger Enable 4 Register
    CTI_OUTEN5_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x000000B4, //   4    rw    0x00000000    CTI Channel to Trigger Enable 5 Register
    CTI_OUTEN6_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x000000B8, //   4    rw    0x00000000    CTI Channel to Trigger Enable 6 Register
    CTI_OUTEN7_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x000000BC, //   4    rw    0x00000000    CTI Channel to Trigger Enable 7 Register
    CTI_TRIGINSTATUS_REG_ETB_TPIU  =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000130, //   8    ro    x             CTI Trigger In Status Register
    CTI_TRIGOUTSTATUS_REG_ETB_TPIU =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000134, //   8    ro    0x00000000    CTI Trigger Out Status Register
    CTI_CHINSTATUS_REG_ETB_TPIU    =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000138, //   4    ro    x             CTI Channel In Status Register
    CTI_CHOUTSTATUS_REG_ETB_TPIU   =  DEBUG_CTI_ETB_TPIU_ADDR + 0x0000013C, //   4    ro    0x00000000    CTI Channel Out Status Register
    CTI_GATE_REG_ETB_TPIU          =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000140, //   4    rw    0x0000000F    Enable CTI Channel Gate Register
    CTI_ASICCTRL_REG_ETB_TPIU      =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000144, //   8    rw    0x00000000    External Multiplexor Control Register
    CTI_ITCHINACK_REG_ETB_TPIU     =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000EDC, //   4    wo    0x00000000    ITCHINACK Register
    CTI_ITTRIGINACK_REG_ETB_TPIU   =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000EE0, //   8    wo    0x00000000    ITTRIGINACK Register
    CTI_ITCHOUT_REG_ETB_TPIU       =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000EE4, //   4    wo    0x00000000    ITCHOUT Register
    CTI_ITTRIGOUT_REG_ETB_TPIU     =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000EE8, //   8    wo    0x00000000    ITTRIGOUT Register
    CTI_ITCHOUTACK_REG_ETB_TPIU    =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000EEC, //   4    ro    0x00000000    ITCHOUTACK Register
    CTI_ITTRIGOUTACK_REG_ETB_TPIU  =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000EF0, //   8    ro    0x00000000    ITTRIGOUTACK Register
    CTI_ITCHIN_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000EF4, //   4    ro    0x00000000    ITCHIN Register
    CTI_ITTRIGIN_REG_ETB_TPIU      =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000EF8, //   8    ro    0x00000000    ITTRIGIN Register
    CTI_ITCTRL_REG_ETB_TPIU        =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000F00, //   1    rw    0x00000000    IT Control Register
    CTI_CTSR_REG_ETB_TPIU          =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FA0, //   4    rw    0x0000000F    Claim Tag Set Register
    CTI_CTCR_REG_ETB_TPIU          =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FA4, //   4    rw    0x00000000    Claim Tag Clear Register
    CTI_LAR_REG_ETB_TPIU           =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FB0, //  32    wo    0x00000000    Lock Access Register
    CTI_LSR_REG_ETB_TPIU           =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FB4, //   3    ro    0x00000003    Lock Status Register
    CTI_ASR_REG_ETB_TPIU           =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FB8, //   4    ro    x             Authentication Status Register
    CTI_DEVID_REG_ETB_TPIU         =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FC8, //  20    ro    0x00040800    Device ID
    CTI_DTIR_REG_ETB_TPIU          =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FCC, //   8    ro    0x00000014    Device Type Identifier Register
    CTI_PERIPHID4_REG_ETB_TPIU     =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FD0, //   8    ro    0x00000004    Peripheral ID4
    CTI_PERIPHID5_REG_ETB_TPIU     =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FD4, //   8    ro    0x00000000    Peripheral ID5
    CTI_PERIPHID6_REG_ETB_TPIU     =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FD8, //   8    ro    0x00000000    Peripheral ID6
    CTI_PERIPHID7_REG_ETB_TPIU     =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FDC, //   8    ro    0x00000000    Peripheral ID7
    CTI_PERIPHID0_REG_ETB_TPIU     =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FE0, //   8    ro    0x00000006    Peripheral ID0
    CTI_PERIPHID1_REG_ETB_TPIU     =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FE4, //   8    ro    0x000000B9    Peripheral ID1
    CTI_PERIPHID2_REG_ETB_TPIU     =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FE8, //   8    ro    0x0000002B    Peripheral ID2
    CTI_PERIPHID3_REG_ETB_TPIU     =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FEC, //   8    ro    0x00000000    Peripheral ID3
    CTI_COMPID0_REG_ETB_TPIU       =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FF0, //   8    ro    0x0000000D    Component ID0
    CTI_COMPID1_REG_ETB_TPIU       =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FF4, //   8    ro    0x00000090    Component ID1
    CTI_COMPID2_REG_ETB_TPIU       =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FF8, //   8    ro    0x00000005    Component ID2
    CTI_COMPID3_REG_ETB_TPIU       =  DEBUG_CTI_ETB_TPIU_ADDR + 0x00000FFC  //   8    ro    0x000000B1    Component ID3
};
//------------------------------------------------------------------------------
//
//    CTI_FTM MMRs
//
//  Name                        Address                             Width   Type  Reset Value   Description
enum TCTI_FTM
{
    CTI_CTRL_REG_FTM          =  DEBUG_CTI_FTM_ADDR + 0x00000000, //   1    rw    0x00000000    CTI Control Register
    CTI_INTACK_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x00000010, //   8    wo    0x00000000    CTI Interrupt Acknowledge Register
    CTI_APPSET_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x00000014, //   4    rw    0x00000000    CTI Application Trigger Set Register
    CTI_APPCLEAR_REG_FTM      =  DEBUG_CTI_FTM_ADDR + 0x00000018, //   4    wo    0x00000000    CTI Application Trigger Clear Register
    CTI_APPPULSE_REG_FTM      =  DEBUG_CTI_FTM_ADDR + 0x0000001C, //   4    wo    0x00000000    CTI Application Pulse Register
    CTI_INEN0_REG_FTM         =  DEBUG_CTI_FTM_ADDR + 0x00000020, //   4    rw    0x00000000    CTI Trigger to Channel Enable 0 Register
    CTI_INEN1_REG_FTM         =  DEBUG_CTI_FTM_ADDR + 0x00000024, //   4    rw    0x00000000    CTI Trigger to Channel Enable 1 Register
    CTI_INEN2_REG_FTM         =  DEBUG_CTI_FTM_ADDR + 0x00000028, //   4    rw    0x00000000    CTI Trigger to Channel Enable 2 Register
    CTI_INEN3_REG_FTM         =  DEBUG_CTI_FTM_ADDR + 0x0000002C, //   4    rw    0x00000000    CTI Trigger to Channel Enable 3 Register
    CTI_INEN4_REG_FTM         =  DEBUG_CTI_FTM_ADDR + 0x00000030, //   4    rw    0x00000000    CTI Trigger to Channel Enable 4 Register
    CTI_INEN5_REG_FTM         =  DEBUG_CTI_FTM_ADDR + 0x00000034, //   4    rw    0x00000000    CTI Trigger to Channel Enable 5 Register
    CTI_INEN6_REG_FTM         =  DEBUG_CTI_FTM_ADDR + 0x00000038, //   4    rw    0x00000000    CTI Trigger to Channel Enable 6 Register
    CTI_INEN7_REG_FTM         =  DEBUG_CTI_FTM_ADDR + 0x0000003C, //   4    rw    0x00000000    CTI Trigger to Channel Enable 7 Register
    CTI_OUTEN0_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x000000A0, //   4    rw    0x00000000    CTI Channel to Trigger Enable 0 Register
    CTI_OUTEN1_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x000000A4, //   4    rw    0x00000000    CTI Channel to Trigger Enable 1 Register
    CTI_OUTEN2_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x000000A8, //   4    rw    0x00000000    CTI Channel to Trigger Enable 2 Register
    CTI_OUTEN3_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x000000AC, //   4    rw    0x00000000    CTI Channel to Trigger Enable 3 Register
    CTI_OUTEN4_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x000000B0, //   4    rw    0x00000000    CTI Channel to Trigger Enable 4 Register
    CTI_OUTEN5_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x000000B4, //   4    rw    0x00000000    CTI Channel to Trigger Enable 5 Register
    CTI_OUTEN6_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x000000B8, //   4    rw    0x00000000    CTI Channel to Trigger Enable 6 Register
    CTI_OUTEN7_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x000000BC, //   4    rw    0x00000000    CTI Channel to Trigger Enable 7 Register
    CTI_TRIGINSTATUS_REG_FTM  =  DEBUG_CTI_FTM_ADDR + 0x00000130, //   8    ro    x             CTI Trigger In Status Register
    CTI_TRIGOUTSTATUS_REG_FTM =  DEBUG_CTI_FTM_ADDR + 0x00000134, //   8    ro    0x00000000    CTI Trigger Out Status Register
    CTI_CHINSTATUS_REG_FTM    =  DEBUG_CTI_FTM_ADDR + 0x00000138, //   4    ro    x             CTI Channel In Status Register
    CTI_CHOUTSTATUS_REG_FTM   =  DEBUG_CTI_FTM_ADDR + 0x0000013C, //   4    ro    0x00000000    CTI Channel Out Status Register
    CTI_GATE_REG_FTM          =  DEBUG_CTI_FTM_ADDR + 0x00000140, //   4    rw    0x0000000F    Enable CTI Channel Gate Register
    CTI_ASICCTRL_REG_FTM      =  DEBUG_CTI_FTM_ADDR + 0x00000144, //   8    rw    0x00000000    External Multiplexor Control Register
    CTI_ITCHINACK_REG_FTM     =  DEBUG_CTI_FTM_ADDR + 0x00000EDC, //   4    wo    0x00000000    ITCHINACK Register
    CTI_ITTRIGINACK_REG_FTM   =  DEBUG_CTI_FTM_ADDR + 0x00000EE0, //   8    wo    0x00000000    ITTRIGINACK Register
    CTI_ITCHOUT_REG_FTM       =  DEBUG_CTI_FTM_ADDR + 0x00000EE4, //   4    wo    0x00000000    ITCHOUT Register
    CTI_ITTRIGOUT_REG_FTM     =  DEBUG_CTI_FTM_ADDR + 0x00000EE8, //   8    wo    0x00000000    ITTRIGOUT Register
    CTI_ITCHOUTACK_REG_FTM    =  DEBUG_CTI_FTM_ADDR + 0x00000EEC, //   4    ro    0x00000000    ITCHOUTACK Register
    CTI_ITTRIGOUTACK_REG_FTM  =  DEBUG_CTI_FTM_ADDR + 0x00000EF0, //   8    ro    0x00000000    ITTRIGOUTACK Register
    CTI_ITCHIN_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x00000EF4, //   4    ro    0x00000000    ITCHIN Register
    CTI_ITTRIGIN_REG_FTM      =  DEBUG_CTI_FTM_ADDR + 0x00000EF8, //   8    ro    0x00000000    ITTRIGIN Register
    CTI_ITCTRL_REG_FTM        =  DEBUG_CTI_FTM_ADDR + 0x00000F00, //   1    rw    0x00000000    IT Control Register
    CTI_CTSR_REG_FTM          =  DEBUG_CTI_FTM_ADDR + 0x00000FA0, //   4    rw    0x0000000F    Claim Tag Set Register
    CTI_CTCR_REG_FTM          =  DEBUG_CTI_FTM_ADDR + 0x00000FA4, //   4    rw    0x00000000    Claim Tag Clear Register
    CTI_LAR_REG_FTM           =  DEBUG_CTI_FTM_ADDR + 0x00000FB0, //  32    wo    0x00000000    Lock Access Register
    CTI_LSR_REG_FTM           =  DEBUG_CTI_FTM_ADDR + 0x00000FB4, //   3    ro    0x00000003    Lock Status Register
    CTI_ASR_REG_FTM           =  DEBUG_CTI_FTM_ADDR + 0x00000FB8, //   4    ro    x             Authentication Status Register
    CTI_DEVID_REG_FTM         =  DEBUG_CTI_FTM_ADDR + 0x00000FC8, //  20    ro    0x00040800    Device ID
    CTI_DTIR_REG_FTM          =  DEBUG_CTI_FTM_ADDR + 0x00000FCC, //   8    ro    0x00000014    Device Type Identifier Register
    CTI_PERIPHID4_REG_FTM     =  DEBUG_CTI_FTM_ADDR + 0x00000FD0, //   8    ro    0x00000004    Peripheral ID4
    CTI_PERIPHID5_REG_FTM     =  DEBUG_CTI_FTM_ADDR + 0x00000FD4, //   8    ro    0x00000000    Peripheral ID5
    CTI_PERIPHID6_REG_FTM     =  DEBUG_CTI_FTM_ADDR + 0x00000FD8, //   8    ro    0x00000000    Peripheral ID6
    CTI_PERIPHID7_REG_FTM     =  DEBUG_CTI_FTM_ADDR + 0x00000FDC, //   8    ro    0x00000000    Peripheral ID7
    CTI_PERIPHID0_REG_FTM     =  DEBUG_CTI_FTM_ADDR + 0x00000FE0, //   8    ro    0x00000006    Peripheral ID0
    CTI_PERIPHID1_REG_FTM     =  DEBUG_CTI_FTM_ADDR + 0x00000FE4, //   8    ro    0x000000B9    Peripheral ID1
    CTI_PERIPHID2_REG_FTM     =  DEBUG_CTI_FTM_ADDR + 0x00000FE8, //   8    ro    0x0000002B    Peripheral ID2
    CTI_PERIPHID3_REG_FTM     =  DEBUG_CTI_FTM_ADDR + 0x00000FEC, //   8    ro    0x00000000    Peripheral ID3
    CTI_COMPID0_REG_FTM       =  DEBUG_CTI_FTM_ADDR + 0x00000FF0, //   8    ro    0x0000000D    Component ID0
    CTI_COMPID1_REG_FTM       =  DEBUG_CTI_FTM_ADDR + 0x00000FF4, //   8    ro    0x00000090    Component ID1
    CTI_COMPID2_REG_FTM       =  DEBUG_CTI_FTM_ADDR + 0x00000FF8, //   8    ro    0x00000005    Component ID2
    CTI_COMPID3_REG_FTM       =  DEBUG_CTI_FTM_ADDR + 0x00000FFC  //   8    ro    0x000000B1    Component ID3
};
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (CTI) CTRL
//
// Name                     CTI_CTRL_REG
// Relative Address         0x00000000
// Absolute Address         debug_cpu_cti0: 0xF8898000
//                          debug_cpu_cti1: 0xF8899000
//                          debug_cti_etb_tpiu: 0xF8802000
//                          debug_cti_ftm: 0xF8809000
// Width                    1 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              CTI Control Register
//
// Register CTI_CTRL_REG Details
//
enum TCTI_CTRL_REG
{
                                       // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    CTI_GLBEN_MASK =  0x00000001UL,    // Enables or disables the ECT. When disabled, all
    CTI_GLBEN_BPOS =  0UL              // cross triggering mapping logic functionality is
                                       // disabled for this processor.

};

//------------------------------------------------------------------------------
//
// Register (CTI) INTACK
//
// Name                     CTI_INTACK_REG
// Relative Address        0x00000010
// Absolute Address        debug_cpu_cti0: 0xF8898010
//                         debug_cpu_cti1: 0xF8899010
//                         debug_cti_etb_tpiu: 0xF8802010
//                         debug_cti_ftm: 0xF8809010
// Width                   8 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             CTI Interrupt Acknowledge Register
//
// Register CTI_INTACK_REG Details
//
enum TCTI_INTACK_REG
{
                                        // Properties: Bits: 7:0, Type: wo, Reset Value: 0x0
    CTI_INTACK_MASK =  0x000000FFUL,    // Acknowledges the corresponding CTI_TRIGOUT
    CTI_INTACK_BPOS =  0UL              // output:
                                        // 1 = CTI_TRIGOUT is acknowledged and is cleared
                                        // when MAPTRIGOUT is LOW.
                                        // 0 = no effect
                                        // There is one bit of the register for each
                                        // CTI_TRIGOUT output.

};

//------------------------------------------------------------------------------
//
// Register (CTI) APPSET
//
// Name                    CTI_APPSET_REG
// Relative Address        0x00000014
// Absolute Address        debug_cpu_cti0: 0xF8898014
//                         debug_cpu_cti1: 0xF8899014
//                         debug_cti_etb_tpiu: 0xF8802014
//                         debug_cti_ftm: 0xF8809014
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Application Trigger Set Register
//
// Register CTI_APPSET_REG Details
//
enum TCTI_APPSET_REG
{
                                        // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_APPSET_MASK =  0x0000000FUL,    // Setting a bit HIGH generates a channel event for
    CTI_APPSET_BPOS =  0UL              // the selected channel.
                                        // Read:
                                        // 0 = application trigger inactive (reset)
                                        // 1 = application trigger active.
                                        // Write:
                                        // 0 = no effect
                                        // 1 = generate channel event.
                                        // There is one bit of the register for each channel.

};

//------------------------------------------------------------------------------
//
// Register (CTI) APPCLEAR
//
// Name                    CTI_APPCLEAR_REG
// Relative Address        0x00000018
// Absolute Address        debug_cpu_cti0: 0xF8898018
//                         debug_cpu_cti1: 0xF8899018
//                         debug_cti_etb_tpiu: 0xF8802018
//                         debug_cti_ftm: 0xF8809018
// Width                   4 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             CTI Application Trigger Clear Register
//
// Register CTI_APPCLEAR_REG Details
//
enum TCTI_APPCLEAR_REG
{
                                          // Properties: Bits: 3:0, Type: wo, Reset Value: 0x0
    CTI_APPCLEAR_MASK =  0x0000000FUL,    // Clears corresponding bits in the CTI_APPSET
    CTI_APPCLEAR_BPOS =  0UL              // register.
                                          // 1 = application trigger disabled in the CTI_APPSET
                                          // register
                                          // 0 = no effect.
                                          // There is one bit of the register for each channel.

};

//------------------------------------------------------------------------------
//
// Register (CTI) APPPULSE
//
// Name                    CTI_APPPULSE_REG
// Relative Address        0x0000001C
// Absolute Address        debug_cpu_cti0: 0xF889801C
//                         debug_cpu_cti1: 0xF889901C
//                         debug_cti_etb_tpiu: 0xF880201C
//                         debug_cti_ftm: 0xF880901C
// Width                   4 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             CTI Application Pulse Register
//
// Register CTI_APPPULSE_REG Details
//
enum TCTI_APPPULSE_REG
{
                                         // Properties: Bits: 3:0, Type: wo, Reset Value: 0x0
    CTI_APPULSE_MASK =  0x0000000FUL,    // Setting a bit HIGH generates a channel event
    CTI_APPULSE_BPOS =  0UL              // pulse for the selected channel.
                                         // Write:
                                         // 1 = channel event pulse generated for one
                                         // CTI_CLK period
                                         // 0 = no effect.
                                         // There is one bit of the register for each channel.

};

//------------------------------------------------------------------------------
//
// Register (CTI) INEN0
//
// Name                    CTI_INEN0_REG
// Relative Address        0x00000020
// Absolute Address        debug_cpu_cti0: 0xF8898020
//                         debug_cpu_cti1: 0xF8899020
//                         debug_cti_etb_tpiu: 0xF8802020
//                         debug_cti_ftm: 0xF8809020
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Trigger to Channel Enable 0 Register
//
// Register CTI_INEN0_REG Details
//
enum TCTI_INEN0_REG
{
                                           // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_INEN0_VAL_MASK =  0x0000000FUL,    // Enables a cross trigger event to the corresponding
    CTI_INEN0_VAL_BPOS =  0UL              // channel when an CTI_TRIGIN is activated.
                                           // 1 = enables the CTI_TRIGIN signal to generate an
                                           // event on the respective channel of the CTM.
                                           // There is one bit of the register for each of the four
                                           // channels. For example in register CTI_INEN0,
                                           // TRIGINEN[0] set to 1 enables CTI_TRIGIN onto
                                           // channel 0.
                                           // 0 = disables the CTI_TRIGIN signal from
                                           // generating an event on the respective channel of
                                           // the CTM.

};

//------------------------------------------------------------------------------
//
// Register (CTI) INEN1
//
// Name                    CTI_INEN1_REG
// Relative Address        0x00000024
// Absolute Address        debug_cpu_cti0: 0xF8898024
//                         debug_cpu_cti1: 0xF8899024
//                         debug_cti_etb_tpiu: 0xF8802024
//                         debug_cti_ftm: 0xF8809024
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Trigger to Channel Enable 1 Register
//
// Register CTI_INEN1_REG Details
//
enum TCTI_INEN1_REG
{
                                           // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_INEN1_VAL_MASK =  0x0000000FUL,    // Enables a cross trigger event to the corresponding
    CTI_INEN1_VAL_BPOS =  0UL              // channel when an CTI_TRIGIN is activated.
                                           // 1 = enables the CTI_TRIGIN signal to generate an
                                           // event on the respective channel of the CTM.
                                           // There is one bit of the register for each of the four
                                           // channels. For example in register CTI_INEN0,
                                           // TRIGINEN[0] set to 1 enables CTI_TRIGIN onto
                                           // channel 0.
                                           // 0 = disables the CTI_TRIGIN signal from
                                           // generating an event on the respective channel of
                                           // the CTM.

};

//------------------------------------------------------------------------------
//
// Register (CTI) INEN2
//
// Name                    CTI_INEN2_REG
// Relative Address        0x00000028
// Absolute Address        debug_cpu_cti0: 0xF8898028
//                         debug_cpu_cti1: 0xF8899028
//                         debug_cti_etb_tpiu: 0xF8802028
//                         debug_cti_ftm: 0xF8809028
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Trigger to Channel Enable 2 Register
//
// Register CTI_INEN2_REG Details
//
enum TCTI_INEN2_REG
{
                                           // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_INEN2_VAL_MASK =  0x0000000FUL,    // Enables a cross trigger event to the corresponding
    CTI_INEN2_VAL_BPOS =  0UL              // channel when an CTI_TRIGIN is activated.
                                           // 1 = enables the CTI_TRIGIN signal to generate an
                                           // event on the respective channel of the CTM.
                                           // There is one bit of the register for each of the four
                                           // channels. For example in register CTI_INEN0,
                                           // TRIGINEN[0] set to 1 enables CTI_TRIGIN onto
                                           // channel 0.
                                           // 0 = disables the CTI_TRIGIN signal from
                                           // generating an event on the respective channel of
                                           // the
                                           // CTM.

};

//------------------------------------------------------------------------------
//
// Register (CTI) INEN3
//
// Name                    CTI_INEN3_REG
// Relative Address        0x0000002C
// Absolute Address        debug_cpu_cti0: 0xF889802C
//                         debug_cpu_cti1: 0xF889902C
//                         debug_cti_etb_tpiu: 0xF880202C
//                         debug_cti_ftm: 0xF880902C
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Trigger to Channel Enable 3 Register
//
// Register CTI_INEN3_REG Details
//
enum TCTI_INEN3_REG
{
                                           // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_INEN3_VAL_MASK =  0x0000000FUL,    // Enables a cross trigger event to the corresponding
    CTI_INEN3_VAL_BPOS =  0UL              // channel when an CTI_TRIGIN is activated.
                                           // 1 = enables the CTI_TRIGIN signal to generate an
                                           // event on the respective channel of the CTM.
                                           // There is one bit of the register for each of the four
                                           // channels. For example in register CTI_INEN0,
                                           // TRIGINEN[0] set to 1 enables CTI_TRIGIN onto
                                           // channel 0.
                                           // 0 = disables the CTI_TRIGIN signal from
                                           // generating an event on the respective channel of
                                           // the CTM.

};

//------------------------------------------------------------------------------
//
// Register (CTI) INEN4
//
// Name                    CTI_INEN4_REG
// Relative Address        0x00000030
// Absolute Address        debug_cpu_cti0: 0xF8898030
//                         debug_cpu_cti1: 0xF8899030
//                         debug_cti_etb_tpiu: 0xF8802030
//                         debug_cti_ftm: 0xF8809030
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Trigger to Channel Enable 4 Register
//
// Register CTI_INEN4_REG Details
//
enum TCTI_INEN4_REG
{
                                           // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_INEN4_VAL_MASK =  0x0000000FUL,    // Enables a cross trigger event to the corresponding
    CTI_INEN4_VAL_BPOS =  0UL              // channel when an CTI_TRIGIN is activated.
                                           // 1 = enables the CTI_TRIGIN signal to generate an
                                           // event on the respective channel of the CTM.
                                           // There is one bit of the register for each of the four
                                           // channels. For example in register CTI_INEN0,
                                           // TRIGINEN[0] set to 1 enables CTI_TRIGIN onto
                                           // channel 0.
                                           // 0 = disables the CTI_TRIGIN signal from
                                           // generating an event on the respective channel of
                                           // the CTM.

};

//------------------------------------------------------------------------------
//
// Register (CTI) INEN5
//
// Name                    CTI_INEN5_REG
// Relative Address        0x00000034
// Absolute Address        debug_cpu_cti0: 0xF8898034
//                         debug_cpu_cti1: 0xF8899034
//                         debug_cti_etb_tpiu: 0xF8802034
//                         debug_cti_ftm: 0xF8809034
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Trigger to Channel Enable 5 Register
//
// Register CTI_INEN5_REG Details
//
enum TCTI_INEN5_REG
{
                                           // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_INEN5_VAL_MASK =  0x0000000FUL,    // Enables a cross trigger event to the corresponding
    CTI_INEN5_VAL_BPOS =  0UL              // channel when an CTI_TRIGIN is activated.
                                           // 1 = enables the CTI_TRIGIN signal to generate an
                                           // event on the respective channel of the CTM.
                                           // There is one bit of the register for each of the four
                                           // channels. For example in register CTI_INEN0,
                                           // TRIGINEN[0] set to 1 enables CTI_TRIGIN onto
                                           // channel 0.
                                           // 0 = disables the CTI_TRIGIN signal from
                                           // generating an event on the respective channel of
                                           // the CTM.

};

//------------------------------------------------------------------------------
//
// Register (CTI) INEN6
//
// Name                    CTI_INEN6_REG
// Relative Address        0x00000038
// Absolute Address        debug_cpu_cti0: 0xF8898038
//                         debug_cpu_cti1: 0xF8899038
//                         debug_cti_etb_tpiu: 0xF8802038
//                         debug_cti_ftm: 0xF8809038
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Trigger to Channel Enable 6 Register
//
// Register CTI_INEN6_REG Details
//
enum TCTI_INEN6_REG
{
                                           // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_INEN6_VAL_MASK =  0x0000000FUL,    // Enables a cross trigger event to the corresponding
    CTI_INEN6_VAL_BPOS =  0UL              // channel when an CTI_TRIGIN is activated.
                                           // 1 = enables the CTI_TRIGIN signal to generate an
                                           // event on the respective channel of the CTM.
                                           // There is one bit of the register for each of the four
                                           // channels. For example in register CTI_INEN0,
                                           // TRIGINEN[0] set to 1 enables CTI_TRIGIN onto
                                           // channel 0.
                                           // 0 = disables the CTI_TRIGIN signal from
                                           // generating an event on the respective channel of
                                           // the CTM.

};

//------------------------------------------------------------------------------
//
// Register (CTI) INEN7
//
// Name                    CTI_INEN7_REG
// Relative Address        0x0000003C
// Absolute Address        debug_cpu_cti0: 0xF889803C
//                         debug_cpu_cti1: 0xF889903C
//                         debug_cti_etb_tpiu: 0xF880203C
//                         debug_cti_ftm: 0xF880903C
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Trigger to Channel Enable 7 Register
//
// Register CTI_INEN7_REG Details
//
enum TCTI_INEN7_REG
{
                                           // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_INEN7_VAL_MASK =  0x0000000FUL,    // Enables a cross trigger event to the corresponding
    CTI_INEN7_VAL_BPOS =  0UL              // channel when an CTI_TRIGIN is activated.
                                           // 1 = enables the CTI_TRIGIN signal to generate an
                                           // event on the respective channel of the CTM.
                                           // There is one bit of the register for each of the four
                                           // channels. For example in register CTI_INEN0,
                                           // TRIGINEN[0] set to 1 enables CTI_TRIGIN onto
                                           // channel 0.
                                           // 0 = disables the CTI_TRIGIN signal from
                                           // generating an event on the respective channel of
                                           // the CTM.

};

//------------------------------------------------------------------------------
//
// Register (CTI) OUTEN0
//
// Name                    CTI_OUTEN0_REG
// Relative Address        0x000000A0
// Absolute Address        debug_cpu_cti0: 0xF88980A0
//                         debug_cpu_cti1: 0xF88990A0
//                         debug_cti_etb_tpiu: 0xF88020A0
//                         debug_cti_ftm: 0xF88090A0
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Channel to Trigger Enable 0 Register
//
// Register CTI_OUTEN0_REG Details
//
enum TCTI_OUTEN0_REG
{
                                            // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_OUTEN0_VAL_MASK =  0x0000000FUL,    // Changing the value of this bit from a 0 to a 1
    CTI_OUTEN0_VAL_BPOS =  0UL              // enables a channel event for the corresponding
                                            // channel to generate an CTI_TRIGOUT output:
                                            // 0 = the channel input (CTI_CHIN) from the CTM is
                                            // not routed to the CTI_TRIGOUT output
                                            // 1 = the channel input (CTI_CHIN) from the CTM is
                                            // routed to the CTI_TRIGOUT output.
                                            // There is one bit for each of the four channels. For
                                            // example in register CTI_OUTEN0, enabling
                                            // bit 0 enables CTI_CHIN[0] to cause a trigger event
                                            // on the CTI_TRIGOUT[0] output.

};

//------------------------------------------------------------------------------
//
// Register (CTI) OUTEN1
//
// Name                    CTI_OUTEN1_REG
// Relative Address        0x000000A4
// Absolute Address        debug_cpu_cti0: 0xF88980A4
//                         debug_cpu_cti1: 0xF88990A4
//                         debug_cti_etb_tpiu: 0xF88020A4
//                         debug_cti_ftm: 0xF88090A4
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Channel to Trigger Enable 1 Register
//
// Register CTI_OUTEN1_REG Details
//
enum TCTI_OUTEN1_REG
{
                                            // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_OUTEN1_VAL_MASK =  0x0000000FUL,    // Changing the value of this bit from a 0 to a 1
    CTI_OUTEN1_VAL_BPOS =  0UL              // enables a channel event for the corresponding
                                            // channel to generate an CTI_TRIGOUT output:
                                            // 0 = the channel input (CTI_CHIN) from the CTM is
                                            // not routed to the CTI_TRIGOUT output
                                            // 1 = the channel input (CTI_CHIN) from the CTM is
                                            // routed to the CTI_TRIGOUT output.
                                            // There is one bit for each of the four channels. For
                                            // example in register CTI_OUTEN0, enabling
                                            // bit 0 enables CTI_CHIN[0] to cause a trigger event
                                            // on the CTI_TRIGOUT[0] output.

};

//------------------------------------------------------------------------------
//
// Register (CTI) OUTEN2
//
// Name                    CTI_OUTEN2_REG
// Relative Address        0x000000A8
// Absolute Address        debug_cpu_cti0: 0xF88980A8
//                         debug_cpu_cti1: 0xF88990A8
//                         debug_cti_etb_tpiu: 0xF88020A8
//                         debug_cti_ftm: 0xF88090A8
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Channel to Trigger Enable 2 Register
//
// Register CTI_OUTEN2_REG Details
//
enum TCTI_OUTEN2_REG
{
                                            // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_OUTEN2_VAL_MASK =  0x0000000FUL,    // Changing the value of this bit from a 0 to a 1
    CTI_OUTEN2_VAL_BPOS =  0UL              // enables a channel event for the corresponding
                                            // channel to generate an CTI_TRIGOUT output:
                                            // 0 = the channel input (CTI_CHIN) from the CTM is
                                            // not routed to the CTI_TRIGOUT output
                                            // 1 = the channel input (CTI_CHIN) from the CTM is
                                            // routed to the CTI_TRIGOUT output.
                                            // There is one bit for each of the four channels. For
                                            // example in register CTI_OUTEN0, enabling
                                            // bit 0 enables CTI_CHIN[0] to cause a trigger event
                                            // on the CTI_TRIGOUT[0] output.

};

//------------------------------------------------------------------------------
//
// Register (CTI) OUTEN3
//
// Name                    CTI_OUTEN3_REG
// Relative Address        0x000000AC
// Absolute Address        debug_cpu_cti0: 0xF88980AC
//                         debug_cpu_cti1: 0xF88990AC
//                         debug_cti_etb_tpiu: 0xF88020AC
//                         debug_cti_ftm: 0xF88090AC
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Channel to Trigger Enable 3 Register
//
// Register CTI_OUTEN3_REG Details
//
enum TCTI_OUTEN3_REG
{
                                            // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_OUTEN3_VAL_MASK =  0x0000000FUL,    // Changing the value of this bit from a 0 to a 1
    CTI_OUTEN3_VAL_BPOS =  0UL              // enables a channel event for the corresponding
                                            // channel to generate an CTI_TRIGOUT output:
                                            // 0 = the channel input (CTI_CHIN) from the CTM is
                                            // not routed to the CTI_TRIGOUT output
                                            // 1 = the channel input (CTI_CHIN) from the CTM is
                                            // routed to the CTI_TRIGOUT output.
                                            // There is one bit for each of the four channels. For
                                            // example in register CTI_OUTEN0, enabling
                                            // bit 0 enables CTI_CHIN[0] to cause a trigger event
                                            // on the CTI_TRIGOUT[0] output.

};

//------------------------------------------------------------------------------
//
// Register (CTI) OUTEN4
//
// Name                    CTI_OUTEN4_REG
// Relative Address        0x000000B0
// Absolute Address        debug_cpu_cti0: 0xF88980B0
//                         debug_cpu_cti1: 0xF88990B0
//                         debug_cti_etb_tpiu: 0xF88020B0
//                         debug_cti_ftm: 0xF88090B0
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Channel to Trigger Enable 4 Register
//
// Register CTI_OUTEN4_REG Details
//
enum TCTI_OUTEN4_REG
{
                                            // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_OUTEN4_VAL_MASK =  0x0000000FUL,    // Changing the value of this bit from a 0 to a 1
    CTI_OUTEN4_VAL_BPOS =  0UL              // enables a channel event for the corresponding
                                            // channel to generate an CTI_TRIGOUT output:
                                            // 0 = the channel input (CTI_CHIN) from the CTM is
                                            // not routed to the CTI_TRIGOUT output
                                            // 1 = the channel input (CTI_CHIN) from the CTM is
                                            // routed to the CTI_TRIGOUT output.
                                            // There is one bit for each of the four channels. For
                                            // example in register CTI_OUTEN0, enabling
                                            // bit 0 enables CTI_CHIN[0] to cause a trigger event
                                            // on the CTI_TRIGOUT[0] output.

};

//------------------------------------------------------------------------------
//
// Register (CTI) OUTEN5
//
// Name                    CTI_OUTEN5_REG
// Relative Address        0x000000B4
// Absolute Address        debug_cpu_cti0: 0xF88980B4
//                         debug_cpu_cti1: 0xF88990B4
//                         debug_cti_etb_tpiu: 0xF88020B4
//                         debug_cti_ftm: 0xF88090B4
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Channel to Trigger Enable 5 Register
//
// Register CTI_OUTEN5_REG Details
//
enum TCTI_OUTEN5_REG
{
                                            // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_OUTEN5_VAL_MASK =  0x0000000FUL,    // Changing the value of this bit from a 0 to a 1
    CTI_OUTEN5_VAL_BPOS =  0UL              // enables a channel event for the corresponding
                                            // channel to generate an CTI_TRIGOUT output:
                                            // 0 = the channel input (CTI_CHIN) from the CTM is
                                            // not routed to the CTI_TRIGOUT output
                                            // 1 = the channel input (CTI_CHIN) from the CTM is
                                            // routed to the CTI_TRIGOUT output.
                                            // There is one bit for each of the four channels. For
                                            // example in register CTI_OUTEN0, enabling
                                            // bit 0 enables CTI_CHIN[0] to cause a trigger event
                                            // on the CTI_TRIGOUT[0] output.

};

//------------------------------------------------------------------------------
//
// Register (CTI) OUTEN6
//
// Name                    CTI_OUTEN6_REG
// Relative Address        0x000000B8
// Absolute Address        debug_cpu_cti0: 0xF88980B8
//                         debug_cpu_cti1: 0xF88990B8
//                         debug_cti_etb_tpiu: 0xF88020B8
//                         debug_cti_ftm: 0xF88090B8
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Channel to Trigger Enable 6 Register
//
// Register CTI_OUTEN6_REG Details
//
enum TCTI_OUTEN6_REG
{
                                            // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_OUTEN6_VAL_MASK =  0x0000000FUL,    // Changing the value of this bit from a 0 to a 1
    CTI_OUTEN6_VAL_BPOS =  0UL              // enables a channel event for the corresponding
                                            // channel to generate an CTI_TRIGOUT output:
                                            // 0 = the channel input (CTI_CHIN) from the CTM is
                                            // not routed to the CTI_TRIGOUT output
                                            // 1 = the channel input (CTI_CHIN) from the CTM is
                                            // routed to the CTI_TRIGOUT output.
                                            // There is one bit for each of the four channels. For
                                            // example in register CTI_OUTEN0, enabling
                                            // bit 0 enables CTI_CHIN[0] to cause a trigger event
                                            // on the CTI_TRIGOUT[0] output.

};

//------------------------------------------------------------------------------
//
// Register (CTI) OUTEN7
//
// Name                    CTI_OUTEN7_REG
// Relative Address        0x000000BC
// Absolute Address        debug_cpu_cti0: 0xF88980BC
//                         debug_cpu_cti1: 0xF88990BC
//                         debug_cti_etb_tpiu: 0xF88020BC
//                         debug_cti_ftm: 0xF88090BC
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             CTI Channel to Trigger Enable 7 Register
//
// Register CTI_OUTEN7_REG Details
//
enum TCTI_OUTEN7_REG
{
                                            // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_OUTEN7_VAL_MASK =  0x0000000FUL,    // Changing the value of this bit from a 0 to a 1
    CTI_OUTEN7_VAL_BPOS =  0UL              // enables a channel event for the corresponding
                                            // channel to generate an CTI_TRIGOUT output:
                                            // 0 = the channel input (CTI_CHIN) from the CTM is
                                            // not routed to the CTI_TRIGOUT output
                                            // 1 = the channel input (CTI_CHIN) from the CTM is
                                            // routed to the CTI_TRIGOUT output.
                                            // There is one bit for each of the four channels. For
                                            // example in register CTI_OUTEN0, enabling
                                            // bit 0 enables CTI_CHIN[0] to cause a trigger event
                                            // on the CTI_TRIGOUT[0] output.

};

//------------------------------------------------------------------------------
//
// Register (CTI) TRIGINSTATUS
//
// Name                    CTI_TRIGINSTATUS_REG
// Relative Address        0x00000130
// Absolute Address        debug_cpu_cti0: 0xF8898130
//                         debug_cpu_cti1: 0xF8899130
//                         debug_cti_etb_tpiu: 0xF8802130
//                         debug_cti_ftm: 0xF8809130
// Width                   8 bits
// Access Type             ro
// Reset Value             x
// Description             CTI Trigger In Status Register
//
// Register CTI_TRIGINSTATUS_REG Details
//
enum TCTI_TRIGINSTATUS_REG
{
                                              // Properties: Bits: 7:0, Type: ro, Reset Value: x
    CTI_TRIGINSTATUS_MASK =  0x000000FFUL,    // Shows the status of the CTI_TRIGIN inputs:
    CTI_TRIGINSTATUS_BPOS =  0UL              // 1 = CTI_TRIGIN is active
                                              // 0 = CTI_TRIGIN is inactive.
                                              // Because the register provides a view of the raw
                                              // CTI_TRIGIN inputs, the reset value is
                                              // unknown. There is one bit of the register for each
                                              // trigger input.

};

//------------------------------------------------------------------------------
//
// Register (CTI) TRIGOUTSTATUS
//
// Name                    CTI_TRIGOUTSTATUS_REG
// Relative Address        0x00000134
// Absolute Address        debug_cpu_cti0: 0xF8898134
//                         debug_cpu_cti1: 0xF8899134
//                         debug_cti_etb_tpiu: 0xF8802134
//                         debug_cti_ftm: 0xF8809134
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             CTI Trigger Out Status Register
//
// Register CTI_TRIGOUTSTATUS_REG Details
//
enum TCTI_TRIGOUTSTATUS_REG
{
                                               // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    CTI_TRIGOUTSTATUS_MASK =  0x000000FFUL,    // Shows the status of the CTI_TRIGOUT outputs.
    CTI_TRIGOUTSTATUS_BPOS =  0UL              // 1 = CTI_TRIGOUT is active
                                               // 0 = CTI_TRIGOUT is inactive (reset).
                                               // There is one bit of the register for each trigger
                                               // output.

};

//------------------------------------------------------------------------------
//
// Register (CTI) CHINSTATUS
//
// Name                    CTI_CHINSTATUS_REG
// Relative Address        0x00000138
// Absolute Address        debug_cpu_cti0: 0xF8898138
//                         debug_cpu_cti1: 0xF8899138
//                         debug_cti_etb_tpiu: 0xF8802138
//                         debug_cti_ftm: 0xF8809138
// Width                   4 bits
// Access Type             ro
// Reset Value             x
// Description             CTI Channel In Status Register
//
// Register CTI_CHINSTATUS_REG Details
//
enum TCTI_CHINSTATUS_REG
{
                                            // Properties: Bits: 3:0, Type: ro, Reset Value: x
    CTI_CHINSTATUS_MASK =  0x0000000FUL,    // Shows the status of the CTI_CHIN inputs:
    CTI_CHINSTATUS_BPOS =  0UL              // 1 = CTI_CHIN is active
                                            // 0 = CTI_CHIN is inactive.
                                            // Because the register provides a view of the raw
                                            // CTI_CHIN inputs from the CTM, the reset
                                            // value is unknown. There is one bit of the register
                                            // for each channel input.

};

//------------------------------------------------------------------------------
//
// Register (CTI) CHOUTSTATUS
//
// Name                    CTI_CHOUTSTATUS_REG
// Relative Address        0x0000013C
// Absolute Address        debug_cpu_cti0: 0xF889813C
//                         debug_cpu_cti1: 0xF889913C
//                         debug_cti_etb_tpiu: 0xF880213C
//                         debug_cti_ftm: 0xF880913C
// Width                   4 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             CTI Channel Out Status Register
//
// Register CTI_CHOUTSTATUS_REG Details
//
enum TCTI_CHOUTSTATUS_REG
{
                                             // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
    CTI_CHOUTSTATUS_MASK =  0x0000000FUL,    // Shows the status of the CTI_CHOUT outputs.
    CTI_CHOUTSTATUS_BPOS =  0UL              // 1 = CTI_CHOUT is active
                                             // 0 = CTI_CHOUT is inactive (reset).
                                             // There is one bit of the register for each channel
                                             // output.

};

//------------------------------------------------------------------------------
//
// Register (CTI) GATE
//
// Name                    CTI_GATE_REG
// Relative Address        0x00000140
// Absolute Address        debug_cpu_cti0: 0xF8898140
//                         debug_cpu_cti1: 0xF8899140
//                         debug_cti_etb_tpiu: 0xF8802140
//                         debug_cti_ftm: 0xF8809140
// Width                   4 bits
// Access Type             rw
// Reset Value             0x0000000F
// Description             Enable CTI Channel Gate Register
//
// Register CTI_GATE_REG Details
//
enum TCTI_GATE_REG
{
                                              // Properties: Bit: 3, Type: rw, Reset Value: 0x1
    CTI_GATE_GATEEN3_MASK =  0x00000008UL,    // Enable CTI_CHOUT3.
    CTI_GATE_GATEEN3_BPOS =  3UL,             // 

                                              // Properties: Bit: 2, Type: rw, Reset Value: 0x1
    CTI_GATE_GATEEN2_MASK =  0x00000004UL,    // Enable CTI_CHOUT2.
    CTI_GATE_GATEEN2_BPOS =  2UL,             // 

                                              // Properties: Bit: 1, Type: rw, Reset Value: 0x1
    CTI_GATE_GATEEN1_MASK =  0x00000002UL,    // Enable CTI_CHOUT1.
    CTI_GATE_GATEEN1_BPOS =  1UL,             // 

                                              // Properties: Bit: 0, Type: rw, Reset Value: 0x1
    CTI_GATE_GATEEN0_MASK =  0x00000001UL,    // Enable CTI_CHOUT0.
    CTI_GATE_GATEEN0_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) ASICCTL
//
// Name                    CTI_ASICCTL_REG
// Relative Address        0x00000144
// Absolute Address        debug_cpu_cti0: 0xF8898144
//                         debug_cpu_cti1: 0xF8899144
//                         debug_cti_etb_tpiu: 0xF8802144
//                         debug_cti_ftm: 0xF8809144
// Width                   8 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             External Multiplexor Control Register
//
// Register CTI_ASICCTL_REG Details
//
enum TCTI_ASICCTL_REG
{
                                             // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
    CTI_ASICCTL_VAL_MASK =  0x000000FFUL,    // Implementation defined ASIC control, value
    CTI_ASICCTL_VAL_BPOS =  0UL              // written to the register is output on ASICCTL[7:0].

};

//------------------------------------------------------------------------------
//
// Register (CTI) CTI_ITCHINACK
//
// Name                    CTI_ITCHINACK_REG
// Relative Address        0x00000EDC
// Absolute Address        debug_cpu_cti0: 0xF8898EDC
//                         debug_cpu_cti1: 0xF8899EDC
//                         debug_cti_etb_tpiu: 0xF8802EDC
//                         debug_cti_ftm: 0xF8809EDC
// Width                   4 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             ITCHINACK Register
//
// Register CTI_ITCHINACK_REG Details
//
enum TCTI_ITCHINACK_REG
{
                                         // Properties: Bits: 3:0, Type: wo, Reset Value: 0x0
    CTI_CHINACK_MASK =  0x0000000FUL,    // Set the value of the CTCHINACK outputs
    CTI_CHINACK_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) ITTRIGINACK
//
// Name                    CTI_ITTRIGINACK_REG
// Relative Address        0x00000EE0
// Absolute Address        debug_cpu_cti0: 0xF8898EE0
//                         debug_cpu_cti1: 0xF8899EE0
//                         debug_cti_etb_tpiu: 0xF8802EE0
//                         debug_cti_ftm: 0xF8809EE0
// Width                   8 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             ITTRIGINACK Register
//
// Register CTI_ITTRIGINACK_REG Details
//
enum TCTI_ITTRIGINACK_REG
{
                                                 // Properties: Bits: 7:0, Type: wo, Reset Value: 0x0
    CTI_ITTRIGINACK_VAL_MASK =  0x000000FFUL,    // Set the value of the CTTRIGINACK outputs
    CTI_ITTRIGINACK_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) ITCHOUT
//
// Name                    CTI_ITCHOUT_REG
// Relative Address        0x00000EE4
// Absolute Address        debug_cpu_cti0: 0xF8898EE4
//                         debug_cpu_cti1: 0xF8899EE4
//                         debug_cti_etb_tpiu: 0xF8802EE4
//                         debug_cti_ftm: 0xF8809EE4
// Width                   4 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             ITCHOUT Register
//
// Register CTI_ITCHOUT_REG Details
//
enum TCTI_ITCHOUT_REG
{
                                             // Properties: Bits: 3:0, Type: wo, Reset Value: 0x0
    CTI_ITCHOUT_VAL_MASK =  0x0000000FUL,    // Set the value of the CTCHOUT outputs
    CTI_ITCHOUT_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) ITTRIGOUT
//
// Name                    CTI_ITTRIGOUT_REG
// Relative Address        0x00000EE8
// Absolute Address        debug_cpu_cti0: 0xF8898EE8
//                         debug_cpu_cti1: 0xF8899EE8
//                         debug_cti_etb_tpiu: 0xF8802EE8
//                         debug_cti_ftm: 0xF8809EE8
// Width                   8 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             ITTRIGOUT Register
//
// Register CTI_ITTRIGOUT_REG Details
//
enum TCTI_ITTRIGOUT_REG
{
                                               // Properties: Bits: 7:0, Type: wo, Reset Value: 0x0
    CTI_ITTRIGOUT_VAL_MASK =  0x000000FFUL,    // Set the value of the CTTRIGOUT outputs
    CTI_ITTRIGOUT_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) ITCHOUTACK
//
// Name                    CTI_ITCHOUTACK_REG
// Relative Address        0x00000EEC
// Absolute Address        debug_cpu_cti0: 0xF8898EEC
//                         debug_cpu_cti1: 0xF8899EEC
//                         debug_cti_etb_tpiu: 0xF8802EEC
//                         debug_cti_ftm: 0xF8809EEC
// Width                   4 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ITCHOUTACK Register
//
// Register CTI_ITCHOUTACK_REG Details
//
enum TCTI_ITCHOUTACK_REG
{
                                                // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
    CTI_ITCHOUTACK_VAL_MASK =  0x0000000FUL,    // Read the values of the CTCHOUTACK inputs
    CTI_ITCHOUTACK_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) ITTRIGOUTACK
//
// Name                    CTI_ITTRIGOUTACK_REG
// Relative Address        0x00000EF0
// Absolute Address        debug_cpu_cti0: 0xF8898EF0
//                         debug_cpu_cti1: 0xF8899EF0
//                         debug_cti_etb_tpiu: 0xF8802EF0
//                         debug_cti_ftm: 0xF8809EF0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ITTRIGOUTACK Register
//
// Register CTI_ITTRIGOUTACK_REG Details
//
enum TCTI_ITTRIGOUTACK_REG
{
                                                  // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    CTI_ITTRIGOUTACK_VAL_MASK =  0x000000FFUL,    // Read the values of the CTTRIGOUTACK inputs
    CTI_ITTRIGOUTACK_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) ITCHIN
//
// Name                    CTI_ITCHIN_REG
// Relative Address        0x00000EF4
// Absolute Address        debug_cpu_cti0: 0xF8898EF4
//                         debug_cpu_cti1: 0xF8899EF4
//                         debug_cti_etb_tpiu: 0xF8802EF4
//                         debug_cti_ftm: 0xF8809EF4
// Width                   4 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ITCHIN Register
//
// Register CTI_ITCHIN_REG Details
//
enum TCTI_ITCHIN_REG
{
                                            // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
    CTI_ITCHIN_VAL_MASK =  0x0000000FUL,    // Read the values of the CTCHIN inputs
    CTI_ITCHIN_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) CTI_ITTRIGIN
//
// Name                    CTI_ITTRIGIN_REG
// Relative Address        0x00000EF8
// Absolute Address        debug_cpu_cti0: 0xF8898EF8
//                         debug_cpu_cti1: 0xF8899EF8
//                         debug_cti_etb_tpiu: 0xF8802EF8
//                         debug_cti_ftm: 0xF8809EF8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             ITTRIGIN Register
//
// Register CTI_ITTRIGIN_REG Details
//
enum TCTI_ITTRIGIN_REG
{
                                        // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    CTI_TRIGIN_MASK =  0x000000FFUL,    // Read the values of the CTTRIGIN inputs
    CTI_TRIGIN_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) ITCTRL
//
// Name                    CTI_ITCTRL_REG
// Relative Address        0x00000F00
// Absolute Address        debug_cpu_cti0: 0xF8898F00
//                         debug_cpu_cti1: 0xF8899F00
//                         debug_cti_etb_tpiu: 0xF8802F00
//                         debug_cti_ftm: 0xF8809F00
// Width                   1 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             IT Control Register
//
// Register CTI_ITCTRL_REG Details
//
enum TCTI_ITCTRL_REG
{
                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x0
    CTI_ITCTRL_VAL_MASK =  0x00000001UL,    // Enable IT Registers
    CTI_ITCTRL_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) CTSR
//
// Name                    CTI_CTSR_REG
// Relative Address        0x00000FA0
// Absolute Address        debug_cpu_cti0: 0xF8898FA0
//                         debug_cpu_cti1: 0xF8899FA0
//                         debug_cti_etb_tpiu: 0xF8802FA0
//                         debug_cti_ftm: 0xF8809FA0
// Width                   4 bits
// Access Type             rw
// Reset Value             0x0000000F
// Description             Claim Tag Set Register
//
// Register CTI_CTSR_REG Details
//
enum TCTI_CTSR_REG
{
                                          // Properties: Bits: 3:0, Type: rw, Reset Value: 0xF
    CTI_CTSR_SET_MASK =  0x0000000FUL,    // The claim tag register is used for any
    CTI_CTSR_SET_BPOS =  0UL              // interrogating tools to determine if the device is
                                          // being programmed or has been programmed.
                                          // Read:
                                          // 1= Claim tag is implemented, 0 = Claim tag is not
                                          // implemented
                                          // Write:
                                          // 1= Set claim tag bit, 0= No effect

};

//------------------------------------------------------------------------------
//
// Register (CTI) CTCR
//
// Name                    CTI_CTCR_REG
// Relative Address        0x00000FA4
// Absolute Address        debug_cpu_cti0: 0xF8898FA4
//                         debug_cpu_cti1: 0xF8899FA4
//                         debug_cti_etb_tpiu: 0xF8802FA4
//                         debug_cti_ftm: 0xF8809FA4
// Width                   4 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Claim Tag Clear Register
//
// Register CTI_CTCR_REG Details
//
enum TCTI_CTCR_REG
{
                                            // Properties: Bits: 3:0, Type: rw, Reset Value: 0x0
    CTI_CTCR_CLEAR_MASK =  0x0000000FUL,    // The claim tag register is used for any
    CTI_CTCR_CLEAR_BPOS =  0UL              // interrogating tools to determine if the device is
                                            // being programmed or has been programmed.
                                            // Read: Current value of claim tag.
                                            // Write: 1= Clear claim tag bit, 0= No effect

};

//------------------------------------------------------------------------------
//
// Register (CTI) LAR
//
// Name                    CTI_LAR_REG
// Relative Address        0x00000FB0
// Absolute Address        debug_cpu_cti0: 0xF8898FB0
//                         debug_cpu_cti1: 0xF8899FB0
//                         debug_cti_etb_tpiu: 0xF8802FB0
//                         debug_cti_ftm: 0xF8809FB0
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Lock Access Register
//
// Register CTI_LAR_REG Details
//
enum TCTI_LAR_REG
{
                                         // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
    CTI_LAR_KEY_MASK =  0xFFFFFFFFUL,    // Write Access Code.
    CTI_LAR_KEY_BPOS =  0UL              // Write behavior depends on PADDRDBG31 pin:
                                         // - PADDRDBG31=0 (lower 2GB):
                                         // After reset (via PRESETDBGn), CTI is locked, i.e.,
                                         // writes to all other registers using lower 2GB
                                         // addresses are ignored.
                                         // To unlock, 0xC5ACCE55 must be written this
                                         // register.
                                         // After the required registers are written, to lock
                                         // again, write a value other than 0xC5ACCE55 to
                                         // this register.
                                         // - PADDRDBG31=1 (upper 2GB):
                                         // CTI is unlocked when upper 2GB addresses are
                                         // used to write to all the registers.
                                         // However, write to this register is ignored using a
                                         // upper 2GB address!
                                         // Note: read from this register always returns 0,
                                         // regardless of PADDRDBG31.

};

//------------------------------------------------------------------------------
//
// Register (CTI) LSR
//
// Name                    CTI_LSR_REG
// Relative Address        0x00000FB4
// Absolute Address        debug_cpu_cti0: 0xF8898FB4
//                         debug_cpu_cti1: 0xF8899FB4
//                         debug_cti_etb_tpiu: 0xF8802FB4
//                         debug_cti_ftm: 0xF8809FB4
// Width                   3 bits
// Access Type             ro
// Reset Value             0x00000003
// Description             Lock Status Register
//
// Register CTI_LSR_REG Details
//
enum TCTI_LSR_REG
{
                                            // Properties: Bit: 2, Type: ro, Reset Value: 0x0
    CTI_LSR_8BIT_MASK   =  0x00000004UL,    // Set to 0 since CTI implements a 32-bit lock access
    CTI_LSR_8BIT_BPOS   =  2UL,             // register

                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x1
    CTI_LSR_STATUS_MASK =  0x00000002UL,    // Read behavior depends on PADDRDBG31 pin:
    CTI_LSR_STATUS_BPOS =  1UL,             // - PADDRDBG31=0 (lower 2GB):
                                            // When a lower 2GB address is used to read this
                                            // register, this bit indicates whether CTI is in locked
                                            // state
                                            // (1= locked, 0= unlocked).
                                            // - PADDRDBG31=1 (upper 2GB):
                                            // always returns 0.

                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x1
    CTI_LSR_IMP_MASK    =  0x00000001UL,    // Read behavior depends on PADDRDBG31 pin:
    CTI_LSR_IMP_BPOS    =  0UL              // - PADDRDBG31=0 (lower 2GB):
                                            // always returns 1, meaning lock mechanism are
                                            // implemented.
                                            // - PADDRDBG31=1 (upper 2GB):
                                            // always returns 0, meaning lock mechanism is
                                            // NOT implemented.

};

//------------------------------------------------------------------------------
//
// Register (CTI) ASR
//
// Name                     CTI_ASR_REG
// Relative Address         0x00000FB8
// Absolute Address         debug_cpu_cti0: 0xF8898FB8
//                          debug_cpu_cti1: 0xF8899FB8
//                          debug_cti_etb_tpiu: 0xF8802FB8
//                          debug_cti_ftm: 0xF8809FB8
// Width                    4 bits
// Access Type              ro
// Reset Value              x
// Description              Authentication Status Register
//
// Register CTI_ASR_REG Details
//
enum TCTI_ASR_REG
{
                                               // Properties: Bit: 3, Type: ro, Reset Value: x
    CTI_ASR_NIDEN_MASK     =  0x00000008UL,    // Current value of noninvasive debug enable
    CTI_ASR_NIDEN_BPOS     =  3UL,             // signals

                                               // Properties: Bit: 2, Type: ro, Reset Value: 0x1
    CTI_ASR_NIDEN_CTL_MASK =  0x00000004UL,    // Non-invasive debug controlled
    CTI_ASR_NIDEN_CTL_BPOS =  2UL,             // 

                                               // Properties: Bit: 1, Type: ro, Reset Value: x
    CTI_ASR_IDEN_MASK      =  0x00000002UL,    // Current value of invasive debug enable signals
    CTI_ASR_IDEN_BPOS      =  1UL,             // 

                                               // Properties: Bit: 0, Type: ro, Reset Value: 0x1
    CTI_ASR_IDEN_CTL_MASK  =  0x00000001UL,    // Invasive debug controlled
    CTI_ASR_IDEN_CTL_BPOS  =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) DEVID
//
// Name                    CTI_DEVID_REG
// Relative Address        0x00000FC8
// Absolute Address        debug_cpu_cti0: 0xF8898FC8
//                         debug_cpu_cti1: 0xF8899FC8
//                         debug_cti_etb_tpiu: 0xF8802FC8
//                         debug_cti_ftm: 0xF8809FC8
// Width                   20 bits
// Access Type             ro
// Reset Value             0x00040800
// Description             Device ID
//
// Register CTI_DEVID_REG Details
//
enum TCTI_DEVID_REG
{
                                                // Properties: Bits: 19:16, Type: ro, Reset Value: 0x4
    CTI_DEVID_NUM_CHAN_MASK =  0x000F0000UL,    // Number of channels available
    CTI_DEVID_NUM_CHAN_BPOS =  16UL,            // 

                                                // Properties: Bits: 15:8, Type: ro, Reset Value: 0x8
    CTI_DEVID_NUM_TRIG_MASK =  0x0000FF00UL,    // Number of triggers available
    CTI_DEVID_NUM_TRIG_BPOS =  8UL,             // 

// RESERVED                                        Properties: Bits: 7:5, Type: ro, Reset Value: 0x0

                                                // Properties: Bits: 4:0, Type: ro, Reset Value: 0x0
    CTI_DEVID_EXT_MUX_MASK  =  0x0000001FUL,    // no external muxing
    CTI_DEVID_EXT_MUX_BPOS  =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) DTIR
//
// Name                    CTI_DTIR_REG
// Relative Address        0x00000FCC
// Absolute Address        debug_cpu_cti0: 0xF8898FCC
//                         debug_cpu_cti1: 0xF8899FCC
//                         debug_cti_etb_tpiu: 0xF8802FCC
//                         debug_cti_ftm: 0xF8809FCC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000014
// Description             Device Type Identifier Register
//
// Register CTI_DTIR_REG Details
//
enum TCTI_DTIR_REG
{
                                          // Properties: Bits: 7:0, Type: ro, Reset Value: 0x14
    CTI_DTIR_VAL_MASK =  0x000000FFUL,    // major type is a debug control logic component,
    CTI_DTIR_VAL_BPOS =  0UL              // sub-type is cross trigger

};

//------------------------------------------------------------------------------
//
// Register (CTI) PERIPHID4
//
// Name                    CTI_PERIPHID4_REG
// Relative Address        0x00000FD0
// Absolute Address        debug_cpu_cti0: 0xF8898FD0
//                         debug_cpu_cti1: 0xF8899FD0
//                         debug_cti_etb_tpiu: 0xF8802FD0
//                         debug_cti_ftm: 0xF8809FD0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000004
// Description             Peripheral ID4
//
// Register CTI_PERIPHID4_REG Details
//
enum TCTI_PERIPHID4_REG
{
                                                     // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
    CTI_PERIPHID4_4KB_COUNT_MASK =  0x000000F0UL,    // 4KB Count, set to 0
    CTI_PERIPHID4_4KB_COUNT_BPOS =  4UL,             // 

                                                     // Properties: Bits: 3:0, Type: ro, Reset Value: 0x4
    CTI_PERIPHID4_JEP106ID_MASK  =  0x0000000FUL,    // JEP106 continuation code
    CTI_PERIPHID4_JEP106ID_BPOS  =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) PERIPHID5
//
// Name                    CTI_PERIPHID5_REG
// Relative Address        0x00000FD4
// Absolute Address        debug_cpu_cti0: 0xF8898FD4
//                         debug_cpu_cti1: 0xF8899FD4
//                         debug_cti_etb_tpiu: 0xF8802FD4
//                         debug_cti_ftm: 0xF8809FD4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID5
//
// Register CTI_PERIPHID5_REG Details
//
enum TCTI_PERIPHID5_REG
{
                                               // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    CTI_PERIPHID5_VAL_MASK =  0x000000FFUL,    // reserved
    CTI_PERIPHID5_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) PERIPHID6
//
// Name                    CTI_PERIPHID6_REG
// Relative Address        0x00000FD8
// Absolute Address        debug_cpu_cti0: 0xF8898FD8
//                         debug_cpu_cti1: 0xF8899FD8
//                         debug_cti_etb_tpiu: 0xF8802FD8
//                         debug_cti_ftm: 0xF8809FD8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID6
//
// Register CTI_PERIPHID6_REG Details
//
enum TCTI_PERIPHID6_REG
{
                                               // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    CTI_PERIPHID6_VAL_MASK =  0x000000FFUL,    // reserved
    CTI_PERIPHID6_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) PERIPHID7
//
// Name                    CTI_PERIPHID7_REG
// Relative Address        0x00000FDC
// Absolute Address        debug_cpu_cti0: 0xF8898FDC
//                         debug_cpu_cti1: 0xF8899FDC
//                         debug_cti_etb_tpiu: 0xF8802FDC
//                         debug_cti_ftm: 0xF8809FDC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID7
//
// Register CTI_PERIPHID7_REG Details
//
enum TCTI_PERIPHID7_REG
{
                                               // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
    CTI_PERIPHID7_VAL_MASK =  0x000000FFUL,    // reserved
    CTI_PERIPHID7_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) PERIPHID0
//
// Name                    CTI_PERIPHID0_REG
// Relative Address        0x00000FE0
// Absolute Address        debug_cpu_cti0: 0xF8898FE0
//                         debug_cpu_cti1: 0xF8899FE0
//                         debug_cti_etb_tpiu: 0xF8802FE0
//                         debug_cti_ftm: 0xF8809FE0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000006
// Description             Peripheral ID0
//
// Register CTI_PERIPHID0_REG Details
//
enum TCTI_PERIPHID0_REG
{
                                               // Properties: Bits: 7:0, Type: ro, Reset Value: 0x6
    CTI_PERIPHID0_VAL_MASK =  0x000000FFUL,    // PartNumber0
    CTI_PERIPHID0_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) PERIPHID1
//
// Name                    CTI_PERIPHID1_REG
// Relative Address        0x00000FE4
// Absolute Address        debug_cpu_cti0: 0xF8898FE4
//                         debug_cpu_cti1: 0xF8899FE4
//                         debug_cti_etb_tpiu: 0xF8802FE4
//                         debug_cti_ftm: 0xF8809FE4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B9
// Description             Peripheral ID1
//
// Register CTI_PERIPHID1_REG Details
//
enum TCTI_PERIPHID1_REG
{
                                                        // Properties: Bits: 7:4, Type: ro, Reset Value: 0xB
    CTI_PERIPHID1_JEP106ID_MASK     =  0x000000F0UL,    // JEP106 Identity Code [3:0]
    CTI_PERIPHID1_JEP106ID_BPOS     =  4UL,             // 

                                                        // Properties: Bits: 3:0, Type: ro, Reset Value: 0x9
    CTI_PERIPHID1_PART_NUMBER1_MASK =  0x0000000FUL,    // PartNumber1
    CTI_PERIPHID1_PART_NUMBER1_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) CTI_PERIPHID2
//
// Name                    CTI_PERIPHID2_REG
// Relative Address        0x00000FE8
// Absolute Address        debug_cpu_cti0: 0xF8898FE8
//                         debug_cpu_cti1: 0xF8899FE8
//                         debug_cti_etb_tpiu: 0xF8802FE8
//                         debug_cti_ftm: 0xF8809FE8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000002B
// Description             Peripheral ID2
//
// Register CTI_PERIPHID2_REG Details
//
enum TCTI_PERIPHID2_REG
{
                                                        // Properties: Bits: 7:4, Type: ro, Reset Value: 0x2
    CTI_CTI_PERIPHID2_REV_NUM_MASK  =  0x000000F0UL,    // Revision number of Peripheral
    CTI_CTI_PERIPHID2_REV_NUM_BPOS  =  4UL,             // 

                                                        // Properties: Bit: 3, Type: ro, Reset Value: 0x1
    CTI_CTI_PERIPHID2_JEDEC_MASK    =  0x00000008UL,    // Indicates that a JEDEC assigned value is used
    CTI_CTI_PERIPHID2_JEDEC_BPOS    =  3UL,             // 

                                                        // Properties: Bits: 2:0, Type: ro, Reset Value: 0x3
    CTI_CTI_PERIPHID2_JEP106ID_MASK =  0x00000007UL,    // JEP106 Identity Code [6:4]
    CTI_CTI_PERIPHID2_JEP106ID_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) CTI_PERIPHID3
//
// Name                    CTI_PERIPHID3_REG
// Relative Address        0x00000FEC
// Absolute Address        debug_cpu_cti0: 0xF8898FEC
//                         debug_cpu_cti1: 0xF8899FEC
//                         debug_cti_etb_tpiu: 0xF8802FEC
//                         debug_cti_ftm: 0xF8809FEC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID3
//
// Register CTI_PERIPHID3_REG Details
//
enum TCTI_PERIPHID3_REG
{
                                                        // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
    CTI_CTI_PERIPHID3_REV_AND_MASK  =  0x000000F0UL,    // RevAnd, at top level
    CTI_CTI_PERIPHID3_REV_AND_BPOS  =  4UL,             // 

                                                        // Properties: Bits: 3:0, Type: ro, Reset Value: 0x0
    CTI_CTI_PERIPHID3_CUST_MOD_MASK =  0x0000000FUL,    // Customer Modified
    CTI_CTI_PERIPHID3_CUST_MOD_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) COMPID0
//
// Name                    CTI_COMPID0_REG
// Relative Address        0x00000FF0
// Absolute Address        debug_cpu_cti0: 0xF8898FF0
//                         debug_cpu_cti1: 0xF8899FF0
//                         debug_cti_etb_tpiu: 0xF8802FF0
//                         debug_cti_ftm: 0xF8809FF0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000000D
// Description             Component ID0
//
// Register CTI_COMPID0_REG Details
//
enum TCTI_COMPID0_REG
{
                                             // Properties: Bits: 7:0, Type: ro, Reset Value: 0xD
    CTI_COMPID0_VAL_MASK =  0x000000FFUL,    // Preamble
    CTI_COMPID0_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) COMPID1
//
// Name                    CTI_COMPID1_REG
// Relative Address        0x00000FF4
// Absolute Address        debug_cpu_cti0: 0xF8898FF4
//                         debug_cpu_cti1: 0xF8899FF4
//                         debug_cti_etb_tpiu: 0xF8802FF4
//                         debug_cti_ftm: 0xF8809FF4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000090
// Description             Component ID1
//
// Register CTI_COMPID1_REG Details
//
enum TCTI_COMPID1_REG
{
                                             // Properties: Bits: 7:0, Type: ro, Reset Value: 0x90
    CTI_COMPID1_VAL_MASK =  0x000000FFUL,    // Preamble
    CTI_COMPID1_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) COMPID2
//
// Name                    CTI_COMPID2_REG
// Relative Address        0x00000FF8
// Absolute Address        debug_cpu_cti0: 0xF8898FF8
//                         debug_cpu_cti1: 0xF8899FF8
//                         debug_cti_etb_tpiu: 0xF8802FF8
//                         debug_cti_ftm: 0xF8809FF8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000005
// Description             Component ID2
//
// Register CTI_COMPID2_REG Details
//
enum TCTI_COMPID2_REG
{
                                             // Properties: Bits: 7:0, Type: ro, Reset Value: 0x5
    CTI_COMPID2_VAL_MASK =  0x000000FFUL,    // Preamble
    CTI_COMPID2_VAL_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (CTI) COMPID3
//
// Name                    CTI_COMPID3_REG
// Relative Address        0x00000FFC
// Absolute Address        debug_cpu_cti0: 0xF8898FFC
//                         debug_cpu_cti1: 0xF8899FFC
//                         debug_cti_etb_tpiu: 0xF8802FFC
//                         debug_cti_ftm: 0xF8809FFC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B1
// Description             Component ID3
//
// Register CTI_COMPID3_REG Details
//
enum TCTI_COMPID3_REG
{
                                             // Properties: Bits: 7:0, Type: ro, Reset Value: 0xB1
    CTI_COMPID3_VAL_MASK =  0x000000FFUL,    // Preamble
    CTI_COMPID3_VAL_BPOS =  0UL              // 

};

#endif // PS7_CTI_H

