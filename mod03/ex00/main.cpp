//42 HEADER




#include "ClapTrap.hpp"

int main () {


  std::cout << std::endl;

  ClapTrap Player("Black Panther");
  Player.attack("Injustice");
  ClapTrap Player1 = Player;
  Player1.attack("TeamEVILS");
  Player.attack("Injustice");
  Player.beRepaired(8);
  Player.attack("Injustice");
  Player.beRepaired(2);
  
  Player.attack("Injustice");
  Player.attack("Injustice");
  Player.attack("Injustice");
  Player.attack("Injustice");
  Player.attack("Injustice");
  Player.beRepaired(2);
  std::cout << std::endl;
  return 0;
}
