/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:15:38 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 10:15:57 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) {

  _health = 10;
  _energy = 10;
  _damage = 0;
  std::cout << "Constructor called to create [ " << name << " ] Player" << std::endl;
}

// CAN BE DONE USING GETTERS
//  _name = getName();
//  _health = getHealth();
//  _energy = getEnergy();
//  _damage = getDamage();

ClapTrap::ClapTrap(const ClapTrap &oldObject) {

  std::cout << "Copy Constructor called, Copies datas from oldObject to the current." << std::endl;
  *this = oldObject;//Copy Assignment will be called
}

ClapTrap& ClapTrap::operator=(const ClapTrap &oldObject) {

  _name = oldObject._name;
  _health = oldObject._health;
  _energy = oldObject._energy;
  _damage = 0;
  std::cout << "Copy Assignment operator called, Assigning datas to new object ..." << std::endl;
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

  if (_health > 0 && _energy > 0) {
    
      _health -= amount;
      std::cout << "Take Damage has been called to analyze and set up";
      std::cout << " the Player's status." << std::endl;
  }
  else {

      std::cout << "[ " << _name << " ] is DEAD, It Can't take any other Damage !";
  std::cout << std::endl;
  }
  std::cout << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount) {

  if (_health > 0 && _energy > 0) {
    _energy -= 1;
    _health += amount;
    std::cout << "Be Repaired has been called to repair some damage, Energy is : " << _energy << std::endl;
  }
  else {
    
    std::cout << "[ " << _name << " ] Can't be Repaired, no Energy points or he's dead !";
    std::cout << std::endl;
  }
}

ClapTrap::~ClapTrap() {

  std::cout << "Destructor called to STOP the fight and clean up the Mess !" << std::endl;
}

