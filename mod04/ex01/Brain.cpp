/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:43:42 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/07 14:25:57 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	std::cout << "[ Brain ] Default Constructor called !" << std::endl;
	for (int i = 0; i < INDEX; i++) {

		_ideas[i] = IDEAS;
	}
}

Brain::Brain(const Brain &oldBrain) {

  std::cout << "[ Brain ] copy Constructor called !" << std::endl;
  *this = oldBrain;
}

// Copy using the algorithm header 
// std::copy(oldBrain._ideas, oldBrain._ideas + 100, _ideas);
Brain& Brain::operator=(const Brain &oldBrain) {

  std::cout << "[ Brain ] Copy Assignment operator called !" << std::endl;
  if (this != &oldBrain) {

	  for ( int i = 0; i < INDEX; i++) {
		  
		  _ideas[i] = oldBrain._ideas[i];
	  }
  }
  return (*this);
}

bool	goodIndex(int index) {

	return(index >= 0 && index <= INDEX);
}

std::string Brain::getIdeas(int index) const {

  if (!goodIndex(index))
	  return (INVIDX);
  if (index % 2 == 0) {

    std::cout << "this is cat' s ideas" << std::endl;
  }
  else {
    
    std::cout << "this is Dog' s ideas" << std::endl;
  }
  return ("OK");
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
