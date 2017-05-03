//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_GEM
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

#ifndef PS7_GEM_H
#define PS7_GEM_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    GEM0 MMRs
//
//              Name                             Address                   Width   Type     Reset Value   Description
const uintptr_t GEM_NET_CTRL_REG0              = GEM0_ADDR + 0x00000000; //  32    mixed    0x00000000    Network Control
const uintptr_t GEM_NET_CFG_REG0               = GEM0_ADDR + 0x00000004; //  32    rw       0x00080000    Network Configuration
const uintptr_t GEM_NET_STATUS_REG0            = GEM0_ADDR + 0x00000008; //  32    ro       x             Network Status
const uintptr_t GEM_DMA_CFG_REG0               = GEM0_ADDR + 0x00000010; //  32    mixed    0x00020784    DMA Configuration
const uintptr_t GEM_TX_STATUS_REG0             = GEM0_ADDR + 0x00000014; //  32    mixed    0x00000000    Transmit Status
const uintptr_t GEM_RX_QBAR_REG0               = GEM0_ADDR + 0x00000018; //  32    mixed    0x00000000    Receive Buffer Queue Base Address
const uintptr_t GEM_TX_QBAR_REG0               = GEM0_ADDR + 0x0000001C; //  32    mixed    0x00000000    Transmit Buffer Queue Base Address
const uintptr_t GEM_RX_STATUS_REG0             = GEM0_ADDR + 0x00000020; //  32    mixed    0x00000000    Receive Status
const uintptr_t GEM_INTR_STATUS_REG0           = GEM0_ADDR + 0x00000024; //  32    mixed    0x00000000    Interrupt Status
const uintptr_t GEM_INTR_EN_REG0               = GEM0_ADDR + 0x00000028; //  32    wo       x             Interrupt Enable
const uintptr_t GEM_INTR_DIS_REG0              = GEM0_ADDR + 0x0000002C; //  32    wo       x             Interrupt Disable
const uintptr_t GEM_INTR_MASK_REG0             = GEM0_ADDR + 0x00000030; //  32    mixed    x             Interrupt Mask Status
const uintptr_t GEM_PHY_MAINT_REG0             = GEM0_ADDR + 0x00000034; //  32    rw       0x00000000    PHY Maintenance
const uintptr_t GEM_RX_PAUSEQ_REG0             = GEM0_ADDR + 0x00000038; //  32    ro       0x00000000    Received Pause Quantum
const uintptr_t GEM_TX_PAUSEQ_REG0             = GEM0_ADDR + 0x0000003C; //  32    rw       0x0000FFFF    Transmit Pause Quantum
const uintptr_t GEM_HASH_BOT_REG0              = GEM0_ADDR + 0x00000080; //  32    rw       0x00000000    Hash Register Bottom 
const uintptr_t GEM_HASH_TOP_REG0              = GEM0_ADDR + 0x00000084; //  32    rw       0x00000000    Hash Register Top 
const uintptr_t GEM_SPEC_ADDR1_BOT_REG0        = GEM0_ADDR + 0x00000088; //  32    rw       0x00000000    Specific Address 1 Bottom 
const uintptr_t GEM_SPEC_ADDR1_TOP_REG0        = GEM0_ADDR + 0x0000008C; //  32    mixed    0x00000000    Specific Address 1 Top 
const uintptr_t GEM_SPEC_ADDR2_BOT_REG0        = GEM0_ADDR + 0x00000090; //  32    rw       0x00000000    Specific Address 2 Bottom 
const uintptr_t GEM_SPEC_ADDR2_TOP_REG0        = GEM0_ADDR + 0x00000094; //  32    mixed    0x00000000    Specific Address 2 Top 
const uintptr_t GEM_SPEC_ADDR3_BOT_REG0        = GEM0_ADDR + 0x00000098; //  32    rw       0x00000000    Specific Address 3 Bottom 
const uintptr_t GEM_SPEC_ADDR3_TOP_REG0        = GEM0_ADDR + 0x0000009C; //  32    mixed    0x00000000    Specific Address 3 Top 
const uintptr_t GEM_SPEC_ADDR4_BOT_REG0        = GEM0_ADDR + 0x000000A0; //  32    rw       0x00000000    Specific Address 4 Bottom 
const uintptr_t GEM_SPEC_ADDR4_TOP_REG0        = GEM0_ADDR + 0x000000A4; //  32    mixed    0x00000000    Specific Address 4 Top 
const uintptr_t GEM_TYPE_ID_MATCH1_REG0        = GEM0_ADDR + 0x000000A8; //  32    mixed    0x00000000    Type ID Match 1
const uintptr_t GEM_TYPE_ID_MATCH2_REG0        = GEM0_ADDR + 0x000000AC; //  32    mixed    0x00000000    Type ID Match 2
const uintptr_t GEM_TYPE_ID_MATCH3_REG0        = GEM0_ADDR + 0x000000B0; //  32    mixed    0x00000000    Type ID Match 3
const uintptr_t GEM_TYPE_ID_MATCH4_REG0        = GEM0_ADDR + 0x000000B4; //  32    mixed    0x00000000    Type ID Match 4
const uintptr_t GEM_WAKE_ON_LAN_REG0           = GEM0_ADDR + 0x000000B8; //  32    mixed    0x00000000    Wake on LAN Register
const uintptr_t GEM_IPG_STRETCH_REG0           = GEM0_ADDR + 0x000000BC; //  32    mixed    0x00000000    IPG stretch register
const uintptr_t GEM_STACKED_VLAN_REG0          = GEM0_ADDR + 0x000000C0; //  32    mixed    0x00000000    Stacked VLAN Register
const uintptr_t GEM_TX_PFC_PAUSE_REG0          = GEM0_ADDR + 0x000000C4; //  32    mixed    0x00000000    Transmit PFC Pause Register
const uintptr_t GEM_SPEC_ADDR1_MASK_BOT_REG0   = GEM0_ADDR + 0x000000C8; //  32    rw       0x00000000    Specific Address Mask 1 Bottom 
const uintptr_t GEM_SPEC_ADDR1_MASK_TOP_REG0   = GEM0_ADDR + 0x000000CC; //  32    mixed    0x00000000    Specific Address Mask 1 Top 
const uintptr_t GEM_MODULE_ID_REG0             = GEM0_ADDR + 0x000000FC; //  32    ro       0x00020118    Module ID
const uintptr_t GEM_OCTETS_TX_BOT_REG0         = GEM0_ADDR + 0x00000100; //  32    ro       0x00000000    Octets transmitted 
const uintptr_t GEM_OCTETS_TX_TOP_REG0         = GEM0_ADDR + 0x00000104; //  32    ro       0x00000000    Octets transmitted 
const uintptr_t GEM_FRAMES_TX_REG0             = GEM0_ADDR + 0x00000108; //  32    ro       0x00000000    Frames Transmitted
const uintptr_t GEM_BROADCAST_FRAMES_TX_REG0   = GEM0_ADDR + 0x0000010C; //  32    ro       0x00000000    Broadcast frames Tx
const uintptr_t GEM_MULTI_FRAMES_TX_REG0       = GEM0_ADDR + 0x00000110; //  32    ro       0x00000000    Multicast frames Tx
const uintptr_t GEM_PAUSE_FRAMES_TX_REG0       = GEM0_ADDR + 0x00000114; //  32    ro       0x00000000    Pause frames Tx
const uintptr_t GEM_FRAMES_64B_TX_REG0         = GEM0_ADDR + 0x00000118; //  32    ro       0x00000000    Frames Tx
const uintptr_t GEM_FRAMES_65TO127B_TX_REG0    = GEM0_ADDR + 0x0000011C; //  32    ro       0x00000000    Frames Tx
const uintptr_t GEM_FRAMES_128TO255B_TX_REG0   = GEM0_ADDR + 0x00000120; //  32    ro       0x00000000    Frames Tx
const uintptr_t GEM_FRAMES_256TO511B_TX_REG0   = GEM0_ADDR + 0x00000124; //  32    ro       0x00000000    Frames Tx
const uintptr_t GEM_FRAMES_512TO1023B_TX_REG0  = GEM0_ADDR + 0x00000128; //  32    ro       0x00000000    Frames Tx
const uintptr_t GEM_FRAMES_1024TO1518B_TX_REG0 = GEM0_ADDR + 0x0000012C; //  32    ro       0x00000000    Frame Tx
const uintptr_t GEM_TX_UNDER_RUNS_REG0         = GEM0_ADDR + 0x00000134; //  32    ro       0x00000000    Transmit under runs
const uintptr_t GEM_SINGLE_COLLISN_FRAMES_REG0 = GEM0_ADDR + 0x00000138; //  32    ro       0x00000000    Single Collision Frames
const uintptr_t GEM_MULTI_COLLISN_FRAMES_REG0  = GEM0_ADDR + 0x0000013C; //  32    ro       0x00000000    Multiple Collision Frames
const uintptr_t GEM_EXCESSIVE_COLLISNS_REG0    = GEM0_ADDR + 0x00000140; //  32    ro       0x00000000    Excessive Collisions
const uintptr_t GEM_LATE_COLLISNS_REG0         = GEM0_ADDR + 0x00000144; //  32    ro       0x00000000    Late Collisions
const uintptr_t GEM_DEFERRED_TX_FRAMES_REG0    = GEM0_ADDR + 0x00000148; //  32    ro       0x00000000    Deferred Transmission Frames
const uintptr_t GEM_CARRIER_SENSE_ERRS_REG0    = GEM0_ADDR + 0x0000014C; //  32    ro       0x00000000    Carrier Sense Errors
const uintptr_t GEM_OCTETS_RX_BOT_REG0         = GEM0_ADDR + 0x00000150; //  32    ro       0x00000000    Octets Received 
const uintptr_t GEM_OCTETS_RX_TOP_REG0         = GEM0_ADDR + 0x00000154; //  32    ro       0x00000000    Octets Received 
const uintptr_t GEM_FRAMES_RX_REG0             = GEM0_ADDR + 0x00000158; //  32    ro       0x00000000    Frames Received
const uintptr_t GEM_BDCAST_FAMES_RX_REG0       = GEM0_ADDR + 0x0000015C; //  32    ro       0x00000000    Broadcast Frames Rx
const uintptr_t GEM_MULTI_FRAMES_RX_REG0       = GEM0_ADDR + 0x00000160; //  32    ro       0x00000000    Multicast Frames Rx
const uintptr_t GEM_PAUSE_RX_REG0              = GEM0_ADDR + 0x00000164; //  32    ro       0x00000000    Pause Frames Rx
const uintptr_t GEM_FRAMES_64B_RX_REG0         = GEM0_ADDR + 0x00000168; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_FRAMES_65TO127B_RX_REG0    = GEM0_ADDR + 0x0000016C; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_FRAMES_128TO255B_RX_REG0   = GEM0_ADDR + 0x00000170; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_FRAMES_256TO511B_RX_REG0   = GEM0_ADDR + 0x00000174; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_FRAMES_512TO1023B_RX_REG0  = GEM0_ADDR + 0x00000178; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_FRAMES_1024TO1518B_RX_REG0 = GEM0_ADDR + 0x0000017C; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_UNDERSZ_RX_REG0            = GEM0_ADDR + 0x00000184; //  32    ro       0x00000000    Undersize frames received
const uintptr_t GEM_OVERSZ_RX_REG0             = GEM0_ADDR + 0x00000188; //  32    ro       0x00000000    Oversize frames received
const uintptr_t GEM_JAB_RX_REG0                = GEM0_ADDR + 0x0000018C; //  32    ro       0x00000000    Jabbers received
const uintptr_t GEM_FCS_ERRORS_REG0            = GEM0_ADDR + 0x00000190; //  32    ro       0x00000000    Frame check sequence errors
const uintptr_t GEM_LENGTH_FIELD_ERRORS_REG0   = GEM0_ADDR + 0x00000194; //  32    ro       0x00000000    Length field frame errors
const uintptr_t GEM_RX_SYMBOL_ERRORS_REG0      = GEM0_ADDR + 0x00000198; //  32    ro       0x00000000    Receive symbol errors
const uintptr_t GEM_ALIGN_ERRORS_REG0          = GEM0_ADDR + 0x0000019C; //  32    ro       0x00000000    Alignment errors
const uintptr_t GEM_RX_RESOURCE_ERRORS_REG0    = GEM0_ADDR + 0x000001A0; //  32    ro       0x00000000    Receive resource errors
const uintptr_t GEM_RX_OVERRUN_ERRORS_REG0     = GEM0_ADDR + 0x000001A4; //  32    ro       0x00000000    Receive overrun errors
const uintptr_t GEM_IP_HDR_CSUM_ERRORS_REG0    = GEM0_ADDR + 0x000001A8; //  32    ro       0x00000000    IP header checksum errors
const uintptr_t GEM_TCP_CSUM_ERRORS_REG0       = GEM0_ADDR + 0x000001AC; //  32    ro       0x00000000    TCP checksum errors
const uintptr_t GEM_UDP_CSUM_ERRORS_REG0       = GEM0_ADDR + 0x000001B0; //  32    ro       0x00000000    UDP checksum error
const uintptr_t GEM_TIMER_STROBE_S_REG0        = GEM0_ADDR + 0x000001C8; //  32    rw       0x00000000    1588 timer sync strobe seconds
const uintptr_t GEM_TIMER_STROBE_NS_REG0       = GEM0_ADDR + 0x000001CC; //  32    mixed    0x00000000    1588 timer sync strobe nanoseconds
const uintptr_t GEM_TIMER_S_REG0               = GEM0_ADDR + 0x000001D0; //  32    rw       0x00000000    1588 timer seconds
const uintptr_t GEM_TIMER_NS_REG0              = GEM0_ADDR + 0x000001D4; //  32    mixed    0x00000000    1588 timer nanoseconds
const uintptr_t GEM_TIMER_ADJUST_REG0          = GEM0_ADDR + 0x000001D8; //  32    mixed    0x00000000    1588 timer adjust
const uintptr_t GEM_TIMER_INCR_REG0            = GEM0_ADDR + 0x000001DC; //  32    mixed    0x00000000    1588 timer increment
const uintptr_t GEM_PTP_TX_S_REG0              = GEM0_ADDR + 0x000001E0; //  32    ro       0x00000000    PTP event frame transmitted seconds
const uintptr_t GEM_PTP_TX_NS_REG0             = GEM0_ADDR + 0x000001E4; //  32    ro       0x00000000    PTP event frame transmitted nanoseconds
const uintptr_t GEM_PTP_RX_S_REG0              = GEM0_ADDR + 0x000001E8; //  32    ro       0x00000000    PTP event frame received seconds
const uintptr_t GEM_PTP_RX_NS_REG0             = GEM0_ADDR + 0x000001EC; //  32    ro       0x00000000    PTP event frame received nanoseconds
const uintptr_t GEM_PTP_PEER_TX_S_REG0         = GEM0_ADDR + 0x000001F0; //  32    ro       0x00000000    PTP peer event frame transmitted seconds
const uintptr_t GEM_PTP_PEER_TX_NS_REG0        = GEM0_ADDR + 0x000001F4; //  32    ro       0x00000000    PTP peer event frame transmitted nanoseconds
const uintptr_t GEM_PTP_PEER_RX_S_REG0         = GEM0_ADDR + 0x000001F8; //  32    ro       0x00000000    PTP peer event frame received seconds
const uintptr_t GEM_PTP_PEER_RX_NS_REG0        = GEM0_ADDR + 0x000001FC; //  32    ro       0x00000000    PTP peer event frame received nanoseconds
const uintptr_t GEM_DESIGN_CFG2_REG0           = GEM0_ADDR + 0x00000284; //  32    ro       x             Design Configuration 2
const uintptr_t GEM_DESIGN_CFG3_REG0           = GEM0_ADDR + 0x00000288; //  32    ro       0x00000000    Design Configuration 3
const uintptr_t GEM_DESIGN_CFG4_REG0           = GEM0_ADDR + 0x0000028C; //  32    ro       0x00000000    Design Configuration 4
const uintptr_t GEM_DESIGN_CFG5_REG0           = GEM0_ADDR + 0x00000290; //  32    ro       x             Design Configuration 5
//------------------------------------------------------------------------------
//
//    GEM1 MMRs
//
//              Name                             Address                   Width   Type     Reset Value   Description
const uintptr_t GEM_NET_CTRL_REG1              = GEM1_ADDR + 0x00000000; //  32    mixed    0x00000000    Network Control
const uintptr_t GEM_NET_CFG_REG1               = GEM1_ADDR + 0x00000004; //  32    rw       0x00080000    Network Configuration
const uintptr_t GEM_NET_STATUS_REG1            = GEM1_ADDR + 0x00000008; //  32    ro       x             Network Status
const uintptr_t GEM_DMA_CFG_REG1               = GEM1_ADDR + 0x00000010; //  32    mixed    0x00020784    DMA Configuration
const uintptr_t GEM_TX_STATUS_REG1             = GEM1_ADDR + 0x00000014; //  32    mixed    0x00000000    Transmit Status
const uintptr_t GEM_RX_QBAR_REG1               = GEM1_ADDR + 0x00000018; //  32    mixed    0x00000000    Receive Buffer Queue Base Address
const uintptr_t GEM_TX_QBAR_REG1               = GEM1_ADDR + 0x0000001C; //  32    mixed    0x00000000    Transmit Buffer Queue Base Address
const uintptr_t GEM_RX_STATUS_REG1             = GEM1_ADDR + 0x00000020; //  32    mixed    0x00000000    Receive Status
const uintptr_t GEM_INTR_STATUS_REG1           = GEM1_ADDR + 0x00000024; //  32    mixed    0x00000000    Interrupt Status
const uintptr_t GEM_INTR_EN_REG1               = GEM1_ADDR + 0x00000028; //  32    wo       x             Interrupt Enable
const uintptr_t GEM_INTR_DIS_REG1              = GEM1_ADDR + 0x0000002C; //  32    wo       x             Interrupt Disable
const uintptr_t GEM_INTR_MASK_REG1             = GEM1_ADDR + 0x00000030; //  32    mixed    x             Interrupt Mask Status
const uintptr_t GEM_PHY_MAINT_REG1             = GEM1_ADDR + 0x00000034; //  32    rw       0x00000000    PHY Maintenance
const uintptr_t GEM_RX_PAUSEQ_REG1             = GEM1_ADDR + 0x00000038; //  32    ro       0x00000000    Received Pause Quantum
const uintptr_t GEM_TX_PAUSEQ_REG1             = GEM1_ADDR + 0x0000003C; //  32    rw       0x0000FFFF    Transmit Pause Quantum
const uintptr_t GEM_HASH_BOT_REG1              = GEM1_ADDR + 0x00000080; //  32    rw       0x00000000    Hash Register Bottom 
const uintptr_t GEM_HASH_TOP_REG1              = GEM1_ADDR + 0x00000084; //  32    rw       0x00000000    Hash Register Top 
const uintptr_t GEM_SPEC_ADDR1_BOT_REG1        = GEM1_ADDR + 0x00000088; //  32    rw       0x00000000    Specific Address 1 Bottom 
const uintptr_t GEM_SPEC_ADDR1_TOP_REG1        = GEM1_ADDR + 0x0000008C; //  32    mixed    0x00000000    Specific Address 1 Top 
const uintptr_t GEM_SPEC_ADDR2_BOT_REG1        = GEM1_ADDR + 0x00000090; //  32    rw       0x00000000    Specific Address 2 Bottom 
const uintptr_t GEM_SPEC_ADDR2_TOP_REG1        = GEM1_ADDR + 0x00000094; //  32    mixed    0x00000000    Specific Address 2 Top 
const uintptr_t GEM_SPEC_ADDR3_BOT_REG1        = GEM1_ADDR + 0x00000098; //  32    rw       0x00000000    Specific Address 3 Bottom 
const uintptr_t GEM_SPEC_ADDR3_TOP_REG1        = GEM1_ADDR + 0x0000009C; //  32    mixed    0x00000000    Specific Address 3 Top 
const uintptr_t GEM_SPEC_ADDR4_BOT_REG1        = GEM1_ADDR + 0x000000A0; //  32    rw       0x00000000    Specific Address 4 Bottom 
const uintptr_t GEM_SPEC_ADDR4_TOP_REG1        = GEM1_ADDR + 0x000000A4; //  32    mixed    0x00000000    Specific Address 4 Top 
const uintptr_t GEM_TYPE_ID_MATCH1_REG1        = GEM1_ADDR + 0x000000A8; //  32    mixed    0x00000000    Type ID Match 1
const uintptr_t GEM_TYPE_ID_MATCH2_REG1        = GEM1_ADDR + 0x000000AC; //  32    mixed    0x00000000    Type ID Match 2
const uintptr_t GEM_TYPE_ID_MATCH3_REG1        = GEM1_ADDR + 0x000000B0; //  32    mixed    0x00000000    Type ID Match 3
const uintptr_t GEM_TYPE_ID_MATCH4_REG1        = GEM1_ADDR + 0x000000B4; //  32    mixed    0x00000000    Type ID Match 4
const uintptr_t GEM_WAKE_ON_LAN_REG1           = GEM1_ADDR + 0x000000B8; //  32    mixed    0x00000000    Wake on LAN Register
const uintptr_t GEM_IPG_STRETCH_REG1           = GEM1_ADDR + 0x000000BC; //  32    mixed    0x00000000    IPG stretch register
const uintptr_t GEM_STACKED_VLAN_REG1          = GEM1_ADDR + 0x000000C0; //  32    mixed    0x00000000    Stacked VLAN Register
const uintptr_t GEM_TX_PFC_PAUSE_REG1          = GEM1_ADDR + 0x000000C4; //  32    mixed    0x00000000    Transmit PFC Pause Register
const uintptr_t GEM_SPEC_ADDR1_MASK_BOT_REG1   = GEM1_ADDR + 0x000000C8; //  32    rw       0x00000000    Specific Address Mask 1 Bottom 
const uintptr_t GEM_SPEC_ADDR1_MASK_TOP_REG1   = GEM1_ADDR + 0x000000CC; //  32    mixed    0x00000000    Specific Address Mask 1 Top 
const uintptr_t GEM_MODULE_ID_REG1             = GEM1_ADDR + 0x000000FC; //  32    ro       0x00020118    Module ID
const uintptr_t GEM_OCTETS_TX_BOT_REG1         = GEM1_ADDR + 0x00000100; //  32    ro       0x00000000    Octets transmitted 
const uintptr_t GEM_OCTETS_TX_TOP_REG1         = GEM1_ADDR + 0x00000104; //  32    ro       0x00000000    Octets transmitted 
const uintptr_t GEM_FRAMES_TX_REG1             = GEM1_ADDR + 0x00000108; //  32    ro       0x00000000    Frames Transmitted
const uintptr_t GEM_BROADCAST_FRAMES_TX_REG1   = GEM1_ADDR + 0x0000010C; //  32    ro       0x00000000    Broadcast frames Tx
const uintptr_t GEM_MULTI_FRAMES_TX_REG1       = GEM1_ADDR + 0x00000110; //  32    ro       0x00000000    Multicast frames Tx
const uintptr_t GEM_PAUSE_FRAMES_TX_REG1       = GEM1_ADDR + 0x00000114; //  32    ro       0x00000000    Pause frames Tx
const uintptr_t GEM_FRAMES_64B_TX_REG1         = GEM1_ADDR + 0x00000118; //  32    ro       0x00000000    Frames Tx
const uintptr_t GEM_FRAMES_65TO127B_TX_REG1    = GEM1_ADDR + 0x0000011C; //  32    ro       0x00000000    Frames Tx
const uintptr_t GEM_FRAMES_128TO255B_TX_REG1   = GEM1_ADDR + 0x00000120; //  32    ro       0x00000000    Frames Tx
const uintptr_t GEM_FRAMES_256TO511B_TX_REG1   = GEM1_ADDR + 0x00000124; //  32    ro       0x00000000    Frames Tx
const uintptr_t GEM_FRAMES_512TO1023B_TX_REG1  = GEM1_ADDR + 0x00000128; //  32    ro       0x00000000    Frames Tx
const uintptr_t GEM_FRAMES_1024TO1518B_TX_REG1 = GEM1_ADDR + 0x0000012C; //  32    ro       0x00000000    Frame Tx
const uintptr_t GEM_TX_UNDER_RUNS_REG1         = GEM1_ADDR + 0x00000134; //  32    ro       0x00000000    Transmit under runs
const uintptr_t GEM_SINGLE_COLLISN_FRAMES_REG1 = GEM1_ADDR + 0x00000138; //  32    ro       0x00000000    Single Collision Frames
const uintptr_t GEM_MULTI_COLLISN_FRAMES_REG1  = GEM1_ADDR + 0x0000013C; //  32    ro       0x00000000    Multiple Collision Frames
const uintptr_t GEM_EXCESSIVE_COLLISNS_REG1    = GEM1_ADDR + 0x00000140; //  32    ro       0x00000000    Excessive Collisions
const uintptr_t GEM_LATE_COLLISNS_REG1         = GEM1_ADDR + 0x00000144; //  32    ro       0x00000000    Late Collisions
const uintptr_t GEM_DEFERRED_TX_FRAMES_REG1    = GEM1_ADDR + 0x00000148; //  32    ro       0x00000000    Deferred Transmission Frames
const uintptr_t GEM_CARRIER_SENSE_ERRS_REG1    = GEM1_ADDR + 0x0000014C; //  32    ro       0x00000000    Carrier Sense Errors
const uintptr_t GEM_OCTETS_RX_BOT_REG1         = GEM1_ADDR + 0x00000150; //  32    ro       0x00000000    Octets Received 
const uintptr_t GEM_OCTETS_RX_TOP_REG1         = GEM1_ADDR + 0x00000154; //  32    ro       0x00000000    Octets Received 
const uintptr_t GEM_FRAMES_RX_REG1             = GEM1_ADDR + 0x00000158; //  32    ro       0x00000000    Frames Received
const uintptr_t GEM_BDCAST_FAMES_RX_REG1       = GEM1_ADDR + 0x0000015C; //  32    ro       0x00000000    Broadcast Frames Rx
const uintptr_t GEM_MULTI_FRAMES_RX_REG1       = GEM1_ADDR + 0x00000160; //  32    ro       0x00000000    Multicast Frames Rx
const uintptr_t GEM_PAUSE_RX_REG1              = GEM1_ADDR + 0x00000164; //  32    ro       0x00000000    Pause Frames Rx
const uintptr_t GEM_FRAMES_64B_RX_REG1         = GEM1_ADDR + 0x00000168; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_FRAMES_65TO127B_RX_REG1    = GEM1_ADDR + 0x0000016C; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_FRAMES_128TO255B_RX_REG1   = GEM1_ADDR + 0x00000170; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_FRAMES_256TO511B_RX_REG1   = GEM1_ADDR + 0x00000174; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_FRAMES_512TO1023B_RX_REG1  = GEM1_ADDR + 0x00000178; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_FRAMES_1024TO1518B_RX_REG1 = GEM1_ADDR + 0x0000017C; //  32    ro       0x00000000    Frames Rx
const uintptr_t GEM_UNDERSZ_RX_REG1            = GEM1_ADDR + 0x00000184; //  32    ro       0x00000000    Undersize frames received
const uintptr_t GEM_OVERSZ_RX_REG1             = GEM1_ADDR + 0x00000188; //  32    ro       0x00000000    Oversize frames received
const uintptr_t GEM_JAB_RX_REG1                = GEM1_ADDR + 0x0000018C; //  32    ro       0x00000000    Jabbers received
const uintptr_t GEM_FCS_ERRORS_REG1            = GEM1_ADDR + 0x00000190; //  32    ro       0x00000000    Frame check sequence errors
const uintptr_t GEM_LENGTH_FIELD_ERRORS_REG1   = GEM1_ADDR + 0x00000194; //  32    ro       0x00000000    Length field frame errors
const uintptr_t GEM_RX_SYMBOL_ERRORS_REG1      = GEM1_ADDR + 0x00000198; //  32    ro       0x00000000    Receive symbol errors
const uintptr_t GEM_ALIGN_ERRORS_REG1          = GEM1_ADDR + 0x0000019C; //  32    ro       0x00000000    Alignment errors
const uintptr_t GEM_RX_RESOURCE_ERRORS_REG1    = GEM1_ADDR + 0x000001A0; //  32    ro       0x00000000    Receive resource errors
const uintptr_t GEM_RX_OVERRUN_ERRORS_REG1     = GEM1_ADDR + 0x000001A4; //  32    ro       0x00000000    Receive overrun errors
const uintptr_t GEM_IP_HDR_CSUM_ERRORS_REG1    = GEM1_ADDR + 0x000001A8; //  32    ro       0x00000000    IP header checksum errors
const uintptr_t GEM_TCP_CSUM_ERRORS_REG1       = GEM1_ADDR + 0x000001AC; //  32    ro       0x00000000    TCP checksum errors
const uintptr_t GEM_UDP_CSUM_ERRORS_REG1       = GEM1_ADDR + 0x000001B0; //  32    ro       0x00000000    UDP checksum error
const uintptr_t GEM_TIMER_STROBE_S_REG1        = GEM1_ADDR + 0x000001C8; //  32    rw       0x00000000    1588 timer sync strobe seconds
const uintptr_t GEM_TIMER_STROBE_NS_REG1       = GEM1_ADDR + 0x000001CC; //  32    mixed    0x00000000    1588 timer sync strobe nanoseconds
const uintptr_t GEM_TIMER_S_REG1               = GEM1_ADDR + 0x000001D0; //  32    rw       0x00000000    1588 timer seconds
const uintptr_t GEM_TIMER_NS_REG1              = GEM1_ADDR + 0x000001D4; //  32    mixed    0x00000000    1588 timer nanoseconds
const uintptr_t GEM_TIMER_ADJUST_REG1          = GEM1_ADDR + 0x000001D8; //  32    mixed    0x00000000    1588 timer adjust
const uintptr_t GEM_TIMER_INCR_REG1            = GEM1_ADDR + 0x000001DC; //  32    mixed    0x00000000    1588 timer increment
const uintptr_t GEM_PTP_TX_S_REG1              = GEM1_ADDR + 0x000001E0; //  32    ro       0x00000000    PTP event frame transmitted seconds
const uintptr_t GEM_PTP_TX_NS_REG1             = GEM1_ADDR + 0x000001E4; //  32    ro       0x00000000    PTP event frame transmitted nanoseconds
const uintptr_t GEM_PTP_RX_S_REG1              = GEM1_ADDR + 0x000001E8; //  32    ro       0x00000000    PTP event frame received seconds
const uintptr_t GEM_PTP_RX_NS_REG1             = GEM1_ADDR + 0x000001EC; //  32    ro       0x00000000    PTP event frame received nanoseconds
const uintptr_t GEM_PTP_PEER_TX_S_REG1         = GEM1_ADDR + 0x000001F0; //  32    ro       0x00000000    PTP peer event frame transmitted seconds
const uintptr_t GEM_PTP_PEER_TX_NS_REG1        = GEM1_ADDR + 0x000001F4; //  32    ro       0x00000000    PTP peer event frame transmitted nanoseconds
const uintptr_t GEM_PTP_PEER_RX_S_REG1         = GEM1_ADDR + 0x000001F8; //  32    ro       0x00000000    PTP peer event frame received seconds
const uintptr_t GEM_PTP_PEER_RX_NS_REG1        = GEM1_ADDR + 0x000001FC; //  32    ro       0x00000000    PTP peer event frame received nanoseconds
const uintptr_t GEM_DESIGN_CFG2_REG1           = GEM1_ADDR + 0x00000284; //  32    ro       x             Design Configuration 2
const uintptr_t GEM_DESIGN_CFG3_REG1           = GEM1_ADDR + 0x00000288; //  32    ro       0x00000000    Design Configuration 3
const uintptr_t GEM_DESIGN_CFG4_REG1           = GEM1_ADDR + 0x0000028C; //  32    ro       0x00000000    Design Configuration 4
const uintptr_t GEM_DESIGN_CFG5_REG1           = GEM1_ADDR + 0x00000290; //  32    ro       x             Design Configuration 5
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (GEM) NET_CTRL
//
// Name                    GEM_NET_CTRL_REG
// Software Name           XEMACPS_NWCTRL
// Relative Address        0x00000000
// Absolute Address        gem0: 0xE000B000
//                         gem1: 0xE000C000
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Network Control
//
// Register GEM_NET_CTRL_REG Details
//            The network control register contains general MAC control functions for both receiver and transmitter.
//
// RESERVED                                                             Properties: Bits: 31:19, Type: ro, Reset Value: 0x0

                                                                     // Properties: Bit: 18, Type: wo, Reset Value: 0x0
const uintptr_t GEM_FLUSH_NEXT_RX_DPRAM_PKT_MASK    = 0x00040000;    // Flush the next packet from the external RX
const uintptr_t GEM_FLUSH_NEXT_RX_DPRAM_PKT_BPOS    = 18;            // DPRAM.
                                                                     // Writing one to this bit will only have an effect if
                                                                     // the DMA is not currently writing a packet already
                                                                     // stored in the DPRAM to memory.

                                                                     // Properties: Bit: 17, Type: wo, Reset Value: 0x0
const uintptr_t GEM_TX_PFC_PRI_PRI_PAUSE_FRAME_MASK = 0x00020000;    // Transmit PFC Priority Based Pause Frame. Takes
const uintptr_t GEM_TX_PFC_PRI_PRI_PAUSE_FRAME_BPOS = 17;            // the values stored in the Transmit PFC Pause
                                                                     // Register

                                                                     // Properties: Bit: 16, Type: wo, Reset Value: 0x0
const uintptr_t GEM_EN_PFC_PRI_PAUSE_RX_MASK        = 0x00010000;    // Enable PFC Priority Based Pause Reception
const uintptr_t GEM_EN_PFC_PRI_PAUSE_RX_BPOS        = 16;            // capabilities.
                                                                     // Setting this bit will enable PFC negotiation and
                                                                     // recognition of priority based pause frames.

                                                                     // Properties: Bit: 15, Type: rw, Reset Value: 0x0
const uintptr_t GEM_STR_RX_TIMESTAMP_MASK           = 0x00008000;    // Store receive time stamp to memory. Setting this
const uintptr_t GEM_STR_RX_TIMESTAMP_BPOS           = 15;            // bit to one will cause the CRC of every received
                                                                     // frame to be replaced with the value of the
                                                                     // nanoseconds field of the 1588 timer that was
                                                                     // captured as the receive frame passed the message
                                                                     // time stamp point. Set to zero for normal
                                                                     // operation.

// RESERVED                                                             Properties: Bit: 14, Type: rw, Reset Value: 0x0

// RESERVED                                                             Properties: Bit: 13, Type: wo, Reset Value: 0x0

                                                                     // Properties: Bit: 12, Type: wo, Reset Value: 0x0
const uintptr_t GEM_TX_ZEROQ_PAUSE_FRAME_MASK       = 0x00001000;    // Transmit zero quantum pause frame. Writing one
const uintptr_t GEM_TX_ZEROQ_PAUSE_FRAME_BPOS       = 12;            // to this bit causes a pause frame with zero
                                                                     // quantum to be transmitted.

                                                                     // Properties: Bit: 11, Type: wo, Reset Value: 0x0
const uintptr_t GEM_TX_PAUSE_FRAME_MASK             = 0x00000800;    // Transmit pause frame - writing one to this bit
const uintptr_t GEM_TX_PAUSE_FRAME_BPOS             = 11;            // causes a pause frame to be transmitted.

                                                                     // Properties: Bit: 10, Type: wo, Reset Value: 0x0
const uintptr_t GEM_TX_HALT_MASK                    = 0x00000400;    // Transmit halt - writing one to this bit halts
const uintptr_t GEM_TX_HALT_BPOS                    = 10;            // transmission as soon as any ongoing frame
                                                                     // transmission ends.

                                                                     // Properties: Bit: 9, Type: wo, Reset Value: 0x0
const uintptr_t GEM_START_TX_MASK                   = 0x00000200;    // Start transmission - writing one to this bit starts
const uintptr_t GEM_START_TX_BPOS                   = 9;             // transmission.

                                                                     // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t GEM_BACK_PRESSURE_MASK              = 0x00000100;    // Back pressure - if set in 10M or 100M half duplex
const uintptr_t GEM_BACK_PRESSURE_BPOS              = 8;             // mode will force collisions on all received frames.

                                                                     // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t GEM_WREN_STAT_REGS_MASK             = 0x00000080;    // Write enable for statistics registers - setting this bit
const uintptr_t GEM_WREN_STAT_REGS_BPOS             = 7;             // to one means the statistics registers can be written
                                                                     // for functional test purposes.

                                                                     // Properties: Bit: 6, Type: wo, Reset Value: 0x0
const uintptr_t GEM_INCR_STAT_REGS_MASK             = 0x00000040;    // Incremental statistics registers - this bit is write
const uintptr_t GEM_INCR_STAT_REGS_BPOS             = 6;             // only.
                                                                     // Writing a one increments all the statistics registers
                                                                     // by one for test purposes.

                                                                     // Properties: Bit: 5, Type: wo, Reset Value: 0x0
const uintptr_t GEM_CLEAR_STAT_REGS_MASK            = 0x00000020;    // Clear statistics registers - this bit is write only.
const uintptr_t GEM_CLEAR_STAT_REGS_BPOS            = 5;             // Writing a one clears the statistics registers.

                                                                     // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t GEM_MGMT_PORT_EN_MASK               = 0x00000010;    // Management port enable - set to one to enable the
const uintptr_t GEM_MGMT_PORT_EN_BPOS               = 4;             // management port. When zero forces mdio to high
                                                                     // impedance state and mdc low.

                                                                     // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t GEM_TX_EN_MASK                      = 0x00000008;    // Transmit enable - when set, it enables the GEM
const uintptr_t GEM_TX_EN_BPOS                      = 3;             // transmitter to send data. When reset transmission
                                                                     // will stop immediately, the transmit pipeline and
                                                                     // control registers will be cleared and the transmit
                                                                     // queue pointer register will reset to point to the
                                                                     // start of the transmit descriptor list.

                                                                     // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t GEM_RX_EN_MASK                      = 0x00000004;    // Receive enable - when set, it enables the GEM to
const uintptr_t GEM_RX_EN_BPOS                      = 2;             // receive data. When reset frame reception will stop
                                                                     // immediately and the receive pipeline will be
                                                                     // cleared.
                                                                     // The receive queue pointer register is unaffected.

                                                                     // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t GEM_LOOPBACK_LOCAL_MASK             = 0x00000002;    // Loop back local - asserts the loopback_local signal
const uintptr_t GEM_LOOPBACK_LOCAL_BPOS             = 1;             // to the system clock generator. Also connects txd to
                                                                     // rxd, tx_en to rx_dv and forces full duplex mode.
                                                                     // Bit 11 of the network configuration register must
                                                                     // be set low to disable TBI mode when in internal
                                                                     // loopback. rx_clk and tx_clk may malfunction as
                                                                     // the GEM is switched into and out of internal loop
                                                                     // back. It is important that receive and transmit
                                                                     // circuits have already been disabled when making
                                                                     // the switch into and out of internal loop back.
                                                                     // Local loopback functionality isn't available in the
                                                                     // EP107 Zynq Emulation Platform, because the
                                                                     // clocking doesn't map well into an FPGA.

// RESERVED                                                             Properties: Bit: 0, Type: rw, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (GEM) NET_CFG
//
// Name                      GEM_NET_CFG_REG
// Software Name             XEMACPS_NWCFG
// Relative Address          0x00000004
// Absolute Address          gem0: 0xE000B004
//                           gem1: 0xE000C004
// Width                     32 bits
// Access Type               rw
// Reset Value               0x00080000
// Description               Network Configuration
//
// Register GEM_NET_CFG_REG Details
//         The network configuration register contains functions for setting the mode of operation for the Gigabit
//         Ethernet MAC
//
                                                              // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t GEM_UNIDIR_EN_MASK           = 0x80000000;    // NA.
const uintptr_t GEM_UNIDIR_EN_BPOS           = 31;            // 

                                                              // Properties: Bit: 30, Type: rw, Reset Value: 0x0
const uintptr_t GEM_IGNORE_IPG_RX_ER_MASK    = 0x40000000;    // Ignore IPG rx_er. When set rx_er has no effect on
const uintptr_t GEM_IGNORE_IPG_RX_ER_BPOS    = 30;            // the GEM's operation when rx_dv is low. Set this
                                                              // when using the RGMII wrapper in half-duplex
                                                              // mode.

                                                              // Properties: Bit: 29, Type: rw, Reset Value: 0x0
const uintptr_t GEM_RX_BAD_PREAMBLE_MASK     = 0x20000000;    // Receive bad preamble. When set frames with
const uintptr_t GEM_RX_BAD_PREAMBLE_BPOS     = 29;            // non-standard preamble are not rejected.

                                                              // Properties: Bit: 28, Type: rw, Reset Value: 0x0
const uintptr_t GEM_IPG_STRETCH_EN_MASK      = 0x10000000;    // IPG stretch enable - when set the transmit IPG can
const uintptr_t GEM_IPG_STRETCH_EN_BPOS      = 28;            // be increased above 96 bit times depending on the
                                                              // previous frame length using the IPG stretch
                                                              // register.

                                                              // Properties: Bit: 27, Type: rw, Reset Value: 0x0
const uintptr_t GEM_SGMII_EN_MASK            = 0x08000000;    // SGMII mode enable - changes behavior of the
const uintptr_t GEM_SGMII_EN_BPOS            = 27;            // auto-negotiation advertisement and link partner
                                                              // ability registers to meet the requirements of
                                                              // SGMII and reduces the duration of the link timer
                                                              // from 10 ms to 1.6 ms

                                                              // Properties: Bit: 26, Type: rw, Reset Value: 0x0
const uintptr_t GEM_IGNORE_RX_FCS_MASK       = 0x04000000;    // Ignore RX FCS - when set frames with FCS/CRC
const uintptr_t GEM_IGNORE_RX_FCS_BPOS       = 26;            // errors will not be rejected. FCS error statistics will
                                                              // still be collected for frames with bad FCS and FCS
                                                              // status will be recorded in frame's DMA
                                                              // descriptor.
                                                              // For normal operation this bit must be set to zero.

                                                              // Properties: Bit: 25, Type: rw, Reset Value: 0x0
const uintptr_t GEM_RX_HD_WHILE_TX_MASK      = 0x02000000;    // Enable frames to be received in half-duplex mode
const uintptr_t GEM_RX_HD_WHILE_TX_BPOS      = 25;            // while transmitting.

                                                              // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t GEM_RX_CHKSUM_OFFLD_EN_MASK  = 0x01000000;    // Receive checksum offload enable - when set, the
const uintptr_t GEM_RX_CHKSUM_OFFLD_EN_BPOS  = 24;            // receive checksum engine is enabled. Frames with
                                                              // bad IP, TCP or UDP checksums are discarded.

                                                              // Properties: Bit: 23, Type: rw, Reset Value: 0x0
const uintptr_t GEM_DIS_CP_PAUSE_FRAME_MASK  = 0x00800000;    // Disable copy of pause frames - set to one to
const uintptr_t GEM_DIS_CP_PAUSE_FRAME_BPOS  = 23;            // prevent valid pause frames being copied to
                                                              // memory. When set, pause frames are not copied to
                                                              // memory regardless of the state of the copy all
                                                              // frames bit; whether a hash match is found or
                                                              // whether a type ID match is identified. If a
                                                              // destination address match is found the pause
                                                              // frame will be copied to memory.
                                                              // Note that valid pause frames received will still
                                                              // increment pause statistics and pause the
                                                              // transmission of frames as required.

                                                              // Properties: Bits: 22:21, Type: rw, Reset Value: 0x0
const uintptr_t GEM_DBUS_WIDTH_MASK          = 0x00600000;    // Data bus width. Only valid bus widths may be
const uintptr_t GEM_DBUS_WIDTH_BPOS          = 21;            // written if the system is configured to a maximum
                                                              // width less than 128-bits. Zynq defines
                                                              // gem_dma_bus_width_def as 2'b00.
                                                              // 00: 32 bit AMBA AHB data bus width
                                                              // 01: 64 bit AMBA AHB data bus width
                                                              // 10: 128 bit AMBA AHB data bus width
                                                              // 11: 128 bit AMBA AHB data bus width

                                                              // Properties: Bits: 20:18, Type: rw, Reset Value: 0x2
const uintptr_t GEM_MDC_CLK_DIV_MASK         = 0x001C0000;    // MDC clock division - set according to cpu_1xclk
const uintptr_t GEM_MDC_CLK_DIV_BPOS         = 18;            // speed.
                                                              // These three bits determine the number cpu_1xclk
                                                              // will be divided by to generate MDC. For
                                                              // conformance with the 802.3 specification, MDC
                                                              // must not exceed 2.5 MHz (MDC is only active
                                                              // during MDIO read and write operations).
                                                              // 000: divide cpu_1xclk by 8 (cpu_1xclk up to 20
                                                              // MHz)
                                                              // 001: divide cpu_1xclk by 16 (cpu_1xclk up to 40
                                                              // MHz)
                                                              // 010: divide cpu_1xclk by 32 (cpu_1xclk up to 80
                                                              // MHz)
                                                              // 011: divide cpu_1xclk by 48 (cpu_1xclk up to
                                                              // 120MHz)
                                                              // 100: divide cpu_1xclk by 64 (cpu_1xclk up to 160
                                                              // MHz)
                                                              // 101: divide cpu_1xclk by 96 (cpu_1xclk up to 240
                                                              // MHz)
                                                              // 110: divide cpu_1xclk by 128 (cpu_1xclk up to 320
                                                              // MHz)
                                                              // 111: divide cpu_1xclk by 224 (cpu_1xclk up to 540
                                                              // MHz)

                                                              // Properties: Bit: 17, Type: rw, Reset Value: 0x0
const uintptr_t GEM_FCS_REMOVE_MASK          = 0x00020000;    // FCS remove - setting this bit will cause received
const uintptr_t GEM_FCS_REMOVE_BPOS          = 17;            // frames to be written to memory without their
                                                              // frame check sequence (last 4 bytes). The frame
                                                              // length indicated will be reduced by four bytes in
                                                              // this mode.

                                                              // Properties: Bit: 16, Type: rw, Reset Value: 0x0
const uintptr_t GEM_LEN_ERR_FRAME_DISC_MASK  = 0x00010000;    // Length field error frame discard - setting this bit
const uintptr_t GEM_LEN_ERR_FRAME_DISC_BPOS  = 16;            // causes frames with a measured length shorter
                                                              // than the extracted length field (as indicated by
                                                              // bytes 13 and 14 in a non-VLAN tagged frame) to
                                                              // be discarded. This only applies to frames with a
                                                              // length field less than 0x0600.

                                                              // Properties: Bits: 15:14, Type: rw, Reset Value: 0x0
const uintptr_t GEM_RX_BUF_OFFSET_MASK       = 0x0000C000;    // Receive buffer offset - indicates the number of
const uintptr_t GEM_RX_BUF_OFFSET_BPOS       = 14;            // bytes by which the received data is offset from the
                                                              // start of the receive buffer.

                                                              // Properties: Bit: 13, Type: rw, Reset Value: 0x0
const uintptr_t GEM_PAUSE_EN_MASK            = 0x00002000;    // Pause enable - when set, transmission will pause
const uintptr_t GEM_PAUSE_EN_BPOS            = 13;            // if a non zero 802.3 classic pause frame is received
                                                              // and PFC has not been negotiated.

                                                              // Properties: Bit: 12, Type: rw, Reset Value: 0x0
const uintptr_t GEM_RETRY_TEST_MASK          = 0x00001000;    // Retry test - must be set to zero for normal
const uintptr_t GEM_RETRY_TEST_BPOS          = 12;            // operation.
                                                              // If set to one the backoff between collisions will
                                                              // always be one slot time. Setting this bit to one
                                                              // helps test the too many retries condition. Also
                                                              // used in the pause frame tests to reduce the pause
                                                              // counter's decrement time from 512 bit times, to
                                                              // every rx_clk cycle.

                                                              // Properties: Bit: 11, Type: rw, Reset Value: 0x0
const uintptr_t GEM_PCS_SEL_MASK             = 0x00000800;    // NA
const uintptr_t GEM_PCS_SEL_BPOS             = 11;            // 0: GMII/MII interface enabled, TBI disabled
                                                              // 1: TBI enabled, GMII/MII disabled

                                                              // Properties: Bit: 10, Type: rw, Reset Value: 0x0
const uintptr_t GEM_GIGE_EN_MASK             = 0x00000400;    // Gigabit mode enable - setting this bit configures
const uintptr_t GEM_GIGE_EN_BPOS             = 10;            // the GEM for 1000 Mbps operation.
                                                              // 0: 10/100 operation using MII or TBI interface
                                                              // 1: Gigabit operation using GMII or TBI interface

                                                              // Properties: Bit: 9, Type: rw, Reset Value: 0x0
const uintptr_t GEM_EXT_ADDR_MATCH_EN_MASK   = 0x00000200;    // External address match enable - when set the
const uintptr_t GEM_EXT_ADDR_MATCH_EN_BPOS   = 9;             // external address match interface can be used to
                                                              // copy frames to memory.

                                                              // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t GEM_RX_1536_BYTE_FRAMES_MASK = 0x00000100;    // Receive 1536 byte frames - setting this bit means
const uintptr_t GEM_RX_1536_BYTE_FRAMES_BPOS = 8;             // the GEM will accept frames up to 1536 bytes in
                                                              // length. Normally the GEM would reject any
                                                              // frame above 1518 bytes.

                                                              // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t GEM_UNI_HASH_EN_MASK         = 0x00000080;    // Unicast hash enable - when set, unicast frames
const uintptr_t GEM_UNI_HASH_EN_BPOS         = 7;             // will be accepted when the 6 bit hash function of
                                                              // the destination address points to a bit that is set in
                                                              // the hash register.

                                                              // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t GEM_MULTI_HASH_EN_MASK       = 0x00000040;    // Multicast hash enable - when set, multicast
const uintptr_t GEM_MULTI_HASH_EN_BPOS       = 6;             // frames will be accepted when the 6 bit hash
                                                              // function of the destination address points to a bit
                                                              // that is set in the hash register.

                                                              // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t GEM_NO_BROADCAST_MASK        = 0x00000020;    // No broadcast - when set to logic one, frames
const uintptr_t GEM_NO_BROADCAST_BPOS        = 5;             // addressed to the broadcast address of all ones will
                                                              // not be accepted.

                                                              // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t GEM_COPY_ALL_MASK            = 0x00000010;    // Copy all frames - when set to logic one, all valid
const uintptr_t GEM_COPY_ALL_BPOS            = 4;             // frames will be accepted.

// RESERVED                                                      Properties: Bit: 3, Type: rw, Reset Value: 0x0

                                                              // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t GEM_DISC_NON_VLAN_MASK       = 0x00000004;    // Discard non-VLAN frames - when set only VLAN
const uintptr_t GEM_DISC_NON_VLAN_BPOS       = 2;             // tagged frames will be passed to the address

                                                              // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t GEM_FULL_DUPLEX_MASK         = 0x00000002;    // Full duplex - if set to logic one, the transmit block
const uintptr_t GEM_FULL_DUPLEX_BPOS         = 1;             // ignores the state of collision and carrier sense and
                                                              // allows receive while transmitting. Also controls
                                                              // the half-duplex pin.

                                                              // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_SPEED_MASK               = 0x00000001;    // Speed - set to logic one to indicate 100Mbps
const uintptr_t GEM_SPEED_BPOS               = 0;             // operation, logic zero for 10Mbps. The value of this
                                                              // pin is reflected on the speed_mode[0] output pin.


//------------------------------------------------------------------------------
//
// Register (GEM) NET_STATUS
//
// Name                      GEM_NET_STATUS_REG
// Software Name             XEMACPS_NWSR
// Relative Address          0x00000008
// Absolute Address          gem0: 0xE000B008
//                           gem1: 0xE000C008
// Width                     32 bits
// Access Type               ro
// Reset Value               x
// Description               Network Status
//
// Register GEM_NET_STATUS_REG Details
//          The network status register returns status information with respect to the PHY management interface.
//
// RESERVED                                                           Properties: Bits: 31:7, Type: ro, Reset Value: 0x0

                                                                   // Properties: Bit: 6, Type: ro, Reset Value: 0x0
const uintptr_t GEM_PFC_PRI_PAUSE_NEG_MASK        = 0x00000040;    // Set when PFC Priority Based Pause has been
const uintptr_t GEM_PFC_PRI_PAUSE_NEG_BPOS        = 6;             // negotiated.

                                                                   // Properties: Bit: 5, Type: ro, Reset Value: 0x0
const uintptr_t GEM_PCS_AUTONEG_PAUSE_TX_RES_MASK = 0x00000020;    // NA
const uintptr_t GEM_PCS_AUTONEG_PAUSE_TX_RES_BPOS = 5;             // 

                                                                   // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t GEM_PCS_AUTONEG_PAUSE_RX_RES_MASK = 0x00000010;    // NA
const uintptr_t GEM_PCS_AUTONEG_PAUSE_RX_RES_BPOS = 4;             // 

                                                                   // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t GEM_PCS_AUTONEG_DUP_RES_MASK      = 0x00000008;    // NA
const uintptr_t GEM_PCS_AUTONEG_DUP_RES_BPOS      = 3;             // 

                                                                   // Properties: Bit: 2, Type: ro, Reset Value: 0x1
const uintptr_t GEM_PHY_MGMT_IDLE_MASK            = 0x00000004;    // The PHY management logic is idle (i.e. has
const uintptr_t GEM_PHY_MGMT_IDLE_BPOS            = 2;             // completed).

                                                                   // Properties: Bit: 1, Type: ro, Reset Value: x
const uintptr_t GEM_MDIO_IN_PIN_STATUS_MASK       = 0x00000002;    // Returns status of the mdio_in pin
const uintptr_t GEM_MDIO_IN_PIN_STATUS_BPOS       = 1;             // 

                                                                   // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_PCS_LINK_STATE_MASK           = 0x00000001;    // NA
const uintptr_t GEM_PCS_LINK_STATE_BPOS           = 0;             // 


//------------------------------------------------------------------------------
//
// Register (GEM) DMA_CFG
//
// Name                    GEM_DMA_CFG_REG
// Software Name           XEMACPS_DMACR
// Relative Address        0x00000010
// Absolute Address        gem0: 0xE000B010
//                         gem1: 0xE000C010
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00020784
// Description             DMA Configuration
//
// Register GEM_DMA_CFG_REG Details
//
// RESERVED                                                         Properties: Bits: 31:25, Type: ro, Reset Value: 0x0

                                                                 // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t GEM_DISC_WHEN_NO_AHB_MASK       = 0x01000000;    // When set, the GEM DMA will automatically
const uintptr_t GEM_DISC_WHEN_NO_AHB_BPOS       = 24;            // discard receive packets from the receiver packet
                                                                 // buffer memory when no AHB resource is
                                                                 // available.
                                                                 // When low, then received packets will remain to be
                                                                 // stored in the SRAM based packet buffer until
                                                                 // AHB buffer resource next becomes available.

                                                                 // Properties: Bits: 23:16, Type: rw, Reset Value: 0x2
const uintptr_t GEM_AHB_MEM_RX_BUF_SIZE_MASK    = 0x00FF0000;    // DMA receive buffer size in AHB system memory.
const uintptr_t GEM_AHB_MEM_RX_BUF_SIZE_BPOS    = 16;            // The value defined by these bits determines the
                                                                 // size of buffer to use in main AHB system memory
                                                                 // when writing received data.
                                                                 // The value is defined in multiples of 64 bytes such
                                                                 // that a value of 0x01 corresponds to buffers of 64
                                                                 // bytes, 0x02 corresponds to 128 bytes etc.
                                                                 // For example:
                                                                 // 0x02: 128 byte
                                                                 // 0x18: 1536 byte (1*max length frame/buffer)
                                                                 // 0xA0: 10240 byte (1*10k jumbo frame/buffer)
                                                                 // Note that this value should never be written as
                                                                 // zero.

// RESERVED                                                         Properties: Bits: 15:12, Type: ro, Reset Value: 0x0

                                                                 // Properties: Bit: 11, Type: rw, Reset Value: 0x0
const uintptr_t GEM_CSUM_GEN_OFFLOAD_EN_MASK    = 0x00000800;    // Transmitter IP, TCP and UDP checksum
const uintptr_t GEM_CSUM_GEN_OFFLOAD_EN_BPOS    = 11;            // generation offload enable. When set, the
                                                                 // transmitter checksum generation engine is
                                                                 // enabled, to calculate and substitute checksums for
                                                                 // transmit frames. When clear, frame data is
                                                                 // unaffected.
                                                                 // If the GEM is not configured to use the DMA
                                                                 // packet buffer, this bit is not implemented and will
                                                                 // be treated as reserved, read as zero, ignored on
                                                                 // write.
                                                                 // Zynq uses packet buffer.

                                                                 // Properties: Bit: 10, Type: rw, Reset Value: 0x1
const uintptr_t GEM_TX_PKTBUF_MEMSZ_SEL_MASK    = 0x00000400;    // Transmitter packet buffer memory size select -
const uintptr_t GEM_TX_PKTBUF_MEMSZ_SEL_BPOS    = 10;            // Having this bit at zero halves the amount of
                                                                 // memory used for the transmit packet buffer. This
                                                                 // reduces the amount of memory used by the GEM.
                                                                 // It is important to set this bit to one if the full
                                                                 // configured physical memory is available. The
                                                                 // value in brackets below represents the size that
                                                                 // would result for the default maximum configured
                                                                 // memory size of 4 kB.
                                                                 // 1: Use full configured addressable space (4 kB)
                                                                 // 0: Do not use top address bit (2 kB)
                                                                 // If the GEM is not configured to use the DMA
                                                                 // packet buffer, this bit is not implemented and will
                                                                 // be treated as reserved, read as zero, ignored on
                                                                 // write. Zynq uses packet buffer.

                                                                 // Properties: Bits: 9:8, Type: rw, Reset Value: 0x3
const uintptr_t GEM_RX_PKTBUF_MEMSZ_SEL_MASK    = 0x00000300;    // Receiver packet buffer memory size select -
const uintptr_t GEM_RX_PKTBUF_MEMSZ_SEL_BPOS    = 8;             // Having these bits at less than 11 reduces the
                                                                 // amount of memory used for the receive packet
                                                                 // buffer. This reduces the amount of memory used
                                                                 // by the GEM. It is important to set these bits both
                                                                 // to one if the full configured physical memory is
                                                                 // available. The value in brackets below represents
                                                                 // the size that would result for the default
                                                                 // maximum configured memory size of 8 kBs.
                                                                 // 00: Do not use top three address bits (1 kB)
                                                                 // 01: Do not use top two address bits (2 kB)
                                                                 // 10: Do not use top address bit (4 kB)
                                                                 // 11: Use full configured addressable space (8 kB)
                                                                 // If the controller is not configured to use the DMA
                                                                 // packet buffer, these bits are not implemented and
                                                                 // will be treated as reserved, read as zero, ignored
                                                                 // on write. Zynq uses packet buffer.

                                                                 // Properties: Bit: 7, Type: rw, Reset Value: 0x1
const uintptr_t GEM_AHB_ENDIAN_SWP_PKT_EN_MASK  = 0x00000080;    // AHB endian swap mode enable for packet data
const uintptr_t GEM_AHB_ENDIAN_SWP_PKT_EN_BPOS  = 7;             // accesses - When set, selects swapped endianism
                                                                 // for AHB transfers. When clear, selects little endian
                                                                 // mode.

                                                                 // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t GEM_AHB_ENDIAN_SWP_MGMT_EN_MASK = 0x00000040;    // AHB endian swap mode enable for management
const uintptr_t GEM_AHB_ENDIAN_SWP_MGMT_EN_BPOS = 6;             // descriptor accesses - When set, selects swapped
                                                                 // endianism for AHB transfers. When clear, selects
                                                                 // little endian mode.

// RESERVED                                                         Properties: Bit: 5, Type: rw, Reset Value: 0x0

                                                                 // Properties: Bits: 4:0, Type: rw, Reset Value: 0x4
const uintptr_t GEM_AHB_FIXED_BURST_LEN_MASK    = 0x0000001F;    // AHB fixed burst length for DMA data operations
const uintptr_t GEM_AHB_FIXED_BURST_LEN_BPOS    = 0;             // - Selects the burst length to attempt to use on the
                                                                 // AHB when transferring frame data. Not used for
                                                                 // DMA management operations and only used
                                                                 // where space and data size allow. Otherwise
                                                                 // SINGLE type AHB transfers are used.
                                                                 // Upper bits become non-writeable if the
                                                                 // configured DMA TX and RX FIFO sizes are
                                                                 // smaller than required to support the selected
                                                                 // burst size.
                                                                 // One-hot priority encoding enforced automatically
                                                                 // on register writes as follows, where 'x' represents
                                                                 // don't care:
                                                                 // 00001: Always use SINGLE AHB bursts
                                                                 // 0001x: Always use SINGLE AHB bursts
                                                                 // 001xx: Attempt to use INCR4 AHB bursts
                                                                 // (default)
                                                                 // 01xxx: Attempt to use INCR8 AHB bursts
                                                                 // 1xxxx: Attempt to use INCR16 AHB bursts
                                                                 // others: reserved


//------------------------------------------------------------------------------
//
// Register (GEM) TX_STATUS
//
// Name                     GEM_TX_STATUS_REG
// Software Name            XEMACPS_TXSR
// Relative Address         0x00000014
// Absolute Address         gem0: 0xE000B014
//                          gem1: 0xE000C014
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Transmit Status
//
// Register GEM_TX_STATUS_REG Details
//         This register, when read, provides details of the status of a transmit. Once read, individual bits may be
//         cleared by writing 1 to them. It is not possible to set a bit to 1 by writing to the register.
//
// RESERVED                                                       Properties: Bits: 31:9, Type: ro, Reset Value: 0x0

                                                               // Properties: Bit: 8, Type: wtc, Reset Value: 0x0
const uintptr_t GEM_TX_HRESP_NOT_OK_MASK      = 0x00000100;    // Hresp not OK - set when the DMA block sees
const uintptr_t GEM_TX_HRESP_NOT_OK_BPOS      = 8;             // resp not OK. Cleared by writing a one to this bit.

                                                               // Properties: Bit: 7, Type: wtc, Reset Value: 0x0
const uintptr_t GEM_LATE_COLLISION_MASK       = 0x00000080;    // Late collision occurred - only set if the condition
const uintptr_t GEM_LATE_COLLISION_BPOS       = 7;             // occurs in gigabit mode, as retry is not attempted.
                                                               // Cleared by writing a one to this bit.

                                                               // Properties: Bit: 6, Type: wtc, Reset Value: 0x0
const uintptr_t GEM_TX_UNDER_RUN_MASK         = 0x00000040;    // Transmit under run - this bit is set if the
const uintptr_t GEM_TX_UNDER_RUN_BPOS         = 6;             // transmitter was forced to terminate a frame that it
                                                               // had already began transmitting due to further
                                                               // data being unavailable.
                                                               // This bit is set if a transmitter status write back has
                                                               // not completed when another status write back is
                                                               // attempted.
                                                               // When using the DMA interface configured for
                                                               // internal FIFO mode, this bit is also set when the
                                                               // transmit DMA has written the SOP data into the
                                                               // FIFO and either the AHB bus was not granted in
                                                               // time for further data, or because an AHB not OK
                                                               // response was returned, or because a used bit was
                                                               // read.
                                                               // When using the DMA interface configured for
                                                               // packet buffer mode, this bit will never be set.
                                                               // When using the external FIFO interface, this bit is
                                                               // also set when the tx_r_underflow input is
                                                               // asserted during a frame transfer. Cleared by
                                                               // writing a 1.

                                                               // Properties: Bit: 5, Type: wtc, Reset Value: 0x0
const uintptr_t GEM_TX_COMPLETE_MASK          = 0x00000020;    // Transmit complete - set when a frame has been
const uintptr_t GEM_TX_COMPLETE_BPOS          = 5;             // transmitted. Cleared by writing a one to this bit.

                                                               // Properties: Bit: 4, Type: wtc, Reset Value: 0x0
const uintptr_t GEM_TX_CORR_AHB_ERR_MASK      = 0x00000010;    // Transmit frame corruption due to AHB error - set
const uintptr_t GEM_TX_CORR_AHB_ERR_BPOS      = 4;             // if an error occurs whilst midway through reading
                                                               // transmit frame from the AHB, including HRESP
                                                               // errors and buffers exhausted mid frame (if the
                                                               // buffers run out during transmission of a frame
                                                               // then transmission stops, FCS shall be bad and
                                                               // tx_er asserted).
                                                               // Also set in DMA packet buffer mode if single
                                                               // frame is too large for configured packet buffer
                                                               // memory size.
                                                               // Cleared by writing a one to this bit.

                                                               // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t GEM_TX_GO_MASK                = 0x00000008;    // Transmit go - if high transmit is active.
const uintptr_t GEM_TX_GO_BPOS                = 3;             // When using the exposed FIFO interface, this bit
                                                               // represents bit 3 of the network control register.
                                                               // When using the DMA interface this bit represents
                                                               // the tx_go variable as specified in the transmit
                                                               // buffer description.

                                                               // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
const uintptr_t GEM_RETRY_LIMIT_EXCEEDED_MASK = 0x00000004;    // Retry limit exceeded - cleared by writing a one to
const uintptr_t GEM_RETRY_LIMIT_EXCEEDED_BPOS = 2;             // this bit.

                                                               // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
const uintptr_t GEM_COLLISION_MASK            = 0x00000002;    // Collision occurred - set by the assertion of
const uintptr_t GEM_COLLISION_BPOS            = 1;             // collision.
                                                               // Cleared by writing a one to this bit. When
                                                               // operating in 10/100 mode, this status indicates
                                                               // either a collision or a late collision. In gigabit
                                                               // mode, this status is not set for a late collision.

                                                               // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
const uintptr_t GEM_USED_BIT_READ_MASK        = 0x00000001;    // Used bit read - set when a transmit buffer
const uintptr_t GEM_USED_BIT_READ_BPOS        = 0;             // descriptor is read with its used bit set. Cleared by
                                                               // writing a one to this bit.


//------------------------------------------------------------------------------
//
// Register (GEM) RX_QBAR
//
// Name                     GEM_RX_QBAR_REG
// Software Name            XEMACPS_RXQBASE
// Relative Address         0x00000018
// Absolute Address         gem0: 0xE000B018
//                          gem1: 0xE000C018
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Receive Buffer Queue Base Address
//
// Register GEM_RX_QBAR_REG Details
//         This register holds the start address of the receive buffer queue (receive buffers descriptor list). The receive
//         buffer queue base address must be initialized before receive is enabled through bit 2 of the network control
//         register. Once reception is enabled, any write to the receive buffer queue base address register is ignored.
//         Reading this register returns the location of the descriptor currently being accessed. This value increments
//         as buffers are used. Software should not use this register for determining where to remove received frames
//         from the queue as it constantly changes as new frames are received. Software should instead work its way
//         through the buffer descriptor queue checking the 'used' bits.
//         The descriptors should be aligned at 32-bit boundaries and the descriptors are written to using two
//         individual non sequential accesses.
//
                                                        // Properties: Bits: 31:2, Type: rw, Reset Value: 0x0
const uintptr_t GEM_RX_Q_BASEADDR_MASK = 0xFFFFFFFC;    // Receive buffer queue base address - written with
const uintptr_t GEM_RX_Q_BASEADDR_BPOS = 2;             // the
                                                        // address of the start of the receive queue.

// RESERVED                                                Properties: Bits: 1:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (GEM) TX_QBAR
//
// Name                     GEM_TX_QBAR_REG
// Software Name            XEMACPS_TXQBASE
// Relative Address         0x0000001C
// Absolute Address         gem0: 0xE000B01C
//                          gem1: 0xE000C01C
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Transmit Buffer Queue Base Address
//
// Register GEM_TX_QBAR_REG Details
//         This register holds the start address of the transmit buffer queue (transmit buffers descriptor list). The
//         transmit buffer queue base address register must be initialized before transmit is started through bit 9 of
//         the network control register. Once transmission has started, any write to the transmit buffer queue base
//         address register is illegal and therefore ignored.
//         Note that due to clock boundary synchronization, it takes a maximum of four pclk cycles from the writing
//         of the transmit start bit before the transmitter is active. Writing to the transmit buffer queue base address
//         register during this time may produce unpredictable results.
//         Reading this register returns the location of the descriptor currently being accessed. Since the DMA
//         handles two frames at once, this may not necessarily be pointing to the current frame being transmitted.
//         The descriptors should be aligned at 32-bit boundaries and the descriptors are read from memory using
//         two individual non sequential accesses.
//
                                                         // Properties: Bits: 31:2, Type: rw, Reset Value: 0x0
const uintptr_t GEM_TX_Q_BASE_ADDR_MASK = 0xFFFFFFFC;    // Transmit buffer queue base address - written with
const uintptr_t GEM_TX_Q_BASE_ADDR_BPOS = 2;             // the address of the start of the transmit queue.

// RESERVED                                                 Properties: Bits: 1:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (GEM) RX_STATUS
//
// Name                     GEM_RX_STATUS_REG
// Software Name            XEMACPS_RXSR
// Relative Address         0x00000020
// Absolute Address         gem0: 0xE000B020
//                          gem1: 0xE000C020
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Receive Status
//
// Register GEM_RX_STATUS_REG Details
//         When read provides details of the status of a receive. Once read, individual bits may be cleared by writing
//         1 to them. It is not possible to set a bit to 1 by writing to the register.
//
// RESERVED                                                         Properties: Bits: 31:4, Type: ro, Reset Value: 0x0

                                                                 // Properties: Bit: 3, Type: wtc, Reset Value: 0x0
const uintptr_t RX_STATUS_RX_HRESP_NOT_OK_MASK  = 0x00000008;    // Hresp not OK - set when the DMA block sees
const uintptr_t RX_STATUS_RX_HRESP_NOT_OK_BPOS  = 3;             // hresp not OK. Cleared by writing a one to this bit.

                                                                 // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
const uintptr_t RX_STATUS_RX_OVERRUN_MASK       = 0x00000004;    // Receive overrun - this bit is set if either the
const uintptr_t RX_STATUS_RX_OVERRUN_BPOS       = 2;             // dma RX FIFO or external RX FIFO were
                                                                 // unable to store the receive frame due to a FIFO
                                                                 // overflow, or if the receive status, reported by the
                                                                 // gem_rx module to the gem_dma was not taken at
                                                                 // end of frame. This bit is also set in DMA packet
                                                                 // buffer mode if the packet buffer overflows. For
                                                                 // DMA operation the buffer will be recovered if an
                                                                 // overrun occurs. This bit is cleared by writing a
                                                                 // one to it.

                                                                 // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
const uintptr_t RX_STATUS_FRAME_RECD_MASK       = 0x00000002;    // Frame received - one or more frames have been
const uintptr_t RX_STATUS_FRAME_RECD_BPOS       = 1;             // received and placed in memory. Cleared by
                                                                 // writing a one to this bit.

                                                                 // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
const uintptr_t RX_STATUS_BUFFER_NOT_AVAIL_MASK = 0x00000001;    // Buffer not available - an attempt was made to get
const uintptr_t RX_STATUS_BUFFER_NOT_AVAIL_BPOS = 0;             // a new buffer and the pointer indicated that it was
                                                                 // owned by the processor. The DMA will reread the
                                                                 // pointer each time an end of frame is received until
                                                                 // a valid pointer is found. This bit is set following
                                                                 // each descriptor read attempt that fails, even if
                                                                 // consecutive pointers are unsuccessful and
                                                                 // software has in the mean time cleared the status
                                                                 // flag. Cleared by writing a one to this bit.


//------------------------------------------------------------------------------
//
// Register (GEM) INTR_STATUS
//
// Name                     GEM_INTR_STATUS_REG
// Software Name            XEMACPS_ISR
// Relative Address         0x00000024
// Absolute Address         gem0: 0xE000B024
//                          gem1: 0xE000C024
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Interrupt Status
//
// Register GEM_INTR_STATUS_REG Details
//            Indicates an interrupt is asserted by the controller and is enabled (unmasked).
//            0: not asserted
//            1: asserted (if any bit reads as a 1, then the ethernet_int signal will be asserted to the interrupt controller)
//
// RESERVED                                                                Properties: Bits: 31:27, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bit: 26, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_TSU_SEC_INCR_MASK          = 0x04000000;    // TSU seconds register increment - indicates the
const uintptr_t INTR_STATUS_TSU_SEC_INCR_BPOS          = 26;            // register has incremented.

                                                                        // Properties: Bit: 25, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_PDELAY_RESP_TX_MASK        = 0x02000000;    // PTP pdelay_resp frame transmitted - indicates a
const uintptr_t INTR_STATUS_PDELAY_RESP_TX_BPOS        = 25;            // PTP pdelay_resp frame has been transmitted.

                                                                        // Properties: Bit: 24, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_PDELAY_REQ_TX_MASK         = 0x01000000;    // PTP pdelay_req frame transmitted - indicates a
const uintptr_t INTR_STATUS_PDELAY_REQ_TX_BPOS         = 24;            // PTP pdelay_req frame has been transmitted.

                                                                        // Properties: Bit: 23, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_PDELAY_RESP_RX_MASK        = 0x00800000;    // PTP pdelay_resp frame received - indicates a PTP
const uintptr_t INTR_STATUS_PDELAY_RESP_RX_BPOS        = 23;            // pdelay_resp frame has been received.

                                                                        // Properties: Bit: 22, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_PDELAY_REQ_RX_MASK         = 0x00400000;    // PTP pdelay_req frame received - indicates a PTP
const uintptr_t INTR_STATUS_PDELAY_REQ_RX_BPOS         = 22;            // pdelay_req frame has been received.

                                                                        // Properties: Bit: 21, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_SYNC_TX_MASK               = 0x00200000;    // PTP sync frame transmitted - indicates a PTP sync
const uintptr_t INTR_STATUS_SYNC_TX_BPOS               = 21;            // frame has been transmitted.

                                                                        // Properties: Bit: 20, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_DELAY_REQ_TX_MASK          = 0x00100000;    // PTP delay_req frame transmitted - indicates a
const uintptr_t INTR_STATUS_DELAY_REQ_TX_BPOS          = 20;            // PTP delay_req frame has been transmitted.

                                                                        // Properties: Bit: 19, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_SYNC_RX_MASK               = 0x00080000;    // PTP sync frame received - indicates a PTP sync
const uintptr_t INTR_STATUS_SYNC_RX_BPOS               = 19;            // frame has been received.

                                                                        // Properties: Bit: 18, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_DELAY_REQ_RX_MASK          = 0x00040000;    // PTP delay_req frame received - indicates a PTP
const uintptr_t INTR_STATUS_DELAY_REQ_RX_BPOS          = 18;            // delay_req frame has been received.

                                                                        // Properties: Bit: 17, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_PARTNER_PG_RX_MASK         = 0x00020000;    // NA
const uintptr_t INTR_STATUS_PARTNER_PG_RX_BPOS         = 17;            // 

                                                                        // Properties: Bit: 16, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_AUTONEG_COMPLETE_MASK      = 0x00010000;    // NA
const uintptr_t INTR_STATUS_AUTONEG_COMPLETE_BPOS      = 16;            // 

                                                                        // Properties: Bit: 15, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_EXT_INTR_MASK              = 0x00008000;    // External interrupt - set when a rising edge has
const uintptr_t INTR_STATUS_EXT_INTR_BPOS              = 15;            // been detected on the ext_interrupt_in input pin.

                                                                        // Properties: Bit: 14, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_PAUSE_TX_MASK              = 0x00004000;    // Pause frame transmitted - indicates a pause frame
const uintptr_t INTR_STATUS_PAUSE_TX_BPOS              = 14;            // has been successfully transmitted after being
                                                                        // initiated from the network control register or from
                                                                        // the tx_pause control pin.

                                                                        // Properties: Bit: 13, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_PAUSE_ZERO_MASK            = 0x00002000;    // Pause time zero - set when either the pause time
const uintptr_t INTR_STATUS_PAUSE_ZERO_BPOS            = 13;            // register at address 0x38 decrements to zero, or
                                                                        // when a valid pause frame is received with a zero
                                                                        // pause quantum field.

                                                                        // Properties: Bit: 12, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_PAUSE_NONZEROQ_RX_MASK     = 0x00001000;    // Pause frame with non-zero pause quantum
const uintptr_t INTR_STATUS_PAUSE_NONZEROQ_RX_BPOS     = 12;            // received - indicates a valid pause has been
                                                                        // received that has a non-zero pause quantum field.

                                                                        // Properties: Bit: 11, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_HRESP_NOT_OK_MASK          = 0x00000800;    // Hresp not OK - set when the DMA block sees
const uintptr_t INTR_STATUS_HRESP_NOT_OK_BPOS          = 11;            // hresp not OK.

                                                                        // Properties: Bit: 10, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_RX_OVERRUN_MASK            = 0x00000400;    // Receive overrun - set when the receive overrun
const uintptr_t INTR_STATUS_RX_OVERRUN_BPOS            = 10;            // status bit gets set.

                                                                        // Properties: Bit: 9, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_LINK_CHNG_MASK             = 0x00000200;    // NA
const uintptr_t INTR_STATUS_LINK_CHNG_BPOS             = 9;             // 

// RESERVED                                                                Properties: Bit: 8, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bit: 7, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_TX_COMPLETE_MASK           = 0x00000080;    // Transmit complete - set when a frame has been
const uintptr_t INTR_STATUS_TX_COMPLETE_BPOS           = 7;             // transmitted.

                                                                        // Properties: Bit: 6, Type: clronrd, Reset Value: 0x0
const uintptr_t INTR_STATUS_TX_CORRUPT_AHB_ERR_MASK    = 0x00000040;    // Transmit frame corruption due to AHB error - set
const uintptr_t INTR_STATUS_TX_CORRUPT_AHB_ERR_BPOS    = 6;             // if an error occurs while midway through reading
                                                                        // transmit frame from the AHB, including HRESP
                                                                        // errors and buffers exhausted mid frame (if the
                                                                        // buffers run out during transmission of a frame
                                                                        // then transmission stops, FCS shall be bad and
                                                                        // tx_er asserted).
                                                                        // Also set in DMA packet buffer mode if single
                                                                        // frame is too large for configured packet buffer
                                                                        // memory size.
                                                                        // Cleared on a read.

                                                                        // Properties: Bit: 5, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_RETRY_EX_LATE_COLLISN_MASK = 0x00000020;    // Retry limit exceeded or late collision - transmit
const uintptr_t INTR_STATUS_RETRY_EX_LATE_COLLISN_BPOS = 5;             // error.
                                                                        // Late collision will only cause this status bit to be
                                                                        // set in gigabit mode (as a retry is not attempted).

// RESERVED                                                                Properties: Bit: 4, Type: wtc, Reset Value: 0x0

                                                                        // Properties: Bit: 3, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_TX_USED_READ_MASK          = 0x00000008;    // TX used bit read - set when a transmit buffer
const uintptr_t INTR_STATUS_TX_USED_READ_BPOS          = 3;             // descriptor is read with its used bit set.

                                                                        // Properties: Bit: 2, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_RX_USED_READ_MASK          = 0x00000004;    // RX used bit read - set when a receive buffer
const uintptr_t INTR_STATUS_RX_USED_READ_BPOS          = 2;             // descriptor is read with its used bit set.

                                                                        // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_RX_COMPLETE_MASK           = 0x00000002;    // Receive complete - a frame has been stored in
const uintptr_t INTR_STATUS_RX_COMPLETE_BPOS           = 1;             // memory.

                                                                        // Properties: Bit: 0, Type: wtc, Reset Value: 0x0
const uintptr_t INTR_STATUS_MGMT_SENT_MASK             = 0x00000001;    // Management frame sent - the PHY maintenance
const uintptr_t INTR_STATUS_MGMT_SENT_BPOS             = 0;             // register has completed its operation.


//------------------------------------------------------------------------------
//
// Register (GEM) INTR_EN
//
// Name                     GEM_INTR_EN_REG
// Software Name            XEMACPS_IER
// Relative Address         0x00000028
// Absolute Address         gem0: 0xE000B028
//                          gem1: 0xE000C028
// Width                    32 bits
// Access Type              wo
// Reset Value              x
// Description              Interrupt Enable
//
// Register GEM_INTR_EN_REG Details
//         Enable interrupts by writing a 1 to one or more bits.
//         Write a 1 to enable (unmask) the interrupt.
//         Writing 0 has no affect on the mask bit.
//         When read, this register returns zero. To control interrupt masks and read status, use the interrupt status,
//         enable, disable and mask registers together. At reset, all interrupts are disabled (masked).
//
// RESERVED                                                            Properties: Bits: 31:27, Type: wo, Reset Value: x

                                                                    // Properties: Bit: 26, Type: wo, Reset Value: x
const uintptr_t INTR_EN_TSU_SEC_INCR_MASK          = 0x04000000;    // Enable TSU seconds register increment interrupt
const uintptr_t INTR_EN_TSU_SEC_INCR_BPOS          = 26;            // 

                                                                    // Properties: Bit: 25, Type: wo, Reset Value: x
const uintptr_t INTR_EN_PDELAY_RESP_TX_MASK        = 0x02000000;    // Enable PTP pdelay_resp frame transmitted
const uintptr_t INTR_EN_PDELAY_RESP_TX_BPOS        = 25;            // interrupt

                                                                    // Properties: Bit: 24, Type: wo, Reset Value: x
const uintptr_t INTR_EN_PDELAY_REQ_TX_MASK         = 0x01000000;    // Enable PTP pdelay_req frame transmitted
const uintptr_t INTR_EN_PDELAY_REQ_TX_BPOS         = 24;            // interrupt

                                                                    // Properties: Bit: 23, Type: wo, Reset Value: x
const uintptr_t INTR_EN_PDELAY_RESP_RX_MASK        = 0x00800000;    // Enable PTP pdelay_resp frame received interrupt
const uintptr_t INTR_EN_PDELAY_RESP_RX_BPOS        = 23;            // 

                                                                    // Properties: Bit: 22, Type: wo, Reset Value: x
const uintptr_t INTR_EN_PDELAY_REQ_RX_MASK         = 0x00400000;    // Enable PTP pdelay_req frame received interrupt
const uintptr_t INTR_EN_PDELAY_REQ_RX_BPOS         = 22;            // 

                                                                    // Properties: Bit: 21, Type: wo, Reset Value: x
const uintptr_t INTR_EN_SYNC_TX_MASK               = 0x00200000;    // Enable PTP sync frame transmitted interrupt
const uintptr_t INTR_EN_SYNC_TX_BPOS               = 21;            // 

                                                                    // Properties: Bit: 20, Type: wo, Reset Value: x
const uintptr_t INTR_EN_DELAY_REQ_TX_MASK          = 0x00100000;    // Enable PTP delay_req frame transmitted
const uintptr_t INTR_EN_DELAY_REQ_TX_BPOS          = 20;            // interrupt

                                                                    // Properties: Bit: 19, Type: wo, Reset Value: x
const uintptr_t INTR_EN_SYNC_RX_MASK               = 0x00080000;    // Enable PTP sync frame received interrupt
const uintptr_t INTR_EN_SYNC_RX_BPOS               = 19;            // 

                                                                    // Properties: Bit: 18, Type: wo, Reset Value: x
const uintptr_t INTR_EN_DELAY_REQ_RX_MASK          = 0x00040000;    // Enable PTP delay_req frame received interrupt
const uintptr_t INTR_EN_DELAY_REQ_RX_BPOS          = 18;            // 

                                                                    // Properties: Bit: 17, Type: wo, Reset Value: x
const uintptr_t INTR_EN_PARTNER_PG_RX_MASK         = 0x00020000;    // NA
const uintptr_t INTR_EN_PARTNER_PG_RX_BPOS         = 17;            // 

                                                                    // Properties: Bit: 16, Type: wo, Reset Value: x
const uintptr_t INTR_EN_AUTONEG_COMPLETE_MASK      = 0x00010000;    // NA
const uintptr_t INTR_EN_AUTONEG_COMPLETE_BPOS      = 16;            // 

                                                                    // Properties: Bit: 15, Type: wo, Reset Value: x
const uintptr_t INTR_EN_EXT_INTR_MASK              = 0x00008000;    // Enable external interrupt
const uintptr_t INTR_EN_EXT_INTR_BPOS              = 15;            // 

                                                                    // Properties: Bit: 14, Type: wo, Reset Value: x
const uintptr_t INTR_EN_PAUSE_TX_MASK              = 0x00004000;    // Enable pause frame transmitted interrupt
const uintptr_t INTR_EN_PAUSE_TX_BPOS              = 14;            // 

                                                                    // Properties: Bit: 13, Type: wo, Reset Value: x
const uintptr_t INTR_EN_PAUSE_ZERO_MASK            = 0x00002000;    // Enable pause time zero interrupt
const uintptr_t INTR_EN_PAUSE_ZERO_BPOS            = 13;            // 

                                                                    // Properties: Bit: 12, Type: wo, Reset Value: x
const uintptr_t INTR_EN_PAUSE_NONZEROQ_MASK        = 0x00001000;    // Enable pause frame with non-zero pause
const uintptr_t INTR_EN_PAUSE_NONZEROQ_BPOS        = 12;            // quantum interrupt

                                                                    // Properties: Bit: 11, Type: wo, Reset Value: x
const uintptr_t INTR_EN_HRESP_NOT_OK_MASK          = 0x00000800;    // Enable hresp not OK interrupt
const uintptr_t INTR_EN_HRESP_NOT_OK_BPOS          = 11;            // 

                                                                    // Properties: Bit: 10, Type: wo, Reset Value: x
const uintptr_t INTR_EN_RX_OVERRUN_MASK            = 0x00000400;    // Enable receive overrun interrupt
const uintptr_t INTR_EN_RX_OVERRUN_BPOS            = 10;            // 

                                                                    // Properties: Bit: 9, Type: wo, Reset Value: x
const uintptr_t INTR_EN_LINK_CHNG_MASK             = 0x00000200;    // Enable link change interrupt
const uintptr_t INTR_EN_LINK_CHNG_BPOS             = 9;             // 

// RESERVED                                                            Properties: Bit: 8, Type: wo, Reset Value: x

                                                                    // Properties: Bit: 7, Type: wo, Reset Value: x
const uintptr_t INTR_EN_TX_COMPLETE_MASK           = 0x00000080;    // Enable transmit complete interrupt
const uintptr_t INTR_EN_TX_COMPLETE_BPOS           = 7;             // 

                                                                    // Properties: Bit: 6, Type: wo, Reset Value: x
const uintptr_t INTR_EN_TX_CORRUPT_AHB_ERR_MASK    = 0x00000040;    // Enable transmit frame corruption due to AHB
const uintptr_t INTR_EN_TX_CORRUPT_AHB_ERR_BPOS    = 6;             // error interrupt

                                                                    // Properties: Bit: 5, Type: wo, Reset Value: x
const uintptr_t INTR_EN_RETRY_EX_LATE_COLLISN_MASK = 0x00000020;    // Enable retry limit exceeded or late collision
const uintptr_t INTR_EN_RETRY_EX_LATE_COLLISN_BPOS = 5;             // interrupt

                                                                    // Properties: Bit: 4, Type: wo, Reset Value: x
const uintptr_t INTR_EN_TX_UNDERRUN_MASK           = 0x00000010;    // Enable transmit buffer under run interrupt
const uintptr_t INTR_EN_TX_UNDERRUN_BPOS           = 4;             // 

                                                                    // Properties: Bit: 3, Type: wo, Reset Value: x
const uintptr_t INTR_EN_TX_USED_READ_MASK          = 0x00000008;    // Enable transmit used bit read interrupt
const uintptr_t INTR_EN_TX_USED_READ_BPOS          = 3;             // 

                                                                    // Properties: Bit: 2, Type: wo, Reset Value: x
const uintptr_t INTR_EN_RX_USED_READ_MASK          = 0x00000004;    // Enable receive used bit read interrupt
const uintptr_t INTR_EN_RX_USED_READ_BPOS          = 2;             // 

                                                                    // Properties: Bit: 1, Type: wo, Reset Value: x
const uintptr_t INTR_EN_RX_COMPLETE_MASK           = 0x00000002;    // Enable receive complete interrupt
const uintptr_t INTR_EN_RX_COMPLETE_BPOS           = 1;             // 

                                                                    // Properties: Bit: 0, Type: wo, Reset Value: x
const uintptr_t INTR_EN_MGMT_DONE_MASK             = 0x00000001;    // Enable management done interrupt
const uintptr_t INTR_EN_MGMT_DONE_BPOS             = 0;             // 


//------------------------------------------------------------------------------
//
// Register (GEM) INTR_DIS
//
// Name                     GEM_INTR_DIS_REG
// Software Name            XEMACPS_IDR
// Relative Address         0x0000002C
// Absolute Address         gem0: 0xE000B02C
//                          gem1: 0xE000C02C
// Width                    32 bits
// Access Type              wo
// Reset Value              x
// Description              Interrupt Disable
//
// Register GEM_INTR_DIS_REG Details
//         Disable interrupts by applying a mask to one or more bits.
//         Write 1 to disable (mask) the interrupt.
//         Writing 0 has no affect on the mask bit.
//         When read, this register returns zero.
//
// RESERVED                                                             Properties: Bits: 31:27, Type: wo, Reset Value: x

                                                                     // Properties: Bit: 26, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_TSU_SEC_INCR_MASK          = 0x04000000;    // Disable TSU seconds register increment interrupt
const uintptr_t INTR_DIS_TSU_SEC_INCR_BPOS          = 26;            // 

                                                                     // Properties: Bit: 25, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_PDELAY_RESP_TX_MASK        = 0x02000000;    // Disable PTP pdelay_resp frame transmitted
const uintptr_t INTR_DIS_PDELAY_RESP_TX_BPOS        = 25;            // interrupt

                                                                     // Properties: Bit: 24, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_PDELAY_REQ_TX_MASK         = 0x01000000;    // Disable PTP pdelay_req frame transmitted
const uintptr_t INTR_DIS_PDELAY_REQ_TX_BPOS         = 24;            // interrupt

                                                                     // Properties: Bit: 23, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_PDELAY_RESP_RX_MASK        = 0x00800000;    // Disable PTP pdelay_resp frame received interrupt
const uintptr_t INTR_DIS_PDELAY_RESP_RX_BPOS        = 23;            // 

                                                                     // Properties: Bit: 22, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_PDELAY_REQ_RX_MASK         = 0x00400000;    // Disable PTP pdelay_req frame received interrupt
const uintptr_t INTR_DIS_PDELAY_REQ_RX_BPOS         = 22;            // 

                                                                     // Properties: Bit: 21, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_SYNC_TX_MASK               = 0x00200000;    // Disable PTP sync frame transmitted interrupt
const uintptr_t INTR_DIS_SYNC_TX_BPOS               = 21;            // 

                                                                     // Properties: Bit: 20, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_DELAY_REQ_TX_MASK          = 0x00100000;    // Disable PTP delay_req frame transmitted
const uintptr_t INTR_DIS_DELAY_REQ_TX_BPOS          = 20;            // interrupt

                                                                     // Properties: Bit: 19, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_SYNC_RX_MASK               = 0x00080000;    // Disable PTP sync frame received interrupt
const uintptr_t INTR_DIS_SYNC_RX_BPOS               = 19;            // 

                                                                     // Properties: Bit: 18, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_DELAY_REQ_RX_MASK          = 0x00040000;    // Disable PTP delay_req frame received interrupt
const uintptr_t INTR_DIS_DELAY_REQ_RX_BPOS          = 18;            // 

                                                                     // Properties: Bit: 17, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_PARTNER_PG_RX_MASK         = 0x00020000;    // NA
const uintptr_t INTR_DIS_PARTNER_PG_RX_BPOS         = 17;            // 

                                                                     // Properties: Bit: 16, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_AUTONEG_COMPLETE_MASK      = 0x00010000;    // NA
const uintptr_t INTR_DIS_AUTONEG_COMPLETE_BPOS      = 16;            // 

                                                                     // Properties: Bit: 15, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_EXT_INTR_MASK              = 0x00008000;    // Disable external interrupt
const uintptr_t INTR_DIS_EXT_INTR_BPOS              = 15;            // 

                                                                     // Properties: Bit: 14, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_PAUSE_TX_MASK              = 0x00004000;    // Disable pause frame transmitted interrupt
const uintptr_t INTR_DIS_PAUSE_TX_BPOS              = 14;            // 

                                                                     // Properties: Bit: 13, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_PAUSE_ZERO_MASK            = 0x00002000;    // Disable pause time zero interrupt
const uintptr_t INTR_DIS_PAUSE_ZERO_BPOS            = 13;            // 

                                                                     // Properties: Bit: 12, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_PAUSE_NONZEROQ_MASK        = 0x00001000;    // Disable pause frame with non-zero pause
const uintptr_t INTR_DIS_PAUSE_NONZEROQ_BPOS        = 12;            // quantum interrupt

                                                                     // Properties: Bit: 11, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_HRESP_NOT_OK_MASK          = 0x00000800;    // Disable hresp not OK interrupt
const uintptr_t INTR_DIS_HRESP_NOT_OK_BPOS          = 11;            // 

                                                                     // Properties: Bit: 10, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_RX_OVERRUN_MASK            = 0x00000400;    // Disable receive overrun interrupt
const uintptr_t INTR_DIS_RX_OVERRUN_BPOS            = 10;            // 

                                                                     // Properties: Bit: 9, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_LINK_CHNG_MASK             = 0x00000200;    // Disable link change interrupt
const uintptr_t INTR_DIS_LINK_CHNG_BPOS             = 9;             // 

// RESERVED                                                             Properties: Bit: 8, Type: wo, Reset Value: x

                                                                     // Properties: Bit: 7, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_TX_COMPLETE_MASK           = 0x00000080;    // Disable transmit complete interrupt
const uintptr_t INTR_DIS_TX_COMPLETE_BPOS           = 7;             // 

                                                                     // Properties: Bit: 6, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_TX_CORRUPT_AHB_ERR_MASK    = 0x00000040;    // Disable transmit frame corruption due to AHB
const uintptr_t INTR_DIS_TX_CORRUPT_AHB_ERR_BPOS    = 6;             // error interrupt

                                                                     // Properties: Bit: 5, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_RETRY_EX_LATE_COLLISN_MASK = 0x00000020;    // Disable retry limit exceeded or late collision
const uintptr_t INTR_DIS_RETRY_EX_LATE_COLLISN_BPOS = 5;             // interrupt

                                                                     // Properties: Bit: 4, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_TX_UNDERRUN_MASK           = 0x00000010;    // Disable transmit buffer under run interrupt
const uintptr_t INTR_DIS_TX_UNDERRUN_BPOS           = 4;             // 

                                                                     // Properties: Bit: 3, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_TX_USED_READ_MASK          = 0x00000008;    // Disable transmit used bit read interrupt
const uintptr_t INTR_DIS_TX_USED_READ_BPOS          = 3;             // 

                                                                     // Properties: Bit: 2, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_RX_USED_READ_MASK          = 0x00000004;    // Disable receive used bit read interrupt
const uintptr_t INTR_DIS_RX_USED_READ_BPOS          = 2;             // 

                                                                     // Properties: Bit: 1, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_RX_COMPLETE_MASK           = 0x00000002;    // Disable receive complete interrupt
const uintptr_t INTR_DIS_RX_COMPLETE_BPOS           = 1;             // 

                                                                     // Properties: Bit: 0, Type: wo, Reset Value: x
const uintptr_t INTR_DIS_MGMT_DONE_MASK             = 0x00000001;    // Disable management done interrupt
const uintptr_t INTR_DIS_MGMT_DONE_BPOS             = 0;             // 


//------------------------------------------------------------------------------
//
// Register (GEM) INTR_MASK
//
// Name                    GEM_INTR_MASK_REG
// Software Name           XEMACPS_IMR
// Relative Address        0x00000030
// Absolute Address        gem0: 0xE000B030
//                         gem1: 0xE000C030
// Width                   32 bits
// Access Type             mixed
// Reset Value             x
// Description                 Interrupt Mask Status
//
// Register GEM_INTR_MASK_REG Details
//            Indicates the mask state of each interrupt.
//            0: interrupt non masked (enabled)
//            1: interrupt masked (disabled), reset default
//            All interrupts are disabled after a module reset. The interrupt masks are individually controlled using the
//            write-only interrupt enable and disable registers.
//            For test purposes there is a write-only function to the interrupt mask register that allows the bits in the
//            interrupt status register to be set or cleared, regardless of the state of the mask register.
//
// RESERVED                                                              Properties: Bits: 31:26, Type: ro, Reset Value: 0x0

                                                                      // Properties: Bit: 25, Type: ro,wo, Reset Value: x
const uintptr_t INTR_MASK_PDELAY_RESP_TX_MASK        = 0x02000000;    // PTP pdelay_resp frame transmitted mask.
const uintptr_t INTR_MASK_PDELAY_RESP_TX_BPOS        = 25;            // 

                                                                      // Properties: Bit: 24, Type: ro,wo, Reset Value: x
const uintptr_t INTR_MASK_PDELAY_REQ_TX_MASK         = 0x01000000;    // PTP pdelay_req frame transmitted mask.
const uintptr_t INTR_MASK_PDELAY_REQ_TX_BPOS         = 24;            // 

                                                                      // Properties: Bit: 23, Type: ro,wo, Reset Value: x
const uintptr_t INTR_MASK_PDELAY_RESP_RX_MASK        = 0x00800000;    // PTP pdelay_resp frame received mask.
const uintptr_t INTR_MASK_PDELAY_RESP_RX_BPOS        = 23;            // 

                                                                      // Properties: Bit: 22, Type: ro,wo, Reset Value: x
const uintptr_t INTR_MASK_PDELAY_REQ_RX_MASK         = 0x00400000;    // PTP pdelay_req frame received mask.
const uintptr_t INTR_MASK_PDELAY_REQ_RX_BPOS         = 22;            // 

                                                                      // Properties: Bit: 21, Type: ro,wo, Reset Value: x
const uintptr_t INTR_MASK_SYNC_TX_MASK               = 0x00200000;    // PTP sync frame transmitted mask.
const uintptr_t INTR_MASK_SYNC_TX_BPOS               = 21;            // 

                                                                      // Properties: Bit: 20, Type: ro,wo, Reset Value: x
const uintptr_t INTR_MASK_DELAY_REQ_TX_MASK          = 0x00100000;    // PTP delay_req frame transmitted mask.
const uintptr_t INTR_MASK_DELAY_REQ_TX_BPOS          = 20;            // 

                                                                      // Properties: Bit: 19, Type: ro,wo, Reset Value: x
const uintptr_t INTR_MASK_SYNC_RX_MASK               = 0x00080000;    // PTP sync frame received mask.
const uintptr_t INTR_MASK_SYNC_RX_BPOS               = 19;            // 

                                                                      // Properties: Bit: 18, Type: ro,wo, Reset Value: x
const uintptr_t INTR_MASK_DELAY_REQ_RX_MASK          = 0x00040000;    // PTP delay_req frame received mask.
const uintptr_t INTR_MASK_DELAY_REQ_RX_BPOS          = 18;            // 

                                                                      // Properties: Bit: 17, Type: ro,wo, Reset Value: x
const uintptr_t INTR_MASK_PARTNER_PG_RX_MASK         = 0x00020000;    // NA
const uintptr_t INTR_MASK_PARTNER_PG_RX_BPOS         = 17;            // 

                                                                      // Properties: Bit: 16, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_AUTONEG_COMPLETE_MASK      = 0x00010000;    // NA
const uintptr_t INTR_MASK_AUTONEG_COMPLETE_BPOS      = 16;            // 

                                                                      // Properties: Bit: 15, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_EXT_INTR_MASK              = 0x00008000;    // External interrupt mask.
const uintptr_t INTR_MASK_EXT_INTR_BPOS              = 15;            // 

                                                                      // Properties: Bit: 14, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_PAUSE_TX_MASK              = 0x00004000;    // Pause frame transmitted interrupt mask.
const uintptr_t INTR_MASK_PAUSE_TX_BPOS              = 14;            // 

                                                                      // Properties: Bit: 13, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_PAUSE_ZERO_MASK            = 0x00002000;    // Pause time zero interrupt mask.
const uintptr_t INTR_MASK_PAUSE_ZERO_BPOS            = 13;            // 

                                                                      // Properties: Bit: 12, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_PAUSE_NONZEROQ_MASK        = 0x00001000;    // Pause frame with non-zero pause quantum
const uintptr_t INTR_MASK_PAUSE_NONZEROQ_BPOS        = 12;            // interrupt mask.

                                                                      // Properties: Bit: 11, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_HRESP_NOT_OK_MASK          = 0x00000800;    // Hresp not OK interrupt mask.
const uintptr_t INTR_MASK_HRESP_NOT_OK_BPOS          = 11;            // 

                                                                      // Properties: Bit: 10, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_RX_OVERRUN_MASK            = 0x00000400;    // Receive overrun interrupt mask.
const uintptr_t INTR_MASK_RX_OVERRUN_BPOS            = 10;            // 

                                                                      // Properties: Bit: 9, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_LINK_CHNG_MASK             = 0x00000200;    // Link change interrupt mask.
const uintptr_t INTR_MASK_LINK_CHNG_BPOS             = 9;             // 

// RESERVED                                                              Properties: Bit: 8, Type: ro,wo, Reset Value: 0x1

                                                                      // Properties: Bit: 7, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_TX_COMPLETE_MASK           = 0x00000080;    // Transmit complete interrupt mask.
const uintptr_t INTR_MASK_TX_COMPLETE_BPOS           = 7;             // 

                                                                      // Properties: Bit: 6, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_TX_CORRUPT_AHB_ERR_MASK    = 0x00000040;    // Transmit frame corruption due to AHB error
const uintptr_t INTR_MASK_TX_CORRUPT_AHB_ERR_BPOS    = 6;             // interrupt

                                                                      // Properties: Bit: 5, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_RETRY_EX_LATE_COLLISN_MASK = 0x00000020;    // Retry limit exceeded or late collision (gigabit
const uintptr_t INTR_MASK_RETRY_EX_LATE_COLLISN_BPOS = 5;             // mode only)

                                                                      // Properties: Bit: 4, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_TX_UNDERRUN_MASK           = 0x00000010;    // Transmit buffer under run interrupt mask.
const uintptr_t INTR_MASK_TX_UNDERRUN_BPOS           = 4;             // 

                                                                      // Properties: Bit: 3, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_TX_USED_READ_MASK          = 0x00000008;    // Transmit used bit read interrupt mask.
const uintptr_t INTR_MASK_TX_USED_READ_BPOS          = 3;             // 

                                                                      // Properties: Bit: 2, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_RX_USED_READ_MASK          = 0x00000004;    // Receive used bit read interrupt mask.
const uintptr_t INTR_MASK_RX_USED_READ_BPOS          = 2;             // 

                                                                      // Properties: Bit: 1, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_RX_COMPLETE_MASK           = 0x00000002;    // Receive complete interrupt mask.
const uintptr_t INTR_MASK_RX_COMPLETE_BPOS           = 1;             // 

                                                                      // Properties: Bit: 0, Type: ro,wo, Reset Value: 0x1
const uintptr_t INTR_MASK_MGMT_DONE_MASK             = 0x00000001;    // Management done interrupt mask.
const uintptr_t INTR_MASK_MGMT_DONE_BPOS             = 0;             // 


//------------------------------------------------------------------------------
//
// Register (GEM) PHY_MAINT
//
// Name                     GEM_PHY_MAINT_REG
// Software Name            XEMACPS_PHYMNTNC
// Relative Address         0x00000034
// Absolute Address         gem0: 0xE000B034
//                          gem1: 0xE000C034
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              PHY Maintenance
//
// Register GEM_PHY_MAINT_REG Details
//         The PHY maintenance register is implemented as a shift register. Writing to the register starts a shift
//         operation, which is signaled as complete when bit-2 is set in the network status register. It takes about 2000
//         pclk cycles to complete, when MDC is set for pclk divide by 32 in the network configuration register. An
//         interrupt is generated upon completion. During this time, the MSB of the register is output on the MDIO
//         pin and the LSB updated from the MDIO pin with each MDC cycle. This causes transmission of a PHY
//         management frame on MDIO. See Section 22.2.4.5 of the IEEE 802.3 standard. Reading during the shift
//         operation will return the current contents of the shift register. At the end of management operation, the bits
//         will have shifted back to their original locations. For a read operation, the data bits will be updated with
//         data read from the PHY. It is important to write the correct values to the register to ensure a valid PHY
//         management frame is produced.
//
// RESERVED                                            Properties: Bit: 31, Type: rw, Reset Value: 0x0

                                                    // Properties: Bit: 30, Type: rw, Reset Value: 0x0
const uintptr_t GEM_CLAUSE_22_MASK = 0x40000000;    // Must be written to 1 for Clause 22 operation.
const uintptr_t GEM_CLAUSE_22_BPOS = 30;            // Check your PHY's spec to see if it is clause 22 or
                                                    // clause 45 compliant.

                                                    // Properties: Bits: 29:28, Type: rw, Reset Value: 0x0
const uintptr_t GEM_OPERATION_MASK = 0x30000000;    // Operation. 10 is read. 01 is write.
const uintptr_t GEM_OPERATION_BPOS = 28;            // 

                                                    // Properties: Bits: 27:23, Type: rw, Reset Value: 0x0
const uintptr_t GEM_PHY_ADDR_MASK  = 0x0F800000;    // PHY address.
const uintptr_t GEM_PHY_ADDR_BPOS  = 23;            // 

                                                    // Properties: Bits: 22:18, Type: rw, Reset Value: 0x0
const uintptr_t GEM_REG_ADDR_MASK  = 0x007C0000;    // Register address - specifies the register in the PHY
const uintptr_t GEM_REG_ADDR_BPOS  = 18;            // to access.

                                                    // Properties: Bits: 17:16, Type: rw, Reset Value: 0x0
const uintptr_t GEM_MUST_10_MASK   = 0x00030000;    // Must be written to 10.
const uintptr_t GEM_MUST_10_BPOS   = 16;            // 

                                                    // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_DATA_MASK      = 0x0000FFFF;    // For a write operation this is written with the data
const uintptr_t GEM_DATA_BPOS      = 0;             // to be written to the PHY. After a read operation
                                                    // this contains the data read from the PHY.


//------------------------------------------------------------------------------
//
// Register (GEM) RX_PAUSEQ
//
// Name                    GEM_RX_PAUSEQ_REG
// Software Name           XEMACPS_RXPAUSE
// Relative Address        0x00000038
// Absolute Address        gem0: 0xE000B038
//                         gem1: 0xE000C038
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Received Pause Quantum
//
// Register GEM_RX_PAUSEQ_REG Details
//
// RESERVED                                            Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                    // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_RX_PAUSEQ_MASK = 0x0000FFFF;    // Received pause quantum - stores the current
const uintptr_t GEM_RX_PAUSEQ_BPOS = 0;             // value of the received pause quantum register
                                                    // which is decremented every 512 bit times.


//------------------------------------------------------------------------------
//
// Register (GEM) TX_PAUSEQ
//
// Name                    GEM_TX_PAUSEQ_REG
// Software Name           XEMACPS_TXPAUSE
// Relative Address        0x0000003C
// Absolute Address        gem0: 0xE000B03C
//                         gem1: 0xE000C03C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x0000FFFF
// Description             Transmit Pause Quantum
//
// Register GEM_TX_PAUSEQ_REG Details
//
// RESERVED                                            Properties: Bits: 31:16, Type: rw, Reset Value: 0x0

                                                    // Properties: Bits: 15:0, Type: rw, Reset Value: 0xFFFF
const uintptr_t GEM_TX_PAUSEQ_MASK = 0x0000FFFF;    // Transmit pause quantum - written with the pause
const uintptr_t GEM_TX_PAUSEQ_BPOS = 0;             // quantum value for pause frame transmission.


//------------------------------------------------------------------------------
//
// Register (GEM) HASH_BOT
//
// Name                     GEM_HASH_BOT_REG
// Software Name            XEMACPS_HASHL
// Relative Address         0x00000080
// Absolute Address         gem0: 0xE000B080
//                          gem1: 0xE000C080
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Hash Register Bottom [31:0]
//
// Register GEM_HASH_BOT_REG Details
//         The unicast hash enable and the multicast hash enable bits in the network configuration register enable the
//         reception of hash matched frames.
//
                                                       // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_HASH_BOT_VAL_MASK = 0xFFFFFFFF;    // The first 32 bits of the hash address register.
const uintptr_t GEM_HASH_BOT_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (GEM) HASH_TOP
//
// Name                     GEM_HASH_TOP_REG
// Software Name            XEMACPS_HASHH
// Relative Address         0x00000084
// Absolute Address         gem0: 0xE000B084
//                          gem1: 0xE000C084
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Hash Register Top [63:32]
//
// Register GEM_HASH_TOP_REG Details
//         The unicast hash enable and the multicast hash enable bits in the network configuration register enable the
//         reception of hash matched frames.
//
                                                       // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_HASH_TOP_VAL_MASK = 0xFFFFFFFF;    // The remaining 32 bits of the hash address register.
const uintptr_t GEM_HASH_TOP_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (GEM) SPEC_ADDR1_BOT
//
// Name                    GEM_SPEC_ADDR1_BOT_REG
// Software Name           XEMACPS_LADDR1L
// Relative Address        0x00000088
// Absolute Address        gem0: 0xE000B088
//                         gem1: 0xE000C088
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Specific Address 1 Bottom [31:0]
//
// Register GEM_SPEC_ADDR1_BOT_REG Details
//
                                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_SPEC_ADDR1_BOT_VAL_MASK = 0xFFFFFFFF;    // Least significant 32 bits of the destination address,
const uintptr_t GEM_SPEC_ADDR1_BOT_VAL_BPOS = 0;             // that is bits 31:0. Bit zero indicates whether the
                                                             // address is multicast or unicast and corresponds to
                                                             // the least significant bit of the first byte received.


//------------------------------------------------------------------------------
//
// Register (GEM) SPEC_ADDR1_TOP
//
// Name                    GEM_SPEC_ADDR1_TOP_REG
// Software Name           XEMACPS_LADDR1H
// Relative Address        0x0000008C
// Absolute Address        gem0: 0xE000B08C
//                         gem1: 0xE000C08C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Specific Address 1 Top [47:32]
//
// Register GEM_SPEC_ADDR1_TOP_REG Details
//
// RESERVED                                                     Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                             // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_SPEC_ADDR1_TOP_VAL_MASK = 0x0000FFFF;    // Specific address 1. The most significant bits of the
const uintptr_t GEM_SPEC_ADDR1_TOP_VAL_BPOS = 0;             // destination address, that is bits 47:32.


//------------------------------------------------------------------------------
//
// Register (GEM) SPEC_ADDR2_BOT
//
// Name                    GEM_SPEC_ADDR2_BOT_REG
// Software Name           XEMACPS_LADDR2L
// Relative Address        0x00000090
// Absolute Address        gem0: 0xE000B090
//                         gem1: 0xE000C090
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Specific Address 2 Bottom [31:0]
//
// Register GEM_SPEC_ADDR2_BOT_REG Details
//
                                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_SPEC_ADDR2_BOT_VAL_MASK = 0xFFFFFFFF;    // Least significant 32 bits of the destination address,
const uintptr_t GEM_SPEC_ADDR2_BOT_VAL_BPOS = 0;             // that is bits 31:0. Bit zero indicates whether the
                                                             // address is multicast or unicast and corresponds to
                                                             // the least significant bit of the first byte received.


//------------------------------------------------------------------------------
//
// Register (GEM) SPEC_ADDR2_TOP
//
// Name                    GEM_SPEC_ADDR2_TOP_REG
// Software Name           XEMACPS_LADDR2H
// Relative Address        0x00000094
// Absolute Address        gem0: 0xE000B094
//                         gem1: 0xE000C094
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Specific Address 2 Top [47:32]
//
// Register GEM_SPEC_ADDR2_TOP_REG Details
//
// RESERVED                                                     Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                             // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_SPEC_ADDR2_TOP_VAL_MASK = 0x0000FFFF;    // Specific address 2. The most significant bits of the
const uintptr_t GEM_SPEC_ADDR2_TOP_VAL_BPOS = 0;             // destination address, that is bits 47:32.


//------------------------------------------------------------------------------
//
// Register (GEM) SPEC_ADDR3_BOT
//
// Name                    GEM_SPEC_ADDR3_BOT_REG
// Software Name           XEMACPS_LADDR3L
// Relative Address        0x00000098
// Absolute Address        gem0: 0xE000B098
//                         gem1: 0xE000C098
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Specific Address 3 Bottom [31:0]
//
// Register GEM_SPEC_ADDR3_BOT_REG Details
//
                                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_SPEC_ADDR3_BOT_VAL_MASK = 0xFFFFFFFF;    // Least significant 32 bits of the destination address,
const uintptr_t GEM_SPEC_ADDR3_BOT_VAL_BPOS = 0;             // that is bits 31:0. Bit zero indicates whether the
                                                             // address is multicast or unicast and corresponds to
                                                             // the least significant bit of the first byte received.


//------------------------------------------------------------------------------
//
// Register (GEM) SPEC_ADDR3_TOP
//
// Name                    GEM_SPEC_ADDR3_TOP_REG
// Software Name           XEMACPS_LADDR3H
// Relative Address        0x0000009C
// Absolute Address        gem0: 0xE000B09C
//                         gem1: 0xE000C09C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Specific Address 3 Top [47:32]
//
// Register GEM_SPEC_ADDR3_TOP_REG Details
//
// RESERVED                                                     Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                             // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_SPEC_ADDR3_TOP_VAL_MASK = 0x0000FFFF;    // Specific address 3. The most significant bits of the
const uintptr_t GEM_SPEC_ADDR3_TOP_VAL_BPOS = 0;             // destination address, that is bits 47:32.


//------------------------------------------------------------------------------
//
// Register (GEM) SPEC_ADDR4_BOT
//
// Name                    GEM_SPEC_ADDR4_BOT_REG
// Software Name           XEMACPS_LADDR4L
// Relative Address        0x000000A0
// Absolute Address        gem0: 0xE000B0A0
//                         gem1: 0xE000C0A0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Specific Address 4 Bottom [31:0]
//
// Register GEM_SPEC_ADDR4_BOT_REG Details
//
                                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_SPEC_ADDR4_BOT_VAL_MASK = 0xFFFFFFFF;    // Least significant 32 bits of the destination address,
const uintptr_t GEM_SPEC_ADDR4_BOT_VAL_BPOS = 0;             // that is bits 31:0. Bit zero indicates whether the
                                                             // address is multicast or unicast and corresponds to
                                                             // the least significant bit of the first byte received.


//------------------------------------------------------------------------------
//
// Register (GEM) SPEC_ADDR4_TOP
//
// Name                    GEM_SPEC_ADDR4_TOP_REG
// Software Name           XEMACPS_LADDR4H
// Relative Address        0x000000A4
// Absolute Address        gem0: 0xE000B0A4
//                         gem1: 0xE000C0A4
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Specific Address 4 Top [47:32]
//
// Register GEM_SPEC_ADDR4_TOP_REG Details
//
// RESERVED                                                     Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                             // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_SPEC_ADDR4_TOP_VAL_MASK = 0x0000FFFF;    // Specific address 4. The most significant bits of the
const uintptr_t GEM_SPEC_ADDR4_TOP_VAL_BPOS = 0;             // destination address, that is bits 47:32.


//------------------------------------------------------------------------------
//
// Register (GEM) TYPE_ID_MATCH1
//
// Name                    GEM_TYPE_ID_MATCH1_REG
// Software Name           XEMACPS_MATCH1
// Relative Address        0x000000A8
// Absolute Address        gem0: 0xE000B0A8
//                         gem1: 0xE000C0A8
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Type ID Match 1
//
// Register GEM_TYPE_ID_MATCH1_REG Details
//
                                                                        // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t GEM_TYPE_ID_MATCH1_COPY_EN_MASK        = 0x80000000;    // Enable copying of type ID match 1 matched
const uintptr_t GEM_TYPE_ID_MATCH1_COPY_EN_BPOS        = 31;            // frames

// RESERVED                                                                Properties: Bits: 30:16, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_TYPE_ID_MATCH1_TYPE_ID_MATCH1_MASK = 0x0000FFFF;    // Type ID match 1. For use in comparisons with
const uintptr_t GEM_TYPE_ID_MATCH1_TYPE_ID_MATCH1_BPOS = 0;             // received frames type ID/length field.


//------------------------------------------------------------------------------
//
// Register (GEM) TYPE_ID_MATCH2
//
// Name                    GEM_TYPE_ID_MATCH2_REG
// Software Name           XEMACPS_MATCH2
// Relative Address        0x000000AC
// Absolute Address        gem0: 0xE000B0AC
//                         gem1: 0xE000C0AC
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Type ID Match 2
//
// Register GEM_TYPE_ID_MATCH2_REG Details
//
                                                                        // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t GEM_TYPE_ID_MATCH2_COPY_EN_MASK        = 0x80000000;    // Enable copying of type ID match 2 matched
const uintptr_t GEM_TYPE_ID_MATCH2_COPY_EN_BPOS        = 31;            // frames

// RESERVED                                                                Properties: Bits: 30:16, Type: ro, Reset Value: 0x0

                                                                        // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_TYPE_ID_MATCH2_TYPE_ID_MATCH2_MASK = 0x0000FFFF;    // Type ID match 2. For use in comparisons with
const uintptr_t GEM_TYPE_ID_MATCH2_TYPE_ID_MATCH2_BPOS = 0;             // received frames type ID/length field.


//------------------------------------------------------------------------------
//
// Register (GEM) TYPE_ID_MATCH3
//
// Name                    GEM_TYPE_ID_MATCH3_REG
// Software Name           XEMACPS_MATCH3
// Relative Address        0x000000B0
// Absolute Address        gem0: 0xE000B0B0
//                         gem1: 0xE000C0B0
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Type ID Match 3
//
// Register GEM_TYPE_ID_MATCH3_REG Details
//
                                                                    // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t TYPE_ID_MATCH3_COPY_EN_MASK        = 0x80000000;    // Enable copying of type ID match 3 matched
const uintptr_t TYPE_ID_MATCH3_COPY_EN_BPOS        = 31;            // frames

// RESERVED                                                            Properties: Bits: 30:16, Type: ro, Reset Value: 0x0

                                                                    // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TYPE_ID_MATCH3_TYPE_ID_MATCH3_MASK = 0x0000FFFF;    // Type ID match 3. For use in comparisons with
const uintptr_t TYPE_ID_MATCH3_TYPE_ID_MATCH3_BPOS = 0;             // received frames type ID/length field.


//------------------------------------------------------------------------------
//
// Register (GEM) TYPE_ID_MATCH4
//
// Name                    GEM_TYPE_ID_MATCH4_REG
// Software Name           XEMACPS_MATCH4
// Relative Address        0x000000B4
// Absolute Address        gem0: 0xE000B0B4
//                         gem1: 0xE000C0B4
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Type ID Match 4
//
// Register GEM_TYPE_ID_MATCH4_REG Details
//
                                                                    // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t TYPE_ID_MATCH4_COPY_EN_MASK        = 0x80000000;    // Enable copying of type ID match 4 matched
const uintptr_t TYPE_ID_MATCH4_COPY_EN_BPOS        = 31;            // frames

// RESERVED                                                            Properties: Bits: 30:16, Type: ro, Reset Value: 0x0

                                                                    // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t TYPE_ID_MATCH4_TYPE_ID_MATCH4_MASK = 0x0000FFFF;    // Type ID match 4. For use in comparisons with
const uintptr_t TYPE_ID_MATCH4_TYPE_ID_MATCH4_BPOS = 0;             // received frames type ID/length field.


//------------------------------------------------------------------------------
//
// Register (GEM) WAKE_ON_LAN
//
// Name                    GEM_WAKE_ON_LAN_REG
// Relative Address        0x000000B8
// Absolute Address        gem0: 0xE000B0B8
//                         gem1: 0xE000C0B8
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Wake on LAN Register
//
// Register GEM_WAKE_ON_LAN_REG Details
//
// RESERVED                                                            Properties: Bits: 31:20, Type: ro, Reset Value: 0x0

                                                                    // Properties: Bit: 19, Type: rw, Reset Value: 0x0
const uintptr_t WAKE_ON_LAN_MULTI_HASH_EN_MASK     = 0x00080000;    // Wake on LAN multicast hash event enable. When
const uintptr_t WAKE_ON_LAN_MULTI_HASH_EN_BPOS     = 19;            // set multicast hash events will cause the wol
                                                                    // output to be asserted.

                                                                    // Properties: Bit: 18, Type: rw, Reset Value: 0x0
const uintptr_t WAKE_ON_LAN_SPEC_ADDR_REG1_EN_MASK = 0x00040000;    // Wake on LAN specific address register 1 event
const uintptr_t WAKE_ON_LAN_SPEC_ADDR_REG1_EN_BPOS = 18;            // enable. When set specific address 1 events will
                                                                    // cause the wol output to be asserted.

                                                                    // Properties: Bit: 17, Type: rw, Reset Value: 0x0
const uintptr_t WAKE_ON_LAN_ARP_REQ_EN_MASK        = 0x00020000;    // Wake on LAN ARP request event enable. When
const uintptr_t WAKE_ON_LAN_ARP_REQ_EN_BPOS        = 17;            // set ARP request events will cause the wol output
                                                                    // to be asserted.

                                                                    // Properties: Bit: 16, Type: rw, Reset Value: 0x0
const uintptr_t WAKE_ON_LAN_MAGIC_PKT_EN_MASK      = 0x00010000;    // Wake on LAN magic packet event enable. When
const uintptr_t WAKE_ON_LAN_MAGIC_PKT_EN_BPOS      = 16;            // set magic packet events will cause the wol output
                                                                    // to be asserted.

                                                                    // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t WAKE_ON_LAN_ARP_REQ_IP_ADDR_MASK   = 0x0000FFFF;    // Wake on LAN ARP request IP address. Written to
const uintptr_t WAKE_ON_LAN_ARP_REQ_IP_ADDR_BPOS   = 0;             // define the least significant 16 bits of the target IP
                                                                    // address that is matched to generate a Wake on
                                                                    // LAN event. A value of zero will not generate an
                                                                    // event, even if this is matched by the received
                                                                    // frame.


//------------------------------------------------------------------------------
//
// Register (GEM) IPG_STRETCH
//
// Name                    GEM_IPG_STRETCH_REG
// Software Name           XEMACPS_STRETCH
// Relative Address        0x000000BC
// Absolute Address        gem0: 0xE000B0BC
//                         gem1: 0xE000C0BC
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             IPG stretch register
//
// Register GEM_IPG_STRETCH_REG Details
//
// RESERVED                                              Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                      // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_IPG_STRETCH_MASK = 0x0000FFFF;    // Bits 7:0 are multiplied with the previously
const uintptr_t GEM_IPG_STRETCH_BPOS = 0;             // transmitted frame length (including preamble)
                                                      // bits 15:8 +1 divide the frame length. If the
                                                      // resulting number is greater than 96 and bit 28 is
                                                      // set in the network configuration register then the
                                                      // resulting number is used for the transmit
                                                      // inter-packet-gap. 1 is added to bits 15:8 to prevent
                                                      // a divide by zero.


//------------------------------------------------------------------------------
//
// Register (GEM) STACKED_VLAN
//
// Name                    GEM_STACKED_VLAN_REG
// Relative Address        0x000000C0
// Absolute Address        gem0: 0xE000B0C0
//                         gem1: 0xE000C0C0
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Stacked VLAN Register
//
// Register GEM_STACKED_VLAN_REG Details
//
                                                             // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t GEM_STACKED_VLAN_EN_MASK    = 0x80000000;    // Enable Stacked VLAN processing mode
const uintptr_t GEM_STACKED_VLAN_EN_BPOS    = 31;            // 

// RESERVED                                                     Properties: Bits: 30:16, Type: ro, Reset Value: 0x0

                                                             // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_USER_DEF_VLAN_TYPE_MASK = 0x0000FFFF;    // User defined VLAN_TYPE field. When Stacked
const uintptr_t GEM_USER_DEF_VLAN_TYPE_BPOS = 0;             // VLAN is enabled, the first VLAN tag in a received
                                                             // frame will only be accepted if the VLAN type field
                                                             // is equal to this user defined VLAN_TYPE OR
                                                             // equal to the standard VLAN type (0x8100). Note
                                                             // that the second VLAN tag of a Stacked VLAN
                                                             // packet will only be matched correctly if its
                                                             // VLAN_TYPE field equals 0x8100.


//------------------------------------------------------------------------------
//
// Register (GEM) TX_PFC_PAUSE
//
// Name                    GEM_TX_PFC_PAUSE_REG
// Relative Address        0x000000C4
// Absolute Address        gem0: 0xE000B0C4
//                         gem1: 0xE000C0C4
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Transmit PFC Pause Register
//
// Register GEM_TX_PFC_PAUSE_REG Details
//
// RESERVED                                                 Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                         // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t GEM_PAUSEQ_SEL_MASK     = 0x0000FF00;    // If bit 17 of the network control register is written
const uintptr_t GEM_PAUSEQ_SEL_BPOS     = 8;             // with a one then for each entry equal to zero in the
                                                         // Transmit PFC Pause Register[15:8], the PFC pause
                                                         // frame's pause quantum field associated with that
                                                         // entry will be taken from the transmit pause
                                                         // quantum register. For each entry equal to one in
                                                         // the Transmit PFC Pause Register [15:8], the pause
                                                         // quantum associated with that entry will be zero.

                                                         // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_PRI_EN_VEC_VAL_MASK = 0x000000FF;    // If bit 17 of the network control register is written
const uintptr_t GEM_PRI_EN_VEC_VAL_BPOS = 0;             // with a one then the priority enable vector of the
                                                         // PFC priority based pause frame will be set equal
                                                         // to the value stored in this register [7:0].


//------------------------------------------------------------------------------
//
// Register (GEM) SPEC_ADDR1_MASK_BOT
//
// Name                    GEM_SPEC_ADDR1_MASK_BOT_REG
// Relative Address        0x000000C8
// Absolute Address        gem0: 0xE000B0C8
//                         gem1: 0xE000C0C8
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Specific Address Mask 1 Bottom [31:0]
//
// Register GEM_SPEC_ADDR1_MASK_BOT_REG Details
//
                                                        // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_MASK_BITS_BOT_MASK = 0xFFFFFFFF;    // Setting a bit to one masks the corresponding bit in
const uintptr_t GEM_MASK_BITS_BOT_BPOS = 0;             // the specific address 1 register


//------------------------------------------------------------------------------
//
// Register (GEM) SPEC_ADDR1_MASK_TOP
//
// Name                    GEM_SPEC_ADDR1_MASK_TOP_REG
// Relative Address        0x000000CC
// Absolute Address        gem0: 0xE000B0CC
//                         gem1: 0xE000C0CC
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Specific Address Mask 1 Top [47:32]
//
// Register GEM_SPEC_ADDR1_MASK_TOP_REG Details
//
// RESERVED                                                Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                        // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_MASK_BITS_TOP_MASK = 0x0000FFFF;    // Setting a bit to one masks the corresponding bit in
const uintptr_t GEM_MASK_BITS_TOP_BPOS = 0;             // the specific address 1 register


//------------------------------------------------------------------------------
//
// Register (GEM) MODULE_ID
//
// Name                    GEM_MODULE_ID_REG
// Relative Address        0x000000FC
// Absolute Address        gem0: 0xE000B0FC
//                         gem1: 0xE000C0FC
// Width                   32 bits
// Access Type             ro
// Reset Value               0x00020118
// Description               Module ID
//
// Register GEM_MODULE_ID_REG Details
//         This register indicates a Cadence module identification number and module revision. The value of this
//         register is read only as defined by `gem_revision_reg_value. With GEM p23, it is 0x00020118.
//
                                                     // Properties: Bits: 31:16, Type: ro, Reset Value: 0x2
const uintptr_t GEM_MODULE_ID_MASK  = 0xFFFF0000;    // Module identification number - for the GEM, this
const uintptr_t GEM_MODULE_ID_BPOS  = 16;            // value is fixed at 0x0002.

                                                     // Properties: Bits: 15:0, Type: ro, Reset Value: 0x118
const uintptr_t GEM_MODULE_REV_MASK = 0x0000FFFF;    // Module revision - fixed byte value specific to the
const uintptr_t GEM_MODULE_REV_BPOS = 0;             // revision of the design which is incremented after
                                                     // each release of the IP. Corresponds to Zynq
                                                     // having GEM p23.


//------------------------------------------------------------------------------
//
// Register (GEM) OCTETS_TX_BOT
//
// Name                      GEM_OCTETS_TX_BOT_REG
// Software Name             XEMACPS_OCTTXL
// Relative Address          0x00000100
// Absolute Address          gem0: 0xE000B100
//                           gem1: 0xE000C100
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Octets transmitted [31:0] (in frames without error)
//
// Register GEM_OCTETS_TX_BOT_REG Details
//         Bits 31:0 should be read prior to bits 47:32 to ensure reliable operation. In statistics register block. Is reset to
//         zero on a read and stick at all ones when it counts to its maximum value. It should be read frequently
//         enough to prevent loss of data.
//         For test purposes, it may be written by setting bit 7 (Write Enable) in the network control register. Setting
//         bit 6 (increment statistics) in the network control register causes all the statistics registers to increment by
//         one, again for test purposes.
//         Once a statistics register has been read, it is automatically cleared.
//
                                                        // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_OCTETS_TX_BOT_MASK = 0xFFFFFFFF;    // Transmitted octets in frame without errors [31:0].
const uintptr_t GEM_OCTETS_TX_BOT_BPOS = 0;             // The number of octets transmitted in valid frames
                                                        // of any type. This counter is 48-bits, and is read
                                                        // through two registers. This count does not
                                                        // include octets from automatically generated
                                                        // pause frames.


//------------------------------------------------------------------------------
//
// Register (GEM) OCTETS_TX_TOP
//
// Name                      GEM_OCTETS_TX_TOP_REG
// Software Name             XEMACPS_OCTTXH
// Relative Address          0x00000104
// Absolute Address          gem0: 0xE000B104
//                           gem1: 0xE000C104
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Octets transmitted [47:32] (in frames without error)
//
// Register GEM_OCTETS_TX_TOP_REG Details
//         Bits 31:0 should be read prior to bits 47:32 to ensure reliable operation. In statistics register block. Is reset to
//         zero on a read and stick at all ones when it counts to its maximum value. It should be read frequently
//         enough to prevent loss of data.
//         For test purposes, it may be written by setting bit 7 (Write Enable) in the network control register. Setting
//         bit 6 (increment statistics) in the network control register causes all the statistics registers to increment by
//         one, again for test purposes.
//         Once a statistics register has been read, it is automatically cleared.
//
// RESERVED                                                Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                        // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_OCTETS_TX_TOP_MASK = 0x0000FFFF;    // Transmitted octets in frame without errors [47:32].
const uintptr_t GEM_OCTETS_TX_TOP_BPOS = 0;             // The number of octets transmitted in valid frames
                                                        // of any type. This counter is 48-bits, and is read
                                                        // through two registers. This count does not
                                                        // include octets from automatically generated
                                                        // pause frames.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_TX
//
// Name                      GEM_FRAMES_TX_REG
// Software Name             XEMACPS_TXCNT
// Relative Address          0x00000108
// Absolute Address          gem0: 0xE000B108
//                           gem1: 0xE000C108
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Frames Transmitted
//
// Register GEM_FRAMES_TX_REG Details
//         Statistical counter for Frames transmitted without an error and exclude pause frames.
//         NOTES for ALL Statistical registers for Frames Transferred:
//         The a statistical counter is read by software, it is cleared to zero by the hardware. When a counter reaches
//         its maximum value, it stops counting and is read with all 1s. The statistical counters must be read
//         frequently enough if data loss is to be prevented.
//         For test purposes, all of the statistical counters may be written to (not just read) by setting bit 7
//         (wren_stat_regs) in the network control register. Also for test purposes, all of the statistical counters can be
//         incremented (by one) by writing a 1 to bit 6 (incr_stat_regs) of the network control register.
//
                                                        // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_TX_VAL_MASK = 0xFFFFFFFF;    // Frames transmitted without error. A 32 bit
const uintptr_t GEM_FRAMES_TX_VAL_BPOS = 0;             // register counting the number of frames
                                                        // successfully transmitted, i.e., no under run and
                                                        // not too many retries. Excludes pause frames.


//------------------------------------------------------------------------------
//
// Register (GEM) BROADCAST_FRAMES_TX
//
// Name                     GEM_BROADCAST_FRAMES_TX_REG
// Software Name            XEMACPS_TXBCCNT
// Relative Address         0x0000010C
// Absolute Address         gem0: 0xE000B10C
//                          gem1: 0xE000C10C
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Broadcast frames Tx
//
// Register GEM_BROADCAST_FRAMES_TX_REG Details
//         Statistical counter for Broadcast Frames transmitted without an error and exclude pause frames. Refer to
//         the FRAMES_TX register for additional information.
//
                                                                  // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_BROADCAST_FRAMES_TX_VAL_MASK = 0xFFFFFFFF;    // Broadcast frames transmitted without error. A 32
const uintptr_t GEM_BROADCAST_FRAMES_TX_VAL_BPOS = 0;             // bit register counting the number of broadcast
                                                                  // frames successfully transmitted without error, i.e.,
                                                                  // no under run and not too many retries. Excludes
                                                                  // pause frames.


//------------------------------------------------------------------------------
//
// Register (GEM) MULTI_FRAMES_TX
//
// Name                     GEM_MULTI_FRAMES_TX_REG
// Software Name            XEMACPS_TXMCCNT
// Relative Address         0x00000110
// Absolute Address         gem0: 0xE000B110
//                          gem1: 0xE000C110
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Multicast frames Tx
//
// Register GEM_MULTI_FRAMES_TX_REG Details
//         Statistical counter for Multicast Frames transmitted without an error and exclude pause frames. Refer to
//         the FRAMES_TX register for additional information.
//
                                                              // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_MULTI_FRAMES_TX_VAL_MASK = 0xFFFFFFFF;    // Multicast frames transmitted without error. A 32
const uintptr_t GEM_MULTI_FRAMES_TX_VAL_BPOS = 0;             // bit register counting the number of multicast
                                                              // frames successfully transmitted without error, i.e.,
                                                              // no under run and not too many retries. Excludes
                                                              // pause frames.


//------------------------------------------------------------------------------
//
// Register (GEM) PAUSE_FRAMES_TX
//
// Name                     GEM_PAUSE_FRAMES_TX_REG
// Software Name            XEMACPS_TXPAUSECNT
// Relative Address         0x00000114
// Absolute Address         gem0: 0xE000B114
//                          gem1: 0xE000C114
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Pause frames Tx
//
// Register GEM_PAUSE_FRAMES_TX_REG Details
//         Statistical counter for Pause Frames transmitted without an error and not sent through the FIFO interface.
//         Refer to the FRAMES_TX register for additional information.
//
// RESERVED                                                  Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                          // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_PAUSE_FRAMES_TX_MASK = 0x0000FFFF;    // Transmitted pause frames - a 16 bit register
const uintptr_t GEM_PAUSE_FRAMES_TX_BPOS = 0;             // counting the number of pause frames
                                                          // transmitted. Only pause frames triggered by the
                                                          // register interface or through the external pause
                                                          // pins are counted as pause frames. Pause frames
                                                          // received through the external FIFO interface are
                                                          // counted in the frames transmitted counter.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_64B_TX
//
// Name                     GEM_FRAMES_64B_TX_REG
// Software Name            XEMACPS_TX64CNT
// Relative Address         0x00000118
// Absolute Address         gem0: 0xE000B118
//                          gem1: 0xE000C118
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Tx, 64-byte length
//
// Register GEM_FRAMES_64B_TX_REG Details
//         Statistical counter of frames of 64 bytes that are transmitted without error. Does not include pause frames.
//         Refer to the FRAMES_TX register for additional information.
//
                                                            // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_64B_TX_VAL_MASK = 0xFFFFFFFF;    // 64 byte frames transmitted without error. A 32 bit
const uintptr_t GEM_FRAMES_64B_TX_VAL_BPOS = 0;             // register counting the number of 64 byte frames
                                                            // successfully transmitted without error, i.e., no
                                                            // under run and not too many retries. Excludes
                                                            // pause frames.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_65TO127B_TX
//
// Name                     GEM_FRAMES_65TO127B_TX_REG
// Software Name            XEMACPS_TX65CNT
// Relative Address         0x0000011C
// Absolute Address         gem0: 0xE000B11C
//                          gem1: 0xE000C11C
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Tx, 65 to 127-byte length
//
// Register GEM_FRAMES_65TO127B_TX_REG Details
//         Statistical counter of frames of 65 to 127 bytes that are transmitted without error. Does not include pause
//         frames. Refer to the FRAMES_TX register for additional information.
//
                                                                 // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_65TO127B_TX_VAL_MASK = 0xFFFFFFFF;    // 65 to127 byte frames transmitted without error. A
const uintptr_t GEM_FRAMES_65TO127B_TX_VAL_BPOS = 0;             // 32 bit register counting the number of 65 to127
                                                                 // byte frames successfully transmitted without
                                                                 // error, i.e., no under run and not too many retries.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_128TO255B_TX
//
// Name                     GEM_FRAMES_128TO255B_TX_REG
// Software Name            XEMACPS_TX128CNT
// Relative Address         0x00000120
// Absolute Address         gem0: 0xE000B120
//                          gem1: 0xE000C120
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Tx, 128 to 255-byte length
//
// Register GEM_FRAMES_128TO255B_TX_REG Details
//         Statistical counter of frames of 128 to 255 bytes that are transmitted without error. Does not include pause
//         frames. Refer to the FRAMES_TX register for additional information.
//
                                                                  // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_128TO255B_TX_VAL_MASK = 0xFFFFFFFF;    // 128 to 255 byte frames transmitted without error.
const uintptr_t GEM_FRAMES_128TO255B_TX_VAL_BPOS = 0;             // A 32 bit register counting the number of 128 to 255
                                                                  // byte frames successfully transmitted without
                                                                  // error, i.e., no under run and not too many retries.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_256TO511B_TX
//
// Name                     GEM_FRAMES_256TO511B_TX_REG
// Software Name            XEMACPS_TX256CNT
// Relative Address         0x00000124
// Absolute Address         gem0: 0xE000B124
//                          gem1: 0xE000C124
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Tx, 256 to 511-byte length
//
// Register GEM_FRAMES_256TO511B_TX_REG Details
//         Statistical counter of frames of 256 to 511 bytes that are transmitted without error. Does not include pause
//         frames. Refer to the FRAMES_TX register for additional information.
//
                                                                  // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_256TO511B_TX_VAL_MASK = 0xFFFFFFFF;    // 256 to 511 byte frames transmitted without error.
const uintptr_t GEM_FRAMES_256TO511B_TX_VAL_BPOS = 0;             // A 32 bit register counting the number of 256 to 511
                                                                  // byte frames successfully transmitted without
                                                                  // error, i.e., no under run and not too many retries.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_512TO1023B_TX
//
// Name                     GEM_FRAMES_512TO1023B_TX_REG
// Software Name            XEMACPS_TX512CNT
// Relative Address         0x00000128
// Absolute Address         gem0: 0xE000B128
//                          gem1: 0xE000C128
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Tx, 512 to 1023-byte length
//
// Register GEM_FRAMES_512TO1023B_TX_REG Details
//         Statistical counter of frames of 512 to 1023 bytes that are transmitted without error. Does not include pause
//         frames. Refer to the FRAMES_TX register for additional information.
//
                                                                   // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_512TO1023B_TX_VAL_MASK = 0xFFFFFFFF;    // 512 to 1023 byte frames transmitted without error.
const uintptr_t GEM_FRAMES_512TO1023B_TX_VAL_BPOS = 0;             // A 32 bit register counting the number of 512 to
                                                                   // 1023 byte frames successfully transmitted
                                                                   // without error, i.e., no under run and not too many
                                                                   // retries.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_1024TO1518B_TX
//
// Name                      GEM_FRAMES_1024TO1518B_TX_REG
// Software Name            XEMACPS_TX1024CNT
// Relative Address          0x0000012C
// Absolute Address         gem0: 0xE000B12C
//                           gem1: 0xE000C12C
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Frame Tx, 1024 to 1518-byte length
//
// Register GEM_FRAMES_1024TO1518B_TX_REG Details
//         Statistical counter of frames of1024 to 1518 bytes that are transmitted without error. Does not include pause
//         frames. Refer to the FRAMES_TX register for additional information.
//
                                                                    // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_1024TO1518B_TX_VAL_MASK = 0xFFFFFFFF;    // 1024 to 1518 byte frames transmitted without
const uintptr_t GEM_FRAMES_1024TO1518B_TX_VAL_BPOS = 0;             // error. A 32 bit register counting the number of
                                                                    // 1024 to 1518 byte frames successfully transmitted
                                                                    // without error, i.e., no under run and not too many
                                                                    // retries.


//------------------------------------------------------------------------------
//
// Register (GEM) TX_UNDER_RUNS
//
// Name                      GEM_TX_UNDER_RUNS_REG
// Software Name            XEMACPS_TXURUNCNT
// Relative Address          0x00000134
// Absolute Address         gem0: 0xE000B134
//                           gem1: 0xE000C134
// Width                     32 bits
// Access Type              ro
// Reset Value               0x00000000
// Description               Transmit under runs
//
// Register GEM_TX_UNDER_RUNS_REG Details
//         In statistics register block. Is reset to zero on a read and stick at all ones when it counts to its maximum
//         value. It should be read frequently enough to prevent loss of data.
//         For test purposes, it may be written by setting bit 7 (Write Enable) in the network control register. Setting
//         bit 6 (increment statistics) in the network control register causes all the statistics registers to increment by
//         one, again for test purposes.
//         Once a statistics register has been read, it is automatically cleared.
//
// RESERVED                                                Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                        // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_TX_UNDER_RUNS_MASK = 0x000003FF;    // Transmit under runs - a 10 bit register counting
const uintptr_t GEM_TX_UNDER_RUNS_BPOS = 0;             // the number of frames not transmitted due to a
                                                        // transmit under run. If this register is incremented
                                                        // then no other statistics register is incremented.


//------------------------------------------------------------------------------
//
// Register (GEM) SINGLE_COLLISN_FRAMES
//
// Name                      GEM_SINGLE_COLLISN_FRAMES_REG
// Software Name             XEMACPS_SNGLCOLLCNT
// Relative Address          0x00000138
// Absolute Address         gem0: 0xE000B138
//                           gem1: 0xE000C138
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Single Collision Frames
//
// Register GEM_SINGLE_COLLISN_FRAMES_REG Details
//         In statistics register block. Is reset to zero on a read and sticks at all ones when it counts to its maximum
//         value. It should be read frequently enough to prevent loss of data.
//         For test purposes, it may be written by setting bit 7 (Write Enable) in the network control register. Setting
//         bit 6 (increment statistics) in the network control register causes all the statistics registers to increment by
//         one, again for test purposes.
//         Once a statistics register has been read, it is automatically cleared.
//
// RESERVED                                                 Properties: Bits: 31:18, Type: ro, Reset Value: 0x0

                                                         // Properties: Bits: 17:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_SINGLE_COLLISN_MASK = 0x0003FFFF;    // Single collision frames - an 18 bit register counting
const uintptr_t GEM_SINGLE_COLLISN_BPOS = 0;             // the number of frames experiencing a single
                                                         // collision before being successfully transmitted,
                                                         // i.e. no under run.


//------------------------------------------------------------------------------
//
// Register (GEM) MULTI_COLLISN_FRAMES
//
// Name                      GEM_MULTI_COLLISN_FRAMES_REG
// Software Name            XEMACPS_MULTICOLLCNT
// Relative Address          0x0000013C
// Absolute Address         gem0: 0xE000B13C
//                           gem1: 0xE000C13C
// Width                     32 bits
// Access Type              ro
// Reset Value               0x00000000
// Description               Multiple Collision Frames
//
// Register GEM_MULTI_COLLISN_FRAMES_REG Details
//         In statistics register block. Is reset to zero on a read and sticks at all ones when it counts to its maximum
//         value. It should be read frequently enough to prevent loss of data.
//         For test purposes, it may be written by setting bit 7 (Write Enable) in the network control register. Setting
//         bit 6 (increment statistics) in the network control register causes all the statistics registers to increment by
//         one, again for test purposes.
//         Once a statistics register has been read, it is automatically cleared.
//
// RESERVED                                                Properties: Bits: 31:18, Type: ro, Reset Value: 0x0

                                                        // Properties: Bits: 17:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_MULTI_COLLISN_MASK = 0x0003FFFF;    // Multiple collision frames - an 18 bit register
const uintptr_t GEM_MULTI_COLLISN_BPOS = 0;             // counting the number of frames experiencing
                                                        // between two and fifteen collisions prior to being
                                                        // successfully transmitted, i.e., no under run and
                                                        // not too many retries.


//------------------------------------------------------------------------------
//
// Register (GEM) EXCESSIVE_COLLISNS
//
// Name                      GEM_EXCESSIVE_COLLISNS_REG
// Software Name            XEMACPS_EXCESSCOLLCNT
// Relative Address          0x00000140
// Absolute Address         gem0: 0xE000B140
//                           gem1: 0xE000C140
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Excessive Collisions
//
// Register GEM_EXCESSIVE_COLLISNS_REG Details
//         In statistics register block. Is reset to zero on a read and sticks at all ones when it counts to its maximum
//         value. It should be read frequently enough to prevent loss of data.
//         For test purposes, it may be written by setting bit 7 (Write Enable) in the network control register. Setting
//         bit 6 (increment statistics) in the network control register causes all the statistics registers to increment by
//         one, again for test purposes.
//         Once a statistics register has been read, it is automatically cleared.
//
// RESERVED                                                     Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                             // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_EXCESSIVE_COLLISNS_MASK = 0x000003FF;    // Excessive collisions - a 10 bit register counting the
const uintptr_t GEM_EXCESSIVE_COLLISNS_BPOS = 0;             // number of frames that failed to be transmitted
                                                             // because they experienced 16 collisions.


//------------------------------------------------------------------------------
//
// Register (GEM) LATE_COLLISNS
//
// Name                      GEM_LATE_COLLISNS_REG
// Software Name             XEMACPS_LATECOLLCNT
// Relative Address          0x00000144
// Absolute Address          gem0: 0xE000B144
//                           gem1: 0xE000C144
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Late Collisions
//
// Register GEM_LATE_COLLISNS_REG Details
//         In statistics register block. Is reset to zero on a read and sticks at all ones when it counts to its maximum
//         value. It should be read frequently enough to prevent loss of data.
//         For test purposes, it may be written by setting bit 7 (Write Enable) in the network control register. Setting
//         bit 6 (increment statistics) in the network control register causes all the statistics registers to increment by
//         one, again for test purposes.
//         Once a statistics register has been read, it is automatically cleared.
//
// RESERVED                                                Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                        // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_LATE_COLLISNS_MASK = 0x000003FF;    // Late collisions - a 10 bit register counting the
const uintptr_t GEM_LATE_COLLISNS_BPOS = 0;             // number of late collision occurring after the slot
                                                        // time (512 bits) has expired. In 10/100 mode, late
                                                        // collisions are counted twice i.e., both as a collision
                                                        // and a late collision. In gigabit mode, a late
                                                        // collision causes the transmission to be aborted,
                                                        // thus the single and multi collision registers are not
                                                        // updated.


//------------------------------------------------------------------------------
//
// Register (GEM) DEFERRED_TX_FRAMES
//
// Name                      GEM_DEFERRED_TX_FRAMES_REG
// Software Name             XEMACPS_TXDEFERCNT
// Relative Address          0x00000148
// Absolute Address         gem0: 0xE000B148
//                           gem1: 0xE000C148
// Width                     32 bits
// Access Type              ro
// Reset Value               0x00000000
// Description               Deferred Transmission Frames
//
// Register GEM_DEFERRED_TX_FRAMES_REG Details
//         In statistics register block. Is reset to zero on a read and stick at all ones when it counts to its maximum
//         value. It should be read frequently enough to prevent loss of data.
//         For test purposes, it may be written by setting bit 7 (Write Enable) in the network control register. Setting
//         bit 6 (increment statistics) in the network control register causes all the statistics registers to increment by
//         one, again for test purposes.
//         Once a statistics register has been read, it is automatically cleared.
//
// RESERVED                                              Properties: Bits: 31:18, Type: ro, Reset Value: 0x0

                                                      // Properties: Bits: 17:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_DEFERRED_TX_MASK = 0x0003FFFF;    // Deferred transmission frames - an 18 bit register
const uintptr_t GEM_DEFERRED_TX_BPOS = 0;             // counting the number of frames experiencing
                                                      // deferral due to carrier sense being active on their
                                                      // first attempt at transmission. Frames involved in
                                                      // any collision are not counted nor are frames that
                                                      // experienced a transmit under run.


//------------------------------------------------------------------------------
//
// Register (GEM) CARRIER_SENSE_ERRS
//
// Name                      GEM_CARRIER_SENSE_ERRS_REG
// Software Name            XEMACPS_TXCSENSECNT
// Relative Address          0x0000014C
// Absolute Address         gem0: 0xE000B14C
//                           gem1: 0xE000C14C
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Carrier Sense Errors.
//
// Register GEM_CARRIER_SENSE_ERRS_REG Details
//         In statistics register block. Is reset to zero on a read and sticks at all ones when it counts to its maximum
//         value. It should be read frequently enough to prevent loss of data.
//         For test purposes, it may be written by setting bit 7 (Write Enable) in the network control register. Setting
//         bit 6 (increment statistics) in the network control register causes all the statistics registers to increment by
//         one, again for test purposes.
//         Once a statistics register has been read, it is automatically cleared.
//
// RESERVED                                                     Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                             // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_CARRIER_SENSE_ERRS_MASK = 0x000003FF;    // Carrier sense errors - a 10 bit register counting the
const uintptr_t GEM_CARRIER_SENSE_ERRS_BPOS = 0;             // number of frames transmitted where carrier sense
                                                             // was not seen during transmission or where carrier
                                                             // sense was deasserted after being asserted in a
                                                             // transmit frame without collision (no under run).
                                                             // Only incremented in half duplex mode. The only
                                                             // effect of a carrier sense error is to increment this
                                                             // register. The behavior of the other statistics
                                                             // registers is unaffected by the detection of a carrier
                                                             // sense error.


//------------------------------------------------------------------------------
//
// Register (GEM) OCTETS_RX_BOT
//
// Name                      GEM_OCTETS_RX_BOT_REG
// Software Name             XEMACPS_OCTRXL
// Relative Address          0x00000150
// Absolute Address          gem0: 0xE000B150
//                           gem1: 0xE000C150
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Octets Received [31:0]
//
// Register GEM_OCTETS_RX_BOT_REG Details
//         Bits 31:0 should be read prior to bits 47:32 to ensure reliable operation. In statistics register block. Is reset to
//         zero on a read and sticks at all ones when it counts to its maximum value. It should be read frequently
//         enough to prevent loss of data.
//         For test purposes, it may be written by setting bit 7 (Write Enable) in the network control register. Setting
//         bit 6 (increment statistics) in the network control register causes all the statistics registers to increment by
//         one, again for test purposes.
//         Once a statistics register has been read, it is automatically cleared.
//
                                                        // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_OCTETS_RX_BOT_MASK = 0xFFFFFFFF;    // Received octets in frame without errors [31:0]. The
const uintptr_t GEM_OCTETS_RX_BOT_BPOS = 0;             // number of octets received in valid frames of any
                                                        // type. This counter is 48-bits and is read through
                                                        // two registers. This count does not include octets
                                                        // from pause frames, and is only incremented if the
                                                        // frame is successfully filtered and copied to
                                                        // memory.


//------------------------------------------------------------------------------
//
// Register (GEM) OCTETS_RX_TOP
//
// Name                      GEM_OCTETS_RX_TOP_REG
// Software Name             XEMACPS_OCTRXH
// Relative Address          0x00000154
// Absolute Address          gem0: 0xE000B154
//                           gem1: 0xE000C154
// Width                     32 bits
// Access Type               ro
// Reset Value               0x00000000
// Description               Octets Received [47:32]
//
// Register GEM_OCTETS_RX_TOP_REG Details
//         Bits 31:0 should be read prior to bits 47:32 to ensure reliable operation. In statistics register block. Is reset to
//         zero on a read and sticks at all ones when it counts to its maximum value. It should be read frequently
//         enough to prevent loss of data.
//         For test purposes, it may be written by setting bit 7 (Write Enable) in the network control register. Setting
//         bit 6 (increment statistics) in the network control register causes all the statistics registers to increment by
//         one, again for test purposes.
//         Once a statistics register has been read, it is automatically cleared.
//
// RESERVED                                                Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                        // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_OCTETS_RX_TOP_MASK = 0x0000FFFF;    // Received octets in frame without errors [47:32].
const uintptr_t GEM_OCTETS_RX_TOP_BPOS = 0;             // The number of octets received in valid frames of
                                                        // any type. This counter is 48-bits and is read
                                                        // through two registers. This count does not
                                                        // include octets from pause frames, and is only
                                                        // incremented if the frame is successfully filtered
                                                        // and copied to memory.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_RX
//
// Name                      GEM_FRAMES_RX_REG
// Software Name            XEMACPS_RXCNT
// Relative Address         0x00000158
// Absolute Address         gem0: 0xE000B158
//                          gem1: 0xE000C158
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Received
//
// Register GEM_FRAMES_RX_REG Details
//         Statistical counter for Frames received without an error and exclude pause frames.
//         NOTES for ALL Statistical registers for Frames Transferred:
//         The a statistical counter is read by software, it is cleared to zero by the hardware. When a counter reaches
//         its maximum value, it stops counting and is read with all 1s. The statistical counters must be read
//         frequently enough if data loss is to be prevented.
//         For test purposes, all of the statistical counters may be written to (not just read) by setting bit 7
//         (wren_stat_regs) in the network control register. Also for test purposes, all of the statistical counters can be
//         incremented (by one) by writing a 1 to bit 6 (incr_stat_regs) of the network control register.
//
                                                        // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_RX_VAL_MASK = 0xFFFFFFFF;    // Frames received without error. A 32 bit register
const uintptr_t GEM_FRAMES_RX_VAL_BPOS = 0;             // counting the number of frames successfully
                                                        // received. Excludes pause frames, and is only
                                                        // incremented if the frame is successfully filtered
                                                        // and copied to memory.


//------------------------------------------------------------------------------
//
// Register (GEM) BDCAST_FAMES_RX
//
// Name                     GEM_BDCAST_FAMES_RX_REG
// Software Name            XEMACPS_RXBROADCNT
// Relative Address         0x0000015C
// Absolute Address         gem0: 0xE000B15C
//                          gem1: 0xE000C15C
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Broadcast Frames Rx
//
// Register GEM_BDCAST_FAMES_RX_REG Details
//         Statistical counter for Broadcast Frames received without an error and exclude pause frames. Refer to the
//         FRAMES_RX register for additional information.
//
                                                              // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_BDCAST_FAMES_RX_VAL_MASK = 0xFFFFFFFF;    // Broadcast frames received without error. A 32 bit
const uintptr_t GEM_BDCAST_FAMES_RX_VAL_BPOS = 0;             // register counting the number of broadcast frames
                                                              // successfully received without error. Excludes
                                                              // pause frames, and is only incremented if the
                                                              // frame is successfully filtered and copied to
                                                              // memory.


//------------------------------------------------------------------------------
//
// Register (GEM) MULTI_FRAMES_RX
//
// Name                    GEM_MULTI_FRAMES_RX_REG
// Software Name           XEMACPS_RXMULTICNT
// Relative Address        0x00000160
// Absolute Address        gem0: 0xE000B160
//                         gem1: 0xE000C160
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Multicast Frames Rx
//
// Register GEM_MULTI_FRAMES_RX_REG Details
//         Statistical counter for Multicast Frames received without an error and exclude pause frames. Refer to the
//         FRAMES_RX register for additional information.
//
                                                              // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_MULTI_FRAMES_RX_VAL_MASK = 0xFFFFFFFF;    // Multicast frames received without error. A 32 bit
const uintptr_t GEM_MULTI_FRAMES_RX_VAL_BPOS = 0;             // register counting the number of multicast frames
                                                              // successfully received without error. Excludes
                                                              // pause frames, and is only incremented if the
                                                              // frame is successfully filtered and copied to
                                                              // memory.


//------------------------------------------------------------------------------
//
// Register (GEM) PAUSE_RX
//
// Name                    GEM_PAUSE_RX_REG
// Software Name           XEMACPS_RXPAUSECNT
// Relative Address        0x00000164
// Absolute Address        gem0: 0xE000B164
//                         gem1: 0xE000C164
// Width                   32 bits
// Access Type             ro
// Reset Value              0x00000000
// Description              Pause Frames Rx
//
// Register GEM_PAUSE_RX_REG Details
//         Statistical counter for Pause Frames received without an error. Refer to the FRAMES_RX register for
//         additional information.
//
// RESERVED                                           Properties: Bits: 31:16, Type: ro, Reset Value: 0x0

                                                   // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_PAUSE_RX_MASK = 0x0000FFFF;    // Received pause frames - a 16 bit register counting
const uintptr_t GEM_PAUSE_RX_BPOS = 0;             // the number of pause frames received without
                                                   // error.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_64B_RX
//
// Name                     GEM_FRAMES_64B_RX_REG
// Software Name            XEMACPS_RX64CNT
// Relative Address         0x00000168
// Absolute Address         gem0: 0xE000B168
//                          gem1: 0xE000C168
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Rx, 64-byte length
//
// Register GEM_FRAMES_64B_RX_REG Details
//         Statistical counter for frames of 64 bytes in length that are received without an error and exclude pause
//         frames. Refer to the FRAMES_RX register for additional information.
//
                                                            // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_64B_RX_VAL_MASK = 0xFFFFFFFF;    // 64 byte frames received without error. A 32 bit
const uintptr_t GEM_FRAMES_64B_RX_VAL_BPOS = 0;             // register counting the number of 64 byte frames
                                                            // successfully received without error. Excludes
                                                            // pause frames, and is only incremented if the
                                                            // frame is successfully filtered and copied to
                                                            // memory.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_65TO127B_RX
//
// Name                     GEM_FRAMES_65TO127B_RX_REG
// Software Name            XEMACPS_RX65CNT
// Relative Address         0x0000016C
// Absolute Address         gem0: 0xE000B16C
//                          gem1: 0xE000C16C
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Rx, 65 to 127-byte length
//
// Register GEM_FRAMES_65TO127B_RX_REG Details
//         Statistical counter for frames of 65 to 127 bytes in length that are received without an error and exclude
//         pause frames. Refer to the FRAMES_RX register for additional information.
//
                                                                 // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_65TO127B_RX_VAL_MASK = 0xFFFFFFFF;    // 65 to 127 byte frames received without error. A 32
const uintptr_t GEM_FRAMES_65TO127B_RX_VAL_BPOS = 0;             // bit register counting the number of 65 to 127 byte
                                                                 // frames successfully received without error.
                                                                 // Excludes pause frames, and is only incremented if
                                                                 // the frame is successfully filtered and copied to
                                                                 // memory.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_128TO255B_RX
//
// Name                     GEM_FRAMES_128TO255B_RX_REG
// Software Name            XEMACPS_RX128CNT
// Relative Address         0x00000170
// Absolute Address         gem0: 0xE000B170
//                          gem1: 0xE000C170
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Rx, 128 to 255-byte length
//
// Register GEM_FRAMES_128TO255B_RX_REG Details
//         Statistical counter for frames of 128 to 255 bytes in length that are received without an error and exclude
//         pause frames. Refer to the FRAMES_RX register for additional information.
//
                                                                  // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_128TO255B_RX_VAL_MASK = 0xFFFFFFFF;    // 128 to 255 byte frames received without error. A
const uintptr_t GEM_FRAMES_128TO255B_RX_VAL_BPOS = 0;             // 32 bit register counting the number of 128 to 255
                                                                  // byte frames successfully received without error.
                                                                  // Excludes pause frames, and is only incremented if
                                                                  // the frame is successfully filtered and copied to
                                                                  // memory.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_256TO511B_RX
//
// Name                     GEM_FRAMES_256TO511B_RX_REG
// Software Name            XEMACPS_RX256CNT
// Relative Address         0x00000174
// Absolute Address         gem0: 0xE000B174
//                          gem1: 0xE000C174
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Rx, 256 to 511-byte length
//
// Register GEM_FRAMES_256TO511B_RX_REG Details
//         Statistical counter for frames of 256 to 511 bytes in length that are received without an error and exclude
//         pause frames. Refer to the FRAMES_RX register for additional information.
//

//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_512TO1023B_RX
//
// Name                     GEM_FRAMES_512TO1023B_RX_REG
// Software Name            XEMACPS_RX512CNT
// Relative Address         0x00000178
// Absolute Address         gem0: 0xE000B178
//                          gem1: 0xE000C178
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Rx, 512 to 1023-byte length
//
// Register GEM_FRAMES_512TO1023B_RX_REG Details
//         Statistical counter for frames of 512 to 1023 bytes in length that are received without an error and exclude
//         pause frames. Refer to the FRAMES_RX register for additional information.
//
                                                                   // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_512TO1023B_RX_VAL_MASK = 0xFFFFFFFF;    // 512 to 1023 byte frames received without error. A
const uintptr_t GEM_FRAMES_512TO1023B_RX_VAL_BPOS = 0;             // 32 bit register counting the number of 512 to 1023
                                                                   // byte frames successfully received without error.
                                                                   // Excludes pause frames, and is only incremented if
                                                                   // the frame is successfully filtered and copied to
                                                                   // memory.


//------------------------------------------------------------------------------
//
// Register (GEM) FRAMES_1024TO1518B_RX
//
// Name                     GEM_FRAMES_1024TO1518B_RX_REG
// Software Name            XEMACPS_RX1024CNT
// Relative Address         0x0000017C
// Absolute Address         gem0: 0xE000B17C
//                          gem1: 0xE000C17C
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Frames Rx, 1024 to 1518-byte length
//
// Register GEM_FRAMES_1024TO1518B_RX_REG Details
//         Statistical counter for frames of 1024 to 1518 bytes in length that are received without an error and exclude
//         pause frames. Refer to the FRAMES_RX register for additional information.
//
                                                                    // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FRAMES_1024TO1518B_RX_VAL_MASK = 0xFFFFFFFF;    // 1024 to 1518 byte frames received without error. A
const uintptr_t GEM_FRAMES_1024TO1518B_RX_VAL_BPOS = 0;             // 32 bit register counting the number of 1024 to 1518
                                                                    // byte frames successfully received without error.
                                                                    // Excludes pause frames, and is only incremented if
                                                                    // the frame is successfully filtered and copied to
                                                                    // memory.


//------------------------------------------------------------------------------
//
// Register (GEM) UNDERSZ_RX
//
// Name                     GEM_UNDERSZ_RX_REG
// Software Name            XEMACPS_RXUNDRCNT
// Relative Address         0x00000184
// Absolute Address         gem0: 0xE000B184
//                          gem1: 0xE000C184
// Width                    32 bits
// Access Type              ro
// Reset Value             0x00000000
// Description             Undersize frames received
//
// Register GEM_UNDERSZ_RX_REG Details
//
// RESERVED                                             Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                     // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_UNDERSZ_RX_MASK = 0x000003FF;    // Undersize frames received - a 10 bit register
const uintptr_t GEM_UNDERSZ_RX_BPOS = 0;             // counting the number of frames received less than
                                                     // 64 bytes in length (10/100 mode or gigabit mode,
                                                     // full duplex) that do not have either a CRC error or
                                                     // an alignment error.


//------------------------------------------------------------------------------
//
// Register (GEM) OVERSZ_RX
//
// Name                    GEM_OVERSZ_RX_REG
// Software Name           XEMACPS_RXOVRCNT
// Relative Address        0x00000188
// Absolute Address        gem0: 0xE000B188
//                         gem1: 0xE000C188
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Oversize frames received
//
// Register GEM_OVERSZ_RX_REG Details
//
// RESERVED                                            Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                    // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_OVERSZ_RX_MASK = 0x000003FF;    // Oversize frames received - a 10 bit register
const uintptr_t GEM_OVERSZ_RX_BPOS = 0;             // counting the number of frames received
                                                    // exceeding 1518 bytes (1536 bytes if bit 8 is set in
                                                    // network configuration register) in length but do
                                                    // not have either a CRC error, an alignment error
                                                    // nor a receive symbol error.


//------------------------------------------------------------------------------
//
// Register (GEM) JAB_RX
//
// Name                    GEM_JAB_RX_REG
// Software Name           XEMACPS_RXJABCNT
// Relative Address        0x0000018C
// Absolute Address        gem0: 0xE000B18C
//                         gem1: 0xE000C18C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Jabbers received
//
// Register GEM_JAB_RX_REG Details
//
// RESERVED                                         Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                 // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_JAB_RX_MASK = 0x000003FF;    // Jabbers received - a 10 bit register counting the
const uintptr_t GEM_JAB_RX_BPOS = 0;             // number of frames received exceeding 1518 bytes
                                                 // (1536 if bit 8 set in network configuration register)
                                                 // in length and have either a CRC error, an
                                                 // alignment error or a receive symbol error.


//------------------------------------------------------------------------------
//
// Register (GEM) FCS_ERRORS
//
// Name                    GEM_FCS_ERRORS_REG
// Software Name           XEMACPS_RXFCSCNT
// Relative Address        0x00000190
// Absolute Address        gem0: 0xE000B190
//                         gem1: 0xE000C190
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Frame check sequence errors
//
// Register GEM_FCS_ERRORS_REG Details
//
// RESERVED                                             Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                     // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_FCS_ERRORS_MASK = 0x000003FF;    // Frame check sequence errors - a 10 bit register
const uintptr_t GEM_FCS_ERRORS_BPOS = 0;             // counting frames that are an integral number of
                                                     // bytes, have bad CRC and are between 64 and 1518
                                                     // bytes in length. This register is also incremented if
                                                     // a symbol error is detected and the frame is of
                                                     // valid length and has an integral number of bytes.
                                                     // This register is incremented for a frame with bad
                                                     // FCS, regardless of whether it is copied to memory
                                                     // due to ignore FCS mode being enabled in bit 26 of
                                                     // the network configuration register.H524


//------------------------------------------------------------------------------
//
// Register (GEM) LENGTH_FIELD_ERRORS
//
// Name                    GEM_LENGTH_FIELD_ERRORS_REG
// Software Name           XEMACPS_RXLENGTHCNT
// Relative Address        0x00000194
// Absolute Address        gem0: 0xE000B194
//                         gem1: 0xE000C194
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Length field frame errors
//
// Register GEM_LENGTH_FIELD_ERRORS_REG Details
//
// RESERVED                                                      Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                              // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_LENGTH_FIELD_ERRORS_MASK = 0x000003FF;    // Length field frame errors - this 10-bit register
const uintptr_t GEM_LENGTH_FIELD_ERRORS_BPOS = 0;             // counts the number of frames received that have a
                                                              // measured length shorter than that extracted from
                                                              // the length field (bytes 13 and 14). This condition is
                                                              // only counted if the value of the length field is less
                                                              // than 0x0600, the frame is not of excessive length
                                                              // and checking is enabled through bit 16 of the
                                                              // network configuration register.


//------------------------------------------------------------------------------
//
// Register (GEM) RX_SYMBOL_ERRORS
//
// Name                    GEM_RX_SYMBOL_ERRORS_REG
// Software Name           XEMACPS_RXSYMBCNT
// Relative Address        0x00000198
// Absolute Address        gem0: 0xE000B198
//                         gem1: 0xE000C198
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Receive symbol errors
//
// Register GEM_RX_SYMBOL_ERRORS_REG Details
//
// RESERVED                                                   Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                           // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_RX_SYMBOL_ERRORS_MASK = 0x000003FF;    // Receive symbol errors - a 10-bit register counting
const uintptr_t GEM_RX_SYMBOL_ERRORS_BPOS = 0;             // the number of frames that had rx_er asserted
                                                           // during reception. For 10/100 mode symbol errors
                                                           // are counted regardless of frame length checks. For
                                                           // gigabit mode the frame must satisfy slot time
                                                           // requirements in order to count a symbol error.


//------------------------------------------------------------------------------
//
// Register (GEM) ALIGN_ERRORS
//
// Name                    GEM_ALIGN_ERRORS_REG
// Software Name           XEMACPS_RXALIGNCNT
// Relative Address        0x0000019C
// Absolute Address        gem0: 0xE000B19C
//                         gem1: 0xE000C19C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Alignment errors
//
// Register GEM_ALIGN_ERRORS_REG Details
//
// RESERVED                                               Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                       // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_ALIGN_ERRORS_MASK = 0x000003FF;    // Alignment errors - a 10 bit register counting
const uintptr_t GEM_ALIGN_ERRORS_BPOS = 0;             // frames that are not an integral number of bytes
                                                       // long and have bad CRC when their length is
                                                       // truncated to an integral number of bytes and are
                                                       // between 64 and 1518 bytes in length. This register
                                                       // is also incremented if a symbol error is detected
                                                       // and the frame is of valid length and does not have
                                                       // an integral number of bytes.


//------------------------------------------------------------------------------
//
// Register (GEM) RX_RESOURCE_ERRORS
//
// Name                    GEM_RX_RESOURCE_ERRORS_REG
// Software Name           XEMACPS_RXRESERRCNT
// Relative Address        0x000001A0
// Absolute Address        gem0: 0xE000B1A0
//                         gem1: 0xE000C1A0
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Receive resource errors
//
// Register GEM_RX_RESOURCE_ERRORS_REG Details
//
// RESERVED                                                     Properties: Bits: 31:18, Type: ro, Reset Value: 0x0

                                                             // Properties: Bits: 17:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_RX_RESOURCE_ERRORS_MASK = 0x0003FFFF;    // Receive resource errors - an 18 bit register
const uintptr_t GEM_RX_RESOURCE_ERRORS_BPOS = 0;             // counting the number of frames that were
                                                             // successfully received by the MAC (correct
                                                             // address matched frame and adequate slot time)
                                                             // but could not be copied to memory because no
                                                             // receive buffer was available. This will be either
                                                             // because the AHB bus was not granted in time or
                                                             // because a hresp not OK was returned.


//------------------------------------------------------------------------------
//
// Register (GEM) RX_OVERRUN_ERRORS
//
// Name                     GEM_RX_OVERRUN_ERRORS_REG
// Software Name            XEMACPS_RXORCNT
// Relative Address         0x000001A4
// Absolute Address         gem0: 0xE000B1A4
//                          gem1: 0xE000C1A4
// Width                    32 bits
// Access Type              ro
// Reset Value              0x00000000
// Description              Receive overrun errors
//
// Register GEM_RX_OVERRUN_ERRORS_REG Details
//
// RESERVED                                                    Properties: Bits: 31:10, Type: ro, Reset Value: 0x0

                                                            // Properties: Bits: 9:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_RX_OVERRUN_ERRORS_MASK = 0x000003FF;    // Receive overruns - a 10 bit register counting the
const uintptr_t GEM_RX_OVERRUN_ERRORS_BPOS = 0;             // number of frames that are address recognized but
                                                            // were not copied to memory due to a receive
                                                            // overrun.


//------------------------------------------------------------------------------
//
// Register (GEM) IP_HDR_CSUM_ERRORS
//
// Name                     GEM_IP_HDR_CSUM_ERRORS_REG
// Software Name           XEMACPS_RXIPCCNT
// Relative Address        0x000001A8
// Absolute Address        gem0: 0xE000B1A8
//                         gem1: 0xE000C1A8
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             IP header checksum errors
//
// Register GEM_IP_HDR_CSUM_ERRORS_REG Details
//
// RESERVED                                                     Properties: Bits: 31:8, Type: ro, Reset Value: 0x0

                                                             // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_IP_HDR_CSUM_ERRORS_MASK = 0x000000FF;    // 0 IP header checksum errors - an 8-bit register
const uintptr_t GEM_IP_HDR_CSUM_ERRORS_BPOS = 0;             // counting the number of frames discarded due to
                                                             // an incorrect IP header checksum, but are between
                                                             // 64 and 1518 bytes and do not have a CRC error, an
                                                             // alignment error, nor a symbol error.


//------------------------------------------------------------------------------
//
// Register (GEM) TCP_CSUM_ERRORS
//
// Name                    GEM_TCP_CSUM_ERRORS_REG
// Software Name           XEMACPS_RXTCPCCNT
// Relative Address        0x000001AC
// Absolute Address        gem0: 0xE000B1AC
//                         gem1: 0xE000C1AC
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             TCP checksum errors
//
// Register GEM_TCP_CSUM_ERRORS_REG Details
//
// RESERVED                                                  Properties: Bits: 31:8, Type: ro, Reset Value: 0x0

                                                          // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_TCP_CSUM_ERRORS_MASK = 0x000000FF;    // TCP checksum errors - an 8-bit register counting
const uintptr_t GEM_TCP_CSUM_ERRORS_BPOS = 0;             // the number of frames discarded due to an
                                                          // incorrect TCP checksum, but are between 64 and
                                                          // 1518 bytes and do not have a CRC error, an
                                                          // alignment error, nor a symbol error.


//------------------------------------------------------------------------------
//
// Register (GEM) UDP_CSUM_ERRORS
//
// Name                    GEM_UDP_CSUM_ERRORS_REG
// Software Name           XEMACPS_RXUDPCCNT
// Relative Address        0x000001B0
// Absolute Address        gem0: 0xE000B1B0
//                         gem1: 0xE000C1B0
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             UDP checksum error
//
// Register GEM_UDP_CSUM_ERRORS_REG Details
//
// RESERVED                                                  Properties: Bits: 31:8, Type: ro, Reset Value: 0x0

                                                          // Properties: Bits: 7:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_UDP_CSUM_ERRORS_MASK = 0x000000FF;    // UDP checksum errors - an 8-bit register counting
const uintptr_t GEM_UDP_CSUM_ERRORS_BPOS = 0;             // the number of frames discarded due to an
                                                          // incorrect UDP checksum, but are between 64 and
                                                          // 1518 bytes and do not have a CRC error, an
                                                          // alignment error, nor a symbol error.


//------------------------------------------------------------------------------
//
// Register (GEM) TIMER_STROBE_S
//
// Name                    GEM_TIMER_STROBE_S_REG
// Relative Address        0x000001C8
// Absolute Address        gem0: 0xE000B1C8
//                         gem1: 0xE000C1C8
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             1588 timer sync strobe seconds
//
// Register GEM_TIMER_STROBE_S_REG Details
//
                                                             // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_TIMER_STROBE_S_VAL_MASK = 0xFFFFFFFF;    // The value of the Timer Seconds register
const uintptr_t GEM_TIMER_STROBE_S_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (GEM) TIMER_STROBE_NS
//
// Name                    GEM_TIMER_STROBE_NS_REG
// Relative Address        0x000001CC
// Absolute Address        gem0: 0xE000B1CC
//                         gem1: 0xE000C1CC
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             1588 timer sync strobe nanoseconds
//
// Register GEM_TIMER_STROBE_NS_REG Details
//
// RESERVED                                                  Properties: Bits: 31:30, Type: ro, Reset Value: 0x0

                                                          // Properties: Bits: 29:0, Type: rw, Reset Value: 0x0
const uintptr_t TIMER_STROBE_NS_VAL_MASK = 0x3FFFFFFF;    // The value of the Timer Nanoseconds register
const uintptr_t TIMER_STROBE_NS_VAL_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (GEM) TIMER_S
//
// Name                    GEM_TIMER_S_REG
// Software Name           XEMACPS_1588_SEC
// Relative Address        0x000001D0
// Absolute Address        gem0: 0xE000B1D0
//                         gem1: 0xE000C1D0
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             1588 timer seconds
//
// Register GEM_TIMER_S_REG Details
//
                                                      // Properties: Bits: 31:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_TIMER_S_VAL_MASK = 0xFFFFFFFF;    // Timer count in seconds. This register is writeable.
const uintptr_t GEM_TIMER_S_VAL_BPOS = 0;             // It increments by one when the 1588 nanoseconds
                                                      // counter counts to one second. It may also be
                                                      // incremented when the timer adjust register is
                                                      // written.


//------------------------------------------------------------------------------
//
// Register (GEM) TIMER_NS
//
// Name                    GEM_TIMER_NS_REG
// Software Name           XEMACPS_1588_NANOSEC
// Relative Address        0x000001D4
// Absolute Address        gem0: 0xE000B1D4
//                         gem1: 0xE000C1D4
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             1588 timer nanoseconds
//
// Register GEM_TIMER_NS_REG Details
//
// RESERVED                                              Properties: Bits: 31:30, Type: ro, Reset Value: 0x0

                                                      // Properties: Bits: 29:0, Type: rw, Reset Value: 0x0
const uintptr_t GEM_TIMER_CT_NS_MASK = 0x3FFFFFFF;    // Timer count in nanoseconds. This register is
const uintptr_t GEM_TIMER_CT_NS_BPOS = 0;             // writeable. It can also be adjusted by writes to the
                                                      // 1588 timer adjust register. It increments by the
                                                      // value of the 1588 timer increment register each
                                                      // clock cycle.


//------------------------------------------------------------------------------
//
// Register (GEM) TIMER_ADJUST
//
// Name                    GEM_TIMER_ADJUST_REG
// Software Name           XEMACPS_1588_ADJ
// Relative Address        0x000001D8
// Absolute Address        gem0: 0xE000B1D8
//                         gem1: 0xE000C1D8
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             1588 timer adjust
//
// Register GEM_TIMER_ADJUST_REG Details
//
                                                            // Properties: Bit: 31, Type: wo, Reset Value: 0x0
const uintptr_t TIMER_ADJUST_ADD_SUBN_MASK = 0x80000000;    // Write as one to subtract from the 1588 timer. Write
const uintptr_t TIMER_ADJUST_ADD_SUBN_BPOS = 31;            // as zero to add to it.

// RESERVED                                                    Properties: Bit: 30, Type: ro, Reset Value: 0x0

                                                            // Properties: Bits: 29:0, Type: wo, Reset Value: 0x0
const uintptr_t TIMER_ADJUST_NS_DELTA_MASK = 0x3FFFFFFF;    // The number of nanoseconds to increment or
const uintptr_t TIMER_ADJUST_NS_DELTA_BPOS = 0;             // decrement the 1588 timer nanoseconds register. If
                                                            // necessary, the 1588 seconds register will be
                                                            // incremented or decremented.


//------------------------------------------------------------------------------
//
// Register (GEM) TIMER_INCR
//
// Name                    GEM_TIMER_INCR_REG
// Software Name           XEMACPS_1588_INC
// Relative Address        0x000001DC
// Absolute Address        gem0: 0xE000B1DC
//                         gem1: 0xE000C1DC
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             1588 timer increment
//
// Register GEM_TIMER_INCR_REG Details
//
// RESERVED                                                         Properties: Bits: 31:24, Type: ro, Reset Value: 0x0

                                                                 // Properties: Bits: 23:16, Type: rw, Reset Value: 0x0
const uintptr_t TIMER_INCR_INCR_B4_ALT_MASK     = 0x00FF0000;    // The number of increments after which the
const uintptr_t TIMER_INCR_INCR_B4_ALT_BPOS     = 16;            // alternative increment is used.

                                                                 // Properties: Bits: 15:8, Type: rw, Reset Value: 0x0
const uintptr_t TIMER_INCR_ALT_CT_NS_DELTA_MASK = 0x0000FF00;    // Alternative count of nanoseconds by which the
const uintptr_t TIMER_INCR_ALT_CT_NS_DELTA_BPOS = 8;             // 1588 timer nanoseconds register will be
                                                                 // incremented each clock cycle.

                                                                 // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t TIMER_INCR_NS_DELTA_MASK        = 0x000000FF;    // A count of nanoseconds by which the 1588 timer
const uintptr_t TIMER_INCR_NS_DELTA_BPOS        = 0;             // nanoseconds register will be incremented each
                                                                 // clock cycle.


//------------------------------------------------------------------------------
//
// Register (GEM) PTP_TX_S
//
// Name                    GEM_PTP_TX_S_REG
// Software Name           XEMACPS_PTP_TXSEC
// Relative Address        0x000001E0
// Absolute Address        gem0: 0xE000B1E0
//                         gem1: 0xE000C1E0
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             PTP event frame transmitted seconds
//
// Register GEM_PTP_TX_S_REG Details
//
                                                       // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_PTP_TX_S_VAL_MASK = 0xFFFFFFFF;    // The register is updated with the value that the
const uintptr_t GEM_PTP_TX_S_VAL_BPOS = 0;             // 1588 timer seconds register held when the SFD of
                                                       // a PTP transmit primary event crosses the MII
                                                       // interface. The actual update occurs when the
                                                       // GEM recognizes the frame as a PTP sync or
                                                       // delay_req frame. An interrupt is issued when the
                                                       // register is updated.


//------------------------------------------------------------------------------
//
// Register (GEM) PTP_TX_NS
//
// Name                    GEM_PTP_TX_NS_REG
// Software Name           XEMACPS_PTP_TXNANOSEC
// Relative Address        0x000001E4
// Absolute Address        gem0: 0xE000B1E4
//                         gem1: 0xE000C1E4
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             PTP event frame transmitted nanoseconds
//
// Register GEM_PTP_TX_NS_REG Details
//
// RESERVED                                                   Properties: Bits: 31:30, Type: ro, Reset Value: 0x0

                                                           // Properties: Bits: 29:0, Type: ro, Reset Value: 0x0
const uintptr_t PTP_TX_NS_NS_REG_VAL_MASK = 0x3FFFFFFF;    // The register is updated with the value that the
const uintptr_t PTP_TX_NS_NS_REG_VAL_BPOS = 0;             // 1588 timer nanoseconds register held when the
                                                           // SFD of a PTP transmit primary event crosses the
                                                           // MII interface. The actual update occurs when the
                                                           // GEM recognizes the frame as a PTP sync or
                                                           // delay_req frame. An interrupt is issued when the
                                                           // register is updated.


//------------------------------------------------------------------------------
//
// Register (GEM) PTP_RX_S
//
// Name                    GEM_PTP_RX_S_REG
// Software Name           XEMACPS_PTP_RXSEC
// Relative Address        0x000001E8
// Absolute Address        gem0: 0xE000B1E8
//                         gem1: 0xE000C1E8
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             PTP event frame received seconds
//
// Register GEM_PTP_RX_S_REG Details
//
                                                       // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_PTP_RX_S_VAL_MASK = 0xFFFFFFFF;    // The register is updated with the value that the
const uintptr_t GEM_PTP_RX_S_VAL_BPOS = 0;             // 1588 timer seconds register held when the SFD of
                                                       // a PTP receive primary event crosses the MII
                                                       // interface. The actual update occurs when the
                                                       // GEM recognizes the frame as a PTP sync or
                                                       // delay_req frame. An interrupt is issued when the
                                                       // register is updated.


//------------------------------------------------------------------------------
//
// Register (GEM) PTP_RX_NS
//
// Name                    GEM_PTP_RX_NS_REG
// Software Name           XEMACPS_PTP_RXNANOSEC
// Relative Address        0x000001EC
// Absolute Address        gem0: 0xE000B1EC
//                         gem1: 0xE000C1EC
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             PTP event frame received nanoseconds.
//
// Register GEM_PTP_RX_NS_REG Details
//
// RESERVED                                            Properties: Bits: 31:30, Type: ro, Reset Value: 0x0

                                                    // Properties: Bits: 29:0, Type: ro, Reset Value: 0x0
const uintptr_t PTP_RX_NS_VAL_MASK = 0x3FFFFFFF;    // The register is updated with the value that the
const uintptr_t PTP_RX_NS_VAL_BPOS = 0;             // 1588 timer nanoseconds register held when the
                                                    // SFD of a PTP receive primary event crosses the
                                                    // MII interface. The actual update occurs when the
                                                    // GEM recognizes the frame as a PTP sync or
                                                    // delay_req frame. An interrupt is issued when the
                                                    // register is updated.


//------------------------------------------------------------------------------
//
// Register (GEM) PTP_PEER_TX_S
//
// Name                    GEM_PTP_PEER_TX_S_REG
// Software Name           XEMACPS_PTPP_TXSEC
// Relative Address        0x000001F0
// Absolute Address        gem0: 0xE000B1F0
//                         gem1: 0xE000C1F0
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             PTP peer event frame transmitted seconds
//
// Register GEM_PTP_PEER_TX_S_REG Details
//
                                                            // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_PTP_PEER_TX_S_VAL_MASK = 0xFFFFFFFF;    // The register is updated with the value that the
const uintptr_t GEM_PTP_PEER_TX_S_VAL_BPOS = 0;             // 1588 timer seconds register held when the SFD of
                                                            // a PTP transmit peer event crosses the MII
                                                            // interface. The actual update occurs when the
                                                            // GEM recognizes the frame as a PTP pdealy_req or
                                                            // pdelay_resp frame. An interrupt is issued when
                                                            // the register is updated.


//------------------------------------------------------------------------------
//
// Register (GEM) PTP_PEER_TX_NS
//
// Name                    GEM_PTP_PEER_TX_NS_REG
// Software Name           XEMACPS_PTPP_TXNANOSEC
// Relative Address        0x000001F4
// Absolute Address        gem0: 0xE000B1F4
//                         gem1: 0xE000C1F4
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             PTP peer event frame transmitted nanoseconds
//
// Register GEM_PTP_PEER_TX_NS_REG Details
//
// RESERVED                                                 Properties: Bits: 31:30, Type: ro, Reset Value: 0x0

                                                         // Properties: Bits: 29:0, Type: ro, Reset Value: 0x0
const uintptr_t PTP_PEER_TX_NS_VAL_MASK = 0x3FFFFFFF;    // The register is updated with the value that the
const uintptr_t PTP_PEER_TX_NS_VAL_BPOS = 0;             // 1588 timer nanoseconds register held when the
                                                         // SFD of a PTP transmit peer event crosses the MII
                                                         // interface. The actual update occurs when the
                                                         // GEM recognizes the frame as a PTP pdelay_req or
                                                         // pdelay_resp frame. An interrupt is issued when
                                                         // the register is updated.


//------------------------------------------------------------------------------
//
// Register (GEM) PTP_PEER_RX_S
//
// Name                    GEM_PTP_PEER_RX_S_REG
// Software Name           XEMACPS_PTPP_RXSEC
// Relative Address        0x000001F8
// Absolute Address        gem0: 0xE000B1F8
//                         gem1: 0xE000C1F8
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             PTP peer event frame received seconds
//
// Register GEM_PTP_PEER_RX_S_REG Details
//
                                                            // Properties: Bits: 31:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_PTP_PEER_RX_S_VAL_MASK = 0xFFFFFFFF;    // The register is updated with the value that the
const uintptr_t GEM_PTP_PEER_RX_S_VAL_BPOS = 0;             // 1588 timer seconds register held when the SFD of
                                                            // a PTP receive peer event crosses the MII interface.
                                                            // The actual update occurs when the GEM
                                                            // recognizes the frame as a PTP pdelay_req or
                                                            // pdelay_resp frame. An interrupt is issued when
                                                            // the register is updated.


//------------------------------------------------------------------------------
//
// Register (GEM) PTP_PEER_RX_NS
//
// Name                    GEM_PTP_PEER_RX_NS_REG
// Software Name           XEMACPS_PTPP_RXNANOSEC
// Relative Address        0x000001FC
// Absolute Address        gem0: 0xE000B1FC
//                         gem1: 0xE000C1FC
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             PTP peer event frame received nanoseconds.
//
// Register GEM_PTP_PEER_RX_NS_REG Details
//
// RESERVED                                                 Properties: Bits: 31:30, Type: ro, Reset Value: 0x0

                                                         // Properties: Bits: 29:0, Type: ro, Reset Value: 0x0
const uintptr_t PTP_PEER_RX_NS_VAL_MASK = 0x3FFFFFFF;    // The register is updated with the value that the
const uintptr_t PTP_PEER_RX_NS_VAL_BPOS = 0;             // 1588 timer nanoseconds register held when the
                                                         // SFD of a PTP receive peer event crosses the MII
                                                         // interface. The actual update occurs when the
                                                         // GEM recognizes the frame as a PTP pdelay_req or
                                                         // pdelay_resp frame. An interrupt is issued when
                                                         // the register is updated.


//------------------------------------------------------------------------------
//
// Register (GEM) DESIGN_CFG2
//
// Name                    GEM_DESIGN_CFG2_REG
// Relative Address        0x00000284
// Absolute Address        gem0: 0xE000B284
//                         gem1: 0xE000C284
// Width                   32 bits
// Access Type             ro
// Reset Value             x
// Description             Design Configuration 2
//
// Register GEM_DESIGN_CFG2_REG Details
//
// RESERVED                                                   Properties: Bits: 31:30, Type: ro, Reset Value: x

                                                           // Properties: Bits: 29:26, Type: ro, Reset Value: 0xA
const uintptr_t GEM_TX_PBUF_ADDR_MASK     = 0x3C000000;    // Takes the value of the `gem_tx_pbuf_addr
const uintptr_t GEM_TX_PBUF_ADDR_BPOS     = 26;            // DEFINE. Max address bits for Tx packet buffer
                                                           // (10-bits for maximum 4 kB buffer). Buffer size for
                                                           // Tx packet buffer mode will be 4kB.
                                                           // This will allow one standard packet to be received
                                                           // while another is transferred to system memory by
                                                           // the DMA interface.

                                                           // Properties: Bits: 25:22, Type: ro, Reset Value: 0xA
const uintptr_t GEM_RX_PBUF_ADDR_MASK     = 0x03C00000;    // Takes the value of the `gem_rx_pbuf_addr
const uintptr_t GEM_RX_PBUF_ADDR_BPOS     = 22;            // DEFINE. Max address bits for Rx packet buffer
                                                           // (10-bits for maximum 4 kB buffer). Buffer size for
                                                           // Rx packet buffer mode will be 4kB.
                                                           // This will allow one standard packet to be received
                                                           // while another is transferred to system memory by
                                                           // the DMA interface.

                                                           // Properties: Bit: 21, Type: ro, Reset Value: x
const uintptr_t GEM_TX_PKT_BUFFER_MASK    = 0x00200000;    // Takes the value of the `gem_tx_pkt_buffer
const uintptr_t GEM_TX_PKT_BUFFER_BPOS    = 21;            // DEFINE. Defined for Zynq. Includes the
                                                           // transmitter packet buffer

                                                           // Properties: Bit: 20, Type: ro, Reset Value: x
const uintptr_t GEM_RX_PKT_BUFFER_MASK    = 0x00100000;    // Takes the value of the `gem_rx_pkt_buffer
const uintptr_t GEM_RX_PKT_BUFFER_BPOS    = 20;            // DEFINE. Defined for Zynq. Includes the receiver
                                                           // packet buffer.

                                                           // Properties: Bits: 19:16, Type: ro, Reset Value: 0x1
const uintptr_t GEM_HPROT_VALUE_MASK      = 0x000F0000;    // Takes the value of the `gem_hprot_value DEFINE.
const uintptr_t GEM_HPROT_VALUE_BPOS      = 16;            // For Zynq, set the fixed AHB HPROT value used
                                                           // during transfers.

                                                           // Properties: Bits: 15:0, Type: ro, Reset Value: 0x3FFF
const uintptr_t GEM_JUMBO_MAX_LENGTH_MASK = 0x0000FFFF;    // Takes the value of the `gem_jumbo_max_length
const uintptr_t GEM_JUMBO_MAX_LENGTH_BPOS = 0;             // DEFINE. Maximum length of jumbo frames
                                                           // accepted by receiver.
                                                           // This is set to the size of the smallest of the two
                                                           // packet buffer, minus a margin for packet headers.
                                                           // However, Zynq will not support jumbo frames.


//------------------------------------------------------------------------------
//
// Register (GEM) DESIGN_CFG3
//
// Name                    GEM_DESIGN_CFG3_REG
// Relative Address        0x00000288
// Absolute Address        gem0: 0xE000B288
//                         gem1: 0xE000C288
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Design Configuration 3
//
// Register GEM_DESIGN_CFG3_REG Details
//
                                                             // Properties: Bits: 31:16, Type: ro, Reset Value: 0x0
const uintptr_t GEM_RX_BASE2_FIFO_SIZE_MASK = 0xFFFF0000;    // Takes the value of the `gem_rx_base2_fifo_size
const uintptr_t GEM_RX_BASE2_FIFO_SIZE_BPOS = 16;            // DEFINE. Base-2 equivalent of `gem_rx_fifo_size

                                                             // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_RX_FIFO_SIZE_MASK       = 0x0000FFFF;    // Takes the value of the `gem_rx_fifo_size DEFINE.
const uintptr_t GEM_RX_FIFO_SIZE_BPOS       = 0;             // Set the size of the small Rx FIFO for grant latency.
                                                             // Extended to 16 deep to allow buffering of 64 byte
                                                             // maximum AHB burst size in Zynq.


//------------------------------------------------------------------------------
//
// Register (GEM) DESIGN_CFG4
//
// Name                    GEM_DESIGN_CFG4_REG
// Relative Address        0x0000028C
// Absolute Address        gem0: 0xE000B28C
//                         gem1: 0xE000C28C
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Design Configuration 4
//
// Register GEM_DESIGN_CFG4_REG Details
//
                                                             // Properties: Bits: 31:16, Type: ro, Reset Value: 0x0
const uintptr_t GEM_TX_BASE2_FIFO_SIZE_MASK = 0xFFFF0000;    // Takes the value of the `gem_tx_base2_fifo_size
const uintptr_t GEM_TX_BASE2_FIFO_SIZE_BPOS = 16;            // DEFINE. Base-2 equivalent of `gem_tx_fifo_size.

                                                             // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t GEM_TX_FIFO_SIZE_MASK       = 0x0000FFFF;    // Takes the value of the `gem_tx_fifo_size DEFINE.
const uintptr_t GEM_TX_FIFO_SIZE_BPOS       = 0;             // Set the size of the small TX FIFO for grant latency


//------------------------------------------------------------------------------
//
// Register (GEM) DESIGN_CFG5
//
// Name                    GEM_DESIGN_CFG5_REG
// Relative Address        0x00000290
// Absolute Address        gem0: 0xE000B290
//                         gem1: 0xE000C290
// Width                   32 bits
// Access Type             ro
// Reset Value             x
// Description             Design Configuration 5
//
// Register GEM_DESIGN_CFG5_REG Details
//
// RESERVED                                                       Properties: Bits: 31:29, Type: ro, Reset Value: x

                                                               // Properties: Bit: 28, Type: ro, Reset Value: x
const uintptr_t GEM_TSU_CLK_MASK              = 0x10000000;    // Takes the value of the `gem_tsu_clk DEFINE.
const uintptr_t GEM_TSU_CLK_BPOS              = 28;            // Undefined in Zynq. 1588 Time Stamp Unit clock
                                                               // sourced from pclk rather than independent
                                                               // tsu_clk.

                                                               // Properties: Bits: 27:20, Type: ro, Reset Value: 0x2
const uintptr_t GEM_RX_BUFFER_LENGTH_DEF_MASK = 0x0FF00000;    // Takes the value of the `gem_rx_buffer_length_def
const uintptr_t GEM_RX_BUFFER_LENGTH_DEF_BPOS = 20;            // DEFINE. Set the default buffer length used by Rx
                                                               // DMA to 128 bytes.

                                                               // Properties: Bit: 19, Type: ro, Reset Value: 0x1
const uintptr_t GEM_TX_PBUF_SIZE_DEF_MASK     = 0x00080000;    // Takes the value of the `gem_tx_pbuf_size_def
const uintptr_t GEM_TX_PBUF_SIZE_DEF_BPOS     = 19;            // DEFINE. Full 4 kB Tx packet buffer size -
                                                               // dedicated memory resource in Zynq.

                                                               // Properties: Bits: 18:17, Type: ro, Reset Value: 0x3
const uintptr_t GEM_RX_PBUF_SIZE_DEF_MASK     = 0x00060000;    // Takes the value of the `gem_rx_pbuf_size_def
const uintptr_t GEM_RX_PBUF_SIZE_DEF_BPOS     = 17;            // DEFINE. Full
                                                               // 4 kB Rx packet buffer size - dedicated memory
                                                               // resource in Zynq.

                                                               // Properties: Bits: 16:15, Type: ro, Reset Value: 0x2
const uintptr_t GEM_ENDIAN_SWAP_DEF_MASK      = 0x00018000;    // Takes the value of the `gem_endian_swap_def
const uintptr_t GEM_ENDIAN_SWAP_DEF_BPOS      = 15;            // DEFINE. Set to big endian data, little endian
                                                               // management descriptors in Zynq.

                                                               // Properties: Bits: 14:12, Type: ro, Reset Value: 0x2
const uintptr_t GEM_MDC_CLOCK_DIV_MASK        = 0x00007000;    // Takes the value of the `gem_mdc_clock_div
const uintptr_t GEM_MDC_CLOCK_DIV_BPOS        = 12;            // DEFINE. Set default MDC clock divisor (can still
                                                               // be programmed) in Zynq.

                                                               // Properties: Bits: 11:10, Type: ro, Reset Value: 0x0
const uintptr_t GEM_DMA_BUS_WIDTH_MASK        = 0x00000C00;    // Takes the value of the `gem_dma_bus_width_def
const uintptr_t GEM_DMA_BUS_WIDTH_BPOS        = 10;            // DEFINE. Limit to 32-bit AHB bus in Zynq.

                                                               // Properties: Bit: 9, Type: ro, Reset Value: x
const uintptr_t GEM_PHY_IDENT_MASK            = 0x00000200;    // Takes the value of the `gem_phy_ident DEFINE.
const uintptr_t GEM_PHY_IDENT_BPOS            = 9;             // Undefined in Zynq. Only used in PCS.

                                                               // Properties: Bit: 8, Type: ro, Reset Value: x
const uintptr_t GEM_TSU_MASK                  = 0x00000100;    // Takes the value of the `gem_tsu DEFINE. Defined
const uintptr_t GEM_TSU_BPOS                  = 8;             // in Zynq. Include support for 1588 Time Stamp
                                                               // Unit.

                                                               // Properties: Bits: 7:4, Type: ro, Reset Value: 0x4
const uintptr_t GEM_TX_FIFO_CNT_WIDTH_MASK    = 0x000000F0;    // Takes the value of the `gem_tx_fifo_cnt_width
const uintptr_t GEM_TX_FIFO_CNT_WIDTH_BPOS    = 4;             // DEFINE. Width for `gem_tx_fifo_size

                                                               // Properties: Bits: 3:0, Type: ro, Reset Value: 0x5
const uintptr_t GEM_RX_FIFO_CNT_WIDTH_MASK    = 0x0000000F;    // Takes the value of the `gem_rx_fifo_cnt_width
const uintptr_t GEM_RX_FIFO_CNT_WIDTH_BPOS    = 0;             // DEFINE. Width for `gem_rx_fifo_size.


#endif // PS7_GEM_H

