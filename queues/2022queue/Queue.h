#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>

using namespace std;

class Queue {
   private:
   int elements[50];
   int size;
   int head;
   int tail;
   static int numOfQueues;
   
   public:
   Queue();
   static int getNumberOfQueues();
   int inFront();
   bool isEmpty();
   int getQueueLength();
   int getQueueMaxSize();
   
   void enqueue(int num);
   void dequeue();
   
   void printQueue();
   static string returnHi();
};
#endif