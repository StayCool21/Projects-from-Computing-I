#include <iostream>
using namespace std;

int main()
{
   int lengthValue;
   int widthValue;
   int area;
   
   cout << "Enter the length: ";
   cin >> lengthValue;
   cout << "Enter the width: ";
   cin >> widthValue;
   
   area = lengthValue * widthValue;
   cout << endl;
   
   cout << "The area of a " << lengthValue << " x " << widthValue << " rectangle is "
        << area << endl;
   
   return 0;
}
