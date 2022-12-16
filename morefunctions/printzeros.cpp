#include<iostream>
using namespace std;

int enterValidNumber();
string returnZeros(int numEntered);
int main() {
   char resp;
   int num;
   string zeroOut;
   
   do {
// The following 8 lines will be replaced with a method call
   num = enterValidNumber();  

   cout << num << " zeros: ";
   
   zeroOut = returnZeros(num);
   cout << zeroOut;

        cout << "\n\nDo you want to do it again (y/n): ";
        cin >> resp;
    } while (resp == 'Y' || resp == 'y');
    cout << endl;

}

int enterValidNumber() {
   int numIn;
   
   cout << "Enter a number between 1 and 50: ";
   cin >> numIn;
   while (numIn < 1 || numIn > 50)
   {
      cout << "Invalid number - try again!!!\n";
      cout << "Enter a number between 1 and 50: ";
      cin >> numIn;
   }
   return numIn;
}

string returnZeros(int numEntered) {
   string zeroStr;
   string zerStr = " ";
   
   for (int i = 0; i < numEntered; ++i) {
      zeroStr += "0";
   }
   return zeroStr;
}

   