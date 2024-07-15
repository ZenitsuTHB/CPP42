/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:06:24 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/15 13:06:31 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNum(0) {

  std::cout << "Default constructor called" << std::endl;
  return ;
}

//copy constructor
Fixed::Fixed(const Fixed &copyConstructor) {

  std::cout << "Copy constructor is called" << std::endl;
  _fixedPointNum = copyConstructor.getRawBits();

}

//copy assignment operator 
Fixed& Fixed::operator=(const Fixed &copyAssignOperat) {

  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &copyAssignOperat) {

    _fixedPointNum = copyAssignOperat.getRawBits();
  }
 return *this;
}

int Fixed::getRawBits( void ) const {
 
	std::cout << "getRawBits member function called" << std::endl;
  return (_fixedPointNum);
}

void Fixed::setRawBits( int const raw ) {

 	std::cout << "setRawBits member function called" << std::endl;
  _fixedPointNum = raw;
}

Fixed::~Fixed() {
  
  std::cout << "Destructor called" << std::endl;
  return ;
}
