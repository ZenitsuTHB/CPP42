/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:20:59 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/06 01:01:10 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array &src) : _arr(NULL), _size(0) { *this = src; }

template <typename T>
Array<T>::~Array() { delete [] _arr; }

template <typename T>
Array<T> &Array<T>::operator=(const Array &src)
{
    if (this != &src)
    {
        delete [] _arr;
        _size = src._size;
        _arr = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _arr[i] = src._arr[i];
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw std::exception();
    return _arr[i];
}

template <typename T>
unsigned int Array<T>::size() const { return _size; }