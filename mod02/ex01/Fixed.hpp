/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:08:04 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/25 18:10:27 by avolcy           ###   ########.fr       */
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

//Overloading the "<<" (insertion) operator
//the keyword "friend" allows the access to private and protected
//members of the class.
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
