#include "Game.h"

Game::Game()
{
    developer = "";
    platform = "";
    year = 0;
}
Game::Game(string d, string p, int y) : Item(n, s, t, p)
{
    developer = d;
    platform = p;
    year = y;
}

void Game::setDeveloper(string d)
{ developer = d; }
void Game::setPlatform(string p)
{ platform = p; }
void Game::setYear(int y)
{ year = y; }