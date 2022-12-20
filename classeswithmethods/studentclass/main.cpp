#include <iostream>
#include <iomanip>
#include "Student.h"
using namespace std;

// PUT PROTOTYPES HERE
void enterStudentInfo(Student &stud);
double classAverage(double grade1, double grade2, double grade3);
void classReport(Student stud1, Student stud2, Student stud3, double classAvg);

int main()
{
   double classAvg;

   Student stud1;
   Student stud2;
   Student stud3;

   // This section calls the function enterStudentInfo three times
   // once for each object
   // Below the main function is a description of the function
   // you are to implement
   enterStudentInfo(stud1);
   enterStudentInfo(stud2);
   enterStudentInfo(stud3);

   cout << endl;
   // This section calls the class function three times to print out each student's report
   stud1.printGradeReport();
   stud2.printGradeReport();
   stud3.printGradeReport();        

   // This calls a function to calculate the average of the 
   // three students
   classAvg = classAverage(stud1.computeAverage(), stud2.computeAverage(), stud3.computeAverage());

   cout << endl;
   // This calls a function to print a class report
   classReport(stud1, stud2, stud3, classAvg);



}

// Function: enterStudentInfo
// This function has an object of the Student class passed in
// It then asks the user to type in the information
// and puts the info into the object that is passed in
// Check output to see formating
void enterStudentInfo(Student &stud) {
   string name;
   int midterm;
   int finalGrade;
   
   cout << "Enter name: ";
   cin >> name;
   cout << "Enter midterm: ";
   cin >> midterm;
   cout << "Enter final grade: ";
   cin >> finalGrade;
   
   stud.setStudentName(name);
   stud.setMidterm(midterm);
   stud.setFinal(finalGrade);
}

// Function: classAverage
// This function has three double variables passed in 
// It computes the average of the 3 numbers and returns it
double classAverage(double grade1, double grade2, double grade3) {
   double average;
   
   average = (grade1 + grade2 + grade3) / 3;
   
   return average;
}

// Function: classReport
// This function has three Student objects and a double variable passed into it
// It prints the information out as shown on output
void classReport(Student stud1, Student stud2, Student stud3, double classAvg) {

cout << fixed << setprecision(2);
cout << "Class Report" << endl;
cout << "Name          Average Pass or Fail" << endl;
cout << setw(11) << left << stud1.getName() << setw(10) << right << stud1.computeAverage() << setw(11) << stud1.passOrFail() << endl;
cout << setw(11) << left << stud2.getName() << setw(10) << right << stud2.computeAverage() << setw(11) << stud2.passOrFail() << endl;
cout << setw(11) << left << stud3.getName() << setw(10) << right << stud3.computeAverage() << setw(11) << stud3.passOrFail() << endl;
cout << "Class Average: " << classAvg << endl;
}
