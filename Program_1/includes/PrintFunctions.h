
#pragma once
#include <string>
using namespace std;


class PrintFunctions {
    public:
        char ch;       //stores character from user input
        short sh;		//stores short integer from input
        float fl;		//stores float value from input
        void printChar( char ch );
/*------------------------------------------------------
 Prints the binary value of a user inputted character
		
	Precondition: The user must enter a character at the prompt screen. If it is not a valid character (in this program, only alphabetical characters are allowed), an error is returned.
	PostCondition: The bit value of the entered character is displayed
--------------*/

        void printShort( short sh);
/*------------------------------------------------------
 Prints the binary value of a user inputted short integer

	Precondition: The user enters a short integer when prompted. A value check in the main program will check the entered value before it is passed to this function to ensure that it is a valid short integer. If it is not, the program will loop until a valid value is entered

	Postcondition: The bit value of the entered short integer is displayed on screen.

-------------------------------*/	
 void printFloat( float fl );
/*-------------------------------------------------------

Prints the binary value of a user inputted floating point value

	 * Precondition: The user enters a floating point value when prompted.
 	 * Postcondition: The bit value of the entered value is displayed on screen.

-------------------------------------------*/

  PrintFunctions();
};
