/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/18 14:02:17 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP 

#include "ASpell.hpp"

# include <iostream>

class Polymorph : public ASpell {
	
	public:
		Polymorph() : ASpell("Polymorph", "turned into critter") {}
		~Polymorph() {}

		Polymorph *clone() const {
		
			return new Polymorph;
		}
};

#endif
