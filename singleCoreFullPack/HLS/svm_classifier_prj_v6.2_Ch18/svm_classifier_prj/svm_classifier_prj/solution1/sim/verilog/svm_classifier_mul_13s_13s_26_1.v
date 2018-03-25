// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================


`timescale 1 ns / 1 ps

(* use_dsp48 = "no" *) module svm_classifier_mul_13s_13s_26_1_Mul_LUT_3(a, b, p);
input[13 - 1 : 0] a; 
input[13 - 1 : 0] b; 
output[26 - 1 : 0] p;

assign p = $signed(a) * $signed(b);
endmodule

`timescale 1 ns / 1 ps
module svm_classifier_mul_13s_13s_26_1(
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



svm_classifier_mul_13s_13s_26_1_Mul_LUT_3 svm_classifier_mul_13s_13s_26_1_Mul_LUT_3_U(
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

