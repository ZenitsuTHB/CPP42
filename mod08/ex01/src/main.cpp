/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:01:25 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/12 15:12:10 by avolcy           ###   ########.fr       */
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

    
    Span sp(12);

    std::vector<int> vec;
    int arr[] = {11, 2, 9, 168, 5};
    vec.assign(arr, arr + 5);
    std::list<int> lst;
    lst.push_back(6);
    lst.push_back(10);
    lst.push_back(8);
    std::set<int> st;
    st.insert(3);
    st.insert(25);
    st.insert(7);

    sp.addNumber(vec.begin(), vec.end()); // Works with vector
    sp.addNumber(lst.begin(), lst.end()); // Works with list
    sp.addNumber(st.begin(), st.end());   // Works with set
    sp.addNumber(777);

    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    
    return 0;
}