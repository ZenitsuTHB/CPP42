//42 HEADER


#include "HumanB.hpp"

HumanA::HumanB (string name) : _name(name) {

  return ;
}

HumanA::~HumanB () {

  return ;
}

void HumanB::setWeapon(Weapon* bazuka) {

  this->_weapon = &bazuka;
}

void HumanB::attack() {

  cout << _name << " : attacks with their : " << _weapon.getType() << endl;
}
