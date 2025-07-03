/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/18 14:10:24 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock {
	
	private:
		std::string _name;
		std::string _title;
		SpellBook	_spells;
		
		Warlock();
		Warlock(const Warlock &src );
		Warlock & operator=(const Warlock &src );
	public:
		Warlock(std::string, std::string);
		~Warlock();

		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(const std::string &);
		
		void introduce() const;

		void learnSpell(const ASpell *);
		void forgetSpell(const std::string &name);
		void launchSpell(const std::string &name, ATarget &);

};

#endif
