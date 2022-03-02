/*xv.	Given a list of 100 values, write a program which should display largest possible sum out of 100 values*/

#include <iostream>
using namespace std;

int main()
{
	int n = 100, a[n];
	// 1 to 100 numbers
	// 66 25 21 41 72 7 47 79 53 85 67 82 62 55 40 94 11 57 28 90 93 97 52 68 10 2 56 24 34 5 58 49 46 95 44 60 4 13 12 14 77 15 61 26 86 19 84 38 22 87 63 78 99 16 18 37 75 50 71 31 74 69 3 96 51 30 92 39 32 65 36 45 88 48 83 89 100 43 64 54 17 6 80 29 59 1 35 76 23 33 73 20 8 42 70 81 91 98 27 9
	int firstLarge = 0, secondLarge = 0;

	cout << "Enter " << n << " values ::" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	if (a[0] > a[1])
	{
		firstLarge = a[0];
		secondLarge = a[1];
	}
	else
	{
		firstLarge = a[1];
		secondLarge = a[0];
	}

	for (int i = 2; i < n; i++)
	{
		if (a[i] > firstLarge)
		{
			secondLarge = firstLarge;
			firstLarge = a[i];
		}

		if (a[i] > secondLarge && a[i] != firstLarge)
		{
			secondLarge = a[i];
		}
	}
	int sum = firstLarge + secondLarge;
	cout << "first large is " << firstLarge << " second large is " << secondLarge;
	cout << "The largest possible sum = " << sum;

	return 0;
}
