--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:06:49 03/28/2019
-- Design Name:   
-- Module Name:   B:/Arquitectura-Computadoras-ESCOM/memoriaDatos/memTb.vhd
-- Project Name:  memoriaDatos
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: memDatos
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
USE ieee.std_logic_unsigned.ALL;

USE ieee.std_logic_arith.ALL; 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY memTb IS
END memTb;
 
ARCHITECTURE behavior OF memTb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT memDatos
    PORT(
         datosIn : IN  std_logic_vector(7 downto 0);
         dir : IN  std_logic_vector(7 downto 0);
         clk : IN  std_logic;
         wd : IN  std_logic;
         datosOut : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal datosIn : std_logic_vector(7 downto 0) := "00011101";
   signal dir : std_logic_vector(7 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal wd : std_logic := '0';

 	--Outputs
   signal datosOut : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: memDatos PORT MAP (
          datosIn => datosIn,
          dir => dir,
          clk => clk,
          wd => wd,
          datosOut => datosOut
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		wd <= '1';
		dir <= dir + 1;
		datosIn <= datosIn + "00000111";
		wait for 20 ns;
   end process;

END;
