/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:54:19 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/25 12:55:12 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP
# define _FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap:public ClapTrap {

    public:

      FragTrap();
      FragTrap(std::string name);
      FragTrap(const FragTrap &);
      FragTrap &operator=(const FragTrap &);
      ~FragTrap();

      void highFivesGuys(void);
      void attack(const std::string& target);
};

#endif
