//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_GPIO
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

#ifndef PS7_GPIO_H
#define PS7_GPIO_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    GPIO MMRs
//
//  Name                       Address                    Width   Type     Reset Value   Description
enum TGPIO
{
    GPIO_MASK_DATA_0_LSW_REG =  GPIO_ADDR + 0x00000000, //  32    mixed    x             Maskable Output Data 
    GPIO_MASK_DATA_0_MSW_REG =  GPIO_ADDR + 0x00000004, //  32    mixed    x             Maskable Output Data 
    GPIO_MASK_DATA_1_LSW_REG =  GPIO_ADDR + 0x00000008, //  32    mixed    x             Maskable Output Data 
    GPIO_MASK_DATA_1_MSW_REG =  GPIO_ADDR + 0x0000000C, //  22    mixed    x             Maskable Output Data 
    GPIO_MASK_DATA_2_LSW_REG =  GPIO_ADDR + 0x00000010, //  32    mixed    0x00000000    Maskable Output Data 
    GPIO_MASK_DATA_2_MSW_REG =  GPIO_ADDR + 0x00000014, //  32    mixed    0x00000000    Maskable Output Data 
    GPIO_MASK_DATA_3_LSW_REG =  GPIO_ADDR + 0x00000018, //  32    mixed    0x00000000    Maskable Output Data 
    GPIO_MASK_DATA_3_MSW_REG =  GPIO_ADDR + 0x0000001C, //  32    mixed    0x00000000    Maskable Output Data 
    GPIO_DATA_0_REG          =  GPIO_ADDR + 0x00000040, //  32    rw       x             Output Data 
    GPIO_DATA_1_REG          =  GPIO_ADDR + 0x00000044, //  22    rw       x             Output Data 
    GPIO_DATA_2_REG          =  GPIO_ADDR + 0x00000048, //  32    rw       0x00000000    Output Data 
    GPIO_DATA_3_REG          =  GPIO_ADDR + 0x0000004C, //  32    rw       0x00000000    Output Data 
    GPIO_DATA_0_RO_REG       =  GPIO_ADDR + 0x00000060, //  32    ro       x             Input Data 
    GPIO_DATA_1_RO_REG       =  GPIO_ADDR + 0x00000064, //  22    ro       x             Input Data 
    GPIO_DATA_2_RO_REG       =  GPIO_ADDR + 0x00000068, //  32    ro       0x00000000    Input Data 
    GPIO_DATA_3_RO_REG       =  GPIO_ADDR + 0x0000006C, //  32    ro       0x00000000    Input Data 
    GPIO_DIRM_0_REG          =  GPIO_ADDR + 0x00000204, //  32    rw       0x00000000    Direction mode 
    GPIO_OEN_0_REG           =  GPIO_ADDR + 0x00000208, //  32    rw       0x00000000    Output enable 
    GPIO_INT_MASK_0_REG      =  GPIO_ADDR + 0x0000020C, //  32    ro       0x00000000    Interrupt Mask Status 
    GPIO_INT_EN_0_REG        =  GPIO_ADDR + 0x00000210, //  32    wo       0x00000000    Interrupt Enable
    GPIO_INT_DIS_0_REG       =  GPIO_ADDR + 0x00000214, //  32    wo       0x00000000    Interrupt Disable
    GPIO_INT_STAT_0_REG      =  GPIO_ADDR + 0x00000218, //  32    wtc      0x00000000    Interrupt Status 
    GPIO_INT_TYPE_0_REG      =  GPIO_ADDR + 0x0000021C, //  32    rw       0xFFFFFFFF    Interrupt Type 
    GPIO_INT_POLARITY_0_REG  =  GPIO_ADDR + 0x00000220, //  32    rw       0x00000000    Interrupt Polarity 
    GPIO_INT_ANY_0_REG       =  GPIO_ADDR + 0x00000224, //  32    rw       0x00000000    Interrupt Any Edge Sensitive 
    GPIO_DIRM_1_REG          =  GPIO_ADDR + 0x00000244, //  22    rw       0x00000000    Direction mode 
    GPIO_OEN_1_REG           =  GPIO_ADDR + 0x00000248, //  22    rw       0x00000000    Output enable 
    GPIO_INT_MASK_1_REG      =  GPIO_ADDR + 0x0000024C, //  22    ro       0x00000000    Interrupt Mask Status 
    GPIO_INT_EN_1_REG        =  GPIO_ADDR + 0x00000250, //  22    wo       0x00000000    Interrupt Enable
    GPIO_INT_DIS_1_REG       =  GPIO_ADDR + 0x00000254, //  22    wo       0x00000000    Interrupt Disable
    GPIO_INT_STAT_1_REG      =  GPIO_ADDR + 0x00000258, //  22    wtc      0x00000000    Interrupt Status 
    GPIO_INT_TYPE_1_REG      =  GPIO_ADDR + 0x0000025C, //  22    rw       0x003FFFFF    Interrupt Type 
    GPIO_INT_POLARITY_1_REG  =  GPIO_ADDR + 0x00000260, //  22    rw       0x00000000    Interrupt Polarity 
    GPIO_INT_ANY_1_REG       =  GPIO_ADDR + 0x00000264, //  22    rw       0x00000000    Interrupt Any Edge Sensitive 
    GPIO_DIRM_2_REG          =  GPIO_ADDR + 0x00000284, //  32    rw       0x00000000    Direction mode 
    GPIO_OEN_2_REG           =  GPIO_ADDR + 0x00000288, //  32    rw       0x00000000    Output enable 
    GPIO_INT_MASK_2_REG      =  GPIO_ADDR + 0x0000028C, //  32    ro       0x00000000    Interrupt Mask Status 
    GPIO_INT_EN_2_REG        =  GPIO_ADDR + 0x00000290, //  32    wo       0x00000000    Interrupt Enable
    GPIO_INT_DIS_2_REG       =  GPIO_ADDR + 0x00000294, //  32    wo       0x00000000    Interrupt Disable
    GPIO_INT_STAT_2_REG      =  GPIO_ADDR + 0x00000298, //  32    wtc      0x00000000    Interrupt Status 
    GPIO_INT_TYPE_2_REG      =  GPIO_ADDR + 0x0000029C, //  32    rw       0xFFFFFFFF    Interrupt Type 
    GPIO_INT_POLARITY_2_REG  =  GPIO_ADDR + 0x000002A0, //  32    rw       0x00000000    Interrupt Polarity 
    GPIO_INT_ANY_2_REG       =  GPIO_ADDR + 0x000002A4, //  32    rw       0x00000000    Interrupt Any Edge Sensitive 
    GPIO_DIRM_3_REG          =  GPIO_ADDR + 0x000002C4, //  32    rw       0x00000000    Direction mode 
    GPIO_OEN_3_REG           =  GPIO_ADDR + 0x000002C8, //  32    rw       0x00000000    Output enable 
    GPIO_INT_MASK_3_REG      =  GPIO_ADDR + 0x000002CC, //  32    ro       0x00000000    Interrupt Mask Status 
    GPIO_INT_EN_3_REG        =  GPIO_ADDR + 0x000002D0, //  32    wo       0x00000000    Interrupt Enable
    GPIO_INT_DIS_3_REG       =  GPIO_ADDR + 0x000002D4, //  32    wo       0x00000000    Interrupt Disable
    GPIO_INT_STAT_3_REG      =  GPIO_ADDR + 0x000002D8, //  32    wtc      0x00000000    Interrupt Status 
    GPIO_INT_TYPE_3_REG      =  GPIO_ADDR + 0x000002DC, //  32    rw       0xFFFFFFFF    Interrupt Type 
    GPIO_INT_POLARITY_3_REG  =  GPIO_ADDR + 0x000002E0, //  32    rw       0x00000000    Interrupt Polarity 
    GPIO_INT_ANY_3_REG       =  GPIO_ADDR + 0x000002E4  //  32    rw       0x00000000    Interrupt Any Edge Sensitive 
};
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (GPIO) MASK_DATA_0_LSW
//
// Name                    GPIO_MASK_DATA_0_LSW_REG
// Software Name           DATA_LSW
// Relative Address        0x00000000
// Absolute Address        0xE000A000
// Width                   32 bits
// Access Type              mixed
// Reset Value              x
// Description              Maskable Output Data (GPIO Bank0, MIO, Lower 16bits)
//
// Register GPIO_MASK_DATA_0_LSW_REG Details
//         This register enables software to change the value being output on up to 16bits at one time selectively. Only
//         data values with a corresponding deasserted mask bit will be changed. Output data values are unchanged
//         and hold their previous value for bits which are masked. This register avoids the need for a
//         read-modify-write sequence for unchanged bits.
//         NOTE: This register does not affect the enabling of the output driver. See the DIRM_0 and OEN_0 registers.
//         This register controls the output values for the lower 16bits of bank0, which corresponds to MIO[15:0].
//
enum TGPIO_MASK_DATA_0_LSW_REG
{
                                             // Properties: Bits: 31:16, Type: wo, Reset Value: 0x0
    GPIO_MASK_0_LSW_MASK =  0xFFFF0000UL,    // On a write, only bits with a corresponding
    GPIO_MASK_0_LSW_BPOS =  16UL,            // deasserted mask will change the output value.
                                             // 0: pin value is updated
                                             // 1: pin is masked
                                             // Each bit controls the corresponding pin within the
                                             // 16-bit half-bank.
                                             // Reads return 0's.

                                             // Properties: Bits: 15:0, Type: rw, Reset Value: x
    GPIO_DATA_0_LSW_MASK =  0x0000FFFFUL,    // On a write, these are the data values for the
    GPIO_DATA_0_LSW_BPOS =  0UL              // corresponding GPIO output bits. Each bit controls
                                             // the corresponding pin within the 16-bit half-bank.
                                             // Reads return the previous value written to this
                                             // register or DATA_0[15:0]. Reads do not return the
                                             // value on the GPIO pin.

};

//------------------------------------------------------------------------------
//
// Register (GPIO) MASK_DATA_0_MSW
//
// Name                     GPIO_MASK_DATA_0_MSW_REG
// Software Name            DATA_MSW
// Relative Address         0x00000004
// Absolute Address         0xE000A004
// Width                    32 bits
// Access Type              mixed
// Reset Value              x
// Description              Maskable Output Data (GPIO Bank0, MIO, Upper 16bits)
//
// Register GPIO_MASK_DATA_0_MSW_REG Details
//         This register operates in exactly the same manner as MASK_DATA_0_LSW, except that it controls the
//         upper 16bits of bank0, which corresponds to MIO[31:16].
//
enum TGPIO_MASK_DATA_0_MSW_REG
{
                                             // Properties: Bits: 31:16, Type: wo, Reset Value: 0x0
    GPIO_MASK_0_MSW_MASK =  0xFFFF0000UL,    // Operation is the same as
    GPIO_MASK_0_MSW_BPOS =  16UL,            // MASK_DATA_0_LSW[MASK_0_LSW]

                                             // Properties: Bits: 15:0, Type: rw, Reset Value: x
    GPIO_DATA_0_MSW_MASK =  0x0000FFFFUL,    // Operation is the same as
    GPIO_DATA_0_MSW_BPOS =  0UL              // MASK_DATA_0_LSW[DATA_0_LSW]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) MASK_DATA_1_LSW
//
// Name                     GPIO_MASK_DATA_1_LSW_REG
// Relative Address         0x00000008
// Absolute Address         0xE000A008
// Width                    32 bits
// Access Type              mixed
// Reset Value              x
// Description              Maskable Output Data (GPIO Bank1, MIO, Lower 16bits)
//
// Register GPIO_MASK_DATA_1_LSW_REG Details
//         This register operates in exactly the same manner as MASK_DATA_0_LSW, except that it controls the
//         lower 16bits of bank1, which corresponds to MIO[47:32].
//
enum TGPIO_MASK_DATA_1_LSW_REG
{
                                             // Properties: Bits: 31:16, Type: wo, Reset Value: 0x0
    GPIO_MASK_1_LSW_MASK =  0xFFFF0000UL,    // Operation is the same as
    GPIO_MASK_1_LSW_BPOS =  16UL,            // MASK_DATA_0_LSW[MASK_0_LSW]

                                             // Properties: Bits: 15:0, Type: rw, Reset Value: x
    GPIO_DATA_1_LSW_MASK =  0x0000FFFFUL,    // Operation is the same as
    GPIO_DATA_1_LSW_BPOS =  0UL              // MASK_DATA_0_LSW[DATA_0_LSW]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) MASK_DATA_1_MSW
//
// Name                     GPIO_MASK_DATA_1_MSW_REG
// Relative Address         0x0000000C
// Absolute Address         0xE000A00C
// Width                    22 bits
// Access Type              mixed
// Reset Value              x
// Description              Maskable Output Data (GPIO Bank1, MIO, Upper 6bits)
//
// Register GPIO_MASK_DATA_1_MSW_REG Details
//         This register operates in exactly the same manner as MASK_DATA_0_LSW, except that it controls the
//         upper 6bits of bank1, which corresponds to MIO[53:48].
//         NOTE: This register does not control a full 16bits because the MIO unit itself is limited to 54 pins.
//
enum TGPIO_MASK_DATA_1_MSW_REG
{
                                             // Properties: Bits: 21:16, Type: wo, Reset Value: 0x0
    GPIO_MASK_1_MSW_MASK =  0x003F0000UL,    // Operation is the same as
    GPIO_MASK_1_MSW_BPOS =  16UL,            // MASK_DATA_0_LSW[MASK_0_LSW]

// RESERVED                                     Properties: Bits: 15:6, Type: rw, Reset Value: 0x0

                                             // Properties: Bits: 5:0, Type: rw, Reset Value: x
    GPIO_DATA_1_MSW_MASK =  0x0000003FUL,    // Operation is the same as
    GPIO_DATA_1_MSW_BPOS =  0UL              // MASK_DATA_0_LSW[DATA_0_LSW]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) MASK_DATA_2_LSW
//
// Name                    GPIO_MASK_DATA_2_LSW_REG
// Relative Address        0x00000010
// Absolute Address        0xE000A010
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Maskable Output Data (GPIO Bank2, EMIO, Lower 16bits)
//
// Register GPIO_MASK_DATA_2_LSW_REG Details
//         This register operates in exactly the same manner as MASK_DATA_0_LSW, except that it controls the
//         lower 16bits of bank2, which corresponds to EMIO[15:0].
//
enum TGPIO_MASK_DATA_2_LSW_REG
{
                                             // Properties: Bits: 31:16, Type: wo, Reset Value: 0x0
    GPIO_MASK_2_LSW_MASK =  0xFFFF0000UL,    // Operation is the same as
    GPIO_MASK_2_LSW_BPOS =  16UL,            // MASK_DATA_0_LSW[MASK_0_LSW]

                                             // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
    GPIO_DATA_2_LSW_MASK =  0x0000FFFFUL,    // Operation is the same as
    GPIO_DATA_2_LSW_BPOS =  0UL              // MASK_DATA_0_LSW[DATA_0_LSW]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) MASK_DATA_2_MSW
//
// Name                    GPIO_MASK_DATA_2_MSW_REG
// Relative Address        0x00000014
// Absolute Address        0xE000A014
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Maskable Output Data (GPIO Bank2, EMIO, Upper 16bits)
//
// Register GPIO_MASK_DATA_2_MSW_REG Details
//         This register operates in exactly the same manner as MASK_DATA_0_LSW, except that it controls the
//         upper 16bits of bank2, which corresponds to EMIO[31:16].
//
enum TGPIO_MASK_DATA_2_MSW_REG
{
                                             // Properties: Bits: 31:16, Type: wo, Reset Value: 0x0
    GPIO_MASK_2_MSW_MASK =  0xFFFF0000UL,    // Operation is the same as
    GPIO_MASK_2_MSW_BPOS =  16UL,            // MASK_DATA_0_LSW[MASK_0_LSW]

                                             // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
    GPIO_DATA_2_MSW_MASK =  0x0000FFFFUL,    // Operation is the same as
    GPIO_DATA_2_MSW_BPOS =  0UL              // MASK_DATA_0_LSW[DATA_0_LSW]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) MASK_DATA_3_LSW
//
// Name                    GPIO_MASK_DATA_3_LSW_REG
// Relative Address        0x00000018
// Absolute Address        0xE000A018
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Maskable Output Data (GPIO Bank3, EMIO, Lower 16bits)
//
// Register GPIO_MASK_DATA_3_LSW_REG Details
//         This register operates in exactly the same manner as MASK_DATA_0_LSW, except that it controls the
//         lower 16bits of bank3, which corresponds to EMIO[47:32].
//
enum TGPIO_MASK_DATA_3_LSW_REG
{
                                             // Properties: Bits: 31:16, Type: wo, Reset Value: 0x0
    GPIO_MASK_3_LSW_MASK =  0xFFFF0000UL,    // Operation is the same as
    GPIO_MASK_3_LSW_BPOS =  16UL,            // MASK_DATA_0_LSW[MASK_0_LSW]

                                             // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
    GPIO_DATA_3_LSW_MASK =  0x0000FFFFUL,    // Operation is the same as
    GPIO_DATA_3_LSW_BPOS =  0UL              // MASK_DATA_0_LSW[DATA_0_LSW]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) MASK_DATA_3_MSW
//
// Name                    GPIO_MASK_DATA_3_MSW_REG
// Relative Address        0x0000001C
// Absolute Address        0xE000A01C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Maskable Output Data (GPIO Bank3, EMIO, Upper 16bits)
//
// Register GPIO_MASK_DATA_3_MSW_REG Details
//         This register operates in exactly the same manner as MASK_DATA_0_LSW, except that it controls the
//         upper 16bits of bank3, which corresponds to EMIO[63:48].
//
enum TGPIO_MASK_DATA_3_MSW_REG
{
                                             // Properties: Bits: 31:16, Type: wo, Reset Value: 0x0
    GPIO_MASK_3_MSW_MASK =  0xFFFF0000UL,    // Operation is the same as
    GPIO_MASK_3_MSW_BPOS =  16UL,            // MASK_DATA_0_LSW[MASK_0_LSW]

                                             // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
    GPIO_DATA_3_MSW_MASK =  0x0000FFFFUL,    // Operation is the same as
    GPIO_DATA_3_MSW_BPOS =  0UL              // MASK_DATA_0_LSW[DATA_0_LSW]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DATA_0
//
// Name                     GPIO_DATA_0_REG
// Software Name            DATA
// Relative Address         0x00000040
// Absolute Address         0xE000A040
// Width                    32 bits
// Access Type              rw
// Reset Value              x
// Description              Output Data (GPIO Bank0, MIO)
//
// Register GPIO_DATA_0_REG Details
//         This register controls the value being output when the GPIO signal is configured as an output. All 32bits of
//         this register are written at one time. Reading from this register returns the previous value written to either
//         DATA or MASK_DATA_{LSW,MSW}; it does not return the value on the device pin.
//         NOTE: This register does not affect the enabling of the output driver. See the DIRM_0 and OEN_0 registers.
//         This register controls the output values for bank0, which corresponds to MIO[31:0].
//
enum TGPIO_DATA_0_REG
{
                                         // Properties: Bits: 31:0, Type: rw, Reset Value: x
    GPIO_DATA_0_MASK =  0xFFFFFFFFUL,    // Output Data
    GPIO_DATA_0_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DATA_1
//
// Name                     GPIO_DATA_1_REG
// Relative Address         0x00000044
// Absolute Address         0xE000A044
// Width                    22 bits
// Access Type              rw
// Reset Value              x
// Description              Output Data (GPIO Bank1, MIO)
//
// Register GPIO_DATA_1_REG Details
//         This register operates in exactly the same manner as DATA_0, except that it controls bank1, which
//         corresponds to MIO[53:32].
//
enum TGPIO_DATA_1_REG
{
                                         // Properties: Bits: 21:0, Type: rw, Reset Value: x
    GPIO_DATA_1_MASK =  0x003FFFFFUL,    // Output Data
    GPIO_DATA_1_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DATA_2
//
// Name                    GPIO_DATA_2_REG
// Relative Address        0x00000048
// Absolute Address        0xE000A048
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Output Data (GPIO Bank2, EMIO)
//
// Register GPIO_DATA_2_REG Details
//         This register operates in exactly the same manner as DATA_0, except that it controls bank2, which
//         corresponds to EMIO[31:0].
//
enum TGPIO_DATA_2_REG
{
                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_DATA_2_MASK =  0xFFFFFFFFUL,    // Output Data
    GPIO_DATA_2_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DATA_3
//
// Name                    GPIO_DATA_3_REG
// Relative Address        0x0000004C
// Absolute Address        0xE000A04C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Output Data (GPIO Bank3, EMIO)
//
// Register GPIO_DATA_3_REG Details
//         This register operates in exactly the same manner as DATA_0, except that it controls bank3, which
//         corresponds to EMIO[63:32].
//
enum TGPIO_DATA_3_REG
{
                                         // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_DATA_3_MASK =  0xFFFFFFFFUL,    // Output Data
    GPIO_DATA_3_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DATA_0_RO
//
// Name                     GPIO_DATA_0_RO_REG
// Relative Address         0x00000060
// Absolute Address         0xE000A060
// Width                    32 bits
// Access Type              ro
// Reset Value              x
// Description              Input Data (GPIO Bank0, MIO)
//
// Register GPIO_DATA_0_RO_REG Details
//         This register enables software to observe the value on the device pin. If the GPIO signal is configured as an
//         output, then this would normally reflect the value being driven on the output. Writes to this register are
//         ignored.
//         This register reflects the input values for bank0, which corresponds to MIO[31:0].
//         NOTE: If the MIO is not configured to enable this pin as a GPIO pin, then DATA_RO is unpredictable. In
//         other words, software cannot observe values on non-GPIO pins through the GPIO registers.
//
enum TGPIO_DATA_0_RO_REG
{
                                            // Properties: Bits: 31:0, Type: ro, Reset Value: x
    GPIO_DATA_0_RO_MASK =  0xFFFFFFFFUL,    // Input Data
    GPIO_DATA_0_RO_BPOS =  0UL              // NOTE: bits[8:7] of bank0 cannot be used as inputs
                                            // and will always return 0 when read. See the GPIO
                                            // chapter for more information.

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DATA_1_RO
//
// Name                     GPIO_DATA_1_RO_REG
// Relative Address         0x00000064
// Absolute Address         0xE000A064
// Width                    22 bits
// Access Type              ro
// Reset Value              x
// Description              Input Data (GPIO Bank1, MIO)
//
// Register GPIO_DATA_1_RO_REG Details
//         This register operates in exactly the same manner as DATA_0_RO, except that it reflects bank1, which
//         corresponds to MIO[53:32].
//
enum TGPIO_DATA_1_RO_REG
{
                                            // Properties: Bits: 21:0, Type: ro, Reset Value: x
    GPIO_DATA_1_RO_MASK =  0x003FFFFFUL,    // Input Data
    GPIO_DATA_1_RO_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DATA_2_RO
//
// Name                    GPIO_DATA_2_RO_REG
// Relative Address        0x00000068
// Absolute Address        0xE000A068
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Input Data (GPIO Bank2, EMIO)
//
// Register GPIO_DATA_2_RO_REG Details
//         This register operates in exactly the same manner as DATA_0_RO, except that it reflects bank2, which
//         corresponds to EMIO[31:0].
//
enum TGPIO_DATA_2_RO_REG
{
                                            // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    GPIO_DATA_2_RO_MASK =  0xFFFFFFFFUL,    // Input Data
    GPIO_DATA_2_RO_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DATA_3_RO
//
// Name                    GPIO_DATA_3_RO_REG
// Relative Address        0x0000006C
// Absolute Address        0xE000A06C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Input Data (GPIO Bank3, EMIO)
//
// Register GPIO_DATA_3_RO_REG Details
//         This register operates in exactly the same manner as DATA_0_RO, except that it reflects bank3, which
//         corresponds to EMIO[63:32].
//
enum TGPIO_DATA_3_RO_REG
{
                                            // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    GPIO_DATA_3_RO_MASK =  0xFFFFFFFFUL,    // Input Data
    GPIO_DATA_3_RO_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DIRM_0
//
// Name                    GPIO_DIRM_0_REG
// Software Name           DIRM
// Relative Address        0x00000204
// Absolute Address        0xE000A204
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Direction mode (GPIO Bank0, MIO)
//
// Register GPIO_DIRM_0_REG Details
//         This register controls whether the IO pin is acting as an input or an output. Since the input logic is always
//         enabled, this effectively enables/disables the output driver.
//         Each bit of the bank is independently controlled.
//         This register controls bank0, which corresponds to MIO[31:0].
//
enum TGPIO_DIRM_0_REG
{
                                              // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_DIRECTION_0_MASK =  0xFFFFFFFFUL,    // Direction mode
    GPIO_DIRECTION_0_BPOS =  0UL              // 0: input
                                              // 1: output
                                              // Each bit configures the corresponding pin within
                                              // the 32-bit bank
                                              // NOTE: bits[8:7] of bank0 cannot be used as inputs.
                                              // The DIRM bits can be set to 0, but reading
                                              // DATA_RO does not reflect the input value. See
                                              // the GPIO chapter for more information.

};

//------------------------------------------------------------------------------
//
// Register (GPIO) OEN_0
//
// Name                     GPIO_OEN_0_REG
// Software Name            OUTEN
// Relative Address         0x00000208
// Absolute Address         0xE000A208
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Output enable (GPIO Bank0, MIO)
//
// Register GPIO_OEN_0_REG Details
//         When the IO is configured as an output, this controls whether the output is enabled or not. When the
//         output is disabled, the pin is tri-stated.
//         NOTE: The MIO driver setting (slcr.MIO_PIN_xx.TRI_ENABLE field) must be disabled (i.e. set to 0) for
//         this field to be operational. When the MIO tri-state is enabled, the driver is disabled regardless of this GPIO
//         setting.
//         This register controls bank0, which corresponds to MIO[31:0].
//
enum TGPIO_OEN_0_REG
{
                                              // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_OP_ENABLE_0_MASK =  0xFFFFFFFFUL,    // Output enables
    GPIO_OP_ENABLE_0_BPOS =  0UL              // 0: disabled
                                              // 1: enabled
                                              // Each bit configures the corresponding pin within
                                              // the 32-bit bank

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_MASK_0
//
// Name                    GPIO_INT_MASK_0_REG
// Software Name           INTMASK
// Relative Address        0x0000020C
// Absolute Address        0xE000A20C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Interrupt Mask Status (GPIO Bank0, MIO)
//
// Register GPIO_INT_MASK_0_REG Details
//         This register shows which bits are currently masked and which are un-masked/enabled. This register is
//         read only, so masks cannot be changed here. Use INT_EN and INT_DIS to change the mask value.
//         This register controls bank0, which corresponds to MIO[31:0].
//
enum TGPIO_INT_MASK_0_REG
{
                                             // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    GPIO_INT_MASK_0_MASK =  0xFFFFFFFFUL,    // Interrupt mask
    GPIO_INT_MASK_0_BPOS =  0UL              // 0: interrupt source enabled
                                             // 1: interrupt source masked
                                             // Each bit reports the status for the corresponding
                                             // pin within the 32-bit bank

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_EN_0
//
// Name                    GPIO_INT_EN_0_REG
// Software Name           INTEN
// Relative Address        0x00000210
// Absolute Address        0xE000A210
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description              Interrupt Enable/Unmask (GPIO Bank0, MIO)
//
// Register GPIO_INT_EN_0_REG Details
//         This register is used to enable or unmask a GPIO input for use as an interrupt source. Writing a 1 to any bit
//         of this register enables/unmasks that signal for interrupts. Reading from this register returns an
//         unpredictable value.
//         This register controls bank0, which corresponds to MIO[31:0].
//
enum TGPIO_INT_EN_0_REG
{
                                               // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
    GPIO_INT_ENABLE_0_MASK =  0xFFFFFFFFUL,    // Interrupt enable
    GPIO_INT_ENABLE_0_BPOS =  0UL              // 0: no change
                                               // 1: clear interrupt mask
                                               // Each bit configures the corresponding pin within
                                               // the 32-bit bank

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_DIS_0
//
// Name                     GPIO_INT_DIS_0_REG
// Software Name            INTDIS
// Relative Address         0x00000214
// Absolute Address         0xE000A214
// Width                    32 bits
// Access Type              wo
// Reset Value              0x00000000
// Description              Interrupt Disable/Mask (GPIO Bank0, MIO)
//
// Register GPIO_INT_DIS_0_REG Details
//         This register is used to disable or mask a GPIO input for use as an interrupt source. Writing a 1 to any bit
//         of this register disables/masks that signal for interrupts. Reading from this register returns an
//         unpredictable value.
//         This register controls bank0, which corresponds to MIO[31:0].
//
enum TGPIO_INT_DIS_0_REG
{
                                                // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
    GPIO_INT_DISABLE_0_MASK =  0xFFFFFFFFUL,    // Interrupt disable
    GPIO_INT_DISABLE_0_BPOS =  0UL              // 0: no change
                                                // 1: set interrupt mask
                                                // Each bit configures the corresponding pin within
                                                // the 32-bit bank

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_STAT_0
//
// Name                     GPIO_INT_STAT_0_REG
// Software Name            INTSTS
// Relative Address          0x00000218
// Absolute Address         0xE000A218
// Width                     32 bits
// Access Type               wtc
// Reset Value               0x00000000
// Description               Interrupt Status (GPIO Bank0, MIO)
//
// Register GPIO_INT_STAT_0_REG Details
//         This registers shows if an interrupt event has occurred or not. Writing a 1 to a bit in this register clears the
//         interrupt status for that bit. Writing a 0 to a bit in this register is ignored.
//         This register controls bank0, which corresponds to MIO[31:0].
//
enum TGPIO_INT_STAT_0_REG
{
                                               // Properties: Bits: 31:0, Type: wtc, Reset Value: 0x0
    GPIO_INT_STATUS_0_MASK =  0xFFFFFFFFUL,    // Interrupt status
    GPIO_INT_STATUS_0_BPOS =  0UL              // Upon read:
                                               // 0: no interrupt
                                               // 1: interrupt event has occurred
                                               // Upon write:
                                               // 0: no action
                                               // 1: clear interrupt status bit
                                               // Each bit configures the corresponding pin within
                                               // the 32-bit bank

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_TYPE_0
//
// Name                      GPIO_INT_TYPE_0_REG
// Software Name             INTTYPE
// Relative Address          0x0000021C
// Absolute Address         0xE000A21C
// Width                     32 bits
// Access Type              rw
// Reset Value               0xFFFFFFFF
// Description               Interrupt Type (GPIO Bank0, MIO)
//
// Register GPIO_INT_TYPE_0_REG Details
//         This register controls whether the interrupt is edge sensitive or level sensitive.
//         This register controls bank0, which corresponds to MIO[31:0].
//
enum TGPIO_INT_TYPE_0_REG
{
                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0xFFFFFFFF
    GPIO_INT_TYPE_0_MASK =  0xFFFFFFFFUL,    // Interrupt type
    GPIO_INT_TYPE_0_BPOS =  0UL              // 0: level-sensitive
                                             // 1: edge-sensitive
                                             // Each bit configures the corresponding pin within
                                             // the 32-bit bank

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_POLARITY_0
//
// Name                     GPIO_INT_POLARITY_0_REG
// Software Name            INTPOL
// Relative Address         0x00000220
// Absolute Address         0xE000A220
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Interrupt Polarity (GPIO Bank0, MIO)
//
// Register GPIO_INT_POLARITY_0_REG Details
//         This register controls whether the interrupt is active-low or active high (or falling-edge sensitive or
//         rising-edge sensitive).
//         This register controls bank0, which corresponds to MIO[31:0].
//
enum TGPIO_INT_POLARITY_0_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_INT_POL_0_MASK =  0xFFFFFFFFUL,    // Interrupt polarity
    GPIO_INT_POL_0_BPOS =  0UL              // 0: active low or falling edge
                                            // 1: active high or rising edge
                                            // Each bit configures the corresponding pin within
                                            // the 32-bit bank

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_ANY_0
//
// Name                     GPIO_INT_ANY_0_REG
// Software Name            INTANY
// Relative Address         0x00000224
// Absolute Address         0xE000A224
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Interrupt Any Edge Sensitive (GPIO Bank0, MIO)
//
// Register GPIO_INT_ANY_0_REG Details
//         If INT_TYPE is set to edge sensitive, then this register enables an interrupt event on both rising and falling
//         edges. This register is ignored if INT_TYPE is set to level sensitive.
//         This register controls bank0, which corresponds to MIO[31:0].
//
enum TGPIO_INT_ANY_0_REG
{
                                               // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_INT_ON_ANY_0_MASK =  0xFFFFFFFFUL,    // Interrupt edge triggering mode
    GPIO_INT_ON_ANY_0_BPOS =  0UL              // 0: trigger on single edge, using configured
                                               // interrupt polarity
                                               // 1: trigger on both edges
                                               // Each bit configures the corresponding pin within
                                               // the 32-bit bank

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DIRM_1
//
// Name                     GPIO_DIRM_1_REG
// Relative Address         0x00000244
// Absolute Address         0xE000A244
// Width                    22 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Direction mode (GPIO Bank1, MIO)
//
// Register GPIO_DIRM_1_REG Details
//         This register operates in exactly the same manner as DIRM_0, except that it reflects bank1, which
//         corresponds to MIO[53:32].
//
enum TGPIO_DIRM_1_REG
{
                                              // Properties: Bits: 21:0, Type: rw, Reset Value: 0x0
    GPIO_DIRECTION_1_MASK =  0x003FFFFFUL,    // Operation is the same as
    GPIO_DIRECTION_1_BPOS =  0UL              // DIRM_0[DIRECTION_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) OEN_1
//
// Name                     GPIO_OEN_1_REG
// Relative Address         0x00000248
// Absolute Address         0xE000A248
// Width                    22 bits
// Access Type              rw
// Reset Value              0x00000000
// Description             Output enable (GPIO Bank1, MIO)
//
// Register GPIO_OEN_1_REG Details
//         This register operates in exactly the same manner as OEN_0, except that it reflects bank1, which
//         corresponds to MIO[53:32].
//
enum TGPIO_OEN_1_REG
{
                                              // Properties: Bits: 21:0, Type: rw, Reset Value: 0x0
    GPIO_OP_ENABLE_1_MASK =  0x003FFFFFUL,    // Operation is the same as OEN_0[OP_ENABLE_0]
    GPIO_OP_ENABLE_1_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_MASK_1
//
// Name                    GPIO_INT_MASK_1_REG
// Relative Address        0x0000024C
// Absolute Address        0xE000A24C
// Width                   22 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Interrupt Mask Status (GPIO Bank1, MIO)
//
// Register GPIO_INT_MASK_1_REG Details
//         This register operates in exactly the same manner as INT_MASK_0, except that it reflects bank1, which
//         corresponds to MIO[53:32].
//
enum TGPIO_INT_MASK_1_REG
{
                                             // Properties: Bits: 21:0, Type: ro, Reset Value: 0x0
    GPIO_INT_MASK_1_MASK =  0x003FFFFFUL,    // Operation is the same as
    GPIO_INT_MASK_1_BPOS =  0UL              // INT_MASK_0[INT_MASK_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_EN_1
//
// Name                    GPIO_INT_EN_1_REG
// Relative Address        0x00000250
// Absolute Address        0xE000A250
// Width                   22 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Interrupt Enable/Unmask (GPIO Bank1, MIO)
//
// Register GPIO_INT_EN_1_REG Details
//         This register operates in exactly the same manner as INT_EN_0, except that it reflects bank1, which
//         corresponds to MIO[53:32].
//
enum TGPIO_INT_EN_1_REG
{
                                               // Properties: Bits: 21:0, Type: wo, Reset Value: 0x0
    GPIO_INT_ENABLE_1_MASK =  0x003FFFFFUL,    // Operation is the same as
    GPIO_INT_ENABLE_1_BPOS =  0UL              // INT_EN_0[INT_ENABLE_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_DIS_1
//
// Name                    GPIO_INT_DIS_1_REG
// Relative Address        0x00000254
// Absolute Address        0xE000A254
// Width                   22 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Interrupt Disable/Mask (GPIO Bank1, MIO)
//
// Register GPIO_INT_DIS_1_REG Details
//         This register operates in exactly the same manner as INT_DIS_0, except that it reflects bank1, which
//         corresponds to MIO[53:32].
//
enum TGPIO_INT_DIS_1_REG
{
                                                // Properties: Bits: 21:0, Type: wo, Reset Value: 0x0
    GPIO_INT_DISABLE_1_MASK =  0x003FFFFFUL,    // Operation is the same as
    GPIO_INT_DISABLE_1_BPOS =  0UL              // INT_DIS_0[INT_DISABLE_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_STAT_1
//
// Name                    GPIO_INT_STAT_1_REG
// Relative Address        0x00000258
// Absolute Address        0xE000A258
// Width                   22 bits
// Access Type             wtc
// Reset Value             0x00000000
// Description             Interrupt Status (GPIO Bank1, MIO)
//
// Register GPIO_INT_STAT_1_REG Details
//         This register operates in exactly the same manner as INT_STAT_0, except that it reflects bank1, which
//         corresponds to MIO[53:32].
//
enum TGPIO_INT_STAT_1_REG
{
                                               // Properties: Bits: 21:0, Type: wtc, Reset Value: 0x0
    GPIO_INT_STATUS_1_MASK =  0x003FFFFFUL,    // Operation is the same as
    GPIO_INT_STATUS_1_BPOS =  0UL              // INT_STAT_0[INT_STATUS_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_TYPE_1
//
// Name                    GPIO_INT_TYPE_1_REG
// Relative Address        0x0000025C
// Absolute Address        0xE000A25C
// Width                   22 bits
// Access Type             rw
// Reset Value             0x003FFFFF
// Description             Interrupt Type (GPIO Bank1, MIO)
//
// Register GPIO_INT_TYPE_1_REG Details
//         This register operates in exactly the same manner as INT_TYPE_0, except that it reflects bank1, which
//         corresponds to MIO[53:32].
//
enum TGPIO_INT_TYPE_1_REG
{
                                             // Properties: Bits: 21:0, Type: rw, Reset Value: 0x3FFFFF
    GPIO_INT_TYPE_1_MASK =  0x003FFFFFUL,    // Operation is the same as
    GPIO_INT_TYPE_1_BPOS =  0UL              // INT_TYPE_0[INT_TYPE_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_POLARITY_1
//
// Name                    GPIO_INT_POLARITY_1_REG
// Relative Address        0x00000260
// Absolute Address        0xE000A260
// Width                   22 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Polarity (GPIO Bank1, MIO)
//
// Register GPIO_INT_POLARITY_1_REG Details
//         This register operates in exactly the same manner as INT_POLARITY_0, except that it reflects bank1, which
//         corresponds to MIO[53:32].
//
enum TGPIO_INT_POLARITY_1_REG
{
                                            // Properties: Bits: 21:0, Type: rw, Reset Value: 0x0
    GPIO_INT_POL_1_MASK =  0x003FFFFFUL,    // Operation is the same as
    GPIO_INT_POL_1_BPOS =  0UL              // INT_POLARITY_0[INT_POL_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_ANY_1
//
// Name                    GPIO_INT_ANY_1_REG
// Relative Address        0x00000264
// Absolute Address        0xE000A264
// Width                   22 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Any Edge Sensitive (GPIO Bank1, MIO)
//
// Register GPIO_INT_ANY_1_REG Details
//         This register operates in exactly the same manner as INT_ANY_0, except that it reflects bank1, which
//         corresponds to MIO[53:32].
//
enum TGPIO_INT_ANY_1_REG
{
                                               // Properties: Bits: 21:0, Type: rw, Reset Value: 0x0
    GPIO_INT_ON_ANY_1_MASK =  0x003FFFFFUL,    // Operation is the same as
    GPIO_INT_ON_ANY_1_BPOS =  0UL              // INT_ANY_0[INT_ON_ANY_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DIRM_2
//
// Name                    GPIO_DIRM_2_REG
// Relative Address        0x00000284
// Absolute Address        0xE000A284
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Direction mode (GPIO Bank2, EMIO)
//
// Register GPIO_DIRM_2_REG Details
//         This register operates in exactly the same manner as DIRM_0, except that it reflects bank2, which
//         corresponds to EMIO[31:0].
//
enum TGPIO_DIRM_2_REG
{
                                              // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_DIRECTION_2_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_DIRECTION_2_BPOS =  0UL              // DIRM_0[DIRECTION_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) OEN_2
//
// Name                    GPIO_OEN_2_REG
// Relative Address        0x00000288
// Absolute Address        0xE000A288
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Output enable (GPIO Bank2, EMIO)
//
// Register GPIO_OEN_2_REG Details
//         This register operates in exactly the same manner as OEN_0, except that it reflects bank2, which
//         corresponds to EMIO[31:0].
//
enum TGPIO_OEN_2_REG
{
                                              // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_OP_ENABLE_2_MASK =  0xFFFFFFFFUL,    // Operation is the same as OEN_0[OP_ENABLE_0]
    GPIO_OP_ENABLE_2_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_MASK_2
//
// Name                    GPIO_INT_MASK_2_REG
// Relative Address        0x0000028C
// Absolute Address        0xE000A28C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Interrupt Mask Status (GPIO Bank2, EMIO)
//
// Register GPIO_INT_MASK_2_REG Details
//         This register operates in exactly the same manner as INT_MASK_0, except that it reflects bank2, which
//         corresponds to EMIO[31:0].
//
enum TGPIO_INT_MASK_2_REG
{
                                             // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    GPIO_INT_MASK_2_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_MASK_2_BPOS =  0UL              // INT_MASK_0[INT_MASK_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_EN_2
//
// Name                    GPIO_INT_EN_2_REG
// Relative Address        0x00000290
// Absolute Address        0xE000A290
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Interrupt Enable/Unmask (GPIO Bank2, EMIO)
//
// Register GPIO_INT_EN_2_REG Details
//         This register operates in exactly the same manner as INT_EN_0, except that it reflects bank2, which
//         corresponds to EMIO[31:0].
//
enum TGPIO_INT_EN_2_REG
{
                                               // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
    GPIO_INT_ENABLE_2_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_ENABLE_2_BPOS =  0UL              // INT_EN_0[INT_ENABLE_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_DIS_2
//
// Name                    GPIO_INT_DIS_2_REG
// Relative Address        0x00000294
// Absolute Address        0xE000A294
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Interrupt Disable/Mask (GPIO Bank2, EMIO)
//
// Register GPIO_INT_DIS_2_REG Details
//         This register operates in exactly the same manner as INT_DIS_0, except that it reflects bank2, which
//         corresponds to EMIO[31:0].
//
enum TGPIO_INT_DIS_2_REG
{
                                                // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
    GPIO_INT_DISABLE_2_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_DISABLE_2_BPOS =  0UL              // INT_DIS_0[INT_DISABLE_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_STAT_2
//
// Name                    GPIO_INT_STAT_2_REG
// Relative Address        0x00000298
// Absolute Address        0xE000A298
// Width                   32 bits
// Access Type             wtc
// Reset Value             0x00000000
// Description             Interrupt Status (GPIO Bank2, EMIO)
//
// Register GPIO_INT_STAT_2_REG Details
//         This register operates in exactly the same manner as INT_STAT_0, except that it reflects bank2, which
//         corresponds to EMIO[31:0].
//
enum TGPIO_INT_STAT_2_REG
{
                                               // Properties: Bits: 31:0, Type: wtc, Reset Value: 0x0
    GPIO_INT_STATUS_2_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_STATUS_2_BPOS =  0UL              // INT_STAT_0[INT_STATUS_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_TYPE_2
//
// Name                    GPIO_INT_TYPE_2_REG
// Relative Address        0x0000029C
// Absolute Address        0xE000A29C
// Width                   32 bits
// Access Type             rw
// Reset Value             0xFFFFFFFF
// Description             Interrupt Type (GPIO Bank2, EMIO)
//
// Register GPIO_INT_TYPE_2_REG Details
//         This register operates in exactly the same manner as INT_TYPE_0, except that it reflects bank2, which
//         corresponds to EMIO[31:0].
//
enum TGPIO_INT_TYPE_2_REG
{
                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0xFFFFFFFF
    GPIO_INT_TYPE_2_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_TYPE_2_BPOS =  0UL              // INT_TYPE_0[INT_TYPE_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_POLARITY_2
//
// Name                    GPIO_INT_POLARITY_2_REG
// Relative Address        0x000002A0
// Absolute Address        0xE000A2A0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Polarity (GPIO Bank2, EMIO)
//
// Register GPIO_INT_POLARITY_2_REG Details
//         This register operates in exactly the same manner as INT_POLARITY_0, except that it reflects bank2, which
//         corresponds to EMIO[31:0].
//
enum TGPIO_INT_POLARITY_2_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_INT_POL_2_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_POL_2_BPOS =  0UL              // INT_POLARITY_0[INT_POL_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_ANY_2
//
// Name                    GPIO_INT_ANY_2_REG
// Relative Address        0x000002A4
// Absolute Address        0xE000A2A4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Any Edge Sensitive (GPIO Bank2, EMIO)
//
// Register GPIO_INT_ANY_2_REG Details
//         This register operates in exactly the same manner as INT_ANY_0, except that it reflects bank2, which
//         corresponds to EMIO[31:0].
//
enum TGPIO_INT_ANY_2_REG
{
                                               // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_INT_ON_ANY_2_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_ON_ANY_2_BPOS =  0UL              // INT_ANY_0[INT_ON_ANY_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) DIRM_3
//
// Name                    GPIO_DIRM_3_REG
// Relative Address        0x000002C4
// Absolute Address        0xE000A2C4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Direction mode (GPIO Bank3, EMIO)
//
// Register GPIO_DIRM_3_REG Details
//         This register operates in exactly the same manner as DIRM_0, except that it reflects bank3, which
//         corresponds to EMIO[63:32].
//
enum TGPIO_DIRM_3_REG
{
                                              // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_DIRECTION_3_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_DIRECTION_3_BPOS =  0UL              // DIRM_0[DIRECTION_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) OEN_3
//
// Name                    GPIO_OEN_3_REG
// Relative Address        0x000002C8
// Absolute Address        0xE000A2C8
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Output enable (GPIO Bank3, EMIO)
//
// Register GPIO_OEN_3_REG Details
//         This register operates in exactly the same manner as OEN_0, except that it reflects bank3, which
//         corresponds to EMIO[63:32].
//
enum TGPIO_OEN_3_REG
{
                                              // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_OP_ENABLE_3_MASK =  0xFFFFFFFFUL,    // Operation is the same as OEN_0[OP_ENABLE_0]
    GPIO_OP_ENABLE_3_BPOS =  0UL              // 

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_MASK_3
//
// Name                    GPIO_INT_MASK_3_REG
// Relative Address        0x000002CC
// Absolute Address        0xE000A2CC
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Interrupt Mask Status (GPIO Bank3, EMIO)
//
// Register GPIO_INT_MASK_3_REG Details
//         This register operates in exactly the same manner as INT_MASK_0, except that it reflects bank3, which
//         corresponds to EMIO[63:32].
//
enum TGPIO_INT_MASK_3_REG
{
                                             // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
    GPIO_INT_MASK_3_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_MASK_3_BPOS =  0UL              // INT_MASK_0[INT_MASK_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_EN_3
//
// Name                    GPIO_INT_EN_3_REG
// Relative Address        0x000002D0
// Absolute Address        0xE000A2D0
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Interrupt Enable/Unmask (GPIO Bank3, EMIO)
//
// Register GPIO_INT_EN_3_REG Details
//         This register operates in exactly the same manner as INT_EN_0, except that it reflects bank3, which
//         corresponds to EMIO[63:32].
//
enum TGPIO_INT_EN_3_REG
{
                                               // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
    GPIO_INT_ENABLE_3_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_ENABLE_3_BPOS =  0UL              // INT_EN_0[INT_ENABLE_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_DIS_3
//
// Name                    GPIO_INT_DIS_3_REG
// Relative Address        0x000002D4
// Absolute Address        0xE000A2D4
// Width                   32 bits
// Access Type             wo
// Reset Value             0x00000000
// Description             Interrupt Disable/Mask (GPIO Bank3, EMIO)
//
// Register GPIO_INT_DIS_3_REG Details
//         This register operates in exactly the same manner as INT_DIS_0, except that it reflects bank3, which
//         corresponds to EMIO[63:32].
//
enum TGPIO_INT_DIS_3_REG
{
                                                // Properties: Bits: 31:0, Type: wo, Reset Value: 0x0
    GPIO_INT_DISABLE_3_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_DISABLE_3_BPOS =  0UL              // INT_DIS_0[INT_DISABLE_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_STAT_3
//
// Name                    GPIO_INT_STAT_3_REG
// Relative Address        0x000002D8
// Absolute Address        0xE000A2D8
// Width                   32 bits
// Access Type             wtc
// Reset Value             0x00000000
// Description             Interrupt Status (GPIO Bank3, EMIO)
//
// Register GPIO_INT_STAT_3_REG Details
//         This register operates in exactly the same manner as INT_STAT_0, except that it reflects bank3, which
//         corresponds to EMIO[63:32].
//
enum TGPIO_INT_STAT_3_REG
{
                                               // Properties: Bits: 31:0, Type: wtc, Reset Value: 0x0
    GPIO_INT_STATUS_3_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_STATUS_3_BPOS =  0UL              // INT_STAT_0[INT_STATUS_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_TYPE_3
//
// Name                    GPIO_INT_TYPE_3_REG
// Relative Address        0x000002DC
// Absolute Address        0xE000A2DC
// Width                   32 bits
// Access Type             rw
// Reset Value             0xFFFFFFFF
// Description             Interrupt Type (GPIO Bank3, EMIO)
//
// Register GPIO_INT_TYPE_3_REG Details
//         This register operates in exactly the same manner as INT_TYPE_0, except that it reflects bank3, which
//         corresponds to EMIO[63:32].
//
enum TGPIO_INT_TYPE_3_REG
{
                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0xFFFFFFFF
    GPIO_INT_TYPE_3_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_TYPE_3_BPOS =  0UL              // INT_TYPE_0[INT_TYPE_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_POLARITY_3
//
// Name                    GPIO_INT_POLARITY_3_REG
// Relative Address        0x000002E0
// Absolute Address        0xE000A2E0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Polarity (GPIO Bank3, EMIO)
//
// Register GPIO_INT_POLARITY_3_REG Details
//         This register operates in exactly the same manner as INT_POLARITY_0, except that it reflects bank3, which
//         corresponds to EMIO[63:32].
//
enum TGPIO_INT_POLARITY_3_REG
{
                                            // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_INT_POL_3_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_POL_3_BPOS =  0UL              // INT_POLARITY_0[INT_POL_0]

};

//------------------------------------------------------------------------------
//
// Register (GPIO) INT_ANY_3
//
// Name                    GPIO_INT_ANY_3_REG
// Relative Address        0x000002E4
// Absolute Address        0xE000A2E4
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Interrupt Any Edge Sensitive (GPIO Bank3, EMIO)
//
// Register GPIO_INT_ANY_3_REG Details
//         This register operates in exactly the same manner as INT_ANY_0, except that it reflects bank3, which
//         corresponds to EMIO[63:32].
//
enum TGPIO_INT_ANY_3_REG
{
                                               // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
    GPIO_INT_ON_ANY_3_MASK =  0xFFFFFFFFUL,    // Operation is the same as
    GPIO_INT_ON_ANY_3_BPOS =  0UL              // INT_ANY_0[INT_ON_ANY_0]

};

#endif // PS7_GPIO_H

