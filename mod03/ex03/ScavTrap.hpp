/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:53:23 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/25 12:55:15 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP
# define _SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap {

    public:

      ScavTrap();
      ScavTrap(std::string name);//:ClapTrap(name){};
      ScavTrap(const ScavTrap &);
      ScavTrap &operator=(const ScavTrap &);
      ~ScavTrap();

      void guardGate();
      void attack(const std::string& target);
};


#endif
