#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
   double a;
   double b;
   double c;
   double discr;
   double sol1;
   double sol2;
   
   cout << "Enter coefficient A: ";
   cin >> a;
   
   cout << "Enter coefficient B: ";
   cin >> b;
   
   cout << "Enter coefficient C: " << endl;
   cin >> c;
   
   discr = (pow(b, 2) - (4 * a * c));
   
   sol1 = (-(b) + sqrt(discr)) / (2 * a);
   sol2 = (-(b) - sqrt(discr)) / (2 * a);
   
   cout << "The two solutions to this equation are ";
   cout << fixed << setprecision(2) << sol1 << " and " << sol2 << endl;
   
   
   return 0;
}
   