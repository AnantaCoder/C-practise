#include <bits/stdc++.h>
using namespace std;

class Item {
    private:
        int code;
        double price;

    public:
        // Constructor with a member initializer list
        Item(int code, double price) : code(code), price(price) {}

        // Getter functions to access private members
        int getCode() const {
            return code;
        }

        double getPrice() const {
            return price;
        }
};

class ShoppingList {
    private:
        vector<Item> items;

    public:
        // Member function to add an item
        void addItem(int code, double price) {
            items.push_back(Item(code, price));
            cout << "The item with the code " << code << " is added with price " << price << ".\n";
        }

        // Display function to show the list and total value
        void display() {
            double totalValue = 0;
            cout << "\nShopping List:\n";
            for (const auto &item : items) {
                cout << "Code: " << item.getCode() << " - Price: " << item.getPrice() << endl;
                totalValue += item.getPrice();
            }
            cout << "Total Order Value: " << totalValue << endl;
        }

        void deleteitem(int code){
            bool found = false;
            for(auto it = items.begin(); it != items.end();++it){
                if(it-> getCode() == code){
                    items.erase(it);
                    found =true;
                    cout<< "Item with the code " << code<<" is deleted successfully"<<endl;
                    break;
                    
                }
            }
            if(!found){
                cout<< "Item not found";
            }
        }
};

int main() {
    ShoppingList shoppingList;
    shoppingList.addItem(101, 29.99);
    shoppingList.addItem(102, 45.50);
    shoppingList.addItem(103, 15.75);
    shoppingList.deleteitem(102);
    shoppingList.deleteitem(101);

    shoppingList.display();

    return 0;
}
