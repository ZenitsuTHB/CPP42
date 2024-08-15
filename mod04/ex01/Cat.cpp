/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:09:43 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/15 19:23:57 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

// Cat::Cat() : Animal() {
//
//   std::cout << "[ Cat's ] Default Constructor called !" << std::endl;
// }

Cat::Cat() : Animal("Cat") {

	_catBrain = new Brain();
	std::cout << "[ Cat's ] Parameterized Constructor called !" << std::endl;
}

Cat::Cat(const Cat &oldCat) : Animal(oldCat) {

    *this = oldCat;
}

Cat&  Cat::operator=(const Cat &oldCat) {


    if (this != &oldCat)
        Animal::operator=(oldCat);
    return (*this);
}

void Cat::setIdeasBrain(int index, std::string idea) {

  _catBrain->setIdeas(index, idea);
}

std::string Cat::getIdeasBrain (int index) const {

  return(_catBrain->getIdeas(index));
}

void Cat::makeSound() const {

    std::cout << "[ Cat's ] sounds like : " << CatSound << std::endl;
}

Cat::~Cat() {

	delete _catBrain;
  	std::cout << "[ Cat's ] Destructor called !" << std::endl;
}
