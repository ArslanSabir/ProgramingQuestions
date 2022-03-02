/* Q.xiv. Find the sum of all the multiples
    of 3 or 5 below 1000.
*/

#include <iostream>
using namespace std;

int main()
{
    int sum;

    cout << "\t\t\t **** The multiples of 3 or 5 below 1000 **** \n"
         << endl;
    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl
         << endl;
    cout << "The sum of multiples of 3 or 5 below 1000 is ::  " << sum;

    return 0;
}