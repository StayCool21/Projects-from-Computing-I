#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include <string>
#include "CartItem.h"

using namespace std;

const int MAX_CART_ITEMS = 100;

class ShoppingCart {
   private:
   CartItem cart[MAX_CART_ITEMS];
   int numDiffItems;
   
   public:
   ShoppingCart();
   void putInCart(CartItem item);
   void putInCart(string item, double price, int qty);
   CartItem getCartItem(int index); 
   void removeFromCart(int index);
   int getNumDiffItems();
   int numTotalItemsInCart();
   double costOfCart();
   void displayCart();
};
#endif