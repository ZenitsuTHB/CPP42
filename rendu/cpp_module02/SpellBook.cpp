/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/18 14:05:52 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SpellBook.hpp"

SpellBook::SpellBook() {}

void SpellBook::learnSpell(const ASpell *toLearn)
{
		if (toLearn)
				_spells[toLearn->getName()] = toLearn->clone();
}

void SpellBook::forgetSpell(const std::string &name)
{
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);	
	if (it != _spells.end())
		delete it->second;
}

ASpell * SpellBook::createSpell(const std::string &name)
{
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);	
	if (it != _spells.end())
		return it->second->clone();
	return NULL;

}

SpellBook::~SpellBook( ) {
	
	std::map<std::string, ASpell*>::iterator it = _spells.begin();	
	while (it != _spells.end())
	{
		delete it->second;
		it++;
	}
}
