#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {
   int userNum;
   int i;
   
   cout << "Enter a number: " << endl;
   cin >> userNum;
   
   if (userNum == 1) {
      cout << "1" << endl;
   }
   
 else {
   i = 1;
   cout << userNum << "\t";
   while (userNum > 1)  {
      
      if (userNum % 2 == 0) {
         userNum = userNum / 2;
         if (userNum != 1) {
         cout << userNum << "\t";
      }
         else if ((userNum == 1) && (i = 10)) {
            cout << "1" << endl;
         }
         else if ((userNum == 1) || (i != 10)) {
            cout << "1" << endl; 
         }
         
      }
      else if (userNum % 2 == 1) {
         userNum = userNum * 3 + 1;
         cout << userNum << "\t";
      }
      i++;
      if (i % 10 == 0) {
         cout << endl;
      }
      }
   }
 
 return 0;
 
 
 
 
}