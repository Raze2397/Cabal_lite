#pragma once
#include "Hero.h"
#include <string>
class Knight :
	public Hero
{
protected:
	int currentRage,maxRage;
public:
	bool castAbility(AbilityNames ability, Entity& target);
	Knight(std::string _name, Race _race);
	Knight(const Knight& knight);
	Knight& operator=(const Knight& knight);
	~Knight();
};

