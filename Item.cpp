#include "Item.h"

Item::Item()
{
    name = "";
    stock = 0;
    type = OTHER;
    price = 0.0;
}

Item::Item(string n, int s, itemType t, double p)
{
    name = n;
    stock = s;
    type = t;
    price = p;
}

void Item::setName(string n)
{ name = n; }
void Item::setStock(int s)
{ stock = s; }
void Item::setType(itemType t)
{ type = t; }
void Item::setPrice(double p)
{ price = p; }

void Item::addStock(int s)
{ stock += s; }

void Item::removeStock(int s)
{ stock -= s; }