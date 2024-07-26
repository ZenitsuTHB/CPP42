/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:00:05 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/22 15:04:01 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP
# define _POINT_HPP

#include <string>
#include "Fixed.hpp"
#include "Point.hpp"


class Point {

	private:

	  const Fixed _x;
	  const Fixed _y;

	public:

	  Point();
	  ~Point();
	  Point(const Point &copyConst);
	  Point &operator=(const Point &copyAssign);
	  Point(const Fixed nbr1, const Fixed nbr2);

	  bool operator==(const Point& point);

	  float getX() const;
	  float getY() const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

//Overloading the "<<" (insertion) operator to print a Point an object
std::ostream& operator<<(std::ostream& out, const Point& point);  

#endif
