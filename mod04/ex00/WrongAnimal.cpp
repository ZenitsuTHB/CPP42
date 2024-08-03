//42 HEADER


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

    std::cout << "[ Base Class, WrongAnimal] Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) {

    std::cout << "[ Base Class, WrongAnimal] Parameterized Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &oldWrongAnimal) {

    std::cout << "[ Base Class, WrongAnimal] Copy Constructor called" << std::endl;
    *this = oldWrongAnimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &oldWrongAnimal) {

    std::cout << "[ Base Class, WrongAnimal] Copy Assignment operator called" << std::endl;
    if (this != &oldWrongAnimal)
      _type = oldWrongAnimal.getType();
    return (*this);
}

std::string WrongAnimal::getType() const {

  return(_type);
}

void WrongAnimal::makeSound() const {
    
    std::cout << "[ Base Class, WrongAnimal] sounds like : " << DefaultSound << std::endl;
}

WrongAnimal::~WrongAnimal() {

  std::cout << "[ Base Class, WrongAnimal] Destructor called" << std::endl;
}
