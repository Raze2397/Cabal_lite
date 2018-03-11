#include "Charge.h"
#include <cstdlib>
#include <ctime>
#include"Entity.h"
#include <cmath>






bool Charge::castAt(Entity & target)
{
	delta = ceil(damageOutput - (target.getArmor() * 2.5));
	if (delta > 0) {
		target.setCurrentHP(target.getCurrentHP() - delta);
		return true;
	}
	else return true;
	return false;
}

Charge::Charge(Entity & caster) : Ability(caster)
{
	srand(time(NULL));
	int baseDamage = rand() % 8 + 3;
	damageOutput = baseDamage + 1.5 * caster.getAttackPower();
	cost = 20;
	
}

Charge::Charge(const Charge & charge) : Ability(charge)
{
}

class Charge & Charge::operator=(const Charge & charge)
{
	Ability::operator=(charge);
	return *this;
}

Charge::~Charge()
{
}
