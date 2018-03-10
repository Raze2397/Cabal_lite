#pragma once
class Entity;
class Ability
{
protected:
	int damageOutput;
	Entity* caster;
public:
	/*
	Ability(Entity& caster);
	Ability(const Ability& ability);
	
	
	~Ability();
	*/
	virtual bool castAt(Entity& target) = 0;
	Ability& operator=(const Ability& ability);
};

