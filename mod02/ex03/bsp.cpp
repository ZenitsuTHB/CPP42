/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:50:08 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 11:45:10 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float theAreas(float xa, float Ya, float xb, float Yb, float xc, float Yc)
{
	return std::abs((xa*(Yb - Yc) + xb*(Yc - Ya)+ xc*(Ya - Yb)) / 2.0f);
}

// Function to check if three points are collinear
bool areCollinear(const Point& P, const Point& A, const Point& B) {

    float area = (A.getX() * (B.getY() - P.getY())) +
                 (B.getX() * (P.getY() - A.getY())) +
                 (P.getX() * (A.getY() - B.getY()));
    return (area == 0.0f);
}

// Function to check if a point P is on the edge defined by points A and B
bool isOnEdge(const Point& P, const Point& A, const Point& B) {
    
    if (!areCollinear(P, A, B))
      return (false);
    float minX = std::min(A.getX(), B.getX());
    float maxX = std::max(A.getX(), B.getX());
    float minY = std::min(A.getY(), B.getY());
    float maxY = std::max(A.getY(), B.getY());
    return (P.getX() >= minX && P.getX() <= maxX && P.getY() >= minY && P.getY() <= maxY);
}

//if the meeting Point of P with the base is the same coordonate
bool isVertex( Point& a, Point& b, Point& c, Point& P) {
	return(P == a || P == b || P == c);
}

bool bsp( Point const a, Point const b, Point const c, Point const P)
{
	float A0; //Abc
	float A1; //Pab
	float A2; //Pbc
	float A3; //Pca

	A0 = theAreas(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	A1 = theAreas(P.getX(), P.getY(), a.getX(), a.getY(), b.getX(), b.getY());
	A2 = theAreas(P.getX(), P.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	A3 = theAreas(P.getX(), P.getY(), c.getX(), c.getY(), a.getX(), a.getY());
  
  if (A1 == 0 || A2 == 0 || A3 == 0)
    return (false);
  //std::cout << Abc << " | "<< Pab << " | " << Pbc << " | " << Pca << std::endl;
	return (A0 == A1 + A2 + A3);
}
