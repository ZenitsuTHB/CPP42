// 42 HEADER




#ifndef _HUMANA_HPP
# define _HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

using namespace std;

class HumanA {
public:
  HumanA();
  ~HumanA();

  void attack(name, weapon);

private:

  Weapon weapon;
  string _name;
  
};

#endif
