//42 HEADER




#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main () {


  std::cout << std::endl;

  // ClapTrap Player("Black Panther");
  // Player.attack("Injustice");
  // ClapTrap Player1 = Player;
  // Player1.attack("TeamEVILS");

  ScavTrap Player("TEST");
  Player.attack("Launched");
  ScavTrap Player1(Player);
  Player1.attack("Tomatoes");
  std::cout << std::endl;
  return 0;
}
