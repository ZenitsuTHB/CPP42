//$"42 HEADER"



#include "Zombie.hpp"

Zombie::Zombie() {

  return ;
}

void Zombie::setName(string name) {

  _name = name;
  return ;
}

Zombie::~Zombie() {

  cout << "My name's " << _name << ", OH NOOoooo !";
  cout << "I am dying again ..." << endl; 
  return ;
}

void Zombie::announce ( void ) {

  cout << _name << " : BraiiiiiiinnnzzzZ..." << endl;
}
