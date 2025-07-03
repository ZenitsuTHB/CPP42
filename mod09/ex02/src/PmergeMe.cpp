/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:41:17 by avolcy            #+#    #+#             */
/*   Updated: 2025/07/04 00:08:17 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/PmergeMe.hpp"

PmergeMe::PmergeMe(const std::string& input)
{
    // Parse the input string and fill the _vec and _deq containers
    std::istringstream iss(input);
    int number;
    while (iss >> number) {
        if (iss.peek() == ',')
            iss.ignore();
        _vec.push_back(number);
        _deq.push_back(number);
    }
    printData(_vec, 1); // Print the input data
    // Call the mergeInsert methods to sort the containers
    //mergeInsertDeque(_deq);
    //mergeInsertVector(_vec);
}

void PmergeMe::mergeInsertDeque(Deque& array)
{
    // Implement the merge-insert algorithm for deque
    // This is a placeholder; actual implementation would go here
    std::sort(array.begin(), array.end());
}

void PmergeMe::mergeInsertVector(Vector& array)
{
    // Implement the merge-insert algorithm for vector
    // This is a placeholder; actual implementation would go here
    std::sort(array.begin(), array.end());
}

void printData(const Vector& array, int mode) const
{
    if (mode == 1) {
        std::cout << "Input: ";
        for (const auto& num : array) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else if (mode == 2) {
        std::cout << "Output: ";
        for (const auto& num : array) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}


PmergeMe::~PmergeMe()
{}