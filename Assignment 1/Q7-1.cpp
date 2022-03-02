/* vii.	Given 3 int values, a b c, return their sum. 
However, if one of the values is the same as another of the values, it does not count towards the sum.  */

#include <iostream>
using namespace std;

int lone_sum(int a, int b, int c)
{
	int sum = 0;

	if (a != b && a != c)
		sum = sum + a;

	if (b != a && b != c)
		sum = sum + b;

	if (c != b && c != a)
		sum = sum + c;

	cout << sum;
	return sum;
}

int main()
{
	int x, y, z;

	cout << "Enter first number:   ";
	cin >> x;

	cout << "Enter second number:  ";
	cin >> y;

	cout << "Enter third number:   ";
	cin >> z;
	cout << endl;

	cout << "The lone sum is :   ";
	lone_sum(x, y, z);

	return 0;
}