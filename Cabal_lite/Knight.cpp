#include "Knight.h"





bool Knight::castAbility(AbilityNames ability, Entity & target)
{
	return false;
}

Knight::Knight(std::string _name, Race _race) : Hero(_name,_race)
{
	currentRage = 0;
	maxRage = 10;
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
