#include "Rectangle.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Rectangle::Rectangle() 
{
   length = 0.0;
   width = 0.0;
}

Rectangle::Rectangle(double newLength, double newWidth) {
   length = newLength;
   width = newWidth;
}

double Rectangle::getLength() {
   return length;
}

double Rectangle::getWidth() {
   return width;
}

void Rectangle::setLength(double length) {
   this->length = length;
}

void Rectangle::setWidth(double width) {
   this->width = width;
}

double Rectangle::computeArea() {
   double areaVal;
   areaVal = length * width;
   return areaVal;
}

double Rectangle::computePerimeter() {
   double perimeterVal;
   perimeterVal = (length * 2) + (width * 2);
   return perimeterVal;
}

void Rectangle::printDetails() {
   cout << "Rectangle Report" << endl;
   cout << "Dimensions: " << fixed << setprecision(1) << length << " X " << width << endl;
   cout << "Area: " << computeArea() << endl;
   cout << "Perimeter: " << computePerimeter() << endl;
   cout << "********************" << endl;
}
   