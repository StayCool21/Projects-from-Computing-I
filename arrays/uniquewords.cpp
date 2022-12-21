#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// Prototypes go here
int loadWords(string fileName, string original[]);
int makeUniqueWordsArray(string original[], string uniqueWords[], int wordCount);
void printArray(string original[], int numWords);
int find(string wordSearch, string array[], int numElements);

const int MAX = 50;

int main()
{
   string original[MAX];
   string uniqueWords[MAX];
   int numWords;
   int numUniqueWords;

   string fileName;

   cout << "Enter fileName: ";
   cin >> fileName;
   cout << endl;

   // Function: loadWords
   // This function will create an input file stream and open and test 
   // file passed in.It will then read in each word in the file and put
   // it into the array. It will return the number of words it put into 
   // the array. Don't forget to close the file before you return the  number
   // of words
   // Note: The original array will have the words from
   // the file in it, exactly how they are in the file one word
   // in each element position.
   numWords = loadWords(fileName, original);

   cout << "Words in file" << endl;
   // Function: printArray   
   // This function prints each element in the array followed by a space. It will print a 
   // newline after the last value printed
   printArray(original, numWords);

   // Function: makeUniqueWordsArray
   // This function will call a function called find (see directions above)
   // This function loops through each value in the original array and calls find to determine
   //  if the value is in the unique array. If it is already  in the unique array, it does nothing
   //  If it is not in the unique words array,it  puts it into the last position of the unique
   //  array. Notice that each array has a variable that maintains how many elements 
   //  are in it
   numUniqueWords = makeUniqueWordsArray(original, uniqueWords, numWords);

   cout << endl;
   cout << "Words in the file (without repeating any)" << endl;
   printArray(uniqueWords, numUniqueWords);

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
int loadWords(string fileName, string original[]) {
   int wordCnt = 0;
   ifstream input;
   string word;
   
   input.open(fileName);
   
   while (input >> word) {
      original[wordCnt] = word;
      wordCnt++;
   }
   
   input.close();
   return wordCnt;
}



// int loadWords(string fileName, string original[]) {
//    ifstream fin;
//    int wordCount = 0;
//    string word;
//    int totalCnt;
   
//    fin.open(fileName);
   
//    if (!fin.is_open()) {
//       cout << "File cannot open" << endl;
//       exit(1);
//    }
   
//    fin >> word;
//    while (!fin.eof()) {
//          original[wordCount] = word;
//          wordCount++;
//          fin >> word;
//    }
//    fin.close();
//    totalCnt = wordCount + 1;
//    return totalCnt;
// }

int makeUniqueWordsArray(string original[], string uniqueWords[], int wordCount) {
   int i;
   i = 0;
   int uniqueWds = 0;
   int j = 0;
   bool isUnique;
   
   for (int i = 0; i < wordCount; i++) {
      isUnique = true;
      for(j = 0; j < i; j++) {
         if(original[i] == original[j]) {
               isUnique = false;
         }
      }
      if(isUnique) {
         uniqueWords[uniqueWds] = original[i];
         uniqueWds++;
      }
   }
   return uniqueWds;
}

void printArray(string original[], int numWords) {
   int i;
   
   for (i = 0; i < numWords; i++) {
      cout << original[i] << " ";
   }
   
   cout << endl;
}

int find(string wordSearch, string array[], int numElements) {
   int i;
   bool found = false;
   int returnPos;
   i = 0;
   
   while(!found && i < numElements) {
      if(array[i] == wordSearch) {
         found = true;
      }
      ++i;
   }
   if(found) {
      returnPos = i - 1;
      return returnPos;
   }
   else {
      returnPos = -1;
      return returnPos;
   }
}