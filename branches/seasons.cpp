#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int day;
   
   cout << "Enter the date: ";
   cin >> inputMonth;
   cin >> day;
   
   //Jan-March
   if ((inputMonth == "January") && (day >= 1) && (day <= 31)) {
      cout << "It is Winter" << endl;
   }
   else if ((inputMonth == "February") && (day >= 1) && (day <= 29)) {
      cout << "It is Winter" << endl;
   }
   else if ((inputMonth == "March") && (day > 0) && (day <= 19)) {
         cout << "It is Winter" << endl;
   }
   else if ((inputMonth == "March") && (day> 19) && (day <=31)) {
         cout << "It is Spring" << endl;
   }
   
   //April - July
   else if ((inputMonth == "April") && (day >= 1) && (day <= 30)) {
      cout << "It is Spring" << endl;
   }
   else if ((inputMonth == "June") && (day >= 1) && (day <= 21)) {
      cout << "It is Summer" << endl;
   }
   else if ((inputMonth == "June") && (day > 21) && (day <= 30)) {
      cout << "It is Summer" << endl;
   }
   else if ((inputMonth == "July") && (day >= 1) && (day <= 31)) {
      cout << "It is Summer" << endl;
   }
   
   //August - October
   else if ((inputMonth == "August") && (day >= 1) && (day <= 31)) {
      cout << "It is Summer" << endl;
   }
   else if ((inputMonth == "September") && (day >= 1) && (day <= 21)) {
      cout << "It is Summer" << endl;
   }
   else if ((inputMonth == "September") && (day > 21) && (day <= 30)) {
      cout << "It is Autumn" << endl;
   }
   else if ((inputMonth == "October") && (day >= 1) && (day <= 31)) {
      cout << "It is Autumn" << endl;
   }
   
   //November - December
   else if ((inputMonth == "November") && (day >= 1) && (day <= 30)) {
      cout << "It is Autumn" << endl;
   }
   else if ((inputMonth == "December") && (day >= 1) && (day <= 20)) {
      cout << "It is Autumn" << endl;
   }
   else if ((inputMonth == "December") && (day >= 21) && (day <= 31)) {
      cout << "It is Winter" << endl;
   }
   else {
      cout << "It is Invalid" << endl;
   }
   return 0;
}