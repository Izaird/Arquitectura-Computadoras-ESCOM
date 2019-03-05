----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:22:42 02/25/2019 
-- Design Name: 
-- Module Name:    ALU1 - Behavioral 
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

entity ALU1 is
    Port ( a,b,cin,sel_a,sel_b : in  STD_LOGIC;
				op : in STD_LOGIC_VECTOR (1 downto 0);
           res,cout : out  STD_LOGIC);
end ALU1;

architecture Behavioral of ALU1 is
component sumador1 is
	Port(
		a,b, cin : in std_logic;
		cout,suma: out std_logic
	);
end component;
signal aux_a, aux_b, res_and,res_or, res_xor,res_suma: std_logic;
signal res_a, res_b : std_logic;
begin

	res_a <= a xor sel_a;
	res_b <= b xor sel_b;
	res_and <= res_a and res_b;
	res_or <= res_a or res_b;
	res_xor <= res_a xor res_b;
	
	s0 : sumador1
	port map(
		a => res_a,
		b => res_b,
		cin => cin,
		cout =>cout,
		suma => res_suma	
	);
	process(op, res_and, res_or, res_or, res_xor, res_suma)
	begin
		case op is
		--AND
			when "00" => res <= res_and;
		--OR
			when "10" => res <= res_or;
		--XOR
			when "01" => res <= res_xor;
		--SUMA
			when others => res <= res_suma;
		end case;
	end process;
end Behavioral;

