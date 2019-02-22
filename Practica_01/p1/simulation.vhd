LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY simulation IS
END simulation;
 
ARCHITECTURE behavior OF simulation IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sumador
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         S : OUT  std_logic_vector(3 downto 0);
         COUT : OUT  std_logic;
         CIN : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
   signal CIN : std_logic := '0';

 	--Outputs
   signal S : std_logic_vector(3 downto 0);
   signal COUT : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sumador PORT MAP (
          A => A,
          B => B,
          S => S,
          COUT => COUT,
          CIN => CIN
        );
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- 5 + 5 = 10
      wait for 90 ns;
			a <= "0101";
			b <= "0101";
			cin <= '0';
		-- 12 + 8 = 20
		wait for 90 ns;
			a <= "1100";
			b <= "1000";
			cin <= '0';
		-- 9 + 5 = 14
		wait for 90 ns;
			a <= "1001";
			b <= "0101";
			cin <= '0';
		-- 10 - 9 = 1
		wait for 90 ns;
			a <= "1010";
			b <= "1001";
			cin <= '1';
		-- 4 + 2 = 6
		wait for 90 ns;
			a <= "0100";
			b <= "0010";
			cin <= '0';
		-- 7 - 9 = -2 (Debe de aparecer el complemento a 2)
		wait for 90 ns;
			a <= "0111";
			b <= "1001";
			cin <= '1';
		-- 15 - 15 = 0
		wait for 90 ns;
			a <= "1111";
			b <= "1111";
			cin <= '1';
		-- 11 - 8 = 3
		wait for 90 ns;
			a <= "1011";
			b <= "1000";
			cin <= '1';
		-- 1 - 4 = -3 (Debe de aparecer el complemento a 2)
		wait for 90 ns;
			a <= "0001";
			b <= "0100";
			cin <= '1';
      wait;
   end process;
END;