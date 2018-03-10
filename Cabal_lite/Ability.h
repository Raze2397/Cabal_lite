#pragma once
class Entity;
class Ability
{
protected:
	int damageOutput,delta;
	
public:
	
	//Ability(Entity& caster);
	
	
	//~Ability();
	
	virtual bool castAt(Entity& target) = 0;
	Ability& operator=(const Ability& ability);
};

