/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:01:25 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/10 20:14:07 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Span.hpp"

#include <iostream>

int main() {

    try {
	    Span sp(5);
	    sp.addNumber(5);
	    sp.addNumber(99999999);
	    sp.addNumber(17);
	    sp.addNumber(9);
	    sp.addNumber(11);
	    
	    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	    
	    // Attempting to add another number should throw an exception
	    sp.addNumber(100);
    } catch (const std::exception& e) {
	    
	    std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}

