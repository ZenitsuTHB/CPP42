//42 HEADER




#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main () {


  std::cout << std::endl;

  // ClapTrap Player0("Black Panther");
  // Player0.attack("Injustice");
  // ClapTrap Player1 = Player;
  // Player1.attack("TeamEVILS");

  ScavTrap Player( "DERIVER" );
  Player.attack( "-REVIRED-" );
  ScavTrap Player1(Player);
  Player1.attack("Tomatoes");
  Player.guardGate();
  Player1.guardGate();

  std::cout << std::endl;
  return 0;
}
