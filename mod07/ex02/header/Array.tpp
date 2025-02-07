/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:47:21 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/07 11:47:21 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template < typename T >
Array<T>::Array() : _arr(nullptr), _size(0) {}

template < typename T >
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n) {}

template < typename T >
Array<T>::Array(const Array & src) : _arr(nullptr), _size(0) { *this = src;}

template < typename T >
Array<T> &Array<T>::operator=(const Array<T> & src) {

    if(this != &src) {

        delete [] _arr;
        _size = src._size;
        _arr = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _arr[i] = src._arr[i];

    }
    return (*this);
}

template < typename T >
T & Array<T>::operator[](unsigned int index) {

    if (index >= _size)
        throw Array::outOfBounds();
    return (_arr[index]);
}

template < typename T >
Array<T>::~Array() { delete [] _arr;}

template < typename T >
unsigned int Array<T>::size() const { return (_size); }
