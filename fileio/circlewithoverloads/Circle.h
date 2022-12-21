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
   
   void setColor(string color);
   void setRadius(double radius);
   double getArea();
   
   bool operator<(Circle rhs);
   bool operator==(Circle rhs);
   friend ostream& operator<<(ostream &out, const Circle &circle);
   
   void printCircleInfo();
   
   
   
   
   
   
};
#endif