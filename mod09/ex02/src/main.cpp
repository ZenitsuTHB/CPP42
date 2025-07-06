/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:44:06 by avolcy            #+#    #+#             */
/*   Updated: 2025/07/06 21:09:13 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../header/PmergeMe.hpp"

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        std::cerr << "Usage: ./PmergeMe <number1> <number2> ...\n";
        return 1;
    }

    try {
        PmergeMe sorter;
        sorter.loadInput(argc, argv);
        sorter.sortAndDisplay();
        //sorter.isSortedArray(sorter.getVector());
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
