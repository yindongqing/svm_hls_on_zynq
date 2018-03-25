// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __svm_classifier_Loop_Sum_loop_proc1_alpha_V_14_H__
#define __svm_classifier_Loop_Sum_loop_proc1_alpha_V_14_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct svm_classifier_Loop_Sum_loop_proc1_alpha_V_14_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 12;
  static const unsigned AddressRange = 58;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(svm_classifier_Loop_Sum_loop_proc1_alpha_V_14_ram) {
        ram[0] = "0b000010000101";
        ram[1] = "0b000010000101";
        ram[2] = "0b111011110101";
        ram[3] = "0b000010000101";
        ram[4] = "0b000010000101";
        ram[5] = "0b110111101011";
        ram[6] = "0b000010000101";
        ram[7] = "0b110111101011";
        for (unsigned i = 8; i < 15 ; i = i + 1) {
            ram[i] = "0b000010000101";
        }
        ram[15] = "0b111001110000";
        ram[16] = "0b000010000101";
        ram[17] = "0b101101010001";
        ram[18] = "0b000010000101";
        ram[19] = "0b000010000101";
        ram[20] = "0b000010000101";
        ram[21] = "0b111101111010";
        ram[22] = "0b000010000101";
        ram[23] = "0b111101111010";
        for (unsigned i = 24; i < 29 ; i = i + 1) {
            ram[i] = "0b000010000101";
        }
        ram[29] = "0b111011110101";
        for (unsigned i = 30; i < 39 ; i = i + 1) {
            ram[i] = "0b000010000101";
        }
        ram[39] = "0b111001110000";
        ram[40] = "0b000010000101";
        ram[41] = "0b000010000101";
        ram[42] = "0b000010000101";
        ram[43] = "0b000010000101";
        ram[44] = "0b111101111010";
        ram[45] = "0b000010000101";
        ram[46] = "0b000010000101";
        ram[47] = "0b111101111010";
        ram[48] = "0b000010000101";
        ram[49] = "0b000010000101";
        ram[50] = "0b110111101011";
        for (unsigned i = 51; i < 58 ; i = i + 1) {
            ram[i] = "0b000010000101";
        }


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(svm_classifier_Loop_Sum_loop_proc1_alpha_V_14) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 58;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


svm_classifier_Loop_Sum_loop_proc1_alpha_V_14_ram* meminst;


SC_CTOR(svm_classifier_Loop_Sum_loop_proc1_alpha_V_14) {
meminst = new svm_classifier_Loop_Sum_loop_proc1_alpha_V_14_ram("svm_classifier_Loop_Sum_loop_proc1_alpha_V_14_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~svm_classifier_Loop_Sum_loop_proc1_alpha_V_14() {
    delete meminst;
}


};//endmodule
#endif
