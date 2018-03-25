// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __svm_classifier_Loop_Sum_loop_proc1_SVs_V_8_H__
#define __svm_classifier_Loop_Sum_loop_proc1_SVs_V_8_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct svm_classifier_Loop_Sum_loop_proc1_SVs_V_8_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 239;
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


   SC_CTOR(svm_classifier_Loop_Sum_loop_proc1_SVs_V_8_ram) {
        ram[0] = "0b00101011011110000101001001000111111000111101111110001101001111100010010011111111010011010111101111011011000001011000001000000100010000111111001000111000000001100001000000111001101111101100100010111111110000010111001111010001111111111100111";
        ram[1] = "0b00000011111001001000010000011111111000111101111110001101001111110001101100111111010011010111101111011011111111101100110000011011110101111111001000111000010001010100111111000100100111101100100010111101110001000111001111010001111101110110110";
        ram[2] = "0b00000011111001111010001111011111001111011011111100011111010000111110101000111100010000011001001001101000111110000001010000110011011010110110100010110001100000010011111011011010011111111010101011111011110001110111111111101001111011110000101";
        ram[3] = "0b11110000000110111110111010011111100100001100111010110001010000101111001111111001001101100111111100010100001000000101111111010101000110111001111110110111110001101110111111000100100000010110111110000011101110110000011100101011000010000011000";
        ram[4] = "0b11110000000110000011100101011111111000111101111010110001010001101100110011000000110100110111101111011011001001110001011000010000000011111111001000111111000010010101111101001111100111111010101011111011110001110111111111101001111101110110110";
        ram[5] = "0b11011100010100111101010110110111001111011011111100011111010000010000011110111100010000011000100010111110000001011000001111101100101011111101011010110000100001000111111101001111100000001000110101111011110001110000001001010101111011110000101";
        ram[6] = "0b00000011111001111010001111011111001111011011111100011111010001001110000001111101110001111000111100110000111110000001010000111111001101111000010000110001010000100000111011011010011000100101001000111011110001110111101100010011111011110000101";
        ram[7] = "0b11001000100001000000011110000000001101101110111110001101001000010000011110000101011001000000100010111110000100101111000000000100010000000000110110111111010010001000000000111001101000001000110101111111110000010000001001010101111101110110110";
        ram[8] = "0b00000011111001111011110011000001001100000001111110001101001000000001000101000110111010100111100010100011000001011000001111111000011110000111101110111000010001010100111101001111100111111010101011111101110001000111111111101001111011110000101";
        ram[9] = "0b00101011011110000101001001000111111000111101111110001101001111100010010011111101110001111111101111011011000001011000001000011011110101000000110110111000000001100001000000111001101111111010101011111111110000010111111111101001111101110110110";
        ram[10] = "0b00000011111001111011110011000000001101101110111111111011000000010000011110000011110111101111100010100011000011000011101000010000000011000000110110111111110001101110111111000100100111101100100010111111110000010111110101111110111111111100111";
        ram[11] = "0b00000011111001111011110011000000110111010000111110001101001000000001000101000110111010100111101111011011000011000011101111101100101011000111101110111000000001100001111111000100100111111010101011111101110001000111111111101001111101110110110";
        ram[12] = "0b11110000000110111101010110110000110111010000111100011111010000010000011110001000011100000111111100010100000011000011101111010101000110000010100100111111100001111011111111000100100111111010101011000001101111100111111111101001111111111100111";
        ram[13] = "0b11011100010100111101010110110000001101101110111111111011000000010000011110000011110111101000010110000110000011000011101000000100010000000000110110111111010010001000111101001111100111010000001111111111110000010111100010101000111111111100111";
        ram[14] = "0b00101011011110000000011110000111111000111101111110001101001000010000011110111101110001111000100010111110000011000011101111010101000110111101011010110000010001010100111101001111100111010000001111111101110001000111011000111100111011110000101";
        ram[15] = "0b00000011111001111010001111011111100100001100111010110001010000111110101000111100010000011000111100110000111110000001010000100111101000110110100010110001100000010011111011011010011111101100100010111001110010101111110101111110111011110000101";
        ram[16] = "0b00111111010001000011100101011111100100001100111111111011000000010000011110111010101111000111101111011011111110000001010000100111101000000110000000111111100001111011111111000100100000001000110101111101110001000111101100010011111111111100111";
        ram[17] = "0b11110000000110111011110011000000110111010000111100011111010111110001101100000110111010100111100010100011000011000011101111100000111001000111101110111000010001010100111011011010011111011110011000111011110001110111101100010011111011110000101";
        ram[18] = "0b00000011111001111011110011000000110111010000111110001101001000000001000101000110111010100111101111011011000001011000001111101100101011000111101110111000000001100001111101001111100111101100100010111101110001000111011000111100111101110110110";
        ram[19] = "0b00111111010001001000010000011000001101101110000101000100110000101111001111000000110100110111100010100011111110000001010000000100010000000000110110111000000001100001000010101110101000001000110101111111110000010111110101111110111111111100111";
        ram[20] = "0b00000011111001000011100101011111111000111101111110001101001000101111001111000000110100110000101111110111111111101100110111101100101011111011101100110000010001010100111101001111100111101100100010111101110001000000010011000000111111111100111";
        ram[21] = "0b11011100010100111110111010011000100010011111111100011111010111100010010011000011110111101000010110000110000001011000001111101100101011000100010010111111100001111011111101001111100111011110011000111101110001000111101100010011111101110110110";
        ram[22] = "0b00111111010001000010000001110111100100001100111110001101001111110001101100111101110001111111100010100011111110000001010000100111101000000000110110111111110001101110111111000100100111101100100010111101110001000111110101111110111101110110110";
        ram[23] = "0b11110000000110111110111010011111100100001100111010110001010000101111001111111001001101100111101111011011001000000101111111010101000110111001111110110111100001111011111111000100100000001000110101000001101111100000001001010101111111111100111";
        ram[24] = "0b00000011111001000110101100110000001101101110111010110001010000000001000101111111010011010111111100010100000011000011101111100000111001111101011010110000010001010100000000111001101000001000110101111101110001000000001001010101111101110110110";
        ram[25] = "0b00000011111001111010001111011111111000111101111010110001010000000001000101000110111010100111111100010100000001011000001111001001010100001011001010111111110001101110111011011010011000010110111110111101110001000000011100101011111011110000101";
        ram[26] = "0b00010111101100111101010110110111100100001100111010110001010000011111110111111010101111000000001001001101000100101111000111010101000110111001111110110000010001010100111111000100100000001000110101111111110000010000001001010101111101110110110";
        ram[27] = "0b00000011111001111010001111011111111000111101111010110001010111110001101100000110111010100000001001001101000001011000001111010101000110001011001010111111100001111011111011011010011111101100100010111011110001110111111111101001111011110000101";
        ram[28] = "0b00000011111001000110101100110111111000111101111010110001010000000001000101111111010011010000001001001101010000011111001111111000011110111111001000111000000001100001111111000100100000100101001000000001101111100111110101111110000010000011000";
        ram[29] = "0b11011100010100000110101100110000100010011111111110001101001000111110101000111111010011010111101111011011000001011000001111101100101011111111001000111111100001111011000010101110101111111010101011111111110000010111111111101001111101110110110";
        ram[30] = "0b00010111101100000110101100110111111000111101111111111011000000000001000101111111010011010111101111011011111111101100110111111000011110000000110110111000010001010100111111000100100111111010101011111101110001000111100010101000111101110110110";
        ram[31] = "0b00101011011110001000010000011111111000111101111110001101001111100010010011111111010011010111101111011011000001011000001000100111101000111111001000111111110001101110111111000100100111101100100010111101110001000111110101111110111111111100111";
        ram[32] = "0b10110100101110000010000001110111111000111101111111111011000000010000011110000101011001000000101111110111000100101111000111111000011110000010100100111111010010001000000110011000111000100101001000000111101101001000011100101011000110001111010";
        ram[33] = "0b00111111010001000010000001110111111000111101111111111011000000000001000101111100010000011000100010111110000100101111000111100000111001111101011010110000110000111010000000111001101000001000110101000011101110110000001001010101000010000011000";
        ram[34] = "0b00111111010001000010000001110111111000111101111110001101001000000001000101111100010000011000100010111110000100101111000111100000111001111101011010110000110000111010000010101110101000100101001000000011101110110000011100101011000010000011000";
        ram[35] = "0b11110000000110111101010110110001001100000001111110001101001000010000011110000110111010100111001000110001000001011000001111100000111001000100010010111000010001010100111101001111100111111010101011111111110000010111111111101001111101110110110";
        ram[36] = "0b00010111101100000011100101011000001101101110111111111011000000111110101000000011110111101000101111110111111110000001010111111000011110111011101100110000000001100001111111000100100111111010101011000001101111100000011100101011000100001001001";
        ram[37] = "0b00000011111001000110101100110111111000111101111010110001010000000001000101111111010011010000001001001101010000011111001111111000011110111111001000111000000001100001111111000100100000010110111110000001101111100000010011000000000010000011000";
        ram[38] = "0b11110000000110000101001001000111111000111101111010110001010001101100110011000000110100110111101111011011001011011100110000010000000011111101011010110111000010010101111111000100100000100101001000111101110001000000100110010110111111111100111";
        ram[39] = "0b00000011111001111101010110110000110111010000111100011111010000010000011110000110111010100111111100010100000001011000001111010101000110000100010010111111110001101110111011011010011111011110011000111101110001000111001111010001111011110000101";
        ram[40] = "0b00111111010001000101001001000111100100001100111111111011000000000001000101111100010000011111101111011011111110000001010000100111101000000110000000111111100001111011111111000100100000010110111110111111110000010000011100101011111111111100111";
        ram[41] = "0b00000011111001111010001111011111001111011011111100011111010001001110000001111111010011010000111100110000111100010101111000111111001101111000010000110001010000100000111011011010011000001000110101111011110001110000010011000000111011110000101";
        ram[42] = "0b00010111101100000011100101011111100100001100111111111011000111110001101100000000110100110111100010100011000001011000001000011011110101111111001000111000000001100001111101001111100000001000110101111101110001000111100010101000111101110110110";
        ram[43] = "0b00000011111001111011110011000000110111010000111110001101001000000001000101000110111010100111101111011011000001011000001111101100101011000111101110111000000001100001111101001111100111101100100010111011110001110111101100010011111011110000101";
        ram[44] = "0b00000011111001001000010000011111111000111101111010110001010000000001000101111111010011010111010101101010000100101111000000000100010000111111001000111000010001010100111101001111100000001000110101111111110000010000001001010101111111111100111";
        ram[45] = "0b00010111101100000110101100110111111000111101000011010110111000101111001111111111010011010111101111011011111010101010011000011011110101111111001000111000010001010100000100100011110000001000110101000011101110110000010011000000000010000011000";
        ram[46] = "0b11011100010100111011110011000111001111011011111100011111010000010000011110111101110001111000100010111110000001011000001111010101000110111111001000111000000001100001111111000100100000001000110101111011110001110000001001010101111011110000101";
        ram[47] = "0b11110000000110111011110011000111001111011011111100011111010000011111110111111111010011010001010110100001000001011000001111101100101011111111001000111000000001100001111101001111100111111010101011111111110000010111111111101001111111111100111";
        ram[48] = "0b11011100010100111011110011000111001111011011111100011111010000010000011110111100010000011000100010111110111111101100110111101100101011111101011010110000100001000111111101001111100000001000110101111001110010101000001001010101111001101010100";
        ram[49] = "0b00101011011110000011100101011111111000111101111100011111010000011111110111111100010000011000100010111110000110011010100111100000111001111011101100110000100001000111000000111001101000010110111110000001101111100000010011000000111111111100111";
        ram[50] = "0b00010111101100000010000001110000001101101110000101000100110000011111110111111111010011010111101111011011111110000001010111111000011110111111001000111111100001111011000010101110101111111010101011111111110000010111111111101001111111111100111";
        ram[51] = "0b00111111010001000011100101011111100100001100111111111011000000000001000101111100010000011111101111011011111100010101111000100111101000000100010010111111100001111011111101001111100111101100100010111101110001000111111111101001111111111100111";
        ram[52] = "0b11110000000110111010001111011111001111011011111100011111010001001110000001111111010011010001001001101000111110000001010000000100010000111001111110110000010001010100111111000100100000001000110101000001101111100000001001010101111111111100111";
        ram[53] = "0b00000011111001001000010000011111111000111101111110001101001111110001101100111111010011010111101111011011111111101100110000010000000011000000110110111000010001010100111101001111100111011110011000111011110001110111100010101000111101110110110";
        ram[54] = "0b11110000000110111011110011000111100100001100111010110001010000010000011110111100010000011001010110100001000001011000001111101100101011111101011010110000100001000111111011011010011111111010101011111101110001000111111111101001111011110000101";
        ram[55] = "0b00111111010001000011100101011111111000111101111111111011000000000001000101111101110001111111101111011011111110000001010000111111001101000100010010111111110001101110111111000100100000100101001000111111110000010111101100010011000010000011000";
        ram[56] = "0b00000011111001111101010110110000110111010000111100011111010000000001000101001000011100000111100010100011000011000011101111010101000110000100010010111000000001100001111101001111100111111010101011111101110001000111111111101001111101110110110";
        ram[57] = "0b00101011011110000110101100110000100010011111111111111011000000010000011110111101110001111111101111011011111110000001010000000100010000000000110110111111110001101110000000111001101111101100100010111101110001000111110101111110111101110110110";


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


SC_MODULE(svm_classifier_Loop_Sum_loop_proc1_SVs_V_8) {


static const unsigned DataWidth = 239;
static const unsigned AddressRange = 58;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


svm_classifier_Loop_Sum_loop_proc1_SVs_V_8_ram* meminst;


SC_CTOR(svm_classifier_Loop_Sum_loop_proc1_SVs_V_8) {
meminst = new svm_classifier_Loop_Sum_loop_proc1_SVs_V_8_ram("svm_classifier_Loop_Sum_loop_proc1_SVs_V_8_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~svm_classifier_Loop_Sum_loop_proc1_SVs_V_8() {
    delete meminst;
}


};//endmodule
#endif
