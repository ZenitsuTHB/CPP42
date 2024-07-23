//42 HEADER


#include "ScavTrap.hpp"


ScavTrap::ScavTrap():ClapTrap(){

  std::cout << "Default Constructor for derived class called !" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name) {
  
  std::cout << "Parametrize Constructor for the DERIVED class has been called !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &oldObject):ClapTrap(oldObject) {

  std::cout << "Copy Constructor for Derived class called " << std::endl;
  *this = oldObject;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &oldObject) {

  std::cout << "Copy Assignement operator for Derived class called " << std::endl;
  if (this != &oldObject) {

    ClapTrap::operator=(oldObject);
  }
  return (*this);
}

void  ScavTrap::guardGate() {

  std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap() {

  std::cout << "Destructor for the DERIVED class has been called !" << std::endl;
}

