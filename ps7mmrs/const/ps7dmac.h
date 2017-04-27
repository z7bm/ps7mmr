//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_DMAC
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

#ifndef PS7_DMAC_H
#define PS7_DMAC_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    DMAC_ns MMRs
//
//              Name                        Address                       Width   Type     Reset Value   Description
const uintptr_t DMAC_DSR_REG_NS           = DMAC0_NS_ADDR + 0x00000000; //  32    mixed    0x00000000    DMA Manager Status
const uintptr_t DMAC_DPC_REG_NS           = DMAC0_NS_ADDR + 0x00000004; //  32    mixed    0x00000000    DMA Program Counter
const uintptr_t DMAC_INTEN_REG_NS         = DMAC0_NS_ADDR + 0x00000020; //  32    mixed    0x00000000    DMASEV Instruction Response Control
const uintptr_t DMAC_INT_EVENT_RIS_REG_NS = DMAC0_NS_ADDR + 0x00000024; //  32    mixed    0x00000000    Event Interrupt Raw Status
const uintptr_t DMAC_INTMIS_REG_NS        = DMAC0_NS_ADDR + 0x00000028; //  32    mixed    0x00000000    Interrupt Status
const uintptr_t DMAC_INTCLR_REG_NS        = DMAC0_NS_ADDR + 0x0000002C; //  32    mixed    0x00000000    Interrupt Clear
const uintptr_t DMAC_FSRD_REG_NS          = DMAC0_NS_ADDR + 0x00000030; //  32    mixed    0x00000000    Fault Status DMA Manager
const uintptr_t DMAC_FSRC_REG_NS          = DMAC0_NS_ADDR + 0x00000034; //  32    mixed    0x00000000    Fault Status DMA Channel
const uintptr_t DMAC_FTRD_REG_NS          = DMAC0_NS_ADDR + 0x00000038; //  32    mixed    0x00000000    Fault Type DMA Manager
const uintptr_t DMAC_FTR0_REG_NS          = DMAC0_NS_ADDR + 0x00000040; //  32    mixed    0x00000000    Default Type DMA Channel 0
const uintptr_t DMAC_FTR1_REG_NS          = DMAC0_NS_ADDR + 0x00000044; //  32    mixed    0x00000000    Default Type DMA Channel 1
const uintptr_t DMAC_FTR2_REG_NS          = DMAC0_NS_ADDR + 0x00000048; //  32    mixed    0x00000000    Default Type DMA Channel 2
const uintptr_t DMAC_FTR3_REG_NS          = DMAC0_NS_ADDR + 0x0000004C; //  32    mixed    0x00000000    Default Type DMA Channel 3
const uintptr_t DMAC_FTR4_REG_NS          = DMAC0_NS_ADDR + 0x00000050; //  32    mixed    0x00000000    Default Type DMA Channel 4
const uintptr_t DMAC_FTR5_REG_NS          = DMAC0_NS_ADDR + 0x00000054; //  32    mixed    0x00000000    Default Type DMA Channel 5
const uintptr_t DMAC_FTR6_REG_NS          = DMAC0_NS_ADDR + 0x00000058; //  32    mixed    0x00000000    Default Type DMA Channel 6
const uintptr_t DMAC_FTR7_REG_NS          = DMAC0_NS_ADDR + 0x0000005C; //  32    mixed    0x00000000    Default Type DMA Channel 7
const uintptr_t DMAC_CSR0_REG_NS          = DMAC0_NS_ADDR + 0x00000100; //  32    mixed    0x00000000    Channel Status DMA Channel 0
const uintptr_t DMAC_CPC0_REG_NS          = DMAC0_NS_ADDR + 0x00000104; //  32    mixed    0x00000000    Channel PC for DMA Channel 0
const uintptr_t DMAC_CSR1_REG_NS          = DMAC0_NS_ADDR + 0x00000108; //  32    mixed    0x00000000    Channel Status DMA Channel 1
const uintptr_t DMAC_CPC1_REG_NS          = DMAC0_NS_ADDR + 0x0000010C; //  32    mixed    0x00000000    Channel PC for DMA Channel 1
const uintptr_t DMAC_CSR2_REG_NS          = DMAC0_NS_ADDR + 0x00000110; //  32    mixed    0x00000000    Channel Status DMA Channel 2
const uintptr_t DMAC_CPC2_REG_NS          = DMAC0_NS_ADDR + 0x00000114; //  32    mixed    0x00000000    Channel PC for DMA Channel 2
const uintptr_t DMAC_CSR3_REG_NS          = DMAC0_NS_ADDR + 0x00000118; //  32    mixed    0x00000000    Channel Status DMA Channel 3
const uintptr_t DMAC_CPC3_REG_NS          = DMAC0_NS_ADDR + 0x0000011C; //  32    mixed    0x00000000    Channel PC for DMA Channel 3
const uintptr_t DMAC_CSR4_REG_NS          = DMAC0_NS_ADDR + 0x00000120; //  32    mixed    0x00000000    Channel Status DMA Channel 4
const uintptr_t DMAC_CPC4_REG_NS          = DMAC0_NS_ADDR + 0x00000124; //  32    mixed    0x00000000    Channel PC for DMA Channel 4
const uintptr_t DMAC_CSR5_REG_NS          = DMAC0_NS_ADDR + 0x00000128; //  32    mixed    0x00000000    Channel Status DMA Channel 5
const uintptr_t DMAC_CPC5_REG_NS          = DMAC0_NS_ADDR + 0x0000012C; //  32    mixed    0x00000000    Channel PC for DMA Channel 5
const uintptr_t DMAC_CSR6_REG_NS          = DMAC0_NS_ADDR + 0x00000130; //  32    mixed    0x00000000    Channel Status DMA Channel 6
const uintptr_t DMAC_CPC6_REG_NS          = DMAC0_NS_ADDR + 0x00000134; //  32    mixed    0x00000000    Channel PC for DMA Channel 6
const uintptr_t DMAC_CSR7_REG_NS          = DMAC0_NS_ADDR + 0x00000138; //  32    mixed    0x00000000    Channel Status DMA Channel 7
const uintptr_t DMAC_CPC7_REG_NS          = DMAC0_NS_ADDR + 0x0000013C; //  32    mixed    0x00000000    Channel PC for DMA Channel 7
const uintptr_t DMAC_SAR0_REG_NS          = DMAC0_NS_ADDR + 0x00000400; //  32    mixed    0x00000000    Source Address DMA Channel 0
const uintptr_t DMAC_DAR0_REG_NS          = DMAC0_NS_ADDR + 0x00000404; //  32    mixed    0x00000000    Destination Addr DMA Channel 0
const uintptr_t DMAC_CCR0_REG_NS          = DMAC0_NS_ADDR + 0x00000408; //  32    mixed    0x00000000    Channel Control DMA Channel 0
const uintptr_t DMAC_LC0_0_REG_NS         = DMAC0_NS_ADDR + 0x0000040C; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 0
const uintptr_t DMAC_LC1_0_REG_NS         = DMAC0_NS_ADDR + 0x00000410; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 0
const uintptr_t DMAC_SAR1_REG_NS          = DMAC0_NS_ADDR + 0x00000420; //  32    mixed    0x00000000    Source address DMA Channel 1
const uintptr_t DMAC_DAR1_REG_NS          = DMAC0_NS_ADDR + 0x00000424; //  32    mixed    0x00000000    Destination Addr DMA Channel 1
const uintptr_t DMAC_CCR1_REG_NS          = DMAC0_NS_ADDR + 0x00000428; //  32    mixed    0x00000000    Channel Control DMA Channel 1
const uintptr_t DMAC_LC0_1_REG_NS         = DMAC0_NS_ADDR + 0x0000042C; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 1
const uintptr_t DMAC_LC1_1_REG_NS         = DMAC0_NS_ADDR + 0x00000430; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 1
const uintptr_t DMAC_SAR2_REG_NS          = DMAC0_NS_ADDR + 0x00000440; //  32    mixed    0x00000000    Source Address DMA Channel 2
const uintptr_t DMAC_DAR2_REG_NS          = DMAC0_NS_ADDR + 0x00000444; //  32    mixed    0x00000000    Destination Addr DMA Channel 2
const uintptr_t DMAC_CCR2_REG_NS          = DMAC0_NS_ADDR + 0x00000448; //  32    mixed    0x00000000    Channel Control DMA Channel 2
const uintptr_t DMAC_LC0_2_REG_NS         = DMAC0_NS_ADDR + 0x0000044C; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 2
const uintptr_t DMAC_LC1_2_REG_NS         = DMAC0_NS_ADDR + 0x00000450; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 2
const uintptr_t DMAC_SAR3_REG_NS          = DMAC0_NS_ADDR + 0x00000460; //  32    mixed    0x00000000    Source Address DMA Channel 3
const uintptr_t DMAC_DAR3_REG_NS          = DMAC0_NS_ADDR + 0x00000464; //  32    mixed    0x00000000    Destination Addr DMA Channel 3
const uintptr_t DMAC_CCR3_REG_NS          = DMAC0_NS_ADDR + 0x00000468; //  32    mixed    0x00000000    Channel Control DMA Channel 3
const uintptr_t DMAC_LC0_3_REG_NS         = DMAC0_NS_ADDR + 0x0000046C; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 3
const uintptr_t DMAC_LC1_3_REG_NS         = DMAC0_NS_ADDR + 0x00000470; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 3
const uintptr_t DMAC_SAR4_REG_NS          = DMAC0_NS_ADDR + 0x00000480; //  32    mixed    0x00000000    Source Address DMA Channel 4
const uintptr_t DMAC_DAR4_REG_NS          = DMAC0_NS_ADDR + 0x00000484; //  32    mixed    0x00000000    Destination Addr DMA Channel 4
const uintptr_t DMAC_CCR4_REG_NS          = DMAC0_NS_ADDR + 0x00000488; //  32    mixed    0x00000000    Channel Control DMA Channel 4
const uintptr_t DMAC_LC0_4_REG_NS         = DMAC0_NS_ADDR + 0x0000048C; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 4
const uintptr_t DMAC_LC1_4_REG_NS         = DMAC0_NS_ADDR + 0x00000490; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 4
const uintptr_t DMAC_SAR5_REG_NS          = DMAC0_NS_ADDR + 0x000004A0; //  32    mixed    0x00000000    Source Address DMA Channel 5
const uintptr_t DMAC_DAR5_REG_NS          = DMAC0_NS_ADDR + 0x000004A4; //  32    mixed    0x00000000    Destination Addr DMA Channel 5
const uintptr_t DMAC_CCR5_REG_NS          = DMAC0_NS_ADDR + 0x000004A8; //  32    mixed    0x00000000    Channel Control DMA Channel 5
const uintptr_t DMAC_LC0_5_REG_NS         = DMAC0_NS_ADDR + 0x000004AC; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 5
const uintptr_t DMAC_LC1_5_REG_NS         = DMAC0_NS_ADDR + 0x000004B0; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 5
const uintptr_t DMAC_SAR6_REG_NS          = DMAC0_NS_ADDR + 0x000004C0; //  32    mixed    0x00000000    Source Address DMA Channel 6
const uintptr_t DMAC_DAR6_REG_NS          = DMAC0_NS_ADDR + 0x000004C4; //  32    mixed    0x00000000    Destination Addr DMA Channel 6
const uintptr_t DMAC_CCR6_REG_NS          = DMAC0_NS_ADDR + 0x000004C8; //  32    mixed    0x00000000    Channel Control DMA Channel 6
const uintptr_t DMAC_LC0_6_REG_NS         = DMAC0_NS_ADDR + 0x000004CC; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 6
const uintptr_t DMAC_LC1_6_REG_NS         = DMAC0_NS_ADDR + 0x000004D0; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 6
const uintptr_t DMAC_SAR7_REG_NS          = DMAC0_NS_ADDR + 0x000004E0; //  32    mixed    0x00000000    Source Address DMA Channel 7
const uintptr_t DMAC_DAR7_REG_NS          = DMAC0_NS_ADDR + 0x000004E4; //  32    mixed    0x00000000    Destination Addr DMA Channel 7
const uintptr_t DMAC_CCR7_REG_NS          = DMAC0_NS_ADDR + 0x000004E8; //  32    mixed    0x00000000    Channel Control DMA Channel 7
const uintptr_t DMAC_LC0_7_REG_NS         = DMAC0_NS_ADDR + 0x000004EC; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 7
const uintptr_t DMAC_LC1_7_REG_NS         = DMAC0_NS_ADDR + 0x000004F0; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 7
const uintptr_t DMAC_DBGSTATUS_REG_NS     = DMAC0_NS_ADDR + 0x00000D00; //  32    mixed    0x00000000    DMA Manager Execution Status
const uintptr_t DMAC_DBGCMD_REG_NS        = DMAC0_NS_ADDR + 0x00000D04; //  32    mixed    0x00000000    DMA Manager Instr
const uintptr_t DMAC_DBGINST0_REG_NS      = DMAC0_NS_ADDR + 0x00000D08; //  32    mixed    0x00000000    DMA Manager Instruction Part A
const uintptr_t DMAC_DBGINST1_REG_NS      = DMAC0_NS_ADDR + 0x00000D0C; //  32    mixed    0x00000000    DMA Manager Instruction Part B
const uintptr_t DMAC_CR0_REG_NS           = DMAC0_NS_ADDR + 0x00000E00; //  32    mixed    0x00000000    Config Interfaces, PC, Mode
const uintptr_t DMAC_CR1_REG_NS           = DMAC0_NS_ADDR + 0x00000E04; //  32    mixed    0x00000000    Config
const uintptr_t DMAC_CR2_REG_NS           = DMAC0_NS_ADDR + 0x00000E08; //  32    mixed    0x00000000    Config
const uintptr_t DMAC_CR3_REG_NS           = DMAC0_NS_ADDR + 0x00000E0C; //  32    mixed    0x00000000    Config
const uintptr_t DMAC_CR4_REG_NS           = DMAC0_NS_ADDR + 0x00000E10; //  32    mixed    0x00000000    Config 4
const uintptr_t DMAC_CRD_REG_NS           = DMAC0_NS_ADDR + 0x00000E14; //  32    mixed    0x00000000    DMA configuration
const uintptr_t DMAC_WD_REG_NS            = DMAC0_NS_ADDR + 0x00000E80; //  32    mixed    0x00000000    Watchdog Timer
const uintptr_t DMAC_PERIPH_ID_0_REG_NS   = DMAC0_NS_ADDR + 0x00000FE0; //  32    mixed    0x00000000    Peripheral Idenfication register 0
const uintptr_t DMAC_PERIPH_ID_1_REG_NS   = DMAC0_NS_ADDR + 0x00000FE4; //  32    mixed    0x00000000    Peripheral Idenfication register 1
const uintptr_t DMAC_PERIPH_ID_2_REG_NS   = DMAC0_NS_ADDR + 0x00000FE8; //  32    mixed    0x00000000    Peripheral Idenfication register 2
const uintptr_t DMAC_PERIPH_ID_3_REG_NS   = DMAC0_NS_ADDR + 0x00000FEC; //  32    mixed    0x00000000    Peripheral Idenfication register 3
const uintptr_t DMAC_PCELL_ID_0_REG_NS    = DMAC0_NS_ADDR + 0x00000FF0; //  32    mixed    0x00000000    Compontent Idenfication register 0
const uintptr_t DMAC_PCELL_ID_1_REG_NS    = DMAC0_NS_ADDR + 0x00000FF4; //  32    mixed    0x00000000    Compontent Idenfication register 1
const uintptr_t DMAC_PCELL_ID_2_REG_NS    = DMAC0_NS_ADDR + 0x00000FF8; //  32    mixed    0x00000000    Compontent Idenfication register 2
const uintptr_t DMAC_PCELL_ID_3_REG_NS    = DMAC0_NS_ADDR + 0x00000FFC; //  32    mixed    0x00000000    Compontent Idenfication register 3
//------------------------------------------------------------------------------
//
//    DMAC_s MMRs
//
//              Name                       Address                      Width   Type     Reset Value   Description
const uintptr_t DMAC_DSR_REG_S           = DMAC0_S_ADDR + 0x00000000; //  32    mixed    0x00000000    DMA Manager Status
const uintptr_t DMAC_DPC_REG_S           = DMAC0_S_ADDR + 0x00000004; //  32    mixed    0x00000000    DMA Program Counter
const uintptr_t DMAC_INTEN_REG_S         = DMAC0_S_ADDR + 0x00000020; //  32    mixed    0x00000000    DMASEV Instruction Response Control
const uintptr_t DMAC_INT_EVENT_RIS_REG_S = DMAC0_S_ADDR + 0x00000024; //  32    mixed    0x00000000    Event Interrupt Raw Status
const uintptr_t DMAC_INTMIS_REG_S        = DMAC0_S_ADDR + 0x00000028; //  32    mixed    0x00000000    Interrupt Status
const uintptr_t DMAC_INTCLR_REG_S        = DMAC0_S_ADDR + 0x0000002C; //  32    mixed    0x00000000    Interrupt Clear
const uintptr_t DMAC_FSRD_REG_S          = DMAC0_S_ADDR + 0x00000030; //  32    mixed    0x00000000    Fault Status DMA Manager
const uintptr_t DMAC_FSRC_REG_S          = DMAC0_S_ADDR + 0x00000034; //  32    mixed    0x00000000    Fault Status DMA Channel
const uintptr_t DMAC_FTRD_REG_S          = DMAC0_S_ADDR + 0x00000038; //  32    mixed    0x00000000    Fault Type DMA Manager
const uintptr_t DMAC_FTR0_REG_S          = DMAC0_S_ADDR + 0x00000040; //  32    mixed    0x00000000    Default Type DMA Channel 0
const uintptr_t DMAC_FTR1_REG_S          = DMAC0_S_ADDR + 0x00000044; //  32    mixed    0x00000000    Default Type DMA Channel 1
const uintptr_t DMAC_FTR2_REG_S          = DMAC0_S_ADDR + 0x00000048; //  32    mixed    0x00000000    Default Type DMA Channel 2
const uintptr_t DMAC_FTR3_REG_S          = DMAC0_S_ADDR + 0x0000004C; //  32    mixed    0x00000000    Default Type DMA Channel 3
const uintptr_t DMAC_FTR4_REG_S          = DMAC0_S_ADDR + 0x00000050; //  32    mixed    0x00000000    Default Type DMA Channel 4
const uintptr_t DMAC_FTR5_REG_S          = DMAC0_S_ADDR + 0x00000054; //  32    mixed    0x00000000    Default Type DMA Channel 5
const uintptr_t DMAC_FTR6_REG_S          = DMAC0_S_ADDR + 0x00000058; //  32    mixed    0x00000000    Default Type DMA Channel 6
const uintptr_t DMAC_FTR7_REG_S          = DMAC0_S_ADDR + 0x0000005C; //  32    mixed    0x00000000    Default Type DMA Channel 7
const uintptr_t DMAC_CSR0_REG_S          = DMAC0_S_ADDR + 0x00000100; //  32    mixed    0x00000000    Channel Status DMA Channel 0
const uintptr_t DMAC_CPC0_REG_S          = DMAC0_S_ADDR + 0x00000104; //  32    mixed    0x00000000    Channel PC for DMA Channel 0
const uintptr_t DMAC_CSR1_REG_S          = DMAC0_S_ADDR + 0x00000108; //  32    mixed    0x00000000    Channel Status DMA Channel 1
const uintptr_t DMAC_CPC1_REG_S          = DMAC0_S_ADDR + 0x0000010C; //  32    mixed    0x00000000    Channel PC for DMA Channel 1
const uintptr_t DMAC_CSR2_REG_S          = DMAC0_S_ADDR + 0x00000110; //  32    mixed    0x00000000    Channel Status DMA Channel 2
const uintptr_t DMAC_CPC2_REG_S          = DMAC0_S_ADDR + 0x00000114; //  32    mixed    0x00000000    Channel PC for DMA Channel 2
const uintptr_t DMAC_CSR3_REG_S          = DMAC0_S_ADDR + 0x00000118; //  32    mixed    0x00000000    Channel Status DMA Channel 3
const uintptr_t DMAC_CPC3_REG_S          = DMAC0_S_ADDR + 0x0000011C; //  32    mixed    0x00000000    Channel PC for DMA Channel 3
const uintptr_t DMAC_CSR4_REG_S          = DMAC0_S_ADDR + 0x00000120; //  32    mixed    0x00000000    Channel Status DMA Channel 4
const uintptr_t DMAC_CPC4_REG_S          = DMAC0_S_ADDR + 0x00000124; //  32    mixed    0x00000000    Channel PC for DMA Channel 4
const uintptr_t DMAC_CSR5_REG_S          = DMAC0_S_ADDR + 0x00000128; //  32    mixed    0x00000000    Channel Status DMA Channel 5
const uintptr_t DMAC_CPC5_REG_S          = DMAC0_S_ADDR + 0x0000012C; //  32    mixed    0x00000000    Channel PC for DMA Channel 5
const uintptr_t DMAC_CSR6_REG_S          = DMAC0_S_ADDR + 0x00000130; //  32    mixed    0x00000000    Channel Status DMA Channel 6
const uintptr_t DMAC_CPC6_REG_S          = DMAC0_S_ADDR + 0x00000134; //  32    mixed    0x00000000    Channel PC for DMA Channel 6
const uintptr_t DMAC_CSR7_REG_S          = DMAC0_S_ADDR + 0x00000138; //  32    mixed    0x00000000    Channel Status DMA Channel 7
const uintptr_t DMAC_CPC7_REG_S          = DMAC0_S_ADDR + 0x0000013C; //  32    mixed    0x00000000    Channel PC for DMA Channel 7
const uintptr_t DMAC_SAR0_REG_S          = DMAC0_S_ADDR + 0x00000400; //  32    mixed    0x00000000    Source Address DMA Channel 0
const uintptr_t DMAC_DAR0_REG_S          = DMAC0_S_ADDR + 0x00000404; //  32    mixed    0x00000000    Destination Addr DMA Channel 0
const uintptr_t DMAC_CCR0_REG_S          = DMAC0_S_ADDR + 0x00000408; //  32    mixed    0x00800200    Channel Control DMA Channel 0
const uintptr_t DMAC_LC0_0_REG_S         = DMAC0_S_ADDR + 0x0000040C; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 0
const uintptr_t DMAC_LC1_0_REG_S         = DMAC0_S_ADDR + 0x00000410; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 0
const uintptr_t DMAC_SAR1_REG_S          = DMAC0_S_ADDR + 0x00000420; //  32    mixed    0x00000000    Source address DMA Channel 1
const uintptr_t DMAC_DAR1_REG_S          = DMAC0_S_ADDR + 0x00000424; //  32    mixed    0x00000000    Destination Addr DMA Channel 1
const uintptr_t DMAC_CCR1_REG_S          = DMAC0_S_ADDR + 0x00000428; //  32    mixed    0x00800200    Channel Control DMA Channel 1
const uintptr_t DMAC_LC0_1_REG_S         = DMAC0_S_ADDR + 0x0000042C; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 1
const uintptr_t DMAC_LC1_1_REG_S         = DMAC0_S_ADDR + 0x00000430; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 1
const uintptr_t DMAC_SAR2_REG_S          = DMAC0_S_ADDR + 0x00000440; //  32    mixed    0x00000000    Source Address DMA Channel 2
const uintptr_t DMAC_DAR2_REG_S          = DMAC0_S_ADDR + 0x00000444; //  32    mixed    0x00000000    Destination Addr DMA Channel 2
const uintptr_t DMAC_CCR2_REG_S          = DMAC0_S_ADDR + 0x00000448; //  32    mixed    0x00800200    Channel Control DMA Channel 2
const uintptr_t DMAC_LC0_2_REG_S         = DMAC0_S_ADDR + 0x0000044C; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 2
const uintptr_t DMAC_LC1_2_REG_S         = DMAC0_S_ADDR + 0x00000450; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 2
const uintptr_t DMAC_SAR3_REG_S          = DMAC0_S_ADDR + 0x00000460; //  32    mixed    0x00000000    Source Address DMA Channel 3
const uintptr_t DMAC_DAR3_REG_S          = DMAC0_S_ADDR + 0x00000464; //  32    mixed    0x00000000    Destination Addr DMA Channel 3
const uintptr_t DMAC_CCR3_REG_S          = DMAC0_S_ADDR + 0x00000468; //  32    mixed    0x00800200    Channel Control DMA Channel 3
const uintptr_t DMAC_LC0_3_REG_S         = DMAC0_S_ADDR + 0x0000046C; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 3
const uintptr_t DMAC_LC1_3_REG_S         = DMAC0_S_ADDR + 0x00000470; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 3
const uintptr_t DMAC_SAR4_REG_S          = DMAC0_S_ADDR + 0x00000480; //  32    mixed    0x00000000    Source Address DMA Channel 4
const uintptr_t DMAC_DAR4_REG_S          = DMAC0_S_ADDR + 0x00000484; //  32    mixed    0x00000000    Destination Addr DMA Channel 4
const uintptr_t DMAC_CCR4_REG_S          = DMAC0_S_ADDR + 0x00000488; //  32    mixed    0x00800200    Channel Control DMA Channel 4
const uintptr_t DMAC_LC0_4_REG_S         = DMAC0_S_ADDR + 0x0000048C; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 4
const uintptr_t DMAC_LC1_4_REG_S         = DMAC0_S_ADDR + 0x00000490; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 4
const uintptr_t DMAC_SAR5_REG_S          = DMAC0_S_ADDR + 0x000004A0; //  32    mixed    0x00000000    Source Address DMA Channel 5
const uintptr_t DMAC_DAR5_REG_S          = DMAC0_S_ADDR + 0x000004A4; //  32    mixed    0x00000000    Destination Addr DMA Channel 5
const uintptr_t DMAC_CCR5_REG_S          = DMAC0_S_ADDR + 0x000004A8; //  32    mixed    0x00800200    Channel Control DMA Channel 5
const uintptr_t DMAC_LC0_5_REG_S         = DMAC0_S_ADDR + 0x000004AC; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 5
const uintptr_t DMAC_LC1_5_REG_S         = DMAC0_S_ADDR + 0x000004B0; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 5
const uintptr_t DMAC_SAR6_REG_S          = DMAC0_S_ADDR + 0x000004C0; //  32    mixed    0x00000000    Source Address DMA Channel 6
const uintptr_t DMAC_DAR6_REG_S          = DMAC0_S_ADDR + 0x000004C4; //  32    mixed    0x00000000    Destination Addr DMA Channel 6
const uintptr_t DMAC_CCR6_REG_S          = DMAC0_S_ADDR + 0x000004C8; //  32    mixed    0x00800200    Channel Control DMA Channel 6
const uintptr_t DMAC_LC0_6_REG_S         = DMAC0_S_ADDR + 0x000004CC; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 6
const uintptr_t DMAC_LC1_6_REG_S         = DMAC0_S_ADDR + 0x000004D0; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 6
const uintptr_t DMAC_SAR7_REG_S          = DMAC0_S_ADDR + 0x000004E0; //  32    mixed    0x00000000    Source Address DMA Channel 7
const uintptr_t DMAC_DAR7_REG_S          = DMAC0_S_ADDR + 0x000004E4; //  32    mixed    0x00000000    Destination Addr DMA Channel 7
const uintptr_t DMAC_CCR7_REG_S          = DMAC0_S_ADDR + 0x000004E8; //  32    mixed    0x00800200    Channel Control DMA Channel 7
const uintptr_t DMAC_LC0_7_REG_S         = DMAC0_S_ADDR + 0x000004EC; //  32    mixed    0x00000000    Loop Counter 0 DMA Channel 7
const uintptr_t DMAC_LC1_7_REG_S         = DMAC0_S_ADDR + 0x000004F0; //  32    mixed    0x00000000    Loop Counter 1 DMA Channel 7
const uintptr_t DMAC_DBGSTATUS_REG_S     = DMAC0_S_ADDR + 0x00000D00; //  32    mixed    0x00000000    DMA Manager Execution Status
const uintptr_t DMAC_DBGCMD_REG_S        = DMAC0_S_ADDR + 0x00000D04; //  32    mixed    0x00000000    DMA Manager Instr
const uintptr_t DMAC_DBGINST0_REG_S      = DMAC0_S_ADDR + 0x00000D08; //  32    mixed    0x00000000    DMA Manager Instruction Part A
const uintptr_t DMAC_DBGINST1_REG_S      = DMAC0_S_ADDR + 0x00000D0C; //  32    mixed    0x00000000    DMA Manager Instruction Part B
const uintptr_t DMAC_CR0_REG_S           = DMAC0_S_ADDR + 0x00000E00; //  32    mixed    0x001E3071    Config Interfaces, PC, Mode
const uintptr_t DMAC_CR1_REG_S           = DMAC0_S_ADDR + 0x00000E04; //  32    mixed    0x00000074    Config
const uintptr_t DMAC_CR2_REG_S           = DMAC0_S_ADDR + 0x00000E08; //  32    mixed    0x00000000    Config
const uintptr_t DMAC_CR3_REG_S           = DMAC0_S_ADDR + 0x00000E0C; //  32    mixed    0x00000000    Config
const uintptr_t DMAC_CR4_REG_S           = DMAC0_S_ADDR + 0x00000E10; //  32    mixed    0x00000000    Config 4
const uintptr_t DMAC_CRD_REG_S           = DMAC0_S_ADDR + 0x00000E14; //  32    mixed    0x07FF7F73    DMA configuration
const uintptr_t DMAC_WD_REG_S            = DMAC0_S_ADDR + 0x00000E80; //  32    mixed    0x00000000    Watchdog Timer
const uintptr_t DMAC_PERIPH_ID_0_REG_S   = DMAC0_S_ADDR + 0x00000FE0; //  32    mixed    0x00000030    Peripheral Idenfication register 0
const uintptr_t DMAC_PERIPH_ID_1_REG_S   = DMAC0_S_ADDR + 0x00000FE4; //  32    mixed    0x00000013    Peripheral Idenfication register 1
const uintptr_t DMAC_PERIPH_ID_2_REG_S   = DMAC0_S_ADDR + 0x00000FE8; //  32    mixed    0x00000024    Peripheral Idenfication register 2
const uintptr_t DMAC_PERIPH_ID_3_REG_S   = DMAC0_S_ADDR + 0x00000FEC; //  32    mixed    0x00000000    Peripheral Idenfication register 3
const uintptr_t DMAC_PCELL_ID_0_REG_S    = DMAC0_S_ADDR + 0x00000FF0; //  32    mixed    0x0000000D    Compontent Idenfication register 0
const uintptr_t DMAC_PCELL_ID_1_REG_S    = DMAC0_S_ADDR + 0x00000FF4; //  32    mixed    0x000000F0    Compontent Idenfication register 1
const uintptr_t DMAC_PCELL_ID_2_REG_S    = DMAC0_S_ADDR + 0x00000FF8; //  32    mixed    0x00000005    Compontent Idenfication register 2
const uintptr_t DMAC_PCELL_ID_3_REG_S    = DMAC0_S_ADDR + 0x00000FFC; //  32    mixed    0x000000B1    Compontent Idenfication register 3
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (DMAC) DSR
//
// Name                    DMAC_DSR_REG
// Software Name           DS
// Relative Address        0x00000000
// Absolute Address        dmac0_ns: 0xF8004000
//                         dmac0_s: 0xF8003000
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DMA Manager Status
//
// Register DMAC_DSR_REG Details
//
// RESERVED                                                    Properties: Bits: 31:10, Type: rud, Reset Value: 0x0

                                                            // Properties: Bit: 9, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DSR_DNS_MASK          = 0x00000200;    // Provides the security status of the DMA manager
const uintptr_t DMAC_DSR_DNS_BPOS          = 9;             // thread:
                                                            // 0: Secure state
                                                            // 1: Non-secure state

                                                            // Properties: Bits: 8:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DSR_WAKEUP_EVENT_MASK = 0x000001F0;    // When the DMA manager executes a DMAWFE
const uintptr_t DMAC_DSR_WAKEUP_EVENT_BPOS = 4;             // instruction, it is waiting for one of the following
                                                            // events to occur from any of the DMA channel
                                                            // treads:
                                                            // 0 0000: event[0]
                                                            // 0 0001: event[1]
                                                            // ...
                                                            // 0 1111: event[15]
                                                            // 1 xxxx: reserved

                                                            // Properties: Bits: 3:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DSR_DMA_STATUS_MASK   = 0x0000000F;    // The current operating state of the DMA manager:
const uintptr_t DMAC_DSR_DMA_STATUS_BPOS   = 0;             // 0000: Stopped
                                                            // 0001: Executing
                                                            // 0010: Cache miss
                                                            // 0011: Updating PC
                                                            // 0100: Waiting for event
                                                            // 0101 to 1110: reserved
                                                            // 1111: Faulting.


//------------------------------------------------------------------------------
//
// Register (DMAC) DPC
//
// Name                    DMAC_DPC_REG
// Relative Address        0x00000004
// Absolute Address        dmac0_ns: 0xF8004004
//                         dmac0_s: 0xF8003004
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DMA Program Counter
//
// Register DMAC_DPC_REG Details
//
                                                      // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DPC_PC_MGR_MASK = 0xFFFFFFFF;    // Program counter for the DMA manager thread
const uintptr_t DMAC_DPC_PC_MGR_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (DMAC) INTEN
//
// Name                    DMAC_INTEN_REG
// Relative Address        0x00000020
// Absolute Address        dmac0_ns: 0xF8004020
//                         dmac0_s: 0xF8003020
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DMASEV Instruction Response Control
//
// Register DMAC_INTEN_REG Details
//
                                                                  // Properties: Bits: 31:0, Type: srw,nssraz,nsnsrw, Reset Value: 0x0
const uintptr_t DMAC_INTEN_EVENT_IRQ_SELECT_MASK = 0xFFFFFFFF;    // Control the respond of a DMA channel thread
const uintptr_t DMAC_INTEN_EVENT_IRQ_SELECT_BPOS = 0;             // when it executes a DMASEV instruction. The
                                                                  // channel thread will either signal the same
                                                                  // DMASEV instruction to the other threads, or
                                                                  // assert its interrupt signal. Bits [7:0] correspond to
                                                                  // channels [7:0].
                                                                  // 0: The channel tread signals a DMASEV to the
                                                                  // other threads (this typically selected when
                                                                  // interrupts are not used)
                                                                  // 1: Assert the channel's interrupt signal to the PS
                                                                  // interrupt controller.
                                                                  // Reserved


//------------------------------------------------------------------------------
//
// Register (DMAC) INT_EVENT_RIS
//
// Name                    DMAC_INT_EVENT_RIS_REG
// Software Name           ES
// Relative Address        0x00000024
// Absolute Address        dmac0_ns: 0xF8004024
//                         dmac0_s: 0xF8003024
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Event Interrupt Raw Status
//
// Register DMAC_INT_EVENT_RIS_REG Details
//
                                                                       // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_INT_EVENT_RIS_DMASEV_ACTIVE_MASK = 0xFFFFFFFF;    // Raw status of the event or interrupt state.
const uintptr_t DMAC_INT_EVENT_RIS_DMASEV_ACTIVE_BPOS = 0;             // There are sixteen possible event settings [15:0]
                                                                       // and eight possible interrupts [7:0]:
                                                                       // 0: Inactive
                                                                       // 1: Active
                                                                       // Note:
                                                                       // When the DMAC executes a DMASEV N
                                                                       // instruction to send event N, the INTEN Register
                                                                       // controls whether the DMAC:
                                                                       // signals an interrupt using the appropriate irq
                                                                       // sends the event to all of the threads.
                                                                       // Reserved


//------------------------------------------------------------------------------
//
// Register (DMAC) INTMIS
//
// Name                    DMAC_INTMIS_REG
// Software Name           INTSTATUS
// Relative Address        0x00000028
// Absolute Address        dmac0_ns: 0xF8004028
//                         dmac0_s: 0xF8003028
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Interrupt Status
//
// Register DMAC_INTMIS_REG Details
//
                                                             // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_INTMIS_IRQ_STATUS_MASK = 0xFFFFFFFF;    // Interrupt signal state for DMA channel [7:0]:
const uintptr_t DMAC_INTMIS_IRQ_STATUS_BPOS = 0;             // 0: inactive (IRQ signals is Low).
                                                             // 1: active (IRQ signals is HIgh).
                                                             // Reserved


//------------------------------------------------------------------------------
//
// Register (DMAC) INTCLR
//
// Name                    DMAC_INTCLR_REG
// Relative Address        0x0000002C
// Absolute Address        dmac0_ns: 0xF800402C
//                         dmac0_s: 0xF800302C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Interrupt Clear
//
// Register DMAC_INTCLR_REG Details
//
                                                          // Properties: Bits: 31:0, Type: swo,nssraz,nsnswo, Reset Value: 0x0
const uintptr_t DMAC_INTCLR_IRQ_CLR_MASK = 0xFFFFFFFF;    // Clear interrupt(s) for DMA channel [7:0]:
const uintptr_t DMAC_INTCLR_IRQ_CLR_BPOS = 0;             // 0: no affect
                                                          // 1: clear the interrupt
                                                          // Reserved


//------------------------------------------------------------------------------
//
// Register (DMAC) FSRD
//
// Name                    DMAC_FSRD_REG
// Software Name           FSM
// Relative Address        0x00000030
// Absolute Address        dmac0_ns: 0xF8004030
//                         dmac0_s: 0xF8003030
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Fault Status DMA Manager
//
// Register DMAC_FSRD_REG Details
//
// RESERVED                                               Properties: Bits: 31:1, Type: rud, Reset Value: 0x0

                                                       // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FSRD_FS_MGR_MASK = 0x00000001;    // Provides the fault status of the DMA manager:
const uintptr_t DMAC_FSRD_FS_MGR_BPOS = 0;             // 0: Not in the Faulting state
                                                       // 1: Faulting state


//------------------------------------------------------------------------------
//
// Register (DMAC) FSRC
//
// Name                    DMAC_FSRC_REG
// Software Name           FSC
// Relative Address        0x00000034
// Absolute Address        dmac0_ns: 0xF8004034
//                         dmac0_s: 0xF8003034
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Fault Status DMA Channel
//
// Register DMAC_FSRC_REG Details
//
// RESERVED                                                     Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                             // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FSRC_FAULT_STATUS_MASK = 0x000000FF;    // Each bit provides the fault status of the
const uintptr_t DMAC_FSRC_FAULT_STATUS_BPOS = 0;             // corresponding DMA channel, Bits [7:0]:
                                                             // 0: No fault present
                                                             // 1: Fault or Fault completing state


//------------------------------------------------------------------------------
//
// Register (DMAC) FTRD
//
// Name                    DMAC_FTRD_REG
// Software Name           FTM
// Relative Address        0x00000038
// Absolute Address        dmac0_ns: 0xF8004038
//                         dmac0_s: 0xF8003038
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Fault Type DMA Manager
//
// Register DMAC_FTRD_REG Details
//
// RESERVED                                                        Properties: Bit: 31, Type: rud, Reset Value: 0x0

                                                                // Properties: Bit: 30, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTRD_DBG_INSTR_MASK       = 0x40000000;    // If the DMA manager aborts, this bit indicates
const uintptr_t DMAC_FTRD_DBG_INSTR_BPOS       = 30;            // whether the erroneous instruction was read from
                                                                // the system memory or from the debug interface:
                                                                // 0: system memory
                                                                // 1: debug interface

// RESERVED                                                        Properties: Bits: 29:17, Type: rud, Reset Value: 0x0

                                                                // Properties: Bit: 16, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTRD_INSTR_FETCH_ERR_MASK = 0x00010000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTRD_INSTR_FETCH_ERR_BPOS = 16;            // receives on the RRESP bus, after the DMA
                                                                // manager performs an instruction fetch:
                                                                // 0: OKAY response
                                                                // 1: EXOKAY, SLVERR, or DECERR response

// RESERVED                                                        Properties: Bits: 15:6, Type: rud, Reset Value: 0x0

                                                                // Properties: Bit: 5, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTRD_MGR_EVNT_ERR_MASK    = 0x00000020;    // Indicates whether the DMA manager was
const uintptr_t DMAC_FTRD_MGR_EVNT_ERR_BPOS    = 5;             // attempting to execute DMAWFE or DMASEV
                                                                // with inappropriate security permissions:
                                                                // 0: the DMA manager has appropriate security to
                                                                // execute DMAWFE or DMASEV
                                                                // 1: a DMA manager thread in the Non-secure state
                                                                // attempted to execute either:
                                                                // DMAWFE to wait for a secure event
                                                                // H18DMASEV to create a secure event or secure
                                                                // interrupt.

                                                                // Properties: Bit: 4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTRD_DMAGO_ERR_MASK       = 0x00000010;    // Indicates whether the DMA manager was
const uintptr_t DMAC_FTRD_DMAGO_ERR_BPOS       = 4;             // attempting to execute DMAGO with
                                                                // inappropriate security permissions:
                                                                // 0: appropriate security to execute DMAGO
                                                                // 1: Non-secure state attempted to execute DMAGO
                                                                // to create a DMA channel thread operating in the
                                                                // Secure state

// RESERVED                                                        Properties: Bits: 3:2, Type: rud, Reset Value: 0x0

                                                                // Properties: Bit: 1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTRD_OPERAND_INVALID_MASK = 0x00000002;    // Indicates whether the DMA manager was
const uintptr_t DMAC_FTRD_OPERAND_INVALID_BPOS = 1;             // attempting to execute an instruction operand that
                                                                // was not valid for the configuration of the DMAC:
                                                                // 0: valid operand
                                                                // 1: invalid operand

                                                                // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTRD_UNDEF_INSTR_MASK     = 0x00000001;    // Indicates whether the DMA manager was
const uintptr_t DMAC_FTRD_UNDEF_INSTR_BPOS     = 0;             // attempting to execute an undefined instruction:
                                                                // 0: defined instruction
                                                                // 1: undefined instruction.


//------------------------------------------------------------------------------
//
// Register (DMAC) FTR0
//
// Name                    DMAC_FTR0_REG
// Software Name           FTC0
// Relative Address        0x00000040
// Absolute Address        dmac0_ns: 0xF8004040
//                         dmac0_s: 0xF8003040
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Default Type DMA Channel 0
//
// Register DMAC_FTR0_REG Details
//
                                                                    // Properties: Bit: 31, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_LOCKUP_ERR_MASK          = 0x80000000;    // Indicates whether the DMA channel thread has
const uintptr_t DMAC_FTR0_LOCKUP_ERR_BPOS          = 31;            // locked-up because of resource starvation:
                                                                    // 0: DMA channel has adequate resources
                                                                    // 1: DMA channel has locked-up because of
                                                                    // insufficient resources. This fault is an imprecise
                                                                    // abort.

                                                                    // Properties: Bit: 30, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_DBG_INSTR_MASK           = 0x40000000;    // If the DMA channel aborts, this bit indicates
const uintptr_t DMAC_FTR0_DBG_INSTR_BPOS           = 30;            // whether the erroneous instruction was read from
                                                                    // the system memory or from the debug interface:
                                                                    // 0: system memory
                                                                    // 1: debug interface.

// RESERVED                                                            Properties: Bits: 29:19, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_DATA_READ_ERR_MASK       = 0x00040000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR0_DATA_READ_ERR_BPOS       = 18;            // receives on the RRESP bus, after the DMA
                                                                    // channel thread performs a data read:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 17, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_DATA_WRITE_ERR_MASK      = 0x00020000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR0_DATA_WRITE_ERR_BPOS      = 17;            // receives on the BRESP bus, after the DMA channel
                                                                    // thread performs a data write:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 16, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_INSTR_FETCH_ERR_MASK     = 0x00010000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR0_INSTR_FETCH_ERR_BPOS     = 16;            // receives on the RRESP bus after the DMA channel
                                                                    // thread performs an instruction fetch:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is a precise abort.

// RESERVED                                                            Properties: Bits: 15:14, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 13, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_ST_DATA_UNAVAILABLE_MASK = 0x00002000;    // Indicates whether the MFIFO did not contain the
const uintptr_t DMAC_FTR0_ST_DATA_UNAVAILABLE_BPOS = 13;            // data to enable the DMAC to perform the DMAST:
                                                                    // 0: MFIFO contains all the data to enable the
                                                                    // DMAST to complete
                                                                    // 1: previous DMALDs have not put enough data in
                                                                    // the MFIFO to enable the DMAST to complete.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 12, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_MFIFO_ERR_MASK           = 0x00001000;    // Indicates whether the MFIFO prevented the DMA
const uintptr_t DMAC_FTR0_MFIFO_ERR_BPOS           = 12;            // channel thread from executing DMALD or
                                                                    // DMAST:
                                                                    // DMALD:
                                                                    // 0: MFIFO contains sufficient space
                                                                    // 1: MFIFO is too small to hold the data that
                                                                    // DMALD requires.
                                                                    // DMAST:
                                                                    // 0: MFIFO contains sufficient data
                                                                    // 1: MFIFO is too small to store the data to enable
                                                                    // DMAST to complete.
                                                                    // This fault is an imprecise abort.

// RESERVED                                                            Properties: Bits: 11:8, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 7, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_CH_RDWR_ERR_MASK         = 0x00000080;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR0_CH_RDWR_ERR_BPOS         = 7;             // Non-secure state, attempts to program the CCR
                                                                    // registers to perform a secure read or secure write:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to perform a secure read or secure
                                                                    // write. This fault is a precise abort.

                                                                    // Properties: Bit: 6, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_CH_PERIPH_ERR_MASK       = 0x00000040;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR0_CH_PERIPH_ERR_BPOS       = 6;             // Non-secure state, attempts to execute DMAWFP,
                                                                    // DMALDP, DMASTP, or DMAFLUSHP with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFP to wait
                                                                    // for a secure peripheral, b) DMALDP or DMASTP
                                                                    // to notify a secure peripheral, or c) DMAFLUSHP
                                                                    // to flush a secure peripheral. This fault is a precise
                                                                    // abort.

                                                                    // Properties: Bit: 5, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_CH_EVNT_ERR_MASK         = 0x00000020;    // Indicates whether the DMA channel thread
const uintptr_t DMAC_FTR0_CH_EVNT_ERR_BPOS         = 5;             // attempts to execute DMAWFE or DMASEV with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFE to wait
                                                                    // for a secure event, or b) DMASEV to create a
                                                                    // secure event or secure interrupt.
                                                                    // This fault is a precise abort.

// RESERVED                                                            Properties: Bits: 4:2, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_OPERAND_INVALID_MASK     = 0x00000002;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR0_OPERAND_INVALID_BPOS     = 1;             // attempting to execute an instruction operand that
                                                                    // was not valid for the configuration of the DMAC:
                                                                    // 0: valid operand
                                                                    // 1: invalid operand.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR0_UNDEF_INSTR_MASK         = 0x00000001;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR0_UNDEF_INSTR_BPOS         = 0;             // attempting to execute an undefined instruction:
                                                                    // 0: defined instruction
                                                                    // 1: undefined instruction.
                                                                    // This fault is a precise abort.


//------------------------------------------------------------------------------
//
// Register (DMAC) FTR1
//
// Name                    DMAC_FTR1_REG
// Software Name           XDmaPs_FTCn_OFFSET(1)
// Relative Address        0x00000044
// Absolute Address        dmac0_ns: 0xF8004044
//                         dmac0_s: 0xF8003044
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Default Type DMA Channel 1
//
// Register DMAC_FTR1_REG Details
//
                                                                    // Properties: Bit: 31, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_LOCKUP_ERR_MASK          = 0x80000000;    // Indicates whether the DMA channel thread has
const uintptr_t DMAC_FTR1_LOCKUP_ERR_BPOS          = 31;            // locked-up because of resource starvation:
                                                                    // 0: DMA channel has adequate resources
                                                                    // 1: DMA channel has locked-up because of
                                                                    // insufficient resources. This fault is an imprecise
                                                                    // abort.

                                                                    // Properties: Bit: 30, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_DBG_INSTR_MASK           = 0x40000000;    // If the DMA channel aborts, this bit indicates
const uintptr_t DMAC_FTR1_DBG_INSTR_BPOS           = 30;            // whether the erroneous instruction was read from
                                                                    // the system memory or from the debug interface:
                                                                    // 0: system memory
                                                                    // 1: debug interface.

// RESERVED                                                            Properties: Bits: 29:19, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_DATA_READ_ERR_MASK       = 0x00040000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR1_DATA_READ_ERR_BPOS       = 18;            // receives on the RRESP bus, after the DMA
                                                                    // channel thread performs a data read:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 17, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_DATA_WRITE_ERR_MASK      = 0x00020000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR1_DATA_WRITE_ERR_BPOS      = 17;            // receives on the BRESP bus, after the DMA channel
                                                                    // thread performs a data write:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 16, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_INSTR_FETCH_ERR_MASK     = 0x00010000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR1_INSTR_FETCH_ERR_BPOS     = 16;            // receives on the RRESP bus after the DMA channel
                                                                    // thread performs an instruction fetch:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is a precise abort.

// RESERVED                                                            Properties: Bits: 15:14, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 13, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_ST_DATA_UNAVAILABLE_MASK = 0x00002000;    // Indicates whether the MFIFO did not contain the
const uintptr_t DMAC_FTR1_ST_DATA_UNAVAILABLE_BPOS = 13;            // data to enable the DMAC to perform the DMAST:
                                                                    // 0: MFIFO contains all the data to enable the
                                                                    // DMAST to complete
                                                                    // 1: previous DMALDs have not put enough data in
                                                                    // the MFIFO to enable the DMAST to complete.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 12, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_MFIFO_ERR_MASK           = 0x00001000;    // Indicates whether the MFIFO prevented the DMA
const uintptr_t DMAC_FTR1_MFIFO_ERR_BPOS           = 12;            // channel thread from executing DMALD or
                                                                    // DMAST:
                                                                    // DMALD:
                                                                    // 0: MFIFO contains sufficient space
                                                                    // 1: MFIFO is too small to hold the data that
                                                                    // DMALD requires.
                                                                    // DMAST:
                                                                    // 0: MFIFO contains sufficient data
                                                                    // 1: MFIFO is too small to store the data to enable
                                                                    // DMAST to complete.
                                                                    // This fault is an imprecise abort.

// RESERVED                                                            Properties: Bits: 11:8, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 7, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_CH_RDWR_ERR_MASK         = 0x00000080;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR1_CH_RDWR_ERR_BPOS         = 7;             // Non-secure state, attempts to program the CCR
                                                                    // registers to perform a secure read or secure write:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to perform a secure read or secure
                                                                    // write. This fault is a precise abort.

                                                                    // Properties: Bit: 6, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_CH_PERIPH_ERR_MASK       = 0x00000040;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR1_CH_PERIPH_ERR_BPOS       = 6;             // Non-secure state, attempts to execute DMAWFP,
                                                                    // DMALDP, DMASTP, or DMAFLUSHP with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFP to wait
                                                                    // for a secure peripheral, b) DMALDP or DMASTP
                                                                    // to notify a secure peripheral, or c) DMAFLUSHP
                                                                    // to flush a secure peripheral. This fault is a precise
                                                                    // abort.

                                                                    // Properties: Bit: 5, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_CH_EVNT_ERR_MASK         = 0x00000020;    // Indicates whether the DMA channel thread
const uintptr_t DMAC_FTR1_CH_EVNT_ERR_BPOS         = 5;             // attempts to execute DMAWFE or DMASEV with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFE to wait
                                                                    // for a secure event, or b) DMASEV to create a
                                                                    // secure event or secure interrupt.
                                                                    // This fault is a precise abort.

// RESERVED                                                            Properties: Bits: 4:2, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_OPERAND_INVALID_MASK     = 0x00000002;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR1_OPERAND_INVALID_BPOS     = 1;             // attempting to execute an instruction operand that
                                                                    // was not valid for the configuration of the DMAC:
                                                                    // 0: valid operand
                                                                    // 1: invalid operand.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR1_UNDEF_INSTR_MASK         = 0x00000001;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR1_UNDEF_INSTR_BPOS         = 0;             // attempting to execute an undefined instruction:
                                                                    // 0: defined instruction
                                                                    // 1: undefined instruction.
                                                                    // This fault is a precise abort.


//------------------------------------------------------------------------------
//
// Register (DMAC) FTR2
//
// Name                    DMAC_FTR2_REG
// Software Name           XDmaPs_FTCn_OFFSET(2)
// Relative Address        0x00000048
// Absolute Address        dmac0_ns: 0xF8004048
//                         dmac0_s: 0xF8003048
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Default Type DMA Channel 2
//
// Register DMAC_FTR2_REG Details
//
                                                                    // Properties: Bit: 31, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_LOCKUP_ERR_MASK          = 0x80000000;    // Indicates whether the DMA channel thread has
const uintptr_t DMAC_FTR2_LOCKUP_ERR_BPOS          = 31;            // locked-up because of resource starvation:
                                                                    // 0: DMA channel has adequate resources
                                                                    // 1: DMA channel has locked-up because of
                                                                    // insufficient resources. This fault is an imprecise
                                                                    // abort.

                                                                    // Properties: Bit: 30, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_DBG_INSTR_MASK           = 0x40000000;    // If the DMA channel aborts, this bit indicates
const uintptr_t DMAC_FTR2_DBG_INSTR_BPOS           = 30;            // whether the erroneous instruction was read from
                                                                    // the system memory or from the debug interface:
                                                                    // 0: system memory
                                                                    // 1: debug interface.

// RESERVED                                                            Properties: Bits: 29:19, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_DATA_READ_ERR_MASK       = 0x00040000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR2_DATA_READ_ERR_BPOS       = 18;            // receives on the RRESP bus, after the DMA
                                                                    // channel thread performs a data read:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 17, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_DATA_WRITE_ERR_MASK      = 0x00020000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR2_DATA_WRITE_ERR_BPOS      = 17;            // receives on the BRESP bus, after the DMA channel
                                                                    // thread performs a data write:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 16, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_INSTR_FETCH_ERR_MASK     = 0x00010000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR2_INSTR_FETCH_ERR_BPOS     = 16;            // receives on the RRESP bus after the DMA channel
                                                                    // thread performs an instruction fetch:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is a precise abort.

// RESERVED                                                            Properties: Bits: 15:14, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 13, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_ST_DATA_UNAVAILABLE_MASK = 0x00002000;    // Indicates whether the MFIFO did not contain the
const uintptr_t DMAC_FTR2_ST_DATA_UNAVAILABLE_BPOS = 13;            // data to enable the DMAC to perform the DMAST:
                                                                    // 0: MFIFO contains all the data to enable the
                                                                    // DMAST to complete
                                                                    // 1: previous DMALDs have not put enough data in
                                                                    // the MFIFO to enable the DMAST to complete.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 12, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_MFIFO_ERR_MASK           = 0x00001000;    // Indicates whether the MFIFO prevented the DMA
const uintptr_t DMAC_FTR2_MFIFO_ERR_BPOS           = 12;            // channel thread from executing DMALD or
                                                                    // DMAST:
                                                                    // DMALD:
                                                                    // 0: MFIFO contains sufficient space
                                                                    // 1: MFIFO is too small to hold the data that
                                                                    // DMALD requires.
                                                                    // DMAST:
                                                                    // 0: MFIFO contains sufficient data
                                                                    // 1: MFIFO is too small to store the data to enable
                                                                    // DMAST to complete.
                                                                    // This fault is an imprecise abort.

// RESERVED                                                            Properties: Bits: 11:8, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 7, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_CH_RDWR_ERR_MASK         = 0x00000080;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR2_CH_RDWR_ERR_BPOS         = 7;             // Non-secure state, attempts to program the CCR
                                                                    // registers to perform a secure read or secure write:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to perform a secure read or secure
                                                                    // write. This fault is a precise abort.

                                                                    // Properties: Bit: 6, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_CH_PERIPH_ERR_MASK       = 0x00000040;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR2_CH_PERIPH_ERR_BPOS       = 6;             // Non-secure state, attempts to execute DMAWFP,
                                                                    // DMALDP, DMASTP, or DMAFLUSHP with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFP to wait
                                                                    // for a secure peripheral, b) DMALDP or DMASTP
                                                                    // to notify a secure peripheral, or c) DMAFLUSHP
                                                                    // to flush a secure peripheral. This fault is a precise
                                                                    // abort.

                                                                    // Properties: Bit: 5, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_CH_EVNT_ERR_MASK         = 0x00000020;    // Indicates whether the DMA channel thread
const uintptr_t DMAC_FTR2_CH_EVNT_ERR_BPOS         = 5;             // attempts to execute DMAWFE or DMASEV with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFE to wait
                                                                    // for a secure event, or b) DMASEV to create a
                                                                    // secure event or secure interrupt.
                                                                    // This fault is a precise abort.

// RESERVED                                                            Properties: Bits: 4:2, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_OPERAND_INVALID_MASK     = 0x00000002;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR2_OPERAND_INVALID_BPOS     = 1;             // attempting to execute an instruction operand that
                                                                    // was not valid for the configuration of the DMAC:
                                                                    // 0: valid operand
                                                                    // 1: invalid operand.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR2_UNDEF_INSTR_MASK         = 0x00000001;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR2_UNDEF_INSTR_BPOS         = 0;             // attempting to execute an undefined instruction:
                                                                    // 0: defined instruction
                                                                    // 1: undefined instruction.
                                                                    // This fault is a precise abort.


//------------------------------------------------------------------------------
//
// Register (DMAC) FTR3
//
// Name                    DMAC_FTR3_REG
// Software Name           XDmaPs_FTCn_OFFSET(3)
// Relative Address        0x0000004C
// Absolute Address        dmac0_ns: 0xF800404C
//                         dmac0_s: 0xF800304C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Default Type DMA Channel 3
//
// Register DMAC_FTR3_REG Details
//
                                                                    // Properties: Bit: 31, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_LOCKUP_ERR_MASK          = 0x80000000;    // Indicates whether the DMA channel thread has
const uintptr_t DMAC_FTR3_LOCKUP_ERR_BPOS          = 31;            // locked-up because of resource starvation:
                                                                    // 0: DMA channel has adequate resources
                                                                    // 1: DMA channel has locked-up because of
                                                                    // insufficient resources. This fault is an imprecise
                                                                    // abort.

                                                                    // Properties: Bit: 30, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_DBG_INSTR_MASK           = 0x40000000;    // If the DMA channel aborts, this bit indicates
const uintptr_t DMAC_FTR3_DBG_INSTR_BPOS           = 30;            // whether the erroneous instruction was read from
                                                                    // the system memory or from the debug interface:
                                                                    // 0: system memory
                                                                    // 1: debug interface.

// RESERVED                                                            Properties: Bits: 29:19, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_DATA_READ_ERR_MASK       = 0x00040000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR3_DATA_READ_ERR_BPOS       = 18;            // receives on the RRESP bus, after the DMA
                                                                    // channel thread performs a data read:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 17, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_DATA_WRITE_ERR_MASK      = 0x00020000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR3_DATA_WRITE_ERR_BPOS      = 17;            // receives on the BRESP bus, after the DMA channel
                                                                    // thread performs a data write:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 16, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_INSTR_FETCH_ERR_MASK     = 0x00010000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR3_INSTR_FETCH_ERR_BPOS     = 16;            // receives on the RRESP bus after the DMA channel
                                                                    // thread performs an instruction fetch:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is a precise abort.

// RESERVED                                                            Properties: Bits: 15:14, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 13, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_ST_DATA_UNAVAILABLE_MASK = 0x00002000;    // Indicates whether the MFIFO did not contain the
const uintptr_t DMAC_FTR3_ST_DATA_UNAVAILABLE_BPOS = 13;            // data to enable the DMAC to perform the DMAST:
                                                                    // 0: MFIFO contains all the data to enable the
                                                                    // DMAST to complete
                                                                    // 1: previous DMALDs have not put enough data in
                                                                    // the MFIFO to enable the DMAST to complete.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 12, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_MFIFO_ERR_MASK           = 0x00001000;    // Indicates whether the MFIFO prevented the DMA
const uintptr_t DMAC_FTR3_MFIFO_ERR_BPOS           = 12;            // channel thread from executing DMALD or
                                                                    // DMAST:
                                                                    // DMALD:
                                                                    // 0: MFIFO contains sufficient space
                                                                    // 1: MFIFO is too small to hold the data that
                                                                    // DMALD requires.
                                                                    // DMAST:
                                                                    // 0: MFIFO contains sufficient data
                                                                    // 1: MFIFO is too small to store the data to enable
                                                                    // DMAST to complete.
                                                                    // This fault is an imprecise abort.

// RESERVED                                                            Properties: Bits: 11:8, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 7, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_CH_RDWR_ERR_MASK         = 0x00000080;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR3_CH_RDWR_ERR_BPOS         = 7;             // Non-secure state, attempts to program the CCR
                                                                    // registers to perform a secure read or secure write:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to perform a secure read or secure
                                                                    // write. This fault is a precise abort.

                                                                    // Properties: Bit: 6, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_CH_PERIPH_ERR_MASK       = 0x00000040;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR3_CH_PERIPH_ERR_BPOS       = 6;             // Non-secure state, attempts to execute DMAWFP,
                                                                    // DMALDP, DMASTP, or DMAFLUSHP with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFP to wait
                                                                    // for a secure peripheral, b) DMALDP or DMASTP
                                                                    // to notify a secure peripheral, or c) DMAFLUSHP
                                                                    // to flush a secure peripheral. This fault is a precise
                                                                    // abort.

                                                                    // Properties: Bit: 5, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_CH_EVNT_ERR_MASK         = 0x00000020;    // Indicates whether the DMA channel thread
const uintptr_t DMAC_FTR3_CH_EVNT_ERR_BPOS         = 5;             // attempts to execute DMAWFE or DMASEV with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFE to wait
                                                                    // for a secure event, or b) DMASEV to create a
                                                                    // secure event or secure interrupt.
                                                                    // This fault is a precise abort.

// RESERVED                                                            Properties: Bits: 4:2, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_OPERAND_INVALID_MASK     = 0x00000002;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR3_OPERAND_INVALID_BPOS     = 1;             // attempting to execute an instruction operand that
                                                                    // was not valid for the configuration of the DMAC:
                                                                    // 0: valid operand
                                                                    // 1: invalid operand.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR3_UNDEF_INSTR_MASK         = 0x00000001;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR3_UNDEF_INSTR_BPOS         = 0;             // attempting to execute an undefined instruction:
                                                                    // 0: defined instruction
                                                                    // 1: undefined instruction.
                                                                    // This fault is a precise abort.


//------------------------------------------------------------------------------
//
// Register (DMAC) FTR4
//
// Name                    DMAC_FTR4_REG
// Software Name           XDmaPs_FTCn_OFFSET(4)
// Relative Address        0x00000050
// Absolute Address        dmac0_ns: 0xF8004050
//                         dmac0_s: 0xF8003050
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Default Type DMA Channel 4
//
// Register DMAC_FTR4_REG Details
//
                                                                    // Properties: Bit: 31, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_LOCKUP_ERR_MASK          = 0x80000000;    // Indicates whether the DMA channel thread has
const uintptr_t DMAC_FTR4_LOCKUP_ERR_BPOS          = 31;            // locked-up because of resource starvation:
                                                                    // 0: DMA channel has adequate resources
                                                                    // 1: DMA channel has locked-up because of
                                                                    // insufficient resources. This fault is an imprecise
                                                                    // abort.

                                                                    // Properties: Bit: 30, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_DBG_INSTR_MASK           = 0x40000000;    // If the DMA channel aborts, this bit indicates
const uintptr_t DMAC_FTR4_DBG_INSTR_BPOS           = 30;            // whether the erroneous instruction was read from
                                                                    // the system memory or from the debug interface:
                                                                    // 0: system memory
                                                                    // 1: debug interface.

// RESERVED                                                            Properties: Bits: 29:19, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_DATA_READ_ERR_MASK       = 0x00040000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR4_DATA_READ_ERR_BPOS       = 18;            // receives on the RRESP bus, after the DMA
                                                                    // channel thread performs a data read:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 17, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_DATA_WRITE_ERR_MASK      = 0x00020000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR4_DATA_WRITE_ERR_BPOS      = 17;            // receives on the BRESP bus, after the DMA channel
                                                                    // thread performs a data write:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 16, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_INSTR_FETCH_ERR_MASK     = 0x00010000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR4_INSTR_FETCH_ERR_BPOS     = 16;            // receives on the RRESP bus after the DMA channel
                                                                    // thread performs an instruction fetch:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is a precise abort.

// RESERVED                                                            Properties: Bits: 15:14, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 13, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_ST_DATA_UNAVAILABLE_MASK = 0x00002000;    // Indicates whether the MFIFO did not contain the
const uintptr_t DMAC_FTR4_ST_DATA_UNAVAILABLE_BPOS = 13;            // data to enable the DMAC to perform the DMAST:
                                                                    // 0: MFIFO contains all the data to enable the
                                                                    // DMAST to complete
                                                                    // 1: previous DMALDs have not put enough data in
                                                                    // the MFIFO to enable the DMAST to complete.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 12, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_MFIFO_ERR_MASK           = 0x00001000;    // Indicates whether the MFIFO prevented the DMA
const uintptr_t DMAC_FTR4_MFIFO_ERR_BPOS           = 12;            // channel thread from executing DMALD or
                                                                    // DMAST:
                                                                    // DMALD:
                                                                    // 0: MFIFO contains sufficient space
                                                                    // 1: MFIFO is too small to hold the data that
                                                                    // DMALD requires.
                                                                    // DMAST:
                                                                    // 0: MFIFO contains sufficient data
                                                                    // 1: MFIFO is too small to store the data to enable
                                                                    // DMAST to complete.
                                                                    // This fault is an imprecise abort.

// RESERVED                                                            Properties: Bits: 11:8, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 7, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_CH_RDWR_ERR_MASK         = 0x00000080;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR4_CH_RDWR_ERR_BPOS         = 7;             // Non-secure state, attempts to program the CCR
                                                                    // registers to perform a secure read or secure write:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to perform a secure read or secure
                                                                    // write. This fault is a precise abort.

                                                                    // Properties: Bit: 6, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_CH_PERIPH_ERR_MASK       = 0x00000040;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR4_CH_PERIPH_ERR_BPOS       = 6;             // Non-secure state, attempts to execute DMAWFP,
                                                                    // DMALDP, DMASTP, or DMAFLUSHP with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFP to wait
                                                                    // for a secure peripheral, b) DMALDP or DMASTP
                                                                    // to notify a secure peripheral, or c) DMAFLUSHP
                                                                    // to flush a secure peripheral. This fault is a precise
                                                                    // abort.

                                                                    // Properties: Bit: 5, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_CH_EVNT_ERR_MASK         = 0x00000020;    // Indicates whether the DMA channel thread
const uintptr_t DMAC_FTR4_CH_EVNT_ERR_BPOS         = 5;             // attempts to execute DMAWFE or DMASEV with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFE to wait
                                                                    // for a secure event, or b) DMASEV to create a
                                                                    // secure event or secure interrupt.
                                                                    // This fault is a precise abort.

// RESERVED                                                            Properties: Bits: 4:2, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_OPERAND_INVALID_MASK     = 0x00000002;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR4_OPERAND_INVALID_BPOS     = 1;             // attempting to execute an instruction operand that
                                                                    // was not valid for the configuration of the DMAC:
                                                                    // 0: valid operand
                                                                    // 1: invalid operand.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR4_UNDEF_INSTR_MASK         = 0x00000001;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR4_UNDEF_INSTR_BPOS         = 0;             // attempting to execute an undefined instruction:
                                                                    // 0: defined instruction
                                                                    // 1: undefined instruction.
                                                                    // This fault is a precise abort.


//------------------------------------------------------------------------------
//
// Register (DMAC) FTR5
//
// Name                    DMAC_FTR5_REG
// Software Name           XDmaPs_FTCn_OFFSET(5)
// Relative Address        0x00000054
// Absolute Address        dmac0_ns: 0xF8004054
//                         dmac0_s: 0xF8003054
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Default Type DMA Channel 5
//
// Register DMAC_FTR5_REG Details
//
                                                                    // Properties: Bit: 31, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_LOCKUP_ERR_MASK          = 0x80000000;    // Indicates whether the DMA channel thread has
const uintptr_t DMAC_FTR5_LOCKUP_ERR_BPOS          = 31;            // locked-up because of resource starvation:
                                                                    // 0: DMA channel has adequate resources
                                                                    // 1: DMA channel has locked-up because of
                                                                    // insufficient resources. This fault is an imprecise
                                                                    // abort.

                                                                    // Properties: Bit: 30, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_DBG_INSTR_MASK           = 0x40000000;    // If the DMA channel aborts, this bit indicates
const uintptr_t DMAC_FTR5_DBG_INSTR_BPOS           = 30;            // whether the erroneous instruction was read from
                                                                    // the system memory or from the debug interface:
                                                                    // 0: system memory
                                                                    // 1: debug interface.

// RESERVED                                                            Properties: Bits: 29:19, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_DATA_READ_ERR_MASK       = 0x00040000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR5_DATA_READ_ERR_BPOS       = 18;            // receives on the RRESP bus, after the DMA
                                                                    // channel thread performs a data read:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 17, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_DATA_WRITE_ERR_MASK      = 0x00020000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR5_DATA_WRITE_ERR_BPOS      = 17;            // receives on the BRESP bus, after the DMA channel
                                                                    // thread performs a data write:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 16, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_INSTR_FETCH_ERR_MASK     = 0x00010000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR5_INSTR_FETCH_ERR_BPOS     = 16;            // receives on the RRESP bus after the DMA channel
                                                                    // thread performs an instruction fetch:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is a precise abort.

// RESERVED                                                            Properties: Bits: 15:14, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 13, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_ST_DATA_UNAVAILABLE_MASK = 0x00002000;    // Indicates whether the MFIFO did not contain the
const uintptr_t DMAC_FTR5_ST_DATA_UNAVAILABLE_BPOS = 13;            // data to enable the DMAC to perform the DMAST:
                                                                    // 0: MFIFO contains all the data to enable the
                                                                    // DMAST to complete
                                                                    // 1: previous DMALDs have not put enough data in
                                                                    // the MFIFO to enable the DMAST to complete.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 12, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_MFIFO_ERR_MASK           = 0x00001000;    // Indicates whether the MFIFO prevented the DMA
const uintptr_t DMAC_FTR5_MFIFO_ERR_BPOS           = 12;            // channel thread from executing DMALD or
                                                                    // DMAST:
                                                                    // DMALD:
                                                                    // 0: MFIFO contains sufficient space
                                                                    // 1: MFIFO is too small to hold the data that
                                                                    // DMALD requires.
                                                                    // DMAST:
                                                                    // 0: MFIFO contains sufficient data
                                                                    // 1: MFIFO is too small to store the data to enable
                                                                    // DMAST to complete.
                                                                    // This fault is an imprecise abort.

// RESERVED                                                            Properties: Bits: 11:8, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 7, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_CH_RDWR_ERR_MASK         = 0x00000080;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR5_CH_RDWR_ERR_BPOS         = 7;             // Non-secure state, attempts to program the CCR
                                                                    // registers to perform a secure read or secure write:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to perform a secure read or secure
                                                                    // write. This fault is a precise abort.

                                                                    // Properties: Bit: 6, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_CH_PERIPH_ERR_MASK       = 0x00000040;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR5_CH_PERIPH_ERR_BPOS       = 6;             // Non-secure state, attempts to execute DMAWFP,
                                                                    // DMALDP, DMASTP, or DMAFLUSHP with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFP to wait
                                                                    // for a secure peripheral, b) DMALDP or DMASTP
                                                                    // to notify a secure peripheral, or c) DMAFLUSHP
                                                                    // to flush a secure peripheral. This fault is a precise
                                                                    // abort.

                                                                    // Properties: Bit: 5, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_CH_EVNT_ERR_MASK         = 0x00000020;    // Indicates whether the DMA channel thread
const uintptr_t DMAC_FTR5_CH_EVNT_ERR_BPOS         = 5;             // attempts to execute DMAWFE or DMASEV with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFE to wait
                                                                    // for a secure event, or b) DMASEV to create a
                                                                    // secure event or secure interrupt.
                                                                    // This fault is a precise abort.

// RESERVED                                                            Properties: Bits: 4:2, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_OPERAND_INVALID_MASK     = 0x00000002;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR5_OPERAND_INVALID_BPOS     = 1;             // attempting to execute an instruction operand that
                                                                    // was not valid for the configuration of the DMAC:
                                                                    // 0: valid operand
                                                                    // 1: invalid operand.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR5_UNDEF_INSTR_MASK         = 0x00000001;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR5_UNDEF_INSTR_BPOS         = 0;             // attempting to execute an undefined instruction:
                                                                    // 0: defined instruction
                                                                    // 1: undefined instruction.
                                                                    // This fault is a precise abort.


//------------------------------------------------------------------------------
//
// Register (DMAC) FTR6
//
// Name                    DMAC_FTR6_REG
// Software Name           XDmaPs_FTCn_OFFSET(6)
// Relative Address        0x00000058
// Absolute Address        dmac0_ns: 0xF8004058
//                         dmac0_s: 0xF8003058
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Default Type DMA Channel 6
//
// Register DMAC_FTR6_REG Details
//
                                                                    // Properties: Bit: 31, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_LOCKUP_ERR_MASK          = 0x80000000;    // Indicates whether the DMA channel thread has
const uintptr_t DMAC_FTR6_LOCKUP_ERR_BPOS          = 31;            // locked-up because of resource starvation:
                                                                    // 0: DMA channel has adequate resources
                                                                    // 1: DMA channel has locked-up because of
                                                                    // insufficient resources. This fault is an imprecise
                                                                    // abort.

                                                                    // Properties: Bit: 30, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_DBG_INSTR_MASK           = 0x40000000;    // If the DMA channel aborts, this bit indicates
const uintptr_t DMAC_FTR6_DBG_INSTR_BPOS           = 30;            // whether the erroneous instruction was read from
                                                                    // the system memory or from the debug interface:
                                                                    // 0: system memory
                                                                    // 1: debug interface.

// RESERVED                                                            Properties: Bits: 29:19, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_DATA_READ_ERR_MASK       = 0x00040000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR6_DATA_READ_ERR_BPOS       = 18;            // receives on the RRESP bus, after the DMA
                                                                    // channel thread performs a data read:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 17, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_DATA_WRITE_ERR_MASK      = 0x00020000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR6_DATA_WRITE_ERR_BPOS      = 17;            // receives on the BRESP bus, after the DMA channel
                                                                    // thread performs a data write:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 16, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_INSTR_FETCH_ERR_MASK     = 0x00010000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR6_INSTR_FETCH_ERR_BPOS     = 16;            // receives on the RRESP bus after the DMA channel
                                                                    // thread performs an instruction fetch:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is a precise abort.

// RESERVED                                                            Properties: Bits: 15:14, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 13, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_ST_DATA_UNAVAILABLE_MASK = 0x00002000;    // Indicates whether the MFIFO did not contain the
const uintptr_t DMAC_FTR6_ST_DATA_UNAVAILABLE_BPOS = 13;            // data to enable the DMAC to perform the DMAST:
                                                                    // 0: MFIFO contains all the data to enable the
                                                                    // DMAST to complete
                                                                    // 1: previous DMALDs have not put enough data in
                                                                    // the MFIFO to enable the DMAST to complete.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 12, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_MFIFO_ERR_MASK           = 0x00001000;    // Indicates whether the MFIFO prevented the DMA
const uintptr_t DMAC_FTR6_MFIFO_ERR_BPOS           = 12;            // channel thread from executing DMALD or
                                                                    // DMAST:
                                                                    // DMALD:
                                                                    // 0: MFIFO contains sufficient space
                                                                    // 1: MFIFO is too small to hold the data that
                                                                    // DMALD requires.
                                                                    // DMAST:
                                                                    // 0: MFIFO contains sufficient data
                                                                    // 1: MFIFO is too small to store the data to enable
                                                                    // DMAST to complete.
                                                                    // This fault is an imprecise abort.

// RESERVED                                                            Properties: Bits: 11:8, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 7, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_CH_RDWR_ERR_MASK         = 0x00000080;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR6_CH_RDWR_ERR_BPOS         = 7;             // Non-secure state, attempts to program the CCR
                                                                    // registers to perform a secure read or secure write:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to perform a secure read or secure
                                                                    // write. This fault is a precise abort.

                                                                    // Properties: Bit: 6, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_CH_PERIPH_ERR_MASK       = 0x00000040;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR6_CH_PERIPH_ERR_BPOS       = 6;             // Non-secure state, attempts to execute DMAWFP,
                                                                    // DMALDP, DMASTP, or DMAFLUSHP with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFP to wait
                                                                    // for a secure peripheral, b) DMALDP or DMASTP
                                                                    // to notify a secure peripheral, or c) DMAFLUSHP
                                                                    // to flush a secure peripheral. This fault is a precise
                                                                    // abort.

                                                                    // Properties: Bit: 5, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_CH_EVNT_ERR_MASK         = 0x00000020;    // Indicates whether the DMA channel thread
const uintptr_t DMAC_FTR6_CH_EVNT_ERR_BPOS         = 5;             // attempts to execute DMAWFE or DMASEV with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFE to wait
                                                                    // for a secure event, or b) DMASEV to create a
                                                                    // secure event or secure interrupt.
                                                                    // This fault is a precise abort.

// RESERVED                                                            Properties: Bits: 4:2, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_OPERAND_INVALID_MASK     = 0x00000002;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR6_OPERAND_INVALID_BPOS     = 1;             // attempting to execute an instruction operand that
                                                                    // was not valid for the configuration of the DMAC:
                                                                    // 0: valid operand
                                                                    // 1: invalid operand.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR6_UNDEF_INSTR_MASK         = 0x00000001;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR6_UNDEF_INSTR_BPOS         = 0;             // attempting to execute an undefined instruction:
                                                                    // 0: defined instruction
                                                                    // 1: undefined instruction.
                                                                    // This fault is a precise abort.


//------------------------------------------------------------------------------
//
// Register (DMAC) FTR7
//
// Name                    DMAC_FTR7_REG
// Software Name           XDmaPs_FTCn_OFFSET(7)
// Relative Address        0x0000005C
// Absolute Address        dmac0_ns: 0xF800405C
//                         dmac0_s: 0xF800305C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Default Type DMA Channel 7
//
// Register DMAC_FTR7_REG Details
//
                                                                    // Properties: Bit: 31, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_LOCKUP_ERR_MASK          = 0x80000000;    // Indicates whether the DMA channel thread has
const uintptr_t DMAC_FTR7_LOCKUP_ERR_BPOS          = 31;            // locked-up because of resource starvation:
                                                                    // 0: DMA channel has adequate resources
                                                                    // 1: DMA channel has locked-up because of
                                                                    // insufficient resources. This fault is an imprecise
                                                                    // abort.

                                                                    // Properties: Bit: 30, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_DBG_INSTR_MASK           = 0x40000000;    // If the DMA channel aborts, this bit indicates
const uintptr_t DMAC_FTR7_DBG_INSTR_BPOS           = 30;            // whether the erroneous instruction was read from
                                                                    // the system memory or from the debug interface:
                                                                    // 0: system memory
                                                                    // 1: debug interface.

// RESERVED                                                            Properties: Bits: 29:19, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_DATA_READ_ERR_MASK       = 0x00040000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR7_DATA_READ_ERR_BPOS       = 18;            // receives on the RRESP bus, after the DMA
                                                                    // channel thread performs a data read:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 17, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_DATA_WRITE_ERR_MASK      = 0x00020000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR7_DATA_WRITE_ERR_BPOS      = 17;            // receives on the BRESP bus, after the DMA channel
                                                                    // thread performs a data write:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is an imprecise abort.

                                                                    // Properties: Bit: 16, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_INSTR_FETCH_ERR_MASK     = 0x00010000;    // Indicates the AXI response that the DMAC
const uintptr_t DMAC_FTR7_INSTR_FETCH_ERR_BPOS     = 16;            // receives on the RRESP bus after the DMA channel
                                                                    // thread performs an instruction fetch:
                                                                    // 0: OKAY response
                                                                    // 1: EXOKAY, SLVERR, or DECERR response. This
                                                                    // fault is a precise abort.

// RESERVED                                                            Properties: Bits: 15:14, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 13, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_ST_DATA_UNAVAILABLE_MASK = 0x00002000;    // Indicates whether the MFIFO did not contain the
const uintptr_t DMAC_FTR7_ST_DATA_UNAVAILABLE_BPOS = 13;            // data to enable the DMAC to perform the DMAST:
                                                                    // 0: MFIFO contains all the data to enable the
                                                                    // DMAST to complete
                                                                    // 1: previous DMALDs have not put enough data in
                                                                    // the MFIFO to enable the DMAST to complete.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 12, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_MFIFO_ERR_MASK           = 0x00001000;    // Indicates whether the MFIFO prevented the DMA
const uintptr_t DMAC_FTR7_MFIFO_ERR_BPOS           = 12;            // channel thread from executing DMALD or
                                                                    // DMAST:
                                                                    // DMALD:
                                                                    // 0: MFIFO contains sufficient space
                                                                    // 1: MFIFO is too small to hold the data that
                                                                    // DMALD requires.
                                                                    // DMAST:
                                                                    // 0: MFIFO contains sufficient data
                                                                    // 1: MFIFO is too small to store the data to enable
                                                                    // DMAST to complete.
                                                                    // This fault is an imprecise abort.

// RESERVED                                                            Properties: Bits: 11:8, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 7, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_CH_RDWR_ERR_MASK         = 0x00000080;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR7_CH_RDWR_ERR_BPOS         = 7;             // Non-secure state, attempts to program the CCR
                                                                    // registers to perform a secure read or secure write:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to perform a secure read or secure
                                                                    // write. This fault is a precise abort.

                                                                    // Properties: Bit: 6, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_CH_PERIPH_ERR_MASK       = 0x00000040;    // Indicates whether a DMA channel thread, in the
const uintptr_t DMAC_FTR7_CH_PERIPH_ERR_BPOS       = 6;             // Non-secure state, attempts to execute DMAWFP,
                                                                    // DMALDP, DMASTP, or DMAFLUSHP with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFP to wait
                                                                    // for a secure peripheral, b) DMALDP or DMASTP
                                                                    // to notify a secure peripheral, or c) DMAFLUSHP
                                                                    // to flush a secure peripheral. This fault is a precise
                                                                    // abort.

                                                                    // Properties: Bit: 5, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_CH_EVNT_ERR_MASK         = 0x00000020;    // Indicates whether the DMA channel thread
const uintptr_t DMAC_FTR7_CH_EVNT_ERR_BPOS         = 5;             // attempts to execute DMAWFE or DMASEV with
                                                                    // inappropriate security permissions:
                                                                    // 0: a DMA channel thread in the Non-secure state
                                                                    // is not violating the security permissions
                                                                    // 1: a DMA channel thread in the Non-secure state
                                                                    // attempted to execute either: a) DMAWFE to wait
                                                                    // for a secure event, or b) DMASEV to create a
                                                                    // secure event or secure interrupt.
                                                                    // This fault is a precise abort.

// RESERVED                                                            Properties: Bits: 4:2, Type: sro,nssraz,nsnsro, Reset Value: 0x0

                                                                    // Properties: Bit: 1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_OPERAND_INVALID_MASK     = 0x00000002;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR7_OPERAND_INVALID_BPOS     = 1;             // attempting to execute an instruction operand that
                                                                    // was not valid for the configuration of the DMAC:
                                                                    // 0: valid operand
                                                                    // 1: invalid operand.
                                                                    // This fault is a precise abort.

                                                                    // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_FTR7_UNDEF_INSTR_MASK         = 0x00000001;    // Indicates whether the DMA channel thread was
const uintptr_t DMAC_FTR7_UNDEF_INSTR_BPOS         = 0;             // attempting to execute an undefined instruction:
                                                                    // 0: defined instruction
                                                                    // 1: undefined instruction.
                                                                    // This fault is a precise abort.


//------------------------------------------------------------------------------
//
// Register (DMAC) CSR0
//
// Name                    DMAC_CSR0_REG
// Software Name           CS0
// Relative Address        0x00000100
// Absolute Address        dmac0_ns: 0xF8004100
//                         dmac0_s: 0xF8003100
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel Status DMA Channel 0
//
// Register DMAC_CSR0_REG Details
//
// RESERVED                                                       Properties: Bits: 31:22, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 21, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR0_CNS_MASK            = 0x00200000;    // Security status of the DMA channel thread:
const uintptr_t DMAC_CSR0_CNS_BPOS            = 21;            // 0: Secure state
                                                               // 1: Non-secure state.

// RESERVED                                                       Properties: Bits: 20:16, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR0_DMAWFP_PERIPH_MASK  = 0x00008000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR0_DMAWFP_PERIPH_BPOS  = 15;            // DMAWFP, this bit indicates whether the periph
                                                               // operand is set:
                                                               // 0: periph operand not set
                                                               // 1: periph operand set.
                                                               // Note: the status only applies when the channel is
                                                               // connected to one of the four peripheral request
                                                               // interfaces.

                                                               // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR0_DMAWFP_B_NS_MASK    = 0x00004000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR0_DMAWFP_B_NS_BPOS    = 14;            // DMAWFP, this bit indicates whether the burst or
                                                               // single operand were set:
                                                               // 0: single operand set
                                                               // 1: burst operand set

// RESERVED                                                       Properties: Bits: 13:9, Type: rud, Reset Value: 0x0

                                                               // Properties: Bits: 8:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR0_WAKEUP_NUM_MASK     = 0x000001F0;    // When the DMA channel thread executes a WFE or
const uintptr_t DMAC_CSR0_WAKEUP_NUM_BPOS     = 4;             // WFP instruction, these bits indicate the event or
                                                               // peripheral number that the channel is waiting for:
                                                               // Waiting for Event (WFE):
                                                               // 0 0000: waiting for event 0
                                                               // 0 0001: waiting for event 1
                                                               // ...
                                                               // 0 1111: waiting for event 15
                                                               // 1 xxxx: reserved
                                                               // Waiting for Peripheral (WFP):
                                                               // 0 0000: waiting for peripheral 0
                                                               // 0 0001: waiting for peripheral 1
                                                               // 0 0010: waiting for peripheral 2
                                                               // 0 0011: waiting for peripheral 3
                                                               // 1 11xx: reserved

                                                               // Properties: Bits: 3:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR0_CHANNEL_STATUS_MASK = 0x0000000F;    // The channel status encoding is:
const uintptr_t DMAC_CSR0_CHANNEL_STATUS_BPOS = 0;             // 0000: Stopped
                                                               // 0001: Executing
                                                               // 0010: Cache miss
                                                               // 0011: Updating PC
                                                               // 0100: Waiting for event
                                                               // 0101: At barrier
                                                               // 0110: reserved
                                                               // 0111: Waiting for peripheral
                                                               // 1000: Killing
                                                               // 1001: Completing
                                                               // 1010 to 1101: reserved
                                                               // 1110: Faulting completing
                                                               // 1111: Faulting.


//------------------------------------------------------------------------------
//
// Register (DMAC) CPC0
//
// Name                    DMAC_CPC0_REG
// Relative Address        0x00000104
// Absolute Address        dmac0_ns: 0xF8004104
//                         dmac0_s: 0xF8003104
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel PC for DMA Channel 0
//
// Register DMAC_CPC0_REG Details
//
                                                        // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CPC0_PC_CHNL_MASK = 0xFFFFFFFF;    // Program counter (physical memory address) for
const uintptr_t DMAC_CPC0_PC_CHNL_BPOS = 0;             // DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CSR1
//
// Name                    DMAC_CSR1_REG
// Software Name           XDmaPs_CSn_OFFSET(1)
// Relative Address        0x00000108
// Absolute Address        dmac0_ns: 0xF8004108
//                         dmac0_s: 0xF8003108
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel Status DMA Channel 1
//
// Register DMAC_CSR1_REG Details
//
// RESERVED                                                       Properties: Bits: 31:22, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 21, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR1_CNS_MASK            = 0x00200000;    // Security status of the DMA channel thread:
const uintptr_t DMAC_CSR1_CNS_BPOS            = 21;            // 0: Secure state
                                                               // 1: Non-secure state.

// RESERVED                                                       Properties: Bits: 20:16, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR1_DMAWFP_PERIPH_MASK  = 0x00008000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR1_DMAWFP_PERIPH_BPOS  = 15;            // DMAWFP, this bit indicates whether the periph
                                                               // operand is set:
                                                               // 0: periph operand not set
                                                               // 1: periph operand set.
                                                               // Note: the status only applies when the channel is
                                                               // connected to one of the four peripheral request
                                                               // interfaces.

                                                               // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR1_DMAWFP_B_NS_MASK    = 0x00004000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR1_DMAWFP_B_NS_BPOS    = 14;            // DMAWFP, this bit indicates whether the burst or
                                                               // single operand were set:
                                                               // 0: single operand set
                                                               // 1: burst operand set

// RESERVED                                                       Properties: Bits: 13:9, Type: rud, Reset Value: 0x0

                                                               // Properties: Bits: 8:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR1_WAKEUP_NUM_MASK     = 0x000001F0;    // When the DMA channel thread executes a WFE or
const uintptr_t DMAC_CSR1_WAKEUP_NUM_BPOS     = 4;             // WFP instruction, these bits indicate the event or
                                                               // peripheral number that the channel is waiting for:
                                                               // Waiting for Event (WFE):
                                                               // 0 0000: waiting for event 0
                                                               // 0 0001: waiting for event 1
                                                               // ...
                                                               // 0 1111: waiting for event 15
                                                               // 1 xxxx: reserved
                                                               // Waiting for Peripheral (WFP):
                                                               // 0 0000: waiting for peripheral 0
                                                               // 0 0001: waiting for peripheral 1
                                                               // 0 0010: waiting for peripheral 2
                                                               // 0 0011: waiting for peripheral 3
                                                               // 1 11xx: reserved

                                                               // Properties: Bits: 3:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR1_CHANNEL_STATUS_MASK = 0x0000000F;    // The channel status encoding is:
const uintptr_t DMAC_CSR1_CHANNEL_STATUS_BPOS = 0;             // 0000: Stopped
                                                               // 0001: Executing
                                                               // 0010: Cache miss
                                                               // 0011: Updating PC
                                                               // 0100: Waiting for event
                                                               // 0101: At barrier
                                                               // 0110: reserved
                                                               // 0111: Waiting for peripheral
                                                               // 1000: Killing
                                                               // 1001: Completing
                                                               // 1010 to 1101: reserved
                                                               // 1110: Faulting completing
                                                               // 1111: Faulting.


//------------------------------------------------------------------------------
//
// Register (DMAC) CPC1
//
// Name                    DMAC_CPC1_REG
// Software Name           XDmaPs_CPCn_OFFSET(1)
// Relative Address        0x0000010C
// Absolute Address        dmac0_ns: 0xF800410C
//                         dmac0_s: 0xF800310C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel PC for DMA Channel 1
//
// Register DMAC_CPC1_REG Details
//
                                                        // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CPC1_PC_CHNL_MASK = 0xFFFFFFFF;    // Program counter (physical memory address) for
const uintptr_t DMAC_CPC1_PC_CHNL_BPOS = 0;             // DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CSR2
//
// Name                    DMAC_CSR2_REG
// Software Name           XDmaPs_CSn_OFFSET(2)
// Relative Address        0x00000110
// Absolute Address        dmac0_ns: 0xF8004110
//                         dmac0_s: 0xF8003110
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel Status DMA Channel 2
//
// Register DMAC_CSR2_REG Details
//
// RESERVED                                                       Properties: Bits: 31:22, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 21, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR2_CNS_MASK            = 0x00200000;    // Security status of the DMA channel thread:
const uintptr_t DMAC_CSR2_CNS_BPOS            = 21;            // 0: Secure state
                                                               // 1: Non-secure state.

// RESERVED                                                       Properties: Bits: 20:16, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR2_DMAWFP_PERIPH_MASK  = 0x00008000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR2_DMAWFP_PERIPH_BPOS  = 15;            // DMAWFP, this bit indicates whether the periph
                                                               // operand is set:
                                                               // 0: periph operand not set
                                                               // 1: periph operand set.
                                                               // Note: the status only applies when the channel is
                                                               // connected to one of the four peripheral request
                                                               // interfaces.

                                                               // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR2_DMAWFP_B_NS_MASK    = 0x00004000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR2_DMAWFP_B_NS_BPOS    = 14;            // DMAWFP, this bit indicates whether the burst or
                                                               // single operand were set:
                                                               // 0: single operand set
                                                               // 1: burst operand set

// RESERVED                                                       Properties: Bits: 13:9, Type: rud, Reset Value: 0x0

                                                               // Properties: Bits: 8:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR2_WAKEUP_NUM_MASK     = 0x000001F0;    // When the DMA channel thread executes a WFE or
const uintptr_t DMAC_CSR2_WAKEUP_NUM_BPOS     = 4;             // WFP instruction, these bits indicate the event or
                                                               // peripheral number that the channel is waiting for:
                                                               // Waiting for Event (WFE):
                                                               // 0 0000: waiting for event 0
                                                               // 0 0001: waiting for event 1
                                                               // ...
                                                               // 0 1111: waiting for event 15
                                                               // 1 xxxx: reserved
                                                               // Waiting for Peripheral (WFP):
                                                               // 0 0000: waiting for peripheral 0
                                                               // 0 0001: waiting for peripheral 1
                                                               // 0 0010: waiting for peripheral 2
                                                               // 0 0011: waiting for peripheral 3
                                                               // 1 11xx: reserved

                                                               // Properties: Bits: 3:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR2_CHANNEL_STATUS_MASK = 0x0000000F;    // The channel status encoding is:
const uintptr_t DMAC_CSR2_CHANNEL_STATUS_BPOS = 0;             // 0000: Stopped
                                                               // 0001: Executing
                                                               // 0010: Cache miss
                                                               // 0011: Updating PC
                                                               // 0100: Waiting for event
                                                               // 0101: At barrier
                                                               // 0110: reserved
                                                               // 0111: Waiting for peripheral
                                                               // 1000: Killing
                                                               // 1001: Completing
                                                               // 1010 to 1101: reserved
                                                               // 1110: Faulting completing
                                                               // 1111: Faulting.


//------------------------------------------------------------------------------
//
// Register (DMAC) CPC2
//
// Name                    DMAC_CPC2_REG
// Software Name           XDmaPs_CPCn_OFFSET(2)
// Relative Address        0x00000114
// Absolute Address        dmac0_ns: 0xF8004114
//                         dmac0_s: 0xF8003114
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel PC for DMA Channel 2
//
// Register DMAC_CPC2_REG Details
//
                                                        // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CPC2_PC_CHNL_MASK = 0xFFFFFFFF;    // Program counter (physical memory address) for
const uintptr_t DMAC_CPC2_PC_CHNL_BPOS = 0;             // DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CSR3
//
// Name                    DMAC_CSR3_REG
// Software Name           XDmaPs_CSn_OFFSET(3)
// Relative Address        0x00000118
// Absolute Address        dmac0_ns: 0xF8004118
//                         dmac0_s: 0xF8003118
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel Status DMA Channel 3
//
// Register DMAC_CSR3_REG Details
//
// RESERVED                                                       Properties: Bits: 31:22, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 21, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR3_CNS_MASK            = 0x00200000;    // Security status of the DMA channel thread:
const uintptr_t DMAC_CSR3_CNS_BPOS            = 21;            // 0: Secure state
                                                               // 1: Non-secure state.

// RESERVED                                                       Properties: Bits: 20:16, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR3_DMAWFP_PERIPH_MASK  = 0x00008000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR3_DMAWFP_PERIPH_BPOS  = 15;            // DMAWFP, this bit indicates whether the periph
                                                               // operand is set:
                                                               // 0: periph operand not set
                                                               // 1: periph operand set.
                                                               // Note: the status only applies when the channel is
                                                               // connected to one of the four peripheral request
                                                               // interfaces.

                                                               // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR3_DMAWFP_B_NS_MASK    = 0x00004000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR3_DMAWFP_B_NS_BPOS    = 14;            // DMAWFP, this bit indicates whether the burst or
                                                               // single operand were set:
                                                               // 0: single operand set
                                                               // 1: burst operand set

// RESERVED                                                       Properties: Bits: 13:9, Type: rud, Reset Value: 0x0

                                                               // Properties: Bits: 8:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR3_WAKEUP_NUM_MASK     = 0x000001F0;    // When the DMA channel thread executes a WFE or
const uintptr_t DMAC_CSR3_WAKEUP_NUM_BPOS     = 4;             // WFP instruction, these bits indicate the event or
                                                               // peripheral number that the channel is waiting for:
                                                               // Waiting for Event (WFE):
                                                               // 0 0000: waiting for event 0
                                                               // 0 0001: waiting for event 1
                                                               // ...
                                                               // 0 1111: waiting for event 15
                                                               // 1 xxxx: reserved
                                                               // Waiting for Peripheral (WFP):
                                                               // 0 0000: waiting for peripheral 0
                                                               // 0 0001: waiting for peripheral 1
                                                               // 0 0010: waiting for peripheral 2
                                                               // 0 0011: waiting for peripheral 3
                                                               // 1 11xx: reserved

                                                               // Properties: Bits: 3:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR3_CHANNEL_STATUS_MASK = 0x0000000F;    // The channel status encoding is:
const uintptr_t DMAC_CSR3_CHANNEL_STATUS_BPOS = 0;             // 0000: Stopped
                                                               // 0001: Executing
                                                               // 0010: Cache miss
                                                               // 0011: Updating PC
                                                               // 0100: Waiting for event
                                                               // 0101: At barrier
                                                               // 0110: reserved
                                                               // 0111: Waiting for peripheral
                                                               // 1000: Killing
                                                               // 1001: Completing
                                                               // 1010 to 1101: reserved
                                                               // 1110: Faulting completing
                                                               // 1111: Faulting.


//------------------------------------------------------------------------------
//
// Register (DMAC) CPC3
//
// Name                    DMAC_CPC3_REG
// Software Name           XDmaPs_CPCn_OFFSET(3)
// Relative Address        0x0000011C
// Absolute Address        dmac0_ns: 0xF800411C
//                         dmac0_s: 0xF800311C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel PC for DMA Channel 3
//
// Register DMAC_CPC3_REG Details
//
                                                        // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CPC3_PC_CHNL_MASK = 0xFFFFFFFF;    // Program counter (physical memory address) for
const uintptr_t DMAC_CPC3_PC_CHNL_BPOS = 0;             // DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CSR4
//
// Name                    DMAC_CSR4_REG
// Software Name           XDmaPs_CSn_OFFSET(4)
// Relative Address        0x00000120
// Absolute Address        dmac0_ns: 0xF8004120
//                         dmac0_s: 0xF8003120
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel Status DMA Channel 4
//
// Register DMAC_CSR4_REG Details
//
// RESERVED                                                       Properties: Bits: 31:22, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 21, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR4_CNS_MASK            = 0x00200000;    // Security status of the DMA channel thread:
const uintptr_t DMAC_CSR4_CNS_BPOS            = 21;            // 0: Secure state
                                                               // 1: Non-secure state.

// RESERVED                                                       Properties: Bits: 20:16, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR4_DMAWFP_PERIPH_MASK  = 0x00008000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR4_DMAWFP_PERIPH_BPOS  = 15;            // DMAWFP, this bit indicates whether the periph
                                                               // operand is set:
                                                               // 0: periph operand not set
                                                               // 1: periph operand set.
                                                               // Note: the status only applies when the channel is
                                                               // connected to one of the four peripheral request
                                                               // interfaces.

                                                               // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR4_DMAWFP_B_NS_MASK    = 0x00004000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR4_DMAWFP_B_NS_BPOS    = 14;            // DMAWFP, this bit indicates whether the burst or
                                                               // single operand were set:
                                                               // 0: single operand set
                                                               // 1: burst operand set

// RESERVED                                                       Properties: Bits: 13:9, Type: rud, Reset Value: 0x0

                                                               // Properties: Bits: 8:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR4_WAKEUP_NUM_MASK     = 0x000001F0;    // When the DMA channel thread executes a WFE or
const uintptr_t DMAC_CSR4_WAKEUP_NUM_BPOS     = 4;             // WFP instruction, these bits indicate the event or
                                                               // peripheral number that the channel is waiting for:
                                                               // Waiting for Event (WFE):
                                                               // 0 0000: waiting for event 0
                                                               // 0 0001: waiting for event 1
                                                               // ...
                                                               // 0 1111: waiting for event 15
                                                               // 1 xxxx: reserved
                                                               // Waiting for Peripheral (WFP):
                                                               // 0 0000: waiting for peripheral 0
                                                               // 0 0001: waiting for peripheral 1
                                                               // 0 0010: waiting for peripheral 2
                                                               // 0 0011: waiting for peripheral 3
                                                               // 1 11xx: reserved

                                                               // Properties: Bits: 3:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR4_CHANNEL_STATUS_MASK = 0x0000000F;    // The channel status encoding is:
const uintptr_t DMAC_CSR4_CHANNEL_STATUS_BPOS = 0;             // 0000: Stopped
                                                               // 0001: Executing
                                                               // 0010: Cache miss
                                                               // 0011: Updating PC
                                                               // 0100: Waiting for event
                                                               // 0101: At barrier
                                                               // 0110: reserved
                                                               // 0111: Waiting for peripheral
                                                               // 1000: Killing
                                                               // 1001: Completing
                                                               // 1010 to 1101: reserved
                                                               // 1110: Faulting completing
                                                               // 1111: Faulting.


//------------------------------------------------------------------------------
//
// Register (DMAC) CPC4
//
// Name                    DMAC_CPC4_REG
// Software Name           XDmaPs_CPCn_OFFSET(4)
// Relative Address        0x00000124
// Absolute Address        dmac0_ns: 0xF8004124
//                         dmac0_s: 0xF8003124
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel PC for DMA Channel 4
//
// Register DMAC_CPC4_REG Details
//
                                                        // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CPC4_PC_CHNL_MASK = 0xFFFFFFFF;    // Program counter (physical memory address) for
const uintptr_t DMAC_CPC4_PC_CHNL_BPOS = 0;             // DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CSR5
//
// Name                    DMAC_CSR5_REG
// Software Name           XDmaPs_CSn_OFFSET(5)
// Relative Address        0x00000128
// Absolute Address        dmac0_ns: 0xF8004128
//                         dmac0_s: 0xF8003128
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel Status DMA Channel 5
//
// Register DMAC_CSR5_REG Details
//
// RESERVED                                                       Properties: Bits: 31:22, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 21, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR5_CNS_MASK            = 0x00200000;    // Security status of the DMA channel thread:
const uintptr_t DMAC_CSR5_CNS_BPOS            = 21;            // 0: Secure state
                                                               // 1: Non-secure state.

// RESERVED                                                       Properties: Bits: 20:16, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR5_DMAWFP_PERIPH_MASK  = 0x00008000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR5_DMAWFP_PERIPH_BPOS  = 15;            // DMAWFP, this bit indicates whether the periph
                                                               // operand is set:
                                                               // 0: periph operand not set
                                                               // 1: periph operand set.
                                                               // Note: the status only applies when the channel is
                                                               // connected to one of the four peripheral request
                                                               // interfaces.

                                                               // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR5_DMAWFP_B_NS_MASK    = 0x00004000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR5_DMAWFP_B_NS_BPOS    = 14;            // DMAWFP, this bit indicates whether the burst or
                                                               // single operand were set:
                                                               // 0: single operand set
                                                               // 1: burst operand set

// RESERVED                                                       Properties: Bits: 13:9, Type: rud, Reset Value: 0x0

                                                               // Properties: Bits: 8:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR5_WAKEUP_NUM_MASK     = 0x000001F0;    // When the DMA channel thread executes a WFE or
const uintptr_t DMAC_CSR5_WAKEUP_NUM_BPOS     = 4;             // WFP instruction, these bits indicate the event or
                                                               // peripheral number that the channel is waiting for:
                                                               // Waiting for Event (WFE):
                                                               // 0 0000: waiting for event 0
                                                               // 0 0001: waiting for event 1
                                                               // ...
                                                               // 0 1111: waiting for event 15
                                                               // 1 xxxx: reserved
                                                               // Waiting for Peripheral (WFP):
                                                               // 0 0000: waiting for peripheral 0
                                                               // 0 0001: waiting for peripheral 1
                                                               // 0 0010: waiting for peripheral 2
                                                               // 0 0011: waiting for peripheral 3
                                                               // 1 11xx: reserved

                                                               // Properties: Bits: 3:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR5_CHANNEL_STATUS_MASK = 0x0000000F;    // The channel status encoding is:
const uintptr_t DMAC_CSR5_CHANNEL_STATUS_BPOS = 0;             // 0000: Stopped
                                                               // 0001: Executing
                                                               // 0010: Cache miss
                                                               // 0011: Updating PC
                                                               // 0100: Waiting for event
                                                               // 0101: At barrier
                                                               // 0110: reserved
                                                               // 0111: Waiting for peripheral
                                                               // 1000: Killing
                                                               // 1001: Completing
                                                               // 1010 to 1101: reserved
                                                               // 1110: Faulting completing
                                                               // 1111: Faulting.


//------------------------------------------------------------------------------
//
// Register (DMAC) CPC5
//
// Name                    DMAC_CPC5_REG
// Software Name           XDmaPs_CPCn_OFFSET(5)
// Relative Address        0x0000012C
// Absolute Address        dmac0_ns: 0xF800412C
//                         dmac0_s: 0xF800312C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel PC for DMA Channel 5
//
// Register DMAC_CPC5_REG Details
//
                                                        // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CPC5_PC_CHNL_MASK = 0xFFFFFFFF;    // Program counter (physical memory address) for
const uintptr_t DMAC_CPC5_PC_CHNL_BPOS = 0;             // DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CSR6
//
// Name                    DMAC_CSR6_REG
// Software Name           XDmaPs_CSn_OFFSET(6)
// Relative Address        0x00000130
// Absolute Address        dmac0_ns: 0xF8004130
//                         dmac0_s: 0xF8003130
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel Status DMA Channel 6
//
// Register DMAC_CSR6_REG Details
//
// RESERVED                                                       Properties: Bits: 31:22, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 21, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR6_CNS_MASK            = 0x00200000;    // Security status of the DMA channel thread:
const uintptr_t DMAC_CSR6_CNS_BPOS            = 21;            // 0: Secure state
                                                               // 1: Non-secure state.

// RESERVED                                                       Properties: Bits: 20:16, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR6_DMAWFP_PERIPH_MASK  = 0x00008000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR6_DMAWFP_PERIPH_BPOS  = 15;            // DMAWFP, this bit indicates whether the periph
                                                               // operand is set:
                                                               // 0: periph operand not set
                                                               // 1: periph operand set.
                                                               // Note: the status only applies when the channel is
                                                               // connected to one of the four peripheral request
                                                               // interfaces.

                                                               // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR6_DMAWFP_B_NS_MASK    = 0x00004000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR6_DMAWFP_B_NS_BPOS    = 14;            // DMAWFP, this bit indicates whether the burst or
                                                               // single operand were set:
                                                               // 0: single operand set
                                                               // 1: burst operand set

// RESERVED                                                       Properties: Bits: 13:9, Type: rud, Reset Value: 0x0

                                                               // Properties: Bits: 8:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR6_WAKEUP_NUM_MASK     = 0x000001F0;    // When the DMA channel thread executes a WFE or
const uintptr_t DMAC_CSR6_WAKEUP_NUM_BPOS     = 4;             // WFP instruction, these bits indicate the event or
                                                               // peripheral number that the channel is waiting for:
                                                               // Waiting for Event (WFE):
                                                               // 0 0000: waiting for event 0
                                                               // 0 0001: waiting for event 1
                                                               // ...
                                                               // 0 1111: waiting for event 15
                                                               // 1 xxxx: reserved
                                                               // Waiting for Peripheral (WFP):
                                                               // 0 0000: waiting for peripheral 0
                                                               // 0 0001: waiting for peripheral 1
                                                               // 0 0010: waiting for peripheral 2
                                                               // 0 0011: waiting for peripheral 3
                                                               // 1 11xx: reserved

                                                               // Properties: Bits: 3:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR6_CHANNEL_STATUS_MASK = 0x0000000F;    // The channel status encoding is:
const uintptr_t DMAC_CSR6_CHANNEL_STATUS_BPOS = 0;             // 0000: Stopped
                                                               // 0001: Executing
                                                               // 0010: Cache miss
                                                               // 0011: Updating PC
                                                               // 0100: Waiting for event
                                                               // 0101: At barrier
                                                               // 0110: reserved
                                                               // 0111: Waiting for peripheral
                                                               // 1000: Killing
                                                               // 1001: Completing
                                                               // 1010 to 1101: reserved
                                                               // 1110: Faulting completing
                                                               // 1111: Faulting.


//------------------------------------------------------------------------------
//
// Register (DMAC) CPC6
//
// Name                    DMAC_CPC6_REG
// Software Name           XDmaPs_CPCn_OFFSET(6)
// Relative Address        0x00000134
// Absolute Address        dmac0_ns: 0xF8004134
//                         dmac0_s: 0xF8003134
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel PC for DMA Channel 6
//
// Register DMAC_CPC6_REG Details
//
                                                        // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CPC6_PC_CHNL_MASK = 0xFFFFFFFF;    // Program counter (physical memory address) for
const uintptr_t DMAC_CPC6_PC_CHNL_BPOS = 0;             // DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CSR7
//
// Name                    DMAC_CSR7_REG
// Software Name           XDmaPs_CSn_OFFSET(7)
// Relative Address        0x00000138
// Absolute Address        dmac0_ns: 0xF8004138
//                         dmac0_s: 0xF8003138
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel Status DMA Channel 7
//
// Register DMAC_CSR7_REG Details
//
// RESERVED                                                       Properties: Bits: 31:22, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 21, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR7_CNS_MASK            = 0x00200000;    // Security status of the DMA channel thread:
const uintptr_t DMAC_CSR7_CNS_BPOS            = 21;            // 0: Secure state
                                                               // 1: Non-secure state.

// RESERVED                                                       Properties: Bits: 20:16, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR7_DMAWFP_PERIPH_MASK  = 0x00008000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR7_DMAWFP_PERIPH_BPOS  = 15;            // DMAWFP, this bit indicates whether the periph
                                                               // operand is set:
                                                               // 0: periph operand not set
                                                               // 1: periph operand set.
                                                               // Note: the status only applies when the channel is
                                                               // connected to one of the four peripheral request
                                                               // interfaces.

                                                               // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR7_DMAWFP_B_NS_MASK    = 0x00004000;    // When the DMA channel thread executes
const uintptr_t DMAC_CSR7_DMAWFP_B_NS_BPOS    = 14;            // DMAWFP, this bit indicates whether the burst or
                                                               // single operand were set:
                                                               // 0: single operand set
                                                               // 1: burst operand set

// RESERVED                                                       Properties: Bits: 13:9, Type: rud, Reset Value: 0x0

                                                               // Properties: Bits: 8:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR7_WAKEUP_NUM_MASK     = 0x000001F0;    // When the DMA channel thread executes a WFE or
const uintptr_t DMAC_CSR7_WAKEUP_NUM_BPOS     = 4;             // WFP instruction, these bits indicate the event or
                                                               // peripheral number that the channel is waiting for:
                                                               // Waiting for Event (WFE):
                                                               // 0 0000: waiting for event 0
                                                               // 0 0001: waiting for event 1
                                                               // ...
                                                               // 0 1111: waiting for event 15
                                                               // 1 xxxx: reserved
                                                               // Waiting for Peripheral (WFP):
                                                               // 0 0000: waiting for peripheral 0
                                                               // 0 0001: waiting for peripheral 1
                                                               // 0 0010: waiting for peripheral 2
                                                               // 0 0011: waiting for peripheral 3
                                                               // 1 11xx: reserved

                                                               // Properties: Bits: 3:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CSR7_CHANNEL_STATUS_MASK = 0x0000000F;    // The channel status encoding is:
const uintptr_t DMAC_CSR7_CHANNEL_STATUS_BPOS = 0;             // 0000: Stopped
                                                               // 0001: Executing
                                                               // 0010: Cache miss
                                                               // 0011: Updating PC
                                                               // 0100: Waiting for event
                                                               // 0101: At barrier
                                                               // 0110: reserved
                                                               // 0111: Waiting for peripheral
                                                               // 1000: Killing
                                                               // 1001: Completing
                                                               // 1010 to 1101: reserved
                                                               // 1110: Faulting completing
                                                               // 1111: Faulting.


//------------------------------------------------------------------------------
//
// Register (DMAC) CPC7
//
// Name                    DMAC_CPC7_REG
// Software Name           XDmaPs_CPCn_OFFSET(7)
// Relative Address        0x0000013C
// Absolute Address        dmac0_ns: 0xF800413C
//                         dmac0_s: 0xF800313C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Channel PC for DMA Channel 7
//
// Register DMAC_CPC7_REG Details
//
                                                        // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CPC7_PC_CHNL_MASK = 0xFFFFFFFF;    // Program counter (physical memory address) for
const uintptr_t DMAC_CPC7_PC_CHNL_BPOS = 0;             // DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) SAR0
//
// Name                    DMAC_SAR0_REG
// Software Name           SA_0
// Relative Address        0x00000400
// Absolute Address        dmac0_ns: 0xF8004400
//                         dmac0_s: 0xF8003400
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Source Address DMA Channel 0
//
// Register DMAC_SAR0_REG Details
//
                                                         // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_SAR0_SRC_ADDR_MASK = 0xFFFFFFFF;    // Source data address (physical memory address)
const uintptr_t DMAC_SAR0_SRC_ADDR_BPOS = 0;             // for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) DAR0
//
// Name                    DMAC_DAR0_REG
// Software Name           DA_0
// Relative Address        0x00000404
// Absolute Address        dmac0_ns: 0xF8004404
//                         dmac0_s: 0xF8003404
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Destination Addr DMA Channel 0
//
// Register DMAC_DAR0_REG Details
//
                                                          // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DAR0_DEST_ADDR_MASK = 0xFFFFFFFF;    // Destination data address (physical memory
const uintptr_t DMAC_DAR0_DEST_ADDR_BPOS = 0;             // address) for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CCR0
//
// Name                    DMAC_CCR0_REG
// Software Name           CC_0
// Relative Address        0x00000408
// Absolute Address        dmac0_ns: 0xF8004408
//                         dmac0_s: 0xF8003408
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00800200
// Description             Channel Control DMA Channel 0
//
// Register DMAC_CCR0_REG Details
//
// RESERVED                                                                    Properties: Bit: 31, Type: rud, Reset Value: 0x0

                                                                            // Properties: Bits: 30:28, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR0_ENDIAN_SWAP_SIZE_MASK            = 0x70000000;    // Data swap: little-endian and byte-invariant
const uintptr_t DMAC_CCR0_ENDIAN_SWAP_SIZE_BPOS            = 28;            // big-endian (BE-8) formats.
                                                                            // 000: No swap, 8-bit data
                                                                            // 001: Swap bytes within 16-bit data
                                                                            // 010: Swap bytes within 32-bit data
                                                                            // 011: Swap bytes within 64-bit data
                                                                            // 100: Swap bytes within 128-bit data
                                                                            // 101 to 111: Reserved

                                                                            // Properties: Bits: 27:25, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR0_DST_CACHE_CTRLDST_PROT_CTRL_MASK = 0x0E000000;    // Programs the AXI AWCACHE signals that are
const uintptr_t DMAC_CCR0_DST_CACHE_CTRLDST_PROT_CTRL_BPOS = 25;            // used when the DMAC writes to the destination (0:
                                                                            // Low, 1: High):
                                                                            // Bit [27] programs AWCACHE[3]
                                                                            // Hardwired Low to AWCACHE[2]
                                                                            // Bit [26] programs AWCACHE[1]
                                                                            // Bit [25] programs AWCACHE[0]
                                                                            // Note: Setting AWCACHE[3,1]=b10 violates the
                                                                            // AXI protocol.
                                                                            // Programs the AWPROT signals that are used
                                                                            // when the DMAC writes the destination data (0:
                                                                            // Low, 1: High):
                                                                            // Bit [24] programs AWPROT[2]
                                                                            // Bit [23] programs AWPROT[1]
                                                                            // Bit [22] programs AWPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program AWPROT[1] Low, that is, a secure
                                                                            // access. If a DMA channel in the Non-secure state
                                                                            // attempts to set AWPROT[1] Low, then the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 21:18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR0_DST_BURST_LEN_MASK               = 0x003C0000;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR0_DST_BURST_LEN_BPOS               = 18;            // data transfers that the DMAC performs when it
                                                                            // writes the destination data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // 0010: 3 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size.
                                                                            // Note: These bits control the state of AWLEN[3:0].

                                                                            // Properties: Bits: 17:15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR0_DST_BURST_SIZE_MASK              = 0x00038000;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR0_DST_BURST_SIZE_BPOS              = 15;            // number of bytes that the DMAC writes to the
                                                                            // destination:
                                                                            // 000: writes 1 byte per beat
                                                                            // 001: writes 2 bytes per beat
                                                                            // 010: writes 4 bytes per beat
                                                                            // 011: writes 8 bytes per beat
                                                                            // 100: writes 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size. Note: These bits control the state
                                                                            // of AWSIZE[2:0].

                                                                            // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR0_DST_INC_MASK                     = 0x00004000;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR0_DST_INC_BPOS                     = 14;            // when it writes the destination data:
                                                                            // 0: Fixed-address burst. The DMAC signals
                                                                            // AWBURST[0] Low.
                                                                            // 1: Incrementing-address burst. The DMAC
                                                                            // signals AWBURST[0] HIgh.

                                                                            // Properties: Bits: 13:11, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR0_SRC_CACHE_CTRLSRC_PROT_CTRL_MASK = 0x00003800;    // Programs the AXI ARCACHE signals that are
const uintptr_t DMAC_CCR0_SRC_CACHE_CTRLSRC_PROT_CTRL_BPOS = 11;            // used for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [13] programs ARCACHE[2]
                                                                            // Bit [12] programs ARCACHE[1]
                                                                            // Bit [11] programs ARCACHE[0]
                                                                            // Note: The DMAC ties ARCACHE[3] Low. Setting
                                                                            // ARCACHE[2:1]= b10 violates the AXI protocol.
                                                                            // Programs the AXI ARPROT signals that are used
                                                                            // for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [10] programs ARPROT[2]
                                                                            // Bit [9] programs ARPROT[1]
                                                                            // Bit [8] programs ARPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program ARPROT[1] Low, that is, a secure access.
                                                                            // If a DMA channel in the Non-secure state
                                                                            // attempts to set ARPROT[1] Low, the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 7:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR0_SRC_BURST_LEN_MASK               = 0x000000F0;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR0_SRC_BURST_LEN_BPOS               = 4;             // data transfers that the DMAC performs when it
                                                                            // reads the source data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARLEN[3:0].

                                                                            // Properties: Bits: 3:1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR0_SRC_BURST_SIZE_MASK              = 0x0000000E;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR0_SRC_BURST_SIZE_BPOS              = 1;             // number of bytes that the DMAC reads from the
                                                                            // source:
                                                                            // 000: reads 1 byte per beat
                                                                            // 001: reads 2 bytes per beat
                                                                            // 010: reads 4 bytes per beat
                                                                            // 011: reads 8 bytes per beat
                                                                            // 100: reads 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARSIZE[2:0].

                                                                            // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR0_SRC_INC_MASK                     = 0x00000001;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR0_SRC_INC_BPOS                     = 0;             // when it reads the source data:
                                                                            // 0: Fixed-address burst, DMAC signal
                                                                            // ARBURST[0] driven Low.
                                                                            // 1: Incrementing-address burst, DMAC signal
                                                                            // ARBURST[0] driven High.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC0_0
//
// Name                    DMAC_LC0_0_REG
// Relative Address        0x0000040C
// Absolute Address        dmac0_ns: 0xF800440C
//                         dmac0_s: 0xF800340C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Loop Counter 0 DMA Channel 0
//
// Register DMAC_LC0_0_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC0_0_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter zero for the
const uintptr_t DMAC_LC0_0_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter zero.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC1_0
//
// Name                     DMAC_LC1_0_REG
// Relative Address         0x00000410
// Absolute Address         dmac0_ns: 0xF8004410
//                          dmac0_s: 0xF8003410
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 1 DMA Channel 0
//
// Register DMAC_LC1_0_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC1_0_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter one for the
const uintptr_t DMAC_LC1_0_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter one.


//------------------------------------------------------------------------------
//
// Register (DMAC) SAR1
//
// Name                     DMAC_SAR1_REG
// Software Name            XDmaPs_SA_n_OFFSET(1)
// Relative Address         0x00000420
// Absolute Address         dmac0_ns: 0xF8004420
//                          dmac0_s: 0xF8003420
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description             Source address DMA Channel 1
//
// Register DMAC_SAR1_REG Details
//
                                                         // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_SAR1_SRC_ADDR_MASK = 0xFFFFFFFF;    // Source data address (physical memory address)
const uintptr_t DMAC_SAR1_SRC_ADDR_BPOS = 0;             // for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) DAR1
//
// Name                    DMAC_DAR1_REG
// Software Name           XDmaPs_DA_n_OFFSET(1)
// Relative Address        0x00000424
// Absolute Address        dmac0_ns: 0xF8004424
//                         dmac0_s: 0xF8003424
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Destination Addr DMA Channel 1
//
// Register DMAC_DAR1_REG Details
//
                                                          // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DAR1_DEST_ADDR_MASK = 0xFFFFFFFF;    // Destination data address (physical memory
const uintptr_t DMAC_DAR1_DEST_ADDR_BPOS = 0;             // address) for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CCR1
//
// Name                    DMAC_CCR1_REG
// Software Name           XDmaPs_CC_n_OFFSET(1)
// Relative Address        0x00000428
// Absolute Address        dmac0_ns: 0xF8004428
//                         dmac0_s: 0xF8003428
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00800200
// Description             Channel Control DMA Channel 1
//
// Register DMAC_CCR1_REG Details
//
// RESERVED                                                                    Properties: Bit: 31, Type: rud, Reset Value: 0x0

                                                                            // Properties: Bits: 30:28, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR1_ENDIAN_SWAP_SIZE_MASK            = 0x70000000;    // Data swap: little-endian and byte-invariant
const uintptr_t DMAC_CCR1_ENDIAN_SWAP_SIZE_BPOS            = 28;            // big-endian (BE-8) formats.
                                                                            // 000: No swap, 8-bit data
                                                                            // 001: Swap bytes within 16-bit data
                                                                            // 010: Swap bytes within 32-bit data
                                                                            // 011: Swap bytes within 64-bit data
                                                                            // 100: Swap bytes within 128-bit data
                                                                            // 101 to 111: Reserved

                                                                            // Properties: Bits: 27:25, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR1_DST_CACHE_CTRLDST_PROT_CTRL_MASK = 0x0E000000;    // Programs the AXI AWCACHE signals that are
const uintptr_t DMAC_CCR1_DST_CACHE_CTRLDST_PROT_CTRL_BPOS = 25;            // used when the DMAC writes to the destination (0:
                                                                            // Low, 1: High):
                                                                            // Bit [27] programs AWCACHE[3]
                                                                            // Hardwired Low to AWCACHE[2]
                                                                            // Bit [26] programs AWCACHE[1]
                                                                            // Bit [25] programs AWCACHE[0]
                                                                            // Note: Setting AWCACHE[3,1]=b10 violates the
                                                                            // AXI protocol.
                                                                            // Programs the AWPROT signals that are used
                                                                            // when the DMAC writes the destination data (0:
                                                                            // Low, 1: High):
                                                                            // Bit [24] programs AWPROT[2]
                                                                            // Bit [23] programs AWPROT[1]
                                                                            // Bit [22] programs AWPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program AWPROT[1] Low, that is, a secure
                                                                            // access. If a DMA channel in the Non-secure state
                                                                            // attempts to set AWPROT[1] Low, then the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 21:18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR1_DST_BURST_LEN_MASK               = 0x003C0000;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR1_DST_BURST_LEN_BPOS               = 18;            // data transfers that the DMAC performs when it
                                                                            // writes the destination data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // 0010: 3 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size.
                                                                            // Note: These bits control the state of AWLEN[3:0].

                                                                            // Properties: Bits: 17:15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR1_DST_BURST_SIZE_MASK              = 0x00038000;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR1_DST_BURST_SIZE_BPOS              = 15;            // number of bytes that the DMAC writes to the
                                                                            // destination:
                                                                            // 000: writes 1 byte per beat
                                                                            // 001: writes 2 bytes per beat
                                                                            // 010: writes 4 bytes per beat
                                                                            // 011: writes 8 bytes per beat
                                                                            // 100: writes 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size. Note: These bits control the state
                                                                            // of AWSIZE[2:0].

                                                                            // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR1_DST_INC_MASK                     = 0x00004000;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR1_DST_INC_BPOS                     = 14;            // when it writes the destination data:
                                                                            // 0: Fixed-address burst. The DMAC signals
                                                                            // AWBURST[0] Low.
                                                                            // 1: Incrementing-address burst. The DMAC
                                                                            // signals AWBURST[0] HIgh.

                                                                            // Properties: Bits: 13:11, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR1_SRC_CACHE_CTRLSRC_PROT_CTRL_MASK = 0x00003800;    // Programs the AXI ARCACHE signals that are
const uintptr_t DMAC_CCR1_SRC_CACHE_CTRLSRC_PROT_CTRL_BPOS = 11;            // used for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [13] programs ARCACHE[2]
                                                                            // Bit [12] programs ARCACHE[1]
                                                                            // Bit [11] programs ARCACHE[0]
                                                                            // Note: The DMAC ties ARCACHE[3] Low. Setting
                                                                            // ARCACHE[2:1]= b10 violates the AXI protocol.
                                                                            // Programs the AXI ARPROT signals that are used
                                                                            // for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [10] programs ARPROT[2]
                                                                            // Bit [9] programs ARPROT[1]
                                                                            // Bit [8] programs ARPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program ARPROT[1] Low, that is, a secure access.
                                                                            // If a DMA channel in the Non-secure state
                                                                            // attempts to set ARPROT[1] Low, the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 7:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR1_SRC_BURST_LEN_MASK               = 0x000000F0;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR1_SRC_BURST_LEN_BPOS               = 4;             // data transfers that the DMAC performs when it
                                                                            // reads the source data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARLEN[3:0].

                                                                            // Properties: Bits: 3:1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR1_SRC_BURST_SIZE_MASK              = 0x0000000E;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR1_SRC_BURST_SIZE_BPOS              = 1;             // number of bytes that the DMAC reads from the
                                                                            // source:
                                                                            // 000: reads 1 byte per beat
                                                                            // 001: reads 2 bytes per beat
                                                                            // 010: reads 4 bytes per beat
                                                                            // 011: reads 8 bytes per beat
                                                                            // 100: reads 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARSIZE[2:0].

                                                                            // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR1_SRC_INC_MASK                     = 0x00000001;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR1_SRC_INC_BPOS                     = 0;             // when it reads the source data:
                                                                            // 0: Fixed-address burst, DMAC signal
                                                                            // ARBURST[0] driven Low.
                                                                            // 1: Incrementing-address burst, DMAC signal
                                                                            // ARBURST[0] driven High.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC0_1
//
// Name                    DMAC_LC0_1_REG
// Software Name           XDmaPs_LC0_n_OFFSET(1)
// Relative Address        0x0000042C
// Absolute Address        dmac0_ns: 0xF800442C
//                         dmac0_s: 0xF800342C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description              Loop Counter 0 DMA Channel 1
//
// Register DMAC_LC0_1_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC0_1_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter zero for the
const uintptr_t DMAC_LC0_1_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter zero.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC1_1
//
// Name                     DMAC_LC1_1_REG
// Software Name            XDmaPs_LC1_n_OFFSET(1)
// Relative Address         0x00000430
// Absolute Address         dmac0_ns: 0xF8004430
//                          dmac0_s: 0xF8003430
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 1 DMA Channel 1
//
// Register DMAC_LC1_1_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC1_1_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter one for the
const uintptr_t DMAC_LC1_1_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter one.


//------------------------------------------------------------------------------
//
// Register (DMAC) SAR2
//
// Name                     DMAC_SAR2_REG
// Software Name            XDmaPs_SA_n_OFFSET(2)
// Relative Address         0x00000440
// Absolute Address         dmac0_ns: 0xF8004440
//                          dmac0_s: 0xF8003440
// Width                    32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Source Address DMA Channel 2
//
// Register DMAC_SAR2_REG Details
//
                                                         // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_SAR2_SRC_ADDR_MASK = 0xFFFFFFFF;    // Source data address (physical memory address)
const uintptr_t DMAC_SAR2_SRC_ADDR_BPOS = 0;             // for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) DAR2
//
// Name                    DMAC_DAR2_REG
// Software Name           XDmaPs_DA_n_OFFSET(2)
// Relative Address        0x00000444
// Absolute Address        dmac0_ns: 0xF8004444
//                         dmac0_s: 0xF8003444
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Destination Addr DMA Channel 2
//
// Register DMAC_DAR2_REG Details
//
                                                          // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DAR2_DEST_ADDR_MASK = 0xFFFFFFFF;    // Destination data address (physical memory
const uintptr_t DMAC_DAR2_DEST_ADDR_BPOS = 0;             // address) for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CCR2
//
// Name                    DMAC_CCR2_REG
// Software Name           XDmaPs_CC_n_OFFSET(2)
// Relative Address        0x00000448
// Absolute Address        dmac0_ns: 0xF8004448
//                         dmac0_s: 0xF8003448
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00800200
// Description             Channel Control DMA Channel 2
//
// Register DMAC_CCR2_REG Details
//
// RESERVED                                                                    Properties: Bit: 31, Type: rud, Reset Value: 0x0

                                                                            // Properties: Bits: 30:28, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR2_ENDIAN_SWAP_SIZE_MASK            = 0x70000000;    // Data swap: little-endian and byte-invariant
const uintptr_t DMAC_CCR2_ENDIAN_SWAP_SIZE_BPOS            = 28;            // big-endian (BE-8) formats.
                                                                            // 000: No swap, 8-bit data
                                                                            // 001: Swap bytes within 16-bit data
                                                                            // 010: Swap bytes within 32-bit data
                                                                            // 011: Swap bytes within 64-bit data
                                                                            // 100: Swap bytes within 128-bit data
                                                                            // 101 to 111: Reserved

                                                                            // Properties: Bits: 27:25, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR2_DST_CACHE_CTRLDST_PROT_CTRL_MASK = 0x0E000000;    // Programs the AXI AWCACHE signals that are
const uintptr_t DMAC_CCR2_DST_CACHE_CTRLDST_PROT_CTRL_BPOS = 25;            // used when the DMAC writes to the destination (0:
                                                                            // Low, 1: High):
                                                                            // Bit [27] programs AWCACHE[3]
                                                                            // Hardwired Low to AWCACHE[2]
                                                                            // Bit [26] programs AWCACHE[1]
                                                                            // Bit [25] programs AWCACHE[0]
                                                                            // Note: Setting AWCACHE[3,1]=b10 violates the
                                                                            // AXI protocol.
                                                                            // Programs the AWPROT signals that are used
                                                                            // when the DMAC writes the destination data (0:
                                                                            // Low, 1: High):
                                                                            // Bit [24] programs AWPROT[2]
                                                                            // Bit [23] programs AWPROT[1]
                                                                            // Bit [22] programs AWPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program AWPROT[1] Low, that is, a secure
                                                                            // access. If a DMA channel in the Non-secure state
                                                                            // attempts to set AWPROT[1] Low, then the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 21:18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR2_DST_BURST_LEN_MASK               = 0x003C0000;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR2_DST_BURST_LEN_BPOS               = 18;            // data transfers that the DMAC performs when it
                                                                            // writes the destination data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // 0010: 3 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size.
                                                                            // Note: These bits control the state of AWLEN[3:0].

                                                                            // Properties: Bits: 17:15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR2_DST_BURST_SIZE_MASK              = 0x00038000;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR2_DST_BURST_SIZE_BPOS              = 15;            // number of bytes that the DMAC writes to the
                                                                            // destination:
                                                                            // 000: writes 1 byte per beat
                                                                            // 001: writes 2 bytes per beat
                                                                            // 010: writes 4 bytes per beat
                                                                            // 011: writes 8 bytes per beat
                                                                            // 100: writes 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size. Note: These bits control the state
                                                                            // of AWSIZE[2:0].

                                                                            // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR2_DST_INC_MASK                     = 0x00004000;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR2_DST_INC_BPOS                     = 14;            // when it writes the destination data:
                                                                            // 0: Fixed-address burst. The DMAC signals
                                                                            // AWBURST[0] Low.
                                                                            // 1: Incrementing-address burst. The DMAC
                                                                            // signals AWBURST[0] HIgh.

                                                                            // Properties: Bits: 13:11, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR2_SRC_CACHE_CTRL_MASK              = 0x00003800;    // Programs the AXI ARCACHE signals that are
const uintptr_t DMAC_CCR2_SRC_CACHE_CTRL_BPOS              = 11;            // used for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [13] programs ARCACHE[2]
                                                                            // Bit [12] programs ARCACHE[1]
                                                                            // Bit [11] programs ARCACHE[0]
                                                                            // Note: The DMAC ties ARCACHE[3] Low. Setting
                                                                            // ARCACHE[2:1]= b10 violates the AXI protocol.

                                                                            // Properties: Bits: 7:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR2_SRC_BURST_LEN_MASK               = 0x000000F0;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR2_SRC_BURST_LEN_BPOS               = 4;             // data transfers that the DMAC performs when it
                                                                            // reads the source data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARLEN[3:0].

                                                                            // Properties: Bits: 3:1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR2_SRC_BURST_SIZE_MASK              = 0x0000000E;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR2_SRC_BURST_SIZE_BPOS              = 1;             // number of bytes that the DMAC reads from the
                                                                            // source:
                                                                            // 000: reads 1 byte per beat
                                                                            // 001: reads 2 bytes per beat
                                                                            // 010: reads 4 bytes per beat
                                                                            // 011: reads 8 bytes per beat
                                                                            // 100: reads 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARSIZE[2:0].

                                                                            // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR2_SRC_INC_MASK                     = 0x00000001;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR2_SRC_INC_BPOS                     = 0;             // when it reads the source data:
                                                                            // 0: Fixed-address burst, DMAC signal
                                                                            // ARBURST[0] driven Low.
                                                                            // 1: Incrementing-address burst, DMAC signal
                                                                            // ARBURST[0] driven High.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC0_2
//
// Name                     DMAC_LC0_2_REG
// Software Name            XDmaPs_LC0_n_OFFSET(2)
// Relative Address         0x0000044C
// Absolute Address         dmac0_ns: 0xF800444C
//                          dmac0_s: 0xF800344C
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 0 DMA Channel 2
//
// Register DMAC_LC0_2_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC0_2_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter zero for the
const uintptr_t DMAC_LC0_2_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter zero.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC1_2
//
// Name                     DMAC_LC1_2_REG
// Software Name            XDmaPs_LC1_n_OFFSET(2)
// Relative Address         0x00000450
// Absolute Address         dmac0_ns: 0xF8004450
//                          dmac0_s: 0xF8003450
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 1 DMA Channel 2
//
// Register DMAC_LC1_2_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC1_2_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter one for the
const uintptr_t DMAC_LC1_2_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter one.


//------------------------------------------------------------------------------
//
// Register (DMAC) SAR3
//
// Name                     DMAC_SAR3_REG
// Software Name            XDmaPs_SA_n_OFFSET(3)
// Relative Address         0x00000460
// Absolute Address         dmac0_ns: 0xF8004460
//                          dmac0_s: 0xF8003460
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Source Address DMA Channel 3
//
// Register DMAC_SAR3_REG Details
//
                                                         // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_SAR3_SRC_ADDR_MASK = 0xFFFFFFFF;    // Source data address (physical memory address)
const uintptr_t DMAC_SAR3_SRC_ADDR_BPOS = 0;             // for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) DAR3
//
// Name                     DMAC_DAR3_REG
// Software Name            XDmaPs_DA_n_OFFSET(3)
// Relative Address         0x00000464
// Absolute Address         dmac0_ns: 0xF8004464
//                          dmac0_s: 0xF8003464
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Destination Addr DMA Channel 3
//
// Register DMAC_DAR3_REG Details
//
                                                          // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DAR3_DEST_ADDR_MASK = 0xFFFFFFFF;    // Destination data address (physical memory
const uintptr_t DMAC_DAR3_DEST_ADDR_BPOS = 0;             // address) for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CCR3
//
// Name                    DMAC_CCR3_REG
// Software Name           XDmaPs_CC_n_OFFSET(3)
// Relative Address        0x00000468
// Absolute Address        dmac0_ns: 0xF8004468
//                         dmac0_s: 0xF8003468
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00800200
// Description             Channel Control DMA Channel 3
//
// Register DMAC_CCR3_REG Details
//
// RESERVED                                                                    Properties: Bit: 31, Type: rud, Reset Value: 0x0

                                                                            // Properties: Bits: 30:28, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR3_ENDIAN_SWAP_SIZE_MASK            = 0x70000000;    // Data swap: little-endian and byte-invariant
const uintptr_t DMAC_CCR3_ENDIAN_SWAP_SIZE_BPOS            = 28;            // big-endian (BE-8) formats.
                                                                            // 000: No swap, 8-bit data
                                                                            // 001: Swap bytes within 16-bit data
                                                                            // 010: Swap bytes within 32-bit data
                                                                            // 011: Swap bytes within 64-bit data
                                                                            // 100: Swap bytes within 128-bit data
                                                                            // 101 to 111: Reserved

                                                                            // Properties: Bits: 27:25, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR3_DST_CACHE_CTRL_MASK              = 0x0E000000;    // Programs the AXI AWCACHE signals that are
const uintptr_t DMAC_CCR3_DST_CACHE_CTRL_BPOS              = 25;            // used when the DMAC writes to the destination (0:
                                                                            // Low, 1: High):
                                                                            // Bit [27] programs AWCACHE[3]
                                                                            // Hardwired Low to AWCACHE[2]
                                                                            // Bit [26] programs AWCACHE[1]
                                                                            // Bit [25] programs AWCACHE[0]
                                                                            // Note: Setting AWCACHE[3,1]=b10 violates the
                                                                            // AXI protocol.

                                                                            // Properties: Bits: 21:18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR3_DST_BURST_LEN_MASK               = 0x003C0000;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR3_DST_BURST_LEN_BPOS               = 18;            // data transfers that the DMAC performs when it
                                                                            // writes the destination data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // 0010: 3 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size.
                                                                            // Note: These bits control the state of AWLEN[3:0].

                                                                            // Properties: Bits: 17:15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR3_DST_BURST_SIZE_MASK              = 0x00038000;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR3_DST_BURST_SIZE_BPOS              = 15;            // number of bytes that the DMAC writes to the
                                                                            // destination:
                                                                            // 000: writes 1 byte per beat
                                                                            // 001: writes 2 bytes per beat
                                                                            // 010: writes 4 bytes per beat
                                                                            // 011: writes 8 bytes per beat
                                                                            // 100: writes 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size. Note: These bits control the state
                                                                            // of AWSIZE[2:0].

                                                                            // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR3_DST_INC_MASK                     = 0x00004000;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR3_DST_INC_BPOS                     = 14;            // when it writes the destination data:
                                                                            // 0: Fixed-address burst. The DMAC signals
                                                                            // AWBURST[0] Low.
                                                                            // 1: Incrementing-address burst. The DMAC
                                                                            // signals AWBURST[0] HIgh.

                                                                            // Properties: Bits: 13:11, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR3_SRC_CACHE_CTRLSRC_PROT_CTRL_MASK = 0x00003800;    // Programs the AXI ARCACHE signals that are
const uintptr_t DMAC_CCR3_SRC_CACHE_CTRLSRC_PROT_CTRL_BPOS = 11;            // used for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [13] programs ARCACHE[2]
                                                                            // Bit [12] programs ARCACHE[1]
                                                                            // Bit [11] programs ARCACHE[0]
                                                                            // Note: The DMAC ties ARCACHE[3] Low. Setting
                                                                            // ARCACHE[2:1]= b10 violates the AXI protocol.
                                                                            // Programs the AXI ARPROT signals that are used
                                                                            // for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [10] programs ARPROT[2]
                                                                            // Bit [9] programs ARPROT[1]
                                                                            // Bit [8] programs ARPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program ARPROT[1] Low, that is, a secure access.
                                                                            // If a DMA channel in the Non-secure state
                                                                            // attempts to set ARPROT[1] Low, the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 7:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR3_SRC_BURST_LEN_MASK               = 0x000000F0;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR3_SRC_BURST_LEN_BPOS               = 4;             // data transfers that the DMAC performs when it
                                                                            // reads the source data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARLEN[3:0].

                                                                            // Properties: Bits: 3:1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR3_SRC_BURST_SIZE_MASK              = 0x0000000E;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR3_SRC_BURST_SIZE_BPOS              = 1;             // number of bytes that the DMAC reads from the
                                                                            // source:
                                                                            // 000: reads 1 byte per beat
                                                                            // 001: reads 2 bytes per beat
                                                                            // 010: reads 4 bytes per beat
                                                                            // 011: reads 8 bytes per beat
                                                                            // 100: reads 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARSIZE[2:0].

                                                                            // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR3_SRC_INC_MASK                     = 0x00000001;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR3_SRC_INC_BPOS                     = 0;             // when it reads the source data:
                                                                            // 0: Fixed-address burst, DMAC signal
                                                                            // ARBURST[0] driven Low.
                                                                            // 1: Incrementing-address burst, DMAC signal
                                                                            // ARBURST[0] driven High.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC0_3
//
// Name                     DMAC_LC0_3_REG
// Software Name            XDmaPs_LC0_n_OFFSET(3)
// Relative Address         0x0000046C
// Absolute Address         dmac0_ns: 0xF800446C
//                          dmac0_s: 0xF800346C
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 0 DMA Channel 3
//
// Register DMAC_LC0_3_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC0_3_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter zero for the
const uintptr_t DMAC_LC0_3_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter zero.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC1_3
//
// Name                     DMAC_LC1_3_REG
// Software Name            XDmaPs_LC1_n_OFFSET(3)
// Relative Address         0x00000470
// Absolute Address         dmac0_ns: 0xF8004470
//                          dmac0_s: 0xF8003470
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 1 DMA Channel 3
//
// Register DMAC_LC1_3_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC1_3_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter one for the
const uintptr_t DMAC_LC1_3_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter one.


//------------------------------------------------------------------------------
//
// Register (DMAC) SAR4
//
// Name                     DMAC_SAR4_REG
// Software Name            XDmaPs_SA_n_OFFSET(4)
// Relative Address         0x00000480
// Absolute Address         dmac0_ns: 0xF8004480
//                          dmac0_s: 0xF8003480
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Source Address DMA Channel 4
//
// Register DMAC_SAR4_REG Details
//
                                                         // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_SAR4_SRC_ADDR_MASK = 0xFFFFFFFF;    // Source data address (physical memory address)
const uintptr_t DMAC_SAR4_SRC_ADDR_BPOS = 0;             // for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) DAR4
//
// Name                    DMAC_DAR4_REG
// Software Name           XDmaPs_DA_n_OFFSET(4)
// Relative Address        0x00000484
// Absolute Address        dmac0_ns: 0xF8004484
//                         dmac0_s: 0xF8003484
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Destination Addr DMA Channel 4
//
// Register DMAC_DAR4_REG Details
//
                                                          // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DAR4_DEST_ADDR_MASK = 0xFFFFFFFF;    // Destination data address (physical memory
const uintptr_t DMAC_DAR4_DEST_ADDR_BPOS = 0;             // address) for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CCR4
//
// Name                    DMAC_CCR4_REG
// Software Name           XDmaPs_CC_n_OFFSET(4)
// Relative Address        0x00000488
// Absolute Address        dmac0_ns: 0xF8004488
//                         dmac0_s: 0xF8003488
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00800200
// Description             Channel Control DMA Channel 4
//
// Register DMAC_CCR4_REG Details
//
// RESERVED                                                                    Properties: Bit: 31, Type: rud, Reset Value: 0x0

                                                                            // Properties: Bits: 30:28, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR4_ENDIAN_SWAP_SIZE_MASK            = 0x70000000;    // Data swap: little-endian and byte-invariant
const uintptr_t DMAC_CCR4_ENDIAN_SWAP_SIZE_BPOS            = 28;            // big-endian (BE-8) formats.
                                                                            // 000: No swap, 8-bit data
                                                                            // 001: Swap bytes within 16-bit data
                                                                            // 010: Swap bytes within 32-bit data
                                                                            // 011: Swap bytes within 64-bit data
                                                                            // 100: Swap bytes within 128-bit data
                                                                            // 101 to 111: Reserved

                                                                            // Properties: Bits: 27:25, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR4_DST_CACHE_CTRLDST_PROT_CTRL_MASK = 0x0E000000;    // Programs the AXI AWCACHE signals that are
const uintptr_t DMAC_CCR4_DST_CACHE_CTRLDST_PROT_CTRL_BPOS = 25;            // used when the DMAC writes to the destination (0:
                                                                            // Low, 1: High):
                                                                            // Bit [27] programs AWCACHE[3]
                                                                            // Hardwired Low to AWCACHE[2]
                                                                            // Bit [26] programs AWCACHE[1]
                                                                            // Bit [25] programs AWCACHE[0]
                                                                            // Note: Setting AWCACHE[3,1]=b10 violates the
                                                                            // AXI protocol.
                                                                            // Programs the AWPROT signals that are used
                                                                            // when the DMAC writes the destination data (0:
                                                                            // Low, 1: High):
                                                                            // Bit [24] programs AWPROT[2]
                                                                            // Bit [23] programs AWPROT[1]
                                                                            // Bit [22] programs AWPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program AWPROT[1] Low, that is, a secure
                                                                            // access. If a DMA channel in the Non-secure state
                                                                            // attempts to set AWPROT[1] Low, then the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 21:18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR4_DST_BURST_LEN_MASK               = 0x003C0000;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR4_DST_BURST_LEN_BPOS               = 18;            // data transfers that the DMAC performs when it
                                                                            // writes the destination data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // 0010: 3 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size.
                                                                            // Note: These bits control the state of AWLEN[3:0].

                                                                            // Properties: Bits: 17:15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR4_DST_BURST_SIZE_MASK              = 0x00038000;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR4_DST_BURST_SIZE_BPOS              = 15;            // number of bytes that the DMAC writes to the
                                                                            // destination:
                                                                            // 000: writes 1 byte per beat
                                                                            // 001: writes 2 bytes per beat
                                                                            // 010: writes 4 bytes per beat
                                                                            // 011: writes 8 bytes per beat
                                                                            // 100: writes 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size. Note: These bits control the state
                                                                            // of AWSIZE[2:0].

                                                                            // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR4_DST_INC_MASK                     = 0x00004000;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR4_DST_INC_BPOS                     = 14;            // when it writes the destination data:
                                                                            // 0: Fixed-address burst. The DMAC signals
                                                                            // AWBURST[0] Low.
                                                                            // 1: Incrementing-address burst. The DMAC
                                                                            // signals AWBURST[0] HIgh.

                                                                            // Properties: Bits: 13:11, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR4_SRC_CACHE_CTRLSRC_PROT_CTRL_MASK = 0x00003800;    // Programs the AXI ARCACHE signals that are
const uintptr_t DMAC_CCR4_SRC_CACHE_CTRLSRC_PROT_CTRL_BPOS = 11;            // used for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [13] programs ARCACHE[2]
                                                                            // Bit [12] programs ARCACHE[1]
                                                                            // Bit [11] programs ARCACHE[0]
                                                                            // Note: The DMAC ties ARCACHE[3] Low. Setting
                                                                            // ARCACHE[2:1]= b10 violates the AXI protocol.
                                                                            // Programs the AXI ARPROT signals that are used
                                                                            // for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [10] programs ARPROT[2]
                                                                            // Bit [9] programs ARPROT[1]
                                                                            // Bit [8] programs ARPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program ARPROT[1] Low, that is, a secure access.
                                                                            // If a DMA channel in the Non-secure state
                                                                            // attempts to set ARPROT[1] Low, the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 7:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR4_SRC_BURST_LEN_MASK               = 0x000000F0;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR4_SRC_BURST_LEN_BPOS               = 4;             // data transfers that the DMAC performs when it
                                                                            // reads the source data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARLEN[3:0].

                                                                            // Properties: Bits: 3:1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR4_SRC_BURST_SIZE_MASK              = 0x0000000E;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR4_SRC_BURST_SIZE_BPOS              = 1;             // number of bytes that the DMAC reads from the
                                                                            // source:
                                                                            // 000: reads 1 byte per beat
                                                                            // 001: reads 2 bytes per beat
                                                                            // 010: reads 4 bytes per beat
                                                                            // 011: reads 8 bytes per beat
                                                                            // 100: reads 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARSIZE[2:0].

                                                                            // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR4_SRC_INC_MASK                     = 0x00000001;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR4_SRC_INC_BPOS                     = 0;             // when it reads the source data:
                                                                            // 0: Fixed-address burst, DMAC signal
                                                                            // ARBURST[0] driven Low.
                                                                            // 1: Incrementing-address burst, DMAC signal
                                                                            // ARBURST[0] driven High.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC0_4
//
// Name                    DMAC_LC0_4_REG
// Software Name           XDmaPs_LC0_n_OFFSET(4)
// Relative Address        0x0000048C
// Absolute Address        dmac0_ns: 0xF800448C
//                         dmac0_s: 0xF800348C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description              Loop Counter 0 DMA Channel 4
//
// Register DMAC_LC0_4_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC0_4_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter zero for the
const uintptr_t DMAC_LC0_4_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter zero.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC1_4
//
// Name                     DMAC_LC1_4_REG
// Software Name            XDmaPs_LC1_n_OFFSET(4)
// Relative Address         0x00000490
// Absolute Address         dmac0_ns: 0xF8004490
//                          dmac0_s: 0xF8003490
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 1 DMA Channel 4
//
// Register DMAC_LC1_4_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC1_4_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter one for the
const uintptr_t DMAC_LC1_4_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter one.


//------------------------------------------------------------------------------
//
// Register (DMAC) SAR5
//
// Name                     DMAC_SAR5_REG
// Software Name            XDmaPs_SA_n_OFFSET(5)
// Relative Address         0x000004A0
// Absolute Address         dmac0_ns: 0xF80044A0
//                          dmac0_s: 0xF80034A0
// Width                    32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Source Address DMA Channel 5
//
// Register DMAC_SAR5_REG Details
//
                                                         // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_SAR5_SRC_ADDR_MASK = 0xFFFFFFFF;    // Source data address (physical memory address)
const uintptr_t DMAC_SAR5_SRC_ADDR_BPOS = 0;             // for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) DAR5
//
// Name                    DMAC_DAR5_REG
// Software Name           XDmaPs_DA_n_OFFSET(5)
// Relative Address        0x000004A4
// Absolute Address        dmac0_ns: 0xF80044A4
//                         dmac0_s: 0xF80034A4
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Destination Addr DMA Channel 5
//
// Register DMAC_DAR5_REG Details
//
                                                          // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DAR5_DEST_ADDR_MASK = 0xFFFFFFFF;    // Destination data address (physical memory
const uintptr_t DMAC_DAR5_DEST_ADDR_BPOS = 0;             // address) for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CCR5
//
// Name                    DMAC_CCR5_REG
// Software Name           XDmaPs_CC_n_OFFSET(5)
// Relative Address        0x000004A8
// Absolute Address        dmac0_ns: 0xF80044A8
//                         dmac0_s: 0xF80034A8
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00800200
// Description             Channel Control DMA Channel 5
//
// Register DMAC_CCR5_REG Details
//
// RESERVED                                                                    Properties: Bit: 31, Type: rud, Reset Value: 0x0

                                                                            // Properties: Bits: 30:28, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR5_ENDIAN_SWAP_SIZE_MASK            = 0x70000000;    // Data swap: little-endian and byte-invariant
const uintptr_t DMAC_CCR5_ENDIAN_SWAP_SIZE_BPOS            = 28;            // big-endian (BE-8) formats.
                                                                            // 000: No swap, 8-bit data
                                                                            // 001: Swap bytes within 16-bit data
                                                                            // 010: Swap bytes within 32-bit data
                                                                            // 011: Swap bytes within 64-bit data
                                                                            // 100: Swap bytes within 128-bit data
                                                                            // 101 to 111: Reserved

                                                                            // Properties: Bits: 27:25, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR5_DST_CACHE_CTRLDST_PROT_CTRL_MASK = 0x0E000000;    // Programs the AXI AWCACHE signals that are
const uintptr_t DMAC_CCR5_DST_CACHE_CTRLDST_PROT_CTRL_BPOS = 25;            // used when the DMAC writes to the destination (0:
                                                                            // Low, 1: High):
                                                                            // Bit [27] programs AWCACHE[3]
                                                                            // Hardwired Low to AWCACHE[2]
                                                                            // Bit [26] programs AWCACHE[1]
                                                                            // Bit [25] programs AWCACHE[0]
                                                                            // Note: Setting AWCACHE[3,1]=b10 violates the
                                                                            // AXI protocol.
                                                                            // Programs the AWPROT signals that are used
                                                                            // when the DMAC writes the destination data (0:
                                                                            // Low, 1: High):
                                                                            // Bit [24] programs AWPROT[2]
                                                                            // Bit [23] programs AWPROT[1]
                                                                            // Bit [22] programs AWPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program AWPROT[1] Low, that is, a secure
                                                                            // access. If a DMA channel in the Non-secure state
                                                                            // attempts to set AWPROT[1] Low, then the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 21:18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR5_DST_BURST_LEN_MASK               = 0x003C0000;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR5_DST_BURST_LEN_BPOS               = 18;            // data transfers that the DMAC performs when it
                                                                            // writes the destination data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // 0010: 3 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size.
                                                                            // Note: These bits control the state of AWLEN[3:0].

                                                                            // Properties: Bits: 17:15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR5_DST_BURST_SIZE_MASK              = 0x00038000;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR5_DST_BURST_SIZE_BPOS              = 15;            // number of bytes that the DMAC writes to the
                                                                            // destination:
                                                                            // 000: writes 1 byte per beat
                                                                            // 001: writes 2 bytes per beat
                                                                            // 010: writes 4 bytes per beat
                                                                            // 011: writes 8 bytes per beat
                                                                            // 100: writes 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size. Note: These bits control the state
                                                                            // of AWSIZE[2:0].

                                                                            // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR5_DST_INC_MASK                     = 0x00004000;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR5_DST_INC_BPOS                     = 14;            // when it writes the destination data:
                                                                            // 0: Fixed-address burst. The DMAC signals
                                                                            // AWBURST[0] Low.
                                                                            // 1: Incrementing-address burst. The DMAC
                                                                            // signals AWBURST[0] HIgh.

                                                                            // Properties: Bits: 13:11, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR5_SRC_CACHE_CTRL_MASK              = 0x00003800;    // Programs the AXI ARCACHE signals that are
const uintptr_t DMAC_CCR5_SRC_CACHE_CTRL_BPOS              = 11;            // used for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [13] programs ARCACHE[2]
                                                                            // Bit [12] programs ARCACHE[1]
                                                                            // Bit [11] programs ARCACHE[0]
                                                                            // Note: The DMAC ties ARCACHE[3] Low. Setting
                                                                            // ARCACHE[2:1]= b10 violates the AXI protocol.

                                                                            // Properties: Bits: 7:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR5_SRC_BURST_LEN_MASK               = 0x000000F0;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR5_SRC_BURST_LEN_BPOS               = 4;             // data transfers that the DMAC performs when it
                                                                            // reads the source data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARLEN[3:0].

                                                                            // Properties: Bits: 3:1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR5_SRC_BURST_SIZE_MASK              = 0x0000000E;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR5_SRC_BURST_SIZE_BPOS              = 1;             // number of bytes that the DMAC reads from the
                                                                            // source:
                                                                            // 000: reads 1 byte per beat
                                                                            // 001: reads 2 bytes per beat
                                                                            // 010: reads 4 bytes per beat
                                                                            // 011: reads 8 bytes per beat
                                                                            // 100: reads 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARSIZE[2:0].

                                                                            // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR5_SRC_INC_MASK                     = 0x00000001;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR5_SRC_INC_BPOS                     = 0;             // when it reads the source data:
                                                                            // 0: Fixed-address burst, DMAC signal
                                                                            // ARBURST[0] driven Low.
                                                                            // 1: Incrementing-address burst, DMAC signal
                                                                            // ARBURST[0] driven High.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC0_5
//
// Name                     DMAC_LC0_5_REG
// Software Name            XDmaPs_LC0_n_OFFSET(5)
// Relative Address         0x000004AC
// Absolute Address         dmac0_ns: 0xF80044AC
//                          dmac0_s: 0xF80034AC
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 0 DMA Channel 5
//
// Register DMAC_LC0_5_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC0_5_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter zero for the
const uintptr_t DMAC_LC0_5_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter zero.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC1_5
//
// Name                     DMAC_LC1_5_REG
// Software Name            XDmaPs_LC1_n_OFFSET(5)
// Relative Address         0x000004B0
// Absolute Address         dmac0_ns: 0xF80044B0
//                          dmac0_s: 0xF80034B0
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 1 DMA Channel 5
//
// Register DMAC_LC1_5_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC1_5_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter one for the
const uintptr_t DMAC_LC1_5_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter one.


//------------------------------------------------------------------------------
//
// Register (DMAC) SAR6
//
// Name                     DMAC_SAR6_REG
// Software Name            XDmaPs_SA_n_OFFSET(6)
// Relative Address         0x000004C0
// Absolute Address         dmac0_ns: 0xF80044C0
//                          dmac0_s: 0xF80034C0
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Source Address DMA Channel 6
//
// Register DMAC_SAR6_REG Details
//
                                                         // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_SAR6_SRC_ADDR_MASK = 0xFFFFFFFF;    // Source data address (physical memory address)
const uintptr_t DMAC_SAR6_SRC_ADDR_BPOS = 0;             // for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) DAR6
//
// Name                     DMAC_DAR6_REG
// Software Name            XDmaPs_DA_n_OFFSET(6)
// Relative Address         0x000004C4
// Absolute Address         dmac0_ns: 0xF80044C4
//                          dmac0_s: 0xF80034C4
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Destination Addr DMA Channel 6
//
// Register DMAC_DAR6_REG Details
//
                                                          // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DAR6_DEST_ADDR_MASK = 0xFFFFFFFF;    // Destination data address (physical memory
const uintptr_t DMAC_DAR6_DEST_ADDR_BPOS = 0;             // address) for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CCR6
//
// Name                    DMAC_CCR6_REG
// Software Name           XDmaPs_CC_n_OFFSET(6)
// Relative Address        0x000004C8
// Absolute Address        dmac0_ns: 0xF80044C8
//                         dmac0_s: 0xF80034C8
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00800200
// Description             Channel Control DMA Channel 6
//
// Register DMAC_CCR6_REG Details
//
// RESERVED                                                                    Properties: Bit: 31, Type: rud, Reset Value: 0x0

                                                                            // Properties: Bits: 30:28, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR6_ENDIAN_SWAP_SIZE_MASK            = 0x70000000;    // Data swap: little-endian and byte-invariant
const uintptr_t DMAC_CCR6_ENDIAN_SWAP_SIZE_BPOS            = 28;            // big-endian (BE-8) formats.
                                                                            // 000: No swap, 8-bit data
                                                                            // 001: Swap bytes within 16-bit data
                                                                            // 010: Swap bytes within 32-bit data
                                                                            // 011: Swap bytes within 64-bit data
                                                                            // 100: Swap bytes within 128-bit data
                                                                            // 101 to 111: Reserved

                                                                            // Properties: Bits: 27:25, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR6_DST_CACHE_CTRL_MASK              = 0x0E000000;    // Programs the AXI AWCACHE signals that are
const uintptr_t DMAC_CCR6_DST_CACHE_CTRL_BPOS              = 25;            // used when the DMAC writes to the destination (0:
                                                                            // Low, 1: High):
                                                                            // Bit [27] programs AWCACHE[3]
                                                                            // Hardwired Low to AWCACHE[2]
                                                                            // Bit [26] programs AWCACHE[1]
                                                                            // Bit [25] programs AWCACHE[0]
                                                                            // Note: Setting AWCACHE[3,1]=b10 violates the
                                                                            // AXI protocol.

                                                                            // Properties: Bits: 21:18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR6_DST_BURST_LEN_MASK               = 0x003C0000;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR6_DST_BURST_LEN_BPOS               = 18;            // data transfers that the DMAC performs when it
                                                                            // writes the destination data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // 0010: 3 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size.
                                                                            // Note: These bits control the state of AWLEN[3:0].

                                                                            // Properties: Bits: 17:15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR6_DST_BURST_SIZE_MASK              = 0x00038000;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR6_DST_BURST_SIZE_BPOS              = 15;            // number of bytes that the DMAC writes to the
                                                                            // destination:
                                                                            // 000: writes 1 byte per beat
                                                                            // 001: writes 2 bytes per beat
                                                                            // 010: writes 4 bytes per beat
                                                                            // 011: writes 8 bytes per beat
                                                                            // 100: writes 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size. Note: These bits control the state
                                                                            // of AWSIZE[2:0].

                                                                            // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR6_DST_INC_MASK                     = 0x00004000;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR6_DST_INC_BPOS                     = 14;            // when it writes the destination data:
                                                                            // 0: Fixed-address burst. The DMAC signals
                                                                            // AWBURST[0] Low.
                                                                            // 1: Incrementing-address burst. The DMAC
                                                                            // signals AWBURST[0] HIgh.

                                                                            // Properties: Bits: 13:11, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR6_SRC_CACHE_CTRLSRC_PROT_CTRL_MASK = 0x00003800;    // Programs the AXI ARCACHE signals that are
const uintptr_t DMAC_CCR6_SRC_CACHE_CTRLSRC_PROT_CTRL_BPOS = 11;            // used for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [13] programs ARCACHE[2]
                                                                            // Bit [12] programs ARCACHE[1]
                                                                            // Bit [11] programs ARCACHE[0]
                                                                            // Note: The DMAC ties ARCACHE[3] Low. Setting
                                                                            // ARCACHE[2:1]= b10 violates the AXI protocol.
                                                                            // Programs the AXI ARPROT signals that are used
                                                                            // for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [10] programs ARPROT[2]
                                                                            // Bit [9] programs ARPROT[1]
                                                                            // Bit [8] programs ARPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program ARPROT[1] Low, that is, a secure access.
                                                                            // If a DMA channel in the Non-secure state
                                                                            // attempts to set ARPROT[1] Low, the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 7:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR6_SRC_BURST_LEN_MASK               = 0x000000F0;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR6_SRC_BURST_LEN_BPOS               = 4;             // data transfers that the DMAC performs when it
                                                                            // reads the source data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARLEN[3:0].

                                                                            // Properties: Bits: 3:1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR6_SRC_BURST_SIZE_MASK              = 0x0000000E;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR6_SRC_BURST_SIZE_BPOS              = 1;             // number of bytes that the DMAC reads from the
                                                                            // source:
                                                                            // 000: reads 1 byte per beat
                                                                            // 001: reads 2 bytes per beat
                                                                            // 010: reads 4 bytes per beat
                                                                            // 011: reads 8 bytes per beat
                                                                            // 100: reads 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARSIZE[2:0].

                                                                            // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR6_SRC_INC_MASK                     = 0x00000001;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR6_SRC_INC_BPOS                     = 0;             // when it reads the source data:
                                                                            // 0: Fixed-address burst, DMAC signal
                                                                            // ARBURST[0] driven Low.
                                                                            // 1: Incrementing-address burst, DMAC signal
                                                                            // ARBURST[0] driven High.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC0_6
//
// Name                     DMAC_LC0_6_REG
// Software Name            XDmaPs_LC0_n_OFFSET(6)
// Relative Address         0x000004CC
// Absolute Address         dmac0_ns: 0xF80044CC
//                          dmac0_s: 0xF80034CC
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 0 DMA Channel 6
//
// Register DMAC_LC0_6_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC0_6_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter zero for the
const uintptr_t DMAC_LC0_6_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter zero.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC1_6
//
// Name                     DMAC_LC1_6_REG
// Software Name            XDmaPs_LC1_n_OFFSET(6)
// Relative Address         0x000004D0
// Absolute Address         dmac0_ns: 0xF80044D0
//                          dmac0_s: 0xF80034D0
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 1 DMA Channel 6
//
// Register DMAC_LC1_6_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC1_6_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter one for the
const uintptr_t DMAC_LC1_6_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter one.


//------------------------------------------------------------------------------
//
// Register (DMAC) SAR7
//
// Name                     DMAC_SAR7_REG
// Software Name            XDmaPs_SA_n_OFFSET(7)
// Relative Address         0x000004E0
// Absolute Address         dmac0_ns: 0xF80044E0
//                          dmac0_s: 0xF80034E0
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Source Address DMA Channel 7
//
// Register DMAC_SAR7_REG Details
//
                                                         // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_SAR7_SRC_ADDR_MASK = 0xFFFFFFFF;    // Source data address (physical memory address)
const uintptr_t DMAC_SAR7_SRC_ADDR_BPOS = 0;             // for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) DAR7
//
// Name                    DMAC_DAR7_REG
// Software Name           XDmaPs_DA_n_OFFSET(7)
// Relative Address        0x000004E4
// Absolute Address        dmac0_ns: 0xF80044E4
//                         dmac0_s: 0xF80034E4
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Destination Addr DMA Channel 7
//
// Register DMAC_DAR7_REG Details
//
                                                          // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DAR7_DEST_ADDR_MASK = 0xFFFFFFFF;    // Destination data address (physical memory
const uintptr_t DMAC_DAR7_DEST_ADDR_BPOS = 0;             // address) for DMA channel thread.


//------------------------------------------------------------------------------
//
// Register (DMAC) CCR7
//
// Name                    DMAC_CCR7_REG
// Software Name           XDmaPs_CC_n_OFFSET(7)
// Relative Address        0x000004E8
// Absolute Address        dmac0_ns: 0xF80044E8
//                         dmac0_s: 0xF80034E8
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00800200
// Description             Channel Control DMA Channel 7
//
// Register DMAC_CCR7_REG Details
//
// RESERVED                                                                    Properties: Bit: 31, Type: rud, Reset Value: 0x0

                                                                            // Properties: Bits: 30:28, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR7_ENDIAN_SWAP_SIZE_MASK            = 0x70000000;    // Data swap: little-endian and byte-invariant
const uintptr_t DMAC_CCR7_ENDIAN_SWAP_SIZE_BPOS            = 28;            // big-endian (BE-8) formats.
                                                                            // 000: No swap, 8-bit data
                                                                            // 001: Swap bytes within 16-bit data
                                                                            // 010: Swap bytes within 32-bit data
                                                                            // 011: Swap bytes within 64-bit data
                                                                            // 100: Swap bytes within 128-bit data
                                                                            // 101 to 111: Reserved

                                                                            // Properties: Bits: 27:25, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR7_DST_CACHE_CTRLDST_PROT_CTRL_MASK = 0x0E000000;    // Programs the AXI AWCACHE signals that are
const uintptr_t DMAC_CCR7_DST_CACHE_CTRLDST_PROT_CTRL_BPOS = 25;            // used when the DMAC writes to the destination (0:
                                                                            // Low, 1: High):
                                                                            // Bit [27] programs AWCACHE[3]
                                                                            // Hardwired Low to AWCACHE[2]
                                                                            // Bit [26] programs AWCACHE[1]
                                                                            // Bit [25] programs AWCACHE[0]
                                                                            // Note: Setting AWCACHE[3,1]=b10 violates the
                                                                            // AXI protocol.
                                                                            // Programs the AWPROT signals that are used
                                                                            // when the DMAC writes the destination data (0:
                                                                            // Low, 1: High):
                                                                            // Bit [24] programs AWPROT[2]
                                                                            // Bit [23] programs AWPROT[1]
                                                                            // Bit [22] programs AWPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program AWPROT[1] Low, that is, a secure
                                                                            // access. If a DMA channel in the Non-secure state
                                                                            // attempts to set AWPROT[1] Low, then the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 21:18, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR7_DST_BURST_LEN_MASK               = 0x003C0000;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR7_DST_BURST_LEN_BPOS               = 18;            // data transfers that the DMAC performs when it
                                                                            // writes the destination data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // 0010: 3 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size.
                                                                            // Note: These bits control the state of AWLEN[3:0].

                                                                            // Properties: Bits: 17:15, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR7_DST_BURST_SIZE_MASK              = 0x00038000;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR7_DST_BURST_SIZE_BPOS              = 15;            // number of bytes that the DMAC writes to the
                                                                            // destination:
                                                                            // 000: writes 1 byte per beat
                                                                            // 001: writes 2 bytes per beat
                                                                            // 010: writes 4 bytes per beat
                                                                            // 011: writes 8 bytes per beat
                                                                            // 100: writes 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC writes
                                                                            // out of the MFIFO when it executes a DMAST
                                                                            // instruction is the product of dst_burst_len and
                                                                            // dst_burst_size. Note: These bits control the state
                                                                            // of AWSIZE[2:0].

                                                                            // Properties: Bit: 14, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR7_DST_INC_MASK                     = 0x00004000;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR7_DST_INC_BPOS                     = 14;            // when it writes the destination data:
                                                                            // 0: Fixed-address burst. The DMAC signals
                                                                            // AWBURST[0] Low.
                                                                            // 1: Incrementing-address burst. The DMAC
                                                                            // signals AWBURST[0] HIgh.

                                                                            // Properties: Bits: 13:11, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR7_SRC_CACHE_CTRLSRC_PROT_CTRL_MASK = 0x00003800;    // Programs the AXI ARCACHE signals that are
const uintptr_t DMAC_CCR7_SRC_CACHE_CTRLSRC_PROT_CTRL_BPOS = 11;            // used for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [13] programs ARCACHE[2]
                                                                            // Bit [12] programs ARCACHE[1]
                                                                            // Bit [11] programs ARCACHE[0]
                                                                            // Note: The DMAC ties ARCACHE[3] Low. Setting
                                                                            // ARCACHE[2:1]= b10 violates the AXI protocol.
                                                                            // Programs the AXI ARPROT signals that are used
                                                                            // for DMA reads of the source data (0: Low, 1:
                                                                            // High):
                                                                            // Bit [10] programs ARPROT[2]
                                                                            // Bit [9] programs ARPROT[1]
                                                                            // Bit [8] programs ARPROT[0]
                                                                            // Note: Only DMA channels in the Secure state can
                                                                            // program ARPROT[1] Low, that is, a secure access.
                                                                            // If a DMA channel in the Non-secure state
                                                                            // attempts to set ARPROT[1] Low, the DMA
                                                                            // channel aborts.

                                                                            // Properties: Bits: 7:4, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR7_SRC_BURST_LEN_MASK               = 0x000000F0;    // For each burst, these bits program the number of
const uintptr_t DMAC_CCR7_SRC_BURST_LEN_BPOS               = 4;             // data transfers that the DMAC performs when it
                                                                            // reads the source data:
                                                                            // 0000: 1 data transfer
                                                                            // 0001: 2 data transfers
                                                                            // ...
                                                                            // 1111: 16 data transfers.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARLEN[3:0].

                                                                            // Properties: Bits: 3:1, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR7_SRC_BURST_SIZE_MASK              = 0x0000000E;    // For each beat within a burst, it programs the
const uintptr_t DMAC_CCR7_SRC_BURST_SIZE_BPOS              = 1;             // number of bytes that the DMAC reads from the
                                                                            // source:
                                                                            // 000: reads 1 byte per beat
                                                                            // 001: reads 2 bytes per beat
                                                                            // 010: reads 4 bytes per beat
                                                                            // 011: reads 8 bytes per beat
                                                                            // 100: reads 16 bytes per beat
                                                                            // 101 to 111: reserved.
                                                                            // The total number of bytes that the DMAC reads
                                                                            // into the MFIFO when it executes a DMALD
                                                                            // instruction is the product of src_burst_len and
                                                                            // src_burst_size. Note: These bits control the state
                                                                            // of ARSIZE[2:0].

                                                                            // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CCR7_SRC_INC_MASK                     = 0x00000001;    // Programs the burst type that the DMAC performs
const uintptr_t DMAC_CCR7_SRC_INC_BPOS                     = 0;             // when it reads the source data:
                                                                            // 0: Fixed-address burst, DMAC signal
                                                                            // ARBURST[0] driven Low.
                                                                            // 1: Incrementing-address burst, DMAC signal
                                                                            // ARBURST[0] driven High.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC0_7
//
// Name                    DMAC_LC0_7_REG
// Software Name           XDmaPs_LC0_n_OFFSET(7)
// Relative Address        0x000004EC
// Absolute Address        dmac0_ns: 0xF80044EC
//                         dmac0_s: 0xF80034EC
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description              Loop Counter 0 DMA Channel 7
//
// Register DMAC_LC0_7_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC0_7_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter zero for the
const uintptr_t DMAC_LC0_7_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter zero.


//------------------------------------------------------------------------------
//
// Register (DMAC) LC1_7
//
// Name                     DMAC_LC1_7_REG
// Software Name            XDmaPs_LC1_n_OFFSET(7)
// Relative Address         0x000004F0
// Absolute Address         dmac0_ns: 0xF80044F0
//                          dmac0_s: 0xF80034F0
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Loop Counter 1 DMA Channel 7
//
// Register DMAC_LC1_7_REG Details
//
// RESERVED                                                                Properties: Bits: 31:8, Type: rud, Reset Value: 0x0

                                                                        // Properties: Bits: 7:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_LC1_7_LOOP_COUNTER_ITERATION_MASK = 0x000000FF;    // Provides the status of loop counter one for the
const uintptr_t DMAC_LC1_7_LOOP_COUNTER_ITERATION_BPOS = 0;             // DMA channel thread. The DMAC updates this
                                                                        // register when it executes DMALPEND[S|B], and
                                                                        // the DMA channel thread is programmed to use
                                                                        // loop counter one.


//------------------------------------------------------------------------------
//
// Register (DMAC) DBGSTATUS
//
// Name                     DMAC_DBGSTATUS_REG
// Relative Address         0x00000D00
// Absolute Address         dmac0_ns: 0xF8004D00
//                          dmac0_s: 0xF8003D00
// Width                    32 bits
// Access Type              mixed
// Reset Value             0x00000000
// Description             DMA Manager Execution Status
//
// Register DMAC_DBGSTATUS_REG Details
//
// RESERVED                                                       Properties: Bits: 31:1, Type: rud, Reset Value: 0x0

                                                               // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_DBGSTATUS_DBGSTATUS_MASK = 0x00000001;    // The DMA manager Execution/Debug status:
const uintptr_t DMAC_DBGSTATUS_DBGSTATUS_BPOS = 0;             // 0: Idle
                                                               // 1: Busy.


//------------------------------------------------------------------------------
//
// Register (DMAC) DBGCMD
//
// Name                    DMAC_DBGCMD_REG
// Relative Address        0x00000D04
// Absolute Address        dmac0_ns: 0xF8004D04
//                         dmac0_s: 0xF8003D04
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DMA Manager Instr. Command
//
// Register DMAC_DBGCMD_REG Details
//
// RESERVED                                                 Properties: Bits: 31:2, Type: rud, Reset Value: 0x0

                                                         // Properties: Bits: 1:0, Type: swo,nssraz,nsnswo, Reset Value: 0x0
const uintptr_t DMAC_DBGCMD_DBGCMD_MASK = 0x00000003;    // Command the DMA manager to execute the
const uintptr_t DMAC_DBGCMD_DBGCMD_BPOS = 0;             // instruction defined in the two DBGINST registers.
                                                         // 00: execute the instruction.
                                                         // others: reserved.


//------------------------------------------------------------------------------
//
// Register (DMAC) DBGINST0
//
// Name                    DMAC_DBGINST0_REG
// Relative Address        0x00000D08
// Absolute Address        dmac0_ns: 0xF8004D08
//                         dmac0_s: 0xF8003D08
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DMA Manager Instruction Part A
//
// Register DMAC_DBGINST0_REG Details
//
                                                                      // Properties: Bits: 31:24, Type: swo,nssraz,nsnswo, Reset Value: 0x0
const uintptr_t DMAC_DBGINST0_INSTRUCTION_BYTE1_MASK = 0xFF000000;    // instruction byte 1
const uintptr_t DMAC_DBGINST0_INSTRUCTION_BYTE1_BPOS = 24;            // 

                                                                      // Properties: Bits: 23:16, Type: swo,nssraz,nsnswo, Reset Value: 0x0
const uintptr_t DMAC_DBGINST0_INSTRUCTION_BYTE0_MASK = 0x00FF0000;    // instruction byte 0
const uintptr_t DMAC_DBGINST0_INSTRUCTION_BYTE0_BPOS = 16;            // 

// RESERVED                                                              Properties: Bits: 15:11, Type: waz, Reset Value: 0x0

                                                                      // Properties: Bits: 10:8, Type: swo,nssraz,nsnswo, Reset Value: 0x0
const uintptr_t DMAC_DBGINST0_CHANNEL_NUM_MASK       = 0x00000700;    // DMA channel number:
const uintptr_t DMAC_DBGINST0_CHANNEL_NUM_BPOS       = 8;             // 000: DMA channel 0
                                                                      // 001: DMA channel 1
                                                                      // 010: DMA channel 2
                                                                      // ...
                                                                      // 111: DMA channel 7

// RESERVED                                                              Properties: Bits: 7:1, Type: waz, Reset Value: 0x0

                                                                      // Properties: Bit: 0, Type: swo,nssraz,nsnswo, Reset Value: 0x0
const uintptr_t DMAC_DBGINST0_DEBUG_THREAD_MASK      = 0x00000001;    // The debug thread encoding is as folLows:
const uintptr_t DMAC_DBGINST0_DEBUG_THREAD_BPOS      = 0;             // 0: DMA manager thread
                                                                      // 1: DMA channel.
                                                                      // Note: When set to 1, the Channel number field
                                                                      // selects the DMA channel to debug.


//------------------------------------------------------------------------------
//
// Register (DMAC) DBGINST1
//
// Name                    DMAC_DBGINST1_REG
// Relative Address        0x00000D0C
// Absolute Address        dmac0_ns: 0xF8004D0C
//                         dmac0_s: 0xF8003D0C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             DMA Manager Instruction Part B
//
// Register DMAC_DBGINST1_REG Details
//
                                                                      // Properties: Bits: 31:24, Type: swo,nssraz,nsnswo, Reset Value: 0x0
const uintptr_t DMAC_DBGINST1_INSTRUCTION_BYTE5_MASK = 0xFF000000;    // instruction byte 5
const uintptr_t DMAC_DBGINST1_INSTRUCTION_BYTE5_BPOS = 24;            // 

                                                                      // Properties: Bits: 23:16, Type: swo,nssraz,nsnswo, Reset Value: 0x0
const uintptr_t DMAC_DBGINST1_INSTRUCTION_BYTE4_MASK = 0x00FF0000;    // instruction byte 4
const uintptr_t DMAC_DBGINST1_INSTRUCTION_BYTE4_BPOS = 16;            // 

                                                                      // Properties: Bits: 15:8, Type: swo,nssraz,nsnswo, Reset Value: 0x0
const uintptr_t DMAC_DBGINST1_INSTRUCTION_BYTE3_MASK = 0x0000FF00;    // instruction byte 3
const uintptr_t DMAC_DBGINST1_INSTRUCTION_BYTE3_BPOS = 8;             // 

                                                                      // Properties: Bits: 7:0, Type: swo,nssraz,nsnswo, Reset Value: 0x0
const uintptr_t DMAC_DBGINST1_INSTRUCTION_BYTE2_MASK = 0x000000FF;    // instruction byte 2
const uintptr_t DMAC_DBGINST1_INSTRUCTION_BYTE2_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (DMAC) CR0
//
// Name                    DMAC_CR0_REG
// Relative Address        0x00000E00
// Absolute Address        dmac0_ns: 0xF8004E00
//                         dmac0_s: 0xF8003E00
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x001E3071
// Description             Config. 0: Events, Peripheral Interfaces, PC,
//                         Mode
//
// Register DMAC_CR0_REG Details
//
                                                                                // Properties: Bits: 31:22, Type: rudsro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CR0_RESERVEDNUM_EVENTSNUM_PERIPH_REQ_MASK = 0xFFC00000;    // read undefined
const uintptr_t DMAC_CR0_RESERVEDNUM_EVENTSNUM_PERIPH_REQ_BPOS = 22;            // The DMA Controller supports 16 events. This
                                                                                // register always reads 01111 (15d).
                                                                                // The DMA Controller supports four peripheral
                                                                                // interfaces. This register always reads 00011 (3d).

// RESERVED                                                                        Properties: Bits: 11:7, Type: rud, Reset Value: 0x0

// RESERVED                                                                        Properties: Bit: 3, Type: rud, Reset Value: 0x0

                                                                                // Properties: Bit: 2, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CR0_MGR_NS_AT_RST_MASK                    = 0x00000004;    // Indicates the status of the slcr.TZ_DMA_NS bit
const uintptr_t DMAC_CR0_MGR_NS_AT_RST_BPOS                    = 2;             // when the DMAC exits from reset:
                                                                                // 0: TZ_DMA_NS was Low
                                                                                // 1: TZ_DMA_NS was HIgh

                                                                                // Properties: Bit: 1, Type: sro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CR0_BOOT_ENPERIPH_REQ_MASK                = 0x00000002;    // Indicates the status of the boot_from_pc signal
const uintptr_t DMAC_CR0_BOOT_ENPERIPH_REQ_BPOS                = 1;             // when the DMAC exited from reset:
                                                                                // 0 = boot_from_pc was LOW
                                                                                // 1 = boot_from_pc was HIGH.
                                                                                // The DMAC provides the peripheral request
                                                                                // interfaces.


//------------------------------------------------------------------------------
//
// Register (DMAC) CR1
//
// Name                    DMAC_CR1_REG
// Relative Address        0x00000E04
// Absolute Address        dmac0_ns: 0xF8004E04
//                         dmac0_s: 0xF8003E04
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00000074
// Description             Config. 1: Instruction Cache
//
// Register DMAC_CR1_REG Details
//
                                                                        // Properties: Bits: 31:8, Type: rudsro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CR1_RESERVEDNUM_ICACHE_LINES_MASK = 0xFFFFFF00;    // read undefined
const uintptr_t DMAC_CR1_RESERVEDNUM_ICACHE_LINES_BPOS = 8;             // The DMAC iCache has eight lines.

                                                                        // Properties: Bit: 3, Type: rudsro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CR1_RESERVEDICACHE_LEN_MASK       = 0x00000008;    // read undefined
const uintptr_t DMAC_CR1_RESERVEDICACHE_LEN_BPOS       = 3;             // The length of an i-cache line is sixteen bytes.


//------------------------------------------------------------------------------
//
// Register (DMAC) CR2
//
// Name                    DMAC_CR2_REG
// Relative Address        0x00000E08
// Absolute Address        dmac0_ns: 0xF8004E08
//                         dmac0_s: 0xF8003E08
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Config. 2: DMA Mgr Boot Addr
//
// Register DMAC_CR2_REG Details
//
                                                         // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CR2_BOOT_ADDR_MASK = 0xFFFFFFFF;    // The boot address for the DMAC manager is
const uintptr_t DMAC_CR2_BOOT_ADDR_BPOS = 0;             // hardwired to 0. This is a system memory address.


//------------------------------------------------------------------------------
//
// Register (DMAC) CR3
//
// Name                    DMAC_CR3_REG
// Relative Address        0x00000E0C
// Absolute Address        dmac0_ns: 0xF8004E0C
//                         dmac0_s: 0xF8003E0C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Config. 3: Security state of IRQs
//
// Register DMAC_CR3_REG Details
//
                                                   // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CR3_INS_MASK = 0xFFFFFFFF;    // The value of the slcr.TZ_DMA_IRQ_NS bits
const uintptr_t DMAC_CR3_INS_BPOS = 0;             // (boot_irq_ns signals) when the DMAC reset
                                                   // deasserts.
                                                   // Reserved


//------------------------------------------------------------------------------
//
// Register (DMAC) CR4
//
// Name                    DMAC_CR4_REG
// Relative Address        0x00000E10
// Absolute Address        dmac0_ns: 0xF8004E10
//                         dmac0_s: 0xF8003E10
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Config 4, Security of Periph Interfaces
//
// Register DMAC_CR4_REG Details
//
                                                   // Properties: Bits: 31:0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CR4_PNS_MASK = 0xFFFFFFFF;    // Reflects the slcr.TZ_DMA_PERIPH_NS register
const uintptr_t DMAC_CR4_PNS_BPOS = 0;             // values for the four peripheral request interfaces
                                                   // when the DMAC is unreset.
                                                   // 0: Secure state
                                                   // 1: Non-secure state
                                                   // Reserved


//------------------------------------------------------------------------------
//
// Register (DMAC) CRD
//
// Name                    DMAC_CRD_REG
// Software Name           CRDN
// Relative Address        0x00000E14
// Absolute Address        dmac0_ns: 0xF8004E14
//                         dmac0_s: 0xF8003E14
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x07FF7F73
// Description             DMA configuration
//
// Register DMAC_CRD_REG Details
//
                                                                               // Properties: Bits: 31:30, Type: rudsro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CRD_RESERVEDDATA_BUFFER_DEPRD_Q_DEP_MASK = 0xC0000000;    // read undefined
const uintptr_t DMAC_CRD_RESERVEDDATA_BUFFER_DEPRD_Q_DEP_BPOS = 30;            // The MFIFO dept is 128 double words (64-bit).
                                                                               // The depth of the Read Queue is hardwired at 16
                                                                               // lines.

// RESERVED                                                                       Properties: Bit: 15, Type: rud, Reset Value: 0x0

                                                                               // Properties: Bit: 7, Type: rudsro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CRD_RESERVEDWR_CAP_MASK                  = 0x00000080;    // read undefined
const uintptr_t DMAC_CRD_RESERVEDWR_CAP_BPOS                  = 7;             // The number of outstanding Write Transactions is
                                                                               // is hardwired at 8.

                                                                               // Properties: Bit: 3, Type: rudsro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_CRD_RESERVEDDATA_WIDTH_MASK              = 0x00000008;    // read undefined
const uintptr_t DMAC_CRD_RESERVEDDATA_WIDTH_BPOS              = 3;             // The data width of the AXI master interface 64 bits.


//------------------------------------------------------------------------------
//
// Register (DMAC) WD
//
// Name                    DMAC_WD_REG
// Relative Address        0x00000E80
// Absolute Address        dmac0_ns: 0xF8004E80
//                         dmac0_s: 0xF8003E80
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Watchdog Timer
//
// Register DMAC_WD_REG Details
//
// RESERVED                                                  Properties: Bits: 31:1, Type: rud, Reset Value: 0x0

                                                          // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_WD_WD_IRQ_ONLY_MASK = 0x00000001;    // When a lock-up is detected, the DMAC aborts the
const uintptr_t DMAC_WD_WD_IRQ_ONLY_BPOS = 0;             // DMA channel thread and asserts the Abort
                                                          // interrupt.


//------------------------------------------------------------------------------
//
// Register (DMAC) PERIPH_ID_0
//
// Name                    DMAC_PERIPH_ID_0_REG
// Software Name           PERIPH_ID_0
// Relative Address        0x00000FE0
// Absolute Address        dmac0_ns: 0xF8004FE0
//                         dmac0_s: 0xF8003FE0
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00000030
// Description             Peripheral Idenfication register 0
//
// Register DMAC_PERIPH_ID_0_REG Details
//
                                                                             // Properties: Bits: 31:8, Type: rudsro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_PERIPH_ID_0_RESERVEDPART_NUMBER_0_MASK = 0xFFFFFF00;    // read undefined
const uintptr_t DMAC_PERIPH_ID_0_RESERVEDPART_NUMBER_0_BPOS = 8;             // returns 0x30


//------------------------------------------------------------------------------
//
// Register (DMAC) PERIPH_ID_1
//
// Name                    DMAC_PERIPH_ID_1_REG
// Software Name           PERIPH_ID_1
// Relative Address        0x00000FE4
// Absolute Address        dmac0_ns: 0xF8004FE4
//                         dmac0_s: 0xF8003FE4
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00000013
// Description             Peripheral Idenfication register 1
//
// Register DMAC_PERIPH_ID_1_REG Details
//
                                                                                       // Properties: Bits: 31:8, Type: rudsro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_PERIPH_ID_1_RESERVEDDESIGNER_0PART_NUMBER_1_MASK = 0xFFFFFF00;    // read undefined
const uintptr_t DMAC_PERIPH_ID_1_RESERVEDDESIGNER_0PART_NUMBER_1_BPOS = 8;             // returns 0x1
                                                                                       // returns 0x3


//------------------------------------------------------------------------------
//
// Register (DMAC) PERIPH_ID_2
//
// Name                    DMAC_PERIPH_ID_2_REG
// Software Name           PERIPH_ID_2
// Relative Address        0x00000FE8
// Absolute Address        dmac0_ns: 0xF8004FE8
//                         dmac0_s: 0xF8003FE8
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00000024
// Description             Peripheral Idenfication register 2
//
// Register DMAC_PERIPH_ID_2_REG Details
//
                                                                                  // Properties: Bits: 31:8, Type: rudsro,nssraz,nsnsrosro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_PERIPH_ID_2_RESERVEDREVISIONDESIGNER_1_MASK = 0xFFFFFF00;    // read undefined
const uintptr_t DMAC_PERIPH_ID_2_RESERVEDREVISIONDESIGNER_1_BPOS = 8;             // DMAC IP revision is r1p1.
                                                                                  // returns 0x4


//------------------------------------------------------------------------------
//
// Register (DMAC) PERIPH_ID_3
//
// Name                    DMAC_PERIPH_ID_3_REG
// Software Name           PERIPH_ID_3
// Relative Address        0x00000FEC
// Absolute Address        dmac0_ns: 0xF8004FEC
//                         dmac0_s: 0xF8003FEC
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Peripheral Idenfication register 3
//
// Register DMAC_PERIPH_ID_3_REG Details
//
// RESERVED                                                               Properties: Bits: 31:1, Type: rud, Reset Value: 0x0

                                                                       // Properties: Bit: 0, Type: sro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_PERIPH_ID_3_INTEGRATION_CFG_MASK = 0x00000001;    // The DMAC does not contain integration test logic
const uintptr_t DMAC_PERIPH_ID_3_INTEGRATION_CFG_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (DMAC) PCELL_ID_0
//
// Name                    DMAC_PCELL_ID_0_REG
// Software Name           PCELL_ID_0
// Relative Address        0x00000FF0
// Absolute Address        dmac0_ns: 0xF8004FF0
//                         dmac0_s: 0xF8003FF0
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x0000000D
// Description             Compontent Idenfication register 0
//
// Register DMAC_PCELL_ID_0_REG Details
//
                                                                         // Properties: Bits: 31:8, Type: rudsro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_PCELL_ID_0_RESERVEDPCELL_ID_0_MASK = 0xFFFFFF00;    // read undefined
const uintptr_t DMAC_PCELL_ID_0_RESERVEDPCELL_ID_0_BPOS = 8;             // returnx 0x0D


//------------------------------------------------------------------------------
//
// Register (DMAC) PCELL_ID_1
//
// Name                    DMAC_PCELL_ID_1_REG
// Software Name           PCELL_ID_1
// Relative Address        0x00000FF4
// Absolute Address        dmac0_ns: 0xF8004FF4
//                         dmac0_s: 0xF8003FF4
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x000000F0
// Description             Compontent Idenfication register 1
//
// Register DMAC_PCELL_ID_1_REG Details
//
                                                                         // Properties: Bits: 31:8, Type: rudsro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_PCELL_ID_1_RESERVEDPCELL_ID_1_MASK = 0xFFFFFF00;    // read undefined
const uintptr_t DMAC_PCELL_ID_1_RESERVEDPCELL_ID_1_BPOS = 8;             // returns 0xF0


//------------------------------------------------------------------------------
//
// Register (DMAC) PCELL_ID_2
//
// Name                    DMAC_PCELL_ID_2_REG
// Software Name           PCELL_ID_2
// Relative Address        0x00000FF8
// Absolute Address        dmac0_ns: 0xF8004FF8
//                         dmac0_s: 0xF8003FF8
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x00000005
// Description             Compontent Idenfication register 2
//
// Register DMAC_PCELL_ID_2_REG Details
//
                                                                         // Properties: Bits: 31:8, Type: rudsro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_PCELL_ID_2_RESERVEDPCELL_ID_2_MASK = 0xFFFFFF00;    // read undefined
const uintptr_t DMAC_PCELL_ID_2_RESERVEDPCELL_ID_2_BPOS = 8;             // returns 0x05


//------------------------------------------------------------------------------
//
// Register (DMAC) PCELL_ID_3
//
// Name                    DMAC_PCELL_ID_3_REG
// Software Name           PCELL_ID_3
// Relative Address        0x00000FFC
// Absolute Address        dmac0_ns: 0xF8004FFC
//                         dmac0_s: 0xF8003FFC
// Width                   32 bits
// Access Type             mixed
// Reset Value             dmac0_ns: 0x00000000
//                         dmac0_s: 0x000000B1
// Description             Compontent Idenfication register 3
//
// Register DMAC_PCELL_ID_3_REG Details
//
                                                                         // Properties: Bits: 31:8, Type: rudsro,nssraz,nsnsro, Reset Value: 0x0
const uintptr_t DMAC_PCELL_ID_3_RESERVEDPCELL_ID_3_MASK = 0xFFFFFF00;    // read undefined
const uintptr_t DMAC_PCELL_ID_3_RESERVEDPCELL_ID_3_BPOS = 8;             // returns 0xB1


#endif // PS7_DMAC_H

