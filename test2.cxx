// FILE: sample_test_input2.cxx
// Sample test prorgam to test line class
// Written by Shivakant Mishra
// Last Update: February 10, 2012
//Modified by Ashok Basawapatna in July sometime 2012
#include <iostream> 
#include <cstdlib>
#include "point.h"
#include "line.h"
using namespace std;

int main( )
{
    // point p1, p2;
    // line l1;
    point p1(10, 10), p2(13, 18.5);
    line l1, l2(p1), l3(p1, p2);
	cout<<" \n l1 was constructed without passing in any points \n";
    cout << "l1 : " << l1 << endl;
    cout<<"l2 was constructed by passing in 1 pt: (10,10) \n";
    cout << "l2 : " << l2 << endl;
    cout<<"l3 was constructed by passing in 2 pts: (10,10) & (13, 18.5) \n";
    cout << "l3 : " << l3 << endl;

	cout<<"The slope of l2 is: \n";
    cout << "l2 slope = " << l2.slope( ) << endl;

	cout<<"Now we will translate l1 by (5, 6.3) \n";
    l1.translate(5, 6.3);
    cout << "l1 : " << l1 << endl;
	cout<<"Now we will reflect l2 over the x axis and l3 over the y axis \n";
    l2.reflect_x( );
    l3.reflect_y( );
    cout << "l2 : " << l2 << endl;
    cout << "l3 : " << l3 << endl;
	
	cout<<"Now we will pass l1 into our copy constructor to make l4 \n";
    line l4(l1);
    cout << "l4 : " << l4 << endl;

    if (l1 == l4) cout << "l1 and l4 are equal" << endl;
    else cout << "l1 and l4 are not equal" << endl;
    if (l2 == l4) cout << "l2 and l4 are equal" << endl;
    else cout << "l2 and l4 are not equal" << endl;
	
	cout<<"Now we will use the overloaded = operator to set l1 to l3 \n";
    l1 = l3;

    if (l1 == l3) cout << "l1 and l3 are equal" << endl;
    else cout << "l1 and l3 are not equal" << endl;
    if (l2 == l3) cout << "l2 and l3 are equal" << endl;
    else cout << "l2 and l3 are not equal" << endl;
	
	cout<< "please type in 4 values to define the two points of l3 \n";
    cin >> l3;
    cout << "l3 = " << l3 << endl;

    return EXIT_SUCCESS;
}
