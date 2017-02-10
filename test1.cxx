// FILE: sample_test_input1.cxx
// Sample test prorgam to test point class
// Written by Shivakant Mishra
// Last Update: February 10, 2012
//Modified by Ashok Basawapatna sometime in July 2012
#include <iostream> 
#include <cstdlib>
#include "point.h"
using namespace std;

int main( )
{
    point p1; 
    point p2(10, 20.2);
	cout<<"\n p1 was constructed by without passing in points \n";
    cout << "p1 = " << p1 << endl;
    cout<<"\n p2 was constructed by passing in (10, 20.2) \n";
    cout << "p2 = " << p2 << endl;
    cout<<"\n now we translate p1 by (11.3, 12.8) \n";
    p1.translate(11.3, 12.8);
    cout << "p1.x = " << p1.get_x( ) << endl;;
    cout << "p1.y = " << p1.get_y( ) << endl;;
    cout<<"Now we set p2's x to 42 and y to 50 \n";
    p2.set_x(42);
    p2.set_y(50);
    cout << "p2 = " << p2 << endl;
    cout<<"Now we scale p2 by 2.2 \n";
    p2.scale(2.2);
    cout << "p2 = " << p2 << endl;
    cout<<"Now we reflect p1 over the x axis and p2 over the y axis \n";
    p1.reflect_x( );
    p2.reflect_y( );
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    cout<<"Now we rotate p1 by 2.3 \n";
    p1.rotate(2.3);
    cout << "p1 = " << p1 << endl;
    
    cout<<"Now we construct p3 by using the copy constructor with p1 \n";
    point p3(p1);

    cout << "p3 = " << p3 << endl;
    if (p1 == p3) cout << "p1 and p3 are equal" << endl;
    else cout << "p1 and p3 are not equal" << endl;
    if (p2 == p3) cout << "p2 and p3 are equal" << endl;
    else cout << "p2 and p3 are not equal" << endl;
//
	cout<<"Now we redefine p3 by using the assignment operator with p2 \n";
    p3 = p2;

    if (p1 == p3) cout << "p1 and p3 are equal" << endl;
    else cout << "p1 and p3 are not equal" << endl;
    if (p2 == p3) cout << "p2 and p3 are equal" << endl;
    else cout << "p2 and p3 are not equal" << endl;
//
	cout<< "Please type 2 values to define p3 \n";
    cin >> p3;
    cout << "p3 = " << p3 << endl;
    return EXIT_SUCCESS;
}
