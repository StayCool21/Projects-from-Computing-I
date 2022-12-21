#include <iostream>
using namespace std;
int computeTotal(int nums[], int numElements);

int main()
{
    int array1[20] = {5, 8, 34, 7, 2, 46, 53, 12, 24, 65};
    int numElements = 10;
    int i;

    cout << "Part 1" << endl;
    // Part 1
    // Enter the statement to print the numbers in index 5 and index 8
    // put a space in between the two numbers
   cout << array1[5] << " " << array1[8];


    cout <<  endl;
    // Enter the statement to print the numbers 8 and 53 from the array above
    // put a space in between the two numbers
   cout << array1[1] << " " << array1[6];
   
    cout << endl;
    // Enter the statement to change the number 2 in the array to be 12
    // then write the statement to print out that number in the array
   array1[4] = 12;
   cout << array1[4];

    cout << "\nPart 2" << endl;
    // Part 2
    // Write the loop to print out all of the numbers in the array
    // Use the variables declared above (you might have to declare
    // another variable) Put a space between each number
   for (i = 0; i < numElements; ++i) {
      cout << array1[i] << " ";
   }

    cout << "\nPart 3" << endl;
    // Part 3
    // Write the loop to print out all of the EVEN numbers in the array
    // Use the variables declared above (you might have to declare
    // another variable) Put a space between each number.   
   for (i = 0; i < numElements; ++i) {
      if (array1[i] % 2 == 0) {
         cout << array1[i] << " ";
      }
   }

    cout << "\nPart 4" << endl;
    // Part 4
    // Write a function called computeTotal that has the array
    // and the number of elements passed into it. It will return
    // the total of all of the numbers in the array
    int total;
    // Call the function you just wrote and store the answer
    // in the varable total declared above

   total = computeTotal(array1, numElements);
    // This will print the total out
    cout << total;



    return 0;
}
   int computeTotal(int array[], int numElements) {
      int total;
      total = 0;
      
      for(int i = 0; i < numElements; i++) {
         total = total + array[i];
      }
      return total;
   }
