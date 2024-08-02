//42 HEADER


#ifndef DOG_HPP
#define DOG_HPP

#define DogSound "   WOOf ! WOOf !"

#include "Animal.hpp"

class Dog :public Animal {

    public:

      Dog();
      Dog(const Dog &oldDog);
      Dog &operator=(const Dog &oldDog);
      virtual ~Dog();

      void makeSound() const;
};

#endif
