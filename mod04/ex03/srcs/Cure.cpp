/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:38:24 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/30 16:38:32 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &oldCure) {
    *this = oldCure;
}

Cure& Cure::operator=(const Cure &oldCure) {

  if (this != &oldCure) {

    _type = oldCure._type;
  }
  return (*this);
}

Cure * Cure::clone() const {
  return (new Cure(*this));
}

void Cure::use(ICharacter& object) const {

  std::cout << "* heals " << object.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure(){}
