#include <iostream>
using namespace std;

int main()
{
	string str;
	str={"((()()()()(()"};
	cout<<"The given parentheses are:  "<<str<<endl;
	
	int n;
	n= str.length();
	int openB=0, closeB=0, length=0;
	for(int i=0; i<n; i++)
	{
		if(str[i]=='(')
			openB++;
		else
			closeB++;
		if(openB==closeB)
			length= max(length, 2*closeB);
		else if(closeB>openB)
			openB=closeB=0;
	}
	openB=closeB=0;
	for(int i=n-1; i>=0; i--)
	{
		if(str[i]=='(')
			openB++;
		else
			closeB++;
		if(openB==closeB)
			length= max(length, 2*openB);
		else if(openB>closeB)
			openB=closeB=0;			
	}
	cout<<"The length of valid parentheses is: "<<length;
	return 0;
}


