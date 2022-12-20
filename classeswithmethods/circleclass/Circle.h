#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>

using namespace std;

class Circle {
   private:
   string color;
   double radius;
   
   
   public:
   Circle();
   Circle(string newColor, double newRadius);
   
   string getColor();
   double getRadius();
   
   double getArea();
   void setColor(string color);
   void setRadius(double radius);
   
   void printCircleInfo(); 
   
};
#endif