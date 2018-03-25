-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.2
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity svm_classifier_SVs_h_V_13_rom is 
    generic(
             dwidth     : integer := 240; 
             awidth     : integer := 5; 
             mem_size    : integer := 29
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of svm_classifier_SVs_h_V_13_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "000000011111001111010001111011111001111011011111100011111010001001110000001111111010011010000111100110000111110000001010000111111001101110110100010110001010000100000111011011010011000010110111110111011110001110000010011000000111011110000101", 
    1 => "111110000000110111011110011000000110111010000111110001101001000000001000101000110111010100111101111011011000001011000001111101100101011000111101110111000000001100001111101001111100111101100100010111101110001000111001111010001111101110110110", 
    2 => "000111111010001000110101100110000001101101110111111111011000000000001000101111111010011010111111100010100000011000011101111111000011110111011101100110000010001010100111101001111100111101100100010111101110001000000010011000000111111111100111", 
    3 => "000000011111001001000010000011000001101101110111110001101001000000001000101111111010011010111101111011011111111101100110000011011110101111111001000111000010001010100111111000100100111101100100010111101110001000111001111010001111111111100111", 
    4 => "111110000000110000000011110000110111010101010111110001101001000011111110111111001001101100111111100010100000100101111000111010101000110111000010000110000000001100001111111000100100000001000110101000001101111100000010011000000111111111100111", 
    5 => "111110000000110000101001001000000001101101110000001101000111000011111110111111111010011010111101111011011111010101010011000000100010000111111001000111000000001100001000000111001101111101100100010111101110001000111110101111110111101110110110", 
    6 => "000010111101100000110101100110111111000111101111110001101001111110001101100111101110001111111101111011011000001011000001000110011011010000000110110111111110001101110111101001111100111101100100010111011110001110111110101111110111011110000101", 
    7 => "000000011111001000011100101011111111000111101111010110001010001011101011010111111010011010111101111011011001000000101111000000100010000111111001000111111000010010101111111000100100111111010101011111101110001000111111111101001111111111100111", 
    8 => "000000011111001000110101100110111111000111101111010110001010001001110000001000000110100110111101111011011001000000101111000010000000011111101011010110111010010001000111101001111100111101100100010111101110001000111110101111110111101110110110", 
    9 => "000000011111001111011110011000000110111010000111110001101001000000001000101000110111010100111101111011011000001011000001111101100101011000111101110111000000001100001111101001111100111101100100010111011110001110111101100010011111011110000101", 
    10 => "000000011111001001000010000011111111000111101111010110001010000011111110111111111010011010111010101101010000110011010100000000100010000111101011010110000000001100001111101001111100000001000110101111111110000010111100010101000111111111100111", 
    11 => "001010011000100000110101100110000001101101110111111111011000000010000011110111101110001111000100010111110111110000001010111101100101011111101011010110000100001000111111111000100100111111010101011111101110001000000011100101011000010000011000", 
    12 => "111011100010100111101010110110000100010011111111100011111010111100010010011000101011001000000100010111110111111101100110111101100101011000110000000111111000010010101111111000100100111111010101011111101110001000111111111101001111101110110110", 
    13 => "111011100010100111011110011000111001111011011111100011111010001011101011010000011110111101001001001101000111110000001010000000100010000111001111110110000000001100001111101001111100111111010101011111111110000010111111111101001111101110110110", 
    14 => "001010011000100001001110100000000100010011111000101000100110000010000011110000000110100110111101111011011111100010101111000000100010000111111001000111000000001100001001000001101111000110011010001000011101110110000011100101011000010000011000", 
    15 => "111110000000110000101001001000111111000111101111010110001010001101100110011111101110001111111101111011011001001110001011000010000000011000000110110111111000010010101111101001111100000100101001000111101110001000000011100101011111101110110110", 
    16 => "000000011111001001000010000011000100010011111111110001101001000010000011110000010010110001111101111011011000011000011101000011011110101111101011010110000010001010100000000111001101000001000110101111111110000010000001001010101111111111100111", 
    17 => "000010111101100000010000001110111111000111101111100011111010000010000011110111101110001111000100010111110000110011010100111100000111001111101011010110000010001010100000000111001101000001000110101111111110000010000001001010101111111111100111", 
    18 => "000000011111001111010001111011000001101101110111111111011000000010000011110000101011001000111101111011011000011000011101000010000000011000000110110111111110001101110111101001111100111011110011000111111110000010111101100010011111111111100111", 
    19 => "111110000000110111101010110110000110111010000111100011111010000000001000101000110111010100111111100010100000011000011101111010101000110000100010010111111110001101110111101001111100111101100100010111101110001000111001111010001111011110000101", 
    20 => "111011100010100111011110011000111100100001100111010110001010000010000011110110110001010101110101111000000000100101111000111100000111001111001111110110110110010100010111111000100100000001000110101111111110000010000001001010101111111111100111", 
    21 => "111110000000110111101010110110000110111010000111110001101001000011111110111001000011100000111111100010100000001011000001111100000111001000010100100111111100001111011111111000100100000001000110101000001101111100000001001010101111101110110110", 
    22 => "000111111010001000011100101011111111000111101111111111011000000000001000101111111010011010111101111011011111110000001010000110011011010000010100100111111100001111011111111000100100000100101001000111111110000010000011100101011111111111100111", 
    23 => "001010011000100000101001001000000001101101110111110001101001000000001000101111111010011010111111100010100111110000001010000000100010000000010100100111111110001101110000000111001101111101100100010111101110001000111110101111110111101110110110", 
    24 => "000111111010001000011100101011111100100001100111111111011000000010000011110111010101111000111101111011011111110000001010000100111101000000110000000111111100001111011111101001111100000001000110101111101110001000000001001010101111101110110110", 
    25 => "000101011011110001000010000011111111000111101111110001101001111110001101100111111010011010111101111011011000001011000001000110011011010111111001000111111110001101110000000111001101000100101001000111101110001000000011100101011111111111100111", 
    26 => "000000011111001111101010110110000110111010000111100011111010000000001000101001000011100000111010101101010000011000011101111010101000110000100010010111000010001010100111101001111100000001000110101111111110000010000001001010101111101110110110", 
    27 => "000000011111001111010001111011111001111011011111100011111010001011101011010000011110111101000101111110111111100010101111001001010111111110110100010110001000000101101111011011010011000010110111110111101110001000000010011000000111101110110110", 
    28 => "000000011111001001000010000011111111000111101111110001101001000000001000101000000110100110111101111011011111111101100110000011011110101111111001000111000010001010100111111000100100111011110011000111101110001000111101100010011111101110110110" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "block";

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

entity svm_classifier_SVs_h_V_13 is
    generic (
        DataWidth : INTEGER := 240;
        AddressRange : INTEGER := 29;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of svm_classifier_SVs_h_V_13 is
    component svm_classifier_SVs_h_V_13_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    svm_classifier_SVs_h_V_13_rom_U :  component svm_classifier_SVs_h_V_13_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

