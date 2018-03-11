#pragma once
#include "Ability.h"
class Debuff :
	public Ability
{
protected:
	int initialDuration,durationRemaining;
	double tickDamage, remainingDamage;

public:
	
	virtual int tick();
	Debuff(Entity& caster);
	Debuff(const Debuff& debuff);
	Debuff& operator=(const Debuff& debuff);
	~Debuff();
	int getInitialDuration()const;
	void setInitialDuration(int _initialDuration);
	int getDurationRemaining()const;
	void setDurationRemaining(int _durationRemaining);
	double getTickDamage()const;
	void setTickDamage(double _tickDamage);
	double getRemainingDamage()const;
	void setRemainingDamage(double _remainingDamage);
};

