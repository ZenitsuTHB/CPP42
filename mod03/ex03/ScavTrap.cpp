/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:55:25 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/25 13:02:11 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap(){

  std::cout << "Default Constructor for (ScavTrap) derived class called !" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name) {
  
  std::cout << "(ScavTrap), DERIVED class, Parametrized Constructor called !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &oldObject):ClapTrap(oldObject) {

  std::cout << "(ScavTrap), DERIVED class, Copy Constructor called " << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &oldObject) {

  std::cout << "(ScavTrap), DERIVED class, Copy Assignement operator called " << std::endl;
  if (this != &oldObject) {

    ClapTrap::operator=(oldObject);
  }
  return (*this);
}

//METHODS
void ScavTrap::attack(const std::string& target) {

	if (_health > 0 && _energy > 0)
	{
		_energy -= 1;
	  	_damage += 1;
	  	std::cout << "ScavTrap [ " << _name << " ] attacks -> ( " << target;
	  	std::cout << " ), causing " << _damage << " points of damage!" << std::endl;
	  	std::cout << std::endl;
	}
	else {
		
		std::cout << "ScavTrap [ " << _name << " ] Can't attack -> ( " << target;
		std::cout << " ), no Energy points or he's dead !";
		std::cout << std::endl;
	}
}

void  ScavTrap::guardGate() {

	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << "(ScavTrap), DERIVED class, Destructor called !" << std::endl;
}

