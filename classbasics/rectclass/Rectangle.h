#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
using namespace std;

class Rectangle {
   private:
      double length;
      double width;
   public:
      Rectangle();
      Rectangle(double newLength, double newWidth);
      double getLength();
      double getWidth();
      
      void setLength(double length);
      void setWidth(double width);
      
      double computeArea();
      double computePerimeter();
      void printDetails(); 
};

#endif