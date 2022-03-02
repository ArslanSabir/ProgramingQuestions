/*vi.	Given 2 arrays of ints, a and b, 
return True if they have the same first element or they have the same last element. Both arrays will be length 1 or more. */

#include <iostream>
using namespace std;

int main()
{
	int s1,s2;
	cout<<"enter the size of first array:  ";
	cin>>s1;
	cout<<endl;
	
	cout<<"enter the size of second array:  ";
	cin>>s2;
	cout<<endl;
	
	int arr1[s1],arr2[s2];
	
	cout<<"Enter numbers in first array:  "<<endl;
	for(int i=0; i<s1; i++)
	{
		cin>>arr1[i];
	}

	cout<<endl;
	cout<<"Enter numbers in second array:  "<<endl;
	
	for(int i=0; i<s2; i++)
	{
		cin>>arr2[i];
	}
	
	cout<<endl;
	
	if(arr1[0]==arr2[0] || arr1[s1-1]==arr2[s2-1])
		cout<<"True";
	else
		cout<<"False";
	return 0;
}