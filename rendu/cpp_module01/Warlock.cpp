#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name) 
{
  std::cout << this->_name << ": This looks like another boring day.\n";
  setTitle(title);
}

const std::string& Warlock::getName(void) const {
  return (_name);
}

const std::string& Warlock::getTitle(void) const {
  return (_title);
}

void Warlock::introduce() const
{
  std::cout << this->_name << ": I am " << getName() << ", " << getTitle() << "!\n";
}

void Warlock::setTitle(const std::string& title) {
  this->_title = title;
}

void  Warlock::learnSpell( ASpell* spell )
{
  if (spell)
    _spells[spell->getName()] = spell->clone();
}

void  Warlock::forgetSpell(const std::string& name)
{
  std::map<std::string, ASpell*>::iterator it = _spells.find(name);

  if (it != _spells.end())
  {
    delete it->second;
    _spells.erase(it);
  }
}

void  Warlock::launchSpell(const std::string& name, const ATarget& target )
{
  ASpell* spell = _spells[name];
  if (spell)
    spell->launch(target);
}

Warlock::~Warlock()
{
  std::cout << this->_name << ": My job here is done!\n";
  std::map<std::string, ASpell*>::iterator it;
  
  for (it = _spells.begin(); it != _spells.end(); ++it )
    delete it->second;
  _spells.clear();
}
