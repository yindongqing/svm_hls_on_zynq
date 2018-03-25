// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// AXILiteS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of ap_return
//        bit 0  - ap_return[0] (Read)
//        others - reserved
// 0x18 : Data signal of in_V
//        bit 31~0 - in_V[31:0] (Read/Write)
// 0x1c : Data signal of in_V
//        bit 31~0 - in_V[63:32] (Read/Write)
// 0x20 : Data signal of in_V
//        bit 31~0 - in_V[95:64] (Read/Write)
// 0x24 : Data signal of in_V
//        bit 31~0 - in_V[127:96] (Read/Write)
// 0x28 : Data signal of in_V
//        bit 31~0 - in_V[159:128] (Read/Write)
// 0x2c : Data signal of in_V
//        bit 31~0 - in_V[191:160] (Read/Write)
// 0x30 : Data signal of in_V
//        bit 31~0 - in_V[223:192] (Read/Write)
// 0x34 : Data signal of in_V
//        bit 31~0 - in_V[255:224] (Read/Write)
// 0x38 : reserved
// 0x3c : Data signal of lp_count
//        bit 31~0 - lp_count[31:0] (Read)
// 0x40 : Control signal of lp_count
//        bit 0  - lp_count_ap_vld (Read/COR)
//        others - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XSVM_CLASSIFIER_AXILITES_ADDR_AP_CTRL       0x00
#define XSVM_CLASSIFIER_AXILITES_ADDR_GIE           0x04
#define XSVM_CLASSIFIER_AXILITES_ADDR_IER           0x08
#define XSVM_CLASSIFIER_AXILITES_ADDR_ISR           0x0c
#define XSVM_CLASSIFIER_AXILITES_ADDR_AP_RETURN     0x10
#define XSVM_CLASSIFIER_AXILITES_BITS_AP_RETURN     1
#define XSVM_CLASSIFIER_AXILITES_ADDR_IN_V_DATA     0x18
#define XSVM_CLASSIFIER_AXILITES_BITS_IN_V_DATA     256
#define XSVM_CLASSIFIER_AXILITES_ADDR_LP_COUNT_DATA 0x3c
#define XSVM_CLASSIFIER_AXILITES_BITS_LP_COUNT_DATA 32
#define XSVM_CLASSIFIER_AXILITES_ADDR_LP_COUNT_CTRL 0x40

