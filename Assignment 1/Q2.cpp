/*ii.	Write a function which should add the two vowels in the arrays 
and generate third array and store vowels only once if repeated.*/
#include <iostream>
using namespace std;

int main()
{
	string userInput, secondUserInput;
	string firstStringVowels, secondStringVowels, finalVowel, uniqueVowel;

	cout << "Enter first Array:	";
	getline(cin, userInput);

	cout << "Enter second Array:	";
	getline(cin, secondUserInput);

	//extract vowels from both given strings
	for (int i = 0; i < userInput.length(); i++)
	{
		if (userInput[i] == 'a' || userInput[i] == 'A' || userInput[i] == 'e' || userInput[i] == 'E' || userInput[i] == 'i' || userInput[i] == 'I' || userInput[i] == 'o' || userInput[i] == 'O' || userInput[i] == 'u' || userInput[i] == 'U')
			firstStringVowels += userInput[i];

		if (secondUserInput[i] == 'a' || secondUserInput[i] == 'A' || secondUserInput[i] == 'e' || secondUserInput[i] == 'E' || secondUserInput[i] == 'i' || secondUserInput[i] == 'I' || secondUserInput[i] == 'o' || secondUserInput[i] == 'O' || secondUserInput[i] == 'u' || secondUserInput[i] == 'U')
			secondStringVowels += secondUserInput[i];
	}

	//concatenate both strings of vowels
	finalVowel = firstStringVowels + secondStringVowels;

	//	remove redudency from concatenated string of vowels
	int i, j;
	for (i = 0; i < finalVowel.length(); i++)
	{
		for (j = 0; j < finalVowel.length(); j++)
		{
			if (finalVowel[j] == finalVowel[i])
				break;
		}
		if (i == j)
			uniqueVowel += finalVowel[i];
	}

	cout << "\n The Unique vowels of both strings are:  " << uniqueVowel;

	return 0;
}
