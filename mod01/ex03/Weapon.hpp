// 42 HEADER

#ifndef _WEAPON_HPP
# define _WEAPON_HPP

#include <string>
#include <iostream>

using namespace std;

class Weapon{
public:

  Weapon(string type);
  ~Weapon();

  const string& getType();
  void setType(string type);

private:

  string _type;

};

#endif
