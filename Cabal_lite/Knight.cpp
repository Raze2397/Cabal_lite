#include "Knight.h"
#include "BasicAttack.h"






Knight::Knight(std::string _name, Race _race) : Hero(_name,_race)
{
	currentRage = 0;
	maxRage = 10;
	abilities[1] = Charge;
}

Knight::Knight(const Knight & knight) : Hero(knight)
{
	currentRage = knight.currentRage;
	maxRage = knight.maxRage;
}

Knight & Knight::operator=(const Knight & knight)
{
	Hero::operator=(knight);
	currentRage = knight.currentRage;
	maxRage = knight.maxRage;
	return *this;
}


Knight::~Knight()
{
}
