//42 HEADER


#include "../headers/Ice.hpp"


Ice::Ice() : _type("ice") {

}

Ice(const Ice &oldIce) {

    *this = oldIce;
}

Ice& Ice::operator=(const Ice &oldIce) {

  if (this != &oldIce) {

    _type = oldIce._type;
  }
  return (*this);
}

AMateria* clone() const {

  return (new Ice(*this));
}

void Ice::use(ICharacter& object) const {

  std::cout << "* shoots an ice bolt at" << object.getName() << "*";

}

Ice::~Ice(){}
