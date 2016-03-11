//Jared Jones
//Project Number: 2
//Project Desc: Quadratic Expressions
//Course: Data Structures
//Date: Jan 25 2016


#include<iostream>
#include<string>
#include<limits>
#include "Quadfuncs.h"

using namespace std;

void submenu(){
    //submenu prompt that is frequently repeated
    cout << endl << "1 - Quadratic q1";
    cout << endl << "2 - Quadratic q2"; 
    cout << endl << "3 - Return to main menu" << endl << endl;
}
void inputcheck(){
    //checks for valid input
    cout << endl << "invalid input!\n";
    cin.clear();
    cin.ignore( numeric_limits<int>::max(), '\n' );
    cout << endl << "Please enter a valid choice. ";
        }         

int main(int argc, char **argv) {

    Quadratic q1;
    Quadratic q2;
    
    double newA;
    double newB;
    double newC;
    //initial user prompts
    cout << endl << "Welcome to The Quadratic Expressions Program!";
    cout << "First, input your coefficient values for your "
         << "first quadratic function. ";
    cout << endl << "Input coefficient a: "; 
    cin >> newA;
    cout << endl << "Input coefficient b: ";
    cin >> newB;
    cout << endl << "Input coefficient c: ";
    cin >> newC;
    q1.set(newA, newB, newC);
    cout << endl <<"Next, input coefficient values for a"
         << "second quadratic function";
    cout << endl << "Input coefficient a: "; 
    cin >> newA;
    cout << endl << "Input coefficient b: ";
    cin >> newB;
    cout << endl << "Input coefficient c: ";
    cin >> newC;
    cout << endl << endl << "Thanks for your input.";
    q2.set(newA, newB, newC);
	
	int choice = 0 ;
	
    //beginning of the menu
    do{
    
    
    
    int subchoice = 0;	
    int subsubchoice = 0;

	cout << endl << "What would you like to do from here? ";
    cout << endl << endl << "1 - Display a quadratic function";
    cout << endl << "2 - Display a coefficient of a quadratic function";
    cout << endl << "3 - Set new coefficients for a quadratic function";
    cout << endl << "4 - Evaluate a quadratic equation";
    cout << endl << "5 - return sum of two quadratic equations";
    cout << endl << "6 - multiply a quadratic equation's coefficients by r and"          << "display the function";
    cout << endl << "7 - Evaluate roots";
	cout << endl << "8 - exit the program" << endl << endl;
		cin >> choice;
		if (choice == 1) {
            do{
            cout << endl << "Which Quadratic function would you like to display? ";
                submenu();
                cin >> subchoice;
                if (subchoice == 1)
                    q1.display();
                else if (subchoice == 2)
                    q2.display();
                else if (subchoice == 3)
                    break;
                else if( ! ( cin >> subchoice ) ) {
                    inputcheck();
                    }         
            }while(subchoice != 3);
        }
		else if(choice == 2) {
			
            do{
			
            cout << endl << "Which Quadratic function would you like to check "
                 << "the coefficients of?";
            submenu();
			cin >> subchoice;
            
                if (subchoice == 1){
                    cout << endl <<"Which coefficient would you like to display?";
                    cout << endl << endl << "1 - coefficient a";
                    cout << endl << "2 - coefficient b";
                    cout << endl << "3 - coefficient c" << endl << endl;
                    cin >> subsubchoice;
                    if (subsubchoice == 1)
                        cout << endl << "Your coefficient is:" << q1.getA();
                    else if(subsubchoice == 2)
                        cout << endl << "Your coefficient is:" << q1.getB();
                    else if(subsubchoice == 3)
                        cout << endl << "Your coefficient is:" << q1.getC();
                	}
                else if (subchoice == 2){
                    cout << endl <<"Which coefficient would you like to display?";
                    cout << endl << endl << "1 - coefficient a";
                    cout << endl << "2 - coefficient b";
                    cout << endl << "3 - coefficient c" << endl << endl;
                    cin >> subsubchoice;
                    if (subsubchoice == 1)
                        cout << endl << "Your coefficient is:" << q2.getA();
                    else if(subsubchoice == 2)
                        cout << endl << "Your coefficient is:" << q2.getB();
                    else if(subsubchoice == 3)
                        cout << endl << "Your coefficient is:" << q2.getC();
                    else if( ! ( cin >> subsubchoice ) ) {
                        cout << endl << "invalid input!\n";
                        cin.clear();
                        cin.ignore( numeric_limits<int>::max(), '\n' );
                        cout << endl << "Please enter a valid choice: ";
                	} 
	            }
                else if (subchoice == 3)
                    break;
                else if( ! ( cin >> subchoice ) ) {
                    inputcheck();
                    }
			    
		    	}while(subchoice != 3);
			}
		else if(choice == 3){
			do{
				double newA;
            	double newB;
            	double newC;
            	cout << endl << "Which Quadratic function would you like to replace? ";
            	submenu();
				cin >> subchoice;
            	if (subchoice == 1){
                	cout << endl <<"Please enter your new coefficients.";
                	cout << endl << endl << "Enter coefficient A: ";
                	cin >> newA;
                	cout << endl <<"Enter coefficient B: ";
                	cin >> newB;
                	cout << endl << "Enter coefficient C: ";
                	cin >> newC;
                	q1.set (newA, newB, newC);
                
            	}
            	else if (subchoice == 2){
                	cout << endl <<"Please enter your new coefficients.";
                	cout << endl << endl << "Enter coefficient A: ";
                	cin >> newA;
                	cout << endl <<"Enter coefficient B: ";
                	cin >> newB;
                	cout << endl << "Enter coefficient C: ";
                	cin >> newC;
                	q2.set (newA, newB, newC);
                
            	}	
            	else if (subchoice == 3)
                	break;
            	else if( ! ( cin >> subchoice ) ) {
                	inputcheck();           
                	}
            	}while(subchoice != 3);
			}
		else if(choice == 4){
			do{
			int subchoice = 0;
			int x;
            cout << endl << "Which Quadratic function would you like to evaluate?";
            submenu();
            cin >> subchoice;
				if (subchoice == 1){
                	cout << "Input your integer x value: ";
                	cin >> x;
                	cout << endl << "Your evaluated Quadratic function: " << q1.evaluate(x);
                                
            	}
            	else if (subchoice == 2){
                	cout << "Input your integer x value: ";
                	cin >> x;
                	cout << endl << "Your evaluated Quadratic function: " 
                    	<< q2.evaluate(x); 
                          
                
            	}
            	else if(subchoice == 3)
            		break;
            	else if( ! ( cin >> subchoice ) ) {
                	inputcheck();
            	}	
        	}while( subchoice != 3);
    	}
        else if (choice == 5){
        Quadratic sum;
        sum = q1 + q2;
        cout << endl << "The sum of both Quad functions is: " << sum.getA() 
           << "x^2 + " << sum.getB() << "x + " << sum.getC();
        }
            
        else if (choice == 6){
            do{
				double r;
            	cout << endl << "Which Quadratic funct would you like to multiply? ";
            	submenu();
            	cin >> subchoice;
            
            	if (subchoice == 1){
                	cout << endl << "Enter multiple r (a float number): ";
                	cin >> r;
                	Quadratic product;
                	double a = r * q1.getA();
                	double b  = r * q1.getB();
                	double c  = r * q1.getC();
                	product.set(a, b, c);
                	cout << endl << "The product is: " << product.getA() 
                    	<< "x^2 + " << product.getB() << "x + " << product.getC();
                
            	}
            	else if (subchoice == 2){
                	cout << endl << "Enter multiple r (a float number): ";
                	cin >> r;
                	Quadratic product;
                	double a = r * q2.getA();
                	double b  = r * q2.getB();
                	double c  = r * q2.getC();
                	product.set(a, b, c);
                	cout << endl << "The product is: " << product.getA() 
                    	<< "x^2 + " << product.getB() << "x + " << product.getC();                  
					}
            	else if( subchoice == 3)
            		break;
				else if( ! ( cin >> subchoice ) ) {
                	inputcheck();
                	}
            	}while(subchoice != 3);
        }
        
		else if(choice == 7){
			do{
				int NumRoots;
				double rootval;
				cout << endl << "Which quadratic function would you like to display the roots of?";
				submenu();
				cin >> subchoice;

				if (subchoice == 1){
					cout << endl << endl << "What root operation would you like to do?";
					cout << endl << "1: Display number of roots";
					cout << endl << "2: Display Smallest root";
					cout << endl << "3: Display Largest root" << endl << endl;
					cin >> subsubchoice;
					if (subsubchoice == 1){
						double a = q1.getA();
						double b = q1.getB();
						double c = q1.getC();
						NumRoots = q1.getNumRoots();
						q1.SetNumRoots(NumRoots);
						cout << endl << endl << "The number of roots is: " << NumRoots;
						}	
					else if(subsubchoice == 2){
						double a = q1.getA();
						double b = q1.getB();
						double c = q1.getC();
						rootval = q1.getSmallRoot();

						cout << endl << endl << "The smallest root value is:  " <<rootval;
						}
					else if(subsubchoice == 3){
						double a = q1.getA();
						double b = q1.getB();
						double c = q1.getC();
						rootval = q1.getLargeRoot();
						cout << endl << endl << "The Largest root value is: " << rootval;
						}
					}

				else if (subchoice == 2){
					cout << endl << endl << "What root operation would you like to do?";
					cout << endl << "1: Display number of roots";
					cout << endl << "2: Display Smallest root";
					cout << endl << "3: Display Largest root" << endl << endl;
					cin >> subsubchoice;
					if (subsubchoice == 1){
						NumRoots = q2.getNumRoots();
						q2.SetNumRoots(NumRoots);
						cout << endl << endl << "The number of roots is: " << NumRoots;
						}
					else if(subsubchoice == 2){
						rootval = q2.getSmallRoot();
					    cout << endl << endl << "The smallest root value is:  " << rootval;
						}
					else if(subsubchoice == 3){
						rootval = q2.getLargeRoot();
						cout << endl << endl << "The Largest root value is: " << rootval;
						}
					}
	            else if(subchoice == 3)
	            	break;
	            else if( ! ( cin >> subchoice ) ) {
	                inputcheck();
	            }	
	        }while( subchoice != 3);
	    }
		else if (choice == 8)
	            break;
	
	        else if( ! ( cin >> choice ) ) {
	            inputcheck();
	            }
    

	    }while (choice != 8);
    return(0);
}    
     
        

    

    
