// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _svm_classifier_Block_preheader_0_proc1_HH_
#define _svm_classifier_Block_preheader_0_proc1_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct svm_classifier_Block_preheader_0_proc1 : public sc_module {
    // Port declarations 27
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<18> > p_read;
    sc_in< sc_lv<18> > p_read1;
    sc_in< sc_lv<18> > p_read2;
    sc_in< sc_lv<18> > p_read3;
    sc_in< sc_lv<18> > p_read4;
    sc_in< sc_lv<18> > p_read5;
    sc_in< sc_lv<18> > p_read6;
    sc_in< sc_lv<18> > p_read7;
    sc_in< sc_lv<18> > p_read8;
    sc_in< sc_lv<18> > p_read9;
    sc_in< sc_lv<18> > p_read10;
    sc_in< sc_lv<18> > p_read11;
    sc_in< sc_lv<18> > p_read12;
    sc_in< sc_lv<18> > p_read13;
    sc_in< sc_lv<18> > p_read14;
    sc_in< sc_lv<18> > p_read15;
    sc_in< sc_lv<18> > p_read16;
    sc_in< sc_lv<18> > p_read17;
    sc_out< sc_lv<1> > out_r;
    sc_out< sc_logic > out_r_ap_vld;


    // Module declarations
    svm_classifier_Block_preheader_0_proc1(sc_module_name name);
    SC_HAS_PROCESS(svm_classifier_Block_preheader_0_proc1);

    ~svm_classifier_Block_preheader_0_proc1();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_20;
    sc_signal< sc_lv<18> > tmp18_fu_175_p2;
    sc_signal< sc_lv<18> > tmp18_reg_281;
    sc_signal< bool > ap_sig_52;
    sc_signal< sc_lv<18> > tmp21_fu_199_p2;
    sc_signal< sc_lv<18> > tmp21_reg_286;
    sc_signal< sc_lv<18> > tmp25_fu_247_p2;
    sc_signal< sc_lv<18> > tmp25_reg_291;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_83;
    sc_signal< sc_lv<18> > tmp20_fu_169_p2;
    sc_signal< sc_lv<18> > tmp19_fu_163_p2;
    sc_signal< sc_lv<18> > tmp24_fu_187_p2;
    sc_signal< sc_lv<18> > tmp23_fu_193_p2;
    sc_signal< sc_lv<18> > tmp22_fu_181_p2;
    sc_signal< sc_lv<18> > tmp28_fu_211_p2;
    sc_signal< sc_lv<18> > tmp27_fu_205_p2;
    sc_signal< sc_lv<18> > tmp32_fu_229_p2;
    sc_signal< sc_lv<18> > tmp31_fu_235_p2;
    sc_signal< sc_lv<18> > tmp30_fu_223_p2;
    sc_signal< sc_lv<18> > tmp29_fu_241_p2;
    sc_signal< sc_lv<18> > tmp26_fu_217_p2;
    sc_signal< sc_lv<18> > tmp_fu_253_p2;
    sc_signal< sc_lv<18> > p_Val2_80_s_fu_257_p2;
    sc_signal< sc_lv<19> > tmp_15_fu_262_p1;
    sc_signal< sc_lv<19> > r_V_fu_266_p2;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_st1_fsm_0;
    static const sc_lv<2> ap_ST_st2_fsm_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<19> ap_const_lv19_E758;
    static const sc_lv<32> ap_const_lv32_12;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_20();
    void thread_ap_sig_52();
    void thread_ap_sig_83();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_out_r();
    void thread_out_r_ap_vld();
    void thread_p_Val2_80_s_fu_257_p2();
    void thread_r_V_fu_266_p2();
    void thread_tmp18_fu_175_p2();
    void thread_tmp19_fu_163_p2();
    void thread_tmp20_fu_169_p2();
    void thread_tmp21_fu_199_p2();
    void thread_tmp22_fu_181_p2();
    void thread_tmp23_fu_193_p2();
    void thread_tmp24_fu_187_p2();
    void thread_tmp25_fu_247_p2();
    void thread_tmp26_fu_217_p2();
    void thread_tmp27_fu_205_p2();
    void thread_tmp28_fu_211_p2();
    void thread_tmp29_fu_241_p2();
    void thread_tmp30_fu_223_p2();
    void thread_tmp31_fu_235_p2();
    void thread_tmp32_fu_229_p2();
    void thread_tmp_15_fu_262_p1();
    void thread_tmp_fu_253_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
