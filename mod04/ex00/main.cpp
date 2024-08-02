//42 HEADER


#include "Animal.hpp"
#include "Dog.hpp"
// #include "Cat.hpp"
// #include "WrongAnimal.hpp"

int main() 
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    // const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;

    // i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    //...more tests
    return 0;
}
