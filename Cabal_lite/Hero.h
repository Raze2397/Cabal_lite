#pragma once
#include <string>
#include "Type.h"
#include "Entity.h"
class Abilities;
class Monster;
class Hero : public Entity
{
protected:

	int currentXP, levelUpXP, armor, abilityPower, attackPower, knownAbilities, maxKnownAbilities;
	AbilityNames* abilities;
	const Race race;
	int calculateLevelUpXP(int currentLevel)const;
public:
	const int DEFAULT_MAX_KNOWN_ABILITIES = 50;

	Hero(std::string _name, Race _race = Human);
	Hero(const Hero& hero);
	Hero& operator=(const Hero& hero);
	~Hero();

	void increaseMaxKnownAbilities();


	int getCurrentXP()const;
	void setCurrentXP(int _currentXP);
	int getLevelUpXP()const;
	void setLevelUpXP(int _levelUpXP);
	int getArmor()const;
	void setArmor(int _armor);
	int getAbilityPower()const;
	void setAbilityPower(int _abilityPower);
	int getAttackPower()const;
	void setAttackPower(int _attackPower);
	int getKnownAbilities()const;
	void setKnownAbilities(int _knownAbilities);
	int getMaxKnownAbilities()const;
	void setMaxKnownAbilities(int _maxKnownAbilities);
	AbilityNames* getAbilities()const;
	void setAbilities(AbilityNames* _abilities);

	virtual bool castAbility(AbilityNames ability, Entity& target) = 0;

};
