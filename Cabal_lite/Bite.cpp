#include "Bite.h"
#include <ctime>
#include <cstdlib>
#include "Monster.h"




Bite::Bite(Entity & caster) : Ability(caster)
{
	srand(time(NULL));
	int baseDamage = rand() % 3 + 1;
	damageOutput = baseDamage + caster.getAttackPower();
	cost = 5;
	
}

Bite::Bite(const Bite & bite) : Ability(bite)
{
}

class Bite & Bite::operator=(const Bite & bite)
{
	Ability::operator=(bite);
	return *this;
}

bool Bite::castAt(Entity & target)
{
	delta = damageOutput - (target.getArmor() * 5);
	if (delta > 0) {
		target.setCurrentHP(target.getCurrentHP() - delta);
		return true;
	}
	else return true;
	return false;
}

Bite::~Bite()
{
}
