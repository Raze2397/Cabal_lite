#include "Entity.h"



Entity::Entity(std::string _name) : name(_name)
{
	maxHP = 100;
	currentHP = 100;
	level = 1;
}

Entity::Entity(const Entity & entity) : name(entity.name)
{
	maxHP = entity.maxHP;
	currentHP = entity.currentHP;
	level = entity.level;
}

Entity & Entity::operator=(const Entity & entity)
{
	maxHP = entity.maxHP;
	currentHP = entity.currentHP;
	level = entity.level;
	return *this;
}


Entity::~Entity()
{
}

int Entity::getMaxHP() const
{
	return maxHP;
}

void Entity::setMaxHP(int _maxHP)
{
	maxHP = _maxHP;
}

int Entity::getCurrentHP() const
{
	return currentHP;
}

void Entity::setCurrentHP(int _currentHP)
{
	currentHP = _currentHP;
}

int Entity::getLevel() const
{
	return level;
}

void Entity ::setLevel(int _level)
{
	level = _level;
}