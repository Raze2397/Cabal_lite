#pragma once
#include <string>
#include "Type.h"
#include "AbilityNames.h"
#include "Entity.h"
class Abilities;
class Hero;
class Monster : public Entity
{
private:
	
public:
	Monster(std::string _name = "Unknown");
	Monster(const Monster& monster);
	Monster& operator=(const Monster& monster);
	~Monster();
	
};

