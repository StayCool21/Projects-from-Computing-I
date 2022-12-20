#include "Circle.h"
#include <iomanip>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

Circle::Circle() {
   color = "black";
   radius = 1.0;
}

Circle::Circle(string newColor, double newRadius) {
   color = newColor;
   radius = newRadius;
}

string Circle::getColor() {
   return color;
}

double Circle::getRadius() {
   return radius;
}

double Circle::getArea() {
   double area;
   
   area = M_PI * radius * radius;
   return area;
}

void Circle::setColor(string color) {
   this->color = color;
}

void Circle::setRadius(double radius) {
   this->radius = radius;
}
void Circle::printCircleInfo() {
   cout << fixed << setprecision(2);
   cout << "The " << color << " circle has an area of " << getArea() << endl;
}