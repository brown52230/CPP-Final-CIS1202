#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

enum itemType {OTHER, VIDEO, MUSIC, GAME, BOOK};

class Item
{
    private:
        string name;
        int stock;
        itemType type;
        double price;
    public:
        Item();
        Item(string, int, itemType, double);

        void displayItem()
        {
            cout << "Name: " << name << endl;
            cout << "Stock: " << stock << endl;
            cout << "Type: ";
            switch(type)
            {
                case VIDEO:
                    cout << "Video" << endl;
                    break;
                case MUSIC:
                    cout << "Music" << endl;
                    break;
                case GAME:
                    cout << "Game" << endl;
                    break;
                case BOOK:
                    cout << "Book" << endl;
                    break;
                default:
                    cout << "Other" << endl;
                    break;
            }
            cout << "Price: $" << price << endl;
        }

        void setName(string);
        void setStock(int);
        void setType(itemType);
        void setPrice(double);

        string getName()
        { return name; }
        int getStock()
        { return stock; }
        itemType getType()
        { return type; }
        double getPrice()
        { return price; }  

        void addStock(int);
        void removeStock(int);
};

#endif