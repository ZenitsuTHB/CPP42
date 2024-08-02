//42 Header




#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat") {

  std::cout << "[ Cat's ] Constructor has been called !" << std::endl;
}

Cat::Cat(const Cat &oldCat) : Animal(oldCat) {

    std::cout << "[ Cat's ] Copy Constructor called !" << std::endl;
    *this = oldCat;
}

Cat&  Cat::operator=(const Cat &oldCat) {

    std::cout << "[ Cat's ] Copy Constructor called !" << std::endl;

    if (this != &oldCat)
        Cat::operator=(oldCat);
    return (*this);
}

void Cat::makeSound() const {

    std::cout << "[ Cat's ] sounds like : " << CatSound << std::endl;
}

Cat::~Cat() {

  std::cout << "[ Cat's ] Destructor has been called !" << std::endl;
}
