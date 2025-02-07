/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:06:37 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/07 23:42:15 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

# include <sstream>
# include <iostream>
# define nullptr NULL

template < typename T>
class Array {
    
    private:
        T*              _arr;
        unsigned int    _size;
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array & src);
        Array & operator=(const Array & src);
        ~Array();

        T & operator[](unsigned int i);
        unsigned int size() const;
        
        class outOfBounds : public std::exception {
            public:
                const char* what() const throw() { 
			return "Index is out of bounds !"; 
		}
        };
};

# include "Array.tpp"

#endif
