#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int MAXSIZE = 100;

// Prototypes

double findAverage(int array[], int numElements);
void printArray(int array[], int numElements);
int findValue(int searchFor, int array[], int numElem);
void fillArray(string fileName, int array[], int &numElem);


int main()
{
    int nums[MAXSIZE];
    int searchFor;
    int indexFound = -1;
    int numElems;
    double average;
    string fileName;
    char again;

    do
    {

        cout << "Enter the file name: ";
        cin >> fileName;

        // Call the function fillArray. It has the fileName, the nums array and
        // the numElem passed in (in that order). It will calculate the numElems
        // Description of function given below

      fillArray(fileName, nums, numElems);

        // Call the function printArray. It has the nums array and
        // the numElem passed in (in that order). 
        // Description of function given below
      printArray(nums, numElems);




        // Call the function findAverage. It has the nums array and
        // the numElem passed in (in that order). It stores the value
        // that is returned in the average variable declared above.
        // Description of function given below
      average = findAverage(nums, numElems);



        // Asks the user what number they want to search for
        cout << endl << endl;
        cout << "Enter a number between -100 and 100 to search for: ";
        cin >> searchFor;

        // Call the function findValue. It has the number being searched for
        // the nums array and the numElem passed in (in that order). 
        // It stores the index of the position in the array where the 
        // number was found in the indexFound variable declared above.
        // Description of function given below
      indexFound = findValue(searchFor, nums, numElems);


        // Right the if statement to print whether the number was found.
        // If it was found, it will print the inde of where it was found.
        // (See output for what should be printed
      if (indexFound >= 0) {
         cout << indexFound << " was found in index " << indexFound - 1 << endl;
      }
      else if (indexFound == -1) {
         cout << "The number " << searchFor << " was not found in the array" << endl;
      }




        cout.setf(ios:: fixed);
        cout.precision(2);
        cout << "The average of all the numbers in the array is " << average << endl;
        cout << endl;
        cout << "Do you want to do this again? (Y/N): ";
        cin >> again;
    } while (toupper (again) == 'Y');
    return 0;
}




// Function: findValue
// This function has the value being searched for, the array and the number of 
// elements passed in. I searches the array and when it first finds it, it
// stops searching and returns the index of where it was found. If it is not 
// in the array, it returns a -1
// Notice the loop should stop when it finds the value
int findValue(int searchFor, int array[], int numElem) {
    bool found = false;
    int i = 0;
    
    while(!found && i < numElem) {
       if(array[i] == searchFor) {
          found = true;
          return i;
       }
       ++i;
    }
    if (found == false) {
       i = -1;
       return i;
    }
 }


// Function: findAverage
// This function has the array and the number of elements passed in.
// It computes the average of the numbers in the array and returns it.
double findAverage(int array[], int numElements) {
   int i;
   int total = 0;
   double average;
   
   for (i = 0; i < numElements; ++i) {
      total += array[i];
   }
   
   average = (double)total / i;
   return average;
}





// Function: printArray
// This function has the array and the number of elements passed in.
// It prints the array in neat columns, with 7 numbers per line
void printArray(int array[], int numElements) {
   for (int i = 0; i < numElements; ++i) {
      cout << array[i] << " ";
      if ((i + 1) % 7 == 0) {
         cout << endl;
      }
      cout << endl;
}
}



// Function: fillArray
// This function should open the file with the name that passed into it. If the file does
// not open correctly it should exit the program. It should
// then read in the numbers and load them into the array. 
// make sure you check that you don't exceed the array size.
// If the file has too many numbers, your program should not put the 
// extra numbers in the array, the array will just be full.
// This function determines the number of elements in the array.
// This function should not call any other user defined functions.
void fillArray(string fileName, int array[], int &numElem) {
   int num;
   ifstream fileIn;
   numElem = 0;
   
   fileIn.open(fileName);
   
   if(!fileIn.is_open()) {
      cout << "File cannot open" << endl;
      exit(1);
   }
   
   fileIn >> num;
   while (!fileIn.eof() && numElem < MAXSIZE) {
      array[numElem] = num;
      numElem = numElem + 1;
      fileIn >> num;
   }
   fileIn.close();
}
   
   