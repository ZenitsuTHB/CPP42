
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#define WrongCatSound "....Boring silence....."

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat :public WrongAnimal {

    public:

        WrongCat();
        WrongCat(const std::string &type);
        WrongCat(const WrongCat &oldWrongCat);
        WrongCat &operator=(const WrongCat &oldWrongCat);
        virtual ~WrongCat();

        std::string getType() const;
        virtual void makeSound() const;
    protected:

      std::string _type;

};

#endif
