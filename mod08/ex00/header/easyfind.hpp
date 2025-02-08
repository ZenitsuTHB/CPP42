/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 00:10:59 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/08 05:30:46 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
# define _EASYFIND_HPP_

#include <iostream>
#include <algorithm>

# define notFound "Sorry we couldn't find what you're looking for !" 

template < typename T >
typename T::iterator	easyfind(T cntr, int findX)
{
	typename T::iterator it;
	it = find(cntr.begin(), cntr.end(), findX);
	if (it != cntr.end())
		return (it);
	else
		throw std::invalid_argument(notFound);
}

#endif 
