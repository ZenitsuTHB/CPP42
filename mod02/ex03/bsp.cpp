/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:50:08 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/22 17:03:35 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float theAreas(float xa, float Ya, float xb, float Yb, float xc, float Yc)
{
	return std::abs((xa*(Yb - Yc) + xb*(Yc - Ya)+ xc*(Ya - Yb)) / 2.0f);
}

bool bsp( Point const a, Point const b, Point const c, Point const P)
{
	float Abc;
	float Pab;
	float Pbc;
	float Pca;

	Abc = theAreas(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	Pab = theAreas(P.getX(), P.getY(), a.getX(), a.getY(), b.getX(), b.getY());
	Pbc = theAreas(P.getX(), P.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	Pca = theAreas(P.getX(), P.getY(), c.getX(), c.getY(), a.getX(), a.getY());
	return (Abc == Pab + Pbc + Pca);
}
