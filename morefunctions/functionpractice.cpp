#include <iostream>
#include <string> 

using namespace std;

// prototypes
void multiplesOfFiveBetween(int numOne, int numTwo, int numsPerLine);
int countVowelsAndOtherCharacters(string startingStr, int &nonVowels);
double calculateAverage();
string ageCategory(int ageVal);

int main() {

    int value1 = 0;
    int value2 = 0; 
    double average = 0;
    string string1 = "";
    int numberVowels = 0;
    int numberNonVowels = 0;
    int age;
    int numPer;
    string category;

   // PART 1
    cout << "Enter string1: ";
    getline(cin, string1);
    numberVowels = countVowelsAndOtherCharacters(string1, numberNonVowels);
    cout << "The string \"" << string1 << "\" has " << numberVowels << " vowels and "
         << numberNonVowels << " characters that are not vowels. ";
    cout << endl << endl;
    

   // PART 2
    cout << "Enter value1: ";
    cin >> value1;
    cout << "Enter value2: ";
    cin >> value2;
    cout << "Enter how many numbers per line: ";
    cin >> numPer;
    multiplesOfFiveBetween(value1, value2, numPer);
    cout << endl << endl;

   // PART 3
    average = calculateAverage();
    cout << endl;
    cout.setf(ios::fixed);
    cout.precision(2); 
    cout << "The average is: " << average << endl << endl;


   // PART 4
    cout << "Enter your age: ";
    cin >> age;
    // ADD  ONE FUNCTION CALL - IT IS THE ONLY LINE IN MAIN 
    // YOU SHOULD CHANGE/ADD - call the function ageCategory.
    // The function is described below.
    // Pass in the age entered above and store the category 
    // returned into the variable category declared above
    category = ageCategory(age);
    cout << "A person of age " << age << " is a(n): " << category << endl;

    return 0;
}

// Function: multiplesOfFiveBetween
// This function prints all of the multiples of 5 between two numbers. It takes in three integers. 

void multiplesOfFiveBetween(int numOne, int numTwo, int numsPerLine) {
   int i;
   int j = 0;
   int startNum;
   
   if (numOne % 5 == 0) {
      startNum = numOne;
   }
   else {
      while (numOne % 5 != 0) {
         numOne = numOne + 1;
         startNum = numOne;
      }
   }
   
   for (i = startNum; i <= numTwo; i = i + 5) {
      cout << i << "\t";
      j++;
      if (j % numsPerLine == 0) {
         cout << endl;
      }
   }
}

//  Function: countVowelsAndOtherCharacters
// This function counts the number of vowels and the number of nonvowels. It takes in a 
// string and an integer. It returns the number of vowels. 
int countVowelsAndOtherCharacters(string startingStr, int &nonVowels) {
   int numVowels;
   int j;
   int k;
   int stringSze;
   stringSze = startingStr.size();
   
   numVowels = 0;
   nonVowels = 0;
   
   for (j = 0; j < stringSze; j++) {
      if ((startingStr.at(j) == 'a') || (startingStr.at(j) == 'e') || (startingStr.at(j) == 'i') || (startingStr.at(j) == 'o')|| (startingStr.at(j) == 'u')) {
         numVowels = numVowels + 1;
      }
      else if ((startingStr.at(j) == 'A') || (startingStr.at(j) == 'E') || (startingStr.at(j) == 'I')| (startingStr.at(j) == 'O') || (startingStr.at(j) == 'U')) {
         numVowels = numVowels + 1;
      }
   }
   
   for (k = 0; k < stringSze; k++) {
      if ((startingStr.at(k) >= 'a') && (startingStr.at(k) <='z')) {  
      nonVowels = nonVowels + 1;
      }
      else if ((startingStr.at(k) >= 'A') && (startingStr.at(k) <= 'Z')) {
         nonVowels = nonVowels + 1;
      }
   }
   
   nonVowels = nonVowels - numVowels;
   return numVowels;
   }
// Function: calculateAverage
// This function asks the user for numbers. It takes in no arguments.
// It returns the average of the numbers. 
// See output

double calculateAverage() {
   int numEntered;
   int i;
   double runningTot;
   runningTot = 0;
   i = 0;
   double avg;
   
   cout << "Enter a negative number to exit" << endl;
   cout << "Enter number: ";
   cin >> numEntered;
   
   while (numEntered > 0) {
      runningTot = runningTot + numEntered;
      i++;
      cout << "Enter number: ";
      cin >> numEntered;
   }
   
   avg = (double)(runningTot / i);
   return avg;
}
   

// Function: ageCategory
// Write a function that has an integer age passed in and then returns one of the following strings
    // "Child" (up to an including twelve year olds)
    // "Teenager" (for all teens)
    // "Young Adult" (for twenty, thirty, and forty year olds) 
    // "Adult" (for fifty and sixty year olds)
    // "Senior" (for everyone else)
    // "Error" (grades less than 0 and 120 or greater)
    
string ageCategory(int ageVal) {
   string returnAgeGroup;
   if (ageVal < 0) {
      returnAgeGroup = "Error";
   }
   else if(ageVal <= 12) {
      returnAgeGroup = "Child";
   }
   else if (ageVal <= 19) {
      returnAgeGroup = "Teenager";
   }
   else if (ageVal <= 49) {
      returnAgeGroup = "Young Adult";
   }
   else if (ageVal <= 69) {
      returnAgeGroup = "Adult";
   }
   else if (ageVal < 120) {
      returnAgeGroup = "Senior";
   }
   else if (ageVal >= 120) {
      returnAgeGroup = "Error";
   }
   return returnAgeGroup;
}
