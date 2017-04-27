//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module Address Map 
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

#ifndef PS7MODMAP_H
#define PS7MODMAP_H

#include <stdint.h>

//              Name                      Address         Module          Description
const uintptr_t AXI_HP0_ADDR            = 0xF8008000;  // axi_hp          AXI_HP Interface (AFI), Interface 0 
const uintptr_t AXI_HP1_ADDR            = 0xF8009000;  // axi_hp          AXI_HP Interface (AFI), Interface 1 
const uintptr_t AXI_HP2_ADDR            = 0xF800A000;  // axi_hp          AXI_HP Interface (AFI), Interface 2 
const uintptr_t AXI_HP3_ADDR            = 0xF800B000;  // axi_hp          AXI_HP Interface (AFI), Interface 3 
const uintptr_t CAN0_ADDR               = 0xE0008000;  // can             Controller Area Network 
const uintptr_t CAN1_ADDR               = 0xE0009000;  // can             Controller Area Network 
const uintptr_t DDRC_ADDR               = 0xF8006000;  // ddrc            DDR memory controller 
const uintptr_t DEBUG_CPU_CTI0_ADDR     = 0xF8898000;  // cti             Cross Trigger Interface, CPU 0 
const uintptr_t DEBUG_CPU_CTI1_ADDR     = 0xF8899000;  // cti             Cross Trigger Interface, CPU 1 
const uintptr_t DEBUG_CPU_PMU0_ADDR     = 0xF8891000;  // cortexa9_pmu    Cortex A9 Performance Monitoring Unit, CPU 0
const uintptr_t DEBUG_CPU_PMU1_ADDR     = 0xF8893000;  // cortexa9_pmu    Cortex A9 Performance Monitoring Unit, CPU 1
const uintptr_t DEBUG_CPU_PTM0_ADDR     = 0xF889C000;  // ptm             CoreSight PTM-A9, CPU 0  
const uintptr_t DEBUG_CPU_PTM1_ADDR     = 0xF889D000;  // ptm             CoreSight PTM-A9, CPU 1 
const uintptr_t DEBUG_CTI_ETB_TPIU_ADDR = 0xF8802000;  // cti             Cross Trigger Interface, ETB and TPIU  
const uintptr_t DEBUG_CTI_FTM_ADDR      = 0xF8809000;  // cti             Cross Trigger Interface, FTM 
const uintptr_t DEBUG_DAP_ROM_ADDR      = 0xF8800000;  // dap             Debug Access Port ROM Table  
const uintptr_t DEBUG_ETB_ADDR          = 0xF8801000;  // etb             Embedded Trace Buffer 
const uintptr_t DEBUG_FTM_ADDR          = 0xF880B000;  // ftm             Fabric Trace Macrocell 
const uintptr_t DEBUG_FUNNEL_ADDR       = 0xF8804000;  // funnel          CoreSight Trace Funnel 
const uintptr_t DEBUG_ITM_ADDR          = 0xF8805000;  // itm             Instrumentation Trace Macrocell 
const uintptr_t DEBUG_TPIU_ADDR         = 0xF8803000;  // tpiu            Trace Port Interface Unit 
const uintptr_t DEVCFG_ADDR             = 0xF8007000;  // devcfg          Device configuraion Interface 
const uintptr_t DMAC0_NS_ADDR           = 0xF8004000;  // dmac            Direct Memory Access Controller, PL330, Non-Secure Mode 
const uintptr_t DMAC0_S_ADDR            = 0xF8003000;  // dmac            Direct Memory Access Controller, PL330, Secure Mode 
const uintptr_t GEM0_ADDR               = 0xE000B000;  // GEM             Gigabit Ethernet Controller
const uintptr_t GEM1_ADDR               = 0xE000C000;  // GEM             Gigabit Ethernet Controller 
const uintptr_t GPIO_ADDR               = 0xE000A000;  // gpio            General Purpose Input / Output 
const uintptr_t GPV_QOS301_CPU_ADDR     = 0xF8946000;  // qos301          AMBA Network Interconnect Advanced Quality of  Service (QoS-301), CPU-to-DDR 
const uintptr_t GPV_QOS301_DMAC_ADDR    = 0xF8947000;  // qos301          AMBA Network Interconnect Advanced Quality of  Service (QoS-301), DMAC 
const uintptr_t GPV_QOS301_IOU_ADDR     = 0xF8948000;  // qos301          AMBA Network Interconnect Advanced Quality of  Service (QoS-301), IOU 
const uintptr_t GPV_TRUSTZONE_ADDR      = 0xF8900000;  // nic301          AMBA NIC301 TrustZone. 
const uintptr_t I2C0_ADDR               = 0xE0004000;  // IIC             Inter Integrated Circuit (I2C) 
const uintptr_t I2C1_ADDR               = 0xE0005000;  // IIC             Inter Integrated Circuit (I2C) 
const uintptr_t L2CACHE_ADDR            = 0xF8F02000;  // L2Cpl310        L2 cache PL310 
const uintptr_t MPCORE_ADDR             = 0xF8F00000;  // mpcore          Mpcore - SCU, Interrupt controller, Counters and Timers 
const uintptr_t OCM_ADDR                = 0xF800C000;  // ocm             On-Chip Memory Registers 
const uintptr_t QSPI_ADDR               = 0xE000D000;  // qspi            LQSPI module Registers 
const uintptr_t SD0_ADDR                = 0xE0100000;  // sdio            SD2.0/ SDIO2.0/ MMC3.31 AHB Host ControllerRegisters 
const uintptr_t SD1_ADDR                = 0xE0101000;  // sdio            SD2.0/ SDIO2.0/ MMC3.31 AHB Host ControllerRegisters 
const uintptr_t SLCR_ADDR               = 0xF8000000;  // slcr            System Level Control Registers 
const uintptr_t SMCC_ADDR               = 0xE000E000;  // pl353           Shared memory controller 
const uintptr_t SPI0_ADDR               = 0xE0006000;  // SPI             Serial Peripheral Interface 
const uintptr_t SPI1_ADDR               = 0xE0007000;  // SPI             Serial Peripheral Interface 
const uintptr_t SWDT_ADDR               = 0xF8005000;  // swdt            System Watchdog Timer Registers 
const uintptr_t TTC0_ADDR               = 0xF8001000;  // ttc             Triple Timer Counter 
const uintptr_t TTC1_ADDR               = 0xF8002000;  // ttc             Triple Timer Counter 
const uintptr_t UART0_ADDR              = 0xE0000000;  // UART            Universal Asynchronous Receiver Transmitter 
const uintptr_t UART1_ADDR              = 0xE0001000;  // UART            Universal Asynchronous Receiver Transmitter 
const uintptr_t USB0_ADDR               = 0xE0002000;  // usb             USB controller registers 
const uintptr_t USB1_ADDR               = 0xE0003000;  // usb             USB controller registers
//------------------------------------------------------------------------------
                                                        
#endif // PS7MODMAP_H
//------------------------------------------------------------------------------

