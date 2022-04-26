#include "Music.h"

Music::Music()
{
    artist = "";
    album = "";
    year = 0;
}

Music::Music(string n, int s, itemType t, double p, string a, string al, int y) : Item(n, s, t, p)
{
    artist = a;
    album = al;
    year = y;
}

void Music::setArtist(string a)
{ artist = a; }

void Music::setAlbum(string al)
{ album = al; }

void Music::setYear(int y)
{ year = y; }