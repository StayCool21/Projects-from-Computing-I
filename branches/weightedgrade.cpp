#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
   string firstName;
   string lastName;
   double quizAvg;
   double midtermGrade;
   double finalGrade;
   double totalGrade;
   char letterGrade;
   char firstInitial;
   
   cout << "Enter first name: ";
   cin >> firstName;
   
   firstInitial = firstName.at(0);
   
   cout << "Enter last name: ";
   cin >> lastName;
   
   cout << "Enter the quiz average: ";
   cin >> quizAvg;
   
   cout << "Enter the midterm grade: ";
   cin >> midtermGrade;
   
   cout << "Enter the final grade: ";
   cin >> finalGrade;
   
   
   totalGrade = ((0.25 * quizAvg) + (0.35 * midtermGrade) + (0.4 * finalGrade));
   
   if (totalGrade >= 89.5) {
      letterGrade = 'A';
   }
   else if (totalGrade >= 79.5) {
      letterGrade = 'B';
   }
   else if (totalGrade >= 69.5) {
      letterGrade = 'C';
   }
   else if (totalGrade >= 59.5) {
      letterGrade = 'D';
   }
   else {
      letterGrade = 'F';
   }
   
   
   cout << endl;
   cout << "Grade Report" << endl;
   cout << "Letter Grade Earned: " << letterGrade << endl;
   cout << "Average: " << fixed << setprecision(1) << totalGrade << endl;
   cout << "Name: " << firstInitial << ". " << lastName << endl;
   
   return 0;
}
   