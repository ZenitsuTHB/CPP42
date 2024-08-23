/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:43:42 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/18 14:00:16 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Brain.hpp"

Brain::Brain() {

	std::cout << "[ Brain ] Default Constructor called !" << std::endl;
	for (int i = 0; i < INDEX; i++) {

		_ideas[i] = IDEAS;
	}
}

Brain::Brain(const Brain &otherBrain) {

    std::cout << "[ Brain ] copy Constructor called !" << std::endl;
    *this = otherBrain;
}

// Copy using the algorithm header 
// std::copy(otherBrain._ideas, otherBrain._ideas + 100, _ideas);
Brain& Brain::operator=(const Brain &otherBrain) {

    std::cout << "[ Brain ] Copy Assignment operator called !" << std::endl;
    if (this != &otherBrain) {

        for (int i = 0; i < INDEX; i++)
          _ideas[i] = otherBrain._ideas[i];
    }
    return (*this);
}

// Brain* Brain::clone() const {
//
// 	std::cout << "Brain clonage . .. ..." << std::endl;
// 	return (new Brain(*this));
// }

bool	goodIndex(int index) {

	return(index >= 0 && index <= INDEX);
}

std::string Brain::getIdeas(int index) const {

  if (!goodIndex(index))
	  return (INVIDX);
  if (index % 2 == 0) {
	
	std::cout << "Idea index is : [" << index << "] : ";
	return (_ideas[index]);
  }
  else {
	
	std::cout << "Idea index is : [" << index << "] : ";
	return (_ideas[index]);
  }
}

void Brain::setIdeas(int index, std::string ideas) {

	if (!goodIndex(index)) {	
		
		std::cerr << INVIDX << std::endl;
		return ;
	}
	if (ideas.empty())
		ideas = BOSS;
	_ideas[index] = ideas;
}

Brain::~Brain() {

	std::cout << "[ Brain ] Destructor called !" << std::endl;
}
