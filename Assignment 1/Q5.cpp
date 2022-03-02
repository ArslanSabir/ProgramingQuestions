/* v.	Given an array of ints, return true if 1, 2, 3 all appears in the array somewhere. */

#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Enter the size of array:  ";
	cin >> size;
	cout << endl;
	int arr[size];

	int n1, n2, n3;
	n1 = n2 = n3 = 0;

	cout << "Enter numbers in array:: " << endl;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 1)
			n1 = 1;

		if (arr[i] == 2)
			n2 = 1;

		if (arr[i] == 3)
			n3 = 1;
	}

	if (n1 == 1 && n2 == 1 && n3 == 1)
		cout << "True";
	else
		cout << "False";

	return 0;
}