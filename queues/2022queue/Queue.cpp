#include "Queue.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int Queue::numOfQueues = 0;

Queue::Queue() {
   size = 50;
   head = 0;
   tail = 0;
   numOfQueues++;
}

int Queue::getNumberOfQueues() {
   return numOfQueues;
}

int Queue::getQueueLength() {
   return tail;
}

int Queue::getQueueMaxSize() {
   return size;
}

void Queue::enqueue(int num) {
   if (tail >= 0 && tail < size) {
      elements[tail] = num;
      tail++;
   }
   else {
      cout << num << " was not put on the queue" << endl;
   }
}

void Queue::printQueue() {
   for (int i = head; i < tail; ++i) {
      cout << elements[i] << " ";
   }
   cout << endl;
}
void Queue::dequeue() {
   if (tail > 0) {
      for (int i = head; i < tail - 1; ++i) {
         elements[i] = elements[i + 1];
      }
      tail--;
   }
   else {
      cout << "Queue is empty. Can't Dequeue." << endl;
   }
}

int Queue::inFront() {
   if (isEmpty()) {
      return -1;
   }
   else {
      return elements[0];
   }
}

bool Queue::isEmpty() {
   if (head == tail) {
      return true;
   }
   else {
      return false;
   }
}

string Queue::returnHi() {
   return "Hi";
}