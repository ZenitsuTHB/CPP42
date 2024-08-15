/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:09:43 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/15 19:15:44 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

// Cat::Cat() : Animal() {
//
//   std::cout << "[ Cat's ] Default Constructor called !" << std::endl;
// }

Cat::Cat() : Animal("Cat") {

  std::cout << "[ Cat's ] Parameterized Constructor called !" << std::endl;
}

Cat::Cat(const Cat &oldCat) : Animal(oldCat) {

    *this = oldCat;
}

//Animal::operator=(oldDog); correctly invokes the base class's assignment 
//operator, ensuring that the base part of the Dog object is copied
Cat&  Cat::operator=(const Cat &oldCat) {


    if (this != &oldCat)
        Animal::operator=(oldCat);
    return (*this);
}

void Cat::makeSound() const {

    std::cout << "[ Cat's ] sounds like : " << CatSound << std::endl;
}

Cat::~Cat() {

  std::cout << "[ Cat's ] Destructor called !" << std::endl;
}
