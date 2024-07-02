/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:50:16 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:50:22 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (string name, Weapon& weapon) : _name(name), _bazuka(weapon) {

  return ;
}

HumanA::~HumanA () {

  return ;
}

void HumanA::attack() {

  cout << _name << " : attacks with their : " << _bazuka.getType() << endl;
}
