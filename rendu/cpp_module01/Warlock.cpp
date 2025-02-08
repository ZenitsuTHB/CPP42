/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:20:17 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/08 18:09:56 by avolcy           ###   ########.fr       */
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
	
	if(spell)
		_spells[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(const std::string &name) {
	
	std::map<std::string, ASpell *>::iterator it = _spells.find(name);
	if (it != _spells.end()) {
		delete it->second;
		_spells.erase(it);
	}
}

void	Warlock::launchSpell(const std::string &name, ATarget &target) {
	
	std::map<std::string,  ASpell *>::iterator it = _spells.find(name);
	if (it != _spells.end())
		it->second->launch(target);
}

Warlock::~Warlock(){
	std::cout << _name << ": My job here is done!\n";
}
