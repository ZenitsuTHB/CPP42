//42 HEADER


#include "FragTrap.hpp"


// FragTrap::FragTrap():Claptrap(){
//
//
//   std::cout << "(FragTrap), DERIVED class, Default Constructor called !" << std ::endl;
// }

FragTrap::FragTrap(std::string name):Claptrap(name){

  std::cout << "(FragTrap), DERIVED class, Parameterized Constructor called !" << std ::endl;
}

FragTrap::FragTrap(const FragTrap &oldObject):Claptrap(oldObject) {

  std::cout << "(FragTrap), DERIVED class, Copy Constructor called !" << std::endl;
}

FragTrap& FragTrap(const FragTrap &oldObject) {

  std::cout << "(FragTrap), DERIVED class, Copy Assignement operator called " << std::endl;
  if (this != &oldObject) {

    Claptrap::operator=(oldObject);
  }
  return (*this);
}

void FragTrap::attack(const std::string& target) {

  if (_health > 0 && _energy > 0) {

    _energy -= 1;
    _damage += 1;
    std::cout << "FragTrap [ " << _name << " ] attacks -> ( " << target;
    std::cout << " ), causing " << _damage << " points of damage!" << std::endl;
    std::cout << std::endl;
  }
  else {
    
    std::cout << "FragTrap [ " << _name << " ] Can't attack -> ( " << target;
    std::cout << " ), no Energy points or he's dead !";
    std::cout << std::endl;
  }
}

void FragTrap::highFivesGuys(void) {

  std::cout << "Hey Guys ! Let's give a High Five and end this Fight !" << std::endl;
}

FragTrap::~FragTrap() {

  std::cout << "(FragTrap), DERIVED class, Destructor called !" << std ::endl;
}
