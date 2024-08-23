//42 HEADER


#ifndef _ICE_HPP
# define _ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {
    
    public:

      Ice();
      Ice(const Ice &);
      Ice &operator=(const Ice &);
      ~Ice();

      AMateria* clone() const;
      void use(ICharacter&) const;
  
};

#endif

Ice::Ice() {
}

Ice::~Ice() {
}
