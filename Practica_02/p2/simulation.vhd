LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
ENTITY simulation IS
END simulation;
 
ARCHITECTURE behavior OF simulation IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sumador
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         s : OUT  std_logic_vector(3 downto 0);
         cin : IN  std_logic;
         cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal cin : std_logic := '0';

 	--Outputs
   signal s : std_logic_vector(3 downto 0);
   signal cout : std_logic;
   
 BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sumador PORT MAP (
          a => a,
          b => b,
          s => s,
          cin => cin,
          cout => cout
        );
   -- Stimulus process
   stim_proc: process
   begin	
	-- 5 + 5 = 10
		a<="0101";
		b<="0101";
		cin<='0';
      wait for 100 ns;
		-- 12 + 7 = 19
		a<="1100";
		b<="0111";
		cin<='0';
      wait for 100 ns;
	-- 9 + 5 = 14		
		a<="1001";
		b<="0101";
		cin<='0';
      wait for 100 ns;
	-- 14 + 9 = 23		
		a<="1110";
		b<="1001";
		cin<='0';
      wait for 100 ns;
	-- 4 + 2 = 6		
		a<="0100";
		b<="0010";
		cin<='0';
      wait for 100 ns;
	-- 7 + 7 = 14
		a<="0111";
		b<="0111";
		cin<='0';
      wait for 100 ns;
	-- 15 + 5 = 20		
		a<="1111";
		b<="0101";
		cin<='0';
      wait for 100 ns;	
		-- 11 + 8 = 19		
		a<="1011";
		b<="1000";
		cin<='0';
      wait for 100 ns;
		-- 1 + 4 = 5		
		a<="0001";
		b<="0100";
		cin<='0';
      wait;	
   end process;
END;
