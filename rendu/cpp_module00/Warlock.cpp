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

Warlock::~Warlock(){
  std::cout << this->_name << ": My job here is done!\n";
}
