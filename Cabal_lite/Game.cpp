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

void Game::init() {
	Knight* knight = new Knight("Ivan", Human);
	Wolf* wolf = new Wolf("Bad Wolf");
	knight->castAbility(BasicAttack, *wolf);
	wolf->castAbility(Bite, *knight);
	Entity p();
}

int main() {
	Game* game1 = new Game();
	game1->init();
	return 0;
};


