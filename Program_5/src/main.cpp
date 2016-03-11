#include <iostream>
#include <cassert>
#include "Lstack.h"
#include<string>
#include<cctype>
using namespace std;

	int main(){
	char token;
	int value;
	string postfixExp;
	int exclcount = 0;
	stack opStack;
	char YN = 'Y'

	do{
		cout << "NOTE: Enter # to exit the program. \n";
		for (;;)
		{
			cout << "\n infix expression? ;
			getline(cin, postfixExp);
			
			if(infixExp == "#") break;
			
			for (int i = 0; i < infixExp.length(); i++){
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
							int a = opStack.pop();
							int b = opStack.pop();
							int temp = a * b;
							opStack.push(temp);
							break;
					case '/':
							int a = opStack.pop();
							int b = opStack.pop();
							int temp = b/a;
							opStack.push(temp);
							break;
					case '+':
							int a = opStack.pop();
							int b = opStack.pop();
							int temp = a + b;
							opStack.push(temp);
							break;
					case '-':
							int a = opStack.pop();
							int b = opStack.pop();
							int temp = b - a;
							opStack.push(temp);
							break;
					case '0': case '1':
					case '2': case '3':
					case '4': case '5':
					case '6': case '7':
					case '8': case '9':
							int value;
							value = token - '0';
					default:        //skips letters and other nonimportant symbols
							exclcount++;
							break;
				}
			do{
				cout << exclcount << " characters excluded from output. \n";
				cout << "The value of the expression is " << value << "\n\n";
				exclcount = 0;
				cout << "More Expressions? (Y or N)? ";
				cin >> YN
					YN = toupper(YN);
				if (YN = 'Y')
					cout << '\n';
					break;
				else if (YN = 'N')
					break;
			}while (YN != 'Y' ^ YN != 'N');
			
	
	}while(YN != 'N' );



					
