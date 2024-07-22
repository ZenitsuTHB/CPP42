//42 HEADER




#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) {

  _health = 10;
  _energy = 10;
  _damage = 0;
  std::cout << "Constructor called to create " << name << " Player" << std::endl;
}
// _name = getName();
//   _health = getHealth();
//   _energy = getEnergy();
//   _damage = getDamage();
//
ClapTrap::ClapTrap(const ClapTrap &object) {

  _name = object._name;
  _health = object._health;
  _energy = object._energy;
  _damage = object._damage;
  std::cout << "Copy Constructor called, Copying datas from ..." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &object) {

  _name = object._name;
  _health = object._health;
  _energy = object._energy;
  _damage = object._damage;
  
  std::cout << "Copy Assignment operator called, Assigning datas to new object ..." << std::endl;
  return (*this);
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

