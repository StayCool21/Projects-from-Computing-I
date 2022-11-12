# include <iostream>
using namespace std;

int main() 
{   
   int dozenCounter;
   int totalEggs;
   
   cout << "Enter number of dozen: "; 
   cin >> dozenCounter;
   
   totalEggs = dozenCounter * 12;
   cout << endl;
   
   cout << "There are " << totalEggs << " eggs" << endl; 
   
   return 0;
}