//Program to find Smallest and Largest Word in a String in C++

#include<iostream>
#include<cstring>
using namespace std;
void Word(string sen){
   int senLength = sen.length();
   int startIndex = 0, endIndex = 0;
   int minLength = senLength, maxLength = 0, currentLength;
   string smallest, largest;
   while (endIndex <= senLength)
   {
      if (sen[endIndex] != '\0' && sen[endIndex] != ' ')
         endIndex++;
      else
	  {
         currentLength = endIndex - startIndex;
         if (currentLength < minLength)
		 {
            smallest = sen.substr(startIndex, currentLength);
            minLength = currentLength;
         }
         if (currentLength > maxLength)
		 {
            largest = sen.substr(startIndex, currentLength);
            maxLength = currentLength;
         }
         endIndex++;
         startIndex = endIndex;
     	}
   }
   cout<<"Smallest Word from the string is "<<smallest<<"\n";
   cout<<"Largest Word from the string is "<<largest;
}
int main() 
{
   string str;
   cout<<"Enter the sentence:	";
   getline(cin, str);
   cout<<endl;
   Word(str);
}
