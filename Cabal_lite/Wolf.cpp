#include "Wolf.h"






Wolf::Wolf(std::string _name) : Monster(_name)
{
	knownAbilities = 1;
	maxEnergy = 100;
	currentEnergy = 100;
	abilities[0] = Bite;
}

Wolf::Wolf(const Wolf & wolf) : Monster(wolf)
{
	maxEnergy = wolf.maxEnergy;
	currentEnergy = wolf.currentEnergy;
}

Wolf & Wolf::operator=(const Wolf & wolf)
{
	Monster::operator=(wolf);
	return *this;
}

Wolf::~Wolf()
{
}
