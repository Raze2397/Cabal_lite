#include "Ability.h"






Ability::Ability(Entity & caster)
{
	damageOutput = 0;
	delta = 0;
	cooldownRemaining = 0;
	cost = 0;
}

Ability::Ability(const Ability & ability)
{
	damageOutput = ability.damageOutput;
	delta = ability.damageOutput;
	cooldownRemaining = ability.cooldownRemaining;
	cost = ability.cost;
}






Ability::~Ability()
{
}


Ability & Ability::operator=(const Ability & ability)
{
	damageOutput = ability.damageOutput;
	delta = ability.damageOutput;
	cooldownRemaining = ability.cooldownRemaining;
	cost = ability.cost;
	return *this;
}

int Ability::getCooldownRemaining() const
{
	return cooldownRemaining;
}

void Ability::setCooldownRemaining(int _cooldownRemaining)
{
	cooldownRemaining = _cooldownRemaining;
}

int Ability::getCost() const
{
	return cost;
}

void Ability::setCost(int _cost)
{
	cost = _cost;
}
