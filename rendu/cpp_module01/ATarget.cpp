#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(const std::string& type )
{
  setType(type);
}

const std::string& ATarget::getType(void) const
{
  return _type;
}


void ATarget::setType(const std::string& type )
{
  _type = type;
}

void  ATarget::getHitBySpell(const ASpell& target ) const
{
  std::cout << this->getType() << " has been " << target.getEffects() << "!\n";
}

ATarget::~ATarget(){}
