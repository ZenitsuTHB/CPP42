/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:31:23 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/18 19:46:05 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << std::endl;
	std::cout << "________Guideline tests________"<< std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "________Guideline tests end________"<< std::endl;
	std::cout << std::endl;
	std::cout << "_________My tests_________________"<< std::endl;
	
	Fixed c (1234.4321f) ;
 	Fixed d (1234); 
 	Fixed e (1); 

	std::cout << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << std::endl;

	std::cout << "c bigger than d as float " << (c > d.toFloat()) << std::endl;
	std::cout << "c bigger or equal than d as int " << (c >= d) << std::endl;
	std::cout << "c different from d " << (c != d ) << std::endl;
	std::cout << "c is equal to d as float " << (c.toFloat() == d.toFloat()) << std::endl;
	std::cout << "c is equal to d as int " << (c.toInt() == d.toInt()) << std::endl;
	std::cout << "e pre-increment " << ++e << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "e post-increment " << e++ << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "e pre-decrement " << --e << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "e post-decrement " << e-- << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "max between c and d " << Fixed::max(c,d) << std::endl;
	std::cout << "min between c and d " << Fixed::min(c,d) << std::endl;
	std::cout << "greater or equal, c and d as int " << (c.toInt() >= d.toInt()) << std::endl;
	std::cout << "least or equal, c and d as float " << (c.toFloat() >= d.toFloat()) << std::endl;
	std::cout << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << std::endl;
	return 0;
}
