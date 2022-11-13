#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
   double itemCost;
   int itemCostAfterConvert;
   double customerPaid;
   int customerPaidAfterConvert;
   int moneyReturned;
   int numTens;
   int tensRemainder;
   int numFives;
   int fivesRemainder;
   int numDollars;
   int onesRemainder;
   int numQuarters;
   int quartersRemainder;
   int numDimes;
   int dimesRemainder;
   int numNickels;
   int nickelsRemainder;
   int numPennies;
   
   
   cout << "Enter the item cost: ";
   cin >> itemCost;
   itemCostAfterConvert = itemCost * 100;
   
   cout << "Enter what customer paid: " << endl;
   cin >> customerPaid;
   customerPaidAfterConvert = customerPaid * 100;
   
   moneyReturned = (customerPaidAfterConvert - itemCostAfterConvert);
   cout << "The total number of cents to be returned is: " << moneyReturned << endl;
   cout << endl;
   
   numTens = moneyReturned / 1000;
   cout << "Change given should be" << endl;
   cout << "Number of 10 dollar bills: " << numTens << endl; 
   
   tensRemainder = moneyReturned - (numTens * 1000);
   numFives = tensRemainder / 500;
   cout << "Number of 5 dollar bills: " << numFives << endl;
   
   fivesRemainder = moneyReturned - ((numTens * 1000) + (numFives * 500));
   numDollars = fivesRemainder / 100;
   cout << "Number of 1 dollar bills: " << numDollars << endl;
   
   onesRemainder = moneyReturned - ((numTens * 1000) + (numFives * 500) + (numDollars * 100));
   numQuarters = onesRemainder / 25;
   cout << "Number of quarters: " << numQuarters << endl;
   
   quartersRemainder = moneyReturned - ((numTens * 1000) + (numFives * 500) + (numDollars * 100) + (numQuarters * 25));
   numDimes = quartersRemainder / 10;
   cout << "Number of dimes: " << numDimes << endl;
   
   dimesRemainder = moneyReturned - ((numTens * 1000) + (numFives * 500) + (numDollars * 100) + (numQuarters * 25)+ (numDimes * 10));
   numNickels = dimesRemainder / 5;
   cout << "Number of nickels: " << numNickels << endl;
   
   nickelsRemainder = moneyReturned - ((numTens * 1000) + (numFives * 500) + (numDollars * 100) + (numQuarters * 25)+ (numDimes * 10) + (numNickels * 5));
   numPennies = nickelsRemainder;
   cout << "Number of pennies: " << numPennies << endl;
   
   
   return 0;
}