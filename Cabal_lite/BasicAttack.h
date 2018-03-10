#pragma once
#include "Ability.h"
class Hero;
class BasicAttack :
	public Ability
{
public:
	BasicAttack(Entity& _caster);
	~BasicAttack();
	bool castAt(Entity& target);
};

