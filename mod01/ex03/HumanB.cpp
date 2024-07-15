/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:50:27 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:50:30 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name) : _name(name) {

  _weapon = NULL; 
  return ;
}

HumanB::~HumanB () {

  return ;
}

void HumanB::setWeapon(Weapon& bazuka) {

  _weapon = &bazuka;
}

void HumanB::attack() {

 if (!_weapon)
    std::cout << _name << " Is not armed, his Weapon was not set !" << std::endl;
 else
    std::cout << _name << " : attacks with their : " << _weapon->getType() << std::endl;
}
