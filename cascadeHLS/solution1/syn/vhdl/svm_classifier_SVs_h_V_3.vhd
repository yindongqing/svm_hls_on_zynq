-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.2
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity svm_classifier_SVs_h_V_3_rom is 
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


architecture rtl of svm_classifier_SVs_h_V_3_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "000010111101100000110101100110001001100000001000011010110111000011111110111000000110100110111010101101010111111101100110111101100101011000000110110111000010001010100000100100011110111111010101011000001101111100111111111101001111111111100111", 
    1 => "111110000000110111110111010011111100100001100111010110001010000101111001111111001001101100111101111011011000110011010100111010101000110111011101100110111010010001000111111000100100000001000110101111111110000010000001001010101111111111100111", 
    2 => "000000011111001111101010110110111100100001100111010110001010000101111001111111001001101100111111100010100000100101111000111010101000110111000010000110111110001101110111101001111100111111010101011111101110001000111111111101001111101110110110", 
    3 => "000010111101100000000011110000000100010011111111110001101001000111110101000111111010011010000100010111110000011000011101000010000000011111101011010110000000001100001111111000100100000001000110101111111110000010000001001010101111111111100111", 
    4 => "000010111101100000010000001110000001101101110111110001101001000010000011110000010010110001000001001001101000001011000001000000100010000111111001000111111100001111011000000111001101111111010101011000001101111100111111111101001000010000011000", 
    5 => "000000011111001111010001111011111001111011011111010110001010000101111001111111010101111000001001001101000111110000001010000100111101000111000010000110001100000010011111011011010011111111010101011111001110010101111111111101001111001101010100", 
    6 => "000000011111001111010001111011111100100001100111010110001010000101111001111111001001101100001001001101000111111101100110000011011110101110110100010110001100000010011111011011010011111111010101011111001110010101111111111101001111011110000101", 
    7 => "000000011111001111010001111011111001111011011111100011111010000111110101000111100010000011000111100110000111110000001010000110011011010111000010000110001010000100000111011011010011111111010101011111001110010101111111111101001111011110000101", 
    8 => "111011100010100111011110011000000001101101110111111111011000000010000011110000101011001000000100010111110000001011000001000000100010000000000110110111111010010001000111101001111100111011110011000111101110001000111100010101000111101110110110", 
    9 => "000111111010001000011100101011111100100001100111111111011000000010000011110111010101111000111101111011011111110000001010000100111101000000110000000111111100001111011111111000100100000001000110101111101110001000000010011000000111101110110110", 
    10 => "111110000000110111011110011000111001111011011111100011111010000101111001111000000110100110001001001101000111111101100110111101100101011111111001000111111110001101110111101001111100111101100100010111101110001000111110101111110111101110110110", 
    11 => "000010111101100111110111010011111100100001100111010110001010000011111110111111001001101100000001001001101000011000011101111010101000110111000010000110000100001000111111101001111100000001000110101111101110001000000001001010101111101110110110", 
    12 => "000000011111001111110111010011111100100001100111010110001010000101111001111111010101111000000001001001101000100101111000111001001010100111011101100110111110001101110111111000100100000010110111110111111110000010000010011000000111101110110110", 
    13 => "111110000000110111011110011000000100010011111000101000100110000010000011110000010010110001111100010100011000001011000001000000100010000000000110110111111110001101110111101001111100111101100100010111101110001000111001111010001111101110110110", 
    14 => "000000011111001111011110011000000001101101110111111111011000000010000011110000101011001000111010101101010000011000011101000010000000011000010100100111000000001100001111101001111100111101100100010111111110000010111110101111110111101110110110", 
    15 => "000000011111001000011100101011111111000111101111010110001010001101100110011111101110001111111101111011011001000000101111000010000000011000000110110111111000010010101111011011010011111101100100010111001110010101111011000111100111011110000101", 
    16 => "000000011111001001000010000011000001101101110111110001101001000000001000101111111010011010111101111011011000011000011101000011011110101111111001000111000010001010100000000111001101000001000110101111111110000010000001001010101111111111100111", 
    17 => "111001000100001000000011110000111111000111101111110001101001000011111110111000101011001000000100010111110000100101111000111111000011110000000110110111111010010001000000000111001101000010110111110111111110000010000010011000000111111111100111", 
    18 => "111110000000110111101010110110000110111010000111100011111010000000001000101001000011100000000010110000110000100101111000111100000111001000100010010111111100001111011111101001111100111111010101011000001101111100111111111101001111111111100111", 
    19 => "000111111010001000011100101011111100100001100111111111011000000010000011110111001001101100111101111011011111110000001010000110011011010000111101110111111100001111011111111000100100000010110111110111111110000010000011100101011111111111100111", 
    20 => "111110000000110111110111010011000001101101110111111111011000000000001000101000010010110001000010110000110111111101100110111101100101011000010100100111111100001111011111111000100100111011110011000111111110000010111100010101000111101110110110", 
    21 => "000000011111001000101001001000111111000111101111010110001010001101100110011111111010011010111101111011011001000000101111000010000000011111111001000111111000010010101111101001111100111111010101011111011110001110111011000111100111011110000101", 
    22 => "111011100010100111101010110110111001111011011111100011111010000111110101000111100010000011000101111110111000100101111000000000100010000111001111110110000100001000111111101001111100000100101001000111101110001000000100110010110111101110110110", 
    23 => "000000011111001111010001111011111001111011011111100011111010001001110000001000010010110001000101111110111111100010101111000111111001101111000010000110001000000101101111011011010011000001000110101111011110001110000001001010101111011110000101", 
    24 => "111110000000110111010001111011111001111011011111100011111010000111110101000000000110100110001001001101000111111101100110111111000011110111011101100110000010001010100111101001111100000001000110101111111110000010000001001010101111101110110110", 
    25 => "000010111101100000011100101011111111000111101111110001101001111110001101100111111010011010111101111011011111111101100110000011011110101111111001000111111110001101110000000111001101111111010101011111011110001110111111111101001111011110000101", 
    26 => "000000011111001000011100101011111100100001100111111111011000000010000011110111111010011010111100010100011111100010101111000000100010000000000110110111000000001100001000000111001101111101100100010111101110001000111110101111110111101110110110", 
    27 => "111110000000110111011110011000000110111010000111100011111010000000001000101000110111010100111101111011011000100101111000111100000111001000111101110111000000001100001111101001111100111101100100010111101110001000111101100010011111101110110110", 
    28 => "000111111010001000011100101011111100100001100111110001101001000000001000101111100010000011111101111011011111110000001010000100111101000000100010010111111100001111011111101001111100111101100100010111101110001000111011000111100111101110110110" );

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

entity svm_classifier_SVs_h_V_3 is
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

architecture arch of svm_classifier_SVs_h_V_3 is
    component svm_classifier_SVs_h_V_3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    svm_classifier_SVs_h_V_3_rom_U :  component svm_classifier_SVs_h_V_3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


