#pragma once
#include "Ability.h"
class Charge :
	public Ability
{
public:
	bool castAt(Entity& target);
	Charge(Entity& caster);
	Charge(const Charge& charge);
	Charge& operator=(const Charge& charge);
	~Charge();
};

