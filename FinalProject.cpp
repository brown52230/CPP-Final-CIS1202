// Sam Brown
// CIS 1202
// April 25, 2022

#include "SamPersonalLibrary.h"

#include "Item.h"
#include "Video.h"
#include "Music.h"
#include "Game.h"
#include "Book.h"

fstream createFile();
void displayFile(fstream&);
int menu();

int main(){
    fstream file = createFile();
    
    int choice = 0;

    do{
        switch(choice){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
        }

    } while (choice != 5);

    endProgram();
}

int menu(){
    int choice;
    cout << "1. Display all items" << endl
         << "2. Display Specific Item" << endl
         << "3. Add Item to Cart" << endl
         << "4. View Cart" << endl
         << "5. Exit" << endl;
    return validateInteger(">> ", 1, 5);
}

fstream createFile(){
    fstream file;

    file.open("inventory.dat", ios::in | ios::out | ios::binary | ios::trunc);
    
    if (!file){
        cout << "Fatal: File could not be opened." << endl;
        file.close();
        endProgram();
    }

    else;

    cout << "File opened successfully." << endl;

    Item item("Item Name", 5, OTHER, 10.0);
    Video video("Video Name", 4, VIDEO, 9.0, "Date", 120);
    Music music("Music Name", 3, MUSIC, 8.0, "Artist", "Album", 2020);
    Game game("Game Name", 2, GAME, 7.0, "Publisher", "Title", 2020);
    Book book("Book Name", 1, BOOK, 8.0, "Author", "Title", 2020);

    file.write(reinterpret_cast<char*>(&item), sizeof(item));
    file.write(reinterpret_cast<char*>(&video), sizeof(video));
    file.write(reinterpret_cast<char*>(&music), sizeof(music));
    file.write(reinterpret_cast<char*>(&game), sizeof(game));
    file.write(reinterpret_cast<char*>(&book), sizeof(book));

    return file;
}

void displayFile(fstream& file){
    Item item;
    Video video;
    Music music;
    Game game;
    Book book;

    file.clear(ios::eofbit);
    file.seekg(0L, ios::beg);

    file.read(reinterpret_cast<char*>(&item), sizeof(item));
    file.read(reinterpret_cast<char*>(&video), sizeof(video));
    file.read(reinterpret_cast<char*>(&music), sizeof(music));
    file.read(reinterpret_cast<char*>(&game), sizeof(game));
    file.read(reinterpret_cast<char*>(&book), sizeof(book));

    item.displayItem();
    cout << endl;
    video.displayItem();
    cout << endl;
    music.displayItem();
    cout << endl;
    game.displayItem();
    cout << endl;
    book.displayItem();
    cout << endl;
}