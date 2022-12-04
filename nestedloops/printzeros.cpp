#include <iostream>
#include <string>
using namespace std;

int main () {
   int userNum;
   char stopStart;
   int i;
   
   do {
      cout << "Enter a number between 1 and 50: ";
      cin >> userNum;
      
      while (userNum > 50 || userNum < 1) {
         cout << "Invalid number - try again!!!" << endl;
         cout << "Enter a number between 1 and 50: ";
         cin >> userNum;
      }
      
      if (userNum >= 1) {
      cout << userNum << " zeros: ";
      for (i = 1; i <= userNum; i++){
         cout << "0";
      }
      cout << endl;
      }
      
      cout << endl;
      cout << "Do you want to do it again (y/n): ";
      cin >> stopStart;
      
      while (!isalpha(stopStart)) {
         cout << "Invalid number" << endl;
      }
         
      
   } while ((stopStart == 'Y') || (stopStart == 'y'));
   cout << endl;
   
   return 0;
}