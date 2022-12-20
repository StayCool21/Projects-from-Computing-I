#include <iostream>
#include "Circle.h"
using namespace std;

// PUT PROTOTYPES HERE
Circle createCircle();
double determineLargest(double circle1, double circle2, double circle3);

int main()
{
   Circle circle1 ("purple", 5.2);
   Circle circle2;
   Circle circle3;

   // below main there are comments to define the function 
   // used on the next line
   circle3 = createCircle();

   cout << endl;
   // Using a the three circles declared above, call
   // the class functions to print out the information
   // THESE ARE THE ONLY STATEMENTS YOU WILL ADD
   // TO THE MAIN FUNCTION
   circle1.printCircleInfo();
   circle2.printCircleInfo(); 
   circle3.printCircleInfo();


   // below main there are comments to define the function 
   // used on the next line
   cout << endl;   
   cout << "The largest circle of the three has a radius of " 
        << determineLargest(circle1.getRadius(), circle2.getRadius(), circle3.getRadius())
        << endl;

   return 0;
}


// Using the function call in main, write the function
// Check output for what it looks like
Circle createCircle() {
   Circle circlenew;
   string colorIn;
   double radiusIn;
   
   cout << "Enter the color: ";
   cin >> colorIn;
   cout << "Enter radius: ";
   cin >> radiusIn;
   
   circlenew.setColor(colorIn);
   circlenew.setRadius(radiusIn);
   return circlenew;

}


// Function: determineLargest
// Using the function call in main, write the function
double determineLargest(double circle1, double circle2, double circle3) {
double largestVal;

if ((circle1 > circle2) && (circle1 > circle3)) {
   largestVal = circle1;  
}
else if ((circle2 > circle1) && (circle2 > circle3)) {
   largestVal = circle2;
}
else if ((circle3 > circle1) && (circle3 > circle2)) {
   largestVal = circle3;
}
else if ((circle3 == circle1) && (circle3 > circle2)) {
   largestVal = circle3;
}
else if ((circle2 == circle3) && (circle2 > circle1)) {
   largestVal = circle2;
}
else if ((circle1 == circle2) && (circle1 > circle3)) {
   largestVal = circle1;
}
else if ((circle3 == circle2) && (circle3 == circle1)) {
   largestVal = circle3;
}
return largestVal;
}
