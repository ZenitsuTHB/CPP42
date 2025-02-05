/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:42:36 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/05 16:44:36 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
# define _ITER_HPP_

# include <iostream>

template <typename ARR, typename FUN>
void iter(ARR &array, unsigned int length, FUN func)
{
	for (unsigned int i = 0; i < length; i++)
		func(array[i]);
}

#endif
