
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY barreltb IS
END barreltb;
 
ARCHITECTURE behavior OF barreltb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT barrel
    PORT(
         a : IN  std_logic_vector(7 downto 0);
         res : OUT  std_logic_vector(7 downto 0);
         s : IN  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a, res : std_logic_vector(7 downto 0) := (others => '0');
   signal s : std_logic_vector(2 downto 0) := (others => '0');

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: barrel PORT MAP (
          a => a,
          res => res,
          s => s
        );


 

   -- Stimulus process
   stim_proc: process
   begin		
		a <= "00011101";
		s <= "000";
		wait for 30 ns;
		s <= "010";
		wait for 30 ns;
		s <= "111";
		wait;
   end process;

END;
