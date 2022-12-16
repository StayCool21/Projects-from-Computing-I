#include <iostream>
#include <iomanip>
#include "Rectangle.h"

using namespace std;

int main()
{
    // Declare any variables you need here
   double lengthIn;
   double widthIn;

    // Create an object called rect1 of the rectangle class
    // Use the constructor with no formal parameters
   Rectangle rect1;

    // Create an object called rect2 of the rectangle class
    // Make the length be 5.2 and the width be 8.6
   Rectangle rect2(5.2, 8.6);

    // Ask the user to type in a length and width and 
    // create an object called rect3 of the rectangle class
    // See output for format
   cout << "Enter the length of rectangle 3: " << endl;
   cin >> lengthIn;
   
   cout << "Enter the width of rectangle 3: " << endl;
   cin >> widthIn;
   
   Rectangle rect3(lengthIn, widthIn);

    // Using the member function in the class, print rect1, rect2, 
    // and rect3 details in that order
   rect1.printDetails();
   rect2.printDetails();
   rect3.printDetails();

    cout << endl;
    // Print each rectangle in the format shown on the output 
    cout << "Rectangle 1: " << rect1.getLength() << " X " << rect1.getWidth() << endl;
    cout << "        Area: " << rect1.computeArea() << "       Perimeter: " << rect1.computePerimeter() << endl;
    cout << "Rectangle 2: " << rect2.getLength() << " X " << rect2.getWidth() << endl;
    cout << "        Area: " << rect2.computeArea() << "       Perimeter: " << rect2.computePerimeter() << endl;
    cout << "Rectangle 3: " << rect3.getLength() << " X " << rect3.getWidth() << endl;
    cout << "        Area: " << rect3.computeArea() << "       Perimeter: " << rect3.computePerimeter() << endl;

    return 0;
}
