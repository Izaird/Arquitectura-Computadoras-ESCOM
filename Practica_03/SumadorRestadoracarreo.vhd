----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:33:00 02/20/2019 
-- Design Name: 
-- Module Name:    SumadorRestadoracarreo - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SumadorRestadoracarreo is
    Port ( a : in  STD_LOGIC_VECTOR (3 downto 0);
           b : in  STD_LOGIC_VECTOR (3 downto 0);
           cin : in  STD_LOGIC;
           cout : out  STD_LOGIC;
           s : out  STD_LOGIC_VECTOR (3 downto 0));
end SumadorRestadoracarreo;

architecture Behavioral of SumadorRestadoracarreo is

signal c : std_logic_vector (4 downto 0);
signal eb : std_logic_vector (3 downto 0);
	begin
	
		c(0) <= cin;
		ciclo : for i in 0 to 3 generate
			eb(i) <= b(i) xor cin;
			s(i) <= a(i) xor eb(i) xor c(i);
			c(i+1) <= (a(i) and eb(i)) or (a(i) and c(i)) or (eb(i) and c(i));
	
		end generate;
	cout <= c(4);


end Behavioral;

