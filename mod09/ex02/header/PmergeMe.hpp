/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:28:26 by avolcy            #+#    #+#             */
/*   Updated: 2025/07/08 21:16:04 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PMERGEME_HPP
# define _PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <algorithm>

typedef std::deque<unsigned int> Deque;
typedef std::vector<unsigned int> Vector;

class PmergeMe
{
    private:
        Vector _vec;
        Deque  _deq;
        double _vecTime;
        double _deqTime;

        void _mergeInsertDeque(Deque& arr);
        void _mergeInsertVector(Vector& arr);
        inline std::deque<std::pair<int, int > >    _makePair(Deque & arr);
        inline std::vector<std::pair<int, int > >   _makePair(Vector & arr);

        void _printContainer(Vector& container, const std::string& msg) const;

    public:
        PmergeMe();
        ~PmergeMe();

        const Vector& getVector() const { return _vec; }
        const Deque& getDeque() const { return _deq; }
        
        void loadInput(int argc, char *argv[]);
        void sortAndDisplay();

        template<typename T>
        void isSortedArray(T & arr)
        {
            for (typename T::const_iterator it = arr.begin(); it != arr.end() - 1; ++it)
            {
                if (*it > *(it + 1))
                {
                    std::cout << "KO\n";
                    return;
                }
            }
            std::cout << "OK\n";
        }
        
	template<typename T>
	void _generateJacobsthalSequence(T & jacob, unsigned int size)
	{
	    if (size == 0 || size == 1)
	        return;
	    
	    jacob.clear();
	    jacob.push_back(0);
	    for (unsigned int j0 = 0, j1 = 1; j1 < size;)
	    {
	        jacob.push_back(j1);
	        unsigned int next = j1 + 2 * j0;
	        j0 = j1;
	        j1 = next;
	    }
	    
	    // Efficiently fill missing indices using a merge algo approach
	    T complete(size);
	    for (unsigned int i = 0; i < size; ++i) {
	        complete[i] = i;
	    }
	
	    T merged;
	    //merged.reserve(size);
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
};

#endif
