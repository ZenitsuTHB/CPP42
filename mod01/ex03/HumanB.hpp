// 42 HEADER




#ifndef _HUMANB_HPP
# define _HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

using namespace std;

class HumanB {
public:
  HumanB();
  ~HumanB();

  void attack(name, weapon);

private:

  Weapon  weapon;
  string _name;
  
};

#endif
