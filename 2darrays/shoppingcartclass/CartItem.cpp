#include "CartItem.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

CartItem::CartItem() {
   item = " ";
   quantity = 0;
   price = 0.00;
}

CartItem::CartItem(string item, double price, int qty) {
   this->item = item;
   this->price = price;
   quantity = qty;
}

string CartItem::getItem() {
   return item;
}

double CartItem::getPrice() {
   return price;
}

int CartItem::getQuantity() {
   return quantity;
}

void CartItem::setPrice(double price) {
   this->price = price;
}

void CartItem::setQuantity(int qty) {
   quantity = qty;
}

void CartItem::printItem() {
   double totalCost = quantity * price;
   cout << left << setw(10) << item << setw(10) << right << quantity;
   cout << fixed << setprecision(2) << setw(10) << right << price << setw(10) << right << totalCost;
   cout << endl;
}