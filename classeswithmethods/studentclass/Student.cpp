#include "Student.h"
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

Student::Student() {
}

Student::Student(string name, int midterm, int fin) {
   studentName = name;
   this->midterm = midterm;
   finalGrade = fin;
}

string Student::getName() {
   return studentName;
}

int Student::getMidterm() {
   return midterm;
}

int Student::getFinal() {
   return finalGrade;
}

void Student::setMidterm(int grade) {
   midterm = grade;
}

void Student::setFinal(int grade) {
   finalGrade = grade;
}

void Student::setStudentName(string studentName) {
   this->studentName = studentName;
}
double Student::computeAverage() {
   double avg;
   avg = (midterm + finalGrade) / 2.0;
   return avg;
}

string Student::computeLetterGrade() {
   string letter;
   
   double avg = computeAverage();
   
   if (avg < 59.5) {
      letter = "F";
   }
   else if (avg < 69.5) {
      letter = "D";
   }
   else if (avg < 79.5) {
      letter = "C";
   }
   else if (avg < 89.5) {
      letter = "B";
   }
   else {
      letter = "A";
   }
   return letter;
}

string Student::passOrFail() {
   string decision;
   double grade = computeAverage();
   
   if (grade >= 69.5) {
      decision = "Pass";
   }
   else {
      decision = "Fail";
   }
   return decision;
}

void Student::printGradeReport() {
   cout << "Grade Report" << endl;
   cout << "************************" << endl;
   cout << "Name: " << studentName << endl;
   cout << "Midterm Grade: " << midterm << endl;
   cout << "Final Grade: " << finalGrade << endl;
   cout << "Average: " << fixed << setprecision(1) << computeAverage() << "    " << passOrFail() << endl;
}
