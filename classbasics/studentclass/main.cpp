#include <iostream>
#include "Student.h"
#include <iomanip>
using namespace std;

int main() {
   
   Student stud1("John", 84, 93);
   Student stud2("Lori", 74, 81);
   Student stud3("Theo", 96, 94);
   
   
   stud1.printGradeReport();
   stud2.printGradeReport();
   stud3.printGradeReport();
   
   cout << endl;
   cout << setw(10) << left << "Name" << setw(10) << right << "Average" << setw(10) << "Grade" << endl;
   cout << setw(10) << left << stud1.getName() << setw(10) << right << stud1.computeAverage() << setw(10) << stud1.computeLetterGrade() << endl;
   cout << setw(10) << left << stud2.getName() << setw(10) << right << stud2.computeAverage() << setw(10) << stud2.computeLetterGrade() << endl;
   cout << setw(10) << left << stud3.getName() << setw(10) << right << stud3.computeAverage() << setw(10) << stud3.computeLetterGrade() << endl;
   return 0;
}
