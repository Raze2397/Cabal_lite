#include "Game.h"
#include "Hero.h"
#include "Monster.h"
#include "Knight.h"
#include "Wolf.h"

Game::Game()
{
}


Game::~Game()
{
}

int main() {
	Knight* knight = new Knight("Ivan", Human);
	Wolf* wolf = new Wolf("Bad Wolf");
	knight->castAbility(BasicAttack, *wolf);
	wolf->castAbility(Bite, *knight);
	return 0;
};


