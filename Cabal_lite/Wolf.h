#pragma once
#include "Monster.h"
class Wolf :
	public Monster
{
protected:
	int maxEnergy,currentEnergy;
public:
	Wolf(std::string _name);
	Wolf(const Wolf& wolf);
	Wolf& operator=(const Wolf & wolf);
	~Wolf();
};

