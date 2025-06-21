/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/18 14:00:59 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell {
	
	protected:
		std::string _name;
		std::string _effects;
		
		ASpell();
		ASpell(const ASpell &src );
		ASpell & operator=(const ASpell &src );
	public:
		ASpell(std::string, std::string);
		virtual ~ASpell();

		std::string const &getName() const;
		std::string const &getEffects() const;
	
		virtual ASpell * clone() const = 0;

		void launch(const ATarget &) const;

};

#endif
