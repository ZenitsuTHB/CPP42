/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:49:29 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/22 14:49:37 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

  //Overloading comparisons Operators
  bool operator>( const Fixed& fixed);
  bool operator<( const Fixed& fixed);
  bool operator>=( const Fixed& fixed);
  bool operator<=( const Fixed& fixed);
  bool operator==( const Fixed& fixed);
  bool operator!=( const Fixed& fixed);

  // Overloading arithmetic Operators
  Fixed operator+( const Fixed& fixed);
  Fixed operator-( const Fixed& fixed);
  Fixed operator*( const Fixed& fixed);
  Fixed operator/( const Fixed& fixed);

  //4 increment/decrement Operators
  Fixed& operator++();//pre-increment
  Fixed& operator--();//post-decrement
  Fixed operator++(int);//post-increment
  Fixed operator--(int);//post-decrement

  static Fixed& min(Fixed& obj1, Fixed& obj2);
  static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
  static Fixed& max(Fixed& obj1, Fixed& obj2);
  static const Fixed& max(const Fixed& obj1, const Fixed& obj2);

  //Overloading the "<<" (insertion) operator
  friend std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

};


#endif
