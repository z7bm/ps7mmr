//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_GPV_TRUSTZONE
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

#ifndef PS7_GPV_TRUSTZONE_H
#define PS7_GPV_TRUSTZONE_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    GPV_TRUSTZONE MMRs
//
//  Name                             Address                             Width   Type  Reset Value   Description
enum TGPV_TRUSTZONE
{
    GPV_TZONE_SECURITY_GP0_AXI_REG =  GPV_TRUSTZONE_ADDR + 0x0000001C, //   1    wo    0x00000000    M_AXI_GP0 security setting
    GPV_TZONE_SECURITY_GP1_AXI_REG =  GPV_TRUSTZONE_ADDR + 0x00000020  //   1    wo    0x00000000    M_AXI_GP1 security setting
};
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (GPV_TZONE) SECURITY_GP0_AXI
//
// Name                     GPV_TZONE_SECURITY_GP0_AXI_REG
// Relative Address         0x0000001C
// Absolute Address         0xF890001C
// Width                    1 bits
// Access Type              wo
// Reset Value              0x00000000
// Description              M_AXI_GP0 security setting
//
// Register GPV_TZONE_SECURITY_GP0_AXI_REG Details
//
enum TGPV_TZONE_SECURITY_GP0_AXI_REG
{
                                               // Properties: Bit: 0, Type: wo, Reset Value: 0x0
    GPV_TZONE_GP0_AXI_MASK =  0x00000001UL,    // Controls the transactions from M_AXI_GP0 to PL:
    GPV_TZONE_GP0_AXI_BPOS =  0UL              // 0 - Always secure
                                               // 1 - Always non-secure.

};

//------------------------------------------------------------------------------
//
// Register (GPV_TZONE) SECURITY_GP1_AXI
//
// Name                     GPV_TZONE_SECURITY_GP1_AXI_REG 
// Relative Address         0x00000020
// Absolute Address         0xF8900020
// Width                    1 bits
// Access Type              wo
// Reset Value              0x00000000
// Description              M_AXI_GP1 security setting
//
// Register GPV_TZONE_SECURITY_GP1_AXI_REG Details
//
enum TGPV_TZONE_SECURITY_GP1_AXI_REG
{
                                               // Properties: Bit: 0, Type: wo, Reset Value: 0x0
    GPV_TZONE_GP1_AXI_MASK =  0x00000001UL,    // Controls the transactions from M_AXI_GP1 to PL:
    GPV_TZONE_GP1_AXI_BPOS =  0UL              // 0 - Always secure
                                               // 1 - Always non-secure.

};

#endif // PS7_GPV_TRUSTZONE_H

