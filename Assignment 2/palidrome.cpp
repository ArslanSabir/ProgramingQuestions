#include <iostream>
using namespace std;


int main()
{	
	int i, j, num, rev, result=0;
	for(i=999; i>=100; i--)
	{
		for(j=999; j>=100; j--)
		{
			num= i*j;
			if(num<result)
				break;
			int n=num;
			while(n!=0)
			{
				rev=(rev*10)+(n%10);
				n= n/10;
			}
			if(num==rev && num>result)
				result=num;
		}
		
	}

	cout<<"The largest product is:  "<<result;
	
	return 0;
}


