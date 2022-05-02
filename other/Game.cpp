#include "Game.h"

Game::Game()
{
    developer = "";
    platform = "";
    year = 0;
}
Game::Game(string n, int s, itemType t, double p, string d, string pl, int y) : Item(n, s, t, p)
{
    developer = d;
    platform = pl;
    year = y;
}

void Game::setDeveloper(string d)
{ developer = d; }
void Game::setPlatform(string p)
{ platform = p; }
void Game::setYear(int y)
{ year = y; }