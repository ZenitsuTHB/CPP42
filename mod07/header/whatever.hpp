/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:38:19 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/04 21:17:07 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP_
#define _WHATEVER_HPP_

template < typename T >
T	swap( T & x, T & y )
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;	
}

template < typename T >
T	& min( T & x, T & y )
{
	return( x < y ) ? x : y;
}

template < typename T >
T	& max( T & x, T & y )
{
	return( x > y ) ? x : y;
}

#endif
