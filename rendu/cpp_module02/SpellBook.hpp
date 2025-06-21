/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/18 14:15:05 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP 

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class SpellBook {
	
	private:
		std::map<std::string, ASpell*> _spells;
		
		SpellBook(const SpellBook &src );
		SpellBook & operator=(const SpellBook &src );
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(const ASpell *);
		void forgetSpell(const std::string &name);
		ASpell * createSpell(const std::string &name);

};

#endif
