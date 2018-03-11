#pragma once
#include "Ability.h"
class Monster;
class Bite :
	public Ability
{
protected:

public:
	Bite(Entity& caster);
	Bite(const Bite& bite);
	Bite& operator=(const Bite& bite);
	bool castAt(Entity& target);
	~Bite();
};

