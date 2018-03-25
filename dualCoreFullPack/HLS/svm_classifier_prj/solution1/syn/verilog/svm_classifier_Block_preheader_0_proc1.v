// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module svm_classifier_Block_preheader_0_proc1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        p_read,
        p_read1,
        p_read2,
        p_read3,
        p_read4,
        p_read5,
        p_read6,
        p_read7,
        p_read8,
        out_r,
        out_r_ap_vld
);

parameter    ap_ST_st1_fsm_0 = 2'b1;
parameter    ap_ST_st2_fsm_1 = 2'b10;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv19_E758 = 19'b1110011101011000;
parameter    ap_const_lv32_12 = 32'b10010;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [17:0] p_read;
input  [17:0] p_read1;
input  [17:0] p_read2;
input  [17:0] p_read3;
input  [17:0] p_read4;
input  [17:0] p_read5;
input  [17:0] p_read6;
input  [17:0] p_read7;
input  [17:0] p_read8;
output  [0:0] out_r;
output   out_r_ap_vld;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[0:0] out_r;
reg out_r_ap_vld;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_20;
wire   [17:0] tmp13_fu_97_p2;
reg   [17:0] tmp13_reg_157;
reg    ap_sig_43;
reg    ap_sig_cseq_ST_st2_fsm_1;
reg    ap_sig_55;
reg   [0:0] out_r_preg;
wire   [17:0] tmp14_fu_91_p2;
wire   [17:0] tmp10_fu_109_p2;
wire   [17:0] tmp9_fu_103_p2;
wire   [17:0] tmp12_fu_121_p2;
wire   [17:0] tmp11_fu_127_p2;
wire   [17:0] tmp_fu_115_p2;
wire   [17:0] p_Val2_80_8_fu_132_p2;
wire  signed [18:0] tmp_15_fu_138_p1;
wire   [18:0] r_V_fu_142_p2;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 2'b1;
#0 out_r_preg = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_continue)) begin
            ap_done_reg <= 1'b0;
        end else if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        out_r_preg <= 1'b0;
    end else begin
        if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
            out_r_preg <= r_V_fu_142_p2[ap_const_lv32_12];
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_43)) begin
        tmp13_reg_157 <= tmp13_fu_97_p2;
    end
end

always @ (*) begin
    if (((1'b1 == ap_done_reg) | (1'b1 == ap_sig_cseq_ST_st2_fsm_1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_20) begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_55) begin
        ap_sig_cseq_ST_st2_fsm_1 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st2_fsm_1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        out_r = r_V_fu_142_p2[ap_const_lv32_12];
    end else begin
        out_r = out_r_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        out_r_ap_vld = 1'b1;
    end else begin
        out_r_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : begin
            if (~ap_sig_43) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_st2_fsm_1 : begin
            ap_NS_fsm = ap_ST_st1_fsm_0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

always @ (*) begin
    ap_sig_20 = (ap_CS_fsm[ap_const_lv32_0] == 1'b1);
end

always @ (*) begin
    ap_sig_43 = ((ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

always @ (*) begin
    ap_sig_55 = (1'b1 == ap_CS_fsm[ap_const_lv32_1]);
end

assign p_Val2_80_8_fu_132_p2 = (tmp11_fu_127_p2 + tmp_fu_115_p2);

assign r_V_fu_142_p2 = ($signed(tmp_15_fu_138_p1) + $signed(ap_const_lv19_E758));

assign tmp10_fu_109_p2 = (p_read2 + p_read3);

assign tmp11_fu_127_p2 = (tmp13_reg_157 + tmp12_fu_121_p2);

assign tmp12_fu_121_p2 = (p_read4 + p_read5);

assign tmp13_fu_97_p2 = (tmp14_fu_91_p2 + p_read6);

assign tmp14_fu_91_p2 = (p_read7 + p_read8);

assign tmp9_fu_103_p2 = (p_read1 + p_read);

assign tmp_15_fu_138_p1 = $signed(p_Val2_80_8_fu_132_p2);

assign tmp_fu_115_p2 = (tmp10_fu_109_p2 + tmp9_fu_103_p2);

endmodule //svm_classifier_Block_preheader_0_proc1