#include "Circle.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

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

void Circle::setColor(string color) {
   this->color = color;
}

void Circle::setRadius(double radius) {
   this->radius = radius;
}

double Circle::getArea() {
   double areaVal;
   
   areaVal = radius * radius * M_PI;
   return areaVal;
}

void Circle::printCircleInfo() {
   cout << fixed << setprecision(2);
   cout << "The " << color << " circle has an area of " << getArea() << endl;
}

bool Circle::operator<(Circle rhs) {
   if (getArea() < rhs.getArea()) {
      return true;
   }
   else {
      return false;
   }
}

bool Circle::operator==(Circle rhs) {
   if (getArea() == rhs.getArea()) {
      return true;
   }
   else {
      return false;
   }
}

ostream& operator <<(ostream &out, const Circle &circle) {
   out << "Circle Color: " << circle.color << endl;
   out << "Circle Radius: " << circle.radius << endl;
   
   return out;
}
   