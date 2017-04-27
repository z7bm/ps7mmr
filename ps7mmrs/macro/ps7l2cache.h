//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_L2CACHE
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

#ifndef PS7_L2CACHE_H
#define PS7_L2CACHE_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    L2CACHE MMRs
//
//      Name                           Address                        Width   Type     Reset Value   Description
#define L2C_REG0_CACHE_ID_REG         (L2CACHE_ADDR + 0x00000000UL) //  32    mixed    0x410000C8    cache ID register
#define L2C_REG0_CACHE_TYPE_REG       (L2CACHE_ADDR + 0x00000004UL) //  32    mixed    0x9E300300    cache type register
#define L2C_REG1_CTRL_REG             (L2CACHE_ADDR + 0x00000100UL) //  32    mixed    0x00000000    control register
#define L2C_REG1_AUX_CTRL_REG         (L2CACHE_ADDR + 0x00000104UL) //  32    mixed    0x02060000    auxilary control register
#define L2C_REG1_TAG_RAM_CTRL_REG     (L2CACHE_ADDR + 0x00000108UL) //  32    mixed    0x00000777    Configures Tag RAM latencies
#define L2C_REG1_DATA_RAM_CTRL_REG    (L2CACHE_ADDR + 0x0000010CUL) //  32    mixed    0x00000777    configures data RAM latencies
#define L2C_REG2_EV_CNT_CTRL_REG      (L2CACHE_ADDR + 0x00000200UL) //  32    mixed    0x00000000    Permits the event counters to be enabled and reset
#define L2C_REG2_EV_CNT1_CFG_REG      (L2CACHE_ADDR + 0x00000204UL) //  32    mixed    0x00000000    Enables event counter 1 to be driven by a specific event
#define L2C_REG2_EV_CNT0_CFG_REG      (L2CACHE_ADDR + 0x00000208UL) //  32    mixed    0x00000000    Enables event counter 0 to be driven by a specific event
#define L2C_REG2_EV_CNT1_REG          (L2CACHE_ADDR + 0x0000020CUL) //  32    rw       0x00000000    Enable the programmer to read off the counter value
#define L2C_REG2_EV_CNT0_REG          (L2CACHE_ADDR + 0x00000210UL) //  32    rw       0x00000000    Enable the programmer to read off the counter value
#define L2C_REG2_INT_MASK_REG         (L2CACHE_ADDR + 0x00000214UL) //  32    mixed    0x00000000    This register enables or masks interrupts from being triggered on the external pins of the cache controller
#define L2C_REG2_INT_MASK_STS_REG     (L2CACHE_ADDR + 0x00000218UL) //  32    mixed    0x00000000    This register is a read-only
#define L2C_REG2_INT_RAW_STS_REG      (L2CACHE_ADDR + 0x0000021CUL) //  32    mixed    0x00000000    The Raw Interrupt Status Register enables the interrupt status that excludes the masking logic
#define L2C_REG2_INT_CLEAR_REG        (L2CACHE_ADDR + 0x00000220UL) //  32    mixed    0x00000000    Clears the Raw Interrupt Status Register bits
#define L2C_REG7_CACHE_SYNC_REG       (L2CACHE_ADDR + 0x00000730UL) //  32    mixed    0x00000000    Drain the STB
#define L2C_REG7_INV_PA_REG           (L2CACHE_ADDR + 0x00000770UL) //  32    mixed    0x00000000    Invalidate Line by PA
#define L2C_REG7_INV_WAY_REG          (L2CACHE_ADDR + 0x0000077CUL) //  32    mixed    0x00000000    Invalidate by Way Invalidate all data in specified ways
#define L2C_REG7_CLEAN_PA_REG         (L2CACHE_ADDR + 0x000007B0UL) //  32    mixed    0x00000000    Clean Line by PA Write the specific L2 cache line to L3 main memory if the line is marked as valid and dirty
#define L2C_REG7_CLEAN_INDEX_REG      (L2CACHE_ADDR + 0x000007B8UL) //  32    mixed    0x00000000    Clean Line by Set
#define L2C_REG7_CLEAN_WAY_REG        (L2CACHE_ADDR + 0x000007BCUL) //  32    mixed    0x00000000    Clean by Way Writes each line of the specified L2 cache ways to L3 main memory if the line is marked as valid and dirty
#define L2C_REG7_CLEAN_INV_PA_REG     (L2CACHE_ADDR + 0x000007F0UL) //  32    mixed    0x00000000    Clean and Invalidate Line by PA Write the specific L2 cache line to L3 main memory if the line is marked as valid and dirty
#define L2C_REG7_CLEAN_INV_INDEX_REG  (L2CACHE_ADDR + 0x000007F8UL) //  32    mixed    0x00000000    Clean and Invalidate Line by Set
#define L2C_REG7_CLEAN_INV_WAY_REG    (L2CACHE_ADDR + 0x000007FCUL) //  32    mixed    0x00000000    Clean and Invalidate by Way Writes each line of the specified L2 cache ways to L3 main memory if the line is marked as valid and dirty
#define L2C_REG9_D_LOCKDOWN0_REG      (L2CACHE_ADDR + 0x00000900UL) //  32    mixed    0x00000000    All reg9 registers can prevent new addresses from being allocated and can also prevent data from being evicted out of the L2 cache
#define L2C_REG9_I_LOCKDOWN0_REG      (L2CACHE_ADDR + 0x00000904UL) //  32    mixed    0x00000000    Instruction lock down 0
#define L2C_REG9_D_LOCKDOWN1_REG      (L2CACHE_ADDR + 0x00000908UL) //  32    mixed    0x00000000    Data lock down 1
#define L2C_REG9_I_LOCKDOWN1_REG      (L2CACHE_ADDR + 0x0000090CUL) //  32    mixed    0x00000000    Instruction lock down 1
#define L2C_REG9_D_LOCKDOWN2_REG      (L2CACHE_ADDR + 0x00000910UL) //  32    mixed    0x00000000    Data lock down 2
#define L2C_REG9_I_LOCKDOWN2_REG      (L2CACHE_ADDR + 0x00000914UL) //  32    mixed    0x00000000    Instruction lock down 2
#define L2C_REG9_D_LOCKDOWN3_REG      (L2CACHE_ADDR + 0x00000918UL) //  32    mixed    0x00000000    Data lock down 3
#define L2C_REG9_I_LOCKDOWN3_REG      (L2CACHE_ADDR + 0x0000091CUL) //  32    mixed    0x00000000    Instruction lock down 3
#define L2C_REG9_D_LOCKDOWN4_REG      (L2CACHE_ADDR + 0x00000920UL) //  32    mixed    0x00000000    Data lock down 4
#define L2C_REG9_I_LOCKDOWN4_REG      (L2CACHE_ADDR + 0x00000924UL) //  32    mixed    0x00000000    Instruction lock down 4
#define L2C_REG9_D_LOCKDOWN5_REG      (L2CACHE_ADDR + 0x00000928UL) //  32    mixed    0x00000000    Data lock down 5
#define L2C_REG9_I_LOCKDOWN5_REG      (L2CACHE_ADDR + 0x0000092CUL) //  32    mixed    0x00000000    Instruction lock down 5
#define L2C_REG9_D_LOCKDOWN6_REG      (L2CACHE_ADDR + 0x00000930UL) //  32    mixed    0x00000000    Data lock down 6
#define L2C_REG9_I_LOCKDOWN6_REG      (L2CACHE_ADDR + 0x00000934UL) //  32    mixed    0x00000000    Instruction lock down 6
#define L2C_REG9_D_LOCKDOWN7_REG      (L2CACHE_ADDR + 0x00000938UL) //  32    mixed    0x00000000    Data lock down 7
#define L2C_REG9_I_LOCKDOWN7_REG      (L2CACHE_ADDR + 0x0000093CUL) //  32    mixed    0x00000000    Instruction lock down 7
#define L2C_REG9_LOCK_LINE_EN_REG     (L2CACHE_ADDR + 0x00000950UL) //  32    mixed    0x00000000    Lockdown by Line Enable Register
#define L2C_REG9_UNLOCK_WAY_REG       (L2CACHE_ADDR + 0x00000954UL) //  32    mixed    0x00000000    Cache lockdown by way
#define L2C_REG12_ADDR_FLT_START_REG  (L2CACHE_ADDR + 0x00000C00UL) //  32    mixed    0x40000001    When two masters are implemented
#define L2C_REG12_ADDR_FLT_END_REG    (L2CACHE_ADDR + 0x00000C04UL) //  32    mixed    0xFFF00000    When two masters are implemented
#define L2C_REG15_DEBUG_CTRL_REG      (L2CACHE_ADDR + 0x00000F40UL) //  32    mixed    0x00000000    The Debug Control Register forces specific cache behavior required for debug
#define L2C_REG15_PREFETCH_CTRL_REG   (L2CACHE_ADDR + 0x00000F60UL) //  32    mixed    0x00000000    Purpose Enables prefetch-related features that can improve system performance
#define L2C_REG15_POWER_CTRL_REG      (L2CACHE_ADDR + 0x00000F80UL) //  32    mixed    0x00000000    Purpose Controls the operating mode clock and power modes
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (L2C) REG0_CACHE_ID
//
// Name                    L2C_REG0_CACHE_ID_REG  
// Relative Address        0x00000000
// Absolute Address        0xF8F02000
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x410000C8
// Description             Cache ID register, Returns the 32-bit device ID code it reads off the CACHEID input bus.
//                         The value is specified by the system integrator. Reset value: 0x410000c8
//
// Register L2C_REG0_CACHE_ID_REG Details
//
                                              // Properties: Bits: 31:24, Type: ro, Reset Value: 0x41
#define L2C_IMPLEMENTER_MASK  0xFF000000UL    // 0x41, ARM
#define L2C_IMPLEMENTER_BPOS  24UL            // 

// RESERVED                                      Properties: Bits: 23:16, Type: waz, Reset Value: 0x0

                                              // Properties: Bits: 15:10, Type: ro, Reset Value: 0x0
#define L2C_CACHE_ID_MASK     0x0000FC00UL    // cache id
#define L2C_CACHE_ID_BPOS     10UL            // 

                                              // Properties: Bits: 9:6, Type: ro, Reset Value: 0x3
#define L2C_PART_NUM_MASK     0x000003C0UL    // part number
#define L2C_PART_NUM_BPOS     6UL             // 

                                              // Properties: Bits: 5:0, Type: ro, Reset Value: 0x8
#define L2C_RTL_RELEASE_MASK  0x0000003FUL    // RTL release R3p2
#define L2C_RTL_RELEASE_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG0_CACHE_TYPE
//
// Name                      L2C_REG0_CACHE_TYPE_REG  
// Relative Address          0x00000004
// Absolute Address          0xF8F02004
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x9E300300
// Description               cache type register, Returns the 32-bit cache type. Reset value: 0x1c100100
//
// Register L2C_REG0_CACHE_TYPE_REG Details
//
                                                     // Properties: Bit: 31, Type: ro, Reset Value: 0x1
#define L2C_DATA_BANKING_MASK        0x80000000UL    // 0 = Data banking not implemented.
#define L2C_DATA_BANKING_BPOS        31UL            // 1 = Data banking implemented.

// RESERVED                                             Properties: Bits: 30:29, Type: waz, Reset Value: 0x0

                                                     // Properties: Bits: 28:25, Type: ro, Reset Value: 0xF
#define L2C_CTYPE_MASK               0x1E000000UL    // 11xy, where:
#define L2C_CTYPE_BPOS               25UL            // x=1 if pl310_LOCKDOWN_BY_MASTER is
                                                     // defined, otherwise 0
                                                     // y=1 if pl310_LOCKDOWN_BY_LINE is defined,
                                                     // otherwise 0.

                                                     // Properties: Bit: 24, Type: ro, Reset Value: 0x0
#define L2C_H_MASK                   0x01000000UL    // unified
#define L2C_H_BPOS                   24UL            // 

                                                     // Properties: Bit: 23, Type: waz,raz, Reset Value: 0x0
#define L2C_DSIZE_23_MASK            0x00800000UL    // fixed to 0
#define L2C_DSIZE_23_BPOS            23UL            // 

                                                     // Properties: Bits: 22:20, Type: ro, Reset Value: 0x3
#define L2C_DSIZE_MID_MASK           0x00700000UL    // L2 cache way size Read from Auxiliary Control
#define L2C_DSIZE_MID_BPOS           20UL            // Register 19 through 17

                                                     // Properties: Bit: 19, Type: waz,raz, Reset Value: 0x0
#define L2C_DSIZE_19_MASK            0x00080000UL    // fixed to 0
#define L2C_DSIZE_19_BPOS            19UL            // 

                                                     // Properties: Bit: 18, Type: ro, Reset Value: 0x0
#define L2C_L2_ASSOC_D_MASK          0x00040000UL    // Read from Auxiliary Control Register bit 16
#define L2C_L2_ASSOC_D_BPOS          18UL            // 

// RESERVED                                             Properties: Bits: 17:14, Type: waz, Reset Value: 0x0

                                                     // Properties: Bits: 13:12, Type: ro, Reset Value: 0x0
#define L2C_L2CACHE_LINE_LEN_D_MASK  0x00003000UL    // L2 cache line length - 00-32 bytes
#define L2C_L2CACHE_LINE_LEN_D_BPOS  12UL            // 

                                                     // Properties: Bit: 11, Type: waz,raz, Reset Value: 0x0
#define L2C_ISIZE_11_MASK            0x00000800UL    // fixed to 0
#define L2C_ISIZE_11_BPOS            11UL            // 

                                                     // Properties: Bits: 10:8, Type: ro, Reset Value: 0x3
#define L2C_ISIZE_MID_MASK           0x00000700UL    // L2 cache way size Read from Auxiliary Control
#define L2C_ISIZE_MID_BPOS           8UL             // Register[19:17]

                                                     // Properties: Bit: 7, Type: waz,raz, Reset Value: 0x0
#define L2C_ISIZE_7_MASK             0x00000080UL    // fixed to 0
#define L2C_ISIZE_7_BPOS             7UL             // 

                                                     // Properties: Bit: 6, Type: ro, Reset Value: 0x0
#define L2C_L2_ASSOC_I_MASK          0x00000040UL    // Read from Auxiliary Control Register bit 16
#define L2C_L2_ASSOC_I_BPOS          6UL             // 

// RESERVED                                             Properties: Bits: 5:2, Type: waz, Reset Value: 0x0

                                                     // Properties: Bits: 1:0, Type: ro, Reset Value: 0x0
#define L2C_L2CACHE_LINE_LEN_I_MASK  0x00000003UL    // L2 cache line length - 00-32 bytes
#define L2C_L2CACHE_LINE_LEN_I_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG1_CTRL
//
// Name                      L2C_REG1_CTRL_REG  
// Relative Address          0x00000100
// Absolute Address          0xF8F02100
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               control register, reset value: 0x0
//
// Register L2C_REG1_CTRL_REG Details
//
// RESERVED                                    Properties: Bits: 30:1, Type: waz,raz, Reset Value: 0x0

                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_L2_ENABLE_MASK  0x00000001UL    // 0 = L2 Cache is disabled. This is the default value.
#define L2C_L2_ENABLE_BPOS  0UL             // 1 = L2 Cache is enabled.


//------------------------------------------------------------------------------
//
// Register (L2C) REG1_AUX_CTRL
//
// Name                    L2C_REG1_AUX_CTRL_REG  
// Relative Address        0x00000104
// Absolute Address        0xF8F02104
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x02060000
// Description             auxilary control register, reset value: 0x02020000
//
// Register L2C_REG1_AUX_CTRL_REG Details
//
// RESERVED                                                  Properties: Bit: 31, Type: waz,raz, Reset Value: 0x0

                                                          // Properties: Bit: 30, Type: rw, Reset Value: 0x0
#define L2C_EARLY_BRESP_EN_MASK           0x40000000UL    // Early BRESP enable
#define L2C_EARLY_BRESP_EN_BPOS           30UL            // 0 = Early BRESP disabled. This is the default.
                                                          // 1 = Early BRESP enabled.

                                                          // Properties: Bit: 29, Type: rw, Reset Value: 0x0
#define L2C_INSTR_PREFETCH_EN_MASK        0x20000000UL    // Instruction prefetch enable
#define L2C_INSTR_PREFETCH_EN_BPOS        29UL            // 0 = Instruction prefetching disabled. This is the
                                                          // default.
                                                          // 1 = Instruction prefetching enabled.

                                                          // Properties: Bit: 28, Type: rw, Reset Value: 0x0
#define L2C_DATA_PREFETCH_EN_MASK         0x10000000UL    // Data prefetch enable
#define L2C_DATA_PREFETCH_EN_BPOS         28UL            // 0 = Data prefetching disabled. This is the default.
                                                          // 1 = Data prefetching enabled.

                                                          // Properties: Bit: 27, Type: rw, Reset Value: 0x0
#define L2C_NONSEC_INTE_ACCESS_CTRL_MASK  0x08000000UL    // Non-secure interrupt access control
#define L2C_NONSEC_INTE_ACCESS_CTRL_BPOS  27UL            // 0 = The reg2_int_mask register (at offset address
                                                          // 0x214) and the reg2_int_clear register (at offset
                                                          // address 0x220) can be modified or read with only
                                                          // secure accesses. This is the default.
                                                          // 1 = The reg2_int_mask register (at offset address
                                                          // 0x214) and the reg2_int_clear register (at offset
                                                          // address 0x220) can be modified or read with
                                                          // secure or non-secure accesses.

                                                          // Properties: Bit: 26, Type: rw, Reset Value: 0x0
#define L2C_NONSEC_LOCKDOWN_EN_MASK       0x04000000UL    // Non-secure lockdown enable
#define L2C_NONSEC_LOCKDOWN_EN_BPOS       26UL            // 0 = Lockdown registers cannot be modified using
                                                          // non-secure accesses. This is the
                                                          // default.
                                                          // 1 = Non-secure accesses can write to the
                                                          // lockdown registers.

                                                          // Properties: Bit: 25, Type: rw, Reset Value: 0x1
#define L2C_CACHE_REPLACE_POLICY_MASK     0x02000000UL    // Cache replacement policy
#define L2C_CACHE_REPLACE_POLICY_BPOS     25UL            // 0 = pseudo-random replacement using lfsr.
                                                          // 1 = round-robin replacement. This is the default.

                                                          // Properties: Bits: 24:23, Type: rw, Reset Value: 0x0
#define L2C_FORCE_WRITE_ALLOC_MASK        0x01800000UL    // Force write allocate
#define L2C_FORCE_WRITE_ALLOC_BPOS        23UL            // b00 = Use AWCACHE attributes for WA. This is
                                                          // the default.
                                                          // b01 = Force no allocate, set WA bit always 0.
                                                          // b10 = Override AWCACHE attributes, set WA bit
                                                          // always 1, all cacheable write
                                                          // misses become write allocated.
                                                          // b11 = Internally mapped to 00. See Cache
                                                          // operation on page 2-11 for more
                                                          // information.

                                                          // Properties: Bit: 22, Type: rw, Reset Value: 0x0
#define L2C_SHARED_ATTR_OVERRIDE_EN_MASK  0x00400000UL    // Shared attribute override enable
#define L2C_SHARED_ATTR_OVERRIDE_EN_BPOS  22UL            // 0 = Treats shared accesses as specified in
                                                          // Shareable attribute on page 2-15. This
                                                          // is the default.
                                                          // 1 = Shared attribute internally ignored.

                                                          // Properties: Bit: 21, Type: rw, Reset Value: 0x0
#define L2C_PARITY_EN_MASK                0x00200000UL    // Parity enable
#define L2C_PARITY_EN_BPOS                21UL            // 0 = Disabled. This is the default.
                                                          // 1 = Enabled

                                                          // Properties: Bit: 20, Type: rw, Reset Value: 0x0
#define L2C_EVENT_MON_BUS_EN_MASK         0x00100000UL    // Event monitor bus enable
#define L2C_EVENT_MON_BUS_EN_BPOS         20UL            // 0 = Disabled. This is the default.
                                                          // 1 = Enabled

                                                          // Properties: Bits: 19:17, Type: rw, Reset Value: 0x3
#define L2C_WAY_SIZE_MASK                 0x000E0000UL    // Way-size
#define L2C_WAY_SIZE_BPOS                 17UL            // b000 = Reserved, internally mapped to 16KB.
                                                          // b001 = 16KB.
                                                          // b010 = 32KB.
                                                          // b011 = 64KB.
                                                          // b100 = 128KB.
                                                          // b101 = 256KB.
                                                          // b110 = 512KB.
                                                          // b111 = Reserved, internally mapped to 512 KB.

                                                          // Properties: Bit: 16, Type: rw, Reset Value: 0x0
#define L2C_ASSOCIATIVITY_MASK            0x00010000UL    // Associativity
#define L2C_ASSOCIATIVITY_BPOS            16UL            // 0 = 8-way.
                                                          // 1 = 16-way.

// RESERVED                                                  Properties: Bits: 15:14, Type: waz,raz, Reset Value: 0x0

                                                          // Properties: Bit: 13, Type: rw, Reset Value: 0x0
#define L2C_SHARED_ATTR_INVA_EN_MASK      0x00002000UL    // Shared Attribute Invalidate
#define L2C_SHARED_ATTR_INVA_EN_BPOS      13UL            // Enable 0 = Shared invalidate behavior disabled.
                                                          // This is the default.
                                                          // 1 = Shared invalidate behavior enabled, if Shared
                                                          // Attribute Override Enable bit
                                                          // not set. See Shareable attribute on page 2-15.

                                                          // Properties: Bit: 12, Type: rw, Reset Value: 0x0
#define L2C_EX_CACHE_CONFIG_MASK          0x00001000UL    // Exclusive cache configuration
#define L2C_EX_CACHE_CONFIG_BPOS          12UL            // 0 = Disabled. This is the default.
                                                          // 1 = Enabled,

                                                          // Properties: Bit: 11, Type: rw, Reset Value: 0x0
#define L2C_STORE_BUFF_DEV_LIM_EN_MASK    0x00000800UL    // Store buffer device limitation Enable
#define L2C_STORE_BUFF_DEV_LIM_EN_BPOS    11UL            // 0 = Store buffer device limitation disabled. Device
                                                          // writes can take all slots in store
                                                          // buffer. This is the default.
                                                          // 1= Store buffer device limitation enabled. Device
                                                          // writes cannot take all slots in
                                                          // store buffer when connected to the Cortex-A9
                                                          // MPCore processor. There is always
                                                          // one available slot to service Normal Memory

                                                          // Properties: Bit: 10, Type: rw, Reset Value: 0x0
#define L2C_HIGH_PR_SO_DEV_RD_EN_MASK     0x00000400UL    // High Priority for SO and Dev Reads Enable
#define L2C_HIGH_PR_SO_DEV_RD_EN_BPOS     10UL            // 0 = Strongly Ordered and Device reads have
                                                          // lower priority than cacheable
                                                          // accesses when arbitrated in the L2CC (L2C-310)
                                                          // master ports. This is the default.
                                                          // 1 = Strongly Ordered and Device reads get the
                                                          // highest priority when arbitrated in
                                                          // the L2CC (L2C-310) master ports.

// RESERVED                                                  Properties: Bits: 9:1, Type: waz,raz, Reset Value: 0x0

                                                          // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_FULL_LINE_ZERO_ENABLE_MASK    0x00000001UL    // Full Line of Zero Enable
#define L2C_FULL_LINE_ZERO_ENABLE_BPOS    0UL             // 0 = Full line of write zero behavior disabled. This
                                                          // is the default.
                                                          // 1 = Full line of write zero behavior Enabled.


//------------------------------------------------------------------------------
//
// Register (L2C) TAG_CTRL
//
// Name                    L2C_REG1_TAG_RAM_CTRL_REG  
// Relative Address        0x00000108
// Absolute Address        0xF8F02108
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000777
// Description             Configures Tag RAM latencies
//
// Register L2C_REG1_TAG_RAM_CTRL_REG Details
//
// RESERVED                                                     Properties: Bits: 31:11, Type: waz,raz, Reset Value: 0x0

                                                             // Properties: Bits: 10:8, Type: rw, Reset Value: 0x7
#define L2C_TAG_CTRL_RAM_WR_ACCESS_LAT_MASK  0x00000700UL    // RAM write access latency Default value depends
#define L2C_TAG_CTRL_RAM_WR_ACCESS_LAT_BPOS  8UL             // on the value of pl310_TAG_WRITE_LAT
                                                             // b000 = 1 cycle of latency, there is no additional
                                                             // latency.
                                                             // b001 = 2 cycles of latency.
                                                             // b010 = 3 cycles of latency.
                                                             // b011 = 4 cycles of latency.
                                                             // b100 = 5 cycles of latency.
                                                             // b101 = 6 cycles of latency.
                                                             // b110 = 7 cycles of latency.
                                                             // b111 = 8 cycles of latency

// RESERVED                                                     Properties: Bit: 7, Type: waz,raz, Reset Value: 0x0

                                                             // Properties: Bits: 6:4, Type: rw, Reset Value: 0x7
#define L2C_TAG_CTRL_RAM_RD_ACCESS_LAT_MASK  0x00000070UL    // RAM read access latency Default value depends
#define L2C_TAG_CTRL_RAM_RD_ACCESS_LAT_BPOS  4UL             // on the value of pl310_TAG_READ_LAT
                                                             // b000 = 1 cycle of latency, there is no additional
                                                             // latency.
                                                             // b001 = 2 cycles of latency.
                                                             // b010 = 3 cycles of latency.
                                                             // b011 = 4 cycles of latency.
                                                             // b100 = 5 cycles of latency.
                                                             // b101 = 6 cycles of latency.
                                                             // b110 = 7 cycles of latency.
                                                             // b111 = 8 cycles of latency.

// RESERVED                                                     Properties: Bit: 3, Type: waz,raz, Reset Value: 0x0

                                                             // Properties: Bits: 2:0, Type: rw, Reset Value: 0x7
#define L2C_TAG_CTRL_RAM_SETUP_LAT_MASK      0x00000007UL    // RAM setup latency Default value depends on the
#define L2C_TAG_CTRL_RAM_SETUP_LAT_BPOS      0UL             // value of pl310_TAG_SETUP_LAT
                                                             // b000 = 1 cycle of latency, there is no additional
                                                             // latency.
                                                             // b001 = 2 cycles of latency.
                                                             // b010 = 3 cycles of latency.
                                                             // b011 = 4 cycles of latency.
                                                             // b100 = 5 cycles of latency.
                                                             // b101 = 6 cycles of latency.
                                                             // b110 = 7 cycles of latency.
                                                             // b111 = 8 cycles of latency.


//------------------------------------------------------------------------------
//
// Register (L2C) DATA_CTRL
//
// Name                     L2C_REG1_DATA_RAM_CTRL_REG  
// Relative Address         0x0000010C
// Absolute Address         0xF8F0210C
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000777
// Description              configures data RAM latencies
//
// Register L2C_REG1_DATA_RAM_CTRL_REG Details
//
// RESERVED                                                      Properties: Bits: 31:11, Type: waz,raz, Reset Value: 0x0

                                                              // Properties: Bits: 10:8, Type: rw, Reset Value: 0x7
#define L2C_DATA_CTRL_RAM_WR_ACCESS_LAT_MASK  0x00000700UL    // RAM write access latency Default value depends
#define L2C_DATA_CTRL_RAM_WR_ACCESS_LAT_BPOS  8UL             // on the value of pl310_DATA_WRITE_LAT
                                                              // b000 = 1 cycle of latency, there is no additional
                                                              // latency.
                                                              // b001 = 2 cycles of latency.
                                                              // b010 = 3 cycles of latency.
                                                              // b011 = 4 cycles of latency.
                                                              // b100 = 5 cycles of latency.
                                                              // b101 = 6 cycles of latency.
                                                              // b110 = 7 cycles of latency.
                                                              // b111 = 8 cycles of latency

// RESERVED                                                      Properties: Bit: 7, Type: waz,raz, Reset Value: 0x0

                                                              // Properties: Bits: 6:4, Type: rw, Reset Value: 0x7
#define L2C_DATA_CTRL_RAM_RD_ACCESS_LAT_MASK  0x00000070UL    // RAM read access latency Default value depends
#define L2C_DATA_CTRL_RAM_RD_ACCESS_LAT_BPOS  4UL             // on the value of pl310_DATA_READ_LAT
                                                              // b000 = 1 cycle of latency, there is no additional
                                                              // latency.
                                                              // b001 = 2 cycles of latency.
                                                              // b010 = 3 cycles of latency.
                                                              // b011 = 4 cycles of latency.
                                                              // b100 = 5 cycles of latency.
                                                              // b101 = 6 cycles of latency.
                                                              // b110 = 7 cycles of latency.
                                                              // b111 = 8 cycles of latency.

// RESERVED                                                      Properties: Bit: 3, Type: waz,raz, Reset Value: 0x0

                                                              // Properties: Bits: 2:0, Type: rw, Reset Value: 0x7
#define L2C_DATA_CTRL_RAN_SETUP_LAT_MASK      0x00000007UL    // RAM setup latency Default value depends on the
#define L2C_DATA_CTRL_RAN_SETUP_LAT_BPOS      0UL             // value of pl310_DATA_SETUP_LAT
                                                              // b000 = 1 cycle of latency, there is no additional
                                                              // latency.
                                                              // b001 = 2 cycles of latency.
                                                              // b010 = 3 cycles of latency.
                                                              // b011 = 4 cycles of latency.
                                                              // b100 = 5 cycles of latency.
                                                              // b101 = 6 cycles of latency.
                                                              // b110 = 7 cycles of latency.
                                                              // b111 = 8 cycles of latency.


//------------------------------------------------------------------------------
//
// Register (L2C) REG2_EV_CNT_CTRL
//
// Name                    L2C_REG2_EV_CNT_CTRL_REG  
// Relative Address        0x00000200
// Absolute Address        0xF8F02200
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Permits the event counters to be enabled and reset.
//
// Register L2C_REG2_EV_CNT_CTRL_REG Details
//
// RESERVED                                        Properties: Bits: 31:3, Type: waz,raz, Reset Value: 0x0

                                                // Properties: Bits: 2:1, Type: raz,rw, Reset Value: 0x0
#define L2C_COUNTER_RESET_MASK  0x00000006UL    // Always Read as zero. The following counters are
#define L2C_COUNTER_RESET_BPOS  1UL             // reset when a 1 is written to the following bits:
                                                // bit[2] = Event Counter1 reset
                                                // bit[1] = Event Counter0 reset.

                                                // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_EV_CTR_EN_MASK      0x00000001UL    // Event counter enable 0 = Event Counting Disable.
#define L2C_EV_CTR_EN_BPOS      0UL             // This is the default.
                                                // 1 = Event Counting Enable.


//------------------------------------------------------------------------------
//
// Register (L2C) EV_CNT1
//
// Name                    L2C_REG2_EV_CNT1_CFG_REG  
// Relative Address        0x00000204
// Absolute Address        0xF8F02204
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Enables event counter 1 to be driven by a specific event. Counter 1
//                         increments when the event occurs.
//
// Register L2C_REG2_EV_CNT1_CFG_REG Details
//
// RESERVED                                                  Properties: Bits: 31:6, Type: waz,raz, Reset Value: 0x0

                                                          // Properties: Bits: 5:2, Type: rw, Reset Value: 0x0
#define L2C_EV_CNT1_CTR_EV_SRC_MASK       0x0000003CUL    // Counter event source Event Encoding
#define L2C_EV_CNT1_CTR_EV_SRC_BPOS       2UL             // Counter Disabled b0000
                                                          // CO b0001
                                                          // DRHIT b0010
                                                          // DRREQ b0011
                                                          // DWHIT b0100
                                                          // DWREQ b0101
                                                          // DWTREQ b0110
                                                          // IRHIT b0111
                                                          // IRREQ b1000
                                                          // WA b1001
                                                          // IPFALLOC b1010
                                                          // EPFHIT b1011
                                                          // EPFALLOC b1100
                                                          // SRRCVD b1101
                                                          // SRCONF b1110
                                                          // EPFRCVD b1111

                                                          // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
#define L2C_EV_CNT1_EV_CTR_INTR_GEN_MASK  0x00000003UL    // Event counter interrupt generation b00 =
#define L2C_EV_CNT1_EV_CTR_INTR_GEN_BPOS  0UL             // Disabled. This is the default.
                                                          // b01 = Enabled: Increment condition.
                                                          // b10 = Enabled: Overflow condition.
                                                          // b11 = Interrupt generation is disabled.


//------------------------------------------------------------------------------
//
// Register (L2C) EV_CNT0
//
// Name                    L2C_REG2_EV_CNT0_CFG_REG  
// Relative Address        0x00000208
// Absolute Address        0xF8F02208
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Enables event counter 0 to be driven by a specific event. Counter 0 increments when
//                         the event occurs.
//
// Register L2C_REG2_EV_CNT0_CFG_REG Details
//
// RESERVED                                                  Properties: Bits: 31:6, Type: waz,raz, Reset Value: 0x0

                                                          // Properties: Bits: 5:2, Type: rw, Reset Value: 0x0
#define L2C_EV_CNT0_CTR_EV_SRC_MASK       0x0000003CUL    // Counter event source Event Encoding
#define L2C_EV_CNT0_CTR_EV_SRC_BPOS       2UL             // Counter Disabled b0000
                                                          // CO b0001
                                                          // DRHIT b0010
                                                          // DRREQ b0011
                                                          // DWHIT b0100
                                                          // DWREQ b0101
                                                          // DWTREQ b0110
                                                          // IRHIT b0111
                                                          // IRREQ b1000
                                                          // WA b1001
                                                          // IPFALLOC b1010
                                                          // EPFHIT b1011
                                                          // EPFALLOC b1100
                                                          // SRRCVD b1101
                                                          // SRCONF b1110
                                                          // EPFRCVD b1111

                                                          // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
#define L2C_EV_CNT0_EV_CTR_INTR_GEN_MASK  0x00000003UL    // Event counter interrupt generation b00 =
#define L2C_EV_CNT0_EV_CTR_INTR_GEN_BPOS  0UL             // Disabled. This is the default.
                                                          // b01 = Enabled: Increment condition.
                                                          // b10 = Enabled: Overflow condition.
                                                          // b11 = Interrupt generation is disabled.


//------------------------------------------------------------------------------
//
// Register (L2C) EV_CNT1
//
// Name                    L2C_REG2_EV_CNT1_REG  
// Relative Address        0x0000020C
// Absolute Address        0xF8F0220C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Enable the programmer to read off the counter value. The counter counts
//                         an event as specified by the Counter Configuration Registers. The counter
//                         can be preloaded if counting is disabled and reset by the Event Counter
//                         Control Register.
//
// Register L2C_REG2_EV_CNT1_REG Details
//
                                              // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
#define L2C_EV_CNT1_VAL_MASK  0xFFFFFFFFUL    // Total of the event selected.
#define L2C_EV_CNT1_VAL_BPOS  0UL             // If a counter reaches its maximum value, it
                                              // saturates at that value until it is reset.


//------------------------------------------------------------------------------
//
// Register (L2C) EV_CNT0
//
// Name                    L2C_REG2_EV_CNT0_REG  
// Relative Address        0x00000210
// Absolute Address        0xF8F02210
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Enable the programmer to read off the counter value. The counter counts
//                         an event as specified by the Counter Configuration Registers. The counter
//                         can be preloaded if counting is disabled and reset by the Event Counter
//                         Control Register.
//
// Register L2C_REG2_EV_CNT0_REG Details
//
                                              // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
#define L2C_EV_CNT0_VAL_MASK  0xFFFFFFFFUL    // Total of the event selected.
#define L2C_EV_CNT0_VAL_BPOS  0UL             // If a counter reaches its maximum value, it
                                              // saturates at that value until it is reset.


//------------------------------------------------------------------------------
//
// Register (L2C) INT_MASK
//
// Name                    L2C_REG2_INT_MASK_REG  
// Relative Address        0x00000214
// Absolute Address        0xF8F02214
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             This register enables or masks interrupts from being triggered on the
//                         external pins of the cache controller. Figure 3-8 on page 3-17 shows the
//                         register bit assignments. The bit assignments enables the masking of the
//                         interrupts on both their individual outputs and the combined L2CCINTR
//                         line. Clearing a bit by writing a 0, disables the interrupt triggering on that
//                         pin. All bits are cleared by a reset. You must write to the register bits with a 1 to enable
//                         the generation of interrupts.
//                         1 = Enabled.
//                         0 = Masked. This is the default.
//
// Register L2C_REG2_INT_MASK_REG Details
//
// RESERVED                                          Properties: Bits: 31:9, Type: waz,raz, Reset Value: 0x0

                                                  // Properties: Bit: 8, Type: rw, Reset Value: 0x0
#define L2C_INT_MASK_DECERR_MASK  0x00000100UL    // DECERR: DECERR from L3
#define L2C_INT_MASK_DECERR_BPOS  8UL             // 

                                                  // Properties: Bit: 7, Type: rw, Reset Value: 0x0
#define L2C_INT_MASK_SLVERR_MASK  0x00000080UL    // SLVERR: SLVERR from L3
#define L2C_INT_MASK_SLVERR_BPOS  7UL             // 

                                                  // Properties: Bit: 6, Type: rw, Reset Value: 0x0
#define L2C_INT_MASK_ERRRD_MASK   0x00000040UL    // ERRRD: Error on L2 data RAM, Read
#define L2C_INT_MASK_ERRRD_BPOS   6UL             // 

                                                  // Properties: Bit: 5, Type: rw, Reset Value: 0x0
#define L2C_INT_MASK_ERRRT_MASK   0x00000020UL    // ERRRT: Error on L2 tag RAM, Read
#define L2C_INT_MASK_ERRRT_BPOS   5UL             // 

                                                  // Properties: Bit: 4, Type: rw, Reset Value: 0x0
#define L2C_INT_MASK_ERRWD_MASK   0x00000010UL    // ERRWD: Error on L2 data RAM, Write
#define L2C_INT_MASK_ERRWD_BPOS   4UL             // 

                                                  // Properties: Bit: 3, Type: rw, Reset Value: 0x0
#define L2C_INT_MASK_ERRWT_MASK   0x00000008UL    // ERRWT: Error on L2 tag RAM, Write
#define L2C_INT_MASK_ERRWT_BPOS   3UL             // 

                                                  // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define L2C_INT_MASK_PARRD_MASK   0x00000004UL    // PARRD: Parity Error on L2 data RAM, Read
#define L2C_INT_MASK_PARRD_BPOS   2UL             // 

                                                  // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define L2C_INT_MASK_PARRT_MASK   0x00000002UL    // PARRT: Parity Error on L2 tag RAM, Read
#define L2C_INT_MASK_PARRT_BPOS   1UL             // 

                                                  // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_INT_MASK_ECNTR_MASK   0x00000001UL    // ECNTR: Event Counter1/0 Overflow Increment
#define L2C_INT_MASK_ECNTR_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) INT_MASK_STS
//
// Name                    L2C_REG2_INT_MASK_STS_REG  
// Relative Address        0x00000218
// Absolute Address        0xF8F02218
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             This register is a read-only.It returns the masked interrupt status. This
//                         register can be accessed by secure and non-secure operations. The register
//                         gives an AND function of the raw interrupt status with the values of the
//                         interrupt mask register. All the bits are cleared by a reset. A write to this register is
//                         ignored. Bits read can be HIGH or LOW:
//                         HIGH If the bits read HIGH, they reflect the status of the input lines triggering an
//                         interrupt.
//                         LOW If the bits read LOW, either no interrupt has been
//                         generated, or the interrupt is masked.
//
// Register L2C_REG2_INT_MASK_STS_REG Details
//
// RESERVED                                              Properties: Bits: 31:9, Type: raz, Reset Value: 0x0

                                                      // Properties: Bit: 8, Type: ro, Reset Value: 0x0
#define L2C_INT_MASK_STS_DECERR_MASK  0x00000100UL    // DECERR: DECERR from L3
#define L2C_INT_MASK_STS_DECERR_BPOS  8UL             // 

                                                      // Properties: Bit: 7, Type: ro, Reset Value: 0x0
#define L2C_INT_MASK_STS_SLVERR_MASK  0x00000080UL    // SLVERR: SLVERR from L3
#define L2C_INT_MASK_STS_SLVERR_BPOS  7UL             // 

                                                      // Properties: Bit: 6, Type: ro, Reset Value: 0x0
#define L2C_INT_MASK_STS_ERRRD_MASK   0x00000040UL    // ERRRD: Error on L2 data RAM, Read
#define L2C_INT_MASK_STS_ERRRD_BPOS   6UL             // 

                                                      // Properties: Bit: 5, Type: ro, Reset Value: 0x0
#define L2C_INT_MASK_STS_ERRRT_MASK   0x00000020UL    // ERRRT: Error on L2 tag RAM, Read
#define L2C_INT_MASK_STS_ERRRT_BPOS   5UL             // 

                                                      // Properties: Bit: 4, Type: ro, Reset Value: 0x0
#define L2C_INT_MASK_STS_ERRWD_MASK   0x00000010UL    // ERRWD: Error on L2 data RAM, Write
#define L2C_INT_MASK_STS_ERRWD_BPOS   4UL             // 

                                                      // Properties: Bit: 3, Type: ro, Reset Value: 0x0
#define L2C_INT_MASK_STS_ERRWT_MASK   0x00000008UL    // ERRWT: Error on L2 tag RAM, Write
#define L2C_INT_MASK_STS_ERRWT_BPOS   3UL             // 

                                                      // Properties: Bit: 2, Type: ro, Reset Value: 0x0
#define L2C_INT_MASK_STS_PARRD_MASK   0x00000004UL    // PARRD: Parity Error on L2 data RAM, Read
#define L2C_INT_MASK_STS_PARRD_BPOS   2UL             // 

                                                      // Properties: Bit: 1, Type: ro, Reset Value: 0x0
#define L2C_INT_MASK_STS_PARRT_MASK   0x00000002UL    // PARRT: Parity Error on L2 tag RAM, Read
#define L2C_INT_MASK_STS_PARRT_BPOS   1UL             // 

                                                      // Properties: Bit: 0, Type: ro, Reset Value: 0x0
#define L2C_INT_MASK_STS_ECNTR_MASK   0x00000001UL    // ECNTR: Event Counter1/0 Overflow Increment
#define L2C_INT_MASK_STS_ECNTR_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) INT_RAW_STS
//
// Name                    L2C_REG2_INT_RAW_STS_REG  
// Relative Address        0x0000021C
// Absolute Address        0xF8F0221C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             The Raw Interrupt Status Register enables the interrupt status that excludes the
//                         masking logic.
//                         Bits read can be HIGH or LOW:
//                         HIGH If the bits read HIGH, they reflect the status of the input lines triggering an
//                         interrupt.
//                         LOW If the bits read LOW, no interrupt has been generated.
//
// Register L2C_REG2_INT_RAW_STS_REG Details
//
// RESERVED                                             Properties: Bits: 31:9, Type: raz, Reset Value: 0x0

                                                     // Properties: Bit: 8, Type: ro, Reset Value: 0x0
#define L2C_INT_RAW_STS_DECERR_MASK  0x00000100UL    // DECERR: DECERR from L3
#define L2C_INT_RAW_STS_DECERR_BPOS  8UL             // 

                                                     // Properties: Bit: 7, Type: ro, Reset Value: 0x0
#define L2C_INT_RAW_STS_SLVERR_MASK  0x00000080UL    // SLVERR: SLVERR from L3
#define L2C_INT_RAW_STS_SLVERR_BPOS  7UL             // 

                                                     // Properties: Bit: 6, Type: ro, Reset Value: 0x0
#define L2C_INT_RAW_STS_ERRRD_MASK   0x00000040UL    // ERRRD: Error on L2 data RAM, Read
#define L2C_INT_RAW_STS_ERRRD_BPOS   6UL             // 

                                                     // Properties: Bit: 5, Type: ro, Reset Value: 0x0
#define L2C_INT_RAW_STS_ERRRT_MASK   0x00000020UL    // ERRRT: Error on L2 tag RAM, Read
#define L2C_INT_RAW_STS_ERRRT_BPOS   5UL             // 

                                                     // Properties: Bit: 4, Type: ro, Reset Value: 0x0
#define L2C_INT_RAW_STS_ERRWD_MASK   0x00000010UL    // ERRWD: Error on L2 data RAM, Write
#define L2C_INT_RAW_STS_ERRWD_BPOS   4UL             // 

                                                     // Properties: Bit: 3, Type: ro, Reset Value: 0x0
#define L2C_INT_RAW_STS_ERRWT_MASK   0x00000008UL    // ERRWT: Error on L2 tag RAM, Write
#define L2C_INT_RAW_STS_ERRWT_BPOS   3UL             // 

                                                     // Properties: Bit: 2, Type: ro, Reset Value: 0x0
#define L2C_INT_RAW_STS_PARRD_MASK   0x00000004UL    // PARRD: Parity Error on L2 data RAM, Read
#define L2C_INT_RAW_STS_PARRD_BPOS   2UL             // 

                                                     // Properties: Bit: 1, Type: ro, Reset Value: 0x0
#define L2C_INT_RAW_STS_PARRT_MASK   0x00000002UL    // PARRT: Parity Error on L2 tag RAM, Read
#define L2C_INT_RAW_STS_PARRT_BPOS   1UL             // 

                                                     // Properties: Bit: 0, Type: ro, Reset Value: 0x0
#define L2C_INT_RAW_STS_ECNTR_MASK   0x00000001UL    // ECNTR: Event Counter1/0 Overflow Increment
#define L2C_INT_RAW_STS_ECNTR_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) INT_CLEAR
//
// Name                    L2C_REG2_INT_CLEAR_REG  
// Relative Address        0x00000220
// Absolute Address        0xF8F02220
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Clears the Raw Interrupt Status Register bits.
//                         When a bit is written as 1, it clears the corresponding bit in the Raw Interrupt Status
//                         Register. When a bit is written as 0, it has no effect
//
// Register L2C_REG2_INT_CLEAR_REG Details
//
// RESERVED                                           Properties: Bits: 31:9, Type: raz, Reset Value: 0x0

                                                   // Properties: Bit: 8, Type: wtc, Reset Value: 0x0
#define L2C_INT_CLEAR_DECERR_MASK  0x00000100UL    // DECERR: DECERR from L3
#define L2C_INT_CLEAR_DECERR_BPOS  8UL             // 

                                                   // Properties: Bit: 7, Type: wtc, Reset Value: 0x0
#define L2C_INT_CLEAR_SLVERR_MASK  0x00000080UL    // SLVERR: SLVERR from L3
#define L2C_INT_CLEAR_SLVERR_BPOS  7UL             // 

                                                   // Properties: Bit: 6, Type: wtc, Reset Value: 0x0
#define L2C_INT_CLEAR_ERRRD_MASK   0x00000040UL    // ERRRD: Error on L2 data RAM, Read
#define L2C_INT_CLEAR_ERRRD_BPOS   6UL             // 

                                                   // Properties: Bit: 5, Type: wtc, Reset Value: 0x0
#define L2C_INT_CLEAR_ERRRT_MASK   0x00000020UL    // ERRRT: Error on L2 tag RAM, Read
#define L2C_INT_CLEAR_ERRRT_BPOS   5UL             // 

                                                   // Properties: Bit: 4, Type: wtc, Reset Value: 0x0
#define L2C_INT_CLEAR_ERRWD_MASK   0x00000010UL    // ERRWD: Error on L2 data RAM, Write
#define L2C_INT_CLEAR_ERRWD_BPOS   4UL             // 

                                                   // Properties: Bit: 3, Type: wtc, Reset Value: 0x0
#define L2C_INT_CLEAR_ERRWT_MASK   0x00000008UL    // ERRWT: Error on L2 tag RAM, Write
#define L2C_INT_CLEAR_ERRWT_BPOS   3UL             // 

                                                   // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
#define L2C_INT_CLEAR_PARRD_MASK   0x00000004UL    // PARRD: Parity Error on L2 data RAM, Read
#define L2C_INT_CLEAR_PARRD_BPOS   2UL             // 

                                                   // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
#define L2C_INT_CLEAR_PARRT_MASK   0x00000002UL    // PARRT: Parity Error on L2 tag RAM, Read
#define L2C_INT_CLEAR_PARRT_BPOS   1UL             // 

                                                   // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
#define L2C_INT_CLEAR_ECNTR_MASK   0x00000001UL    // ECNTR: Event Counter1/0 Overflow Increment
#define L2C_INT_CLEAR_ECNTR_BPOS   0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) CACHE_SYNC
//
// Name                      L2C_REG7_CACHE_SYNC_REG  
// Relative Address          0x00000730
// Absolute Address          0xF8F02730
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               Drain the STB. Operation complete when all buffers, LRB, LFB, STB, and EB, are
//                           empty
//
// Register L2C_REG7_CACHE_SYNC_REG Details
//
// RESERVED                                       Properties: Bits: 31:1, Type: waz, Reset Value: 0x0

                                               // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_CACHE_SYNC_C_MASK  0x00000001UL    // Cache Sync: Drain the STB. Operation complete
#define L2C_CACHE_SYNC_C_BPOS  0UL             // when all buffers, LRB, LFB, STB, and EB, are
                                               // empty.


//------------------------------------------------------------------------------
//
// Register (L2C) INV_PA
//
// Name                      L2C_REG7_INV_PA_REG  
// Relative Address          0x00000770
// Absolute Address          0xF8F02770
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               Invalidate Line by PA: Specific L2 cache line is marked as not valid
//
// Register L2C_REG7_INV_PA_REG Details
//
                                               // Properties: Bits: 31:12, Type: rw, Reset Value: 0x0
#define L2C_INV_PA_TAG_MASK    0xFFFFF000UL    // tag
#define L2C_INV_PA_TAG_BPOS    12UL            // 

                                               // Properties: Bits: 11:5, Type: rw, Reset Value: 0x0
#define L2C_INV_PA_INDEX_MASK  0x00000FE0UL    // index
#define L2C_INV_PA_INDEX_BPOS  5UL             // 

// RESERVED                                       Properties: Bits: 4:1, Type: waz, Reset Value: 0x0

                                               // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_INV_PA_C_MASK      0x00000001UL    // C Flag
#define L2C_INV_PA_C_BPOS      0UL             // When written must be 0.
                                               // When read, indicates that a background operation
                                               // is in progress


//------------------------------------------------------------------------------
//
// Register (L2C) INV_WAY
//
// Name                    L2C_REG7_INV_WAY_REG  
// Relative Address        0x0000077C
// Absolute Address        0xF8F0277C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Invalidate by Way Invalidate all data in specified ways, including dirty data. An
//                         Invalidate by way while
//                         selecting all cache ways is equivalent to invalidating all cache entries. Completes as a
//                         background task with the way, or ways, locked, preventing allocation.
//
// Register L2C_REG7_INV_WAY_REG Details
//
// RESERVED                                       Properties: Bits: 31:8, Type: waz, Reset Value: 0x0

                                               // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
#define L2C_INV_WAY_BITS_MASK  0x000000FFUL    // way bits: You can select multiple ways at the same
#define L2C_INV_WAY_BITS_BPOS  0UL             // time, by setting the Way bits to 1


//------------------------------------------------------------------------------
//
// Register (L2C) CLEAN_PA
//
// Name                    L2C_REG7_CLEAN_PA_REG  
// Relative Address        0x000007B0
// Absolute Address        0xF8F027B0
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Clean Line by PA Write the specific L2 cache line to L3 main memory if the line is
//                         marked as valid and dirty.
//                         The line is marked as not dirty. The valid bit is unchanged
//
// Register L2C_REG7_CLEAN_PA_REG Details
//
                                                 // Properties: Bits: 31:12, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_PA_TAG_MASK    0xFFFFF000UL    // tag
#define L2C_CLEAN_PA_TAG_BPOS    12UL            // 

                                                 // Properties: Bits: 11:5, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_PA_INDEX_MASK  0x00000FE0UL    // index
#define L2C_CLEAN_PA_INDEX_BPOS  5UL             // 

// RESERVED                                         Properties: Bits: 4:1, Type: waz, Reset Value: 0x0

                                                 // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_PA_C_MASK      0x00000001UL    // C Flag
#define L2C_CLEAN_PA_C_BPOS      0UL             // When written must be 0.
                                                 // When read, indicates that a background operation
                                                 // is in progress


//------------------------------------------------------------------------------
//
// Register (L2C) CLEAN_INDEX
//
// Name                      L2C_REG7_CLEAN_INDEX_REG  
// Relative Address          0x000007B8
// Absolute Address          0xF8F027B8
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               Clean Line by Set/Way Write the specific L2 cache line within the specified way to
//                           L3 main memory if the line is
//                           marked as valid and dirty. The line is marked as not dirty. The valid bit is unchanged
//
// Register L2C_REG7_CLEAN_INDEX_REG Details
//
// RESERVED                                            Properties: Bit: 31, Type: waz, Reset Value: 0x0

                                                    // Properties: Bits: 30:28, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_INDEX_WAY_MASK    0x70000000UL    // way
#define L2C_CLEAN_INDEX_WAY_BPOS    28UL            // 

// RESERVED                                            Properties: Bits: 27:12, Type: waz, Reset Value: 0x0

                                                    // Properties: Bits: 11:5, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_INDEX_INDEX_MASK  0x00000FE0UL    // index
#define L2C_CLEAN_INDEX_INDEX_BPOS  5UL             // 

// RESERVED                                            Properties: Bits: 4:1, Type: waz, Reset Value: 0x0

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_INDEX_C_MASK      0x00000001UL    // c
#define L2C_CLEAN_INDEX_C_BPOS      0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) CLEAN_WAY
//
// Name                      L2C_REG7_CLEAN_WAY_REG  
// Relative Address          0x000007BC
// Absolute Address          0xF8F027BC
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               Clean by Way Writes each line of the specified L2 cache ways to L3 main memory if
//                           the line is marked
//                           as valid and dirty. The lines are marked as not dirty. The valid bits are unchanged.
//                           Completes as a background task with the way, or ways, locked, preventing
//                           allocation.
//
// Register L2C_REG7_CLEAN_WAY_REG Details
//
// RESERVED                                         Properties: Bits: 31:8, Type: waz, Reset Value: 0x0

                                                 // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_WAY_BITS_MASK  0x000000FFUL    // way bits: You can select multiple ways at the same
#define L2C_CLEAN_WAY_BITS_BPOS  0UL             // time, by setting the Way bits to 1


//------------------------------------------------------------------------------
//
// Register (L2C) CLEAN_INV_PA
//
// Name                      L2C_REG7_CLEAN_INV_PA_REG  
// Relative Address          0x000007F0
// Absolute Address          0xF8F027F0
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               Clean and Invalidate Line by PA Write the specific L2 cache line to L3 main memory
//                           if the line is marked as valid and dirty.
//                           The line is marked as not valid
//
// Register L2C_REG7_CLEAN_INV_PA_REG Details
//
                                                     // Properties: Bits: 31:12, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_INV_PA_TAG_MASK    0xFFFFF000UL    // tag
#define L2C_CLEAN_INV_PA_TAG_BPOS    12UL            // 

                                                     // Properties: Bits: 11:5, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_INV_PA_INDEX_MASK  0x00000FE0UL    // index
#define L2C_CLEAN_INV_PA_INDEX_BPOS  5UL             // 

// RESERVED                                             Properties: Bits: 4:1, Type: waz, Reset Value: 0x0

                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_INV_PA_C_MASK      0x00000001UL    // C Flag
#define L2C_CLEAN_INV_PA_C_BPOS      0UL             // When written must be 0.
                                                     // When read, indicates that a background operation
                                                     // is in progress


//------------------------------------------------------------------------------
//
// Register (L2C) CLEAN_INV_INDEX
//
// Name                      L2C_REG7_CLEAN_INV_INDEX_REG  
// Relative Address          0x000007F8
// Absolute Address          0xF8F027F8
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               Clean and Invalidate Line by Set/Way Write the specific L2 cache line within the
//                           specified way to L3 main memory if the line is
//                           marked as valid and dirty. The line is marked as not valid
//
// Register L2C_REG7_CLEAN_INV_INDEX_REG Details
//
// RESERVED                                                Properties: Bit: 31, Type: waz, Reset Value: 0x0

                                                        // Properties: Bits: 30:28, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_INV_INDEX_WAY_MASK    0x70000000UL    // way
#define L2C_CLEAN_INV_INDEX_WAY_BPOS    28UL            // 

// RESERVED                                                Properties: Bits: 27:12, Type: waz, Reset Value: 0x0

                                                        // Properties: Bits: 11:5, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_INV_INDEX_INDEX_MASK  0x00000FE0UL    // index
#define L2C_CLEAN_INV_INDEX_INDEX_BPOS  5UL             // 

// RESERVED                                                Properties: Bits: 4:1, Type: waz, Reset Value: 0x0

                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_INV_INDEX_C_MASK      0x00000001UL    // c
#define L2C_CLEAN_INV_INDEX_C_BPOS      0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) CLEAN_INV_WAY
//
// Name                      L2C_REG7_CLEAN_INV_WAY_REG  
// Relative Address          0x000007FC
// Absolute Address          0xF8F027FC
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               Clean and Invalidate by Way Writes each line of the specified L2 cache ways to L3
//                           main memory if the line is marked
//                           as valid and dirty. The lines are marked as not valid. Completes as a background task
//                           with
//                           the way, or ways, locked, preventing allocation.
//
// Register L2C_REG7_CLEAN_INV_WAY_REG Details
//
// RESERVED                                             Properties: Bits: 31:8, Type: waz, Reset Value: 0x0

                                                     // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
#define L2C_CLEAN_INV_WAY_BITS_MASK  0x000000FFUL    // way bits: You can select multiple ways at the same
#define L2C_CLEAN_INV_WAY_BITS_BPOS  0UL             // time, by setting the Way bits to 1


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_D_LOCKDOWN0
//
// Name                    L2C_REG9_D_LOCKDOWN0_REG 
// Relative Address        0x00000900
// Absolute Address        0xF8F02900
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             All reg9 registers can prevent new addresses from being allocated and can also
//                         prevent data from being evicted out of the L2 cache.
//                         Each register pair (reg9_d_lockdown<n>, reg9_i_lockdown<n>) is for accesses
//                         coming from a particular master.
//                         Each bit of each register sets lockdown for a corresponding way, i.e. bit 0 for way 0,
//                         bit 1 for way 1, etc.
//                         0 allocation can occur in the corresponding way.
//                         1 there is no allocation in the corresponding way.
//
// Register L2C_REG9_D_LOCKDOWN0_REG Details
//
// RESERVED                                      Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                              // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_DATALOCK000_MASK  0x0000FFFFUL    // Use for master CPU0
#define L2C_DATALOCK000_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_I_LOCKDOWN0
//
// Name                    L2C_REG9_I_LOCKDOWN0_REG 
// Relative Address        0x00000904
// Absolute Address        0xF8F02904
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             instruction lock down 0
//
// Register L2C_REG9_I_LOCKDOWN0_REG Details
//
// RESERVED                                       Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                               // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_INSTRLOCK000_MASK  0x0000FFFFUL    // Use for master CPU0
#define L2C_INSTRLOCK000_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_D_LOCKDOWN1
//
// Name                    L2C_REG9_D_LOCKDOWN1_REG 
// Relative Address        0x00000908
// Absolute Address        0xF8F02908
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             data lock down 1
//
// Register L2C_REG9_D_LOCKDOWN1_REG Details
//
// RESERVED                                      Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                              // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_DATALOCK001_MASK  0x0000FFFFUL    // Use for master CPU1
#define L2C_DATALOCK001_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_I_LOCKDOWN1
//
// Name                    L2C_REG9_I_LOCKDOWN1_REG 
// Relative Address        0x0000090C
// Absolute Address        0xF8F0290C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             instruction lock down 1
//
// Register L2C_REG9_I_LOCKDOWN1_REG Details
//
// RESERVED                                       Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                               // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_INSTRLOCK001_MASK  0x0000FFFFUL    // Use for master CPU1
#define L2C_INSTRLOCK001_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_D_LOCKDOWN2
//
// Name                    L2C_REG9_D_LOCKDOWN2_REG 
// Relative Address        0x00000910
// Absolute Address        0xF8F02910
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             data lock down 2
//
// Register L2C_REG9_D_LOCKDOWN2_REG Details
//
// RESERVED                               Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

// RESERVED                               Properties: Bits: 15:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_I_LOCKDOWN2
//
// Name                    L2C_REG9_I_LOCKDOWN2_REG 
// Relative Address        0x00000914
// Absolute Address        0xF8F02914
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             instruction lock down 2
//
// Register L2C_REG9_I_LOCKDOWN2_REG Details
//
// RESERVED                               Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

// RESERVED                               Properties: Bits: 15:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_D_LOCKDOWN3
//
// Name                    L2C_REG9_D_LOCKDOWN3_REG 
// Relative Address        0x00000918
// Absolute Address        0xF8F02918
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             data lock down 3
//
// Register L2C_REG9_D_LOCKDOWN3_REG Details
//
// RESERVED                               Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

// RESERVED                               Properties: Bits: 15:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_I_LOCKDOWN3
//
// Name                    L2C_REG9_I_LOCKDOWN3_REG 
// Relative Address        0x0000091C
// Absolute Address        0xF8F0291C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             instruction lock down 3
//
// Register L2C_REG9_I_LOCKDOWN3_REG Details
//
// RESERVED                               Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

// RESERVED                               Properties: Bits: 15:0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_D_LOCKDOWN4
//
// Name                    L2C_REG9_D_LOCKDOWN4_REG 
// Relative Address        0x00000920
// Absolute Address        0xF8F02920
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             data lock down 4
//
// Register L2C_REG9_D_LOCKDOWN4_REG Details
//
// RESERVED                                      Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                              // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_DATALOCK100_MASK  0x0000FFFFUL    // Use for ACP master with SAXIACPAxID[2:1]=00
#define L2C_DATALOCK100_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_I_LOCKDOWN4
//
// Name                    L2C_REG9_I_LOCKDOWN4_REG 
// Relative Address        0x00000924
// Absolute Address        0xF8F02924
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             instruction lock down 4
//
// Register L2C_REG9_I_LOCKDOWN4_REG Details
//
// RESERVED                                       Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                               // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_INSTRLOCK100_MASK  0x0000FFFFUL    // Use for ACP master with SAXIACPAxID[2:1]=00
#define L2C_INSTRLOCK100_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_D_LOCKDOWN5
//
// Name                    L2C_REG9_D_LOCKDOWN5_REG 
// Relative Address        0x00000928
// Absolute Address        0xF8F02928
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             data lock down 5
//
// Register L2C_REG9_D_LOCKDOWN5_REG Details
//
// RESERVED                                      Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                              // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_DATALOCK101_MASK  0x0000FFFFUL    // Use for ACP master with SAXIACPAxID[2:1]=01
#define L2C_DATALOCK101_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_I_LOCKDOWN5
//
// Name                    L2C_REG9_I_LOCKDOWN5_REG 
// Relative Address        0x0000092C
// Absolute Address        0xF8F0292C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             instruction lock down 5
//
// Register L2C_REG9_I_LOCKDOWN5_REG Details
//
// RESERVED                                       Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                               // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_INSTRLOCK101_MASK  0x0000FFFFUL    // Use for ACP master with SAXIACPAxID[2:1]=01
#define L2C_INSTRLOCK101_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_D_LOCKDOWN6
//
// Name                    L2C_REG9_D_LOCKDOWN6_REG 
// Relative Address        0x00000930
// Absolute Address        0xF8F02930
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             data lock down 6
//
// Register L2C_REG9_D_LOCKDOWN6_REG Details
//
// RESERVED                                      Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                              // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_DATALOCK110_MASK  0x0000FFFFUL    // Use for ACP master with SAXIACPAxID[2:1]=10
#define L2C_DATALOCK110_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_I_LOCKDOWN6
//
// Name                    L2C_REG9_I_LOCKDOWN6_REG 
// Relative Address        0x00000934
// Absolute Address        0xF8F02934
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             instruction lock down 6
//
// Register L2C_REG9_I_LOCKDOWN6_REG Details
//
// RESERVED                                       Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                               // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_INSTRLOCK110_MASK  0x0000FFFFUL    // Use for ACP master with SAXIACPAxID[2:1]=10
#define L2C_INSTRLOCK110_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_D_LOCKDOWN7
//
// Name                    L2C_REG9_D_LOCKDOWN7_REG 
// Relative Address        0x00000938
// Absolute Address        0xF8F02938
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             data lock down 7
//
// Register L2C_REG9_D_LOCKDOWN7_REG Details
//
// RESERVED                                      Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                              // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_DATALOCK111_MASK  0x0000FFFFUL    // Use for ACP master with SAXIACPAxID[2:1]=11
#define L2C_DATALOCK111_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_I_LOCKDOWN7
//
// Name                    L2C_REG9_I_LOCKDOWN7_REG 
// Relative Address        0x0000093C
// Absolute Address        0xF8F0293C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             instruction lock down 7
//
// Register L2C_REG9_I_LOCKDOWN7_REG Details
//
// RESERVED                                       Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                               // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_INSTRLOCK111_MASK  0x0000FFFFUL    // Use for ACP master with SAXIACPAxID[2:1]=11
#define L2C_INSTRLOCK111_BPOS  0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_LOCK_LINE_EN
//
// Name                    L2C_REG9_LOCK_LINE_EN_REG 
// Relative Address        0x00000950
// Absolute Address        0xF8F02950
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Lockdown by Line Enable Register.
//
// Register L2C_REG9_LOCK_LINE_EN_REG Details
//
// RESERVED                                                   Properties: Bits: 31:1, Type: waz,raz, Reset Value: 0x0

                                                           // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_LOCK_DOWN_BY_LINE_ENABLE_MASK  0x00000001UL    // 0 = Lockdown by line disabled. This is the default.
#define L2C_LOCK_DOWN_BY_LINE_ENABLE_BPOS  0UL             // 1 = Lockdown by line enabled.


//------------------------------------------------------------------------------
//
// Register (L2C) REG9_UNLOCK_WAY
//
// Name                    L2C_REG9_UNLOCK_WAY_REG  
// Relative Address        0x00000954
// Absolute Address        0xF8F02954
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Cache lockdown by way
//                         To control the cache lockdown by way and the cache lockdown by master
//                         mechanisms see the
//                         tables from Table 3-20 to Table 3-35 on page 3-31. For these tables each bit has the
//                         following
//                         meaning:
//                         0 allocation can occur in the corresponding way.
//                         1 there is no allocation in the corresponding way.
//
// Register L2C_REG9_UNLOCK_WAY_REG Details
//
// RESERVED                                                            Properties: Bits: 31:16, Type: waz,raz, Reset Value: 0x0

                                                                    // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
#define L2C_UNLOCK_ALL_LINES_BY_WAY_OPERATION_MASK  0x0000FFFFUL    // For all bits:
#define L2C_UNLOCK_ALL_LINES_BY_WAY_OPERATION_BPOS  0UL             // 0 = Unlock all lines disabled. This is the default.
                                                                    // 1 = Unlock all lines operation in progress for the
                                                                    // corresponding way.


//------------------------------------------------------------------------------
//
// Register (L2C) REG12_ADDR_FLT_START
//
// Name                    L2C_REG12_ADDR_FLT_START_REG  
// Relative Address        0x00000C00
// Absolute Address        0xF8F02C00
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x40000001
// Description             When two masters are implemented, you can redirect a whole address range to
//                         master 1 (M1).
//                         When address_filtering_enable is set, all accesses with address >=
//                         address_filtering_start and <address_filtering_end are automatically directed to M1.
//                         All other accesses are directed to M0.
//                         This feature is programmed using two registers.
//
// Register L2C_REG12_ADDR_FLT_START_REG Details
//
                                                        // Properties: Bits: 31:20, Type: rw, Reset Value: 0x400
#define L2C_ADDR_FILTERING_START_MASK   0xFFF00000UL    // Address filtering start address.
#define L2C_ADDR_FILTERING_START_BPOS   20UL            // 

// RESERVED                                                Properties: Bits: 19:1, Type: waz,raz, Reset Value: 0x0

                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x1
#define L2C_ADDR_FILTERING_ENABLE_MASK  0x00000001UL    // 0 = Address filtering disabled.
#define L2C_ADDR_FILTERING_ENABLE_BPOS  0UL             // 1 = Address filtering enabled


//------------------------------------------------------------------------------
//
// Register (L2C) REG12_ADDR_FLT_END
//
// Name                    L2C_REG12_ADDR_FLT_END_REG  
// Relative Address        0x00000C04
// Absolute Address        0xF8F02C04
// Width                   32 bits
// Access Type             mixed
// Reset Value             0xFFF00000
// Description             When two masters are implemented, you can redirect a whole address range to
//                         master 1 (M1).
//                         When address_filtering_enable is set, all accesses with address >=
//                         address_filtering_start and <address_filtering_end are automatically directed to M1.
//                         All other accesses are directed to M0.
//                         This feature is programmed using two registers.
//
// Register L2C_REG12_ADDR_FLT_END_REG Details
//
                                                     // Properties: Bits: 31:20, Type: rw, Reset Value: 0xFFF
#define L2C_ADDR_FILTERING_END_MASK  0xFFF00000UL    // Address filtering end address.
#define L2C_ADDR_FILTERING_END_BPOS  20UL            // 

// RESERVED                                             Properties: Bits: 19:0, Type: waz,raz, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (L2C) DEBUG_CTRL
//
// Name                    L2C_REG15_DEBUG_CTRL_REG  
// Relative Address        0x00000F40
// Absolute Address        0xF8F02F40
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             The Debug Control Register forces specific cache behavior required for debug. This
//                         register has
//                         read-only, non-secure, or read and write, secure, permission. Any secure access and
//                         non-secure
//                         access can read this register. Only a secure access can write to this register. If a
//                         non-secure
//                         access tries to write to this register the register issues a DECERR response and does
//                         not update.
//
// Register L2C_REG15_DEBUG_CTRL_REG Details
//
// RESERVED                                             Properties: Bits: 31:3, Type: waz,raz, Reset Value: 0x0

                                                     // Properties: Bit: 2, Type: rw, Reset Value: 0x0
#define L2C_DEBUG_CTRL_SPNIDEN_MASK  0x00000004UL    // Reads value of SPNIDEN input.
#define L2C_DEBUG_CTRL_SPNIDEN_BPOS  2UL             // 

                                                     // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define L2C_DEBUG_CTRL_DWB_MASK      0x00000002UL    // DWB: Disable write-back, force WT 0 = Enable
#define L2C_DEBUG_CTRL_DWB_BPOS      1UL             // write-back behavior. This is the default.
                                                     // 1 = Force write-through behavior

                                                     // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_DEBUG_CTRL_DCL_MASK      0x00000001UL    // DCL: Disable cache linefill 0 = Enable cache
#define L2C_DEBUG_CTRL_DCL_BPOS      0UL             // linefills. This is the default.
                                                     // 1 = Disable cache linefills.


//------------------------------------------------------------------------------
//
// Register (L2C) PREFETCH_CTRL
//
// Name                      L2C_REG15_PREFETCH_CTRL_REG  
// Relative Address          0x00000F60
// Absolute Address          0xF8F02F60
// Width                     32 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               Purpose Enables prefetch-related features that can improve system performance.
//                           Usage constraints This register has both read-only, non-secure, and read and write,
//                           secure,
//                           permissions. Any secure or non-secure access can read this register. Only
//                           a secure access can write to this register. If a non-secure access attempts
//                           to write to this register, the register
//
// Register L2C_REG15_PREFETCH_CTRL_REG Details
//
// RESERVED                                                         Properties: Bit: 31, Type: waz,raz, Reset Value: 0x0

                                                                 // Properties: Bit: 30, Type: rw, Reset Value: 0x0
#define L2C_DOUBLE_LINEFILL_EN_MASK              0x40000000UL    // Double linefill enable: You can set the following
#define L2C_DOUBLE_LINEFILL_EN_BPOS              30UL            // options for this register bit:
                                                                 // 0 The L2CC always issues 4x64-bit read bursts to
                                                                 // L3 on reads
                                                                 // that miss in the L2 cache. This is the default.
                                                                 // 1 The L2CC issues 8x64-bit read bursts to L3 on
                                                                 // reads that
                                                                 // miss in the L2 cache.

                                                                 // Properties: Bit: 29, Type: rw, Reset Value: 0x0
#define L2C_INST_PREF_EN_MASK                    0x20000000UL    // Instruction prefetch enable: You can set the
#define L2C_INST_PREF_EN_BPOS                    29UL            // following options for this register bit:
                                                                 // 0 Instruction prefetching disabled. This is the
                                                                 // default.
                                                                 // 1 Instruction prefetching enabled

                                                                 // Properties: Bit: 28, Type: rw, Reset Value: 0x0
#define L2C_DATA_PREF_EN_MASK                    0x10000000UL    // Data prefetch enable: You can set the following
#define L2C_DATA_PREF_EN_BPOS                    28UL            // options for this register bit:
                                                                 // 0 Data prefetching disabled. This is the default.
                                                                 // 1 Data prefetching enabled.

                                                                 // Properties: Bit: 27, Type: rw, Reset Value: 0x0
#define L2C_DOUBLE_LINEFILL_ON_WRAPREAD_EN_MASK  0x08000000UL    // Double linefill on WRAP read disable: You can set
#define L2C_DOUBLE_LINEFILL_ON_WRAPREAD_EN_BPOS  27UL            // the following options for this register bit:
                                                                 // 0 Double linefill on WRAP read enabled. This is
                                                                 // the default.
                                                                 // 1 Double linefill on WRAP read disabled

// RESERVED                                                         Properties: Bits: 26:25, Type: waz,raz, Reset Value: 0x0

                                                                 // Properties: Bit: 24, Type: rw, Reset Value: 0x0
#define L2C_PREF_DROP_EN_MASK                    0x01000000UL    // Prefetch drop enable: You can set the following
#define L2C_PREF_DROP_EN_BPOS                    24UL            // options for this register bit:
                                                                 // 0 The L2CC does not discard prefetch reads
                                                                 // issued to L3. This
                                                                 // is the default.
                                                                 // 1 The L2CC discards prefetch reads issued to L3
                                                                 // when there is
                                                                 // a resource conflict with explicit reads.

                                                                 // Properties: Bit: 23, Type: rw, Reset Value: 0x0
#define L2C_INCR_DOUBLE_LINEFILL_EN_MASK         0x00800000UL    // Incr double Linefill enable: You can set the
#define L2C_INCR_DOUBLE_LINEFILL_EN_BPOS         23UL            // following options for this register bit:
                                                                 // 0 The L2CC does not issue INCR 8x64-bit read
                                                                 // bursts to L3 on
                                                                 // reads that miss in the L2 cache. This is the default.
                                                                 // 1 The L2CC can issue INCR 8x64-bit read bursts to
                                                                 // L3 on
                                                                 // reads that miss in the L2 cache.

// RESERVED                                                         Properties: Bit: 22, Type: waz,raz, Reset Value: 0x0

                                                                 // Properties: Bit: 21, Type: rw, Reset Value: 0x0
#define L2C_NOT_SAME_ID_ON_EXCL_SEQ_EN_MASK      0x00200000UL    // Not same ID on exclusive sequence enable: You
#define L2C_NOT_SAME_ID_ON_EXCL_SEQ_EN_BPOS      21UL            // can set the following options for this register bit:
                                                                 // 0 Read and write portions of a non-cacheable
                                                                 // exclusive
                                                                 // sequence have the same AXI ID when issued to
                                                                 // L3. This is
                                                                 // the default.
                                                                 // 1 Read and write portions of a non-cacheable
                                                                 // exclusive
                                                                 // sequence do not have the same AXI ID when
                                                                 // issued to L3.

// RESERVED                                                         Properties: Bits: 20:5, Type: waz,raz, Reset Value: 0x0

                                                                 // Properties: Bits: 4:0, Type: rw, Reset Value: 0x0
#define L2C_PREFETCH_OFFSET_MASK                 0x0000001FUL    // Default = b00000.
#define L2C_PREFETCH_OFFSET_BPOS                 0UL             // 


//------------------------------------------------------------------------------
//
// Register (L2C) REG15_POWER_CTRL
//
// Name                    L2C_REG15_POWER_CTRL_REG  
// Relative Address        0x00000F80
// Absolute Address        0xF8F02F80
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Purpose Controls the operating mode clock and power modes.
//                         Usage constraints There are no usage constraints.
//
// Register L2C_REG15_POWER_CTRL_REG Details
//
// RESERVED                                                Properties: Bits: 31:2, Type: waz,raz, Reset Value: 0x0

                                                        // Properties: Bit: 1, Type: rw, Reset Value: 0x0
#define L2C_DYNAMIC_CLK_GATING_EN_MASK  0x00000002UL    // Dynamic clock gating enable.
#define L2C_DYNAMIC_CLK_GATING_EN_BPOS  1UL             // 1 = Enabled.
                                                        // 0 = Masked. This is the default.

                                                        // Properties: Bit: 0, Type: rw, Reset Value: 0x0
#define L2C_STANDBY_MODE_EN_MASK        0x00000001UL    // Standby mode enable.
#define L2C_STANDBY_MODE_EN_BPOS        0UL             // 1 = Enabled.
                                                        // 0 = Masked. This is the default


#endif // PS7_L2CACHE_H

