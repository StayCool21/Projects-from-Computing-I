#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
   ifstream fileIn;
   ofstream fileOut;
   string filename;
   int i;
   int total;
   double average;
   int num;
   
   i = 0;
   average = 0;
   
   cout << "Enter the filename: ";
   cin >> filename;              //prompt for input filename
   
   fileIn.open(filename);           //opening of input and output files
   fileOut.open("output.txt");
   
   
   if (!fileIn.is_open()) {
      cout << "File can not be open" << endl;
      exit(1);
   }
   
   if (!fileOut.is_open()) {
      exit(1);
   }
   
   fileIn >> num;
   
   cout << "The numbers are: ";

   
   while (!fileIn.eof()) {
      cout << num << " ";
      total = total + num;
      i++;
      fileIn >> num;
   }
   
   average = (double)total / i;
   
   cout << endl;
   
   if (total != 0) {
   cout << "There are " << i << " numbers in the file" << endl;
   cout << fixed << setprecision(2);
   cout << "The average is " << average << endl;
   }
   else {
      cout << "There are no numbers in the file" << endl;
   }

   
   fileIn.close();
   fileOut.close();
   
   
   
   
   
   
   return 0;
}