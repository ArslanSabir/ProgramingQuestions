/*xvi.	A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two digit and 3-digit numbers.*/

#include <iostream>
using namespace std;
int main()
{
	int a, b, result = 0;
	for (int i = 99; i >= 10; i--)
	{
		for (int j = 999; j >= 100; j--)
		{
			int product = i * j;
			int n = product;
			int rev = 0;

			while (n != 0)
			{
				rev = (rev * 10) + (n % 10);
				n = n / 10;
			}
			if (product == rev && product > result)
			{
				result = product;
				a = i;
				b = j;
			}
		}
	}
	cout << "The largest palindrome made from the product of two digit and 3-digit numbers\n"
		 << a << " X " << b << " = " << result;

	return 0;
}