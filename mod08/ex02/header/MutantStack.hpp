/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:20:57 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/12 15:20:57 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
        MutantStack &operator=(const MutantStack &copy)
        {
            if (this == &copy)
                return (*this);
            std::stack<T>::operator=(copy);
            return (*this);
        }
    
        ~MutantStack() {}

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() { return (std::stack<T>::c.begin()); }
        iterator end() { return (std::stack<T>::c.end()); }
};

#endif