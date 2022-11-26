#include <iostream>
#include <iomanip>
using namespace std;

int main () {
   int endVal;
   int i;
   
   cout << "Count by eights" << endl;
   cout << "Enter the (inclusive) end value: ";
   cin >> endVal;
   
   for (i = 0; i <= endVal; i = i + 8) {
      cout << i << " ";
      cin >> endVal;
   }
   cout << endl;
   return 0;
}
      