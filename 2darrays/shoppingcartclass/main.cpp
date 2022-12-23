#include<iostream>
#include <fstream>
#include <string>
#include "ShoppingCart.h"
using namespace std;

// Prototypes here
int printMenuGetSelection();
void readItemsFromFile(string fileName, ShoppingCart &shoppingCart);

int main()
{
    // Declare an object of the shoppingCart class
    ShoppingCart myCart;
    CartItem cartItem;

    int choice;
    string item;
    int qty;
    double price;
    string fileName;
    int index;

    do
    {
        choice = printMenuGetSelection();
        switch (choice)
        {
            case 1:
                // ask the user to type in a filename. Then calls the function readItemsFromFile
                // readItemsFromFile has the filename and the ShoppingCart object passed into it
                // it will change the contents of the object
                cout << "Enter a filename: ";
                cin >> fileName;
                readItemsFromFile(fileName, myCart);

                break;
            case 2:
                // asks the user to enter an item, price and quantity and puts them into the 
                // shopping cart object
                cout << "Enter the item: ";
                cin >> item;
                cout << "Enter the price: ";
                cin >> price;
                cout << "Enter the quantity: ";
                cin >> qty;
                myCart.putInCart(item, price, qty);
                break;
            case 3:
                // asks the user to enter an index of the item to retrieve 
               //  after it retrieves it from the shopping cart, it calls the function
                // to print it out
                cout << "Enter index of cart item to retrieve: ";
                cin >> index;
                cartItem = myCart.getCartItem(index);
                cartItem.printItem();
                
                cout << endl;
                break;
            case 4:
                // asks the user to enter the cart item index to remove from the
                // shopping cart and removes it
                cout << "Enter index of cart item to remove: ";
                cin >> index;
                myCart.removeFromCart(index);
                break;   
            case 5:
                // prints out the total number of items in the cart
                cout << "There are a total of "<< myCart.numTotalItemsInCart() << " items in cart." << endl;
                break;
            case 6:
                // prints out the number of different items in the cart
                cout << "There are " << myCart.getNumDiffItems() << " different items in cart." << endl;
                break; 
            case 7:
                // prints the total cost of the shopping cart
                cout << "Total cost of cart: $" << myCart.costOfCart() << endl;
                break;
            case 8:
                // displays the shopping cart
                myCart.displayCart();
                break;   
            case 9:
                break;
            default:
                cout << "Invalid Selection!!!" << endl;
                break;        
        }



    }while (choice != 9);

}


int printMenuGetSelection()
{
    int choice;
    cout << "MENU CHOICES" << endl;
    cout << "1. Add to cart using file " << endl;
    cout << "2. Add to cart allowing user to enter" << endl;
    cout << "3. Retrieve an item in the cart" << endl;
    cout << "4. Remove an item in the cart" << endl;
    cout << "5. Print the total number of items in the cart" << endl;
    cout << "6. Print how many different items are in the cart" << endl;
    cout << "7. Print the total cost of the cart" << endl;
    cout << "8. Display all items in cart" << endl;
    cout << "9. Quit" << endl;
    cout << "Enter selection: ";
    cin >> choice;
    return choice;
}



// Function readItemsFromFile
// opens the file that was passed in and makes sure it opened correctly
// if it doesn't open correctly, it will exit the program.
// The function should then read the information from the file, create
// an object of the CartItem class, and then put the object into the 
// cart that was passed in
void readItemsFromFile(string fileName, ShoppingCart &shoppingCart) {
   string item;
   int qty;
   double price;
   ifstream fin;
   
   fin.open(fileName);
   
   if(!fin.is_open()) {
      cout << "File cannot be opened" << endl;
      exit(1);
   }
   
   fin >> item >> qty >> price;
   while(!fin.eof()) {
      CartItem newItem (item, price, qty);
      shoppingCart.putInCart(newItem);
      fin >> item >> qty >> price;
   }
   fin.close();
}
