#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    
    int n;
    cout<<"Enter the length of the square matrix";
    cin>>n;
    
    int arr[n][n];
    
    for(int i=0; i<n ; i++){
        
        for(int j=0; j<n; j++){
            
            cin>>arr[i][j]; 
                       
        }
    }

    int sumOfPDiag=0, sumOfSDiag=0;
    
    for(int i=0; i<n ; i++){
        
        for(int j=0; j<n; j++){
          
          if(i==j)
            sumOfPDiag+=arr[i][j]; 
          if((i+j)==n-1)
            sumOfSDiag+=arr[i][j]; 
            
        }
    }

    int Diff= abs(sumOfPDiag-sumOfSDiag);
    cout<<Diff;
    
    return 0;
}

