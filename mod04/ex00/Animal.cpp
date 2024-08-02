//42 HEADER




#include "Animal.hpp"

Animal::Animal() : _type("Anonimous Animal") {

  std::cout << "[Base class Animal] Default Constructor has been called !" std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {

  std::cout << "[Base class Animal] Parametrized Constructor called !" std::endl;
}

Animal::Animal(const Animal &oldAnimal) {

    std::cout << "[Base class Animal] Copy Constructor called !" std::endl;
    *this = oldAnimal;
}
      
Animal& Animal::operator=(const Animal &oldAnimal) {

    std::cout << "[Base class Animal] Copy Assignment operator called !" std::endl;
    if (this != &oldAnimal) {

      _type = oldAnimal._type;
    }
    return (*this);
}

std::string Animal::getType() const {

  return(_type);
}


void  Animal::makeSound() const {

  std::cout << "[Animal] sounds like : " << "DefaultSound" << std::endl;
}

Animal::~Animal() {

  std::cout << "[Base class Animal] Destructor has been called !" std::endl;
}

