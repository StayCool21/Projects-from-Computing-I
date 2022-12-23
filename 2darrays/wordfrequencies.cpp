#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// Prototypes go here
int loadWords(string fileName, string array[]);
void printArray(string array[], int numWords);
int find(string searchVal, string array[], int numE);
int determineFrequency(string array[], string uniqueArray[], int frequency[], int numWords);

void printResults(string uniqueWords[], int frequency[], int numUniqueWords);

const int MAX = 50;

int main()
{
   string original[MAX];
   string uniqueWords[MAX];
   int frequency [MAX] = {0};
   int numWords;
   int numUniqueWords;

   ifstream fin;
   string fileName;

   cout << "Enter fileName: ";
   cin >> fileName;
   cout << endl;


   numWords = loadWords(fileName, original);

   cout << "Words in file" << endl;
   printArray(original, numWords);

   
   numUniqueWords = determineFrequency(original, uniqueWords, frequency, numWords);

   cout << endl;
   cout << "Words in the file (without repeating any)" << endl;
   printArray(uniqueWords, numUniqueWords);

   cout << endl;
   cout << "Frequency of words in file" << endl;
   printResults(uniqueWords, frequency, numUniqueWords);

   return 0;
}
   // Function: loadWords
   // This function will create an input file stream and open and test 
   // file passed in.It will then read in each word in the file and put
   // it into the array. It will return the number of words it put into 
   // the array. Don't forget to close the file before you return the  number
   // of words
   // Note: The original array will have the words from
   // the file in it, exactly how they are in the file one word
   // in each element position.

int loadWords(string fileName, string array[]) {
   ifstream fileIn;
   string word;
   int wordCount = 0;
   
   fileIn.open(fileName);
   
   if (!fileIn.is_open()) {
      cout << "File cannot be opened" << endl;
      exit(1);
   }
   
   while(fileIn >> word) {
      array[wordCount] = word;
      wordCount++;
   }
   
   fileIn.close();
   return wordCount;
}

   // Function: printArray   
   // This function prints each element in the array followed by a space. It will print a 
   // newline after the last value printed

void printArray(string array[], int numWords) {
   int i;
   
   for (i = 0; i < numWords; i++) {
      cout << array[i] << " ";
   }
   
   cout << endl;
}


//find function(why no description?)
int find(string searchVal, string array[], int numE) {
   int i;
   bool isFound = false; //don't think we need bools here?...
   int returnPos;
   i = 0;
   
   while(!isFound && i < numE) {
      if(array[i] == searchVal) {
         isFound = true;
      }
      ++i;
   }
   
   if(isFound) {
      returnPos = i - 1;
      return returnPos;
   }
   else {
      returnPos = -1;
      return returnPos;
   }
}
// Function: printResults
   // This function prints each word in the unique word array followed by the
   // frequency of that word with a hyphen in between (see sample output)

void printResults(string uniqueWords[], int frequency[], int numUniqueWords) {
   int i; 
   
   for (i = 0; i < numUniqueWords; i++) {
      cout << uniqueWords[i] << " - " << frequency[i] << endl;
   }
}
   
// Function: determineFrequency
   // This function will call a function called find (see directions above)
   // This function loops through each value in the original array and calls find to determine
   //  if the value is in the unique array. If it is already in the unique array, it adds one to the 
   //  frequency of that word in the frequency array. If it is not in the unique words array,
   //  it puts it into the last position of the unique array an adds one to the frequency  (making
   //  it one since it is the first time that word was encountered)

int determineFrequency(string array[], string uniqueArray[], int frequency[], int numWords) {
   int i;
   int indexVal;
   int uniqueWds = 0;
   
   for (i = 0; i < numWords; i++) {
      indexVal = find(array[i], uniqueArray, uniqueWds);
      if (indexVal == -1) {
         uniqueArray[uniqueWds] = array[i];
         frequency[uniqueWds] = 1;
         uniqueWds++;
      }
      else {
         frequency[indexVal]++;
      }
   }
   return uniqueWds;
}
