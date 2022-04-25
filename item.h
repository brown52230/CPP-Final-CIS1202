#ifdef ITEM_H
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
        void setName(string n)
        { name = n; }
        void setStock(int s)
        { stock = s; }
        void setType(itemType t)
        { type = s }
        void setPrice(double p)
        { price = p; }

        string getName();
        int getStock();
        itemType getType();
        double getPrice();

        void addStock(int s);
        void removeStock(int s);
};

#endif