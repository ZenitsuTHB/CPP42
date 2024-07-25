//42 HEADER


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
