#include<iostream>
#include <fstream>
#include <string>
#include "CartItem.h"

const int MAXSIZE = 50;

// Prototypes here
void loadArray(string fileName, CartItem items[], int &numE);
void printArray(CartItem items[], int numE);
void sortItems(CartItem items[], int numE);

int main()
{
    // Declare an array of CartItem
    CartItem items[MAXSIZE];
    int numE;
    int index;
    double price;
    int qty;
    string fileName;
    
    
    cout << "Enter the input file name: ";
    cin >> fileName;
    cout << endl;

    // Call the function loadArray described below. It has the fileName,
    // the array of CartItem and the number of elements (to be computed) 
    // passed into it
    loadArray(fileName, items, numE);



    // Call the function printArray described below. The array of CartItem
    // and the number of elements are passed in
    printArray(items, numE);



    // This code will change price and quantity of one item in the array
    if (numE > 0)
    {
        cout << "Enter index of item (0 - " << numE - 1 << ") to change: ";
        cin >> index;

        while (index < 0 || index >= numE)
        {
            cout << "Invalid index!! Try again!!!" << endl;
            cout << "Enter index of item (0 - " << numE - 1 << ") to change: ";
             cin >> index;
        }
        cout << endl;
        cout << "Enter new qty: ";
        cin >> qty;
        cout << endl;
        cout << "Enter new price: ";
        cin >> price;
        cout << endl;
        // put Code here to change the item in the index entered
        items[index].setQuantity(qty);
        items[index].setPrice(price);



        // call the print function again
         printArray(items, numE);


       // call the sortItems method. The array and number of elements
        // in the array are passed in.
        sortItems(items, numE);



        cout << endl << "After sorting: " << endl;
        // call the print function again
        printArray(items, numE);
    }

}
// Function loadArray
// opens the file that was passed in and makes ure it opened correctly
// if it doens't open correctly, it will exit the program.
// The function should then read all of information into the array
// It should then close the file
void loadArray(string fileName, CartItem items[], int &numE) {
   ifstream fileIn;
   string item;
   int qty;
   double cost;
   numE = 0;
   
   fileIn.open(fileName);
   
   if(!fileIn.is_open()) {
      cout << "File cannot be opened" << endl;
      exit(1);
   }
   
   fileIn >> item >> qty >> cost;
   
   while (!fileIn.eof() && numE < 50) {
      CartItem newItem(item, cost, qty);
      items[numE] = newItem;
      numE++;
      fileIn >> item >> qty >> cost;
   }
   fileIn.close();
   // return numE;
}





// Function printArray
// Prints all of the cart items in the array using the member function
void printArray(CartItem items[], int numE) {
   int i;
   
   for (i = 0; i < numE; i++) {
      items[i].printItem();
   }
}




//Function sortItems
//Sorts the CartItems in the array in alphabetical order 
void sortItems(CartItem items[], int numE) {
   int i;
   int j;
   int smallestIndex;
   CartItem tempVal;
   
   for (i = 0; i < numE - 1; i++) {
      smallestIndex = i;
      for (j = i + 1; j < numE; j++) {
         if(items[j].getItem() < items[smallestIndex].getItem()) {
            smallestIndex = j;
         }
      }
      tempVal = items[i];
      items[i] = items[smallestIndex];
      items[smallestIndex] = tempVal;
   }
}
