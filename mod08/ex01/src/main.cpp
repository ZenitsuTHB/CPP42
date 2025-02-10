/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:01:25 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/11 00:40:05 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Span.hpp"

#include <iostream>

//int main() {
//
//    try {
//	    Span sp(5);
//	    sp.addNumber(5);
//	    sp.addNumber(99999999);
//	    sp.addNumber(17);
//	    sp.addNumber(9);
//	    sp.addNumber(11);
//	    
//	    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
//	    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
//	    
//	    // Attempting to add another number should throw an exception
//	    sp.addNumber(100);
//    } catch (const std::exception& e) {
//	    
//	    std::cerr << "Error: " << e.what() << std::endl;
//    }
//    return 0;
//}
int main() {
    Span sp(10);

    std::vector<int> vec;
    int arr[] = {1, 2, 3, 4, 5};
    vec.assign(arr, arr + 5);
    std::list<int> lst;
    lst.push_back(6);
    lst.push_back(7);
    lst.push_back(8);
    std::set<int> st;
    st.insert(9);
    st.insert(10);
    st.insert(11);

    sp.addNumber(vec.begin(), vec.end()); // Works with vector
    sp.addNumber(lst.begin(), lst.end()); // Works with list
    sp.addNumber(st.begin(), st.end());   // Works with set

    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

    return 0;
} 
