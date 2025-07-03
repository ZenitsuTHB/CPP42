/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/08 18:48:54 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ATarget.hpp"
		
ATarget::ATarget(const std::string &type) : _type(type) {}

ATarget::ATarget(const ATarget &src ){ *this = src;}

ATarget & ATarget::operator=(const ATarget &src ) {

	if(this != &src)
		_type = src._type;
	return *this;

}

ATarget::~ATarget() {

}

std::string const & ATarget::getType() const { return _type; }

void ATarget::getHitBySpell(const ASpell & obj) const {

	std::cout << this->_type << " has been " << obj.getEffects() << "!\n";

}
