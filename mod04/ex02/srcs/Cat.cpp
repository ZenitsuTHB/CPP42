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

#include "../headers/Cat.hpp"
#include "../headers/Animal.hpp"

// Cat::Cat() : Animal() {
//
//   std::cout << "[ Cat's ] Default Constructor called !" << std::endl;
// }

Cat::Cat() : Animal("Cat") {

	_catBrain = new Brain();
	std::cout << "[ Cat's ] Parameterized Constructor called !" << std::endl;
}

Cat::Cat(const Cat &oldCat) : Animal(oldCat) {

    _catBrain = new Brain();
    *this = oldCat;
}

Cat&  Cat::operator=(const Cat &otherCat) {

    if (this != &otherCat) {

        Animal::operator=(otherCat);
        delete _catBrain;
        _catBrain = new Brain(*otherCat._catBrain);
    }
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
