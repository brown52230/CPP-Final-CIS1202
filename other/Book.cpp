#include "Book.h"

Book::Book()
{
    author = "";
    publisher = "";
    yearPublished = 0;
}

Book::Book(string n, int s, itemType t, double p, string a, string pu, int y) : Item(n, s, t, p)
{
    author = a;
    publisher = pu;
    yearPublished = y;
}

void Book::setAuthor(string a) 
{ author = a; }
void Book::setPublisher(string pu)
{ publisher = pu; }
void Book::setYearPublished(int y)
{ yearPublished = y; }
