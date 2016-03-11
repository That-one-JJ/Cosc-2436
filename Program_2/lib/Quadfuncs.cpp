#include "Quadfuncs.h"
#include <iostream>
#include <math.h>
using namespace std;
//asdf
Quadratic::Quadratic(){             //default initializer for quadratic class
    double a = 0;
    double b = 0;
    double c = 0;
    double value = 0;
    int rootnum = 0;
}

void Quadratic::set ( double newA, double newB, double newC){    
    //changes values of an instance of the quad class
    this->a = newA;
    this->b = newB;
    this->c = newC;
}



void Quadratic::SetNumRoots(int rootnum){
		this->rootnum = rootnum;
}

double Quadratic::getA() const{     //returns the "a" coefficient
    return this->a;
}

double Quadratic::getB() const{    //returns the "b" coefficient
    return this->b;
}

double Quadratic::getC() const{     //returns the "c" coefficient
    return this->c;
}


void Quadratic::display() const {       //displays the quadratic function

    cout << "The current quadratic equation is: " << this->a << "x^2 + "
        << this->b << "x + " << this->c;
}

double Quadratic::evaluate( double x ) const{   
    //evaluates the function with a quadratic function with a user inputed
    //value
    double a = this->a * x * x;
    double b = this->b * x;
    double value = a + b + c;
    return value;
}

int Quadratic::getNumRoots() const{   
    //returns number of roots present
    
    double a = this->a;
    double b = this->b;
    double c = this->c;
	
	
	if (( a == 0) && (b == 0) && (c == 0)){
        cout << endl << "All three values of X are real roots.";
        return 3;
	}
    else if ((a == 0) && (b == 0) && (c != 0 )) {
        cout << endl << "There are no real roots present.";
        return 0;
    }
    else if ((a == 0) && (b != 0 )) {
        cout << endl << "There is only one real root. ";
        return 1;
    }
    else if ((a != 0) && ((b*b) < (4 * a * c))) {
        cout << endl << "There are no real roots present. ";
        return 0;
    }
    else if ((a != 0) && ((b*b) == (4 * a * c))) {
        cout << endl << "There is only one real root. ";
        return 1;
    }
    else if (( a !=0 )   && ((b * b) > (4 * a * c))) {
        cout << endl << "There are two real roots. ";
        return 2;
    }
}

double Quadratic::getSmallRoot() const{
    //returns the smallest root from the funtion
    double x1;
    double x2;
    
    double a = this->a;
    double b = this->b;
    double c = this->c;
    
	if (this->rootnum == 0){
		return 0;
	}

	if ((this->rootnum == 1) && (a == 0) && (b !=0 )) {
        x1 = (-c/b);
        x2 = 10000;
		return x1;
        }
    if ((this->rootnum == 1) && (a != 0 ) && ((b * b) < (4 * a * c))){
        x1 = (-b/(2 * a ));
        x2 = 10000;
		return x1;
    }
    if ((this->rootnum == 2) && ((b * b) > (4 * a * c ))) {
        x1 = ((-b - sqrt((b * b) - (4 * a * c))) / (2  * a));
        x2 = ((-b + sqrt((b * b) - (4 * a * c))) / (2  * a));
    }
    if ((this->rootnum == 3)){
    	x1 = 0;
    	x2 = 0;
	}
	
	    if (x1 < x2)
            return x1;
        else if (x2 < x1)
            return x2;
        else if ((x1 && x2) == 0)
        	return 0;
    }
double Quadratic::getLargeRoot() const{
    //returns the largest root of a quadratic function
    double x1;
    double x2;
    if(this->rootnum == 0) {
		return 0;
	}
	
	if ((this->rootnum == 1) && (a == 0) && (b !=0 )) {
        x1 = (-c/b);
        x2 = 0;
		return x1;
        }
    if ((this->rootnum == 1) && (a != 0 ) && ((b * b) < (4 * a * c))){
        x1 = (-b/(2 * a ));
        x2 = 0;
		return x1;
    }
    if ((this->rootnum == 2) && ((b * b) > (4 * a * c ))) {
        x1 = ((-b - sqrt((b * b) - (4 * a * c))) / (2  * a));
        x2 = ((-b + sqrt((b * b) - (4 * a * c))) / (2  * a));
    }
	if ((this->rootnum == 3)){
		x1 = 0;
		x2 = 0;
	}	
		
	if (x1 > x2)
        return x1;
    else if (x2 > x1)
        return x2;
    else if((x1 && x2) == 0)
      	return 0;
		
    }
    Quadratic operator+( const Quadratic& q1, const Quadratic& q2 ){
        Quadratic temp;
        temp.a = q1.getA() + q2.getA();
        temp.b = q1.getB() + q2.getB();
        temp.c = q1.getC() + q2.getC();
        return temp;

    }
    Quadratic operator*( double r, const Quadratic& q ){
        
        Quadratic temp;
        temp.a = r * q.getA();
        temp.b = r * q.getB();
        temp.c = r * q.getC();
        return temp;
    }
