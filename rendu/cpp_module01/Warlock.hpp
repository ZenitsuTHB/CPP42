#pragma once 

#include <string>
#include <map>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"


class ASpell;
class ATarget;

class Warlock {

  private:
    std::string _name;
    std::string _title;

    std::map<std::string, ASpell*> _spells;

    Warlock(const Warlock&);
    Warlock& operator = (const Warlock&);

  public:
  
    ~Warlock();
    Warlock(std::string name, std::string title);

    const std::string& getName(void) const;
    const std::string& getTitle(void) const;

    void setTitle(const std::string&);
    void introduce() const;   

    void  learnSpell(ASpell* spell );
    void  forgetSpell(const std::string& spellName);
    void  launchSpell(const std::string& spellName, const ATarget& target);


};



