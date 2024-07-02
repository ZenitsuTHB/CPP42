// 42 HEADER




#ifndef _HUMANB_HPP
# define _HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

using namespace std;

class HumanB {
public:
  HumanB(string name);
  ~HumanB();

  void attack();
  void setWeapon (Weapon& weapon);

private:

  string _name;
  Weapon* _weapon;
  
};

#endif
