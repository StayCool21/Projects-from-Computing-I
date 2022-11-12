#include <iostream>
#include <cmath>
using namespace std;

int main()  {
   
   double xValue;
   double yValue;
   double zValue;
   double xToZPower;
   double xToPowerYPowerZ;
   double absPwrY;
   double sqrtXYPwrZ;

   
   cout << "Enter x: ";
   cin >> xValue;
   
   cout << "Enter y: ";
   cin >> yValue;
   
   cout << "Enter z: " << endl;
   cin >> zValue;
   
   cout << "Calculations" << endl;
   
   xToZPower = pow(xValue, zValue);
   cout << "x to the z power is: " << xToZPower << endl;
   
   xToPowerYPowerZ = pow(xValue, (pow(yValue, zValue)));
   cout << "x to the power of (y to the power of z) is: " << xToPowerYPowerZ << endl;
   
   absPwrY = abs(yValue);
   cout << "The absolute power of y is: " << absPwrY << endl;
   
   sqrtXYPwrZ = pow((sqrt(xValue * yValue)), zValue);
   cout << "The square root of xy to the power of z is: " << sqrtXYPwrZ << endl;
   
   
   return 0;
}
