#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    string str;
    int a;
    double b{0.0};
    cin>>a;
    cin>>b;
    
    cin.ignore();
    // to ignore the new line character (enter key) after the double input 
    getline(cin,str);
    cout<<a+i<<endl;
    cout<<fixed<<setprecision(1)<<b+d<<endl;
    cout<<s + str ;   
    return 0;

}
