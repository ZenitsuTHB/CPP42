/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:26:23 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/25 18:22:41 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_HPP
# define _DIAMONDTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public ScavTrap, public FragTrap {

	public:
		
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &);
		DiamondTrap &operator=(const DiamondTrap &);
		~DiamondTrap();
		
		void whoAmI();
    void attack(const std::string& target);

	private:

		std::string		_name;
};


#endif
