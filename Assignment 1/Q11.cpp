/* xi.	Write a Program which should read text from file and display list of all sentences 
which have atleast two consecutive alphabets in it otherwise write sentence in another file.  */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string str;
	int temp = 0;

	cout << "\t \t \t \t ***** Sentence with consectrive alphabetes are ***** " << endl
		 << endl;
	ifstream in("file.txt");
	ofstream out("output.txt");

	while (getline(in, str, '.'))
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == str[i + 1] || str[i] == str[i - 1])
			{
				cout << str << endl;
				temp = 1;
				break;
			}
		}
		if (temp == 0)
		{
			out << str;
		}
	}
	return 0;
}