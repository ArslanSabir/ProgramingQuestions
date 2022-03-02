/* Q.iii.	Convert a non-negative integer to its English words representation 
and print in reverse if total characters in English words 
are more than total words in a sentence.
*/

#include <iostream>
using namespace std;

string NtoWord(int num);
string words(long n);

int main()
{
	long n;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<endl;
	cout<<words(n);

	return 0;
}

string one[]= {" ", " one ", " two ", " three ", " four ", " five ", " six ", " seven "," eight ", " nine ", " ten ", " eleven ", " twelve ", " thirteen ", " fourteen ", " fifteen ", " sixteen ", " seventeen ", " eighteen ", " nineteen "};

string ten[]= {" ", " ", " tweenty ", " thirty ", " forty ", " fifty ", " sixty ", " seventy ", " eighty ", " ninty "};

string NtoWord(int num, string s)
{
	string str= " ";
	
	if(num >19)
		str= str + (ten[num/10]+ one[num%10]);
	else
		str= str + one[num];
	
	if(num)
		str= str + s;
	
	return str;	
}

string words(long n)
{
	string w;
	
	/* handles digits at ten millions and hundred
	 millions places (if any) */
	w= w+ (NtoWord((n/10000000), " crore "));
	
	/* handles digits at hundred thousands and one
	 millions places (if any) */
	w= w+ (NtoWord(((n/100000) %100), " lac "));
	
	 /* handles digits at thousands and tens thousands
	 places (if any) */
	w= w+ (NtoWord(((n/1000) %100), " thousand "));
	
	 /* handles digits at hundreds places (if any) */
	w= w+ (NtoWord(((n/100) %10), " hundred "));
	
	if(n> 100 && n % 100)
		w= w+ ("and ");
		
	w= w+ (NtoWord(n % 100, " "));
	
	return w;
}