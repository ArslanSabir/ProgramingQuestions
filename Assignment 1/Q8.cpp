/* viii.	Write a the function Word (sen) take the sen parameter being passed and
 return the largest word in the string. If there are two or more words 
 that are the same length, return the first word from the string with that length.  */

#include <iostream>
#include <cstring>
using namespace std;

void Word(string sen)
{
   int senLength = sen.length();
   int startIndex = 0, endIndex = 0;
   int maxLength = 0, currentLength;
   string largest;

   while (endIndex <= senLength)
   {
      if (sen[endIndex] != '\0' && sen[endIndex] != ' ')
         endIndex++;
      else
      {
         currentLength = endIndex - startIndex;

         if (currentLength > maxLength)
         {
            largest = sen.substr(startIndex, currentLength);
            maxLength = currentLength;
         }
         endIndex++;
         startIndex = endIndex;
      }
   }

   cout << "Largest Word from the string is ::   " << largest;
}
int main()
{
   string str;
   cout << "Enter the sentence:	";
   getline(cin, str);
   cout << endl;
   Word(str);

   return 0;
}