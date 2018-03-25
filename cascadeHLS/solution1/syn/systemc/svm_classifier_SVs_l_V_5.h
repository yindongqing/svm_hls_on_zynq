// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __svm_classifier_SVs_l_V_5_H__
#define __svm_classifier_SVs_l_V_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct svm_classifier_SVs_l_V_5_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 240;
  static const unsigned AddressRange = 29;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(svm_classifier_SVs_l_V_5_ram) {
        ram[0] = "0b000000011111001000101001001000111111000111101111010110001010001011101011010111111010011010111101111011011001000000101111000010000000011111111001000111111000010010101111101001111100000001000110101111011110001110000001001010101111101110110110";
        ram[1] = "0b000010111101100000011100101011111100100001100111100011111010000010000011110111100010000011000100010111110001000000101111111101100101011111011101100110000100001000111111111000100100000001000110101000001101111100000001001010101111111111100111";
        ram[2] = "0b111110000000110000101001001000111111000111101111010110001010001101100110011111111010011010111101111011011001001110001011000010000000011111111001000111111000010010101111101001111100000001000110101111101110001000000001001010101111111111100111";
        ram[3] = "0b000000011111001000110101100110111111000111101111100011111010000000001000101111111010011010111100010100011001000000101111000010000000011111111001000111000000001100001111111000100100000001000110101111101110001000000001001010101111101110110110";
        ram[4] = "0b000010111101100000011100101011111111000111101111010110001010001001110000001111111010011010111101111011011000100101111000000000100010000111111001000111111010010001000111011011010011111010000001111111001110010101111000101100110111001101010100";
        ram[5] = "0b111011100010100111101010110110111111000111101111010110001010111100010010011000110111010100000101111110111111110000001010111111000011110001011001010111110010010111011111101001111100000010110111110111101110001000111101100010011111101110110110";
        ram[6] = "0b000000011111001000110101100110111111000111101111010110001010000000001000101111111010011010000001001001101010000011111001111111000011110111111001000111000000001100001111111000100100000100101001000000001101111100111101100010011000010000011000";
        ram[7] = "0b000010111101100000101001001000111111000111101111010110001010001001110000001000000110100110111100010100011000110011010100000000100010000111101011010110111000010010101000000111001101000001000110101111101110001000000010011000000111111111100111";
        ram[8] = "0b000101011011110001000010000011111111000111101111110001101001111110001101100111111010011010111100010100011000001011000001000100111101000111101011010110111110001101110111111000100100111101100100010111101110001000111110101111110111101110110110";
        ram[9] = "0b000000011111001111011110011000000110111010000111110001101001000000001000101000110111010100000100010111110111100010101111111101100101011000111101110111110110010100010111101001111100111101100100010111101110001000111110101111110111111111100111";
        ram[10] = "0b111110000000110000110101100110111111000111101111110001101001000011111110111111111010011010111100010100011111111101100110111101100101011111101011010110111110001101110000000111001101111111010101011111101110001000111111111101001111101110110110";
        ram[11] = "0b000010111101100000101001001000111111000111101111110001101001111110001101100111111010011010111101111011011111111101100110000100111101000111111001000111000000001100001000000111001101111111010101011111011110001110111111111101001111101110110110";
        ram[12] = "0b111110000000110000011100101011111111000111101111110001101001000101111001111000010010110001000101111110111000011000011101111101100101011111111001000111111100001111011111111000100100111111010101011111111110000010000011100101011000010000011000";
        ram[13] = "0b111011100010100111101010110110000001101101110111111111011000000010000011110000011110111101000010110000110000011000011101000000100010000000000110110111111010010001000111111000100100111101100100010111111110000010111101100010011111111111100111";
        ram[14] = "0b000000011111001111110111010011111111000111101111111111011000000011111110111000000110100110000010110000110000001011000001111010101000110111111001000111111110001101110000000111001101111111010101011000001101111100111111111101001111111111100111";
        ram[15] = "0b000111111010001000011100101011111100100001100111111111011000000000001000101111100010000011111101111011011111110000001010000110011011010000100010010111111100001111011111111000100100000010110111110111111110000010000011100101011111111111100111";
        ram[16] = "0b000111111010001000011100101011111111000111101111111111011000000000001000101111101110001111111100010100011111111101100110000111111001101000010100100111111110001101110000000111001101000100101001000000001101111100111101100010011000010000011000";
        ram[17] = "0b000010111101100001000010000011111100100001100111110001101001111100010010011111100010000011111111100010100000011000011101000011011110101000010100100111000000001100001000000111001101000001000110101111111110000010000001001010101111111111100111";
        ram[18] = "0b000000011111001000000011110000000001101101110111110001101001001001110000001000010010110001000100010111110000001011000001000000100010000111111001000111111100001111011111111000100100000001000110101111111110000010000001001010101000010000011000";
        ram[19] = "0b000111111010001000010000001110111100100001100111110001101001000010000011110111100010000011111101111011011111100010101111000100111101000000100010010111111110001101110000010101110101000001000110101111101110001000000010011000000111111111100111";
        ram[20] = "0b111110000000110111101010110110111001111011011111100011111010111110001101100111001001101100111101111011011000100101111000111100000111001111000010000110111110001101110111101001111100111111010101011111111110000010111111111101001111101110110110";
        ram[21] = "0b000000011111001001000010000011111111000111101111010110001010111110001101100111111010011010111010101101010000110011010100000010000000011000000110110111000010001010100111111000100100000001000110101111111110000010111100010101000111111111100111";
        ram[22] = "0b000101011011110000011100101011111111000111101111110001101001111100010010011111111010011010111101111011011111111101100110000010000000011111111001000111000000001100001000010101110101111101100100010111101110001000111110101111110111101110110110";
        ram[23] = "0b000101011011110001000010000011111111000111101111110001101001111110001101100111111010011010111101111011011000011000011101000110011011010111111001000111111110001101110111111000100100000001000110101111101110001000000010011000000111111111100111";
        ram[24] = "0b000000011111001111011110011000000110111010000111110001101001000000001000101000110111010100111101111011011000001011000001111101100101011000111101110111000000001100001111101001111100111101100100010111101110001000111011000111100111101110110110";
        ram[25] = "0b000000011111001111101010110110000110111010000111100011111010000000001000101000110111010100111101111011011000011000011101111010101000110000100010010111000000001100001111101001111100111101100100010111111110000010111101100010011111101110110110";
        ram[26] = "0b111110000000110001000010000011000001101101110111010110001010000010000011110111111010011010111111100010100000011000011101111101100101011111111001000111111110001101110000000111001101000001000110101111101110001000000001001010101111101110110110";
        ram[27] = "0b111110000000110111101010110110000001101101110111111111011000000010000011110000101011001000000100010111110000011000011101000000100010000000010100100111111010010001000111101001111100111011110011000111111110000010111100010101000111111111100111";
        ram[28] = "0b000000011111001000110101100110111111000111101111010110001010000000001000101111111010011010000001001001101010000011111001111111000011110111111001000111000000001100001111111000100100000100101001000000001101111100111101100010011000010000011000";


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


SC_MODULE(svm_classifier_SVs_l_V_5) {


static const unsigned DataWidth = 240;
static const unsigned AddressRange = 29;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


svm_classifier_SVs_l_V_5_ram* meminst;


SC_CTOR(svm_classifier_SVs_l_V_5) {
meminst = new svm_classifier_SVs_l_V_5_ram("svm_classifier_SVs_l_V_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~svm_classifier_SVs_l_V_5() {
    delete meminst;
}


};//endmodule
#endif
