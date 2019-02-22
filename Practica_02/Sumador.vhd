library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity P2_SumRes_Anticipado is
    Port ( a,b : in  STD_LOGIC_VECTOR (3 downto 0);
           cin : in  STD_LOGIC;
           s : out  STD_LOGIC_VECTOR (3 downto 0);
           cout : out  STD_LOGIC);
end P2_SumRes_Anticipado;

architecture Behavioral of P2_SumRes_Anticipado is

begin
	process(a,b,cin)
		variable Eb: std_logic_vector(3 downto 0);
		variable p : std_logic_vector(3 downto 0);
		variable g : std_logic_vector(3 downto 0);
		variable c : std_logic_vector(4 downto 0);
		variable auxP : std_logic_vector(1 downto 0);
		variable sumatoria: std_logic;	
	begin
		c(0) := cin;
		for i in 0 to 3 loop
			Eb(i) := b(i) xor cin;
			p(i) := a(i) xor Eb(i);
			g(i) := a(i) and Eb(i);
			s(i) <= p(i) xor c(i);
			for j in 0 to i loop
				if(j = 0) then
					auxP(0) := p(0);
				else
					auxP(0) := auxP(0) and p(j);
				end if;
			end loop;
			if(i > 0) then
				for k in 0 to (i - 1) loop
					for l in (k + 1) to i loop
						if(l = (k + 1)) then
							auxP(1) := p(l);
						else
							auxP(1) := auxP(1) and p(l);
						end if;
					end loop;
					if(k = 0) then
						sumatoria := g(0) and auxP(1);
					else
						sumatoria := sumatoria or (g(k) and auxP(1));
					end if;
					auxP(1) := '0';
				end loop;
			else
				sumatoria := '0';
			end if;
			c(i + 1) := (c(0) and auxP(0)) or sumatoria or g(i);
			sumatoria := '0';
		end loop;	
		cout <= c(4);
	end process;
end Behavioral;