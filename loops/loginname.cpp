#include <iostream>
#include <iomanip>
using namespace std;

int main () {
   string firstName;
   string lastName;
   int lastFour;
   string loginName;
   string firstIntl;
   string lastStuff;
   
   cout << "Enter first name: ";
   cin >> firstName;
   
   cout << "Enter last name: ";
   cin >> lastName;
   
   cout << "Enter last 4 digits of social security number: " << endl;
   cin >> lastFour;
   
   firstIntl = firstName.at(0);
   
   if (lastName.length() >= 5) {
      lastStuff = lastName.substr(0, 5);
   }
   
   else {
      lastStuff = lastName;
   }
   
   loginName = (lastStuff + firstIntl + to_string(lastFour % 100));
   
   cout << "Your login name: " << loginName << endl;
   
   return 0;
}
