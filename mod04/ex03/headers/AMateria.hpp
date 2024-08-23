//42 HEADER


#ifndef _AMATERIA_HPP
#define _AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:

      std::string _type;
      //[...]

    public:

        AMateria();
        AMateria(std::string const  &type);
        AMateria(const AMateria &);
        AMateria& operator=(const AMateria&);
        virtual ~AMateria();

        virtual AMateria* clone() const = 0;
        std::string const & getType() const; //Returns the materia type
        virtual void use(ICharacter& target);
};

#endif
