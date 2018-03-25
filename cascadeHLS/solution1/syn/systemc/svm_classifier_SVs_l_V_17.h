// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __svm_classifier_SVs_l_V_17_H__
#define __svm_classifier_SVs_l_V_17_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct svm_classifier_SVs_l_V_17_ram : public sc_core::sc_module {

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


   SC_CTOR(svm_classifier_SVs_l_V_17_ram) {
        ram[0] = "0b111011100010100111101010110110111111000111101111010110001010111110001101100000110111010100000101111110111111111101100110000000100010000001001011100111110100010101111111011011010011111111010101011111101110001000000001001010101111111111100111";
        ram[1] = "0b000000011111001111010001111011111111000111101111010110001010111110001101100000110111010100000001001001101000001011000001111010101000110001011001010111111100001111011111011011010011000001000110101111101110001000000010011000000111011110000101";
        ram[2] = "0b000000011111001001000010000011000001101101110000011010110111000011111110111111111010011010111101111011011111100010101111000010000000011111111001000111000010001010100000100100011110000010110111110000011101110110000010011000000000010000011000";
        ram[3] = "0b111110000000110111101010110110000110111010000111100011111010000010000011110001000011100000000001001001101000001011000001111010101000110000010100100111111100001111011111101001111100111111010101011111101110001000111111111101001111011110000101";
        ram[4] = "0b000111111010001000011100101011111100100001100111111111011000000010000011110111010101111000111101111011011111110000001010000011011110101000110000000111111100001111011111101001111100111111010101011111011110001110111100010101000111101110110110";
        ram[5] = "0b000101011011110000010000001110111111000111101111111111011000000000001000101111101110001111111101111011011111111101100110000110011011010000010100100111111110001101110111101001111100111111010101011111011110001110111111111101001111101110110110";
        ram[6] = "0b000000011111001111101010110110000110111010000111100011111010000000001000101000110111010100111101111011011000011000011101111010101000110000100010010111000000001100001111101001111100111101100100010111111110000010111101100010011111101110110110";
        ram[7] = "0b111110000000110111011110011000111100100001100111010110001010000011111110111111101110001111001010110100001000011000011101111101100101011111101011010110000010001010100111011011010011111111010101011111101110001000111111111101001111101110110110";
        ram[8] = "0b000000011111001111010001111011111001111011011111100011111010000111110101000111100010000011000111100110000111110000001010000100111101000111000010000110001100000010011111011011010011111111010101011111001110010101111111111101001111001101010100";
        ram[9] = "0b000000011111001000110101100110111111000111101111110001101001000010000011110111111010011010111100010100011111111101100110111101100101011111111001000111000000001100001000000111001101111101100100010111111110000010111110101111110111101110110110";
        ram[10] = "0b000111111010001000101001001000111100100001100111111111011000000010000011110111100010000011111101111011011111110000001010000100111101000000110000000111111100001111011111111000100100000100101001000111101110001000111101100010011111111111100111";
        ram[11] = "0b000111111010001000010000001110111100100001100000001101000111000000001000101111100010000011000100010111110000100101111000111010101000110111101011010110000110000111010000110011000111000100101001000000101101101111000100110010110000100001001001";
        ram[12] = "0b000101011011110000101001001000111111000111101111110001101001111110001101100111111010011010111101111011011111111101100110000100111101000111111001000111111110001101110000000111001101111111010101011111011110001110111111111101001111101110110110";
        ram[13] = "0b000010111101100000101001001000111111000111101111010110001010001001110000001111111010011010111101111011011000100101111000000000100010000000000110110111111010010001000111011011010011111000010000110111001110010101111000101100110111011110000101";
        ram[14] = "0b000000011111001111101010110110111100100001100111010110001010000101111001111111001001101100111111100010100000110011010100111010101000110111001111110110111110001101110111101001111100111111010101011111101110001000111111111101001111101110110110";
        ram[15] = "0b000010111101100111110111010011111100100001100111010110001010000011111110111111010101111000000010110000110000100101111000111001001010100111001111110110000010001010100000000111001101000010110111110000001101111100000011100101011111111111100111";
        ram[16] = "0b000000011111001111010001111011111111000111101111010110001010111110001101100000110111010100000001001001101000001011000001111010101000110001011001010111111100001111011111011011010011000010110111110111101110001000111101100010011111011110000101";
        ram[17] = "0b000101011011110001000010000011111111000111101111110001101001111110001101100111111010011010111101111011011000001011000001000111111001101111111001000111111110001101110111111000100100000010110111110111101110001000000010011000000111101110110110";
        ram[18] = "0b000000011111001111010001111011111111000111101111010110001010000000001000101000110111010100111111100010100000001011000001111001001010100001011001010111111110001101110111011011010011111111010101011111011110001110111111111101001111011110000101";
        ram[19] = "0b111011100010100111110111010011111100100001100111010110001010000101111001111110111101100001111100010100011000110011010100111010101000110111011101100110111000010010101111111000100100000100101001000111111110000010000011100101011111111111100111";
        ram[20] = "0b000000011111001111011110011000000001101101110111111111011000000010000011110000011110111101111101111011011000100101111000000010000000011000000110110111111110001101110111111000100100111111010101011000001101111100111111111101001111111111100111";
        ram[21] = "0b000111111010001000011100101011111100100001100111111111011000000010000011110111010101111000111101111011011111100010101111000100111101000000111101110111111100001111011111111000100100000001000110101111111110000010000010011000000111111111100111";
        ram[22] = "0b111110000000110111011110011000111001111011011111100011111010000011111110111111111010011010001001001101000111111101100110111101100101011111111001000111000010001010100111101001111100111101100100010111101110001000111110101111110111101110110110";
        ram[23] = "0b111110000000110111011110011000111001111011011111100011111010001001110000001000010010110001001001001101000111111101100110000000100010000111011101100110000010001010100111101001111100000001000110101000001101111100000001001010101111111111100111";
        ram[24] = "0b000000011111001111110111010011111111000111101111111111011000000010000011110111101110001111000001001001101000001011000001111010101000110111101011010110000000001100001000000111001101111111010101011000001101111100111111111101001111111111100111";
        ram[25] = "0b111110000000110000110101100110111111000111101111100011111010000000001000101111111010011010111100010100011001000000101111000010000000011111111001000111000010001010100111111000100100000001000110101111101110001000000001001010101111101110110110";
        ram[26] = "0b000000011111001111010001111011000110111010000111110001101001000000001000101000101011001000000001001001101111100010101111111100000111001000110000000111111000010010101111101001111100111101100100010111101110001000111110101111110111111111100111";
        ram[27] = "0b111110000000110111011110011000000110111010000111110001101001000000001000101000110111010100111111100010100000001011000001111101100101011000111101110111111110001101110111101001111100111011110011000111011110001110111001111010001111011110000101";
        ram[28] = "0b000000011111001000110101100110111111000111101111110001101001111100010010011111101110001111111101111011011111111101100110000011011110101000000110110111000010001010100111101001111100111101100100010111011110001110111110101111110111011110000101";


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


SC_MODULE(svm_classifier_SVs_l_V_17) {


static const unsigned DataWidth = 240;
static const unsigned AddressRange = 29;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


svm_classifier_SVs_l_V_17_ram* meminst;


SC_CTOR(svm_classifier_SVs_l_V_17) {
meminst = new svm_classifier_SVs_l_V_17_ram("svm_classifier_SVs_l_V_17_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~svm_classifier_SVs_l_V_17() {
    delete meminst;
}


};//endmodule
#endif
