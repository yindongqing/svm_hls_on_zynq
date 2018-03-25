// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __svm_classifier_Loop_Sum_loop_proc1_SVs_V_9_H__
#define __svm_classifier_Loop_Sum_loop_proc1_SVs_V_9_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct svm_classifier_Loop_Sum_loop_proc1_SVs_V_9_ram : public sc_core::sc_module {

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


   SC_CTOR(svm_classifier_Loop_Sum_loop_proc1_SVs_V_9_ram) {
        ram[0] = "0b00101011011110001000010000011111111000111101111110001101001111110001101100111101110001111111101111011011000100101111000000111111001101000010100100111000000001100001000000111001101000100101001000111111110000010111101100010011000010000011000";
        ram[1] = "0b11110000000110000110101100110111111000111101111111111011000000010000011110111111010011010111101111011011111111101100110111111000011110000010100100111000010001010100000000111001101111111010101011000001101111100111101100010011111111111100111";
        ram[2] = "0b00000011111001111101010110110000110111010000111100011111010000011111110111001000011100000111111100010100000001011000001111010101000110000010100100111111100001111011111111000100100000001000110101111111110000010000001001010101111101110110110";
        ram[3] = "0b10110100101110111110111010011000100010011111111100011111010111100010010011000101011001000000010110000110000100101111000111010101000110000100010010111111010010001000111101001111100111101100100010111101110001000111101100010011111101110110110";
        ram[4] = "0b00000011111001000011100101011111111000111101111110001101001000000001000101111111010011010111010101101010000100101111000111101100101011111111001000111000000001100001000000111001101111111010101011111111110000010111111111101001111101110110110";
        ram[5] = "0b11001000100001000000011110000111111000111101111110001101001000011111110111000010010110001000010110000110000100101111000111100000111001000010100100111111010010001000111111000100100111111010101011111101110001000111111111101001111101110110110";
        ram[6] = "0b00000011111001000101001001000000110111010000111111111011000000011111110111000000110100110111010101101010111111101100110111101100101011000000110110111000000001100001000000111001101111111010101011111101110001000111111111101001111011110000101";
        ram[7] = "0b00111111010001000000011110000111100100001100111110001101001000000001000101111101110001111111101111011011111100010101111000011011110101000010100100111111100001111011111111000100100111111010101011111011110001110111111111101001111101110110110";
        ram[8] = "0b00010111101100000101001001000111111000111101111010110001010000111110101000111111010011010111101111011011000100101111000000000100010000111111001000111111100001111011111011011010011111000010000110111001110010101110111011111011111011110000101";
        ram[9] = "0b00000011111001001000010000011000001101101110111010110001010000000001000101111111010011010111010101101010000110011010100000000100010000111101011010110000000001100001111111000100100000001000110101111111110000010111100010101000111111111100111";
        ram[10] = "0b11110000000110111011110011000000110111010000111110001101001111110001101100000110111010100111111100010100000011000011101111101100101011000110000000111111110001101110111101001111100000001000110101111101110001000000001001010101111011110000101";
        ram[11] = "0b11011100010100111110111010011000001101101110000011010110111000101111001111000110111010100000001001001101000001011000001111111000011110000000110110111111010010001000111101001111100111111010101011111111110000010000010011000000000010000011000";
        ram[12] = "0b11110000000110111011110011000111001111011011111100011111010000101111001111000010010110001001010110100001111111101100110111101100101011111111001000111111100001111011111111000100100000010110111110111111110000010000010011000000111101110110110";
        ram[13] = "0b00000011111001111010001111011111001111011011111100011111010001001110000001111111010011010001001001101000111110000001010000110011011010110110100010110001010000100000111011011010011000001000110101111011110001110000001001010101111011110000101";
        ram[14] = "0b10110100101110000010000001110111111000111101111110001101001000010000011110000101011001000000100010111110000110011010100111111000011110000100010010111111010010001000000010101110101000100101001000000101101101111000100110010110000100001001001";
        ram[15] = "0b00010111101100000011100101011111111000111101111110001101001000000001000101111101110001111111101111011011000100101111000000000100010000111111001000111000000001100001111111000100100111011110011000111101110001000111001111010001111101110110110";
        ram[16] = "0b11001000100001111101010110110000001101101110111111111011000000010000011110000101011001000000010110000110000100101111000000000100010000000000110110111111010010001000111101001111100111011110011000000001101111100111101100010011000010000011000";
        ram[17] = "0b11110000000110111101010110110000110111010000111110001101001000000001000101001000011100000111111100010100000011000011101111010101000110000100010010111111110001101110111101001111100111011110011000111101110001000111001111010001111011110000101";
        ram[18] = "0b00000011111001111110111010011111111000111101111110001101001000000001000101111111010011010000010110000110000100101111000111010101000110111111001000111000000001100001000000111001101111101100100010000011101110110111110101111110111111111100111";
        ram[19] = "0b11110000000110111010001111011111100100001100111010110001010000010000011110111101110001111001010110100001000001011000001111101100101011111101011010110000010001010100111101001111100111111010101011111101110001000111111111101001111101110110110";
        ram[20] = "0b10110100101110111110111010011000110111010000000001101000111000010000011110000010010110001000001001001101000100101111000000000100010000000000110110111111010010001000111101001111100111011110011000111111110000010111101100010011111111111100111";
        ram[21] = "0b00101011011110001000010000011111111000111101111110001101001111110001101100111111010011010111101111011011000011000011101000110011011010000000110110111111110001101110111111000100100000010110111110111101110001000000010011000000111111111100111";
        ram[22] = "0b11110000000110111011110011000000110111010000111100011111010111110001101100000110111010100111111100010100000001011000001111101100101011000111101110111111110001101110111011011010011111011110011000111011110001110111000101100110111011110000101";
        ram[23] = "0b00101011011110000011100101011111111000111101111010110001010000101111001111111111010011010111101111011011000011000011101000000100010000111111001000111111100001111011111001100101011110110011111100110111110011011110111011111011111001101010100";
        ram[24] = "0b00000011111001111101010110110111001111011011111100011111010000010000011110111001001101100111101111011011000100101111000111100000111001111000010000110000000001100001111101001111100000010110111110111111110000010000010011000000111101110110110";
        ram[25] = "0b11011100010100111110111010011111111000111101111111111011000000101111001111000110111010100000010110000110000001011000001111101100101011000010100100111111000010010101111111000100100111101100100010000001101111100111110101111110111111111100111";
        ram[26] = "0b00000011111001000010000001110111111000111101000101000100110000010000011110111101110001111000010110000110000011000011101111100000111001111111001000111000000001100001111111000100100111101100100010000001101111100111101100010011111101110110110";
        ram[27] = "0b11011100010100000000011110000000001101101110111110001101001000010000011110000011110111101000100010111110000011000011101111101100101011000010100100111111010010001000111111000100100111111010101011111111110000010111111111101001111101110110110";
        ram[28] = "0b00111111010001000011100101011111100100001100111110001101001000000001000101000000110100110111100010100011000011000011101000100111101000000000110110111000000001100001111101001111100111111010101011111101110001000111111111101001111101110110110";
        ram[29] = "0b00111111010001000011100101011111111000111101111111111011000000000001000101111101110001111111101111011011111100010101111000110011011010000100010010111111100001111011000000111001101000100101001000000001101111100111101100010011000010000011000";
        ram[30] = "0b00000011111001111110111010011111111000111101111111111011000000101111001111000011110111101000010110000110000001011000001111100000111001111111001000111111010010001000000000111001101111111010101011000001101111100111111111101001111111111100111";
        ram[31] = "0b00111111010001000010000001110111100100001100111111111011000000010000011110111010101111000111101111011011111110000001010000100111101000000110000000111111100001111011111101001111100111101100100010111011110001110111111111101001111101110110110";
        ram[32] = "0b00101011011110000110101100110111111000111101111110001101001111110001101100111111010011010111101111011011000001011000001000110011011010000000110110111111110001101110111111000100100111101100100010111011110001110111110101111110111101110110110";
        ram[33] = "0b11110000000110000101001001000000001101101110111110001101001000000001000101111111010011010111101111011011111110000001010111100000111001111111001000111000000001100001000000111001101111101100100010111111110000010111101100010011111111111100111";
        ram[34] = "0b11110000000110111011110011000000110111010000111100011111010000000001000101001000011100000111111100010100000100101111000111100000111001000111101110111111110001101110111111000100100000001000110101111111110000010000001001010101111101110110110";
        ram[35] = "0b00000011111001111010001111011111001111011011111100011111010001001110000001111100010000011000111100110000111110000001010000100111101000110110100010110001100000010011111011011010011111101100100010111011110001110111110101111110111011110000101";
        ram[36] = "0b00101011011110001000010000011111111000111101111110001101001111110001101100111101110001111111101111011011000011000011101000110011011010000000110110111111110001101110000000111001101000100101001000111111110000010111101100010011000010000011000";
        ram[37] = "0b00101011011110001000010000011111111000111101111110001101001111100010010011111111010011010111101111011011000001011000001000100111101000111111001000111111110001101110111111000100100111111010101011111101110001000111011000111100111111111100111";
        ram[38] = "0b11001000100001111110111010011000110111010000111100011111010111100010010011000101011001000000100010111110000011000011101111100000111001000100010010111111010010001000111101001111100111101100100010111101110001000111101100010011111101110110110";
        ram[39] = "0b11110000000110111101010110110000001101101110111111111011000000010000011110000011110111101000010110000110000001011000001000000100010000000000110110111111010010001000111101001111100111101100100010111111110000010111110101111110111111111100111";
        ram[40] = "0b00000011111001111110111010011111111000111101111111111011000000011111110111000000110100110000010110000110000001011000001111010101000110111111001000111111110001101110000010101110101111101100100010000011101110110111110101111110000010000011000";
        ram[41] = "0b00000011111001111010001111011111001111011011111100011111010001001110000001000000110100110000101111110111111100010101111000111111001101111000010000110001000000101101111011011010011111111010101011111001110010101111111111101001111001101010100";
        ram[42] = "0b00101011011110001000010000011111111000111101111111111011000111110001101100111111010011010111101111011011000011000011101000111111001101111111001000111111110001101110000000111001101000100101001000111101110001000111110101111110111111111100111";
        ram[43] = "0b00000011111001000110101100110111111000111101111010110001010000000001000101111111010011010111101111011011000011000011101111100000111001000000110110111000000001100001000010101110101111101100100010111111110000010111110101111110111101110110110";
        ram[44] = "0b00111111010001000010000001110111100100001100111111111011000000010000011110111100010000011111101111011011111110000001010000100111101000000100010010111111100001111011111101001111100111101100100010111011110001110111111111101001111011110000101";
        ram[45] = "0b11011100010100000000011110000111111000111101111110001101001000010000011110000010010110001000100010111110000100101111000111100000111001000000110110111111100001111011111101001111100111010000001111111101110001000111011000111100111011110000101";
        ram[46] = "0b00101011011110000101001001000111100100001100000001101000111000101111001111111111010011010111100010100011111100010101111000011011110101000010100100111000010001010100000010101110101111111010101011000001101111100111111111101001111111111100111";
        ram[47] = "0b11011100010100000101001001000111111000111101111010110001010001101100110011111111010011010111101111011011001011011100110000010000000011111111001000111111000010010101111111000100100000010110111110111111110000010111101100010011000010000011000";
        ram[48] = "0b00000011111001111101010110110111100100001100111010110001010000010000011110111111010011010000111100110000000011000011101111001001010100111101011010110000010001010100111101001111100111111010101011111101110001000111111111101001111101110110110";
        ram[49] = "0b11110000000110111101010110110000001101101110111111111011000000010000011110000101011001000000010110000110000001011000001000000100010000000010100100111111000010010101111111000100100111111010101011111111110000010111111111101001000010000011000";
        ram[50] = "0b11110000000110111101010110110111111000111101111010110001010000000001000101000110111010100000100010111110111110000001010111101100101011000110000000111110100010101111111111000100100000001000110101111101110001000000001001010101111111111100111";
        ram[51] = "0b00000011111001001000010000011000001101101110111010110001010000011111110111000000110100110111010101101010001000000101111000010000000011111101011010110000000001100001111101001111100000010110111110111101110001000000010011000000111101110110110";
        ram[52] = "0b00000011111001111110111010011000001101101110000011010110111000101111001111111111010011010111111100010100111110000001010111101100101011111101011010110111110001101110000000111001101111101100100010111111110000010111110101111110111101110110110";
        ram[53] = "0b00111111010001000011100101011111111000111101111111111011000000000001000101111101110001111111101111011011111110000001010000110011011010000100010010111111110001101110111111000100100000001000110101111111110000010000001001010101111111111100111";
        ram[54] = "0b00101011011110000010000001110111111000111101111110001101001000010000011110111111010011010111101111011011000011000011101000000100010000111111001000111000000001100001111101001111100111011110011000111011110001110111100010101000111011110000101";
        ram[55] = "0b11110000000110111011110011000111001111011011111100011111010000011111110111111101110001111001010110100001000011000011101111101100101011111101011010110000010001010100111101001111100111101100100010111111110000010111101100010011111101110110110";
        ram[56] = "0b11110000000110001001110100000111100100001100111100011111010000011111110111111111010011010111101111011011000011000011101111101100101011111101011010110111110001101110000000111001101111111010101011111101110001000111111111101001111101110110110";
        ram[57] = "0b00111111010001000011100101011111100100001100111110001101001000000001000101000000110100110111100010100011000011000011101000100111101000000000110110111000010001010100111101001111100000001000110101111101110001000111100010101000111101110110110";


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


SC_MODULE(svm_classifier_Loop_Sum_loop_proc1_SVs_V_9) {


static const unsigned DataWidth = 239;
static const unsigned AddressRange = 58;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


svm_classifier_Loop_Sum_loop_proc1_SVs_V_9_ram* meminst;


SC_CTOR(svm_classifier_Loop_Sum_loop_proc1_SVs_V_9) {
meminst = new svm_classifier_Loop_Sum_loop_proc1_SVs_V_9_ram("svm_classifier_Loop_Sum_loop_proc1_SVs_V_9_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~svm_classifier_Loop_Sum_loop_proc1_SVs_V_9() {
    delete meminst;
}


};//endmodule
#endif