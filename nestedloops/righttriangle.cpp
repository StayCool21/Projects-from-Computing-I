#include <iostream>
#include <string>
using namespace std;

int main () {
   char userInput;
   int height;
   int i;
   int j;
   
   
   cout << "Enter a character: ";
   cin >> userInput;
   
   cout << "Enter triangle height: " << endl;
   cin >> height;
   
   //first (outer loop) prints number of characters
   
   
   for (i = 0; i < height; i++) {
      for (j = 0; j <= i; j++) {
         cout << userInput << " ";
      }
      cout << endl;
   }
return 0;
}