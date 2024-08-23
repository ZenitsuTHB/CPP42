/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:10:12 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/18 13:57:23 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"
#include "../headers/Animal.hpp"

Dog::Dog() : Animal("Dog") {

  _dogBrain = new Brain();
  std::cout << "[ Dog's ] Constructor has been called !" << std::endl;
}

Dog::Dog(const Dog &otherDog) : Animal(otherDog) {

    _dogBrain = new Brain();
    *this = otherDog;
}

//easyway dereferencing both pointers
//_dogBrain = otherDog._dogBrain->clone();
//memoryleak to solve, double free cause of Brain destructor
Dog&  Dog::operator=(const Dog &otherDog) {

	if (this != &otherDog) {

		Animal::operator=(otherDog);
		delete _dogBrain;
		_dogBrain = new Brain(*otherDog._dogBrain);
	}
  return (*this);
}

void Dog::setIdeasBrain(int index, std::string idea) {

  _dogBrain->setIdeas(index, idea);
}

std::string Dog::getIdeasBrain (int index) const {

  return(_dogBrain->getIdeas(index));
}

void Dog::makeSound() const {

    std::cout << "[ Dog's ] sounds like : " << DogSound << std::endl;
}

Dog::~Dog() {
  
  delete (_dogBrain);
  std::cout << "[ Dog's ] Destructor has been called !" << std::endl;
}
