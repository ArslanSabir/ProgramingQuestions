/* i.	Write a program which should count Vowels in the strings 
and return vowels in reverse order if vowels are more than 3. */

#include <iostream>
#include <string>

using namespace std;
int main()
{
	int count = 0;
	int l;
	string userInput;
	string revString;
	cout << "enter your string:	";
	getline(cin, userInput);
	cout << endl;

	for (int i = 0; i < userInput.length(); i++)
	{
		// count and store vowels in an array
		if (userInput[i] == ('a') || userInput[i] == ('A') || userInput[i] == ('e') || userInput[i] == ('E') || userInput[i] == ('i') || userInput[i] == ('I') || userInput[i] == ('o') || userInput[i] == ('O') || userInput[i] == ('u') || userInput[i] == ('U'))
		{
			count = count + 1;
			revString = revString + userInput[i];
		}
	}
	l = revString.length();
	cout << "The number of vowels are:  " << count << endl;

	if (count > 3)
	{
		// reverse and print the array
		cout << "The Reversed vowels are:  ";
		for (int i = l; i >= 0; i--)
		{
			cout << "" << revString[i];
		}
	}
	return 0;
}
