/* Q.iv.	Given an input  n, count the total number of digit 1 
appearing in all non-negative integers less than or equal to n.
*/

#include <iostream>
using namespace std;

int countDigitOne(int n)
{
    if (n <= 0)
        return 0;
    int q = n, x = 1, ans = 0;
    do
    {
        int digit = q % 10;
        q /= 10;
        ans += q * x;
        if (digit == 1)
            ans += n % x + 1;
        if (digit > 1)
            ans += x;
        x *= 10;
    } while (q > 0);
    return ans;
}

int main()
{
    int n;
    cout<<"Please enter any number: ";
    cin>>n;
    cout <<"The total number of digit '1' : " <<countDigitOne(n) << endl;
    return 0;
}