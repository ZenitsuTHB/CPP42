/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 23:31:35 by avolcy            #+#    #+#             */
/*   Updated: 2025/07/09 14:09:17 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/PmergeMe.hpp"

PmergeMe::PmergeMe() {}

void PmergeMe::_printContainer(Vector& container, const std::string& msg) const
{
    std::cout << msg;
    for (Vector::const_iterator it = container.begin(); it != container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::loadInput(int argc, char *argv[])
{
    for (int i = 1; i < argc; ++i) {
        std::istringstream iss(argv[i]);
        int number;
        if (!(iss >> number) || number < 0)
            throw std::invalid_argument("Invalid input: non-positive integer detected.");
        _vec.push_back(number);
        _deq.push_back(number);
    }
    if (_vec.empty())
        throw std::invalid_argument("No valid numbers provided.");
    _printContainer(_vec, "Before : ");
}

inline std::deque<std::pair<int, int > > PmergeMe::_makePair(Deque & arr)
{
    std::deque<std::pair<int, int> > pairs;
    size_t limit = arr.size() - (arr.size() % 2);
    for (size_t i = 0; i < limit; i += 2)
    {
        int a = arr[i];
        int b = arr[i + 1];
        if (a > b)
            pairs.push_back(std::make_pair(a, b));
        else
            pairs.push_back(std::make_pair(b, a));
    }
    return pairs;
} 

void PmergeMe::_mergeInsertDeque(Deque& arr)
{
     if (arr.size() <= 1)
        return;
    else if (arr.size() == 2)
    {
        if (arr[0] > arr[1])
            std::swap(arr[0], arr[1]);
        return;
    }
    Deque  biggest, smallest, jacob;
    std::deque<std::pair<int, int > > pairsDeq = _makePair(arr);
    
    biggest.clear();
    smallest.clear();
    for (size_t i = 0; i < pairsDeq.size(); ++i) {
        biggest.push_back(pairsDeq[i].first);
        smallest.push_back(pairsDeq[i].second);
    }
    
    if (arr.size() % 2 != 0)
        smallest.push_back(arr.back());
    
    _mergeInsertDeque(biggest);
    _generateJacobsthalSequence(jacob, smallest.size());
    for (unsigned int i = 0; i < jacob.size(); ++i)
    {
        unsigned int idx = jacob[i];
        if (idx >= smallest.size())
            continue;

        int value = smallest[idx];
        Deque::iterator pos = std::lower_bound(biggest.begin(),biggest.end(), value);
        biggest.insert(pos, value);
    }
    arr = biggest;
}

inline std::vector<std::pair<int, int > > PmergeMe::_makePair(Vector & arr)
{
    std::vector<std::pair<int, int> > pairs;
    size_t limit = arr.size() - (arr.size() % 2);
    for (size_t i = 0; i < limit; i += 2)
    {
        int a = arr[i];
        int b = arr[i + 1];
        if (a > b)
            pairs.push_back(std::make_pair(a, b));
        else
            pairs.push_back(std::make_pair(b, a));
    }
    return pairs;
} 

void PmergeMe::_mergeInsertVector(Vector& arr)
{
    if (arr.size() <= 1)
        return;
    else if (arr.size() == 2)
    {
        if (arr[0] > arr[1])
            std::swap(arr[0], arr[1]);
        return;
    }
    
    Vector  biggest, smallest, jacob;
    std::vector<std::pair<int, int> > pairs =_makePair(arr);
    
    biggest.clear();
    smallest.clear();
    for (size_t i = 0; i < pairs.size(); ++i) {
        biggest.push_back(pairs[i].first);
        smallest.push_back(pairs[i].second);
    }
    
    if (arr.size() % 2 != 0)
        smallest.push_back(arr.back());
    
    _mergeInsertVector(biggest);
    _generateJacobsthalSequence(jacob, smallest.size());
    for (unsigned int i = 0; i < jacob.size(); ++i)
    {
        unsigned int idx = jacob[i];
        if (idx >= smallest.size())
            continue;

        int value = smallest[idx];
        Vector::iterator pos = std::lower_bound(biggest.begin(),biggest.end(), value);
        biggest.insert(pos, value);
    }
    arr = biggest;
}

void PmergeMe::sortAndDisplay()
{
    clock_t	start = clock();
    _mergeInsertVector(_vec);
    clock_t	end = clock();
    
    _vecTime = 	static_cast<double>(end - start) / CLOCKS_PER_SEC * 10;

    start = clock();
    _mergeInsertDeque(_deq);
    end = clock();
    
    _deqTime = 	static_cast<double>(end - start) / CLOCKS_PER_SEC * 10;

    _printContainer(_vec, "After : ");
    std::cout << "Time to process a range of " << _vec.size()
              << " elements with std::vector : " << _vecTime << " us" << std::endl;
    std::cout << "Time to process a range of " << _deq.size()
              << " elements with std::deque  : " << _deqTime << " us" << std::endl;
}

// Step 1: Split into pairs
// Step 2: Sort pairs by .first and rebuild biggest and smallest vectors
// Step 3: Sort bigs using std::sort() or recursion
// std::sort(biggest.begin(), biggest.end());
// Step 4: Generate Jacobsthal insertion order
// Final step: insert all smalls into biggest using jacob order

PmergeMe::~PmergeMe() {}
