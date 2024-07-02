/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:51:08 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:51:14 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (string type) : _type(type) {

  return ;
}

Weapon::~Weapon () {

  return ;
}

const string& Weapon::getType() {
  //()const vs const string;

  const string& aliasType = _type; 

  return (aliasType);
}


void Weapon::setType(string type) {
 
  _type = type;
}
