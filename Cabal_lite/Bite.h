#pragma once
#include "Ability.h"
class Monster;
class Bite :
	public Ability
{
protected:

public:
	Bite(Entity& caster);
	bool castAt(Entity& target);
	~Bite();
};

