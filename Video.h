#ifndef VIDEO_H
#define VIDEO_H

#include "Item.h"

class Video : public Item
{
    private:
        string date;
        int runTime;
    public:
        Video();
        Video(string, int, itemType, double, string, int);

        void displayItem()
        {
            Item::displayItem();
            cout << "Date: " << date << endl;
            cout << "Run Time: " << runTime << " minutes" << endl;
        }

        void setDate(string);
        void setRunTime(int);

        string getDate()
        { return date; }

        int getRunTime()
        { return runTime; }
};

#endif