/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:47:00 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/30 16:47:02 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AMateria.hpp"
        
AMateria::AMateria() : _type("Undefined type") {

  std::cout << "Materia Constructor called [ Default mode ] !" std::endl;

}

AMateria::AMateria(std::string const  &type) : _type(type) {

  std::cout << "Materia Constructor called !" << std::endl;
}

AMateria::AMateria(const AMateria &oldMateria) {

    *this = oldMateria;
}

AMateria& AMateria::operator=(const AMateria& oldMateria) {

    if (this != &oldMateria) {

      std::cout << "Vamos a copiar !" << std::endl;
      _type = oldMateria.getType();
      
    }
    return (*this);
}

const std::string & AMateria::getType() const {

    return ( _type );
}

void AMateria::use(ICharacter& target) {

    std::cout << "We are inside of the use method" << std::endl;

}

AMateria::~AMateria() {
      
  std::cout << "Materia Destructor called !" << std::endl;

}
