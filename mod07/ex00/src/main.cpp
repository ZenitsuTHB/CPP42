/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:17:21 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/05 15:22:59 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/whatever.hpp"

#include <iostream>

int main() {

	char a = 'a', b = 'b';
	std::cout << "\nTHIS IS THE TEMPLATE TEST FOR CHAR\n";
	std::cout << "Before swap 	a-----" << a << "	" << "b-----"<< b << std::endl;
	swap(a, b);
	std::cout << "After swap 	a-----" << a << "	" << "b-----"<< b << std::endl;
	std::cout << "max of :	a-----" << a << "	b-----" << b << " is --> " << max(a, b) << std::endl;
	std::cout << "min of :	a-----" << a << "	b-----" << b << " is --> " << min(a, b) << std::endl;
	
	int x = 42, y = 24;
	std::cout << "THIS IS THE TEMPLATE TEST FOR INT\n";
    std::cout << "Before swap 	x-----" << x << "	" << "y-----"<< y << std::endl;
    swap(x, y);
    std::cout << "After swap 	x-----" << x << "	" << "y-----"<< y << std::endl;
    std::cout << "max of :	x-----" << x << "	y-----" << y << " is --> " << max(x, y) << std::endl;
    std::cout << "min of :	x-----" << x << "	y-----" << y << " is --> " << min(x, y) << std::endl;

	float i = 42.9f, j = 24.9f;
	std::cout << "\nTHIS IS THE TEMPLATE TEST FOR FLOAT\n";
    std::cout << "Before swap 	i-----" << i << "	" << "j-----"<< j << std::endl;
    swap(i, j);
    std::cout << "After swap 	i-----" << i << "	" << "j-----"<< j << std::endl;
	std::cout << "max of :	i-----" << i << "	j-----" << j << " is --> " << max(i, j) << std::endl;
	std::cout << "min of :	i-----" << i << "	j-----" << j << " is --> " << min(i, j) << std::endl;
  
    double k = 4.29, l = 2.49;
	std::cout << "\nTHIS IS THE TEMPLATE TEST FOR DOUBLE\n";
	std::cout << "Before swap 	k-----" << k << "	" << "l-----"<< l << std::endl;
	swap(k, l);
	std::cout << "After swap 	k-----" << k << "	" << "l-----"<< l << std::endl;
	std::cout << "max of :	k-----" << k << "	l-----" << l << " is --> " << max(k, l) << std::endl;
	std::cout << "min of :	k-----" << k << "	l-----" << l << " is --> " << min(k, l) << std::endl;

	std::string m = "Hello", n = "World";
	std::cout << "\nTHIS IS THE TEMPLATE TEST FOR STRING\n";
	std::cout << "Before swap 	m-----" << m << "	" << "n-----"<< n << std::endl;
	swap(m, n);
	std::cout << "After swap 	m-----" << m << "	" << "n-----"<< n << std::endl;
	std::cout << "max of :	m-----" << m << "	n-----" << n << " is --> " << max(m, n) << std::endl;
	std::cout << "min of :	m-----" << m << "	n-----" << n << " is --> " << min(m, n) << std::endl;	
	/*std::cout << "\nTHIS IS THE SUBJECT TEST" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;*/

	
    return 0;
}
