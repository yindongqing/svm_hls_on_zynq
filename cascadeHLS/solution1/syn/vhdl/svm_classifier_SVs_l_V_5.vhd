-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.2
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity svm_classifier_SVs_l_V_5_rom is 
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


architecture rtl of svm_classifier_SVs_l_V_5_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "000000011111001000101001001000111111000111101111010110001010001011101011010111111010011010111101111011011001000000101111000010000000011111111001000111111000010010101111101001111100000001000110101111011110001110000001001010101111101110110110", 
    1 => "000010111101100000011100101011111100100001100111100011111010000010000011110111100010000011000100010111110001000000101111111101100101011111011101100110000100001000111111111000100100000001000110101000001101111100000001001010101111111111100111", 
    2 => "111110000000110000101001001000111111000111101111010110001010001101100110011111111010011010111101111011011001001110001011000010000000011111111001000111111000010010101111101001111100000001000110101111101110001000000001001010101111111111100111", 
    3 => "000000011111001000110101100110111111000111101111100011111010000000001000101111111010011010111100010100011001000000101111000010000000011111111001000111000000001100001111111000100100000001000110101111101110001000000001001010101111101110110110", 
    4 => "000010111101100000011100101011111111000111101111010110001010001001110000001111111010011010111101111011011000100101111000000000100010000111111001000111111010010001000111011011010011111010000001111111001110010101111000101100110111001101010100", 
    5 => "111011100010100111101010110110111111000111101111010110001010111100010010011000110111010100000101111110111111110000001010111111000011110001011001010111110010010111011111101001111100000010110111110111101110001000111101100010011111101110110110", 
    6 => "000000011111001000110101100110111111000111101111010110001010000000001000101111111010011010000001001001101010000011111001111111000011110111111001000111000000001100001111111000100100000100101001000000001101111100111101100010011000010000011000", 
    7 => "000010111101100000101001001000111111000111101111010110001010001001110000001000000110100110111100010100011000110011010100000000100010000111101011010110111000010010101000000111001101000001000110101111101110001000000010011000000111111111100111", 
    8 => "000101011011110001000010000011111111000111101111110001101001111110001101100111111010011010111100010100011000001011000001000100111101000111101011010110111110001101110111111000100100111101100100010111101110001000111110101111110111101110110110", 
    9 => "000000011111001111011110011000000110111010000111110001101001000000001000101000110111010100000100010111110111100010101111111101100101011000111101110111110110010100010111101001111100111101100100010111101110001000111110101111110111111111100111", 
    10 => "111110000000110000110101100110111111000111101111110001101001000011111110111111111010011010111100010100011111111101100110111101100101011111101011010110111110001101110000000111001101111111010101011111101110001000111111111101001111101110110110", 
    11 => "000010111101100000101001001000111111000111101111110001101001111110001101100111111010011010111101111011011111111101100110000100111101000111111001000111000000001100001000000111001101111111010101011111011110001110111111111101001111101110110110", 
    12 => "111110000000110000011100101011111111000111101111110001101001000101111001111000010010110001000101111110111000011000011101111101100101011111111001000111111100001111011111111000100100111111010101011111111110000010000011100101011000010000011000", 
    13 => "111011100010100111101010110110000001101101110111111111011000000010000011110000011110111101000010110000110000011000011101000000100010000000000110110111111010010001000111111000100100111101100100010111111110000010111101100010011111111111100111", 
    14 => "000000011111001111110111010011111111000111101111111111011000000011111110111000000110100110000010110000110000001011000001111010101000110111111001000111111110001101110000000111001101111111010101011000001101111100111111111101001111111111100111", 
    15 => "000111111010001000011100101011111100100001100111111111011000000000001000101111100010000011111101111011011111110000001010000110011011010000100010010111111100001111011111111000100100000010110111110111111110000010000011100101011111111111100111", 
    16 => "000111111010001000011100101011111111000111101111111111011000000000001000101111101110001111111100010100011111111101100110000111111001101000010100100111111110001101110000000111001101000100101001000000001101111100111101100010011000010000011000", 
    17 => "000010111101100001000010000011111100100001100111110001101001111100010010011111100010000011111111100010100000011000011101000011011110101000010100100111000000001100001000000111001101000001000110101111111110000010000001001010101111111111100111", 
    18 => "000000011111001000000011110000000001101101110111110001101001001001110000001000010010110001000100010111110000001011000001000000100010000111111001000111111100001111011111111000100100000001000110101111111110000010000001001010101000010000011000", 
    19 => "000111111010001000010000001110111100100001100111110001101001000010000011110111100010000011111101111011011111100010101111000100111101000000100010010111111110001101110000010101110101000001000110101111101110001000000010011000000111111111100111", 
    20 => "111110000000110111101010110110111001111011011111100011111010111110001101100111001001101100111101111011011000100101111000111100000111001111000010000110111110001101110111101001111100111111010101011111111110000010111111111101001111101110110110", 
    21 => "000000011111001001000010000011111111000111101111010110001010111110001101100111111010011010111010101101010000110011010100000010000000011000000110110111000010001010100111111000100100000001000110101111111110000010111100010101000111111111100111", 
    22 => "000101011011110000011100101011111111000111101111110001101001111100010010011111111010011010111101111011011111111101100110000010000000011111111001000111000000001100001000010101110101111101100100010111101110001000111110101111110111101110110110", 
    23 => "000101011011110001000010000011111111000111101111110001101001111110001101100111111010011010111101111011011000011000011101000110011011010111111001000111111110001101110111111000100100000001000110101111101110001000000010011000000111111111100111", 
    24 => "000000011111001111011110011000000110111010000111110001101001000000001000101000110111010100111101111011011000001011000001111101100101011000111101110111000000001100001111101001111100111101100100010111101110001000111011000111100111101110110110", 
    25 => "000000011111001111101010110110000110111010000111100011111010000000001000101000110111010100111101111011011000011000011101111010101000110000100010010111000000001100001111101001111100111101100100010111111110000010111101100010011111101110110110", 
    26 => "111110000000110001000010000011000001101101110111010110001010000010000011110111111010011010111111100010100000011000011101111101100101011111111001000111111110001101110000000111001101000001000110101111101110001000000001001010101111101110110110", 
    27 => "111110000000110111101010110110000001101101110111111111011000000010000011110000101011001000000100010111110000011000011101000000100010000000010100100111111010010001000111101001111100111011110011000111111110000010111100010101000111111111100111", 
    28 => "000000011111001000110101100110111111000111101111010110001010000000001000101111111010011010000001001001101010000011111001111111000011110111111001000111000000001100001111111000100100000100101001000000001101111100111101100010011000010000011000" );

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

entity svm_classifier_SVs_l_V_5 is
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

architecture arch of svm_classifier_SVs_l_V_5 is
    component svm_classifier_SVs_l_V_5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    svm_classifier_SVs_l_V_5_rom_U :  component svm_classifier_SVs_l_V_5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


