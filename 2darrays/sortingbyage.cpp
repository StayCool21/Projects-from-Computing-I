#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int MAXSIZE = 100;

// Prototypes
int fillArray(string fileIn, string nameArray[], int ageArray[]);
void printArray(string nameArray[], int ageArray[], int numE);
void sortArrays(string nameArray[], int ageArray[], int numE);
double findAverageAge(int ageArray[], int numE);
double determineMedian(int ageArray[], int numE);


int main()
{
    string names[MAXSIZE];
    int ages[MAXSIZE];
    int numElements;
    string fileName;
    double averageAge;
    double median;
    char again;

    do
    {

        cout << "Enter the file name: ";
        cin >> fileName;

        // Call the function fillArray. It has the fileName, the name array and
        // the age array passed in (in that order). It returns the number of people read in
        // Description of function given below
        numElements = fillArray(fileName, names, ages);
        cout << endl;

        cout << "Before Sort" << endl;
        // Call the function printArray. It has the name array, age array and
        // the number of people passed in (in that order). 
        // Description of function given below
        printArray(names, ages, numElements);




        // Call the function sort array. It has the name array, age array,
        // and the number of people passed in (in that order).
        // Description of function given below
        sortArrays(names, ages, numElements);



        cout << "After Sort" << endl;
        // Call the function printArray. It has the name array, age array and
        // the number of people passed in (in that order). 
        // Description of function given below
        printArray(names, ages, numElements);




        cout.setf(ios:: fixed);
        cout.precision(2);
        // Call the function findAverageAge. It has the age array and
        // the number of people passed in (in that order). It stores the value
        // that is returned in the averageAge variable declared above.
        // Description of function given below
        averageAge = findAverageAge(ages, numElements);



        cout << "The average age is: " << averageAge << endl;

        // Call the function determineMedian. This function has the age array
        // and the number of people passed in (in that order). I returns
        // the median age and stores it into the variable median declared
        // above
        median = determineMedian(ages, numElements);



        cout << "The median age is: " << median << endl;

        cout << endl;
        cout << "Do you want to do this again? (Y/N): ";
        cin >> again;
    } while (toupper (again) == 'Y');
    return 0;
}



// Function: sortArrays
// This function has the name array, the age array and the number 
// of elements passed in. It sorts the data by putting the ages in 
// numerical order. (Hint: the names have to stay with the person,
// so you have to do something with the name array too)
void sortArrays(string nameArray[], int ageArray[], int numE){
   int i;
   int j;
   int smallIndex;
   string tempName;
   int tempAge;
   
   for (i = 0; i < numE - 1; i++) {
      //find index of smallest element left
      smallIndex = i;
      for (j = i + 1; j < numE; j++) {
         if (ageArray[j] < ageArray[smallIndex]) {
            smallIndex = j;
         }
      }
      tempAge = ageArray[i];
      ageArray[i] = ageArray[smallIndex];
      ageArray[smallIndex] = tempAge;
      
      tempName = nameArray[i];
      nameArray[i] = nameArray[smallIndex];
      nameArray[smallIndex] = tempName;
   }
}





// Function: findAverageAge
// This function has the age array and the number of elements passed in.
// It computes the average of the ages in the array and returns it.
double findAverageAge(int ageArray[], int numE) {
   int total = 0;
   int i;
   double average;
   
   for (i = 0; i < numE; i++) {
      total = total + ageArray[i];
   }
   
   average = (double)total / numE;
   
   return average;
}




// Function: determineMedian
// This function has the ages array (which is sorted) and the number 
// of elements passed in. It returns the median grade
// Hint: Draw an array of an odd number of ages (and then even) and
// determine how you would find the median. NO LOOP IS NEEDED
double determineMedian(int ageArray[], int numE) {
   double median; 
   
   if (numE % 2 == 0) {
      median = (double)(ageArray[numE / 2] + ageArray[(numE - 1) / 2]) / 2.0;
   }
   
   else {
      median = (double)ageArray[(numE - 1) / 2];
   }
   
   return median;
}




// Function: printArray
// This function has the name array, the age array and the number 
// of elements passed in.
// It prints the arrays in neat columns (see output)
void printArray(string nameArray[], int ageArray[], int numE) {
   int i;
   
   for (i = 0; i < numE; i++) {
      cout << left << setw(10) << nameArray[i] << "       " << ageArray[i] << endl;
   }
}


// Function: fillArray
// This function should open the file with the name that is passed into it. It should
// then read in the names and ages and load them into the appropriate arrays. 
// Make sure you check that you don't exceed the array size.
// If the file has too many names and numbers, your program should not put the 
// extra people in the array, the array will just be full.
// This function determines the number of names and ages in the arrays
// and should return the number.
// This function should not call any other user defined functions.
int fillArray(string fileName, string nameArray[], int ageArray[]) {
   ifstream fileIn;
   string name;
   int age;
   int numE = 0;
   
   fileIn.open(fileName);
   
   if(!fileIn.is_open()) {
      cout << "File cannot open" << endl;
      exit(1);
   }
   
   fileIn >> name >> age;
   
   while(!fileIn.eof() && numE < MAXSIZE) {
      nameArray[numE] = name;
      ageArray[numE] = age;
      
      numE++;
      fileIn >> name >> age;
   }
   fileIn.close();
   return numE;
}
   