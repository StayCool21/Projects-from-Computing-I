#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream openFile(string fileName); //void openFile(string fileName, ifstream &in)
double findAverage(int midterm, int final);
char determineLetterGrade(double averageVal);

int main() {
   ifstream fin;
   ofstream fileOut;
   string fileName;
   string firstName;
   string lastName;
   int midterm;
   int final;
   double avg;
   char grade;
   string fullName;
   double classTot;
   double classAvg;
   int i;
   
   classTot = 0;
   i = 0;
   
   cout << "Enter the filename:                         Grade Report" << endl;
   cin >> fileName;
   
   
   fin = openFile(fileName);         //fileIn = openFile(fileIn, fileName);
   fileOut.open("output.txt");
   
   cout << "Name                   Midterm     Final   Average     Grade" << endl;
   
   fin >> firstName >> lastName >> midterm >> final;
   
   
   
   
   while(!fin.eof()) {
      fullName = lastName + ", " + firstName;
      avg = findAverage(midterm, final);
      grade = determineLetterGrade(avg);
      
      
      cout << fixed << setprecision(1);
      cout << left << setw(20) << fullName << setw(10) << right << midterm << setw(10) << right << final << setw(10) << right << avg << setw(10) << right << grade << endl;
      classTot = classTot + avg;
      i++;
      fin >> firstName >> lastName >> midterm >> final;
   }
   
   classAvg = double(classTot / i);
   cout << "Class Average: " << classAvg << endl;
   
   fin.close();
   fileOut.close();
   return 0;
}

ifstream openFile(string fileName) {
   ifstream fileIn;
   fileIn.open(fileName);
   
   if(!fileIn.is_open()) {
      cout << "File cannot open" << endl;
      exit(1);
   }
   return fileIn;
}


double findAverage(int midterm, int final) {
   double averageVal;
   averageVal = (double)(final + midterm) / 2.0;
   
   return averageVal;
}

char determineLetterGrade(double averageVal) {
   char letter;
   
   if (averageVal < 59.5) {
      letter = 'F';
   }
   else if (averageVal < 69.5) {
      letter = 'D';
   }
   else if (averageVal < 79.5) {
      letter = 'C';
   }
   else if (averageVal < 89.5) {
      letter = 'B';
   }
   else {
      letter = 'A';
   }
   return letter;
}