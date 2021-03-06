#include <iostream>
#include <string>
#include <cmath>
#include "PrintFunctions.h"
using namespace std;

PrintFunctions::PrintFunctions() 	//initializer for class printfunctions
{
        this->ch = 'a';
        this->sh = 0;
        this->fl = 0.0;
}

void PrintFunctions::printChar( char ch )  //function for printing bitcounts of char input
{

	if (ch < 65){
		cout << "please enter a valid character";
		return;
		}
	if (ch > 90 and ch < 97){
		cout << "please enter a valid character";
		return;
		}
	if (ch > 122){
		cout  << "please enter a valid character";
		return;
		}
	this->ch = ch;
    int n = 7;
    int bitcount = 0;   //used for spacing between groups of bits
    unsigned char mask = pow(2,n);      //intializes bit value to 10000000
    for (n = 0; n < 8; n++){
      
        if ((ch & mask) != 0)
            cout << '1';
        else
            cout <<'0';
        mask = mask>>1;  //shifts bitmask to the right
		bitcount += 1;   //adds one to bitcounter
        if (bitcount == 4){          //adds a space to the output every four bits
            cout << "    ";
            bitcount = 0;
        }
    
	}
}

void PrintFunctions::printShort( short sh)  //function for printing bit value of a short integer
{
	this->sh = sh;
	

    int n = 15;
    int bitcount = 0;						//used for spacing between groups of bits
    unsigned short mask = pow(2,n);			//intializes bit value to 1000000000000000
    for (n = 0; n < 16; n++){
      
        if ((sh & mask) != 0)
            cout << '1';
        else
            cout <<'0';
        mask = mask>>1;                        //shifts bitmask to the right
		bitcount += 1;						//adds one to bitcounter
        if (bitcount == 4){					//adds a space to the output every four bits
            cout << "    ";
            bitcount = 0;
        }
    
	}
}	

void PrintFunctions::printFloat( float fl )
{


	union FloatValue          //used later for converting user's float value to an integer
	{
		int intView;
		float Value;
	};	
   
	FloatValue num;
	int n = 31;
    int bitcount = 0;						//used for spacing between groups of bits
	unsigned int mask = pow(2,n);			//intializes bit value to 10000000000000000000000000000000
    num.Value = fl;
	for (n = 0; n < 32; n++){
      
        if ((num.intView & mask) != 0)    //compares integer version of num to the mask
            cout << '1';
        else
            cout <<'0';
        bitcount += 1;					//adds one to bitcounter
        if (bitcount == 4){				//adds a space to the output every four bits
            cout << "    ";
            bitcount = 0;
        mask = mask>>1;                    //shifts bitmask to the right
		}
    
	}
}
