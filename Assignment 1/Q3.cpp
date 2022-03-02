/* iii.	Write a program to return the third and last largest number 
in the array if first largest number is greater than second largest by 20%. */

#include <iostream>
using namespace std;
// 5 125  13 100 3
int main()
{
	int n,temp;
	cout<<"Enter the size of the array::  ";
	cin>>n;
	cout<<endl;

	float arr[n];
	
	cout<<"Enter numbers in array::  ";
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	// sorted array:
	cout<<"The Sorted String is:  ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	// condtion: first largest is greater than 20% of second largest number
	// print third largest number
	if(arr[0] > arr[1]+(0.2)*arr[1])
	{
		cout<<"\n The First largest number is: "<<arr[0]<<endl;
		cout<<"\n The Third largest number is:  "<<arr[3]<<endl;
	}
	else
		cout<<"The condition is not fulfilled";
	return 0;
}