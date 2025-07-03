/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:20:17 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/18 13:36:08 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day.\n";
}


std::string const & Warlock::getName()const { return _name;}

std::string const & Warlock::getTitle()const { return _title;}

void	Warlock::setTitle(const std::string &title) {

	_title = title;
	
}

void Warlock::introduce() const {
	
	std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}

void	Warlock::learnSpell(const ASpell * spell) {
	
		_spells.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string &name) {
		_spells.forgetSpell(name);
}

void	Warlock::launchSpell(const std::string &name, ATarget &target) {
	ASpell * spell = _spells.createSpell(name);

	if (spell) 
	{
			spell->launch(target);
			delete spell;
	}
}

Warlock::~Warlock(){
	std::cout << _name << ": My job here is done!\n";
}
