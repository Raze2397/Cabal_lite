#include "Entity.h"
#include "BasicAttack.h"
#include "Bite.h"

Entity::Entity(std::string _name) : name(_name)
{
	maxHP = 100;
	currentHP = 100;
	level = 1;
	armor = 0;
	abilityPower = 0;
	attackPower = 0;
	knownAbilities = 0;
	maxKnownAbilities = DEFAULT_MAX_KNOWN_ABILITIES;
	abilities = new AbilityNames[DEFAULT_MAX_KNOWN_ABILITIES]();
	
}

Entity::Entity(const Entity & entity) : name(entity.name)
{
	maxHP = entity.maxHP;
	currentHP = entity.currentHP;
	level = entity.level;
	armor = entity.armor;
	abilityPower = entity.abilityPower;
	attackPower = entity.attackPower;
	knownAbilities = entity.knownAbilities;
	maxKnownAbilities = entity.maxKnownAbilities;
	abilities = new AbilityNames[entity.maxKnownAbilities]();
	for (int counter = 0; counter < entity.knownAbilities; counter++) {
		abilities[counter] = entity.abilities[counter];
	}
}

Entity & Entity::operator=(const Entity & entity)
{
	maxHP = entity.maxHP;
	currentHP = entity.currentHP;
	level = entity.level;
	armor = entity.armor;
	abilityPower = entity.abilityPower;
	attackPower = entity.attackPower;
	knownAbilities = entity.knownAbilities;
	maxKnownAbilities = entity.maxKnownAbilities;
	abilities = new AbilityNames[entity.maxKnownAbilities]();
	for (int counter = 0; counter < entity.knownAbilities; counter++) {
		abilities[counter] = entity.abilities[counter];
	}
	return *this;
}

void Entity::increaseMaxKnownAbilities()
{
	AbilityNames* newAbilities = new AbilityNames[maxKnownAbilities + DEFAULT_MAX_KNOWN_ABILITIES]();
	for (int counter = 0; counter < knownAbilities; counter++) {
		newAbilities[counter] = abilities[counter];
	}
	delete[] abilities;
	abilities = newAbilities;
	maxKnownAbilities = maxKnownAbilities + DEFAULT_MAX_KNOWN_ABILITIES;
}

bool Entity::castAbility(AbilityNames ability, Entity & target)
{
	for (int counter = 0; counter < knownAbilities; counter++) {
		if (abilities[counter] == ability) {
			switch (ability) {
			case BasicAttack: {
				class BasicAttack* abl = new class BasicAttack(*this);
				abl->castAt(target);
				return true;
				break;
			}
			case Bite: {
				class Bite* abl = new class Bite(*this);
				abl->castAt(target);
				return true;
				break;
			}
			}
		}
	}
	return false;
}

Entity::~Entity()
{
	delete[] abilities;
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

int Entity::getArmor() const
{
	return armor;
}

void Entity::setArmor(int _armor)
{
	armor = _armor;
}

int Entity::getAbilityPower() const
{
	return abilityPower;
}

void Entity::setAbilityPower(int _abilityPower)
{
	abilityPower = _abilityPower;
}

int Entity::getAttackPower() const
{
	return attackPower;
}

void Entity::setAttackPower(int _attackPower)
{
	attackPower = _attackPower;
}

int Entity::getKnownAbilities() const
{
	return knownAbilities;
}

void Entity::setKnownAbilities(int _knownAbilities)
{
	knownAbilities = _knownAbilities;
}

int Entity::getMaxKnownAbilities() const
{
	return maxKnownAbilities;
}

void Entity::setMaxKnownAbilities(int _maxKnownAbilities)
{
	maxKnownAbilities = _maxKnownAbilities;
}

AbilityNames * Entity::getAbilities() const
{
	return abilities;
}

void Entity::setAbilities(AbilityNames * _abilities)
{
	abilities = _abilities;
}
