#pragma once
#include "Hero.h"
class Knight :
	public Hero
{
protected:
	int currentRage,maxRage;
public:
	Knight();
	~Knight();
};

