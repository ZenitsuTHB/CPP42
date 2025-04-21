#pragma once 

#include <string>
#include <iostream>

class ATarget;

class ASpell {

  protected:
    std::string _name;
    std::string _effects;

    ASpell(const ASpell&);
    ASpell& operator = (const ASpell&);

  public:
  
    virtual ~ASpell();
    ASpell(const std::string& name, const std::string& effects );

    std::string getName(void) const;
    std::string getEffects(void) const;

    virtual ASpell* clone() const = 0;

    void setEffects(const std::string&);
    void  launch(const ATarget& target) const;


};
