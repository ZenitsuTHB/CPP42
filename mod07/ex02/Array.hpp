/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:20:07 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/06 19:48:37 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAR_HPP_
# define _ARRAR_HPP_

#include <iostream>
#include <exception>

template < typename T>
class Array {

    private:
	    T	*	_array;
	    size_t	_arrlen;

    public:
        Array() : _array( nullptr ), _arrlen( 0 ) {}
        Array( size_t size ) : _arrlen( size ) {
		
		if( size == 0 )
			_array = nullptr;
		else
			_array = new T[size]();
	}
	
	Array( const Array& src) : _arrlen( src._arrlen ) 
	{
		_array = new T[_arrlen];
		for( size_t i = 0; i < _arrlen; i++ )
			_array[i] = src._array[i];
	}
	
	Array&	operator=( const Array& src )
	{
		if( this != src ) {
			
			delete _array[] 
		}
		return ( *this );
	}

	~Array() {
		
		delete [] _array;
	}

}


/*template <typename T>
class Array
{
    private:
        T *_arr;
        unsigned int _size;
    public:
        Array() : _arr(NULL), _size(0) {}
        Array(unsigned int n) : _arr(new T[n]), _size(n) {}
        Array(const Array &src) : _arr(NULL), _size(0) { *this = src; }
        ~Array() { delete [] _arr; }

        Array &operator=(const Array &src)
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

        T &operator[](unsigned int i)
        {
            if (i >= _size)
                throw std::exception();
            return _arr[i];
        }

        unsigned int size() const { return _size; }
}
*/
#endif



