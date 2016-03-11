#include <iostream>
#include <cassert>
#include "Lstack.h"
#include<string>
#include<cctype>
using namespace std;

int main(){
	char token;
	int a;
	int b;
	int c;     //result of each minor operation between variables a and b.
	string postfixExp;
	int exclcount = 0;

	int result;
	char YN = 'Y';

	while(YN != 'N'){
		cout << "NOTE: Enter # to exit the program. \n";
			Stack opStack;
			cout << "\n Please enter Postfix Expression:";
			getline(cin, postfixExp);
			
			if(postfixExp == "#") break;
			
			for (int i = 0; i < postfixExp.length(); i++){
				token = postfixExp[i];
				switch(token)
				{
					case ' ': 
							exclcount++;
							break;
					case '(':
							exclcount++;
							break;
					case ')' :
							exclcount++;
							break;
					case '*':
							a = opStack.top();
							opStack.pop();
							b = opStack.top();
							opStack.pop();
							c = a * b;
							opStack.push(c);
							break;
					case '/':
							a = opStack.top();
							opStack.pop();
							b = opStack.top();
							opStack.pop();
							c = b/a;
							opStack.push(c);
							break;
					case '+':
							a = opStack.top();
							opStack.pop();
							b = opStack.top();
							opStack.pop();
							c = a + b;
							opStack.push(c);
							break;
					case '-':
							a = opStack.top();
							opStack.pop();
							b = opStack.top();
							opStack.pop();
							c = b - a;
							opStack.push(c);
							break;
					case '0': case '1':
					case '2': case '3':
					case '4': case '5':
					case '6': case '7':
					case '8': case '9':
							int value;
							value = token - '0';
							opStack.push(value);

					default:        //skips letters and other nonimportant symbols
							exclcount++;
							break;
					}
				}
			result = opStack.top();
			opStack.pop();
			do{
				cout << exclcount << " characters excluded from output. \n";
				cout << "The value of the expression is " << result << "\n\n";
				exclcount = 0;
				cout << "More Expressions? (Y or N)? ";
				cin >> YN;
					YN = toupper(YN);
				if (YN = 'Y'){
					break;
					}
				else if (YN = 'N')
					exit(0);
			}while (YN != 'Y' ^ YN != 'N');
		if (YN = 'N')
			break;
		
		cin.ignore();
	}
}					
