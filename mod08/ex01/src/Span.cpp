/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:02:37 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/16 15:53:32 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Span.hpp"

Span::Span(unsigned int N) : _maxNum(N) {}

Span::Span(const Span & src) { *this = src; }

Span & Span::operator=(const Span & src) { 
	
	if(this != &src)	
	{
		_maxNum = src._maxNum;
		_arr	= src._arr;
	}
	return (*this);
}

void	Span::addNumber(int num) {

	if(_arr.size() >= _maxNum)
		throw std::out_of_range("Span is full, can't add more numbers !");
	_arr.push_back(num);
}

int Span::shortestSpan() const {
	
	if(_arr.size() < 2)
		throw std::logic_error(notEnoughNum);

	//Sort Algorithm TODO
	std::vector<int> sorted = _arr;
	std::sort(sorted.begin(), sorted.end());
	
	int minSpan = std::numeric_limits<int>::max();
	for(size_t i = 1; i < sorted.size(); i++)
		minSpan = std::min(minSpan, sorted[i] - sorted[i - 1]);
	return (minSpan);
}

int Span::longestSpan() const {

	if (_arr.size() < 2)
		throw std::logic_error(notEnoughNum);
	return (*std::max_element(_arr.begin(), _arr.end()) -
	      	*std::min_element(_arr.begin(), _arr.end()));
}

Span::~Span() {}


