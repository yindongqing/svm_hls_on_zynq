// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _svm_classifier_HH_
#define _svm_classifier_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "svm_classifier_svm_classifier_process.h"
#include "svm_classifier_SVs_l_V_0.h"
#include "svm_classifier_SVs_l_V_1.h"
#include "svm_classifier_SVs_l_V_2.h"
#include "svm_classifier_SVs_l_V_3.h"
#include "svm_classifier_SVs_l_V_4.h"
#include "svm_classifier_SVs_l_V_5.h"
#include "svm_classifier_SVs_l_V_6.h"
#include "svm_classifier_SVs_l_V_7.h"
#include "svm_classifier_SVs_l_V_8.h"
#include "svm_classifier_SVs_l_V_9.h"
#include "svm_classifier_SVs_l_V_10.h"
#include "svm_classifier_SVs_l_V_11.h"
#include "svm_classifier_SVs_l_V_12.h"
#include "svm_classifier_SVs_l_V_13.h"
#include "svm_classifier_SVs_l_V_14.h"
#include "svm_classifier_SVs_l_V_15.h"
#include "svm_classifier_SVs_l_V_16.h"
#include "svm_classifier_SVs_l_V_17.h"
#include "svm_classifier_alpha_l_V_0.h"
#include "svm_classifier_alpha_l_V_1.h"
#include "svm_classifier_alpha_l_V_2.h"
#include "svm_classifier_alpha_l_V_3.h"
#include "svm_classifier_alpha_l_V_4.h"
#include "svm_classifier_alpha_l_V_5.h"
#include "svm_classifier_alpha_l_V_6.h"
#include "svm_classifier_alpha_l_V_7.h"
#include "svm_classifier_alpha_l_V_8.h"
#include "svm_classifier_alpha_l_V_9.h"
#include "svm_classifier_alpha_l_V_10.h"
#include "svm_classifier_alpha_l_V_11.h"
#include "svm_classifier_alpha_l_V_12.h"
#include "svm_classifier_alpha_l_V_13.h"
#include "svm_classifier_alpha_l_V_14.h"
#include "svm_classifier_alpha_l_V_15.h"
#include "svm_classifier_alpha_l_V_16.h"
#include "svm_classifier_alpha_l_V_17.h"
#include "svm_classifier_SVs_h_V_0.h"
#include "svm_classifier_SVs_h_V_1.h"
#include "svm_classifier_SVs_h_V_2.h"
#include "svm_classifier_SVs_h_V_3.h"
#include "svm_classifier_SVs_h_V_4.h"
#include "svm_classifier_SVs_h_V_5.h"
#include "svm_classifier_SVs_h_V_6.h"
#include "svm_classifier_SVs_h_V_7.h"
#include "svm_classifier_SVs_h_V_8.h"
#include "svm_classifier_SVs_h_V_9.h"
#include "svm_classifier_SVs_h_V_10.h"
#include "svm_classifier_SVs_h_V_11.h"
#include "svm_classifier_SVs_h_V_12.h"
#include "svm_classifier_SVs_h_V_13.h"
#include "svm_classifier_SVs_h_V_14.h"
#include "svm_classifier_SVs_h_V_15.h"
#include "svm_classifier_SVs_h_V_16.h"
#include "svm_classifier_SVs_h_V_17.h"
#include "svm_classifier_alpha_h_V_0.h"
#include "svm_classifier_alpha_h_V_1.h"
#include "svm_classifier_alpha_h_V_2.h"
#include "svm_classifier_alpha_h_V_3.h"
#include "svm_classifier_alpha_h_V_4.h"
#include "svm_classifier_alpha_h_V_5.h"
#include "svm_classifier_alpha_h_V_6.h"
#include "svm_classifier_alpha_h_V_7.h"
#include "svm_classifier_alpha_h_V_8.h"
#include "svm_classifier_alpha_h_V_9.h"
#include "svm_classifier_alpha_h_V_10.h"
#include "svm_classifier_alpha_h_V_11.h"
#include "svm_classifier_alpha_h_V_12.h"
#include "svm_classifier_alpha_h_V_13.h"
#include "svm_classifier_alpha_h_V_14.h"
#include "svm_classifier_alpha_h_V_15.h"
#include "svm_classifier_alpha_h_V_16.h"
#include "svm_classifier_alpha_h_V_17.h"
#include "svm_classifier_AXILiteS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 7,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct svm_classifier : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_lv<32> > hp_count;
    sc_out< sc_logic > hp_count_ap_vld;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    svm_classifier(sc_module_name name);
    SC_HAS_PROCESS(svm_classifier);

    ~svm_classifier();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    svm_classifier_SVs_l_V_0* SVs_l_V_0_U;
    svm_classifier_SVs_l_V_1* SVs_l_V_1_U;
    svm_classifier_SVs_l_V_2* SVs_l_V_2_U;
    svm_classifier_SVs_l_V_3* SVs_l_V_3_U;
    svm_classifier_SVs_l_V_4* SVs_l_V_4_U;
    svm_classifier_SVs_l_V_5* SVs_l_V_5_U;
    svm_classifier_SVs_l_V_6* SVs_l_V_6_U;
    svm_classifier_SVs_l_V_7* SVs_l_V_7_U;
    svm_classifier_SVs_l_V_8* SVs_l_V_8_U;
    svm_classifier_SVs_l_V_9* SVs_l_V_9_U;
    svm_classifier_SVs_l_V_10* SVs_l_V_10_U;
    svm_classifier_SVs_l_V_11* SVs_l_V_11_U;
    svm_classifier_SVs_l_V_12* SVs_l_V_12_U;
    svm_classifier_SVs_l_V_13* SVs_l_V_13_U;
    svm_classifier_SVs_l_V_14* SVs_l_V_14_U;
    svm_classifier_SVs_l_V_15* SVs_l_V_15_U;
    svm_classifier_SVs_l_V_16* SVs_l_V_16_U;
    svm_classifier_SVs_l_V_17* SVs_l_V_17_U;
    svm_classifier_alpha_l_V_0* alpha_l_V_0_U;
    svm_classifier_alpha_l_V_1* alpha_l_V_1_U;
    svm_classifier_alpha_l_V_2* alpha_l_V_2_U;
    svm_classifier_alpha_l_V_3* alpha_l_V_3_U;
    svm_classifier_alpha_l_V_4* alpha_l_V_4_U;
    svm_classifier_alpha_l_V_5* alpha_l_V_5_U;
    svm_classifier_alpha_l_V_6* alpha_l_V_6_U;
    svm_classifier_alpha_l_V_7* alpha_l_V_7_U;
    svm_classifier_alpha_l_V_8* alpha_l_V_8_U;
    svm_classifier_alpha_l_V_9* alpha_l_V_9_U;
    svm_classifier_alpha_l_V_10* alpha_l_V_10_U;
    svm_classifier_alpha_l_V_11* alpha_l_V_11_U;
    svm_classifier_alpha_l_V_12* alpha_l_V_12_U;
    svm_classifier_alpha_l_V_13* alpha_l_V_13_U;
    svm_classifier_alpha_l_V_14* alpha_l_V_14_U;
    svm_classifier_alpha_l_V_15* alpha_l_V_15_U;
    svm_classifier_alpha_l_V_16* alpha_l_V_16_U;
    svm_classifier_alpha_l_V_17* alpha_l_V_17_U;
    svm_classifier_SVs_h_V_0* SVs_h_V_0_U;
    svm_classifier_SVs_h_V_1* SVs_h_V_1_U;
    svm_classifier_SVs_h_V_2* SVs_h_V_2_U;
    svm_classifier_SVs_h_V_3* SVs_h_V_3_U;
    svm_classifier_SVs_h_V_4* SVs_h_V_4_U;
    svm_classifier_SVs_h_V_5* SVs_h_V_5_U;
    svm_classifier_SVs_h_V_6* SVs_h_V_6_U;
    svm_classifier_SVs_h_V_7* SVs_h_V_7_U;
    svm_classifier_SVs_h_V_8* SVs_h_V_8_U;
    svm_classifier_SVs_h_V_9* SVs_h_V_9_U;
    svm_classifier_SVs_h_V_10* SVs_h_V_10_U;
    svm_classifier_SVs_h_V_11* SVs_h_V_11_U;
    svm_classifier_SVs_h_V_12* SVs_h_V_12_U;
    svm_classifier_SVs_h_V_13* SVs_h_V_13_U;
    svm_classifier_SVs_h_V_14* SVs_h_V_14_U;
    svm_classifier_SVs_h_V_15* SVs_h_V_15_U;
    svm_classifier_SVs_h_V_16* SVs_h_V_16_U;
    svm_classifier_SVs_h_V_17* SVs_h_V_17_U;
    svm_classifier_alpha_h_V_0* alpha_h_V_0_U;
    svm_classifier_alpha_h_V_1* alpha_h_V_1_U;
    svm_classifier_alpha_h_V_2* alpha_h_V_2_U;
    svm_classifier_alpha_h_V_3* alpha_h_V_3_U;
    svm_classifier_alpha_h_V_4* alpha_h_V_4_U;
    svm_classifier_alpha_h_V_5* alpha_h_V_5_U;
    svm_classifier_alpha_h_V_6* alpha_h_V_6_U;
    svm_classifier_alpha_h_V_7* alpha_h_V_7_U;
    svm_classifier_alpha_h_V_8* alpha_h_V_8_U;
    svm_classifier_alpha_h_V_9* alpha_h_V_9_U;
    svm_classifier_alpha_h_V_10* alpha_h_V_10_U;
    svm_classifier_alpha_h_V_11* alpha_h_V_11_U;
    svm_classifier_alpha_h_V_12* alpha_h_V_12_U;
    svm_classifier_alpha_h_V_13* alpha_h_V_13_U;
    svm_classifier_alpha_h_V_14* alpha_h_V_14_U;
    svm_classifier_alpha_h_V_15* alpha_h_V_15_U;
    svm_classifier_alpha_h_V_16* alpha_h_V_16_U;
    svm_classifier_alpha_h_V_17* alpha_h_V_17_U;
    svm_classifier_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* svm_classifier_AXILiteS_s_axi_U;
    svm_classifier_svm_classifier_process* grp_svm_classifier_svm_classifier_process_fu_293;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_22;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<256> > in_V;
    sc_signal< sc_lv<32> > lp_count;
    sc_signal< sc_logic > lp_count_ap_vld;
    sc_signal< sc_lv<240> > SVs_l_V_0_q0;
    sc_signal< sc_lv<240> > SVs_l_V_1_q0;
    sc_signal< sc_lv<240> > SVs_l_V_2_q0;
    sc_signal< sc_lv<240> > SVs_l_V_3_q0;
    sc_signal< sc_lv<240> > SVs_l_V_4_q0;
    sc_signal< sc_lv<240> > SVs_l_V_5_q0;
    sc_signal< sc_lv<240> > SVs_l_V_6_q0;
    sc_signal< sc_lv<240> > SVs_l_V_7_q0;
    sc_signal< sc_lv<240> > SVs_l_V_8_q0;
    sc_signal< sc_lv<240> > SVs_l_V_9_q0;
    sc_signal< sc_lv<240> > SVs_l_V_10_q0;
    sc_signal< sc_lv<240> > SVs_l_V_11_q0;
    sc_signal< sc_lv<240> > SVs_l_V_12_q0;
    sc_signal< sc_lv<240> > SVs_l_V_13_q0;
    sc_signal< sc_lv<240> > SVs_l_V_14_q0;
    sc_signal< sc_lv<240> > SVs_l_V_15_q0;
    sc_signal< sc_lv<240> > SVs_l_V_16_q0;
    sc_signal< sc_lv<240> > SVs_l_V_17_q0;
    sc_signal< sc_lv<13> > alpha_l_V_0_q0;
    sc_signal< sc_lv<13> > alpha_l_V_1_q0;
    sc_signal< sc_lv<13> > alpha_l_V_2_q0;
    sc_signal< sc_lv<13> > alpha_l_V_3_q0;
    sc_signal< sc_lv<13> > alpha_l_V_4_q0;
    sc_signal< sc_lv<13> > alpha_l_V_5_q0;
    sc_signal< sc_lv<13> > alpha_l_V_6_q0;
    sc_signal< sc_lv<13> > alpha_l_V_7_q0;
    sc_signal< sc_lv<13> > alpha_l_V_8_q0;
    sc_signal< sc_lv<13> > alpha_l_V_9_q0;
    sc_signal< sc_lv<13> > alpha_l_V_10_q0;
    sc_signal< sc_lv<13> > alpha_l_V_11_q0;
    sc_signal< sc_lv<13> > alpha_l_V_12_q0;
    sc_signal< sc_lv<13> > alpha_l_V_13_q0;
    sc_signal< sc_lv<13> > alpha_l_V_14_q0;
    sc_signal< sc_lv<13> > alpha_l_V_15_q0;
    sc_signal< sc_lv<13> > alpha_l_V_16_q0;
    sc_signal< sc_lv<13> > alpha_l_V_17_q0;
    sc_signal< sc_lv<240> > SVs_h_V_0_q0;
    sc_signal< sc_lv<240> > SVs_h_V_1_q0;
    sc_signal< sc_lv<240> > SVs_h_V_2_q0;
    sc_signal< sc_lv<240> > SVs_h_V_3_q0;
    sc_signal< sc_lv<240> > SVs_h_V_4_q0;
    sc_signal< sc_lv<240> > SVs_h_V_5_q0;
    sc_signal< sc_lv<240> > SVs_h_V_6_q0;
    sc_signal< sc_lv<240> > SVs_h_V_7_q0;
    sc_signal< sc_lv<240> > SVs_h_V_8_q0;
    sc_signal< sc_lv<240> > SVs_h_V_9_q0;
    sc_signal< sc_lv<240> > SVs_h_V_10_q0;
    sc_signal< sc_lv<240> > SVs_h_V_11_q0;
    sc_signal< sc_lv<240> > SVs_h_V_12_q0;
    sc_signal< sc_lv<240> > SVs_h_V_13_q0;
    sc_signal< sc_lv<240> > SVs_h_V_14_q0;
    sc_signal< sc_lv<240> > SVs_h_V_15_q0;
    sc_signal< sc_lv<240> > SVs_h_V_16_q0;
    sc_signal< sc_lv<240> > SVs_h_V_17_q0;
    sc_signal< sc_lv<13> > alpha_h_V_0_q0;
    sc_signal< sc_lv<13> > alpha_h_V_1_q0;
    sc_signal< sc_lv<13> > alpha_h_V_2_q0;
    sc_signal< sc_lv<13> > alpha_h_V_3_q0;
    sc_signal< sc_lv<13> > alpha_h_V_4_q0;
    sc_signal< sc_lv<13> > alpha_h_V_5_q0;
    sc_signal< sc_lv<13> > alpha_h_V_6_q0;
    sc_signal< sc_lv<13> > alpha_h_V_7_q0;
    sc_signal< sc_lv<13> > alpha_h_V_8_q0;
    sc_signal< sc_lv<13> > alpha_h_V_9_q0;
    sc_signal< sc_lv<13> > alpha_h_V_10_q0;
    sc_signal< sc_lv<13> > alpha_h_V_11_q0;
    sc_signal< sc_lv<13> > alpha_h_V_12_q0;
    sc_signal< sc_lv<13> > alpha_h_V_13_q0;
    sc_signal< sc_lv<13> > alpha_h_V_14_q0;
    sc_signal< sc_lv<13> > alpha_h_V_15_q0;
    sc_signal< sc_lv<13> > alpha_h_V_16_q0;
    sc_signal< sc_lv<13> > alpha_h_V_17_q0;
    sc_signal< sc_lv<13> > s_in_0_V_reg_663;
    sc_signal< sc_lv<13> > s_in_1_V_reg_668;
    sc_signal< sc_lv<13> > s_in_2_V_reg_673;
    sc_signal< sc_lv<13> > s_in_3_V_reg_678;
    sc_signal< sc_lv<13> > s_in_4_V_reg_683;
    sc_signal< sc_lv<13> > s_in_5_V_reg_688;
    sc_signal< sc_lv<13> > s_in_6_V_reg_693;
    sc_signal< sc_lv<13> > s_in_7_V_reg_698;
    sc_signal< sc_lv<13> > s_in_8_V_reg_703;
    sc_signal< sc_lv<13> > s_in_9_V_reg_708;
    sc_signal< sc_lv<13> > s_in_10_V_reg_713;
    sc_signal< sc_lv<13> > s_in_11_V_reg_718;
    sc_signal< sc_lv<13> > s_in_12_V_reg_723;
    sc_signal< sc_lv<13> > s_in_13_V_reg_728;
    sc_signal< sc_lv<13> > s_in_14_V_reg_733;
    sc_signal< sc_lv<13> > s_in_15_V_reg_738;
    sc_signal< sc_lv<18> > grp_svm_classifier_svm_classifier_process_fu_293_ap_return;
    sc_signal< sc_lv<18> > lp_res_V_reg_743;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_689;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_ap_done;
    sc_signal< sc_lv<19> > tmp_15_fu_601_p1;
    sc_signal< sc_lv<19> > tmp_15_reg_748;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_702;
    sc_signal< sc_lv<1> > or_cond_fu_622_p2;
    sc_signal< sc_lv<1> > or_cond_reg_753;
    sc_signal< sc_lv<1> > out_reg_762;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_718;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_ap_start;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_ap_idle;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_ap_ready;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_0_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_0_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_0_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_1_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_1_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_1_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_2_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_2_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_2_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_3_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_3_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_3_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_4_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_4_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_4_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_5_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_5_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_5_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_6_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_6_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_6_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_7_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_7_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_7_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_8_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_8_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_8_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_9_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_9_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_9_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_10_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_10_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_10_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_11_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_11_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_11_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_12_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_12_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_12_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_13_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_13_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_13_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_14_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_14_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_14_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_15_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_15_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_15_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_16_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_16_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_16_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_17_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_17_V_ce0;
    sc_signal< sc_lv<240> > grp_svm_classifier_svm_classifier_process_fu_293_SV_in_17_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_0_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_0_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_0_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_1_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_1_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_1_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_2_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_2_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_2_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_3_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_3_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_3_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_4_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_4_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_4_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_5_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_5_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_5_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_6_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_6_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_6_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_7_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_7_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_7_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_8_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_8_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_8_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_9_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_9_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_9_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_10_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_10_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_10_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_11_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_11_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_11_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_12_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_12_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_12_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_13_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_13_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_13_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_14_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_14_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_14_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_15_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_15_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_15_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_16_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_16_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_16_V_q0;
    sc_signal< sc_lv<5> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_17_V_address0;
    sc_signal< sc_logic > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_17_V_ce0;
    sc_signal< sc_lv<13> > grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_17_V_q0;
    sc_signal< sc_lv<1> > out2_phi_fu_287_p4;
    sc_signal< sc_lv<1> > out2_reg_284;
    sc_signal< sc_logic > ap_sig_cseq_ST_st5_fsm_4;
    sc_signal< bool > ap_sig_857;
    sc_signal< sc_logic > ap_reg_grp_svm_classifier_svm_classifier_process_fu_293_ap_start;
    sc_signal< sc_lv<19> > r_V_fu_604_p2;
    sc_signal< sc_lv<1> > tmp_16_fu_610_p2;
    sc_signal< sc_lv<1> > tmp_17_fu_616_p2;
    sc_signal< sc_lv<19> > tmp_18_fu_636_p1;
    sc_signal< sc_lv<19> > p_Val2_2_fu_640_p2;
    sc_signal< sc_lv<20> > tmp_19_fu_645_p1;
    sc_signal< sc_lv<20> > r_V_1_fu_649_p2;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    sc_signal< sc_lv<1> > ap_return;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_st1_fsm_0;
    static const sc_lv<5> ap_ST_st2_fsm_1;
    static const sc_lv<5> ap_ST_st3_fsm_2;
    static const sc_lv<5> ap_ST_st4_fsm_3;
    static const sc_lv<5> ap_ST_st5_fsm_4;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_43;
    static const sc_lv<32> ap_const_lv32_4F;
    static const sc_lv<32> ap_const_lv32_53;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_63;
    static const sc_lv<32> ap_const_lv32_6F;
    static const sc_lv<32> ap_const_lv32_73;
    static const sc_lv<32> ap_const_lv32_7F;
    static const sc_lv<32> ap_const_lv32_83;
    static const sc_lv<32> ap_const_lv32_8F;
    static const sc_lv<32> ap_const_lv32_93;
    static const sc_lv<32> ap_const_lv32_9F;
    static const sc_lv<32> ap_const_lv32_A3;
    static const sc_lv<32> ap_const_lv32_AF;
    static const sc_lv<32> ap_const_lv32_B3;
    static const sc_lv<32> ap_const_lv32_BF;
    static const sc_lv<32> ap_const_lv32_C3;
    static const sc_lv<32> ap_const_lv32_CF;
    static const sc_lv<32> ap_const_lv32_D3;
    static const sc_lv<32> ap_const_lv32_DF;
    static const sc_lv<32> ap_const_lv32_E3;
    static const sc_lv<32> ap_const_lv32_EF;
    static const sc_lv<32> ap_const_lv32_F3;
    static const sc_lv<32> ap_const_lv32_FF;
    static const sc_lv<19> ap_const_lv19_E758;
    static const sc_lv<19> ap_const_lv19_7FF00;
    static const sc_lv<19> ap_const_lv19_8200;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<20> ap_const_lv20_E758;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_22();
    void thread_ap_sig_689();
    void thread_ap_sig_702();
    void thread_ap_sig_718();
    void thread_ap_sig_857();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st5_fsm_4();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_0_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_10_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_11_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_12_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_13_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_14_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_15_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_16_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_17_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_1_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_2_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_3_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_4_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_5_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_6_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_7_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_8_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_SV_in_9_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_0_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_10_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_11_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_12_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_13_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_14_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_15_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_16_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_17_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_1_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_2_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_3_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_4_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_5_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_6_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_7_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_8_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_alpha_in_9_V_q0();
    void thread_grp_svm_classifier_svm_classifier_process_fu_293_ap_start();
    void thread_hp_count();
    void thread_hp_count_ap_vld();
    void thread_lp_count();
    void thread_lp_count_ap_vld();
    void thread_or_cond_fu_622_p2();
    void thread_out2_phi_fu_287_p4();
    void thread_p_Val2_2_fu_640_p2();
    void thread_r_V_1_fu_649_p2();
    void thread_r_V_fu_604_p2();
    void thread_tmp_15_fu_601_p1();
    void thread_tmp_16_fu_610_p2();
    void thread_tmp_17_fu_616_p2();
    void thread_tmp_18_fu_636_p1();
    void thread_tmp_19_fu_645_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif