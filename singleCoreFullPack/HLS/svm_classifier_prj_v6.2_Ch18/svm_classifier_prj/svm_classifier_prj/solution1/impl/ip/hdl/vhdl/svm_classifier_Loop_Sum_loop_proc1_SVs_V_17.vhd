-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.2
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity svm_classifier_Loop_Sum_loop_proc1_SVs_V_17_rom is 
    generic(
             dwidth     : integer := 238; 
             awidth     : integer := 6; 
             mem_size    : integer := 58
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of svm_classifier_Loop_Sum_loop_proc1_SVs_V_17_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "1011100010100111101010110110111111000111101111010110001010111110001101100000110111010100000101111110111111111101100110000000100010000001001011100111110100010101111111011011010011111111010101011111101110001000000001001010101111111111100111", 
    1 => "0000011111001111010001111011111111000111101111010110001010111110001101100000110111010100000001001001101000001011000001111010101000110001011001010111111100001111011111011011010011000001000110101111101110001000000010011000000111011110000101", 
    2 => "0000011111001001000010000011000001101101110000011010110111000011111110111111111010011010111101111011011111100010101111000010000000011111111001000111000010001010100000100100011110000010110111110000011101110110000010011000000000010000011000", 
    3 => "1110000000110111101010110110000110111010000111100011111010000010000011110001000011100000000001001001101000001011000001111010101000110000010100100111111100001111011111101001111100111111010101011111101110001000111111111101001111011110000101", 
    4 => "0111111010001000011100101011111100100001100111111111011000000010000011110111010101111000111101111011011111110000001010000011011110101000110000000111111100001111011111101001111100111111010101011111011110001110111100010101000111101110110110", 
    5 => "0101011011110000010000001110111111000111101111111111011000000000001000101111101110001111111101111011011111111101100110000110011011010000010100100111111110001101110111101001111100111111010101011111011110001110111111111101001111101110110110", 
    6 => "0000011111001111101010110110000110111010000111100011111010000000001000101000110111010100111101111011011000011000011101111010101000110000100010010111000000001100001111101001111100111101100100010111111110000010111101100010011111101110110110", 
    7 => "1110000000110111011110011000111100100001100111010110001010000011111110111111101110001111001010110100001000011000011101111101100101011111101011010110000010001010100111011011010011111111010101011111101110001000111111111101001111101110110110", 
    8 => "0000011111001111010001111011111001111011011111100011111010000111110101000111100010000011000111100110000111110000001010000100111101000111000010000110001100000010011111011011010011111111010101011111001110010101111111111101001111001101010100", 
    9 => "0000011111001000110101100110111111000111101111110001101001000010000011110111111010011010111100010100011111111101100110111101100101011111111001000111000000001100001000000111001101111101100100010111111110000010111110101111110111101110110110", 
    10 => "0111111010001000101001001000111100100001100111111111011000000010000011110111100010000011111101111011011111110000001010000100111101000000110000000111111100001111011111111000100100000100101001000111101110001000111101100010011111111111100111", 
    11 => "0111111010001000010000001110111100100001100000001101000111000000001000101111100010000011000100010111110000100101111000111010101000110111101011010110000110000111010000110011000111000100101001000000101101101111000100110010110000100001001001", 
    12 => "0101011011110000101001001000111111000111101111110001101001111110001101100111111010011010111101111011011111111101100110000100111101000111111001000111111110001101110000000111001101111111010101011111011110001110111111111101001111101110110110", 
    13 => "0010111101100000101001001000111111000111101111010110001010001001110000001111111010011010111101111011011000100101111000000000100010000000000110110111111010010001000111011011010011111000010000110111001110010101111000101100110111011110000101", 
    14 => "0000011111001111101010110110111100100001100111010110001010000101111001111111001001101100111111100010100000110011010100111010101000110111001111110110111110001101110111101001111100111111010101011111101110001000111111111101001111101110110110", 
    15 => "0010111101100111110111010011111100100001100111010110001010000011111110111111010101111000000010110000110000100101111000111001001010100111001111110110000010001010100000000111001101000010110111110000001101111100000011100101011111111111100111", 
    16 => "0000011111001111010001111011111111000111101111010110001010111110001101100000110111010100000001001001101000001011000001111010101000110001011001010111111100001111011111011011010011000010110111110111101110001000111101100010011111011110000101", 
    17 => "0101011011110001000010000011111111000111101111110001101001111110001101100111111010011010111101111011011000001011000001000111111001101111111001000111111110001101110111111000100100000010110111110111101110001000000010011000000111101110110110", 
    18 => "0000011111001111010001111011111111000111101111010110001010000000001000101000110111010100111111100010100000001011000001111001001010100001011001010111111110001101110111011011010011111111010101011111011110001110111111111101001111011110000101", 
    19 => "1011100010100111110111010011111100100001100111010110001010000101111001111110111101100001111100010100011000110011010100111010101000110111011101100110111000010010101111111000100100000100101001000111111110000010000011100101011111111111100111", 
    20 => "0000011111001111011110011000000001101101110111111111011000000010000011110000011110111101111101111011011000100101111000000010000000011000000110110111111110001101110111111000100100111111010101011000001101111100111111111101001111111111100111", 
    21 => "0111111010001000011100101011111100100001100111111111011000000010000011110111010101111000111101111011011111100010101111000100111101000000111101110111111100001111011111111000100100000001000110101111111110000010000010011000000111111111100111", 
    22 => "1110000000110111011110011000111001111011011111100011111010000011111110111111111010011010001001001101000111111101100110111101100101011111111001000111000010001010100111101001111100111101100100010111101110001000111110101111110111101110110110", 
    23 => "1110000000110111011110011000111001111011011111100011111010001001110000001000010010110001001001001101000111111101100110000000100010000111011101100110000010001010100111101001111100000001000110101000001101111100000001001010101111111111100111", 
    24 => "0000011111001111110111010011111111000111101111111111011000000010000011110111101110001111000001001001101000001011000001111010101000110111101011010110000000001100001000000111001101111111010101011000001101111100111111111101001111111111100111", 
    25 => "1110000000110000110101100110111111000111101111100011111010000000001000101111111010011010111100010100011001000000101111000010000000011111111001000111000010001010100111111000100100000001000110101111101110001000000001001010101111101110110110", 
    26 => "0000011111001111010001111011000110111010000111110001101001000000001000101000101011001000000001001001101111100010101111111100000111001000110000000111111000010010101111101001111100111101100100010111101110001000111110101111110111111111100111", 
    27 => "1110000000110111011110011000000110111010000111110001101001000000001000101000110111010100111111100010100000001011000001111101100101011000111101110111111110001101110111101001111100111011110011000111011110001110111001111010001111011110000101", 
    28 => "0000011111001000110101100110111111000111101111110001101001111100010010011111101110001111111101111011011111111101100110000011011110101000000110110111000010001010100111101001111100111101100100010111011110001110111110101111110111011110000101", 
    29 => "0000011111001000011100101011111001111011011111110001101001001001110000001111100010000011000010110000110000011000011101111101100101011111011101100110111110001101110111101001111100111111010101011111111110000010000011100101011000100001001001", 
    30 => "0000011111001111010001111011111001111011011111100011111010001001110000001111101110001111000111100110000111110000001010000110011011010110110100010110001010000100000111011011010011111101100100010111011110001110111110101111110111011110000101", 
    31 => "0111111010001000011100101011111100100001100111110001101001111110001101100111111010011010111100010100011000001011000001000011011110101111111001000111000000001100001111101001111100111111010101011111101110001000111011000111100111101110110110", 
    32 => "1110000000110111011110011000000110111010000111100011111010111110001101100000110111010100111111100010100000011000011101111100000111001000111101110111111110001101110111101001111100111101100100010111101110001000111101100010011111101110110110", 
    33 => "0101011011110001000010000011111111000111101111110001101001111110001101100111111010011010111101111011011000011000011101000110011011010111111001000111111110001101110000000111001101000010110111110111101110001000000010011000000111111111100111", 
    34 => "1110000000110111011110011000111100100001100111010110001010001001110000001000000110100110001010110100001000011000011101111111000011110111011101100110000010001010100111011011010011111101100100010111111110000010111110101111110111101110110110", 
    35 => "0000011111001111010001111011111111000111101111010110001010111110001101100000110111010100000001001001101000001011000001111010101000110001011001010111111100001111011111011011010011000001000110101111101110001000111101100010011111101110110110", 
    36 => "1110000000110111101010110110111001111011011111100011111010000000001000101110111101100001111101111011011000100101111000111100000111001111001111110110000000001100001111111000100100000010110111110111101110001000000010011000000111101110110110", 
    37 => "0010111101100000110101100110111111000111101111110001101001111110001101100111111010011010111100010100011000001011000001000100111101000111101011010110111110001101110111111000100100111101100100010111011110001110111110101111110111101110110110", 
    38 => "0000011111001001000010000011111111000111101000011010110111000010000011110111111010011010111101111011011111100010101111000000100010000111111001000111000000001100001001000001101111000100101001000000101101101111000011100101011000100001001001", 
    39 => "0000011111001111110111010011111001111011011111100011111010000010000011110111001001101100111111100010100000100101111000111010101000110111001111110110000000001100001000000111001101000001000110101000001101111100000001001010101111111111100111", 
    40 => "1001000100001000101001001000000100010011111000011010110111000010000011110111111010011010111101111011011111110000001010111101100101011111111001000111111100001111011000010101110101111101100100010111111110000010111110101111110111101110110110", 
    41 => "0000011111001111010001111011111001111011011111100011111010001001110000001111101110001111001001001101000111110000001010000110011011010110110100010110001010000100000111011011010011000010110111110111101110001000000010011000000111101110110110", 
    42 => "1110000000110111011110011000000110111010000111110001101001000000001000101000110111010100111111100010100000001011000001111101100101011000110000000111111110001101110111101001111100111011110011000111011110001110111001111010001111011110000101", 
    43 => "1110000000110000101001001000111111000111101111010110001010001101100110011111111010011010111101111011011001001110001011000010000000011111111001000111111000010010101111111000100100000100101001000111111110000010111101100010011111111111100111", 
    44 => "0101011011110001000010000011111111000111101111110001101001111110001101100111111010011010111100010100011000011000011101000100111101000111101011010110111110001101110111111000100100111101100100010111101110001000111110101111110111111111100111", 
    45 => "0000011111001111010001111011111001111011011111100011111010001011101011010000010010110001000101111110111111100010101111001001010111111110110100010110001000000101101111011011010011000100101001000111101110001000000011100101011111101110110110", 
    46 => "0000011111001111110111010011111001111011011111010110001010000011111110111111001001101100111111100010100000100101111000111010101000110111001111110110000000001100001111111000100100000001000110101000001101111100000001001010101111111111100111", 
    47 => "0010111101100000101001001000111111000111101111110001101001111110001101100111111010011010111100010100011000001011000001000100111101000111111001000111111110001101110000010101110101000001000110101111101110001000000001001010101111111111100111", 
    48 => "1110000000110000011100101011111100100001100111111111011000000010000011110111111010011010000100010111110000100101111000111100000111001111101011010110000010001010100111111000100100111101100100010111111110000010000010011000000000010000011000", 
    49 => "0000011111001111101010110110111001111011011111100011111010000010000011110111001001101100111111100010100000001011000001111010101000110111001111110110000000001100001111111000100100000001000110101111101110001000000001001010101111011110000101", 
    50 => "1110000000110111011110011000001001100000001111110001101001000000001000101000110111010100111111100010100000001011000001111111000011110000110000000111111110001101110111111000100100111111010101011111111110000010111111111101001111101110110110", 
    51 => "0000011111001111011110011000000110111010000111100011111010000010000011110000110111010100111010101101010000100101111000111100000111001000111101110111000010001010100111101001111100111101100100010111011110001110111110101111110111011110000101", 
    52 => "0000011111001001000010000011111111000111101111010110001010000000001000101111111010011010111010101101010000110011010100000000100010000111111001000111000010001010100111101001111100111111010101011111111110000010111111111101001111111111100111", 
    53 => "0000011111001000110101100110111111000111101111111111011000000000001000101111111010011010111101111011011111111101100110111111000011110000000110110111000010001010100000000111001101000010110111110111111110000010111110101111110111101110110110", 
    54 => "0000011111001001000010000011111111000111101111110001101001000000001000101111111010011010111101111011011111111101100110000011011110101000000110110111000010001010100111111000100100111011110011000111101110001000111101100010011111101110110110", 
    55 => "0101011011110000101001001000000001101101110111110001101001111110001101100000000110100110111100010100011111111101100110000100111101000111101011010110111110001101110000000111001101111111010101011111011110001110111111111101001111101110110110", 
    56 => "0000011111001111010001111011111100100001100111010110001010000111110101000111111010011010001001001101000111111101100110111111000011110111001111110110000100001000111111011011010011111011110011000111101110001000111100010101000111011110000101", 
    57 => "0101011011110001000010000011111111000111101111110001101001111110001101100111111010011010111100010100011000011000011101000110011011010111101011010110111110001101110000000111001101000010110111110111111110000010111100010101000111111111100111" );


attribute EQUIVALENT_REGISTER_REMOVAL : string;
begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity svm_classifier_Loop_Sum_loop_proc1_SVs_V_17 is
    generic (
        DataWidth : INTEGER := 238;
        AddressRange : INTEGER := 58;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of svm_classifier_Loop_Sum_loop_proc1_SVs_V_17 is
    component svm_classifier_Loop_Sum_loop_proc1_SVs_V_17_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    svm_classifier_Loop_Sum_loop_proc1_SVs_V_17_rom_U :  component svm_classifier_Loop_Sum_loop_proc1_SVs_V_17_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


