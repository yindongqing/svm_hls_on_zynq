-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.2
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity svm_classifier_SVs_l_V_4_rom is 
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


architecture rtl of svm_classifier_SVs_l_V_4_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "111110000000110111101010110110000110111010000111100011111010000000001000101000110111010100111111100010100000011000011101111010101000110000100010010111111110001101110111101001111100111011110011000111101110001000111100010101000111011110000101", 
    1 => "000000011111001111010001111011111001111011011111010110001010000111110101000111010101111000001001001101000111111101100110000110011011010110110100010110001100000010011111011011010011000100101001000111101110001000111101100010011111101110110110", 
    2 => "000000011111001111010001111011111111000111101111010110001010000000001000101000110111010100111111100010100000001011000001111001001010100001011001010111111110001101110111011011010011111101100100010111011110001110111111111101001111011110000101", 
    3 => "000010111101100000011100101011111111000111101111110001101001111110001101100111111010011010111101111011011111111101100110000011011110101111111001000111111110001101110111111000100100111101100100010111011110001110111110101111110111011110000101", 
    4 => "000010111101100001000010000011111111000111101111110001101001111110001101100111111010011010111100010100011000011000011101000110011011010111101011010110111110001101110000000111001101000001000110101111111110000010111100010101000111111111100111", 
    5 => "000000011111001111010001111011111001111011011111100011111010001001110000001000000110100110000111100110000111110000001010000110011011010110110100010110001010000100000111011011010011000010110111110111101110001000000010011000000111101110110110", 
    6 => "111110000000110000101001001000111111000111101111010110001010001101100110011111111010011010111101111011011001001110001011000010000000011111111001000111111000010010101111101001111100000001000110101111101110001000000010011000000111101110110110", 
    7 => "000010111101100001000010000011111111000111101111110001101001111110001101100111111010011010111100010100011000011000011101000110011011010111101011010110111110001101110111111000100100111111010101011111101110001000111111111101001111101110110110", 
    8 => "000000011111001000000011110000111111000111101111111111011000000011111110111000000110100110000010110000110000011000011101111100000111001111101011010110111110001101110111111000100100111111010101011000001101111100111111111101001111111111100111", 
    9 => "000101011011110000110101100110111111000111101111110001101001111110001101100000000110100110111100010100011000011000011101000110011011010111101011010110111110001101110111101001111100111111010101011111011110001110111111111101001111011110000101", 
    10 => "111011100010100111101010110110000001101101110111111111011000000010000011110000101011001000000010110000110000100101111000000000100010000000000110110111111010010001000111101001111100111011110011000111111110000010111100010101000111111111100111", 
    11 => "000010111101100000101001001000000001101101110000001101000111000101111001111111111010011010111101111011011111110000001010111101100101011111111001000111111100001111011000000111001101111111010101011111101110001000111101100010011111101110110110", 
    12 => "111110000000110111011110011000111001111011011111010110001010000101111001111111111010011010001010110100001111111101100110000000100010000111011101100110000100001000111111101001111100111111010101011111111110000010111111111101001111101110110110", 
    13 => "000000011111001111010001111011111100100001100111010110001010000010000011110111100010000011001010110100001000011000011101111101100101011111011101100110000100001000111111101001111100111111010101011111111110000010111111111101001111111111100111", 
    14 => "111110000000110111011110011000000001101101110111111111011000000010000011110000101011001000000100010111110000011000011101000000100010000000000110110111111010010001000111101001111100111011110011000111111110000010111100010101000111111111100111", 
    15 => "000010111101100000000011110000111111000111101111110001101001000011111110111111111010011010000100010111110000100101111000111100000111001111101011010110000000001100001111111000100100111011110011000000001101111100111101100010011111101110110110", 
    16 => "111110000000110000010000001110111100100001100111111111011000000011111110111111100010000011000001001001101111110000001010111111000011110111011101100110000010001010100000000111001101111111010101011111111110000010111110101111110111111111100111", 
    17 => "000000011111001111011110011000000001101101110111111111011000000010000011110000011110111101111101111011011000011000011101000000100010000000010100100111111110001101110111111000100100111101100100010111111110000010111110101111110111101110110110", 
    18 => "000101011011110000011100101011111111000111101111010110001010000111110101000111111010011010111101111011011000011000011101000000100010000111111001000111111010010001000111001100101011111000010000110110111110011011110111011111011111001101010100", 
    19 => "000111111010001000011100101011111100100001100111111111011000000010000011110111010101111000111101111011011111110000001010000110011011010000111101110111111100001111011111111000100100000001000110101111111110000010111101100010011000010000011000", 
    20 => "000010111101100000010000001110111111000111101111111111011000000011111110111111111010011010111100010100011000011000011101111111000011110111101011010110111100001111011000000111001101111101100100010000001101111100111110101111110111111111100111", 
    21 => "000000011111001111101010110110111001111011011111010110001010000011111110111111001001101100111111100010100000100101111000111010101000110111001111110110000000001100001111111000100100111111010101011111111110000010111111111101001111111111100111", 
    22 => "111011100010100111101010110110111001111011011111100011111010000010000011110111100010000011000101111110111000001011000001111101100101011111101011010110000100001000111111101001111100000001000110101111011110001110000001001010101111011110000101", 
    23 => "000010111101100000101001001000111111000111101111010110001010000111110101000111111010011010111101111011011000011000011101000000100010000111111001000111111100001111011111011011010011111000010000110111001110010101110111011111011111001101010100", 
    24 => "001010011000100000010000001110111111000111101111110001101001000010000011110111100010000011000100010111110000011000011101111100000111001111101011010110000110000111010111111000100100111101100100010111111110000010111110101111110111101110110110", 
    25 => "000000011111001111101010110110111100100001100111010110001010000011111110111111010101111000111111100010100000011000011101111001001010100111001111110110000000001100001111111000100100000001000110101111111110000010000001001010101111101110110110", 
    26 => "000000011111001111101010110110111100100001100111010110001010000011111110111111001001101100000001001001101000110011010100111001001010100111001111110110000000001100001111101001111100000001000110101111111110000010000010011000000111111111100111", 
    27 => "000000011111001111010001111011111001111011011111100011111010001001110000001111101110001111001001001101000111110000001010000110011011010110110100010110001100000010011111011011010011000010110111110111101110001000000010011000000111101110110110", 
    28 => "000010111101100000010000001110111100100001100111111111011000111110001101100111101110001111111100010100011000001011000001000000100010000000000110110111111110001101110000000111001101111111010101011111111110000010111111111101001111101110110110" );

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

entity svm_classifier_SVs_l_V_4 is
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

architecture arch of svm_classifier_SVs_l_V_4 is
    component svm_classifier_SVs_l_V_4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    svm_classifier_SVs_l_V_4_rom_U :  component svm_classifier_SVs_l_V_4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


