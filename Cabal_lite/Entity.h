#pragma once
#include <string>
#include "AbilityNames.h";
class Entity
{
protected:
	const std::string name;
	int maxHP, currentHP, level;
public:
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

	virtual bool castAbility(AbilityNames ability, Entity& target) = 0;
};

