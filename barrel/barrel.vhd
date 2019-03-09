
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity barrel is
	generic (
			e : integer := 3;
			n : integer := 8
		);
    Port ( a : in  STD_LOGIC_VECTOR (7 downto 0);
           res : out  STD_LOGIC_VECTOR (7 downto 0);
           s : in  STD_LOGIC_VECTOR (2 downto 0));
end barrel;

architecture Behavioral of barrel is
--signal b : std_logic_vector(7 downto 0);
begin

	process(a,s)
	variable b : std_logic_vector(7 downto 0);
	begin 
		b := a;
		for i in 0 to e-1 loop
			for j in n-1 downto 0 loop
				if (s(i)= '0') then
					b(j) := b(j);
				else
					if (j<(2**i)) then
						b(j) := '0';
					else
						b(j) := b(j-(2**i));
					end if;
				end if;
			end loop;
		end loop;
	res <= b;
	end process;

end Behavioral;

