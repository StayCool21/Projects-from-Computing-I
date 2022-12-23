#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    int startVal;
    int endVal;
    int multsOf;
    int numRemove;
    // Declare a queue called q1
    Queue q1;


    cout << "Part 1" << endl;
    // printout the number of queues with a new line after it
    cout << q1.getNumberOfQueues << endl;
    cout << endl;

    // Declare a queue called q2
    Queue q2;
    
    // Decclare a queue called q3
    Queue q3;

    // printout the number of queues with a new line after it
    cout << q3.getNumberOfQueues() << endl;

    cout << "Enter a start value: ";
    cin >> startVal;
    cout << "Enter an end value: ";
    cin >> endVal;
    cout << "Enter a multiple value: ";
    cin >> multsOf;

    cout << "Part 2" << endl;
    // Write a loop to enqueue onto q1 all the multples of the
    // multsOf. between (and including) the startVal and endVal
    for (int i = startVal + 1; i <= endVal; i += multsOf) {
       if (i >= startVal) {
          q1.enqueue(i);
       }
    }
    
    cout << "The queue: ";
    q1.printQueue();

    cout << "Part 3" << endl;
   //  // Print out the number that is in the front of the queue
   //  // See output for format
   cout << "The number in front of queue: " << q1.inFront() << endl;

    cout << "Remove one from queue" << endl;
    // remove an element from the queue
    q1.dequeue();

    // Print out the number that is in the front of the queue 
    // See output for format
   cout << "The number in front of queue: " << q1.inFront() << endl;
   
    // Print out the number of elements in the queue
    // See output for format
    cout << "There are " << q1.getQueueLength() << " elements in the queue" << endl;

    cout << "The queue: ";
    q1.printQueue();

    cout << "Part 4" << endl;
    cout << "Enter how many elements you want to remove from the queue: ";
    cin >> numRemove;

    // Write the code to remove the correct number of elements from the queue
    while (numRemove--) {
       q1.dequeue();
    }

    cout << "The queue: ";
    q1.printQueue();

   return 0;
}
