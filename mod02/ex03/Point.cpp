/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:57:38 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/24 12:26:27 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : _x(0), _y(0)  {

}

Point::Point(const Fixed nbr1, const Fixed nbr2) : _x(nbr1), _y(nbr2) {}

Point::Point(const Point &copyConst) : _x(copyConst._x), _y(copyConst._y) {}

Point& Point::operator=(const Point &copyAssign) {

	//Since _x and _y are const We can't assign them 
	(void)copyAssign;
	return (*this);
}


float Point::getX() const {

	return (_x.toFloat());
}

float Point::getY() const {

	return(_y.toFloat());
}

bool Point::operator==(const Point& point) {

	return (this->_x.toFloat() == point.getX() && 
			this->_y.toFloat() == point.getY());
}

std::ostream& operator<<(std::ostream& out, const Point& point) {

	out<< point.getX() << " , " << point.getY();
	return (out);
} 

Point::~Point() {}

