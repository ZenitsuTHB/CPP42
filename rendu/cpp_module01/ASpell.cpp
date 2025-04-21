#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects ) : 
_name(name), _effects(effects) {}

std::string ASpell::getName(void) const
{
  return _name;
}

std::string ASpell::getEffects(void) const
{
  return _effects;
}

void ASpell::setEffects(const std::string& effects)
{
  _effects = effects;
}

void  ASpell::launch(const ATarget& target) const
{
  target.getHitBySpell(*this);
}

ASpell::~ASpell(){}
