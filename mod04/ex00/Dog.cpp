//42 Header




#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog") {

  std::cout << "[ Dog's ] Constructor has been called !" << std::endl;
}

Dog::Dog(const Dog &oldDog) : Animal(oldDog) {

    std::cout << "[ Dog's ] Copy Constructor called !" << std::endl;
    *this = oldDog;
}

Dog&  Dog::operator=(const Dog &oldDog) {

    std::cout << "[ Dog's ] Copy Constructor called !" << std::endl;

    if (this != &oldDog)
        Dog::operator=(oldDog);
    return (*this);
}

void Dog::makeSound() const {

    std::cout << "[ Dog's ] sounds like : " << "DogSound" << std::endl;
}

Dog::~Dog() {
  
  std::cout << "[ Dog's ] Destructor has been called !" << std::endl;
}
