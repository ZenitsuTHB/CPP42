/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:03:25 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/11 00:42:25 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <list>
#include <set>

class Span {

	private:
		unsigned int		_maxNum;
		std::vector<int>	_arr;

	public:
		Span(unsigned int);
		Span(const Span & src);
		Span & operator=(const Span & src);
		~Span();

		void	addNumber(int num);

	template <typename It>
  void	addNumber(It begin, It end) {

	size_t len(std::distance(begin, end));
	if(_arr.size() + len > _maxNum)
		throw std::out_of_range("Not enough space in Span to add all numbers !");
	_arr.insert(_arr.end(), begin, end);
}
void	addNumber(It begin, It end);

		int shortestSpan() const;
		int longestSpan() const;
};

#endif

