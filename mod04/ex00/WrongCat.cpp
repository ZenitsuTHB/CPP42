//42 HEADER


#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {

    std::cout << "[ Base Class, WrongCat] Constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type){

    std::cout << "[ Base Class, WrongCat] Parameterized Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &oldWrongCat) : WrongAnimal(oldWrongCat) {

    std::cout << "[ Base Class, WrongCat] Copy Constructor called" << std::endl;
    *this = oldWrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat &oldWrongCat) {

    std::cout << "[ Base Class, WrongCat] Copy Assignment operator called" << std::endl;
    if (this != &oldWrongCat)
      WrongCat::operator=(oldWrongCat);
    return (*this);
}

std::string WrongCat::getType() const {

  return(_type);
}

void WrongCat::makeSound() const {
    
    std::cout << "[ Base Class, WrongCat] sounds like : " << DefaultSound << std::endl;
}

WrongCat::~WrongCat() {

  std::cout << "[ Base Class, WrongCat] Destructor called" << std::endl;
}
