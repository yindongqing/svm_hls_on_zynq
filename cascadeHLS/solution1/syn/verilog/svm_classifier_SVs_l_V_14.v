// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

`timescale 1 ns / 1 ps
(* rom_style = "block" *) module svm_classifier_SVs_l_V_14_rom (
addr0, ce0, q0, clk);

parameter DWIDTH = 240;
parameter AWIDTH = 5;
parameter MEM_SIZE = 29;

input[AWIDTH-1:0] addr0;
input ce0;
output reg[DWIDTH-1:0] q0;
input clk;

(* ram_style = "block" *)reg [DWIDTH-1:0] ram[MEM_SIZE-1:0];

initial begin
    $readmemh("./svm_classifier_SVs_l_V_14_rom.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0 <= ram[addr0];
    end
end



endmodule


`timescale 1 ns / 1 ps
module svm_classifier_SVs_l_V_14(
    reset,
    clk,
    address0,
    ce0,
    q0);

parameter DataWidth = 32'd240;
parameter AddressRange = 32'd29;
parameter AddressWidth = 32'd5;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
output[DataWidth - 1:0] q0;



svm_classifier_SVs_l_V_14_rom svm_classifier_SVs_l_V_14_rom_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .q0( q0 ));

endmodule

