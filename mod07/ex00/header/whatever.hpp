/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:38:19 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/05 09:33:14 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP_
#define _WHATEVER_HPP_

#include <iostream>
#include <iomanip>

template < typename T >
void	swap( T & x, T & y )
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;	
}

template < typename T >
T	& min( T & x, T & y )
{
	if (x < y)
		return (x);
	return (y);
	//return(( x < y ) ? x : y);
}

template < typename T >
T	& max( T & x, T & y )
{
	if (x > y)
		return (x);
	return (y);
	//return(( x > y ) ? x : y);
}	

#endif
