/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:28:26 by avolcy            #+#    #+#             */
/*   Updated: 2025/07/04 00:22:35 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PMERGEME_HPP
# define _PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

typedef std::deque<int> Deque;
typedef std::vector<int> Vector;

class PmergeMe
{
    private:
        Vector _vec;
        Deque  _deq;

        void parseInput(int ac, char **av);

        void mergeInsertDeque(Deque& array);
        void mergeInsertVector(Vector& array);
        
    public:
        PmergeMe(const std::string& input);
        ~PmergeMe();

        const Vector& getVector() const { return _vec; }
        void printData(const Vector& array, int mode) const;

};

#endif