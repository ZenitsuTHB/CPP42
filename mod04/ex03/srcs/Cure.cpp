//42 HEADER


#include "../headers/Cure.hpp"

Cure::Cure() : _type("cure") {

}

Cure(const Cure &oldCure) {

    *this = oldCure;
}

Cure& Cure::operator=(const Cure &oldCure) {

  if (this != &oldCure) {

    _type = oldCure._type;
  }
  return (*this);
}

AMateria* clone() const {

  return (new Cure(*this));
}

void Cure::use(ICharacter& object) const {

  std::cout << "* heals " << object.getName() << "wounds *" << std::endl;
}

Cure::~Cure(){}
