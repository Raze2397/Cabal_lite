#include "Ability.h"






/*Ability::Ability(Entity & caster)
{
	
}

Ability::Ability(const Ability & ability)
{
}





Ability::~Ability()
{
}
*/

Ability & Ability::operator=(const Ability & ability)
{
	damageOutput = ability.damageOutput;
	caster = ability.caster;
	return *this;
}
