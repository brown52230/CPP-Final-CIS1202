#ifndef MUSIC_H
#define MUSIC_H

#include "Item.h"

class Music : public Item
{
    private:
        string artist;
        string album;
        int year;
    public:
        Music();
        Music(string, int, itemType, double, string, string, int);

        void displayItem()
        {
            Item::displayItem();
            cout << "Artist: " << artist << endl;
            cout << "Album: " << album << endl;
            cout << "Year: " << year << endl;
        }

        void setArtist(string);
        void setAlbum(string);
        void setYear(int);

        string getArtist()
        { return artist; }
        string getAlbum()
        { return album; }
        int getYear()
        { return year; }
};

#endif