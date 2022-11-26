#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
   const double TAX_RATE = 1.075; //tax rate set at 7.5 %
   double itemCost; // cost of each item entered
   double itemQty; // how many of each item?
   double totalCost; // total cost of item post-tax
   char stopStart; //indicates (y/n) if program continues
   
   

   
   do {
      cout << "Enter the cost of the item: ";
      cin >> itemCost;
      
      cout << "Enter the quantity purchased: ";
      cin >> itemQty;
      
      totalCost = (itemCost * itemQty) * TAX_RATE;
      
      cout << endl;
      cout << fixed << setprecision(2) << "Amount Due: " << totalCost << endl;
      
      cout << endl;
      
      cout << "Do you have another customer (y/n): ";
      cin >> stopStart;
      
   } while ((stopStart != 'n') && (stopStart!= 'N'));
   
   cout << endl;
   
   return 0;
}

   
   