/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:43:42 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 18:44:28 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

  std::cout << "Default brain Constructor called !" std::endl;
}

Brain::Brain(const Brain &oldBrain) {

  std::cout << "[ Brain ] copy Constructor called !" std::endl;
  *this = olBrain;
}

Brain& Brain::operator(const Brain &oldBrain) {

  std::cout << "[ Brain ] Copy Assignment operator called !" std::endl;
  if (this != oldBrain) {

  }
  return (*this);
}

std::string getIdeas(int index, int owner) const {

  if (index < 0 || index > INDEX)
    return (std::cout << "Invalid index Detected !", 1);
  if (index % 2 == 0 && owner == 2) {

    std::cout << "this is cat' s ideas" << std::endl;
    return ("OK");
  }
  else if (index % 2 != 0 && owner == 1) {
    
    std::cout << "this is Dog' s ideas" << std::endl;
    return ("OK");
  }
  else {
    
    std::cout << "There 's no match index for this owner " << std::endl;
    return ("KO");
    
  }
  return ("KO");
}

void Brain::setIdeas(int index, std::string ideas) {

}

Brain::~Brain() {

}
