#include <iostream>
#include <cmath>
using namespace std;

int maxMagnitude (int num1, int num2);

int main() {
   int integer1;
   int integer2;
   int maxNum;
   
   cout << "Enter two integers: ";
   cin >> integer1;
   cin >> integer2;
   
   maxNum = maxMagnitude (integer1, integer2);
   
   cout << "The integer with the largest magnitude is " << maxNum << endl;
   
   return 0;
}

int maxMagnitude(int num1, int num2) {
   cin >> num1;
   cin >> num2;
   int maxVal;
   
   if (abs(num1) > abs(num2)) {
      maxVal = num1;
   }
   else {
      maxVal = num2;
   }
   
   return maxVal;
}
      
