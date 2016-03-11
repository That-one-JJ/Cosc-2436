#pragma once

using namespace std;

class Quadratic {
    private:
        double a;   //coefficient "A" for class object
        double b;   //coefficient "B" for class object
        double c;   //coefficient "C" for class object
        double value;
		int rootnum;
    public:
        
	Quadratic();
	/*------------------------------------
	default constructor for the Quadratic class.

	Precondtion: none
	Postcondition: coefficients "a,b,c" to zero. It also sets the evaluated resu		lt to zero.
	------------------------------------------------------------*/

    void set( double newA, double newB, double newC );
	/*------------------------------------------------------------
	Sets the coefficients of the chosen quadratic function to 
		new user-entered values.
	
	Precondition: User inputted A, B, and C coefficients are needed first. If th		ey are not provided, the function will not execute.
	Postcondition: The coefficinets of the chosen quadfunction are changed to th		e new values.
    
----------------------------------------------------------------*/	
		
	
	
	void SetNumRoots(int rootnum);
	/*-----------------------------------------------------------
	Sets the rootnum value of the object to the passed value.
	Precondition: Integer rootnum.
	Postcondition: The rootvalue is set.

	-------------------------------------------*/



		/***functions without preconditions*****/
		
		double getA() const;  //returns coefficient "A" of a class object
        double getB() const;    //returns coefficient "B" of a class object
        double getC() const;    //returns coefficient "C" of a class object
        void display() const;   //displays a quadratic function in
			//"ax^2 + bx + c" format.
		
		/***end of functions without preconditions***/

		

        double evaluate( double x ) const;   //evaluates a quadratic function
/*------------------------------------------------
 	Evaluates a quadratic function when an "x" value is entered by the user.

	Precondition: an x value is passsed to the function. The user must enter the 		x value. Error checking will stop the function from being functioned if 		an improper value is entered.
	Postcondtion: The evaluated function is passed to cout as a double value.
-------------------------------------------------*/	

        int getNumRoots() const;
/*------------------------------------
	Returns the number of roots in the quadratic function.

	Precondtion: None
	Postcondition: Number of roots are returned and are stored in the object data.

--------------------------------------------------------*/
	
        

		
		
		double getSmallRoot() const;
        /*---------------------------------------
			returns the small root of a quadratic function

			Precondition: The getNumRoots function must be run, or this will not work. The function checks the objec			t's rootnum variable, and using this, executes an equation with a precondition that is equal to this val			ue.The precondition values must also be equivalent to the coefficients of the object.
 			
			Postcondition: The smallest rootval is returned from the executed equation.


		------------------------------------------------------*/
        double getLargeRoot() const;
	
        /*---------------------------------------
			returns the large root of a quadratic function

			Precondition: The getNumRoots function must be run, or this will not work. The function checks the objec			t's rootnum variable, and using this, executes an equation with a precondition that is equal to this val			ue. The precondition values must also be equivalent to the coefficients of the object.

			Postcondition: The largest rootval is returned from the executed equation.

		------------------------------------------------------*/
        //returns the large root of a quadratic function
    friend Quadratic operator+(const Quadratic & q1, const Quadratic& q2 );
    //allows the coefficients of two quadratic objects to be added together
    friend Quadratic operator*( double r, const Quadratic& q );        
    //allows the coefficients of two quadratic objects to be multiplied together
};

