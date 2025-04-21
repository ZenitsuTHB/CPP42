#pragma once 

#include <string>
#include <iostream>

class ASpell;

class ATarget {

  protected:
    std::string _type;

    ATarget(const ATarget&);
    ATarget& operator = (const ATarget&);

  public:
  
    virtual ~ATarget();
    ATarget(const std::string& type );

    const std::string& getType(void) const;

    virtual  ATarget* clone() const = 0;

    void setType(const std::string& );

    void  getHitBySpell(const ASpell& target ) const;
};
