#include<iostream>
using namespace std;

int summation(int valOne, int ValTwo);


int main()
{
    int startValue;
    int stopValue;
    int answer;
    char again;
    do
    {
        cout << "Enter the start value: ";
        cin >> startValue;
        cout << "Enter the stop value: ";
        cin >> stopValue;
        answer = summation(startValue, stopValue);
        
        // Call the function summation (after you write it)
        // and store the value returned into the variable answer
        // declared above
        // You can assume that start value is less than or equal
        // to stop value
        // The description of the function is given below
        // Don't forget to put prototype at top



        cout << "The summation from " << startValue << " to " << stopValue << " is " << answer << endl;

        cout << "Do you want to find another summation (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
    cout << endl;
    return 0;
}


int summation(int valOne, int ValTwo) {
   int i;
   int runningTotal;
   runningTotal = 0;
   
   for (i = valOne; i <= ValTwo; i++) {
      runningTotal = runningTotal + i;
   }
   return runningTotal;
}
   
   
// Write  function called summation. The function will have 
// 2 formal parameters. The first formal parameter is the start
// value and the second formal parameter is the stop value.
// You can assume start value is less than or equal to stop value
// The method will find the summation from the first value
// to the stop value and return the answer
// The function should have a loop

// for example, if start value is 2 and stop value is 5, the
// program will return the value 14 (2 + 3 + 4 + 5)