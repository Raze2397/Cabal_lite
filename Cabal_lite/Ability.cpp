#include "Ability.h"






/*Ability::Ability(Entity & caster)
{
	damageOutput = 0;
	delta = 0;
}






Ability::~Ability()
{
}
*/

Ability & Ability::operator=(const Ability & ability)
{
	damageOutput = ability.damageOutput;
	return *this;
}
