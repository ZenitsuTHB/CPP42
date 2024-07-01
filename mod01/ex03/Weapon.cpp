// 42 HEADER



#include "Weapon.hpp"

Weapon::Weapon (string type) : _type(type) {

  return ;
}

Weapon::~Weapon () {

  return ;
}

const string& Weapon::getType() {
  //()const vs const string;

  const string& aliasType = _type; 

  return (aliasType);
}


void Weapon::setType(string type) {
 
  _type = type;
}
