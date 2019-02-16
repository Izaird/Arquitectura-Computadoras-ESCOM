library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ejemplo is
    Port ( a,b : in  STD_LOGIC_VECTOR (3 downto 0);
           cin : in  STD_LOGIC;
           cout : out  STD_LOGIC;
           s : out  STD_LOGIC_VECTOR (3 downto 0));
end ejemplo;

architecture Behavioral of ejemplo is
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

