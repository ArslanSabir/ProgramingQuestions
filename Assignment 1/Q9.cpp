/* ix.	Write a function Alphabet (str) take the str string parameter being passed and
 return the string with the letters in alphabetical order (ie. hello becomes ehllo).  */

#include <iostream>
#include <string>
using namespace std;

void alphabeticOrder(string str);

int main ()
{
	string userInput;
  	cout<<"Enter the string : ";
	cin>>userInput;
	cout<<endl;

	alphabeticOrder(userInput);
	return 0;
}

void alphabeticOrder(string str)
{
	char temp;	
	for (int i = 0; i < str.length(); i++) {
		for (int j = i+1; j < str.length(); j++) {
			if (str[i] > str[j]) {
					temp = str[i];
					str[i] = str[j];
					str[j] = temp;
			}
		}
	}
	cout<<"The string in alphabetical Order is:   " <<str;
}