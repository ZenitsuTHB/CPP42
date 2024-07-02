//42 HEADER


#include "HumanB.hpp"

HumanB::HumanB (string name) : _name(name) {

  return ;
}

HumanB::~HumanB () {

  return ;
}

void HumanB::setWeapon(Weapon& bazuka) {

  _weapon = &bazuka;
}

void HumanB::attack() {

 if (!_weapon)
    cout << _name << " : Is not armed, his Weapon was not set !" << endl;
 else
    cout << _name << " : attacks with their : " << _weapon->getType() << endl;
}
