#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
#include <math.h>
using namespace std;

/*
 * void foo(const int &x) // x is a const reference{
    x = 6;  // compile error: a const reference cannot have its value changed!
}
*/

/*
 * Use Pass by Reference:
 * When passing structs or classes (use const if read-only).
 * When you need the function to modify an argument.
 * 
 * Not to use Pass by Reference:
 * When passing fundamental types (use pass by value).
*/

void getSinCos(double degree, double &sinout, double &cosout){
	// sin() and cos() take radians, not degrees, so we need to convert
	static const double pi= 3.14159265358979323846; 
	double radians= degree * pi/ 180.0;
	sinout = sin(radians);
	cosout = cos(radians);
}

int main(){
	double sin(0.0);
	double cos(0.0);
	// getSinCos will return the sin and cos in variables sin and cos
	getSinCos(30.0, sin, cos);
	cout<< "The Sin is: "<< sin  << endl;
	cout<< "The Cos is: "<< cos << endl;
	return 0;
}
