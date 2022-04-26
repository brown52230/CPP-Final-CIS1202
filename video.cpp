#include "Video.h"

Video::Video() : Item()
{
    date = "";
    runTime = 0;
}

Video::Video(string n, int s, itemType t, double p, string d, int r) : Item(n, s, t, p)
{
    date = d;
    runTime = r;
}


void Video::setDate(string d)
{ date = d; }

void Video::setRunTime(int r)
{ runTime = r; }