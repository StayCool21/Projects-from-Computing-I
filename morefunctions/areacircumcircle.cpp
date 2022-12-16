#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int getValidInput();
double circleCalculations(int radiusIn, double &circum);
void printResults (int radiusIn, double area, double circum);

const double PI = 3.14159;
int main() {
    int radius;
    double area;
    double circ;
    
    cout << "Type a -1 for radius to exit" << endl;
    
    radius = getValidInput();
    while (radius != -1) {   
    area = circleCalculations(radius, circ);
    printResults(radius, area, circ);
    radius = getValidInput();
    }
    cout << endl;
   return 0;
}

int getValidInput() {
   int radius;
   cout << "Enter the radius: ";
   cin >> radius;
   
  while (radius != -1) {
     if (radius < -1) {
     cout << "Radius cannot be negative - try again!!!" << endl;
     cout << "Enter the radius: ";
     cin >> radius;
     }
     else if (radius > -1) {
     return radius;
     }
}
}
double circleCalculations(int radiusIn, double &circum) {
   double area;
   
   area = PI * pow(radiusIn, 2);
   
   circum = 2 * PI * radiusIn;
   
   return area;
}

void printResults (int radiusIn, double area, double circum) {
   cout << fixed << setprecision(1) << "A circle with radius " << radiusIn << " has a circumference of ";
   cout << circum << " and an area of " << area << endl << endl;
}

      