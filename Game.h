#ifndef GAME_H
#define GAME_H

#include "Item.h"

class Game : public Item
{
    private:
        string developer;
        string platform;
        int year;
    public:
        Game();
        Game(string, int, itemType, double, string, string, int);

        void displayItem()
        {
            Item::displayItem();
            cout << "Developer: " << developer << endl;
            cout << "Platform: " << platform << endl;
            cout << "Year: " << year << endl;
        }

        void setDeveloper(string);
        void setPlatform(string);
        void setYear(int);

        string getDeveloper()
        { return developer; }
        string getPlatform()
        { return platform; }
        int getYear()
        { return year; }
};

#endif