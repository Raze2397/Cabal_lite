#include "BasicAttack.h"
#include "Entity.h"
#include "Hero.h"
#include <ctime>
#include <cstdlib>


BasicAttack::BasicAttack(Entity & _caster) : Ability(_caster)
{
	srand(time(NULL));
	int baseDamage = rand() % 5 + 1;
	damageOutput = baseDamage + _caster.getAttackPower();
	cost = 5;
	
}

BasicAttack::BasicAttack(const BasicAttack & basic) : Ability(basic)
{

}

class BasicAttack & BasicAttack::operator=(const BasicAttack & basic)
{
	Ability::operator=(basic);
	return *this;
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
