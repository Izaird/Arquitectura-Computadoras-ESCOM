--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:53:27 02/27/2019
-- Design Name:   
-- Module Name:   C:/Users/Usuario/Desktop/Arqui/Practica3/ALUNB_TB.vhd
-- Project Name:  Practica3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ALUNB
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ALUNB_TB IS
END ALUNB_TB;
 
ARCHITECTURE behavior OF ALUNB_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALUNB
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         op : IN  std_logic_vector(1 downto 0);
         sel_a : IN  std_logic;
         sel_b : IN  std_logic;
         cin : IN  std_logic;
         res : INOUT  std_logic_vector(3 downto 0);
         cout : INOUT  std_logic;
         flag_ov : OUT  std_logic;
         flag_n : OUT  std_logic;
         flag_z : OUT  std_logic;
         flag_c : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal op : std_logic_vector(1 downto 0) := (others => '0');
   signal sel_a : std_logic := '0';
   signal sel_b : std_logic := '0';
   signal cin : std_logic := '0';

	--BiDirs
   signal res : std_logic_vector(3 downto 0);
   signal cout : std_logic;

 	--Outputs
   signal flag_ov : std_logic;
   signal flag_n : std_logic;
   signal flag_z : std_logic;
   signal flag_c : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
BEGIN
	-- Instantiate the Unit Under Test (UUT)
   uut: ALUNB PORT MAP (
          a => a,
          b => b,
          op => op,
          sel_a => sel_a,
          sel_b => sel_b,
          cin => cin,
          res => res,
          cout => cout,
          flag_ov => flag_ov,
          flag_n => flag_n,
          flag_z => flag_z,
          flag_c => flag_c
        );
   -- Stimulus process
   stim_proc: process
   begin		
      --SUMA
		a<="0101"; --  5
		b<="1110"; -- -2
		op<="11";
		sel_a<='0';
		sel_b<='0';
		cin<='0';
		wait for 50 ns;	
		--RESTA
		a<="0101"; --  5
		b<="1110"; -- -2		
		op<="11";
		sel_a<='0';
		sel_b<='1';
		cin<='1';
		wait for 50 ns;	
		-- AND
		a<="0101"; --  5
		b<="1110"; -- -2	
		op<="00";
		sel_a<='0';
		sel_b<='0';
		cin<='0';
		wait for 50 ns;	
		-- NAND
		a<="0101"; --  5
		b<="1110"; -- -2	
		op<="10";
		sel_a<='1';
		sel_b<='1';
		cin<='0';
		wait for 50 ns;	
		-- OR
		a<="0101"; --  5
		b<="1110"; -- -2	
		op<="10";
		sel_a<='0';
		sel_b<='0';
		cin<='0';
		wait for 50 ns;			
		-- NOR
		a<="0101"; --  5
		b<="1110"; -- -2	
		op<="00";
		sel_a<='1';
		sel_b<='1';
		cin<='0';
		wait for 50 ns;		
		-- XOR
		a<="0101"; --  5
		b<="1110"; -- -2	
		op<="01";
		sel_a<='0';
		sel_b<='0';
		cin<='0';
		wait for 50 ns;	
		-- XNOR
		a<="0101"; --  5
		b<="1110"; -- -2	
		op<="01";
		sel_a<='1';
		sel_b<='0';
		cin<='0';
		wait for 50 ns;	
		--SUMA
		a<="0101"; --  5
		b<="0111"; --  7
		op<="11";
		sel_a<='0';
		sel_b<='0';
		cin<='0';
		wait for 50 ns;	
		--RESTA
		a<="0101"; --  5
		b<="0101"; --  5
		op<="11";
		sel_a<='0';
		sel_b<='1';
		cin<='1';
		wait for 50 ns;	
		--NOT
		a<="0101"; --  5
		b<="0101"; --  5
		op<="10";
		sel_a<='1';
		sel_b<='1';
		cin<='0';
		wait;	
   end process;
END;
