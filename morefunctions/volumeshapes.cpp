#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//prototypes

double getValidInput(string stringIn);
char displayMenuGetUserInput();
void computeSphereVolume();
void computeRectangularPrismVolume();
void computeCylinderVolume();
void computeConeVolume();
void computeSquarePyramidVolume();
void calculateVolume(double radius, double &sphereVolume);
void calculateVolume(double length, double width, double height, double &rectangularPrismVolume);
void calculateVolumeCylinder(double radius, double height, double &cylinderVolume);
void calculateVolumeCone(double radius, double height, double &coneVolume);
void calculateVolumeSquarePyramid(double base, double height, double &squarePyramidVolume);

const double PI = 3.14159;
int main () {
   char choice;
   
   cout << fixed << setprecision(2);
   
   do {
      //call display menu function
      
      choice = displayMenuGetUserInput();
      
      
      
   switch(choice) {
      case 'A':
      case 'a':
      computeSphereVolume();
      break;
      
      case 'B':
      case 'b':
      computeRectangularPrismVolume();
      break;
      
      case 'C':
      case 'c':
      computeCylinderVolume();
      break;
      
      case 'D':
      case 'd':
      computeConeVolume();
      break;
      
      case 'E':
      case 'e':
      computeSquarePyramidVolume();
      break;
      
      case 'F':
      case 'f':
      cout << endl;
      break;
      
      default:
      cout << "Invalid Selection" << endl;
   }
   } while (choice != 'F' && choice != 'f');
   
   
   return 0;
}

//function defs

double getValidInput(string stringIn) {
   double inputVal;
   
   cout << stringIn;
   cin >> inputVal;
   
   while (inputVal < 1) {
      cout << "Number must be positive!!! Try Again" << endl;
      cout << stringIn;
      cin >> inputVal;
   }
   
   return inputVal;
}
   

//Displays menu, asks for user selection
char displayMenuGetUserInput() {
   char choiceIn;
   cout << "Find the Volume (all measurements are in inches)" << endl;
   cout << "A.      Sphere" << endl;
   cout << "B.      Rectangular Prism" << endl;
   cout << "C.      Cylinder" << endl;
   cout << "D.      Cone (right circular)" << endl;
   cout << "E.      Square pyramid" << endl;
   cout << "F.      Exit" << endl;
   
   cout << "Pick a shape to find a volume: ";
   cin >> choiceIn;
   
   return choiceIn;
}



void computeSphereVolume(){
   double radius;
   double sphereVolume;
   
   radius = getValidInput("Enter the radius: ");
   calculateVolume(radius, sphereVolume);
}
   
void calculateVolume(double radius, double &sphereVolume) {
   sphereVolume = 0;
   
   sphereVolume = (4.0 / 3.0) * PI * radius * radius * radius;
   cout << "The volume of a sphere with radius " << radius << " is " << sphereVolume << endl;
}

void computeRectangularPrismVolume() {
   double length;
   double width;
   double height;
   double rectangularPrismVolume;
   
   length = getValidInput("Enter the length: ");
   width = getValidInput("Enter the width: ");
   height = getValidInput("Enter the height: ");
   calculateVolume(length, width, height, rectangularPrismVolume);
}

void calculateVolume(double length, double width, double height, double &rectangularPrismVolume) {
   rectangularPrismVolume = 0;
   
   rectangularPrismVolume = length * width * height;
   
   cout << "The volume of a rectangular prism that is " << length << " X " << width << " X " << height;
   cout << " is " << rectangularPrismVolume << endl;
}

void computeCylinderVolume() {
   double radius;
   double height;
   double cylinderVolume;
   
   radius = getValidInput("Enter the radius: ");
   height = getValidInput("Enter the height: ");
   calculateVolumeCylinder(radius, height, cylinderVolume);
}

void calculateVolumeCylinder(double radius, double height, double &cylinderVolume) {
   cylinderVolume = 0;
   
   cylinderVolume = PI * radius * radius * height;
   
   cout << "The volume of a cylinder with radius " << radius << " and height " << height;
   cout << " is " << cylinderVolume << endl;
}

void computeConeVolume() {
   double radius;
   double height;
   double coneVolume;
   
   radius = getValidInput("Enter the radius: ");
   height = getValidInput("Enter the height: ");
   calculateVolumeCone(radius, height, coneVolume);
}

void calculateVolumeCone(double radius, double height, double &coneVolume) {
   coneVolume = 0;
   
   coneVolume = (1.0 / 3.0) * PI * radius * radius * height;
   
   cout << "The volume of a cone with radius " << radius << " and height " << height << " is "  << coneVolume;
   cout << endl;
}

void computeSquarePyramidVolume() {
   double base;
   double height;
   double squarePyramidVolume;
   
   base = getValidInput("Enter the length of the base: ");
   height = getValidInput("Enter the height: ");
   calculateVolumeSquarePyramid(base, height, squarePyramidVolume);
}
   
void calculateVolumeSquarePyramid(double base, double height, double &squarePyramidVolume) {
   squarePyramidVolume = 0;
   
   squarePyramidVolume = (1.0 / 3.0) * base * base * height;
   
   cout << "The volume of a square pyramid with base length " << base << " and height " << height;
   cout << " is " << squarePyramidVolume << endl;
}

