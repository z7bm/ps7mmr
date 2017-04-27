//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_DAP
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

#ifndef PS7_DAP_H
#define PS7_DAP_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    DAP MMRs
//
//      Name                 Address                              Width   Type  Reset Value   Description
#define DAP_ROMENTRY00_REG  (DEBUG_DAP_ROM_ADDR + 0x00000000UL) //  32    ro    0x00001003    ROM entry 00
#define DAP_ROMENTRY01_REG  (DEBUG_DAP_ROM_ADDR + 0x00000004UL) //  32    ro    0x00002003    ROM entry 01
#define DAP_ROMENTRY02_REG  (DEBUG_DAP_ROM_ADDR + 0x00000008UL) //  32    ro    0x00003003    ROM entry 02
#define DAP_ROMENTRY03_REG  (DEBUG_DAP_ROM_ADDR + 0x0000000CUL) //  32    ro    0x00004003    ROM entry 03
#define DAP_ROMENTRY04_REG  (DEBUG_DAP_ROM_ADDR + 0x00000010UL) //  32    ro    0x00005003    ROM entry 04
#define DAP_ROMENTRY05_REG  (DEBUG_DAP_ROM_ADDR + 0x00000014UL) //  32    ro    0x00009003    ROM entry 05
#define DAP_ROMENTRY06_REG  (DEBUG_DAP_ROM_ADDR + 0x00000018UL) //  32    ro    0x0000A003    ROM entry 06
#define DAP_ROMENTRY07_REG  (DEBUG_DAP_ROM_ADDR + 0x0000001CUL) //  32    ro    0x0000B003    ROM entry 07
#define DAP_ROMENTRY08_REG  (DEBUG_DAP_ROM_ADDR + 0x00000020UL) //  32    ro    0x0000C003    ROM entry 08
#define DAP_ROMENTRY09_REG  (DEBUG_DAP_ROM_ADDR + 0x00000024UL) //  32    ro    0x00080003    ROM entry 09
#define DAP_ROMENTRY10_REG  (DEBUG_DAP_ROM_ADDR + 0x00000028UL) //  32    rw    0x00000000    ROM entry 10
#define DAP_ROMENTRY11_REG  (DEBUG_DAP_ROM_ADDR + 0x0000002CUL) //  32    rw    0x00000000    ROM entry 11
#define DAP_ROMENTRY12_REG  (DEBUG_DAP_ROM_ADDR + 0x00000030UL) //  32    rw    0x00000000    ROM entry 12
#define DAP_ROMENTRY13_REG  (DEBUG_DAP_ROM_ADDR + 0x00000034UL) //  32    rw    0x00000000    ROM entry 13
#define DAP_ROMENTRY14_REG  (DEBUG_DAP_ROM_ADDR + 0x00000038UL) //  32    rw    0x00000000    ROM entry 14
#define DAP_ROMENTRY15_REG  (DEBUG_DAP_ROM_ADDR + 0x0000003CUL) //  32    rw    0x00000000    ROM entry 15
#define DAP_PERIPHID4_REG   (DEBUG_DAP_ROM_ADDR + 0x00000FD0UL) //   8    ro    0x00000003    Peripheral ID4
#define DAP_PERIPHID5_REG   (DEBUG_DAP_ROM_ADDR + 0x00000FD4UL) //   8    ro    0x00000000    Peripheral ID5
#define DAP_PERIPHID6_REG   (DEBUG_DAP_ROM_ADDR + 0x00000FD8UL) //   8    ro    0x00000000    Peripheral ID6
#define DAP_PERIPHID7_REG   (DEBUG_DAP_ROM_ADDR + 0x00000FDCUL) //   8    ro    0x00000000    Peripheral ID7
#define DAP_PERIPHID0_REG   (DEBUG_DAP_ROM_ADDR + 0x00000FE0UL) //   8    ro    0x000000B2    Peripheral ID0
#define DAP_PERIPHID1_REG   (DEBUG_DAP_ROM_ADDR + 0x00000FE4UL) //   8    ro    0x00000093    Peripheral ID1
#define DAP_PERIPHID2_REG   (DEBUG_DAP_ROM_ADDR + 0x00000FE8UL) //   8    ro    0x00000028    Peripheral ID2
#define DAP_PERIPHID3_REG   (DEBUG_DAP_ROM_ADDR + 0x00000FECUL) //   8    ro    0x00000007    Peripheral ID3
#define DAP_COMPID0_REG     (DEBUG_DAP_ROM_ADDR + 0x00000FF0UL) //   8    ro    0x0000000D    Component ID0
#define DAP_COMPID1_REG     (DEBUG_DAP_ROM_ADDR + 0x00000FF4UL) //   8    ro    0x00000010    Component ID1
#define DAP_COMPID2_REG     (DEBUG_DAP_ROM_ADDR + 0x00000FF8UL) //   8    ro    0x00000005    Component ID2
#define DAP_COMPID3_REG     (DEBUG_DAP_ROM_ADDR + 0x00000FFCUL) //   8    ro    0x000000B1    Component ID3
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY00
//
// Name                    DAP_ROMENTRY00_REG
// Relative Address        0x00000000
// Absolute Address        0xF8800000
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00001003
// Description             ROM entry 00
//
// Register DAP_ROMENTRY00_REG Details
//
                                                            // Properties: Bits: 31:12, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY00_ADDRESS_OFFSET_MASK  0xFFFFF000UL    // Base address of the component, relative to the
#define DAP_ROMENTRY00_ADDRESS_OFFSET_BPOS  12UL            // ROM address.
                                                            // Negative values are permitted using two's
                                                            // complement.
                                                            // ComponentAddress = ROMAddress +
                                                            // (AddressOffset SHL 12)

// RESERVED                                                    Properties: Bits: 11:2, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY00_FORMAT_MASK          0x00000002UL    // Format of ROM entry
#define DAP_ROMENTRY00_FORMAT_BPOS          1UL             // numerated Value List:
                                                            // 2BIT=1.
                                                            // BIT=0.

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY00_ENTRY_PRESENT_MASK   0x00000001UL    // Set HIGH to indicate an entry is present.
#define DAP_ROMENTRY00_ENTRY_PRESENT_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY01
//
// Name                    DAP_ROMENTRY01_REG
// Relative Address        0x00000004
// Absolute Address        0xF8800004
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00002003
// Description             ROM entry 01
//
// Register DAP_ROMENTRY01_REG Details
//
                                                            // Properties: Bits: 31:12, Type: ro, Reset Value: 0x2
#define DAP_ROMENTRY01_ADDRESS_OFFSET_MASK  0xFFFFF000UL    // Base address of the component, relative to the
#define DAP_ROMENTRY01_ADDRESS_OFFSET_BPOS  12UL            // ROM address.
                                                            // Negative values are permitted using two's
                                                            // complement.
                                                            // ComponentAddress = ROMAddress +
                                                            // (AddressOffset SHL 12)

// RESERVED                                                    Properties: Bits: 11:2, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY01_FORMAT_MASK          0x00000002UL    // Format of ROM entry
#define DAP_ROMENTRY01_FORMAT_BPOS          1UL             // Enumerated Value List:
                                                            // 32BIT=1.
                                                            // 8BIT=0.

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY01_ENTRY_PRESENT_MASK   0x00000001UL    // Set HIGH to indicate an entry is present.
#define DAP_ROMENTRY01_ENTRY_PRESENT_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY02
//
// Name                    DAP_ROMENTRY02_REG
// Relative Address        0x00000008
// Absolute Address        0xF8800008
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00003003
// Description             ROM entry 02
//
// Register DAP_ROMENTRY02_REG Details
//
                                                            // Properties: Bits: 31:12, Type: ro, Reset Value: 0x3
#define DAP_ROMENTRY02_ADDRESS_OFFSET_MASK  0xFFFFF000UL    // Base address of the component, relative to the
#define DAP_ROMENTRY02_ADDRESS_OFFSET_BPOS  12UL            // ROM address.
                                                            // Negative values are permitted using two's
                                                            // complement.
                                                            // ComponentAddress = ROMAddress +
                                                            // (AddressOffset SHL 12)

// RESERVED                                                    Properties: Bits: 11:2, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY02_FORMAT_MASK          0x00000002UL    // Format of ROM entry
#define DAP_ROMENTRY02_FORMAT_BPOS          1UL             // Enumerated Value List:
                                                            // 32BIT=1.
                                                            // 8BIT=0.

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY02_ENTRY_PRESENT_MASK   0x00000001UL    // Set HIGH to indicate an entry is present.
#define DAP_ROMENTRY02_ENTRY_PRESENT_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY03
//
// Name                    DAP_ROMENTRY03_REG
// Relative Address        0x0000000C
// Absolute Address        0xF880000C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00004003
// Description             ROM entry 03
//
// Register DAP_ROMENTRY03_REG Details
//
                                                            // Properties: Bits: 31:12, Type: ro, Reset Value: 0x4
#define DAP_ROMENTRY03_ADDRESS_OFFSET_MASK  0xFFFFF000UL    // Base address of the component, relative to the
#define DAP_ROMENTRY03_ADDRESS_OFFSET_BPOS  12UL            // ROM address.
                                                            // Negative values are permitted using two's
                                                            // complement.
                                                            // ComponentAddress = ROMAddress +
                                                            // (AddressOffset SHL 12)

// RESERVED                                                    Properties: Bits: 11:2, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY03_FORMAT_MASK          0x00000002UL    // Format of ROM entry
#define DAP_ROMENTRY03_FORMAT_BPOS          1UL             // Enumerated Value List:
                                                            // 32BIT=1.
                                                            // 8BIT=0.

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY03_ENTRY_PRESENT_MASK   0x00000001UL    // Set HIGH to indicate an entry is present.
#define DAP_ROMENTRY03_ENTRY_PRESENT_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY04
//
// Name                    DAP_ROMENTRY04_REG
// Relative Address        0x00000010
// Absolute Address        0xF8800010
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00005003
// Description             ROM entry 04
//
// Register DAP_ROMENTRY04_REG Details
//
                                                            // Properties: Bits: 31:12, Type: ro, Reset Value: 0x5
#define DAP_ROMENTRY04_ADDRESS_OFFSET_MASK  0xFFFFF000UL    // Base address of the component, relative to the
#define DAP_ROMENTRY04_ADDRESS_OFFSET_BPOS  12UL            // ROM address.
                                                            // Negative values are permitted using two's
                                                            // complement.
                                                            // ComponentAddress = ROMAddress +
                                                            // (AddressOffset SHL 12)

// RESERVED                                                    Properties: Bits: 11:2, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY04_FORMAT_MASK          0x00000002UL    // Format of ROM entry
#define DAP_ROMENTRY04_FORMAT_BPOS          1UL             // Enumerated Value List:
                                                            // 32BIT=1.
                                                            // 8BIT=0.

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY04_ENTRY_PRESENT_MASK   0x00000001UL    // Set HIGH to indicate an entry is present.
#define DAP_ROMENTRY04_ENTRY_PRESENT_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY05
//
// Name                    DAP_ROMENTRY05_REG
// Relative Address        0x00000014
// Absolute Address        0xF8800014
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00009003
// Description             ROM entry 05
//
// Register DAP_ROMENTRY05_REG Details
//
                                                            // Properties: Bits: 31:12, Type: ro, Reset Value: 0x9
#define DAP_ROMENTRY05_ADDRESS_OFFSET_MASK  0xFFFFF000UL    // Base address of the component, relative to the
#define DAP_ROMENTRY05_ADDRESS_OFFSET_BPOS  12UL            // ROM address.
                                                            // Negative values are permitted using two's
                                                            // complement.
                                                            // ComponentAddress = ROMAddress +
                                                            // (AddressOffset SHL 12)

// RESERVED                                                    Properties: Bits: 11:2, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY05_FORMAT_MASK          0x00000002UL    // Format of ROM entry
#define DAP_ROMENTRY05_FORMAT_BPOS          1UL             // Enumerated Value List:
                                                            // 32BIT=1.
                                                            // 8BIT=0.

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY05_ENTRY_PRESENT_MASK   0x00000001UL    // Set HIGH to indicate an entry is present.
#define DAP_ROMENTRY05_ENTRY_PRESENT_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY06
//
// Name                    DAP_ROMENTRY06_REG
// Relative Address        0x00000018
// Absolute Address        0xF8800018
// Width                   32 bits
// Access Type             ro
// Reset Value             0x0000A003
// Description             ROM entry 06
//
// Register DAP_ROMENTRY06_REG Details
//
                                                            // Properties: Bits: 31:12, Type: ro, Reset Value: 0xA
#define DAP_ROMENTRY06_ADDRESS_OFFSET_MASK  0xFFFFF000UL    // Base address of the component, relative to the
#define DAP_ROMENTRY06_ADDRESS_OFFSET_BPOS  12UL            // ROM address.
                                                            // Negative values are permitted using two's
                                                            // complement.
                                                            // ComponentAddress = ROMAddress +
                                                            // (AddressOffset SHL 12)

// RESERVED                                                    Properties: Bits: 11:2, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY06_FORMAT_MASK          0x00000002UL    // Format of ROM entry
#define DAP_ROMENTRY06_FORMAT_BPOS          1UL             // Enumerated Value List:
                                                            // 32BIT=1.
                                                            // 8BIT=0.

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY06_ENTRY_PRESENT_MASK   0x00000001UL    // Set HIGH to indicate an entry is present.
#define DAP_ROMENTRY06_ENTRY_PRESENT_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY07
//
// Name                    DAP_ROMENTRY07_REG
// Relative Address        0x0000001C
// Absolute Address        0xF880001C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x0000B003
// Description             ROM entry 07
//
// Register DAP_ROMENTRY07_REG Details
//
                                                            // Properties: Bits: 31:12, Type: ro, Reset Value: 0xB
#define DAP_ROMENTRY07_ADDRESS_OFFSET_MASK  0xFFFFF000UL    // Base address of the component, relative to the
#define DAP_ROMENTRY07_ADDRESS_OFFSET_BPOS  12UL            // ROM address.
                                                            // Negative values are permitted using two's
                                                            // complement.
                                                            // ComponentAddress = ROMAddress +
                                                            // (AddressOffset SHL 12)

// RESERVED                                                    Properties: Bits: 11:2, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY07_FORMAT_MASK          0x00000002UL    // Format of ROM entry
#define DAP_ROMENTRY07_FORMAT_BPOS          1UL             // Enumerated Value List:
                                                            // 32BIT=1.
                                                            // 8BIT=0.

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY07_ENTRY_PRESENT_MASK   0x00000001UL    // Set HIGH to indicate an entry is present.
#define DAP_ROMENTRY07_ENTRY_PRESENT_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY08
//
// Name                    DAP_ROMENTRY08_REG
// Relative Address        0x00000020
// Absolute Address        0xF8800020
// Width                   32 bits
// Access Type             ro
// Reset Value             0x0000C003
// Description             ROM entry 08
//
// Register DAP_ROMENTRY08_REG Details
//
                                                            // Properties: Bits: 31:12, Type: ro, Reset Value: 0xC
#define DAP_ROMENTRY08_ADDRESS_OFFSET_MASK  0xFFFFF000UL    // Base address of the component, relative to the
#define DAP_ROMENTRY08_ADDRESS_OFFSET_BPOS  12UL            // ROM address.
                                                            // Negative values are permitted using two's
                                                            // complement.
                                                            // ComponentAddress = ROMAddress +
                                                            // (AddressOffset SHL 12)

// RESERVED                                                    Properties: Bits: 11:2, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY08_FORMAT_MASK          0x00000002UL    // Format of ROM entry
#define DAP_ROMENTRY08_FORMAT_BPOS          1UL             // numerated Value List:
                                                            // 2BIT=1.
                                                            // BIT=0.

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY08_ENTRY_PRESENT_MASK   0x00000001UL    // Set HIGH to indicate an entry is present.
#define DAP_ROMENTRY08_ENTRY_PRESENT_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY09
//
// Name                    DAP_ROMENTRY09_REG
// Relative Address        0x00000024
// Absolute Address        0xF8800024
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00080003
// Description             ROM entry 09
//
// Register DAP_ROMENTRY09_REG Details
//
                                                            // Properties: Bits: 31:12, Type: ro, Reset Value: 0x80
#define DAP_ROMENTRY09_ADDRESS_OFFSET_MASK  0xFFFFF000UL    // Base address of the component, relative to the
#define DAP_ROMENTRY09_ADDRESS_OFFSET_BPOS  12UL            // ROM address.
                                                            // Negative values are permitted using two's
                                                            // complement.
                                                            // ComponentAddress = ROMAddress +
                                                            // (AddressOffset SHL 12)

// RESERVED                                                    Properties: Bits: 11:2, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 1, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY09_FORMAT_MASK          0x00000002UL    // Format of ROM entry
#define DAP_ROMENTRY09_FORMAT_BPOS          1UL             // numerated Value List:
                                                            // 2BIT=1.
                                                            // BIT=0.

                                                            // Properties: Bit: 0, Type: ro, Reset Value: 0x1
#define DAP_ROMENTRY09_ENTRY_PRESENT_MASK   0x00000001UL    // Set HIGH to indicate an entry is present.
#define DAP_ROMENTRY09_ENTRY_PRESENT_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY10
//
// Name                    DAP_ROMENTRY10_REG
// Relative Address        0x00000028
// Absolute Address        0xF8800028
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ROM entry 10
//
// Register DAP_ROMENTRY10_REG Details
//
                                                 // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
#define DAP_ROMENTRY10_VAL_MASK  0xFFFFFFFFUL    // Invalid entry
#define DAP_ROMENTRY10_VAL_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY11
//
// Name                    DAP_ROMENTRY11_REG
// Relative Address        0x0000002C
// Absolute Address        0xF880002C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ROM entry 11
//
// Register DAP_ROMENTRY11_REG Details
//
                                                 // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
#define DAP_ROMENTRY11_VAL_MASK  0xFFFFFFFFUL    // Invalid entry
#define DAP_ROMENTRY11_VAL_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY12
//
// Name                    DAP_ROMENTRY12_REG
// Relative Address        0x00000030
// Absolute Address        0xF8800030
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ROM entry 12
//
// Register DAP_ROMENTRY12_REG Details
//
                                                 // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
#define DAP_ROMENTRY12_VAL_MASK  0xFFFFFFFFUL    // Invalid entry
#define DAP_ROMENTRY12_VAL_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY13
//
// Name                    DAP_ROMENTRY13_REG
// Relative Address        0x00000034
// Absolute Address        0xF8800034
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ROM entry 13
//
// Register DAP_ROMENTRY13_REG Details
//
                                                 // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
#define DAP_ROMENTRY13_VAL_MASK  0xFFFFFFFFUL    // Invalid entry
#define DAP_ROMENTRY13_VAL_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY14
//
// Name                    DAP_ROMENTRY14_REG
// Relative Address        0x00000038
// Absolute Address        0xF8800038
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ROM entry 14
//
// Register DAP_ROMENTRY14_REG Details
//
                                                 // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
#define DAP_ROMENTRY14_VAL_MASK  0xFFFFFFFFUL    // Invalid entry
#define DAP_ROMENTRY14_VAL_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) ROMENTRY15
//
// Name                    DAP_ROMENTRY15_REG
// Relative Address        0x0000003C
// Absolute Address        0xF880003C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             ROM entry 15
//
// Register DAP_ROMENTRY15_REG Details
//
                                                 // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
#define DAP_ROMENTRY15_VAL_MASK  0xFFFFFFFFUL    // Invalid entry
#define DAP_ROMENTRY15_VAL_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) PERIPHID4
//
// Name                    DAP_PERIPHID4_REG
// Relative Address        0x00000FD0
// Absolute Address        0xF8800FD0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000003
// Description             Peripheral ID4
//
// Register DAP_PERIPHID4_REG Details
//
                                                      // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
#define DAP_PERIPHID4_4KB_COUNT_MASK  0x000000F0UL    // 4KB Count, set to 0
#define DAP_PERIPHID4_4KB_COUNT_BPOS  4UL             // 

                                                      // Properties: Bits: 3:0, Type: ro, Reset Value: 0x3
#define DAP_PERIPHID4_VAL_MASK        0x0000000FUL    // JEP106 continuation code
#define DAP_PERIPHID4_VAL_BPOS        0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) PERIPHID5
//
// Name                    DAP_PERIPHID5_REG
// Relative Address        0x00000FD4
// Absolute Address        0xF8800FD4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID5
//
// Register DAP_PERIPHID5_REG Details
//
// RESERVED                               Properties: Bits: 7:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (DAP) PERIPHID6
//
// Name                    DAP_PERIPHID6_REG
// Relative Address        0x00000FD8
// Absolute Address        0xF8800FD8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID6
//
// Register DAP_PERIPHID6_REG Details
//
// RESERVED                               Properties: Bits: 7:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (DAP) PERIPHID7
//
// Name                    DAP_PERIPHID7_REG
// Relative Address        0x00000FDC
// Absolute Address        0xF8800FDC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Peripheral ID7
//
// Register DAP_PERIPHID7_REG Details
//
// RESERVED                               Properties: Bits: 7:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (DAP) PERIPHID0
//
// Name                    DAP_PERIPHID0_REG
// Relative Address        0x00000FE0
// Absolute Address        0xF8800FE0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B2
// Description             Peripheral ID0
//
// Register DAP_PERIPHID0_REG Details
//
                                                         // Properties: Bits: 7:0, Type: ro, Reset Value: 0xB2
#define DAP_PERIPHID0_PART_NUMBER0_MASK  0x000000FFUL    // PartNumber0
#define DAP_PERIPHID0_PART_NUMBER0_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) PERIPHID1
//
// Name                    DAP_PERIPHID1_REG
// Relative Address        0x00000FE4
// Absolute Address        0xF8800FE4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000093
// Description             Peripheral ID1
//
// Register DAP_PERIPHID1_REG Details
//
                                                         // Properties: Bits: 7:4, Type: ro, Reset Value: 0x9
#define DAP_PERIPHID1_JEP106ID_MASK      0x000000F0UL    // JEP106 Identity Code [3:0]
#define DAP_PERIPHID1_JEP106ID_BPOS      4UL             // 

                                                         // Properties: Bits: 3:0, Type: ro, Reset Value: 0x3
#define DAP_PERIPHID1_PART_NUMBER1_MASK  0x0000000FUL    // PartNumber1
#define DAP_PERIPHID1_PART_NUMBER1_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) PERIPHID2
//
// Name                    DAP_PERIPHID2_REG
// Relative Address        0x00000FE8
// Absolute Address        0xF8800FE8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000028
// Description             Peripheral ID2
//
// Register DAP_PERIPHID2_REG Details
//
                                                     // Properties: Bits: 7:4, Type: ro, Reset Value: 0x2
#define DAP_PERIPHID2_REV_NUM_MASK   0x000000F0UL    // Revision number of Peripheral
#define DAP_PERIPHID2_REV_NUM_BPOS   4UL             // 

                                                     // Properties: Bit: 3, Type: ro, Reset Value: 0x1
#define DAP_PERIPHID2_JEDEC_MASK     0x00000008UL    // Indicates that a JEDEC assigned value is used
#define DAP_PERIPHID2_JEDEC_BPOS     3UL             // 

                                                     // Properties: Bits: 2:0, Type: ro, Reset Value: 0x0
#define DAP_PERIPHID2_JEP106ID_MASK  0x00000007UL    // JEP106 Identity Code [6:4]
#define DAP_PERIPHID2_JEP106ID_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) PERIPHID3
//
// Name                    DAP_PERIPHID3_REG
// Relative Address        0x00000FEC
// Absolute Address        0xF8800FEC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000007
// Description             Peripheral ID3
//
// Register DAP_PERIPHID3_REG Details
//
                                                     // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
#define DAP_PERIPHID3_REV_AND_MASK   0x000000F0UL    // RevAnd, at top level
#define DAP_PERIPHID3_REV_AND_BPOS   4UL             // 

                                                     // Properties: Bits: 3:0, Type: ro, Reset Value: 0x7
#define DAP_PERIPHID3_CUST_MOD_MASK  0x0000000FUL    // Customer Modified
#define DAP_PERIPHID3_CUST_MOD_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) COMPID0
//
// Name                    DAP_COMPID0_REG
// Relative Address        0x00000FF0
// Absolute Address        0xF8800FF0
// Width                   8 bits
// Access Type             ro
// Reset Value             0x0000000D
// Description             Component ID0
//
// Register DAP_COMPID0_REG Details
//
                                                   // Properties: Bits: 7:0, Type: ro, Reset Value: 0xD
#define DAP_COMPID0_PREAMBLE_MASK  0x000000FFUL    // Preamble
#define DAP_COMPID0_PREAMBLE_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) COMPID1
//
// Name                    DAP_COMPID1_REG
// Relative Address        0x00000FF4
// Absolute Address        0xF8800FF4
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000010
// Description             Component ID1
//
// Register DAP_COMPID1_REG Details
//
                                                   // Properties: Bits: 7:0, Type: ro, Reset Value: 0x10
#define DAP_COMPID1_PREAMBLE_MASK  0x000000FFUL    // Preamble
#define DAP_COMPID1_PREAMBLE_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) COMPID2
//
// Name                    DAP_COMPID2_REG
// Relative Address        0x00000FF8
// Absolute Address        0xF8800FF8
// Width                   8 bits
// Access Type             ro
// Reset Value             0x00000005
// Description             Component ID2
//
// Register DAP_COMPID2_REG Details
//
                                                   // Properties: Bits: 7:0, Type: ro, Reset Value: 0x5
#define DAP_COMPID2_PREAMBLE_MASK  0x000000FFUL    // Preamble
#define DAP_COMPID2_PREAMBLE_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (DAP) COMPID3
//
// Name                    DAP_COMPID3_REG
// Relative Address        0x00000FFC
// Absolute Address        0xF8800FFC
// Width                   8 bits
// Access Type             ro
// Reset Value             0x000000B1
// Description             Component ID3
//
// Register DAP_COMPID3_REG Details
//
                                                   // Properties: Bits: 7:0, Type: ro, Reset Value: 0xB1
#define DAP_COMPID3_PREAMBLE_MASK  0x000000FFUL    // Preamble
#define DAP_COMPID3_PREAMBLE_BPOS  0UL             // 


#endif // PS7_DAP_H

