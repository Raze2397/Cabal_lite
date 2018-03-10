#pragma once
#include <string>
#include "Type.h"
#include "AbilityNames.h"
class Abilities;
class Hero;
class Monster
{
private:
	std::string name;
	int maxHP, currentHP, level, armor, abilityPower, attackPower;
	MonsterAbilityNames* abilities;
public:
	Monster();
	~Monster();
	virtual bool castAbility(MonsterAbilityNames ability, Monster& monster) = 0;
	virtual bool castAbility(MonsterAbilityNames ability, Hero& monster) = 0;
};

