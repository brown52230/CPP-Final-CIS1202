#ifndef BOOK_H
#define BOOK_H

#include "Item.h"

class Book : public Item
{
    private:
        string author;
        string publisher;
        int yearPublished;
    public:
        Book();
        Book(string, int, itemType, double, string, string, int);

        void setAuthor(string);
        void setPublisher(string);
        void setYearPublished(int);

        string getAuthor()
        { return author; }
        string getPublisher()
        { return publisher; }
        int getYearPublished()
        { return yearPublished; }
};

#endif