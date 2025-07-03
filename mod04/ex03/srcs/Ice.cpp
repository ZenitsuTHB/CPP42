/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:23:11 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/30 16:24:13 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &oldIce) {

    *this = oldIce;
}

Ice& Ice::operator=(const Ice &oldIce) {

  if (this != &oldIce) {

    _type = oldIce._type;
  }
  return (*this);
}

Ice * Ice::clone() const {
  return (new Ice(*this));
}

void Ice::use(ICharacter& object) const {

  std::cout << "* shoots an ice bolt at" << object.getName() << "*\n";
}

Ice::~Ice(){}
