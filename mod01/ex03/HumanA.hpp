// 42 HEADER




#ifndef _HUMANA_HPP
# define _HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

using namespace std;

class HumanA {
public:
  HumanA(string name, Weapon& _bazuka);
  ~HumanA();

  void attack();

private:

  string _name;
  Weapon& _bazuka;
  
};

#endif
