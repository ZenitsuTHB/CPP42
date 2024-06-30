//42 HEADER

# include "Zombie.hpp"

Zombie* newZombie(std::string name) {

  Zombie* newObj = new Zombie(name);
  
  return (newObj);
}
