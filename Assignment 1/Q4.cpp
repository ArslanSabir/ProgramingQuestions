/* iv.	Given a string and a non-negative int a, 
return a larger string that is n copies of the original string. */

#include <iostream>
#include <string>

using namespace std;
int main()
{
	string str, copy;
	int n;
	cout << "Enter string:	";
	cin >> str;
	cout << endl;

	cout << "how many times given string copy:	";
	cin >> n;
	cout << endl;

	copy = "";

	for (int i = 0; i < n; i++)
	{
		copy = copy + str;
	}

	cout << copy;
	return 0;
}