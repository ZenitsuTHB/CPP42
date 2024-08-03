//42 Header




#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define DefaultSound "....peaceful silence....."

#include <string>
#include <iostream>

class WrongAnimal {

    public:

      WrongAnimal();
      WrongAnimal(const std::string &type);
      WrongAnimal(const WrongAnimal &oldWrongAnimal);
      WrongAnimal &operator=(const WrongAnimal &oldWrongAnimal);
      virtual ~WrongAnimal();

      std::string getType() const;
      virtual void makeSound() const;
    protected:

      std::string _type;

};

#endif
