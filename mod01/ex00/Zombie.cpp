/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:46:31 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:46:35 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie (std::string name) : _name(name) {

  std::cout << std::endl;
  announce();
  return ;
}


Zombie::~Zombie () {

  std::cout << "I, " << _name << " ! will resurrect again";
  std::cout << " and aga.. and a.... haaha !" << std::endl;
  return ;
}



void Zombie::announce( void ) { 

  std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
