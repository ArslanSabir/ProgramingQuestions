#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	
    ifstream file;
	file.open("Q10.txt");
	if(!file)
	{
		cout<<"Unable to open file";
		exit(1);
	}
	
  	int i=0,num;
    int arr[500];
    while (file>>num)
    {
    	while(i<500)
    	{
	    	arr[i]=num;
	    	cout<<arr[i];
			i++;
		}
    	
      
    }
  	

return 0; 
}
