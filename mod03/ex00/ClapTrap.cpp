//42 HEADER




#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) {

  _health = 10;
  _energy = 10;
  _damage = 0;
  std::cout << "Constructor called to create " << name << " Player" << std::endl;
}


void ClapTrap::attack(const std::string& target) {

  if (_health > 0 && _energy > 0)
  {
    std::cout << "ClapTrap " << _name << " attacks " << target;
    std::cout << ", causing " << _damage << " points of damage!" << std::endl;
    takeDamage(1);
  }
}

void ClapTrap::takeDamage(unsigned int amount) {

  _health -= amount;
  std::cout << "Take Damage has been called to analyze and set up";
  std::cout << " the Player's status." << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount) {

  _health += amount;
  std::cout << "Be Repaired has been called to repair some damages" << std::endl;
}

ClapTrap::~ClapTrap() {

  std::cout << "Destructor called to STOP the fight and clean up the Mess !" << std::endl;
}

