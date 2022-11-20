#include <iostream>
using namespace std;

int main () {
   int one;
   int two;
   int three;
   
   cout << "Enter three numbers: ";
   cin >> one;
   cin >> two;
   cin >> three;
   
   if ((one > two) && (one > three)) {
      cout << "Largest value is " << one << endl;
   }
   
   else if ((two > one) && (two > three)) {
      cout << "Largest value is " << two << endl;
   }
   
   else if ((three > one) && (three > two)) {
      cout << "Largest value is " << three << endl;
   }
   
   else if ((three == two) && (three > one)) {
   cout << "Largest value is " << three << endl;
   }
   
   else if ((two == one) && (two > three)) {
      cout << "Largest value is " << two << endl;
   }
   return 0;
}
