#include <iostream>
#include <cstdlib>
using namespace std;

string headsOrTails(); 

int main() {
   int i;
   int numFlips;
   int seed;
   int numHeads = 0;
   int numTails = 0;
   string response;
   
   cout << "Enter the seed value: ";
   cin >> seed;
   
   srand(seed);  // Unique seed

   cout << "How many times do you want to flip a coin: " << endl;
   cin >> numFlips;
   
   cout << "After flipping a coin " << numFlips << " times there were:" << endl;
   

   
   for (i = 0; i < numFlips; i++) {
   response = headsOrTails();  
      
      if (response == "heads") {
         numHeads = numHeads + 1;
      }
      else {
         numTails = numTails + 1;
      }
   }
   cout << "Heads: " << numHeads << endl;
   cout << "Tails: " << numTails << endl;

   return 0;
}
string headsOrTails() {
   string value;
   
   if (rand() % 2 == 0) {
      value = "heads";
   }
   else {
      value = "tails";
   }
   return value;
}

