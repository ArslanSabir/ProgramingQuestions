/* Q.viii.	Write a program which should evaluate a given mathematical expression , hint you need use Stack
For Example: (2+3) -2 + (3*2) = 5-2+6= 9
*/

#include<bits/stdc++.h>
using namespace std;


int prec(char c) {
	if(c == '^')
		return 3;
	else if(c == '/' || c=='*')
		return 2;
	else if(c == '+' || c == '-')
		return 1;
	else
		return -1;
}

// The main function to convert infix expression
//to postfix expression
string infixToPostfix(string s) {

	stack<char> st; 
	string result;

	for(int i = 0; i < s.length(); i++) {
		char c = s[i];

		// If the scanned character is
		// an operand, add it to output string.
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
			result += c;

		// If the scanned character is an
		// �(�, push it to the stack.
		else if(c == '(')
			st.push('(');

		// If the scanned character is an �)�,
		// pop and to output string from the stack
		// until an �(� is encountered.
		else if(c == ')') {
			while(st.top() != '(')
			{
				result += st.top();
				st.pop();
			}
			st.pop();
		}

		//If an operator is scanned
		else {
			while(!st.empty() && prec(s[i]) <= prec(st.top())) {
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}

	// Pop all the remaining elements from the stack
	while(!st.empty()) {
		result += st.top();
		st.pop();
	}

//	cout << result << endl;
	return result;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

float scanNum(char ch) {
   int value;
   value = ch;
   return float(value-'0');   //return float from character
}
int isOperator(char ch) {
   if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/' || ch == '^')
      return 1;    //character is an operator
   return -1;   //not an operator
}
int isOperand(char ch) {
   if(ch >= '0' && ch <= '9')
      return 1;   //character is an operand
   return -1;   //not an operand
}
float operation(int a, int b, char op) {
   //Perform operation
   if(op == '+')
      return b+a;
   else if(op == '-')
      return b-a;
   else if(op == '*')
      return b*a;
   else if(op == '/')
      return b/a;
   else if(op == '^')
      return pow(b,a); //find b^a
   else
      return INT_MIN; //return negative infinity
}
float postfixEval(string postfix) {
   int a, b;
   stack<float> stk;
   string::iterator it;
   for(it=postfix.begin(); it!=postfix.end(); it++) {
      //read elements and perform postfix evaluation
      if(isOperator(*it) != -1) {
         a = stk.top();
         stk.pop();
         b = stk.top();
         stk.pop();
         stk.push(operation(a, b, *it));
      }else if(isOperand(*it) > 0) {
         stk.push(scanNum(*it));
      }
   }
   return stk.top();
}

int main() {
	 
	string exp;
	cout<<"Enter the expression: ";
	getline(cin, exp);
	// (2+3)-2+(3*2) 
	
//	infixToPostfix(exp);
	string post= infixToPostfix(exp);
	
 	cout<<"The result is:  "<<postfixEval(post);
	return 0;
}