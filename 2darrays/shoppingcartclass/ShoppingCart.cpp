#include "ShoppingCart.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

ShoppingCart::ShoppingCart() {
   numDiffItems = 0;
}

void ShoppingCart::putInCart(CartItem item) {
   if (numDiffItems < MAX_CART_ITEMS) {
      cart[numDiffItems] = item;
      numDiffItems++;
   }
   else {
      cout << "Cart is full" << endl;
   }
}

void ShoppingCart::putInCart(string item, double price, int qty) {
  
  if (numDiffItems < MAX_CART_ITEMS) {
      CartItem temp(item, price, qty);
      cart[numDiffItems] = temp;
      numDiffItems++;
   }
   else {
      cout << "Cart is full" << endl;
   }
}
   
int ShoppingCart::getNumDiffItems() {
   return numDiffItems;
}

void ShoppingCart::displayCart() {
   for (int i = 0; i < numDiffItems; i++) {
      cout << i << ". ";
      cart[i].printItem();
   }
}

int ShoppingCart::numTotalItemsInCart() {
   int total = 0;
   
   for (int i = 0; i < numDiffItems; ++i) {
      total += cart[i].getQuantity();
   }
   return total;
}

double ShoppingCart::costOfCart() {
   double total = 0.00;
   
   for (int i = 0; i < numDiffItems; ++i) {
      total = total + (cart[i].getPrice() * cart[i].getQuantity());
   }
   return total;
}

void ShoppingCart::removeFromCart(int index) 
{
   
   if (index >= 0 && index < numDiffItems) 
   {
      for (int i = index; i < numDiffItems - 1; ++i) {
         cart[i] = cart[i + 1];
      }
         numDiffItems--;
      }
      else {
         cout << "Invalid Index" << endl;
         }
}

CartItem ShoppingCart::getCartItem(int index) {
   if (index > -1 && index < numDiffItems) {
      return cart[index];
   }
   else {
      cout << "Invalid Index" << endl;
      string item = "xxx";
      int qty = 0;
      double price = 0.00;
      CartItem temp(item, price, qty);
      return temp;
   }
}
