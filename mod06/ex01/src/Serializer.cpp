/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:58:33 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/02 00:06:04 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer &cpy)
{
	*this = cpy;
}

Serializer & Serializer::operator=(const Serializer &cpy)
{
	(void)cpy;
	return(*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
	uintptr_t intptr = reinterpret_cast<uintptr_t>(ptr);
 	return (intptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	Data *ptr = reinterpret_cast<Data*>(raw);
 	return (ptr);
}

Serializer::~Serializer(){}
