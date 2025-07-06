/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:28:26 by avolcy            #+#    #+#             */
/*   Updated: 2025/07/06 21:21:05 by avolcy           ###   ########.fr       */
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
        // double _deqTime;

        void _printContainer(Vector& container, const std::string& msg) const;
        void _mergeInsertDeque(Deque& arr);
        void _mergeInsertVector(Vector& arr);
        void _generateJacobsthalSequence(Vector& jacob, unsigned int size);


        
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
        inline std::vector<std::pair<int, int > > makePair(const T & arr)
        {
            std::vector<std::pair<int, int> > pairs;
            size_t limit = arr.size() - (arr.size() % 2);
            for (size_t i = 0; i < limit; i += 2)
            {
                unsigned int a = arr[i];
                unsigned int b = arr[i + 1];

                if (a > b)
                    pairs.push_back(std::make_pair(a, b));
                else
                    pairs.push_back(std::make_pair(b, a));
            }

            return pairs;
        } 
};

#endif