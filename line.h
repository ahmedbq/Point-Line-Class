//THIS IS JUST FOR 

#ifndef LINE_H_   //macroguard that stops the header from being included twice.
#define LINE_H_  //Including the header twice stops the compilation, Note no 
                                    //Semilcolon
#include <iostream>
#include "point.h"

class line //a class that represents a point on a cartesian coordinate plane
{
	public:
		
		//Constructors

		line(); //default
		//Pre-Condition: Must be missing both parameters.
		//Post-Condition: Initializes so that the line becomes the x-axis.
		line(point a);
		//Pre-Condition: Must be missing one parameter.
		//Post-Condition: Makes it so that the line passes through (0,0) and an object. This is when one point is missing.	
		line(point a, point b);
		//Pre-Condition: Must have both parameters.
		//Post-Condition: Makes a line that passes through both objects.
		line(const line& a); //copy
		//Pre-Condition: Must accept a line object.
		//Post-Condition: Calls the Point constructor within the constructor so that it can individually make points and set them.


		//Other Functions

		double slope();
		//Pre-Condition: Must accept a line object.
		//Post-Condition: Will return the slope.

		void translate(double X, double Y);
		//Pre-Condition: Must accept 2 parameters.
		//Post-Condition: Will translate the object according to X and Y.

		void reflect_x();
		//Pre-Condition: Must accept a line object.
		//Post-Condition: Will multiply y for both points by -1 to flip it around x-axis.

		void reflect_y();
		//Pre-Condition: Must accept a line object.
		//Post-Condition: Will multiply x for both objects by -1 to flip it around y-axis.


	//Operators

    friend std::ostream& operator <<(std::ostream& outs, const line& source);
    //Pre-Condition: The << operator does not take in parameters.
	//Post-Condition: It prints out the numbers.
    friend std::istream& operator >>(std::istream& ins, line& target);
    //Pre-Condition: The >> operator accepts a user-defined variable.
	//Post-Condition: It takes the number and creates a new line object out of it.
    
	friend bool operator == (const line &firstLine, const line &secondLine);

	void operator = (const line& a);

	//Pre-Condition: These operators accept line objects.
	//Post-Condition: // > will check if one line is larger than another. 
					  // = will assign one line to another. 
					  // == will check if the values are equal and will return a true/false statement. 


	private:
		point one; //our x value of our point
		point two; //our y value of our point
}; //NOTE THIS SEMICOLON AT THE END OF THIS CLASS DEFINITION!

#endif