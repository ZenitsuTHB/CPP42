//42 HEADER

#include "../headers/AMateria.hpp"
        
AMateria::AMateria() : _type("Undefined type") {

  std::cout << "Materia Constructor called [ Default mode ] !" std::endl;

}

AMateria::AMateria(std::string const  &type) : _type(type) {

  std::cout << "Materia Constructor called !" std::endl;
}

AMateria::AMateria(const AMateria &oldMateria) {

    *this = oldMateria;
}

AMateria& AMateria::operator=(const AMateria& oldMateria) {

    if (this != &oldMateria) {

      std::cout << "Vamos a copiar !" << std::endl;
      _type = oldMateria.getType();
      
    }
    return (*this);
}

std::string const& AMateria::getType() const {

    return (&_type);
} //Returns the materia type (or a reference the materia ?)

void AMateria::use(ICharacter& target) {

    std::cout << "We are inside of the use method" std::endl;

}

AMateria::~AMateria() {
      
  std::cout << "Materia Destructor called !" std::endl;

}
