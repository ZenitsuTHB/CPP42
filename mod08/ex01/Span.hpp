/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:03:25 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/08 06:10:28 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_

#include <iostream>

class Span {

	public:
		Span();
		Span(unsigned int);
		Span(const Span & src);
		Span(const Span & src);
		Span & operator=(const Span & src);
		~Span();

		void	addNumber(int num) const;

		int shortestSpan();
		int longestSpan();
};

#endif

