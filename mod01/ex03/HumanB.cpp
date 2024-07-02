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

HumanB::HumanB (string name) : _name(name) {

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
    cout << _name << " : Is not armed, his Weapon was not set !" << endl;
 else
    cout << _name << " : attacks with their : " << _weapon->getType() << endl;
}
