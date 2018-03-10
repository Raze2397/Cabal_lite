#include "Bite.h"
#include <ctime>
#include <cstdlib>
#include "Monster.h"




Bite::Bite(Entity & caster)
{
	srand(time(NULL));
	int baseDamage = rand() % 3 + 1;
	damageOutput = baseDamage + caster.getAttackPower();
	delta = 0;
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
