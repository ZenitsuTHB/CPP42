/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:48:58 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:49:03 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

  return ;
}

void Zombie::setName(string name) {

  _name = name;
  return ;
}

Zombie::~Zombie() {

  cout << "My name's " << _name << ", OH NOOoooo !";
  cout << "I am dying again ..." << endl; 
  return ;
}

void Zombie::announce ( void ) {

  cout << _name << " : BraiiiiiiinnnzzzZ..." << endl;
}
