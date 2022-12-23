#ifndef RIDE_H
#define RIDE_H
#include "Queue.h"
#include <string>
using namespace std;

class Ride {
   private:
   string rideName;
   int capacity;
   double rideLength;
   
   
   public:
   Queue fastPass;
   Queue standby;
   
   Ride(string rideName);
   Ride(string rideName, int capacity, double rideLength);
   
   void setRideName(string rideName);
   void setCapacity(int capacity);
   void setRideLength(double num);
   
   string getRideName();
   double getRideLength();
   int getCapacity();
   
   Ride();
   
   void printRide();
   
   
};
#endif