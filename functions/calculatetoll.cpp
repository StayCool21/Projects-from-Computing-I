#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double determineToll(int hourIn, char amOrPm, char weekType);

int main() {
   int hourNum;
   char dayOrNight;
   char typeWeek;
   double amtOwed;
   
   cout << "Enter the hour: ";
   cin >> hourNum;
   
   cout << "Is it AM or PM (A or P): ";
   cin >> dayOrNight;
   
   cout << "Is it Friday or Saturday (Y/N): ";
   cin >> typeWeek;
   
   amtOwed = determineToll(hourNum, dayOrNight, typeWeek);
   
   cout << fixed << setprecision(2) << "Amount owed: $" << amtOwed << endl;
   
   return 0;
}

double determineToll(int hourIn, char amOrPm, char weekType) {
double chargeAmt;

if (weekType == 'n' || weekType == 'N') { // weekday tolls
   if (amOrPm == 'a' || amOrPm == 'A') { // morning prices (in the AM)
      if (hourIn < 7) {    // earlier than 7AM
         chargeAmt = 1.10;
      }
      else if (hourIn < 11) {  // 7AM - 10:59AM
         chargeAmt = 2.55;
      }
      else if (hourIn < 12) {  // 11AM - 11:59AM
         chargeAmt = 1.85;
      }
      else if (hourIn == 12) {
         chargeAmt = 1.10;
      }
   }
   else if (amOrPm == 'p' || amOrPm == 'P') { // afternoon prices (in the PM)
      if (hourIn < 4) { // 1PM - 3:59 PM
         chargeAmt = 1.85;
      }
      else if (hourIn < 8) {
         chargeAmt = 4.25;
      }
      else if (hourIn < 12) {
         chargeAmt = 1.50;
      }
      else if (hourIn == 12) {
         chargeAmt = 1.85;
      }
   }
}
else if (weekType == 'y' || weekType == 'Y') {
   if (amOrPm == 'a' || amOrPm == 'A') {
     if (hourIn < 7) {
        chargeAmt = 1.00;
     }
     else if (hourIn < 12) {
        chargeAmt = 2.35;
     }
     else if (hourIn == 12) {
        chargeAmt = 2.35;
     }
   }
   else if (amOrPm == 'p' || amOrPm == 'P') {
      if (hourIn < 6) {
         chargeAmt = 2.35;
      }
      else if (hourIn < 12) {
         chargeAmt = 1.15;
      }
      else if (hourIn == 12) {
         chargeAmt = 1.15;
      }
   }
}

return chargeAmt;
}
  