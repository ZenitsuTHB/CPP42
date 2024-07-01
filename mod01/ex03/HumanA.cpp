//42 HEADER


#include "HumanA.hpp"

HumanA::HumanA (string name, Weapon& weapon) : _name(name), _bazuka(weapon) {

  return ;
}

HumanA::~HumanA () {

  return ;
}

void HumanA::attack() {

  cout << _name << " : attacks with their : " << _bazuka.getType() << endl;
}
