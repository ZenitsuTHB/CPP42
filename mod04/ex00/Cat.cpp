//42 Header




#include "Cat.hpp"
#include "Animal.hpp"

// Cat::Cat() : Animal() {
//
//   std::cout << "[ Cat's ] Default Constructor called !" << std::endl;
// }

Cat::Cat() : Animal("Cat") {

  std::cout << "[ Cat's ] Parameterized Constructor called !" << std::endl;
}

Cat::Cat(const Cat &oldCat) : Animal(oldCat) {

    *this = oldCat;
}

Cat&  Cat::operator=(const Cat &oldCat) {


    if (this != &oldCat)
        Cat::operator=(oldCat);
    return (*this);
}

void Cat::makeSound() const {

    std::cout << "[ Cat's ] sounds like : " << CatSound << std::endl;
}

Cat::~Cat() {

  std::cout << "[ Cat's ] Destructor called !" << std::endl;
}
