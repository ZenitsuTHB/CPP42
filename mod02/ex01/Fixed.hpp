//42 HEADER

#ifndef _FIXED_HPP
# define _FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {

  private:

  int _fixedPointNum;
  static const int _fractionalBits = 8;

  public:

  Fixed();
  Fixed(const int );
  Fixed(const float );
  Fixed(const Fixed &copyConstrutor);//copy constructor
  Fixed &operator=(const Fixed &copyAssignOperat);//copy assignment operator 
  ~Fixed();//destructor

  int toInt( void ) const;
  float toFloat( void ) const;
  int getRawBits( void ) const;
  void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
