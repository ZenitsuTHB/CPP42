/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:58:33 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/01 17:03:59 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Serialize.hpp"

Serialize::Serialize(){}

Serialize::Serialize(const Serialize &cpy)
{
	*this = cpy;
}

Serialize & Serialize::operator=(const Serialize &cpy)
{
	(void)cpy;
	return(*this);
}

uintptr_t serialize(Data *ptr)
{
	uintptr_t intptr = reinterpret_cast<uintptr_t>(ptr);
 	return (intptr);
}

Data *deserialize(uintptr_t raw)
{
	Data *ptr = reinterpret_cast<Data*>(raw);
 	return (ptr);
}

Serialize::~Serialize(){}
