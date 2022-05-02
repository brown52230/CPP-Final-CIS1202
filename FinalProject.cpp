// Sam Brown
// CIS 1202
// April 25, 2022

#include "SamPersonalLibrary.h"

#include "Item.h"

vector<Item> createList();
void displayList(vector<Item>);
void displayItem(vector<Item>);;
void addItem(vector<Item> &list);
void addCart(vector<Item>&, vector<Item>);
int searchList(vector<Item>);
void viewCart(vector<Item>);
int menu();

int main(){
    int choice = 0;
    vector<Item> items = createList();
    vector<Item> cart;
    do{
        choice = menu();
        switch(choice){
            case 1: displayList(items);
                break;
            case 2: displayItem(items);
                break;
            case 3: addItem(items);
                break;
            case 4: addCart(cart, items);
                break;
            case 5: viewCart(cart);
                break;
        }
    } while (choice != 6);

    endProgram();
}

int menu(){
    cout << "1. Display all items" << endl
         << "2. Display Specific Item" << endl
         << "3. Add Item" << endl
         << "4. Add to Cart" << endl
         << "5. View Cart" << endl
         << "6. Exit" << endl;
    return validateInteger(">> ", 1, 6);
}

vector<Item> createList(){
    vector<Item> list;

    Item item("Item", 5, OTHER, 10.0);
    Item video("Video", 4, VIDEO, 9.0);
    Item game("Game", 3, GAME, 9.0);
    Item book("Book", 2, BOOK, 7.0);
    Item music("Music", 1, MUSIC, 6.0);

    list.push_back(item);
    list.push_back(video);
    list.push_back(game);
    list.push_back(book);
    list.push_back(music);

    return list;
}

void displayList(vector<Item> list){
    cout << endl;
    for(int i = 0; i < list.size(); i++){
        list[i].displayItem(); cout << endl;
    }
}

void addItem(vector<Item> &list){
    Item item;
    string name;
    int temp = -1;
    itemType type;

    cout << "\nEnter the name of the item: ";
    cin.ignore();
    getline(cin, name);
    item.setName(name);

    cout << "Enter the stock of the item: ";
    item.setStock(validateInteger(">> "));

    cout << "Enter the type of the item: " << endl
         << "1. Video" << endl
         << "2. Music" << endl
         << "3. Game" << endl
         << "4. Book" << endl
         << "5. Other" << endl;
    temp = (validateInteger(">> ", 1, 5));
    type = static_cast<itemType>(temp);
    item.setType(type);

    cout << "Enter the price of the item: ";
    item.setPrice(validateDouble(">> "));
    
    cout << endl;
    item.displayItem();
    cout << endl;

    list.push_back(item);
}

int searchList(vector<Item> list, string search){
    bool found = false;
    for (int i = 0; i < list.size(); i++){
        if (list[i].getName() == search){
            return i;
        }
    }
    return -1;
}

void displayItem(vector<Item> list){
    cout << "\nEnter the name of the item: ";
    Item item;
    string search;
    cin.ignore();
    getline(cin, search);

    cout << endl;
    int index = searchList(list, search);
    if (index != -1){
        item = list[index];
        item.displayItem();
    }
    else{
        cout << "\nItem not found." << endl;
    }
    cout << endl;
}

void addCart(vector<Item> &cart, vector<Item> list){
    Item item;
    string search;
    cout << "\nEnter the name of the item: ";
    cin.ignore();
    getline(cin, search);

    int index = searchList(list, search);
    if (index != -1){
        item = list[index];
        item.displayItem();
    }
    else{
        cout << "\nItem not found." << endl;
        return;
    }

    cout << "Add this to cart? (y/n): ";
    cout << endl;
    char choice = validateYesNo(">> ");
    if (choice == 'Y'){
        cart.push_back(list[index]);
    }
}

void viewCart(vector<Item> cart){
    double total = 0;
    cout << endl;
    for (int i = 0; i < cart.size(); i++){
        cart[i].displayItem();
        total += cart[i].getPrice();
    }
    cout << endl;
    cout << "Total: $" << total << endl;
}