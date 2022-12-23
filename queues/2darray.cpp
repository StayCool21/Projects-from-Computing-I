#include <iostream>
#include <iomanip>
using namespace std;

const int NUMROWS = 6;
const int NUMCOLS = 4;


void print2DArray(int array[][NUMCOLS], int numRows, int numCols);
int smallestNumberInArray(int array[][NUMCOLS], int numRows, int numCols);
double findRowAverage(int array[][NUMCOLS], int rowIndex, int numRows, int numCols);
int findColumnLargest(int array[][NUMCOLS], int colIndex, int numRows, int numCols);

void printTheAverageOfAllRows(int array[][NUMCOLS], int numRows, int numCols);


int main()
{
   int array[NUMROWS][NUMCOLS] = {   15,  24,   6,  48,
                                      6,   1,  21,  78,
                                     61,  87,  -4, -94,
                                    -19,  17,  -1, 102,
                                      7, -22,  35,  49,
                                      0, -35,  43,  21};


   int smallest;
   int largest;
   int index;
   double average;
   int numRows = NUMROWS;
   int numCols = NUMCOLS;

   cout << "The Array" << endl;

   print2DArray(array, numRows, numCols);


   smallest = smallestNumberInArray(array, numRows, numCols);
   cout << endl << "The smallest value in the array is " << smallest << endl << endl;

   cout << "Enter the index of the row you would like to find the average of: ";
   cin >> index;
   average = findRowAverage(array, index, numRows, numCols);
   cout << "The average of the numbers in the row with index " << index << " is " << average << endl << endl;

   cout << "Enter the index of the column you would like to find the largest of: ";
   cin >> index;
   largest = findColumnLargest(array, index, numRows, numCols);
   cout << "The largest number in the column with index " << index << " is " << largest << endl << endl;


   printTheAverageOfAllRows(array, numRows, numCols);

}

void print2DArray(int array[][NUMCOLS], int numRows, int numCols) {
   int i;
   int j;
   //cols is moving faster
   
   for (i = 0; i < numRows; i++) {
      for (j = 0; j < numCols; j++) {
         cout << right << setw(7) << array[i][j];
      }
      cout << endl;
   }
}
   
int smallestNumberInArray(int array[][NUMCOLS], int numRows, int numCols) {
   int i;
   int j;
   
   int smallestVal = array[0][0];
   
   for (i = 0; i < numRows; i++) {
      for (j = 0; j < numCols; j++) {
         if (smallestVal > array[i][j]) {
            smallestVal = array[i][j];
         }
      }
   }
   return smallestVal;
}

double findRowAverage(int array[][NUMCOLS], int rowIndex, int numRows, int numCols) {
   int i;
   double total = 0;
   double avg;
   
   for (i = 0; i < numCols; i++) {
      total = total + array[rowIndex][i];
   }
   
   avg = (double)total / numCols;
   return avg;
}

int findColumnLargest(int array[][NUMCOLS], int colIndex, int numRows, int numCols) {
   int i;
   int largestVal = array[0][0];
   
   for (i = 0; i < numRows; i++) {
      if (largestVal < array[i][colIndex]) {
         largestVal = array[i][colIndex];
      }
   }
   return largestVal;
}

void printTheAverageOfAllRows(int array[][NUMCOLS], int numRows, int numCols) {
   int i;
   int j;
   
   double total = 0;
   double avg;
   
   for (i = 0; i < numRows; i++) {
      total = 0; // sum needs to be re-initialized to 0 each time?
      for (j = 0; j < numCols; j++) {
         total = total + array[i][j];
      }
      avg = (double)total / numCols;
      cout << "The average of row with index " << i << " is " << avg << endl;
   }
}
