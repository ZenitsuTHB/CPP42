/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:06:38 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/15 13:06:45 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
