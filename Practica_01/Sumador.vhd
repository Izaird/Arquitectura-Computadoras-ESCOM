library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity sumador is
PORT(   
  	 A, B:  IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    S:    OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    COUT: OUT STD_LOGIC;
    CIN: IN STD_LOGIC   
  );  
end sumador;

architecture Behavioral of sumador is
SIGNAL EB : STD_LOGIC_VECTOR(3 DOWNTO 0);
SIGNAL  C : STD_LOGIC_VECTOR(4 DOWNTO 0);
begin
 C(0) <= CIN;
	ciclo: FOR i IN 0 TO 3 GENERATE  
		S(i)   <= A(i) XOR EB(i) XOR C(i);
		EB(i)  <= B(i) XOR C(0);
		C(i+1) <= (EB(i) AND C(i)) OR (A(i) AND C(i)) OR (A(i) AND EB(i));
		COUT<= C(4);
		END GENERATE ciclo;
end Behavioral;
