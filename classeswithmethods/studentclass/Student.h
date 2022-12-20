#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>

using namespace std;
class Student {
   private:
   string studentName;
   int midterm;
   int finalGrade;
   public:
   Student();
   Student(string name, int midterm, int fin);
   
   string getName();
   int getMidterm();
   int getFinal();
   
   void setMidterm(int grade);
   void setFinal(int grade);
   void setStudentName(string studentName); 
   
   double computeAverage();
   string computeLetterGrade();
   string passOrFail();
   
   void printGradeReport();
   
   
   
};
#endif