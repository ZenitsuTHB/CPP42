//42 HEADER

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
