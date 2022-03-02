/* C++ program to count 
the number of occurrences of a specific digit in a number */

#include <iostream>
using namespace std;

//Decleration of function to count occurrences of digit "d" in Number "num"
long long int count_occerrances(long long int num, int d);


int main()
{
	int d;
	long long int num;
	
	cout<<"Please Enter Number:  ";
	cin>>num;
	cout<< "\n";
	
	cout<<"Please enter a digit to find the occurrences from above number:  ";
	cin>>d;
	cout<< "\n";
	
	cout<<"The Occurrences of digit " <<d << " in number " <<num  << " are :  "<< count_occerrances(num, d) <<endl; 
	

	

	return 0;
}


//Function to count occurrences of digit "d" in Number "num"

long long int count_occerrances(long long int num, int d)
{
	long long int count = 0;
	
	while (num>0)
	{
		if (num % 10 == d)
			count= count + 1;
	
		num = num / 10;
		
	}
	
	return count;
}

