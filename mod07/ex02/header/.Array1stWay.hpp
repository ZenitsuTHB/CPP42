/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .Array1stWay.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:20:07 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/07 13:34:35 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAR_HPP_
# define _ARRAR_HPP_

#include <iostream>
#include <exception>

# define nullptr NULL

template < typename T>
class Array {

    private:
	    T*              _array;
	    unsigned int	_arrlen;

    public:
        Array() : _array( nullptr ), _arrlen( 0 ) {}
        Array( unsigned int size ) : _arrlen( size ) {
		
        ( size == 0 ) ? _array = nullptr : _array = new T[size]();
	}
	
	Array( const Array& src) : _arrlen( src._arrlen ) 
	{
		_array = new T[_arrlen];
		for( unsigned int i = 0; i < _arrlen; i++ )
			_array[i] = src._array[i];
	}
	
	Array&	operator=( const Array& src )
	{
		if( this != &src ) {
			
			delete [] _array;
            _array = new T[src._arrlen];
            for (unsigned int i = 0; i < src._arrlen; i++)
                _array[i] = src._array[i];
		}
		return ( *this );
	}

	class outOfBounds : public std::exception {
		
		public:
			const char* what() const throw() { 
				return ("OOoops ! Index is out of range, try lower value !");
			}
	};
	
	T& operator[]( unsigned int index ) {
        
        if ( index >= _arrlen )
            throw outOfBounds();
        return (_array[index]);
    }

    unsigned int size() const { return _arrlen; }
    
    ~Array() {  delete [] _array; }
};
     
#endif



