//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_QOS301
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

#ifndef PS7_QOS301_H
#define PS7_QOS301_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    QOS301_cpu MMRs
//
//              Name                      Address                             Width   Type  Reset Value   Description
const uintptr_t QOS_CNTL_REG_CPU        = GPV_QOS301_CPU_ADDR + 0x0000010C; //  32    rw    0x00000000    The QoS control register contains the enable bits for all the regulators
const uintptr_t QOS_MAX_OT_REG_CPU      = GPV_QOS301_CPU_ADDR + 0x00000110; //  32    rw    0x00000000    Maximum number of outstanding transactions
const uintptr_t QOS_MAX_COMB_OT_REG_CPU = GPV_QOS301_CPU_ADDR + 0x00000114; //  32    rw    0x00000000    Maximum number of combined outstanding transactions
const uintptr_t QOS_AW_P_REG_CPU        = GPV_QOS301_CPU_ADDR + 0x00000118; //  32    rw    0x00000000    AW channel peak rate
const uintptr_t QOS_AW_B_REG_CPU        = GPV_QOS301_CPU_ADDR + 0x0000011C; //  32    rw    0x00000000    AW channel burstiness allowance
const uintptr_t QOS_AW_R_REG_CPU        = GPV_QOS301_CPU_ADDR + 0x00000120; //  32    rw    0x00000000    AW channel average rate
const uintptr_t QOS_AR_P_REG_CPU        = GPV_QOS301_CPU_ADDR + 0x00000124; //  32    rw    0x00000000    AR channel peak rate
const uintptr_t QOS_AR_B_REG_CPU        = GPV_QOS301_CPU_ADDR + 0x00000128; //  32    rw    0x00000000    AR channel burstiness allowance
const uintptr_t QOS_AR_R_REG_CPU        = GPV_QOS301_CPU_ADDR + 0x0000012C; //  32    rw    0x00000000    AR channel average rate
//------------------------------------------------------------------------------
//
//    QOS301_dmac MMRs
//
//              Name                       Address                              Width   Type  Reset Value   Description
const uintptr_t QOS_CNTL_REG_DMAC        = GPV_QOS301_DMAC_ADDR + 0x0000010C; //  32    rw    0x00000000    The QoS control register contains the enable bits for all the regulators
const uintptr_t QOS_MAX_OT_REG_DMAC      = GPV_QOS301_DMAC_ADDR + 0x00000110; //  32    rw    0x00000000    Maximum number of outstanding transactions
const uintptr_t QOS_MAX_COMB_OT_REG_DMAC = GPV_QOS301_DMAC_ADDR + 0x00000114; //  32    rw    0x00000000    Maximum number of combined outstanding transactions
const uintptr_t QOS_AW_P_REG_DMAC        = GPV_QOS301_DMAC_ADDR + 0x00000118; //  32    rw    0x00000000    AW channel peak rate
const uintptr_t QOS_AW_B_REG_DMAC        = GPV_QOS301_DMAC_ADDR + 0x0000011C; //  32    rw    0x00000000    AW channel burstiness allowance
const uintptr_t QOS_AW_R_REG_DMAC        = GPV_QOS301_DMAC_ADDR + 0x00000120; //  32    rw    0x00000000    AW channel average rate
const uintptr_t QOS_AR_P_REG_DMAC        = GPV_QOS301_DMAC_ADDR + 0x00000124; //  32    rw    0x00000000    AR channel peak rate
const uintptr_t QOS_AR_B_REG_DMAC        = GPV_QOS301_DMAC_ADDR + 0x00000128; //  32    rw    0x00000000    AR channel burstiness allowance
const uintptr_t QOS_AR_R_REG_DMAC        = GPV_QOS301_DMAC_ADDR + 0x0000012C; //  32    rw    0x00000000    AR channel average rate
//------------------------------------------------------------------------------
//
//    QOS301_iou MMRs
//
//              Name                      Address                             Width   Type  Reset Value   Description
const uintptr_t QOS_CNTL_REG_IOU        = GPV_QOS301_IOU_ADDR + 0x0000010C; //  32    rw    0x00000000    The QoS control register contains the enable bits for all the regulators
const uintptr_t QOS_MAX_OT_REG_IOU      = GPV_QOS301_IOU_ADDR + 0x00000110; //  32    rw    0x00000000    Maximum number of outstanding transactions
const uintptr_t QOS_MAX_COMB_OT_REG_IOU = GPV_QOS301_IOU_ADDR + 0x00000114; //  32    rw    0x00000000    Maximum number of combined outstanding transactions
const uintptr_t QOS_AW_P_REG_IOU        = GPV_QOS301_IOU_ADDR + 0x00000118; //  32    rw    0x00000000    AW channel peak rate
const uintptr_t QOS_AW_B_REG_IOU        = GPV_QOS301_IOU_ADDR + 0x0000011C; //  32    rw    0x00000000    AW channel burstiness allowance
const uintptr_t QOS_AW_R_REG_IOU        = GPV_QOS301_IOU_ADDR + 0x00000120; //  32    rw    0x00000000    AW channel average rate
const uintptr_t QOS_AR_P_REG_IOU        = GPV_QOS301_IOU_ADDR + 0x00000124; //  32    rw    0x00000000    AR channel peak rate
const uintptr_t QOS_AR_B_REG_IOU        = GPV_QOS301_IOU_ADDR + 0x00000128; //  32    rw    0x00000000    AR channel burstiness allowance
const uintptr_t QOS_AR_R_REG_IOU        = GPV_QOS301_IOU_ADDR + 0x0000012C; //  32    rw    0x00000000    AR channel average rate
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (QOS) CNTL
//
// Name                    QOS_CNTL_REG  
// Relative Address        0x0000010C
// Absolute Address        gpv_qos301_cpu: 0xF894610C
//                         gpv_qos301_dmac: 0xF894710C
//                         gpv_qos301_iou: 0xF894810C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description              The QoS control register contains the enable bits for all the regulators.
//
// Register QOS_CNTL_REG Details
//         By default, all of the bits are set to 0, and no regulation is enabled. Regulation only takes place when both
//         the enable bit is set, and its corresponding regulation value is non-zero. The QoS regulators are reset
//         whenever they are re-enabled.
//
                                                       // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t QOS_EN_AWAR_OT_MASK   = 0x00000080;    // Enable combined regulation of outstanding
const uintptr_t QOS_EN_AWAR_OT_BPOS   = 7;             // transactions.

                                                       // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t QOS_EN_AR_OT_MASK     = 0x00000040;    // Enable regulation of outstanding read
const uintptr_t QOS_EN_AR_OT_BPOS     = 6;             // transactions.

                                                       // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t QOS_EN_AW_OT_MASK     = 0x00000020;    // Enable regulation of outstanding write
const uintptr_t QOS_EN_AW_OT_BPOS     = 5;             // transactions.

// RESERVED                                               Properties: Bits: 4:3, Type: rw, Reset Value: 0x0

                                                       // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t QOS_EN_AWAR_RATE_MASK = 0x00000004;    // Enable combined AW/AR rate regulation.
const uintptr_t QOS_EN_AWAR_RATE_BPOS = 2;             // 

                                                       // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t QOS_EN_AR_RATE_MASK   = 0x00000002;    // Enable AR rate regulation.
const uintptr_t QOS_EN_AR_RATE_BPOS   = 1;             // 

                                                       // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t QOS_EN_AW_RATE_MASK   = 0x00000001;    // Enable AW rate regulation.
const uintptr_t QOS_EN_AW_RATE_BPOS   = 0;             // 


//------------------------------------------------------------------------------
//
// Register (QOS) MAX_OT
//
// Name                     QOS_MAX_OT_REG  
// Relative Address         0x00000110
// Absolute Address         gpv_qos301_cpu: 0xF8946110
//                          gpv_qos301_dmac: 0xF8947110
//                          gpv_qos301_iou: 0xF8948110
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Maximum number of outstanding transactions
//
// Register QOS_MAX_OT_REG Details
//         The maximum number of outstanding transactions register enables you to program the maximum number
//         of address requests for the AR and AW channels. The outstanding transaction limits have an integer part
//         and a fractional part.
//         A value of 0 for both the integer and fractional parts disables the programmable regulation so that the
//         NIC-301 base product configuration limits apply.
//         A value of 0 for the fractional part programs disables the regulation of fractional outstanding transactions.
//         The AW and AR outstanding transaction limits are enabled when you set the corresponding en_aw_ot or
//         en_ar_ot control bits of the QoS control register.
//
                                                     // Properties: Bits: 29:24, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AR_MAX_OTI_MASK = 0x3F000000;    // Integer part of max outstanding AR addresses.
const uintptr_t QOS_AR_MAX_OTI_BPOS = 24;            // 

                                                     // Properties: Bits: 23:16, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AR_MAX_OTF_MASK = 0x00FF0000;    // Fraction part of max outstanding AR addresses.
const uintptr_t QOS_AR_MAX_OTF_BPOS = 16;            // 

                                                     // Properties: Bits: 13:8, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AW_MAX_OTI_MASK = 0x00003F00;    // Integer part of max outstanding AW addresses.
const uintptr_t QOS_AW_MAX_OTI_BPOS = 8;             // 

                                                     // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AW_MAX_OTF_MASK = 0x000000FF;    // Fraction part of max outstanding AW addresses.
const uintptr_t QOS_AW_MAX_OTF_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (QOS) MAX_COMB_OT
//
// Name                     QOS_MAX_COMB_OT_REG  
// Relative Address         0x00000114
// Absolute Address         gpv_qos301_cpu: 0xF8946114
//                          gpv_qos301_dmac: 0xF8947114
//                          gpv_qos301_iou: 0xF8948114
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Maximum number of combined outstanding transactions
//
// Register QOS_MAX_COMB_OT_REG Details
//         The maximum combined outstanding transactions register enables you to program the maximum number
//         of address requests for the AR and AW channels. The combined limit is applied after any individual
//         channel limits.
//         A value of 0 for both the integer and fractional parts disables the programmable regulation so that the
//         configuration limits apply.
//         A value of 0 for the fractional part programs disables the regulation of fractional outstanding transactions.
//         The regulation of the combined outstanding transaction limit also requires that you set the en_awar_ot
//         control bit of the QoS control register.
//
                                                       // Properties: Bits: 14:8, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AWAR_MAX_OTI_MASK = 0x00007F00;    // Integer part of max combined outstanding
const uintptr_t QOS_AWAR_MAX_OTI_BPOS = 8;             // AW/AR addresses.

                                                       // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AWAR_MAX_OTF_MASK = 0x000000FF;    // Fraction part of max combined outstanding
const uintptr_t QOS_AWAR_MAX_OTF_BPOS = 0;             // AW/AR addresses.


//------------------------------------------------------------------------------
//
// Register (QOS) AW_P
//
// Name                     QOS_AW_P_REG  
// Relative Address         0x00000118
// Absolute Address         gpv_qos301_cpu: 0xF8946118
//                          gpv_qos301_dmac: 0xF8947118
//                          gpv_qos301_iou: 0xF8948118
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             AW channel peak rate
//
// Register QOS_AW_P_REG Details
//
                                                   // Properties: Bits: 31:24, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AW_P_VAL_MASK = 0xFF000000;    // channel peak rate. 8-bit fraction of the number of
const uintptr_t QOS_AW_P_VAL_BPOS = 24;            // transfers per cycle. A value of 0x80 (decimal 0.5)
                                                   // sets a rate of one transaction every 2 cycles. A
                                                   // value of 0x40 sets a rate of one transaction every 4
                                                   // cycles, etc.


//------------------------------------------------------------------------------
//
// Register (QOS) AW_B
//
// Name                    QOS_AW_B_REG  
// Relative Address        0x0000011C
// Absolute Address        gpv_qos301_cpu: 0xF894611C
//                         gpv_qos301_dmac: 0xF894711C
//                         gpv_qos301_iou: 0xF894811C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             AW channel burstiness allowance
//
// Register QOS_AW_B_REG Details
//
                                                   // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AW_B_VAL_MASK = 0x0000FFFF;    // channel burstiness (integer number of transfers)
const uintptr_t QOS_AW_B_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (QOS) AW_R
//
// Name                    QOS_AW_R_REG  
// Relative Address        0x00000120
// Absolute Address        gpv_qos301_cpu: 0xF8946120
//                         gpv_qos301_dmac: 0xF8947120
//                         gpv_qos301_iou: 0xF8948120
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             AW channel average rate
//
// Register QOS_AW_R_REG Details
//
                                                   // Properties: Bits: 31:20, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AW_R_VAL_MASK = 0xFFF00000;    // channel average rate. 12-bit fraction of the
const uintptr_t QOS_AW_R_VAL_BPOS = 20;            // number of transfers per cycle. A value of 0x800
                                                   // (decimal 0.5) sets a rate of one transaction every 2
                                                   // cycles. A value of 0x400 sets a rate of one
                                                   // transaction every 4 cycles, etc.


//------------------------------------------------------------------------------
//
// Register (QOS) AR_P
//
// Name                    QOS_AR_P_REG  
// Relative Address        0x00000124
// Absolute Address        gpv_qos301_cpu: 0xF8946124
//                         gpv_qos301_dmac: 0xF8947124
//                         gpv_qos301_iou: 0xF8948124
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             AR channel peak rate
//
// Register QOS_AR_P_REG Details
//
                                                   // Properties: Bits: 31:24, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AR_P_VAL_MASK = 0xFF000000;    // channel peak rate. 8-bit fraction of the number of
const uintptr_t QOS_AR_P_VAL_BPOS = 24;            // transfers per cycle. A value of 0x80 (decimal 0.5)
                                                   // sets a rate of one transaction every 2 cycles. A
                                                   // value of 0x40 sets a rate of one transaction every 4
                                                   // cycles, etc.


//------------------------------------------------------------------------------
//
// Register (QOS) AR_B
//
// Name                    QOS_AR_B_REG  
// Relative Address        0x00000128
// Absolute Address        gpv_qos301_cpu: 0xF8946128
//                         gpv_qos301_dmac: 0xF8947128
//                         gpv_qos301_iou: 0xF8948128
// Width                   32 bits
// Access Type             rw
// Reset Value                0x00000000
// Description                AR channel burstiness allowance
//
// Register QOS_AR_B_REG Details
//
                                                   // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AR_B_VAL_MASK = 0x0000FFFF;    // channel burstiness (integer number of transfers)
const uintptr_t QOS_AR_B_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (QOS) AR_R
//
// Name                       QOS_AR_R_REG  
// Relative Address           0x0000012C
// Absolute Address           gpv_qos301_cpu: 0xF894612C
//                            gpv_qos301_dmac: 0xF894712C
//                            gpv_qos301_iou: 0xF894812C
// Width                      32 bits
// Access Type                rw
// Reset Value                0x00000000
// Description                AR channel average rate
//
// Register QOS_AR_R_REG Details
//     Usage Example:
//     * Peak = 2 (or 1 in 128)
//     * Burstiness = 5
//     * Average = 10 (or 1 in 409)
//     This allows an issuing rate of 1 in 128 until the burstiness allowance of 5 outstanding transactions is
//     reached. Then the average issuing rate of 1 in 409 takes effect until the number of outstanding transactions
//     drops below 5.
//
                                                   // Properties: Bits: 31:20, Type: rw, Reset Value: 0x0
const uintptr_t QOS_AR_R_VAL_MASK = 0xFFF00000;    // channel average rate. 12-bit fraction of the
const uintptr_t QOS_AR_R_VAL_BPOS = 20;            // number of transfers per cycle. A value of 0x800
                                                   // (decimal 0.5) sets a rate of one transaction every 2
                                                   // cycles. A value of 0x400 sets a rate of one
                                                   // transaction every 4 cycles, etc.


#endif // PS7_QOS301_H

