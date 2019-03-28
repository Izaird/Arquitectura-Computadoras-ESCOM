
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity memDatos is
	generic (
		d : integer := 25;
		a : integer := 8
		);
    Port ( --datosIn: in  STD_LOGIC_VECTOR (d-1 downto 0);
		 dir : in  STD_LOGIC_VECTOR (a-1 downto 0);
           --clk, wd : in  STD_LOGIC;
           datosOut : out  STD_LOGIC_VECTOR (d-1 downto 0));
end memDatos;

architecture Behavioral of memDatos is
constant op_li : std_logic_vector(4 downto 0) := "00001";
constant op_tipor  : std_logic_vector(4 downto 0) := "00000";

constant r0 : std_logic_vector(3 downto 0) := "0000";
constant r1 : std_logic_vector(3 downto 0) := "0001";


constant add : std_logic_vector(3 downto 0) := "0000";
constant su : std_logic_vector(3 downto 0) := "0000";




type banco is array (0 to (2**a)-1) of std_logic_vector(d-1 downto 0);
--signal memoria : banco;
constant memoria : banco := (
op_li&r0&x"0007", 				--li r0 #7
op_li&r1&x"0001",					--li r1 #1
op_tipor&r0&r0&r1&su&add,		-- aqui: add r0 r0 r1
others => (others => '0')
);
begin

--	--escritura
--	process(clk)
--	begin 
--		if (clk'event and clk = '1') then
--			if (wd = '1') then
--				memoria(conv_integer(dir)) <= datosIn;
--			end if;
--		end if;
--	end process;
--	
	datosOut <= memoria(conv_integer(dir));


end Behavioral;

