#pragma once
#include <string>
#include "Type.h"
#include "Entity.h"
class Abilities;
class Monster;
class Hero : public Entity
{
protected:

	int currentXP, levelUpXP ;
	
	const Race race;
	int calculateLevelUpXP(int currentLevel)const;
public:
	

	Hero(std::string _name, Race _race = Human);
	Hero(const Hero& hero);
	Hero& operator=(const Hero& hero);
	~Hero();

	


	int getCurrentXP()const;
	void setCurrentXP(int _currentXP);
	int getLevelUpXP()const;
	void setLevelUpXP(int _levelUpXP);
	
	
	

	

};
