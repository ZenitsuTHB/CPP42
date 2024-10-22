/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:50:55 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/17 19:09:50 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP
# define _HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {

	public:
		HumanB(std::string name);
		~HumanB();

		void attack();
		void setWeapon (Weapon& weapon);

	private:

		std::string _name;
		Weapon* _weapon;
};

#endif
