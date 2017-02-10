//Ahmed B. Qureshi
#ifndef POINT_H_   //macroguard that stops the header from being included twice.
#define POINT_H_  

#include <iostream>

class point //a class that represents a point on a cartesian coordinate plane
{
	public:

		//Constructors

		point(); 		//Default Constructor. 
		//Pre-Condition: Must have no parameters. 
		//Post-Condition: Initializes x and y to zero.

		point(const point& a); //Copy Constructor. 
		//Pre-Condition: Accept a point object as a parameter. 
		//Post-Condition: Sets the instance variables of one object to another.

		point(double xval, double yval); //Overloaded Constructor. Makes it so that it's automatically initialized if not done.


		//Setters

		void set_x (double xPassed);
		//Pre-Condition: Accept an x coordinate. 
		//Post-Condition: Sets the current x variable to the user-defined input.
		void set_y (double yPassed);
		//Pre-Condition: Accept a y coordinate. 
		//Post-Condition: Sets the current y variable to the user-defined input.


		//Getters

		double get_x () const;
		//Pre-Condition: Accepts no parameters.
		//Post-Condition: Returns the x variable.

		double get_y () const;
		//Pre-Condition: Accepts no parameters. 
		//Post-Condition: Returns the y variable.


		//Other Functions

		void translate(double addX, double addY);
		//Pre-Condition: Called as a Point Object with x and y values.
		//Post-Condition: Adds addX to X and addY to Y.   

		void reflect_x();
		//Pre-Condition: Called as a Point Object with x and y values. 
		//Post-Condition: Modifies point y by -1, x value negated. Reflects point over the x-axis.        

		void reflect_y();
		//Pre-Condition: Called as a Point Object with x and y values. 
		//Post-Condition: Modifies point x by -1, y value negated. Reflects point over the y-axis.        

		void scale (double m);
		//Pre-Condition: Called as a Point Object with x and y values. 
		//Post-Condition: Multiplies the points by m (user-defined number).                  

		void rotate(double r); 
		//Includes math.h
		//Pre-Condition: r represents radians. Called as a Point Object with x and y values. 
		//Post-Condition: Uses equations using sin and cos to provide the new values. Rotates the point.         
             

			
	//Operators

 	friend std::istream& operator >>(std::istream& ins, point& target);
 	//Pre-Condition: The >> operator accepts a user-defined number.
	//Post-Condition: It takes the number and creates a new point or whatever the input is needed for.
    friend std::ostream& operator <<(std::ostream& outs, const point& source);
    //Pre-Condition: The << operator does not take in parameters.
	//Post-Condition: It prints out the numbers.
    
	void operator = (const point& pointToCopy);

	//Pre-Condition: These operators accept point objects.
	//Post-Condition: // = will assign one point to another. 
					  // == will check if the values are equal and will return a true/false statement. 
					  // .equals will check if all the instance variables of 2 points are equal to one another.

	private:
		double x; //our x value of our point
		double y; //our y value of our point
}; //NOTE THIS SEMICOLON AT THE END OF THIS CLASS DEFINITION!

bool operator == (const point &firstPoint, const point &secondPoint);

#endif