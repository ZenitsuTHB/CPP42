#pragma once 

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    public:

      Fwoosh() : ASpell("Fwoosh","Fwooshed"){}
      virtual ~Fwoosh() {}

      ASpell* clone() const  {

        return new Fwoosh();
      }
};
