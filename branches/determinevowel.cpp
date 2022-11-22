#include <iostream>
using namespace std;

int main () {
   char ch;
   bool isUpperVowel; 
   bool isLowerVowel;
   
   cout << "Enter a letter: "; 
   cin >> ch;
   
   isUpperVowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
   
   isLowerVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
      
   if (! (isalpha(ch))) {
      cout << "It is NOT a letter" << endl;
   }
   
   else if (isUpperVowel || isLowerVowel) {
      cout << "It's a vowel" << endl;
   }
   
   else {
      cout << "It's a consonant" << endl;
   }
   
   return 0;
}
   