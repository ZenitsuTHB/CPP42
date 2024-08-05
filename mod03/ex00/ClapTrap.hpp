/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:16:04 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 10:16:14 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP
# define _CLAPTRAP_HPP

#include <string>
#include <unistd.h>
#include <iostream>

class ClapTrap {

  private:

    std::string   _name;
    unsigned int  _health;
    unsigned int  _energy;
    unsigned int  _damage;

  public:
  
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &object);
    ClapTrap &operator=(const ClapTrap &object);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
  
};

#endif
