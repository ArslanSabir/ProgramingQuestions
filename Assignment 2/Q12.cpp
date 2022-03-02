/*xii.	A 3x3 normal magic square is a 3x3 grid 
where the numbers on each row, each column, and both diagonals 
all add up to the same number, and the square contains the 
numbers 1 to 9 exactly. */

#include <iostream>

using namespace std;
int main()
{
    int n = 3;
    int Mat[n][n];
    cout << "Enter square matric of order " << n << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> Mat[i][j];
        }
    }
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s1 = s1 + Mat[i][i];
    }
    for (int i = 0; i < n; i++)
    {
        s2 = s2 + Mat[i][n - 1 - i];
    }

    if (s1 != s2)
    {
        cout << "The given square Matrix is not a Magic Square";
    }
    else
    {
        int csum = 0, rsum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (rsum == s1)
                {
                    rsum = 0;
                }
                rsum += Mat[j][i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (csum == s1)
                {
                    csum = 0;
                }
                csum += Mat[i][j];
            }
        }

        // cout<<s1<<s2<<rsum<<csum<<endl;
        if (csum == rsum && s1 == csum)
            cout << "The given square Matrix is a Magic Square";
        else
            cout << "The given square Matrix is not a Magic Square";
    }
    return 0;
}