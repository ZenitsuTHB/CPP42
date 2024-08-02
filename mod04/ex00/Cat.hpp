//42 HEADER


#ifndef CAT_HPP
#define CAT_HPP

#define CatSound "   MEOW ! MEOW !"

#include "Animal.hpp"

class Cat :public Animal {

    public:

      Cat();
      Cat(const Cat &oldCat);
      Cat &operator=(const Cat &oldCat);
      virtual ~Cat();

      void makeSound() const;
};

#endif
