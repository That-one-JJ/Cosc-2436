//Jared Jones
//Project Number: 4
//Project Desc: Linked-List Processing
//Course Number: Data Structures
//Date: Jan 25 2016

#include <cctype>       // Provides toupper
#include <iostream>     // Provides cout and cin
#include <cstdlib>      // Provides EXIT_SUCCESS
using namespace std;
#include "List.h"  

// PROTOTYPES:
void print_menu( );
// Postcondition: A menu of choices has been printed.






int main( )
{
    List test;     // A List to perform tests on
    List copy;
    ElementType item;
    int num_oflists = 1;
    char choice;   // Command entered by the user
    int pos;        //specifies a position in the list
    int index;   
    cout << "I have initialized an empty list of integers." << endl;

    do
    {
        print_menu( );
        cout << "Enter choice: ";
        cin >> choice; 
        choice = toupper(choice);
        
        switch (choice)
        {
            case 'C': // make a copy of a list
                {
                cout << endl << " Producing a copy of test list: " ;
                List temp;
		temp = test;
                cout << endl << " Here is a copy of the list: ";
                cout << endl << temp << endl;		
		List temp2(test);
		cout << " Here is a copy constructed version of the list: " ;
                cout << endl << temp2 << endl;

                break;
                }            
            case 'E': // add code to print result of empty( )
                if (test.empty() == 0)
                    cout << endl << "The list is not empty.";
                else if(test.empty() == 1)
                    cout << endl << "The list is empty.";
                    break;
			case 'F': //Finds first occurence of user inputted item in list
					{
					cout << "What value would you like to find?" <<endl;
					cin >> item;
					test.find(item);
					break;
					}
            case 'P': // add code to print the list

				cout << "Printing Original List: " << endl;
				cout << test << endl;
				if (num_oflists == 2){
                    cout << "Printing copy of original list: " << endl;
					cout << endl << copy << endl;
                }
                
                break;
            case 'G':
                cout << endl << "size: " << test.getSize();
                break;


            case 'I': // add code to input an item and position, and insert item into the list

                cout << endl << "Please enter an item: ";
                cin >> item;
                cout << endl << "Please enter a position in the list: ";
                cin >> pos;
                test.insert( item, pos );
                break;
            case 'R': // add code to input a position, and erase the item at that position
                cout << endl << "Enter a list position you would like"
                     << "to erase: ";
                cin >> index;
                test.erase(index);
                break;

     
            case 'Q': 
				cout << "Test program ended." << endl;
                break;
            default:  cout << choice << " is invalid." << endl;
        }
    }while ((choice != 'Q'));

    return 0;
}

void print_menu( )
{
    cout << endl; 
    cout << "The following choices are available: " << endl;
    cout << " C   Copy a list (crashes program) " << endl;
    cout << " E   Print the result from the empty( ) function" << endl;
    cout << " F   Find the first occurence of an item in the list." << endl;
	cout << " G   return size of list" << endl;
    cout << " P   Print a copy of the entire list" << endl;
    cout << " I   Insert a new number with the insert(...) function" << endl;
    cout << " R   Remove a number with the erase( ) function" << endl;
    cout << " Q   Quit this test program" << endl;
}



