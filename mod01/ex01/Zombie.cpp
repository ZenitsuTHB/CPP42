/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:48:58 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/17 19:05:07 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

	return ;
}

void Zombie::setName(std::string name) {

	_name = name;
	return ;
}

Zombie::~Zombie() {

	std::cout << "My name's " << _name << ", OH NOOoooo ! ";
	std::cout << "I am getting destroyed again ...!" << std::endl;
	return ;
}

void Zombie::announce ( void ) {

  std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
