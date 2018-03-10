#include "BasicAttack.h"
#include "Entity.h"
#include "Hero.h"
#include <ctime>
#include <cstdlib>


BasicAttack::BasicAttack(Entity & _caster)
{
	srand(time(NULL));
	int baseDamage = rand() % 5 + 1;
	damageOutput = baseDamage + _caster.getAttackPower();
	delta = 0;
}

BasicAttack::~BasicAttack()
{
}

bool BasicAttack::castAt(Entity & target)
{
	delta = damageOutput - (target.getArmor() * 5);
	if (delta > 0) {
		target.setCurrentHP(target.getCurrentHP() - delta);
		return true;
	}
	else return true;
	return false;
}
