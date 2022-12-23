#ifndef CARTITEM_H
#define CARTITEM_H
#include <string>

using namespace std;

class CartItem {
   private:
   string item;
   int quantity;
   double price;
   
   public:
   CartItem();
   CartItem(string item, double price, int qty);
   
   string getItem();
   double getPrice();
   int getQuantity();
   
   void setPrice(double price);
   void setQuantity(int qty);
   void printItem();
};
#endif