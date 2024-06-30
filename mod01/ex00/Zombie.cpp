// 42HEADER


# include "Zombie.hpp"

Zombie::Zombie (std::string name) : _name(name) {

  std::cout << std::endl;
  announce();
  return ;
}


Zombie::~Zombie () {

  std::cout << "I, " << _name << " ! will resurrect again";
  std::cout << " and aga.. and a.... haaha !" << std::endl;
  return ;
}



void Zombie::announce( void ) { 

  std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
