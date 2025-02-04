/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:17:21 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/04 22:50:55 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/whatever.h"

int maini()
{
	int x, y;
	float i, j;
	double k, l;

	x = 42;
	y = 24;

	k = 42;
	l = 24;

	std::cout << swap( x,y ) << std::endl;	
	std::cout << "max of :" <<  max( x, y) << std::endl;	
	std::cout << "min of :" << min( x, y) << std::endl;	

	std::cout << swap( x,y ) << std::endl;	
	std::cout << "max of :" <<  max( x, y) << std::endl;	
	std::cout << "min of :" << min( x, y) << std::endl;	
	
	std::cout << swap( x,y ) << std::endl;	
	std::cout << "max of :" <<  max( x, y) << std::endl;	
	std::cout << "min of :" << min( x, y) << std::endl;	
}
