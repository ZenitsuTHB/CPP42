
#ifndef WrongCAT_HPP
#define WRONGCAT_HPP

#define DefaultSound "....annoying silence....."

#include <string>
#include <iostream>

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
