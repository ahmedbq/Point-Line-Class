#include "point.h"
#include <iostream>
#include <math.h>
using namespace std;

//Constructors

point::point()
{
	x=0;
	y=0;
}

point::point(const point& a){
	x=a.x;
	y=a.y;
}

point::point(double Q, double T){
	x = Q;
	y = T;
}


//Setters and Getters

void point::set_x (double xPassed)
{
	x=xPassed;
}

void point::set_y (double yPassed)
{
	y=yPassed;
}

double point::get_x () const{
	return x;
}

double point::get_y () const{
	return y;
}

//Other Functions

void point::translate(double addX, double addY){
	cout<<" addX: "<<addX<<" x: "<<x<<" Sum: "<<x+addX;
	x = x + addX;
	y += addY;
}

void point::reflect_x(){
	y *= -1;
}

void point::reflect_y(){
	x *= -1;
}

void point::scale (double m){
	x *= m;
	y *= m;
}

void point::rotate(double r){
	x = (x*cos(r)) - (y*sin(r));
	y = (y*sin(r)) + (y*cos(r));
}


//Operators

ostream& operator <<(std::ostream& outs, const point& source) //IMPLEMENT THIS!!
{

	outs << "("<<source.x<<","<<source.y<<")";
	return outs;
}

istream& operator >>(std::istream& ins, point& target){

	ins >> target.x;
	ins >> target.y;
	return ins;
}

void point::operator = (const point& pointToCopy) //IMPLEMENT THIS! //& will permanently change it
{

	this->x = pointToCopy.x;
	this->y = pointToCopy.y;

}

bool operator == (const point &firstPoint, const point &secondPoint){
	if(firstPoint.get_x() == secondPoint.get_x() && firstPoint.get_y() == secondPoint.get_y()){
		return true;
	}
	return false;
}