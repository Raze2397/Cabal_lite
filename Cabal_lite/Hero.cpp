#include "Hero.h"



int Hero::calculateLevelUpXP(int currentLevel) const
{
	return currentLevel * 100;
}

Hero::Hero(std::string _name, Race _race) : Entity(_name) , race(_race)
{
	
	currentXP = 0;
	levelUpXP = calculateLevelUpXP(level);
	knownAbilities = 1;
	abilities[0] = BasicAttack;
	
}

Hero::Hero(const Hero & hero) : Entity(hero.name) , race(hero.race)
{
	
	currentXP = hero.currentXP;
	levelUpXP = hero.calculateLevelUpXP(hero.level);
	
	

}

Hero & Hero::operator=(const Hero & hero)
{
	Entity::operator=(hero);
	currentXP = hero.currentXP;
	levelUpXP = hero.calculateLevelUpXP(hero.level);
	
	
	return *this;
}


Hero::~Hero()
{
	
}





int Hero::getCurrentXP() const
{
	return currentXP;
}

void Hero::setCurrentXP(int _currentXP)
{
	currentXP = _currentXP;
}

int Hero::getLevelUpXP() const
{
	return levelUpXP;
}

void Hero::setLevelUpXP(int _levelUpXP)
{
	levelUpXP = _levelUpXP;
}



