#include "Debuff.h"
#include <cstdlib>
#include <ctime>
#include <cmath>




int Debuff::tick()
{

	int maxTick, minTick;
	srand(time(NULL));
	if (durationRemaining == 1) { 
		durationRemaining = 0;
		return ceil(remainingDamage);
	}
	else if(durationRemaining>1) {
		maxTick = remainingDamage / durationRemaining;
		minTick = maxTick / 3;
		tickDamage = rand() % maxTick + minTick;
		durationRemaining -= 1;
		return tickDamage;
	}
	
}

Debuff::Debuff(Entity & caster) : Ability(caster)
{
	initialDuration = 0;
	tickDamage = 0;
	remainingDamage = damageOutput;
	durationRemaining = initialDuration;
}

Debuff::Debuff(const Debuff & debuff) : Ability(debuff)
{
	initialDuration = debuff.initialDuration;
	tickDamage = debuff.tickDamage;
	remainingDamage = debuff.remainingDamage;
	durationRemaining = debuff.durationRemaining;
}

Debuff & Debuff::operator=(const Debuff & debuff)
{
	Ability::operator=(debuff);
	initialDuration = debuff.initialDuration;
	tickDamage = debuff.tickDamage;
	remainingDamage = debuff.remainingDamage;
	durationRemaining = debuff.durationRemaining;
	return *this;
}

Debuff::~Debuff()
{
}

int Debuff::getInitialDuration() const
{
	return initialDuration;
}

void Debuff::setInitialDuration(int _initialDuration)
{
	initialDuration = _initialDuration;
}

int Debuff::getDurationRemaining() const
{
	return durationRemaining;
}

void Debuff::setDurationRemaining(int _durationRemaining)
{
	durationRemaining = _durationRemaining;
}

double Debuff::getTickDamage() const
{
	return tickDamage;
}

void Debuff::setTickDamage(double _tickDamage)
{
	tickDamage = _tickDamage;
}

double Debuff::getRemainingDamage() const
{
	return remainingDamage;
}

void Debuff::setRemainingDamage(double _remainingDamage)
{
	remainingDamage = _remainingDamage;
}
