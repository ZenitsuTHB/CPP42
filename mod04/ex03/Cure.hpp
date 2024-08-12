//42 HEADER


#ifndef _CURE_HPP
# define _CURE_HPP

#include <iostream>
#include "AMateria.hppp"

class Cure : public AMateria {

    public:

      Cure();
      Cure(const Cure &);
      Cure &operator=(const Cure &);
      ~Cure();

      AMateria* clone() const;
      void use(ICharacter&) const;

  
};

#endif

Cure::Cure() {
}

Cure::~Cure() {
}
