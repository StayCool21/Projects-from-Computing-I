#include "Ride.h"
#include <iostream>

using namespace std;

Ride::Ride() {
   capacity = 0;
   rideLength = 0;
}

Ride::Ride(string rideName) {
   this ->rideName = rideName;
   capacity = 0;
   rideLength = 0;
}

Ride::Ride(string rideName, int capacity, double rideLength) {
   this->rideName = rideName;
   this->capacity = capacity;
   this->rideLength = rideLength;
}

void Ride::printRide() {
   cout << "Ride: \t\t" << rideName << endl;
   cout << "Capacity: \t\t" << capacity << endl;
   cout << "Ride Length: \t\t" << rideLength << endl;
   cout << "FastPass: ";
   fastPass.printQueue();
   cout << endl;
   cout << "StandBy: ";
   standby.printQueue();
   cout << endl;
}
void Ride::setCapacity(int capacity) {
   this->capacity = capacity;
}

void Ride::setRideLength(double num) {
   rideLength = num;
}

void Ride::setRideName(string rideName) {
   this->rideName = rideName;
}

string Ride::getRideName() {
   return rideName;
}

double Ride::getRideLength() {
   return rideLength;
}

int Ride::getCapacity() {
   return capacity;
}
