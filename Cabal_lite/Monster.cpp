#include "Monster.h"






Monster::Monster(std::string _name) : Entity(_name)
{
}

Monster::Monster(const Monster & monster) : Entity(monster)
{
}

Monster & Monster::operator=(const Monster & monster)
{
	Entity::operator=(monster);
	return *this;
}

Monster::~Monster()
{
}
