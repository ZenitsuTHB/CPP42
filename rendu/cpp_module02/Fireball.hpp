/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/18 14:00:05 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include "ASpell.hpp"

# include <iostream>

class Fireball : public ASpell {
	
	public:
		Fireball() : ASpell("Fireball", "burnt to a crisp") {}
		~Fireball() {}

		Fireball *clone() const {
		
			return new Fireball;
		}
};

#endif
