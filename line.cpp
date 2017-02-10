#include "line.h"
#include <iostream>
using namespace std;



line::line() //default constructor for line class
{
	//makes line equal to x axis... (add some explanation of what that means)
	one.set_x(0);
	one.set_y(0);
	two.set_x(1);
	two.set_y(0);
}

line::line(point a){
	one.set_x(0);
	one.set_y(0);
	two.set_x(a.get_x());
	two.set_y(a.get_y());
}

line::line(point a, point b){
	one.set_x(a.get_x());
	one.set_y(a.get_y());
	two.set_x(b.get_x());
	two.set_y(b.get_y());
}

line::line(const line& a){
	this->one.set_x(a.one.get_x());
	this->one.set_y(a.one.get_y());
	this->two.set_x(a.two.get_x());
	this->two.set_y(a.two.get_y());
}

//Other Functions

double line::slope(){
	double m = (one.get_y() - two.get_y())/(one.get_x() - two.get_x());
	return m;
}

void line::translate(double X, double Y){
	one.set_x(one.get_x() + X);
	one.set_y(one.get_y() + Y);

	two.set_x(two.get_x() + X);
	two.set_y(two.get_y() + Y);
}

void line::reflect_x(){
	one.set_y(one.get_y()*-1);

	two.set_y(two.get_y()*-1);
}

void line::reflect_y(){
	one.set_x(one.get_x()*-1);

	two.set_y(one.get_y()*-1);
}

//Operators

ostream& operator <<(std::ostream& outs, const line& source) //IMPLEMENT THIS!!
{
	//have to check the 3 conditions and output accordingly...
	//might be easier to implement after you implement Slope
	//remember you can get the equation of a line from
	//y - y1 = m(x - x1)
	//https://www.mathsisfun.com/algebra/line-equation-point-slope.html
	//you can easily solve this for y
	//y=mx-mx1+y1
	//if the slope is 2 and I have a point 4,3 on the line I can say
	//y=2*x-2*4+3 -- or something like that
	//But there's also the other cases...

	outs<<"Point one is: ("<<source.one.get_x()<<","<<source.one.get_y()<<")"
		<< ". Point two is: ("<<source.two.get_x()<<","<<source.two.get_y() <<")";

	return outs;
}

std::istream& operator >>(std::istream& ins, line& target)
{
	point one, two; 
	double onex, oney, twox, twoy;
	ins >> onex >> oney >> twox >> twoy;

	target.one.set_x(onex);
	target.one.set_y(oney);
	target.two.set_x(twox);
	target.two.set_y(twoy);

	return ins;
}


void line::operator = (const line& a){

	one.set_x(a.one.get_x());
	one.set_y(a.one.get_y());

	two.set_x(a.two.get_x());
	two.set_y(a.two.get_y());
}

bool operator == (const line &firstLine, const line &secondLine){

	if(
		( firstLine.one.get_x() == secondLine.one.get_x() && firstLine.one.get_y() == secondLine.one.get_y() &&
	     firstLine.two.get_x() == secondLine.two.get_x() && firstLine.two.get_y() == secondLine.two.get_y() )

	 ||( firstLine.one.get_x() == secondLine.two.get_x() && firstLine.one.get_y() == secondLine.two.get_y() &&
	     firstLine.two.get_x() == secondLine.one.get_x() && firstLine.two.get_y() == secondLine.one.get_y() )
	 )

	{
		return true;
	}
	return false;
}
