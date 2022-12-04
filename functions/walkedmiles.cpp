#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double StepsToMiles(double userSteps);

int main() {
   
   int numSteps;
   double totalMiles;
   double total;
   
   cout << "Type a negative number for the number of steps to exit" << endl;
   
   total = 0;
   
   cout << "Enter the number of steps: ";
   cin >> numSteps;
   
   
   while (numSteps > 0) {
      totalMiles = StepsToMiles(numSteps);
      
      cout << fixed << setprecision(2) << "You walked " << totalMiles << " miles" << endl;
      
      total = total + totalMiles;
      
      cout << "Enter the number of steps: ";
      cin >> numSteps;
   }
   
   cout << endl;
   cout << fixed << setprecision (2) << "You walked a total of " << total << " miles" << endl;

return 0;
}

double StepsToMiles(double userSteps) {
   double milesWalked;
   
   milesWalked = userSteps / 2000;
   
   return milesWalked;
}