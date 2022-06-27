#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   cout << "Enter a word: " << endl;
   string word;
   cin >> word;

   if (word.length() < 5)
   {      
      cout << word << " is short" << endl;
   }

   if (word.length() >= 10)
   {
      cout << word << " is long" << endl;
   }

   if (word.substr(word.length() - 1) == "y")
   {
      cout << word << " ends in a y" << endl;
   }

   if (word.substr(0,1) == word.substr(word.length() - 1))
   {
      cout << word << " starts and ends with the same letter";
   }      
   return 0;
}