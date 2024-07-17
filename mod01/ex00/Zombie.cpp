/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:46:31 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/16 16:32:09 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie (std::string name) : _name(name) {

  std::cout << std::endl;
  announce();
  return ;
}


Zombie::~Zombie () {

  std::cout << "I, " << _name << " have been destroyed ! I will ";
  std::cout << "resurrect again and aga.. and a... haaha !" << std::endl;
  return ;
}



void Zombie::announce( void ) { 

  std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
