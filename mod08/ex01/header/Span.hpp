/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:03:25 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/10 19:29:17 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span {

	private:
		unsigned int		_maxNum;
		std::vector<int>	_arr;

	public:
		Span(unsigned int);
		Span(const Span & src);
		Span & operator=(const Span & src);
		~Span();

		void	addNumber(int num) ;

		int shortestSpan() const;
		int longestSpan() const;
};

#endif

