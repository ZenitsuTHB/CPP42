/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:08:54 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 13:08:59 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("Anonimous AAnimal") {

  std::cout << "[ Base class AAnimal ] Default Constructor called !" << std::endl;
}

AAnimal::AAnimal(const std::string &type) : _type(type) {

  std::cout << "[ Base class AAnimal ] Parametrized Constructor called !" << std::endl;
}

AAnimal::AAnimal(const AAnimal &oldAAnimal) {

    std::cout << "[ Base class AAnimal ] Copy Constructor called !" << std::endl;
    *this = oldAAnimal;
}
      
AAnimal& AAnimal::operator=(const AAnimal &oldAAnimal) {

    std::cout << "[ Base class AAnimal ] Copy Assignment operator called !" << std::endl;
    if (this != &oldAAnimal) {

      _type = oldAAnimal._type;
    }
    return (*this);
}

std::string AAnimal::getType() const {

  return(_type);
}

// void  AAnimal::makeSound() const {
//
//   std::cout << "[ AAnimal ] sounds like : " << DefaultSound << std::endl;
// }

AAnimal::~AAnimal() {

  std::cout << "[ Base class AAnimal ] Destructor called !" << std::endl;
}

