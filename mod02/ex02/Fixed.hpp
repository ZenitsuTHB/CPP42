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
  Fixed( const int );
  Fixed( const float );
  Fixed( const Fixed &copyConstrutor );//copy constructor
  Fixed &operator=( const Fixed &copyAssignOperat );//copy assignment operator 
  ~Fixed();//destructor

  int toInt( void ) const;
  float toFloat( void ) const;
  int getRawBits( void ) const;
  void setRawBits( int const raw );

/*• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and*/
/*post-decrement) operators, that will increase or decrease the fixed-point value from*/
/*the smallest representable ϵ such as 1 + ϵ > 1*/

  //Overloading comparisons Operators
  bool operator>( const Fixed& fixed);
  bool operator<( const Fixed& fixed);
  bool operator>=( const Fixed& fixed);
  bool operator<=( const Fixed& fixed);
  bool operator==( const Fixed& fixed);
  bool operator!=( const Fixed& fixed);

  //Overloading arithmetic Operators
  Fixed operator+( const Fixed& fixed);
  Fixed operator-( const Fixed& fixed);
  Fixed operator*( const Fixed& fixed);
  Fixed operator/( const Fixed& fixed);

  //Overloading the 4 increment/decrement Operators
  Fixed& operator++();//pre-increment
  Fixed& operator--();//post-decrement
  Fixed operator++(int);//post-increment
  Fixed operator--(int);//post-decrement

  static Fixed& min(Fixed& obj1, Fixed& obj2);
  static Fixed& min(const Fixed& obj1, const Fixed& obj2);
  static Fixed& max(Fixed& obj1, Fixed& obj2);
  static Fixed& max(const Fixed& obj1, const Fixed& obj2);

  //Overloading the "<<" (insertion) operator
  friend std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

};


#endif
