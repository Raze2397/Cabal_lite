#pragma once
#include <string>
#include "AbilityNames.h";
class Entity
{
protected:
	const std::string name;
	int maxHP, currentHP, level, armor, abilityPower, attackPower , knownAbilities, maxKnownAbilities;
	AbilityNames* abilities;
	const int DEFAULT_MAX_KNOWN_ABILITIES = 50;
public:
	void increaseMaxKnownAbilities();
	Entity(std::string _name = "Unknown");
	Entity(const Entity& entity);
	Entity& operator=(const Entity& entity);
	~Entity();
	int getMaxHP()const;
	void setMaxHP(int _maxHP);
	int getCurrentHP()const;
	void setCurrentHP(int _currentHP);
	int getLevel()const;
	void setLevel(int _level);
	int getArmor()const;
	void setArmor(int _armor);
	int getAbilityPower()const;
	void setAbilityPower(int _abilityPower);
	int getAttackPower()const;
	void setAttackPower(int _attackPower);
	AbilityNames* getAbilities()const;
	void setAbilities(AbilityNames* _abilities);
	int getKnownAbilities()const;
	void setKnownAbilities(int _knownAbilities);
	int getMaxKnownAbilities()const;
	void setMaxKnownAbilities(int _maxKnownAbilities);
	virtual bool castAbility(AbilityNames ability, Entity& target);
};

