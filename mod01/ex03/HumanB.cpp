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

HumanA::HumanB (string name) : _name(name) {

  return ;
}

HumanA::~HumanB () {

  return ;
}

void HumanB::setWeapon(Weapon* bazuka) {

  this->_weapon = &bazuka;
}

void HumanB::attack() {

  cout << _name << " : attacks with their : " << _weapon.getType() << endl;
}
