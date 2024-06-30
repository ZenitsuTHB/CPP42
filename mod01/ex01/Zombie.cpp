//$"42 HEADER"



#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {

  std::cout << std::endl;
  announce();
  return ;
}

Zombie::~Zombie() {

  std::cout << "My name's " << _name << ", OH NOOoooo !";
  std::cout << "I am dying again ..." << std::endl; 
  return ;
}

void Zombie::announce ( void ) {

  std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
