/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/08 18:46:13 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {

}

ASpell::ASpell(const ASpell &src ) { *this = src; }

ASpell & ASpell::operator=(const ASpell &src ) {

	if(this != &src) {
		
		_name = src._name;
		_effects = src._effects;
	}
	return *this;
}

void	ASpell::launch(const ATarget & obj) const {
	
	obj.getHitBySpell(*this);
}

const std::string  & ASpell::getName() const { return this->_name; }

const  std::string  & ASpell::getEffects() const { return this->_effects; }
	

ASpell::~ASpell() {}

