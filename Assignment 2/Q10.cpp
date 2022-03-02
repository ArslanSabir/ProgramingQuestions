/* Q.x.	Write a program to convert binary to octal and
then octal to hex and hex to decimal. Input will be given in binary.
*/

#include <iostream>
#include <cmath>

using namespace std;

void BinToOctal(int bin);
void BinToHexaDec(int bin);
int BinToDec(int bin);

int main()
{
    int binaryNum;
    cout << "Enter any Binary Number: ";
    cin >> binaryNum;

    BinToOctal(binaryNum);
    BinToHexaDec(binaryNum);
    BinToDec(binaryNum);
    return 0;
}

void BinToOctal(int bin)
{
    int octal = 0, p = 1, check = 1, rem;
    int i = 0, octalNum[50];
    while (bin != 0)
    {
        rem = bin % 10;
        octal = octal + (rem * p);
        if (check % 3 == 0)
        {
            octalNum[i] = octal;
            p = 1;
            octal = 0;
            check = 1;
            i++;
        }
        else
        {
            p = p * 2;
            check++;
        }
        bin = bin / 10;
    }

    if (check != 1)
        octalNum[i] = octal;

    cout << "\nEquivalent Octal Value: ";
    for (i = i; i >= 0; i--)
        cout << octalNum[i];
    cout << endl;
}

void BinToHexaDec(int bin)
{
    int hex = 0, p = 1, check = 1, i = 0, rem = 0;
    char hexD[50];
    while (bin != 0)
    {
        rem = bin % 10;
        hex = hex + (rem * p);
        if (check % 4 == 0)
        {
            if (hex < 10)
                hexD[i] = hex + 48;
            else
                hexD[i] = hex + 55;
            p = 1;
            hex = 0;
            check = 1;
            i++;
        }
        else
        {
            p = p * 2;
            check++;
        }
        bin = bin / 10;
    }
    if (check != 1)
        hexD[i] = hex + 48;
    if (check == 1)
        i--;

    cout << "\n Equivalent Hexadecimal Value: ";
    for (i = i; i >= 0; i--)
        cout << hexD[i];
    cout << endl;
}

int BinToDec(int bin)
{
    int dec = 0, i = 0, rem;
    while (bin != 0)
    {
        rem = bin % 10;
        dec = dec + rem * pow(2, i);
        i++;
        bin = bin / 10;
    }

    cout << "\nEquivalent Decimal Value = " << dec;
    cout << endl;
}