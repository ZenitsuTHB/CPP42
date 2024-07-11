//42 HEADER

#ifndef _FIXED_HPP
# define _FIXED_HPP

#include <iostream>

class Fixed {

  private:

  int _fixedPointNum;
  static const int _fractionalBits = 8;

  public:

  Fixed();//default constructor
  Fixed(const Fixed &copyConstrutor);//copy constructor
  Fixed &operator=(const Fixed &copyAssignOperat);//copy assignment operator 
  ~Fixed();//destructor

  int getRawBits( void ) const;
  void setRawBits( int const raw );
};

#endif
