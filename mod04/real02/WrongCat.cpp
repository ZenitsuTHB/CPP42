/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:11:17 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 13:11:21 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {

    std::cout << "[ Derived Class, WrongCat] Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type){

    std::cout << "[ Derived Class, WrongCat] Parameterized Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &oldWrongCat) : WrongAnimal(oldWrongCat) {

    *this = oldWrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat &oldWrongCat) {

    if (this != &oldWrongCat)
      WrongCat::operator=(oldWrongCat);
    return (*this);
}

std::string WrongCat::getType() const {

  return(_type);
}

void WrongCat::makeSound() const {
    
    std::cout << "[ Derived Class, WrongCat] sounds like : " << WrongCatSound << std::endl;
}

WrongCat::~WrongCat() {

  std::cout << "[ Derived Class, WrongCat] Destructor called" << std::endl;
}
