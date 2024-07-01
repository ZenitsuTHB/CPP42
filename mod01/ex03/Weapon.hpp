// 42 HEADER

#ifndef _WEAPON_HPP
# define _WEAPON_HPP

#include <string>
#include <iostream>

using namespace std;

class Weapon{
public:
  Weapon();
  ~Weapon();

  void getType() const;
  void setType(string type);

private:

  string _type;

};



#endif
