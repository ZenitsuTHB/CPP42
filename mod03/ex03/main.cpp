//42 HEADER




#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main () {


  std::cout << std::endl;

  // ClapTrap Player0("Black Panther");
  // Player0.attack("Injustice");
  // ClapTrap Player1 = Player;
  // Player1.attack("TeamEVILS");

   //ScavTrap Player( "DERIVER" );
  // Player.attack( "-REVIRED-" );
   //ScavTrap Player1(Player);
  // Player1.attack("Tomatoes");
  // Player.guardGate();
  //Player1.guardGate();
  
  // FragTrap Player2( "Player 2" );
  // Player2.attack( "Whatever" );
  // FragTrap Player3( "Player 3" );
  //
  // FragTrap Player4;
  //
  // Player4 = Player3;
  //
  // Player4.highFivesGuys();
  //


  DiamondTrap focus( "My Goals" );

  std::cout << std::endl;
  focus.whoAmI();
  focus.attack("Bad Thoughts");
  focus.attack("Bad Habits");
  focus.attack("Bad Lifestyle");

  DiamondTrap success("SUCCESS");
  success.attack("Bad condition");
  success.attack("all type of poverty");
  success.whoAmI();
  std::cout << std::endl;
  return 0;
}
