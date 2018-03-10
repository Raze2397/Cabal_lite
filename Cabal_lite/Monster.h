#pragma once
#include <string>
#include "Type.h"
#include "AbilityNames.h"
#include "Entity.h"
class Abilities;
class Hero;
class Monster : public Entity
{
private:
	
	int armor, abilityPower, attackPower;
	AbilityNames* abilities;
public:
	Monster();
	~Monster();
	virtual bool castAbility(AbilityNames ability, Monster& monster) = 0;
	virtual bool castAbility(AbilityNames ability, Hero& hero) = 0;
};

