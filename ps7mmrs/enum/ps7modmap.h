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

enum TPS7ModMap
{
//  Name                      Address           Module          Description
    AXI_HP0_ADDR            = 0xF8008000UL,  // axi_hp          AXI_HP Interface (AFI), Interface 0 
    AXI_HP1_ADDR            = 0xF8009000UL,  // axi_hp          AXI_HP Interface (AFI), Interface 1 
    AXI_HP2_ADDR            = 0xF800A000UL,  // axi_hp          AXI_HP Interface (AFI), Interface 2 
    AXI_HP3_ADDR            = 0xF800B000UL,  // axi_hp          AXI_HP Interface (AFI), Interface 3 
    CAN0_ADDR               = 0xE0008000UL,  // can             Controller Area Network 
    CAN1_ADDR               = 0xE0009000UL,  // can             Controller Area Network 
    DDRC_ADDR               = 0xF8006000UL,  // ddrc            DDR memory controller 
    DEBUG_CPU_CTI0_ADDR     = 0xF8898000UL,  // cti             Cross Trigger Interface, CPU 0 
    DEBUG_CPU_CTI1_ADDR     = 0xF8899000UL,  // cti             Cross Trigger Interface, CPU 1 
    DEBUG_CPU_PMU0_ADDR     = 0xF8891000UL,  // cortexa9_pmu    Cortex A9 Performance Monitoring Unit, CPU 0
    DEBUG_CPU_PMU1_ADDR     = 0xF8893000UL,  // cortexa9_pmu    Cortex A9 Performance Monitoring Unit, CPU 1
    DEBUG_CPU_PTM0_ADDR     = 0xF889C000UL,  // ptm             CoreSight PTM-A9, CPU 0  
    DEBUG_CPU_PTM1_ADDR     = 0xF889D000UL,  // ptm             CoreSight PTM-A9, CPU 1 
    DEBUG_CTI_ETB_TPIU_ADDR = 0xF8802000UL,  // cti             Cross Trigger Interface, ETB and TPIU  
    DEBUG_CTI_FTM_ADDR      = 0xF8809000UL,  // cti             Cross Trigger Interface, FTM 
    DEBUG_DAP_ROM_ADDR      = 0xF8800000UL,  // dap             Debug Access Port ROM Table  
    DEBUG_ETB_ADDR          = 0xF8801000UL,  // etb             Embedded Trace Buffer 
    DEBUG_FTM_ADDR          = 0xF880B000UL,  // ftm             Fabric Trace Macrocell 
    DEBUG_FUNNEL_ADDR       = 0xF8804000UL,  // funnel          CoreSight Trace Funnel 
    DEBUG_ITM_ADDR          = 0xF8805000UL,  // itm             Instrumentation Trace Macrocell 
    DEBUG_TPIU_ADDR         = 0xF8803000UL,  // tpiu            Trace Port Interface Unit 
    DEVCFG_ADDR             = 0xF8007000UL,  // devcfg          Device configuraion Interface 
    DMAC0_NS_ADDR           = 0xF8004000UL,  // dmac            Direct Memory Access Controller, PL330, Non-Secure Mode 
    DMAC0_S_ADDR            = 0xF8003000UL,  // dmac            Direct Memory Access Controller, PL330, Secure Mode 
    GEM0_ADDR               = 0xE000B000UL,  // GEM             Gigabit Ethernet Controller
    GEM1_ADDR               = 0xE000C000UL,  // GEM             Gigabit Ethernet Controller 
    GPIO_ADDR               = 0xE000A000UL,  // gpio            General Purpose Input / Output 
    GPV_QOS301_CPU_ADDR     = 0xF8946000UL,  // qos301          AMBA Network Interconnect Advanced Quality of  Service (QoS-301), CPU-to-DDR 
    GPV_QOS301_DMAC_ADDR    = 0xF8947000UL,  // qos301          AMBA Network Interconnect Advanced Quality of  Service (QoS-301), DMAC 
    GPV_QOS301_IOU_ADDR     = 0xF8948000UL,  // qos301          AMBA Network Interconnect Advanced Quality of  Service (QoS-301), IOU 
    GPV_TRUSTZONE_ADDR      = 0xF8900000UL,  // nic301          AMBA NIC301 TrustZone. 
    I2C0_ADDR               = 0xE0004000UL,  // IIC             Inter Integrated Circuit (I2C) 
    I2C1_ADDR               = 0xE0005000UL,  // IIC             Inter Integrated Circuit (I2C) 
    L2CACHE_ADDR            = 0xF8F02000UL,  // L2Cpl310        L2 cache PL310 
    MPCORE_ADDR             = 0xF8F00000UL,  // mpcore          Mpcore - SCU, Interrupt controller, Counters and Timers 
    OCM_ADDR                = 0xF800C000UL,  // ocm             On-Chip Memory Registers 
    QSPI_ADDR               = 0xE000D000UL,  // qspi            LQSPI module Registers 
    SD0_ADDR                = 0xE0100000UL,  // sdio            SD2.0/ SDIO2.0/ MMC3.31 AHB Host ControllerRegisters 
    SD1_ADDR                = 0xE0101000UL,  // sdio            SD2.0/ SDIO2.0/ MMC3.31 AHB Host ControllerRegisters 
    SLCR_ADDR               = 0xF8000000UL,  // slcr            System Level Control Registers 
    SMCC_ADDR               = 0xE000E000UL,  // pl353           Shared memory controller 
    SPI0_ADDR               = 0xE0006000UL,  // SPI             Serial Peripheral Interface 
    SPI1_ADDR               = 0xE0007000UL,  // SPI             Serial Peripheral Interface 
    SWDT_ADDR               = 0xF8005000UL,  // swdt            System Watchdog Timer Registers 
    TTC0_ADDR               = 0xF8001000UL,  // ttc             Triple Timer Counter 
    TTC1_ADDR               = 0xF8002000UL,  // ttc             Triple Timer Counter 
    UART0_ADDR              = 0xE0000000UL,  // UART            Universal Asynchronous Receiver Transmitter 
    UART1_ADDR              = 0xE0001000UL,  // UART            Universal Asynchronous Receiver Transmitter 
    USB0_ADDR               = 0xE0002000UL,  // usb             USB controller registers 
    USB1_ADDR               = 0xE0003000UL   // usb             USB controller registers
};
//------------------------------------------------------------------------------
                                                        
#endif // PS7MODMAP_H
//------------------------------------------------------------------------------

