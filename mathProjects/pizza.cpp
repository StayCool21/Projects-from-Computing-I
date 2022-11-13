#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
   int orderedPizzas;
   double subTotal;
   double totalCost;
   
   cout << "How many pizzas are being ordered: " << endl;
   cin >> orderedPizzas;
   
   cout << "Receipt:" << endl;
   
   subTotal = orderedPizzas * 9.99;
   cout << fixed << setprecision(2) << "Subtotal: " << "$"<< subTotal << endl;
   
   totalCost = subTotal * 1.06;
   cout << "Total due: " << "$" << totalCost << endl;
   
   return 0;
}
   