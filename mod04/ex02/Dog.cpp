/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:10:12 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 13:10:17 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : AAnimal("Dog") {

  _dogBrain = new Brain();
  std::cout << "[ Dog's ] Constructor has been called !" << std::endl;
}

Dog::Dog(const Dog &oldDog) : AAnimal(oldDog) {

    *this = oldDog;
}

Dog&  Dog::operator=(const Dog &oldDog) {

    if (this != &oldDog)
        Dog::operator=(oldDog);
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
