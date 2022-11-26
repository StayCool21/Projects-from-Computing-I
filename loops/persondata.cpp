#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
   int age;
   int total;
   int i;
   double avg;
   int largestAge;

   cout << "Type a negative for age to exit" << endl;
   
   total = 0;
   i = 0;
   
   
   cout << "Enter your age: ";
   cin >> age; 
   largestAge = age;
   
   if (age < 0) {
      cout << "No ages were entered" << endl;
   }
   
   while (age > 0) {
   total = total + age;  
   i++;
   cout << "Enter your age: ";
   cin >> age; 
   
   if (age > largestAge) {
      largestAge = age;
   }
   }

   
   if (i > 0) {
      avg = double(total) / i;
      
      cout << "The average age is " << fixed << setprecision(2) << avg << endl;
      cout << "The oldest person is " << largestAge << " years old" << endl;
   }
   
   
   
   
   
   return 0;
}
      