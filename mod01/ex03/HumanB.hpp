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

  void attack(string name, Weapon weapon);
  void setWeapon (Weapon* )

private:

  string _name;
  Weapon* _bazuka;
  
};

#endif
