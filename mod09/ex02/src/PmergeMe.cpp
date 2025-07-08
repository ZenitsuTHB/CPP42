/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 23:31:35 by avolcy            #+#    #+#             */
/*   Updated: 2025/07/08 19:38:42 by avolcy           ###   ########.fr       */
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
    std::cout << "Processing a range of " << _vec.size() << std::endl;
}

void PmergeMe::_mergeInsertDeque(Deque& arr)
{
    (void)arr;
}
void PmergeMe::_generateJacobsthalSequence(Vector& jacob, unsigned int size)
{
    
    if (size == 0 || size == 1)
        return;
    
    jacob.clear();
    jacob.push_back(0);
    for (unsigned int j0 = 0, j1 = 1; j1 < size;) {
        jacob.push_back(j1);
        unsigned int next = j1 + 2 * j0;
        j0 = j1;
        j1 = next;
    }
    
    // Efficiently fill missing indices using a merge algo approach
    Vector complete(size);
    for (unsigned int i = 0; i < size; ++i) {
        complete[i] = i;
    }

    Vector merged;
    merged.reserve(size);
    unsigned int j_idx = 0, c_idx = 0;
    while (j_idx < jacob.size() && c_idx < complete.size())
    {
        if (jacob[j_idx] < complete[c_idx])
            merged.push_back(jacob[j_idx++]);
        else if (jacob[j_idx] > complete[c_idx])
            merged.push_back(complete[c_idx++]);
        else 
        {
            merged.push_back(jacob[j_idx++]);
            c_idx++;
        }
    }
    
    while (j_idx < jacob.size()) merged.push_back(jacob[j_idx++]);
    while (c_idx < complete.size()) merged.push_back(complete[c_idx++]);
    
    jacob.clear();
    for (unsigned int i = 0; i < merged.size() && merged[i] < size; ++i) {
        if (i == 0 || merged[i] != merged[i-1]) {
            jacob.push_back(merged[i]);
        }
    }
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
    
    std::vector<std::pair<int, int> > pairs = makePair(arr);
    
    biggest.clear();
    smallest.clear();
    for (size_t i = 0; i < pairs.size(); ++i) {
        biggest.push_back(pairs[i].first);
        smallest.push_back(pairs[i].second);
    }
    
    if (arr.size() % 2 != 0)
        smallest.push_back(arr.back());
    
    _printContainer(biggest, "=== B1 ===\n");
    _printContainer(smallest, "==== S ====\n");
    // std::sort(biggest.begin(), biggest.end());
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
    _printContainer(biggest, "=== BF ===\n");
    arr = biggest;
}

void PmergeMe::sortAndDisplay()
{
    clock_t	start = clock();
    _mergeInsertVector(_vec);
    clock_t	end = clock();
    
    _vecTime = 	static_cast<double>(end - start) / CLOCKS_PER_SEC * 10;

    _printContainer(_vec, "After : ");
    std::cout << "Time to process a range of " << _vec.size()
              << " elements with std::vector: " << _vecTime << " us" << std::endl;
    // std::cout << "Time to process a range of " << _deq.size()
    //           << " elements with std::deque: " << _deqTime << " us" << std::endl;
}


		
// Step 1: Split into pairs
// Step 2: Sort pairs by .first and rebuild biggest and smallest vectors
// Step 3: Sort bigs using std::sort() or recursion
// std::sort(biggest.begin(), biggest.end());
// Step 4: Generate Jacobsthal insertion order
// Final step: insert all smalls into biggest using jacob order

PmergeMe::~PmergeMe() {}