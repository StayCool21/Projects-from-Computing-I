#include "Ride.h"
#include <iostream>
using namespace std;

int main()
{
   Ride disney[10];
   int numRides = 3;

   disney[0].setRideName("PeterPan");
   disney[0].setCapacity(150);
   disney[0].setRideLength(6.2);
   for (int i = 0; i < 4; ++i)
   {
      disney[0].fastPass.enqueue(i * 2);
      disney[0].standby.enqueue(i * 3);
   }
   disney[0].fastPass.enqueue(25);
   disney[0].fastPass.enqueue(37);

   disney[1].setRideName("SmallWorld");
   disney[1].setCapacity(450);
   disney[1].setRideLength(12.5);
   for (int i = 0; i < 6; ++i)
   {
      disney[1].fastPass.enqueue(i * 4);
      disney[1].standby.enqueue(i * 5);
   }
   disney[1].fastPass.enqueue(83);
   disney[1].fastPass.enqueue(91);
   disney[1].standby.enqueue(71);
   disney[1].standby.enqueue(72);   
   disney[1].standby.enqueue(73);   
   disney[1].standby.enqueue(74);
   disney[1].standby.enqueue(75);

   disney[2].setRideName("SpaceMountain");
   disney[2].setCapacity(105);
   disney[2].setRideLength(3.4);
   for (int i = 0; i < 4; ++i)
   {
      disney[2].fastPass.enqueue(i + 7);
      disney[2].standby.enqueue(i + 2);
   }
   disney[2].standby.enqueue(15);
   disney[2].standby.enqueue(8);   

   for (int i = 0; i < numRides; ++i)
      disney[i].printRide();

   string ride;
   int queueType;
   int numGettingOnRide;

   cout << "Enter the name of the ride you want to change: ";
   cin >> ride;
   cout << "Enter which queue to take people out of (1. fastPass or 2. standby): ";
   cin >> queueType;
   cout << "Enter number of people getting on ride: ";
   cin >> numGettingOnRide;

   // Write the code to search the array for the ride entered, and then
   // calls dequeue on the correct queue to take the people out of the
   // queue and put them on the ride  (feel free to add variables if needed)
   // If the ride is not in the queue, print "That ride doesn't exist"
   bool isFound = false;
   
   for (int i = 0; i < numRides; i++) {
      if (disney[i].getRideName() == ride) {
         isFound = true;
         int j = 0;
         while (j < numGettingOnRide) {
            if (queueType == 1) {
               disney[i].fastPass.dequeue();
            }
            else if (queueType == 2) {
               disney[i].standby.dequeue();
            }
            j++;
         }
      }
   }
   if (!isFound) {
      cout << "That ride doesn't exist" << endl;
   }
   
   for (int i = 0; i < numRides; ++i)
      disney[i].printRide();
   return 0;
}
