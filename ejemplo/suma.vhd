library ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY suma IS
END suma;
 
ARCHITECTURE behavior OF suma IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ejemplo
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         cin : IN  std_logic;
         cout : OUT  std_logic;
         s : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal cin : std_logic := '0';

 	--Outputs
   signal cout : std_logic;
   signal s : std_logic_vector(3 downto 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ejemplo PORT MAP (
          a => a,
          b => b,
          cin => cin,
          cout => cout,
          s => s
        );


   -- Stimulus process
   stim_proc: process
   begin		
		a <= "0010";
		b <= "0001";
		cin <= '0';
		wait for 30 ns;
		cin <= '1';
		wait;
   end process;

END;
