#pragma once
#include "Ability.h"
class Hero;
class BasicAttack :
	public Ability
{
public:
	BasicAttack(Entity& _caster);
	BasicAttack(const BasicAttack& basic);
	BasicAttack& operator=(const BasicAttack& basic);
	~BasicAttack();
	bool castAt(Entity& target);
};

