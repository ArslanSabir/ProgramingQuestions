

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int j;
    double f;
    string s1;    
	
	cout<<"Enter a number: ";
	cin>>j;

    cout<<"Enter a number with decimal: ";
    cin>>f;
    
    cout<<"Enter a string: "<<endl;
    cin.ignore();
    getline (cin,s1);
 
    cout<<"sum of integers  = "<<i+j<<endl;
    printf("sum of decimal numbers = %.1f \n",d+f);
	cout<<"concatenation of two strings =:: "<<s + s1;
    return 0;
 }
