/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:07:53 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/15 13:07:59 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default Constructor with no parameters
Fixed::Fixed() : _fixedPointNum(0) {

  std::cout << "Default constructor called" << std::endl;
}

//Default Constructor with const integer parameters
//to be converted to fixed point
Fixed::Fixed(const int intValue) {

  std::cout << "Int constructor called" << std::endl;
  _fixedPointNum = intValue << _fractionalBits;
}

//Default Constructor with const float parameters
//to be converted to fixed point
Fixed::Fixed(const float floatValue) {

  std::cout << "Float constructor called" << std::endl;
  _fixedPointNum = roundf(floatValue * (1 << _fractionalBits));

}

//copy constructor
Fixed::Fixed(const Fixed &copyConstructor) {

  std::cout << "Copy constructor called" << std::endl;
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

  return (_fixedPointNum);
}

void Fixed::setRawBits( int const raw ) {

  _fixedPointNum = raw;
}

int Fixed::toInt( void ) const {

  return (_fixedPointNum >> _fractionalBits);
}

float Fixed::toFloat( void ) const {

  return (static_cast<float>(_fixedPointNum) / (1 << _fractionalBits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {

  out << fixed.toFloat();

  return (out);
}

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}
