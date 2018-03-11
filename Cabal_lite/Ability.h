#pragma once
class Entity;
class Ability
{
protected:
	double damageOutput;
    double delta;
	int cooldownRemaining;
	int cost;
	
public:
	
	Ability(Entity& caster);
	Ability(const Ability& ability);
	
	~Ability();
	
	virtual bool castAt(Entity& target) = 0;
	Ability& operator=(const Ability& ability);
	int getCooldownRemaining()const;
	void setCooldownRemaining(int _cooldownRemaining);
	int getCost()const;
	void setCost(int _cost);
};

