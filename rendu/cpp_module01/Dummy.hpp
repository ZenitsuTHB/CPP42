#pragma once 

#include <string>
#include <iostream>
#include "ATarget.hpp"
class Dummy : public ATarget {

  public:
  
    Dummy() : ATarget("Target Practice Dummy"){}
    virtual ~Dummy(){}

    ATarget* clone() const {

      return new Dummy();
    }
};
