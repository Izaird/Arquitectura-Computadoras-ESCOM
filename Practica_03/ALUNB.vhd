----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:29:28 02/27/2019 
-- Design Name: 
-- Module Name:    ALUNB - Behavioral 
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

entity ALUNB is
generic(
      N : integer :=4
   );
	port(
		a,b      : in  std_logic_vector(N-1 downto 0);
		op     : in  std_logic_vector(1 downto 0);
		sel_a, sel_b, cin  : in  std_logic;
		res    : inout std_logic_vector(N-1 downto 0);
		cout   : inout std_logic;
		flag_ov, flag_n, flag_z, flag_c : out std_logic
	);
end ALUNB;

architecture Behavioral of ALUNB is
component ALU1 is
	port(
	a,b,sel_a,sel_b, cin : in std_logic;
	op : in std_logic_vector(1 downto 0);
	cout, res: out std_logic
	);
end component;

signal c: std_logic_vector(N downto 0);
signal zvector : std_logic_vector(N-1 downto 0);


begin

zvector <= (OTHERS=>'0') ;
c(0)<= cin;

ciclo: for i in 0 to N-1 generate

ALU_1 : ALU1
	port map(
		a => a(i),
		b => b(i),
		sel_a => sel_a,
		sel_b => sel_b,
		cin => c(i),
		op => op,
		cout => c(i+1),
		res => res(i)
);

end generate ciclo;

process(op,sel_a,sel_b,c,cout,cin)
begin
	if(op="11" and sel_a='0' and sel_b='0' and cin='0') or (op="11" and sel_a='0' and sel_b='1' and cin='1') then
		cout<=c(N);
		flag_c<=cout;		
	else
		cout<='0';
		flag_c<=cout;
	end if;
end process;

process(res,zvector)
begin
		if(res=zvector) then
			flag_z<='1';
		else
			flag_z<='0';
		end if;
end process;

process(op,res,c)
begin
	if(op="11") then
		flag_ov<= c(N) xor c(N-1);
	else
		flag_ov<='0';
	end if;
end process;

process(res)
begin
	flag_n<= res(N-1);
end process;
end Behavioral;

