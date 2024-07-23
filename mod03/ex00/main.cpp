//42 HEADER




#include "ClapTrap.hpp"

int main () {


  std::cout << std::endl;

  ClapTrap Player("Black Panther");
  Player.attack("Injustice");
  ClapTrap Player1 = Player;
  Player1.attack("TeamEVILS");
  
  std::cout << std::endl;
  return 0;
}
