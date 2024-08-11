/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:11:05 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 13:11:08 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

    std::cout << "[ Base Class, WrongAnimal] Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {

    std::cout << "[ Base Class, WrongAnimal] Parameterized Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &oldWrongAnimal) {

    *this = oldWrongAnimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &oldWrongAnimal) {

    if (this != &oldWrongAnimal)
      _type = oldWrongAnimal.getType();
    return (*this);
}

std::string WrongAnimal::getType() const {

    return(_type);
}

void WrongAnimal::makeSound() const {
    
    std::cout << "[ Base Class, WrongAnimal] sounds like : " << WrongAnimalSound << std::endl;
}

WrongAnimal::~WrongAnimal() {

    std::cout << "[ Base Class, WrongAnimal] Destructor called" << std::endl;
}
