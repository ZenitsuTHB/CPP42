//42 Header




#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define DefaultSound "....peaceful silence....."

#include <string>
#include <iostream>

class Animal {

    public:

      Animal();
      Animal(const std::string &type);
      Animal(const Animal &oldAnimal);
      Animal &operator=(const Animal &oldAnimal);
      virtual ~Animal();

      std::string getType() const;
      virtual void makeSound() const;
    protected:

      std::string _type;

};

#endif
