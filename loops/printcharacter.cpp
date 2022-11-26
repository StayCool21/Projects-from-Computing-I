#include <iostream>
using namespace std;

int main () {
   char printOut; // char to be repeated
   char stopStart; // char to indicate stop/start of print
   int printNum;
   int i;

 do {
   cout << "Enter character to print: ";
   cin >> printOut;
   
   cout << "Enter number of times to print it: ";
   cin >> printNum;
   
   for (i = 0; i <printNum; i++) {
      cout << printOut;
   }
   
   cout << endl;
   cout << "Do you have another character you want to print? (y/n): ";
   cin >> stopStart;
} while ((stopStart != 'N') && (stopStart!= 'n'));


   cout << endl;
   
   return 0;
}
      