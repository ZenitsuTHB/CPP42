//42 HEADER


#ifndef _AMATERIA_HPP
#define _AMATERIA_HPP

#include <string>
#include <iostream>

class AMateria
{
    protected:

      std::string _type;
      [...]

    public:

        //AMateria();
        AMateria(std::string const  &type);
        AMateria(const AMateria &);
        AMateria& operator=(const AMateria&);
        virtual ~AMateria();

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
