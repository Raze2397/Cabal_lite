#include "Hero.h"



int Hero::calculateLevelUpXP(int currentLevel) const
{
	return currentLevel * 100;
}

Hero::Hero(std::string _name, Race _race) : Entity(_name) , race(_race)
{
	
	currentXP = 0;
	levelUpXP = calculateLevelUpXP(level);
	armor = 0;
	abilityPower = 0;
	attackPower = 0;
	knownAbilities = 1;
	maxKnownAbilities = DEFAULT_MAX_KNOWN_ABILITIES;
	abilities = new AbilityNames[DEFAULT_MAX_KNOWN_ABILITIES]();
}

Hero::Hero(const Hero & hero) : Entity(hero.name) , race(hero.race)
{
	
	currentXP = hero.currentXP;
	levelUpXP = hero.calculateLevelUpXP(hero.level);
	armor = hero.armor;
	abilityPower = hero.abilityPower;
	attackPower = hero.attackPower;
	knownAbilities = hero.knownAbilities;
	maxKnownAbilities = hero.maxKnownAbilities;
	abilities = new AbilityNames[hero.maxKnownAbilities]();
	for (int counter = 0; counter < hero.knownAbilities;counter++) {
		abilities[counter] = hero.abilities[counter];
	}

}

Hero & Hero::operator=(const Hero & hero)
{
	Entity::operator=(hero);
	currentXP = hero.currentXP;
	levelUpXP = hero.calculateLevelUpXP(hero.level);
	armor = hero.armor;
	abilityPower = hero.abilityPower;
	attackPower = hero.attackPower;
	knownAbilities = hero.knownAbilities;
	maxKnownAbilities = hero.maxKnownAbilities;
	abilities = new AbilityNames[hero.maxKnownAbilities]();
	for (int counter = 0; counter < hero.knownAbilities; counter++) {
		abilities[counter] = hero.abilities[counter];
	}
	return *this;
}


Hero::~Hero()
{
	delete[] abilities;
}

void Hero::increaseMaxKnownAbilities()
{
	AbilityNames* newAbilities = new AbilityNames[maxKnownAbilities + DEFAULT_MAX_KNOWN_ABILITIES]();
	for (int counter = 0; counter < knownAbilities; counter++) {
		newAbilities[counter] = abilities[counter];
	}
	delete[] abilities;
	abilities = newAbilities;
	maxKnownAbilities = maxKnownAbilities + DEFAULT_MAX_KNOWN_ABILITIES;
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

int Hero::getArmor() const
{
	return armor;
}

void Hero::setArmor(int _armor)
{
	armor = _armor;
}

int Hero::getAbilityPower() const
{
	return abilityPower;
}

void Hero::setAbilityPower(int _abilityPower)
{
	abilityPower = _abilityPower;
}

int Hero::getAttackPower() const
{
	return attackPower;
}

void Hero::setAttackPower(int _attackPower)
{
	attackPower = _attackPower;
}

int Hero::getKnownAbilities() const
{
	return knownAbilities;
}

void Hero::setKnownAbilities(int _knownAbilities)
{
	knownAbilities = _knownAbilities;
}

int Hero::getMaxKnownAbilities() const
{
	return maxKnownAbilities;
}

void Hero::setMaxKnownAbilities(int _maxKnownAbilities)
{
	maxKnownAbilities = _maxKnownAbilities;
}

AbilityNames * Hero::getAbilities() const
{
	return abilities;
}

void Hero::setAbilities(AbilityNames * _abilities)
{
	abilities = _abilities;
}
