#pragma once
#include <string>
#include "Type.h"
#include "AbilityNames.h"
class Abilities;
class Monster;
class Hero
{
protected:
	std::string name;
	int maxHP, currentHP,level,currentXP,levelUpXP,armor,abilityPower,attackPower;
	HeroAbilityNames* abilities;
	Race race;
public:
	Hero();
	~Hero();

	virtual bool castAbility(HeroAbilityNames ability, Monster& monster)=0;
	virtual bool castAbility(HeroAbilityNames ability, Hero& monster) = 0;
};

