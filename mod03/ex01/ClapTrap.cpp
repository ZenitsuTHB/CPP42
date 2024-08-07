/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:39:57 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/07 13:34:34 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
  
	_health = 10;
	_energy = 10;
	_damage = 0;
	std::cout << "BASE class, Default Constructor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {

	_health = 10;
  	_energy = 10;
  	_damage = 0;
  	std::cout << "BASE class, Parameterized Constructor called to create [ " << name << " ] Player" << std::endl;
}

// CAN BE DONE USING GETTERS
// _name = oldObject.getName();
// _health = oldObject.getHealth();
// _energy = oldObject.getEnergy();
// _damage = oldObject.getDamage();

ClapTrap::ClapTrap(const ClapTrap &oldObject) {

  std::cout << "BASE class, Copy Constructor called, Copies datas from oldObject to the current." << std::endl;
  *this = oldObject;//Copy Assignment will be called
}

ClapTrap& ClapTrap::operator=(const ClapTrap &oldObject) {

  if (this != &oldObject) {
    _name = oldObject._name;
    _health = oldObject._health;
    _energy = oldObject._energy;
    _damage = 20;
  }
  std::cout << "BASE class, Copy Assignment operator called, Assigning datas to new object (current)." << std::endl;
  std::cout << std::endl;
  return (*this);
}

void ClapTrap::attack(const std::string& target) {

  if (_health > 0 && _energy > 0)
  {
    _energy -= 1;
    _damage += 1;
    std::cout << "ClapTrap [ " << _name << " ] attacks -> ( " << target;
    std::cout << " ), causing " << _damage << " points of damage!" << std::endl;
    std::cout << std::endl;
  }
  else {

    std::cout << "[ " << _name << " ] Can't attack -> ( " << target;
    std::cout << " ), no Energy points or he's dead !";
    std::cout << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {

  _health -= amount;
  std::cout << "Take Damage has been called to analyze and set up";
  std::cout << " the Player's status." << std::endl;
  std::cout << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount) {

  if (_health > 0 && _energy > 0) {
    _energy -= 1;
    _health += amount;
    std::cout << "Be Repaired has been called to repair some damage" << std::endl;
  }
  else {
    
    std::cout << "[ " << _name << " ] Can't be Repaired, no Energy points or he's dead !";
    std::cout << std::endl;
  }
}

ClapTrap::~ClapTrap() {

  std::cout << "BASE class, Destructor called to STOP the fight and clean up the Mess !" << std::endl;
}

