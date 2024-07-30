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

DiamondTrap::DiamondTrap():ScavTrap(), FragTrap() {
  
  std::cout << "(DiamondTrap), DERIVED class, Default Constructor called !" << std ::endl;
}

DiamondTrap::DiamondTrap(std::string name):ScavTrap(name), FragTrap(name), _name(name) { 

    ClapTrap::_name = name + "_clap_name";
    _health = FragTrap::_health;
    _energy = ScavTrap::_energy;
    _damage = FragTrap::_damage;
 
  std::cout << "(DiamondTrap), DERIVED class, Parameterized Constructor called !" << std ::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& oldObj):ClapTrap(oldObj), ScavTrap(oldObj), FragTrap(oldObj) {

    std::cout << "(DiamondTrap), DERIVED class, Copy Constructor called !" << std ::endl;
      *this = oldObj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& oldObj) {

    std::cout << "(DiamondTrap), DERIVED class, Copy Assignment Operator called !" << std ::endl;
    if (this != &oldObj) {

      _name = oldObj._name;
      ClapTrap::_name = oldObj.ClapTrap::_name;
      _health = FragTrap::_health;
      _energy = ScavTrap::_energy;
      _damage = FragTrap::_damage;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string& target) {

  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {

  std::cout << "(DiamondTrap) My name is : " << _name << std::endl;
  std::cout << "And My ClapTrap name is : " << ClapTrap::_name << std::endl;

}

DiamondTrap::~DiamondTrap() {

    std::cout << "(DiamondTrap), DERIVED class, Destructor called !" << std ::endl;
}
