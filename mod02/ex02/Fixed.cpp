//42 HEADER



#include "Fixed.hpp"

//Default Constructor with no parameters
Fixed::Fixed() : _fixedPointNum(0) {

}

//Default Constructor with const integer parameters
//to be converted to fixed point
Fixed::Fixed(const int intValue) {

  _fixedPointNum = intValue << _fractionalBits;
}

//Default Constructor with const float parameters
//to be converted to fixed point
Fixed::Fixed(const float floatValue) {

  _fixedPointNum = roundf(floatValue * (1 << _fractionalBits));

}

//copy constructor
Fixed::Fixed(const Fixed &copyConstructor) {

  _fixedPointNum = copyConstructor.getRawBits();

}

//copy assignment operator 
Fixed& Fixed::operator=(const Fixed &copyAssignOperat) {

  if (this != &copyAssignOperat) {

    _fixedPointNum = copyAssignOperat.getRawBits();
  }
  return *this;
}

//MEMBER functions
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

//OVERLOADINGS

//Comparisons
bool Fixed::operator>( const Fixed& fixed)  {

  return (this->_fixedPointNum > fixed.getRawBits());
}

bool Fixed::operator<( const Fixed& fixed)  {

  return (this->_fixedPointNum < fixed.getRawBits());
}

bool Fixed::operator>=( const Fixed& fixed) {

  return (this->_fixedPointNum >= fixed.getRawBits());
}

bool Fixed::operator<=( const Fixed& fixed) {

  return (this->_fixedPointNum <= fixed.getRawBits());
}

bool Fixed::operator==( const Fixed& fixed) {

  return (this->_fixedPointNum == fixed.getRawBits());
}

bool Fixed::operator!=( const Fixed& fixed) {

  return (this->_fixedPointNum != fixed.getRawBits());
}

//Arithmetic Operators
Fixed Fixed::operator+( const Fixed& fixed) { return (this->_fixedPointNum + fixed.getRawBits()); }
Fixed Fixed::operator-( const Fixed& fixed) { return (this->_fixedPointNum - fixed.getRawBits()); }
Fixed Fixed::operator*( const Fixed& fixed) { return (toFloat() * fixed.toFloat()); }
Fixed Fixed::operator/( const Fixed& fixed) { return (this->_fixedPointNum / fixed.getRawBits()); }

// 4 increment/decrement Operators
Fixed& Fixed::operator++()//pre-increment
{
  ++_fixedPointNum;
  return (*this);
}

Fixed& Fixed::operator--()//post-decrement
{
  --_fixedPointNum;
  return (*this);
}

Fixed Fixed::operator++(int)//post-increment
{
  Fixed result = *this;
  _fixedPointNum++;
  return (result);
}

Fixed Fixed::operator--(int)//post-decrement
{
  Fixed result = *this;
  _fixedPointNum--;
  return (result);
}

//Other Member functions
Fixed& Fixed::min(Fixed& obj1, Fixed& obj2) {

  return(obj1.toFloat() <  obj2.toFloat() ? obj1 : obj2);
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2) {

  return (obj1.toFloat() < obj2.toFloat() ? obj1 : obj2);
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2) {

  return (obj1.toFloat() > obj2.toFloat() ? obj1 : obj2);
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2) {

  return (obj1.toFloat() > obj2.toFloat() ? obj1 : obj2);
}

//Standard ouput
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {

  out << fixed.toFloat();

  return (out);
}

Fixed::~Fixed() {}
