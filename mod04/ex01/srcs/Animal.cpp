/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:08:54 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/15 19:22:38 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"

Animal::Animal() : _type("Anonimous Animal") {

  std::cout << "[ Base class Animal ] Default Constructor called !" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {

  std::cout << "[ Base class Animal ] Parametrized Constructor called !" << std::endl;
}

Animal::Animal(const Animal &oldAnimal) {

    std::cout << "[ Base class Animal ] Copy Constructor called !" << std::endl;
    *this = oldAnimal;
}
      
Animal& Animal::operator=(const Animal &oldAnimal) {

    std::cout << "[ Base class Animal ] Copy Assignment operator called !" << std::endl;
    if (this != &oldAnimal)
      _type = oldAnimal.getType();
    return (*this);
}

std::string Animal::getType() const {

  return(_type);
}

void  Animal::makeSound() const {

  std::cout << "[ Animal ] sounds like : " << DefaultSound << std::endl;
}

Animal::~Animal() {

  std::cout << "[ Base class Animal ] Destructor called !" << std::endl;
}

