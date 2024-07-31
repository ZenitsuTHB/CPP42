/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:25:52 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/26 15:35:26 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), ScavTrap(), FragTrap() {
  
    _name = "Undefined";
    this->FragTrap::_health = 100;
    this->ScavTrap::_energy = 50;
    this->FragTrap::_damage = 30;
 
  std::cout << "(DiamondTrap), DERIVED class, Default Constructor called !" << std ::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(), ScavTrap(name), FragTrap(name), _name(name) { 

    ClapTrap::_name = name + "_clap_name";
    this->FragTrap::_health = 100;
    this->ScavTrap::_energy = 50;
    this->FragTrap::_damage = 30;
 
  std::cout << "(DiamondTrap), DERIVED class, Parameterized Constructor called !" << std ::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& oldObj):ClapTrap(oldObj), ScavTrap(oldObj), FragTrap(oldObj) { 

    std::cout << "(DiamondTrap), DERIVED class, Copy Constructor called !" << std::endl;
      *this = oldObj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& oldObj) {

    std::cout << "(DiamondTrap), DERIVED class, Copy Assignment Operator called !" << std ::endl;
    if (this != &oldObj) {

      _name = oldObj._name;
      ClapTrap::operator=(oldObj);
      FragTrap::operator=(oldObj);
      ScavTrap::operator=(oldObj);
    }
    return (*this);
}

void DiamondTrap::attack(const std::string& target) {

  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {

  std::cout << "(DiamondTrap) My name is : " << _name << std::endl;
  std::cout << "And My ClapTrap name is : " << ClapTrap::_name << std::endl;
  std::cout << std::endl;
}

DiamondTrap::~DiamondTrap() {

    std::cout << "(DiamondTrap), DERIVED class, Destructor called !" << std ::endl;
}
