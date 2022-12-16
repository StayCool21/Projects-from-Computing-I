#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
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
      
      void setStudentName(string studentName);
      void setMidterm(int grade);
      void setFinal(int grade);
      
      double computeAverage();
      string computeLetterGrade(); 
      void printGradeReport();
};







#endif
