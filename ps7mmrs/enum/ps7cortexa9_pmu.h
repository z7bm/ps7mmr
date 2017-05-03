//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_CORTEXA9_PMU
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

#ifndef PS7_CORTEXA9_PMU_H
#define PS7_CORTEXA9_PMU_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    CORTEXA9_PMU_CPU0 MMRs
//
//  Name                   Address                              Width   Type  Reset Value   Description
enum TCORTEXA9_PMU_CPU0
{
    PMXEVCNTR0_REG_CPU0  =  DEBUG_CPU_PMU0_ADDR + 0x00000000, //  32    rw    x             PMU event counter 0
    PMXEVCNTR1_REG_CPU0  =  DEBUG_CPU_PMU0_ADDR + 0x00000004, //  32    rw    x             PMU event counter 1
    PMXEVCNTR2_REG_CPU0  =  DEBUG_CPU_PMU0_ADDR + 0x00000008, //  32    rw    x             PMU event counter 2
    PMXEVCNTR3_REG_CPU0  =  DEBUG_CPU_PMU0_ADDR + 0x0000000C, //  32    rw    x             PMU event counter 3
    PMXEVCNTR4_REG_CPU0  =  DEBUG_CPU_PMU0_ADDR + 0x00000010, //  32    rw    x             PMU event counter 4
    PMXEVCNTR5_REG_CPU0  =  DEBUG_CPU_PMU0_ADDR + 0x00000014, //  32    rw    x             PMU event counter 5
    PMCCNTR_REG_CPU0     =  DEBUG_CPU_PMU0_ADDR + 0x0000007C, //  32    rw    x             pmccntr
    PMXEVTYPER0_REG_CPU0 =  DEBUG_CPU_PMU0_ADDR + 0x00000400, //  32    rw    x             pmevtyper0
    PMXEVTYPER1_REG_CPU0 =  DEBUG_CPU_PMU0_ADDR + 0x00000404, //  32    rw    x             pmevtyper1
    PMXEVTYPER2_REG_CPU0 =  DEBUG_CPU_PMU0_ADDR + 0x00000408, //  32    rw    x             pmevtyper2
    PMXEVTYPER3_REG_CPU0 =  DEBUG_CPU_PMU0_ADDR + 0x0000040C, //  32    rw    x             pmevtyper3
    PMXEVTYPER4_REG_CPU0 =  DEBUG_CPU_PMU0_ADDR + 0x00000410, //  32    rw    x             pmevtyper4
    PMXEVTYPER5_REG_CPU0 =  DEBUG_CPU_PMU0_ADDR + 0x00000414, //  32    rw    x             pmevtyper5
    PMCNTENSET_REG_CPU0  =  DEBUG_CPU_PMU0_ADDR + 0x00000C00, //  32    rw    0x00000000    pmcntenset
    PMCNTENCLR_REG_CPU0  =  DEBUG_CPU_PMU0_ADDR + 0x00000C20, //  32    rw    0x00000000    pmcntenclr
    PMINTENSET_REG_CPU0  =  DEBUG_CPU_PMU0_ADDR + 0x00000C40, //  32    rw    0x00000000    pmintenset
    PMINTENCLR_REG_CPU0  =  DEBUG_CPU_PMU0_ADDR + 0x00000C60, //  32    rw    0x00000000    pmintenclr
    PMOVSR_REG_CPU0      =  DEBUG_CPU_PMU0_ADDR + 0x00000C80, //  32    rw    x             pmovsr
    PMSWINC_REG_CPU0     =  DEBUG_CPU_PMU0_ADDR + 0x00000CA0, //  32    wo    x             pmswinc
    PMCR_REG_CPU0        =  DEBUG_CPU_PMU0_ADDR + 0x00000E04, //  32    rw    0x41093000    pmcr
    PMUSERENR_REG_CPU0   =  DEBUG_CPU_PMU0_ADDR + 0x00000E08  //  32    rw    0x00000000    pmuserenr
};
//------------------------------------------------------------------------------
//
//    CORTEXA9_PMU_CPU1 MMRs
//
//  Name                   Address                              Width   Type  Reset Value   Description
enum TCORTEXA9_PMU_CPU1
{
    PMXEVCNTR0_REG_CPU1  =  DEBUG_CPU_PMU1_ADDR + 0x00000000, //  32    rw    x             PMU event counter 0
    PMXEVCNTR1_REG_CPU1  =  DEBUG_CPU_PMU1_ADDR + 0x00000004, //  32    rw    x             PMU event counter 1
    PMXEVCNTR2_REG_CPU1  =  DEBUG_CPU_PMU1_ADDR + 0x00000008, //  32    rw    x             PMU event counter 2
    PMXEVCNTR3_REG_CPU1  =  DEBUG_CPU_PMU1_ADDR + 0x0000000C, //  32    rw    x             PMU event counter 3
    PMXEVCNTR4_REG_CPU1  =  DEBUG_CPU_PMU1_ADDR + 0x00000010, //  32    rw    x             PMU event counter 4
    PMXEVCNTR5_REG_CPU1  =  DEBUG_CPU_PMU1_ADDR + 0x00000014, //  32    rw    x             PMU event counter 5
    PMCCNTR_REG_CPU1     =  DEBUG_CPU_PMU1_ADDR + 0x0000007C, //  32    rw    x             pmccntr
    PMXEVTYPER0_REG_CPU1 =  DEBUG_CPU_PMU1_ADDR + 0x00000400, //  32    rw    x             pmevtyper0
    PMXEVTYPER1_REG_CPU1 =  DEBUG_CPU_PMU1_ADDR + 0x00000404, //  32    rw    x             pmevtyper1
    PMXEVTYPER2_REG_CPU1 =  DEBUG_CPU_PMU1_ADDR + 0x00000408, //  32    rw    x             pmevtyper2
    PMXEVTYPER3_REG_CPU1 =  DEBUG_CPU_PMU1_ADDR + 0x0000040C, //  32    rw    x             pmevtyper3
    PMXEVTYPER4_REG_CPU1 =  DEBUG_CPU_PMU1_ADDR + 0x00000410, //  32    rw    x             pmevtyper4
    PMXEVTYPER5_REG_CPU1 =  DEBUG_CPU_PMU1_ADDR + 0x00000414, //  32    rw    x             pmevtyper5
    PMCNTENSET_REG_CPU1  =  DEBUG_CPU_PMU1_ADDR + 0x00000C00, //  32    rw    0x00000000    pmcntenset
    PMCNTENCLR_REG_CPU1  =  DEBUG_CPU_PMU1_ADDR + 0x00000C20, //  32    rw    0x00000000    pmcntenclr
    PMINTENSET_REG_CPU1  =  DEBUG_CPU_PMU1_ADDR + 0x00000C40, //  32    rw    0x00000000    pmintenset
    PMINTENCLR_REG_CPU1  =  DEBUG_CPU_PMU1_ADDR + 0x00000C60, //  32    rw    0x00000000    pmintenclr
    PMOVSR_REG_CPU1      =  DEBUG_CPU_PMU1_ADDR + 0x00000C80, //  32    rw    x             pmovsr
    PMSWINC_REG_CPU1     =  DEBUG_CPU_PMU1_ADDR + 0x00000CA0, //  32    wo    x             pmswinc
    PMCR_REG_CPU1        =  DEBUG_CPU_PMU1_ADDR + 0x00000E04, //  32    rw    0x41093000    pmcr
    PMUSERENR_REG_CPU1   =  DEBUG_CPU_PMU1_ADDR + 0x00000E08  //  32    rw    0x00000000    pmuserenr
};
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVCNTR0
//
// Name                    PMXEVCNTR0_REG
// Relative Address        0x00000000
// Absolute Address        debug_cpu_pmu0: 0xF8891000
//                         debug_cpu_pmu1: 0xF8893000
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             PMU event counter 0
//
// Register PMXEVCNTR0_REG Details
//
enum TPMXEVCNTR0_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVCNTR0_MASK =  0xFFFFFFFFUL,    // PMU event counter 0
    PMU_PMXEVCNTR0_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVCNTR1
//
// Name                    PMXEVCNTR1_REG
// Relative Address        0x00000004
// Absolute Address        debug_cpu_pmu0: 0xF8891004
//                         debug_cpu_pmu1: 0xF8893004
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             PMU event counter 1
//
// Register PMXEVCNTR1_REG Details
//
enum TPMXEVCNTR1_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVCNTR1_MASK =  0xFFFFFFFFUL,    // PMU event counter 1
    PMU_PMXEVCNTR1_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVCNTR2
//
// Name                    PMXEVCNTR2_REG
// Relative Address        0x00000008
// Absolute Address        debug_cpu_pmu0: 0xF8891008
//                         debug_cpu_pmu1: 0xF8893008
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             PMU event counter 2
//
// Register PMXEVCNTR2_REG Details
//
enum TPMXEVCNTR2_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVCNTR2_MASK =  0xFFFFFFFFUL,    // PMU event counter 2
    PMU_PMXEVCNTR2_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVCNTR3
//
// Name                    PMXEVCNTR3_REG
// Relative Address        0x0000000C
// Absolute Address        debug_cpu_pmu0: 0xF889100C
//                         debug_cpu_pmu1: 0xF889300C
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             PMU event counter 3
//
// Register PMXEVCNTR3_REG Details
//
enum TPMXEVCNTR3_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVCNTR3_MASK =  0xFFFFFFFFUL,    // PMU event counter 3
    PMU_PMXEVCNTR3_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVCNTR4
//
// Name                    PMXEVCNTR4_REG
// Relative Address        0x00000010
// Absolute Address        debug_cpu_pmu0: 0xF8891010
//                         debug_cpu_pmu1: 0xF8893010
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             PMU event counter 4
//
// Register PMXEVCNTR4_REG Details
//
enum TPMXEVCNTR4_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVCNTR4_MASK =  0xFFFFFFFFUL,    // PMU event counter 4
    PMU_PMXEVCNTR4_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVCNTR5
//
// Name                    PMXEVCNTR5_REG
// Relative Address        0x00000014
// Absolute Address        debug_cpu_pmu0: 0xF8891014
//                         debug_cpu_pmu1: 0xF8893014
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             PMU event counter 5
//
// Register PMXEVCNTR5_REG Details
//
enum TPMXEVCNTR5_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVCNTR5_MASK =  0xFFFFFFFFUL,    // PMU event counter 5
    PMU_PMXEVCNTR5_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMCCNTR
//
// Name                    PMCCNTR_REG
// Relative Address        0x0000007C
// Absolute Address        debug_cpu_pmu0: 0xF889107C
//                         debug_cpu_pmu1: 0xF889307C
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             pmccntr
//
// Register PMCCNTR_REG Details
//
enum TPMCCNTR_REG
{
                                         // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMCCNTR_MASK =  0xFFFFFFFFUL,    // pmccntr
    PMU_PMCCNTR_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVTYPER0
//
// Name                    PMXEVTYPER0_REG
// Relative Address        0x00000400
// Absolute Address        debug_cpu_pmu0: 0xF8891400
//                         debug_cpu_pmu1: 0xF8893400
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             pmevtyper0
//
// Register PMXEVTYPER0_REG Details
//
enum TPMXEVTYPER0_REG
{
                                             // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVTYPER0_MASK =  0xFFFFFFFFUL,    // pmevtyper0
    PMU_PMXEVTYPER0_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVTYPER1
//
// Name                    PMXEVTYPER1_REG
// Relative Address        0x00000404
// Absolute Address        debug_cpu_pmu0: 0xF8891404
//                         debug_cpu_pmu1: 0xF8893404
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             pmevtyper1
//
// Register PMXEVTYPER1_REG Details
//
enum TPMXEVTYPER1_REG
{
                                             // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVTYPER1_MASK =  0xFFFFFFFFUL,    // pmevtyper1
    PMU_PMXEVTYPER1_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVTYPER2
//
// Name                    PMXEVTYPER2_REG
// Relative Address        0x00000408
// Absolute Address        debug_cpu_pmu0: 0xF8891408
//                         debug_cpu_pmu1: 0xF8893408
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             pmevtyper2
//
// Register PMXEVTYPER2_REG Details
//
enum TPMXEVTYPER2_REG
{
                                             // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVTYPER2_MASK =  0xFFFFFFFFUL,    // pmevtyper2
    PMU_PMXEVTYPER2_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVTYPER3
//
// Name                    PMXEVTYPER3_REG
// Relative Address        0x0000040C
// Absolute Address        debug_cpu_pmu0: 0xF889140C
//                         debug_cpu_pmu1: 0xF889340C
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             pmevtyper3
//
// Register PMXEVTYPER3_REG Details
//
enum TPMXEVTYPER3_REG
{
                                             // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVTYPER3_MASK =  0xFFFFFFFFUL,    // pmevtyper3
    PMU_PMXEVTYPER3_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVTYPER4
//
// Name                    PMXEVTYPER4_REG
// Relative Address        0x00000410
// Absolute Address        debug_cpu_pmu0: 0xF8891410
//                         debug_cpu_pmu1: 0xF8893410
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             pmevtyper4
//
// Register PMXEVTYPER4_REG Details
//
enum TPMXEVTYPER4_REG
{
                                             // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVTYPER4_MASK =  0xFFFFFFFFUL,    // pmevtyper4
    PMU_PMXEVTYPER4_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMXEVTYPER5
//
// Name                    PMXEVTYPER5_REG
// Relative Address        0x00000414
// Absolute Address        debug_cpu_pmu0: 0xF8891414
//                         debug_cpu_pmu1: 0xF8893414
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             pmevtyper5
//
// Register PMXEVTYPER5_REG Details
//
enum TPMXEVTYPER5_REG
{
                                             // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMXEVTYPER5_MASK =  0xFFFFFFFFUL,    // pmevtyper5
    PMU_PMXEVTYPER5_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMCNTENSET
//
// Name                    PMCNTENSET_REG
// Relative Address        0x00000C00
// Absolute Address        debug_cpu_pmu0: 0xF8891C00
//                         debug_cpu_pmu1: 0xF8893C00
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             pmcntenset
//
// Register PMCNTENSET_REG Details
//
enum TPMCNTENSET_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    PMU_PMCNTENSET_MASK =  0xFFFFFFFFUL,    // pmcntenset
    PMU_PMCNTENSET_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMCNTENCLR
//
// Name                    PMCNTENCLR_REG
// Relative Address        0x00000C20
// Absolute Address        debug_cpu_pmu0: 0xF8891C20
//                         debug_cpu_pmu1: 0xF8893C20
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             pmcntenclr
//
// Register PMCNTENCLR_REG Details
//
enum TPMCNTENCLR_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    PMU_PMCNTENCLR_MASK =  0xFFFFFFFFUL,    // pmcntenclr
    PMU_PMCNTENCLR_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMINTENSET
//
// Name                    PMINTENSET_REG
// Relative Address        0x00000C40
// Absolute Address        debug_cpu_pmu0: 0xF8891C40
//                         debug_cpu_pmu1: 0xF8893C40
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             pmintenset
//
// Register PMINTENSET_REG Details
//
enum TPMINTENSET_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    PMU_PMINTENSET_MASK =  0xFFFFFFFFUL,    // pmintenset
    PMU_PMINTENSET_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMINTENCLR
//
// Name                    PMINTENCLR_REG
// Relative Address        0x00000C60
// Absolute Address        debug_cpu_pmu0: 0xF8891C60
//                         debug_cpu_pmu1: 0xF8893C60
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             pmintenclr
//
// Register PMINTENCLR_REG Details
//
enum TPMINTENCLR_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    PMU_PMINTENCLR_MASK =  0xFFFFFFFFUL,    // pmintenclr
    PMU_PMINTENCLR_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMOVSR
//
// Name                    PMOVSR_REG
// Relative Address        0x00000C80
// Absolute Address        debug_cpu_pmu0: 0xF8891C80
//                         debug_cpu_pmu1: 0xF8893C80
// Width                   32 bits
// Access Type             rw
// Reset Value             x
// Description             pmovsr
//
// Register PMOVSR_REG Details
//
enum TPMOVSR_REG
{
                                        // Properties: Bits: 31:0, Type: rw, Reset Value: x
    PMU_PMOVSR_MASK =  0xFFFFFFFFUL,    // pmovsr
    PMU_PMOVSR_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMSWINC
//
// Name                    PMSWINC_REG
// Relative Address        0x00000CA0
// Absolute Address        debug_cpu_pmu0: 0xF8891CA0
//                         debug_cpu_pmu1: 0xF8893CA0
// Width                   32 bits
// Access Type             wo
// Reset Value             x
// Description             pmswinc
//
// Register PMSWINC_REG Details
//
enum TPMSWINC_REG
{
                                         // Properties: Bits: 31:0, Type: wo, Reset Value: x
    PMU_PMSWINC_MASK =  0xFFFFFFFFUL,    // pmswinc
    PMU_PMSWINC_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMCR
//
// Name                    PMCR_REG
// Relative Address        0x00000E04
// Absolute Address        debug_cpu_pmu0: 0xF8891E04
//                         debug_cpu_pmu1: 0xF8893E04
// Width                   32 bits
// Access Type             rw
// Reset Value             0x41093000
// Description             pmcr
//
// Register PMCR_REG Details
//
enum TPMCR_REG
{
                                      // Properties: Bits: 31:0, Type: rw, Reset Value: 0x41093000
    PMU_PMCR_MASK =  0xFFFFFFFFUL,    // pmcr
    PMU_PMCR_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (PMU) PMUSERENR
//
// Name                    PMUSERENR_REG
// Relative Address        0x00000E08
// Absolute Address        debug_cpu_pmu0: 0xF8891E08
//                         debug_cpu_pmu1: 0xF8893E08
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             pmuserenr
//
// Register PMUSERENR_REG Details
//
enum TPMUSERENR_REG
{
                                           // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    PMU_PMUSERENR_MASK =  0xFFFFFFFFUL,    // pmuserenr
    PMU_PMUSERENR_BPOS =  0UL              // This register is read-only in user mode.

};

#endif // PS7_CORTEXA9_PMU_H

