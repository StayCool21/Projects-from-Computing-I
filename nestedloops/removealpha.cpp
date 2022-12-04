#include <iostream>
#include <string>
using namespace std;

int main () {
   string inputStr;
   string totalStr;
   unsigned int i;
   
   cout << "Enter input: ";
   getline(cin, inputStr);
   
   for (i = 0; i < inputStr.length(); i++) {
      
      if (isalpha(inputStr.at(i))) {
         totalStr = totalStr + inputStr.at(i);
      }
   }
   
   cout << "The alphabetic characters are: " << totalStr << endl;
   
   return 0;
}
