#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
 int userInput;
 double circleRad;
 double circleArea;
 double rectLength;
 double rectWidth;
 double rectArea;
 double triBase;
 double triHeight;
 double triArea;
 
   
   do { 
      
   cout << "Choose the shape to find area of:" << endl;
   cout << "        1. Circle" << endl;
   cout << "        2. Rectangle" << endl;
   cout << "        3. Right Triangle" << endl;
   cout << "        4. Exit" << endl;
      
   cout << "Selection: ";
  cin >> userInput;
  
   switch (userInput) {
   
   case 1:
   cout << "Enter the radius: ";
   cin >> circleRad;
   
   circleArea = M_PI * (pow(circleRad, 2));
   
   cout << fixed << setprecision(2) << "The area of the circle is: " << circleArea << endl;
   break;
   
   case 2: 
   cout << "Enter the length: " << endl;
   cin >> rectLength;
   
   cout << "Enter the width: " << endl;
   cin >> rectWidth;
   
   rectArea = rectLength * rectWidth;
   
   cout << fixed << setprecision(2) << "The area of the rectangle is: " << rectArea << endl;
   break;
   
   case 3:
   cout << "Enter the base: " << endl;
   cin >> triBase;
   
   cout << "Enter the height: " << endl;
   cin >> triHeight;
   
   triArea = 0.5 * triBase * triHeight;
   
   cout << fixed << setprecision(2) << "The area of the right triangle is: " << triArea << endl;
   break;
   
   case 4: 
   
   break;
   
   default: 
   cout << "Invalid! Try Again!!!" << endl;
   break;
   }
   } while (userInput != 4);
   
   return 0;
}