#include<iostream>
#include<cmath>
using namespace std;
/*
 *  While this works, it’s not great. An epsilon of 0.00001 is good for inputs around 1.0,
 *  too big for numbers around 0.0000001, and too small for numbers like 10,000.
 * This means every time we call this function, we have to pick an epsilon that’s appropriate for our inputs
*/
bool isAlmostEqual(double a, double b, double epsilon){
	 // if the distance between a and b is less than epsilon, then a and b are "close enough"
	return fabs(a-b) <= epsilon;
}

/*
 * Knuth's Algorithm
 *	approximatelyEqual() function will work for many cases, it is not perfect,
 *  especially as the numbers approach zero: 
*/
bool approximatelyEqual(double a, double b, double epsilon){
	// return true if the difference between a and b is within epsilon percent of the larger of a and b
	return fabs(a-b) <= ((fabs(a) < fabs(b) ? fabs(b) : fabs(a))*epsilon);
}

/*
 * we’ve added a new parameter: absEpsilon. 
 * First, we check to see if the a and b are less than our absEpsilon, which should be set at something very small (e.g. 1e-12).
 * This handles the case where a and b are both close to zero. If that fails, then we fall back to Knuth’s algorithm.
*/
// return true if the difference between a and b is less than absEpsilon, or within relEpsilon percent of the larger of a and b
bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
    // Check if the numbers are really close -- needed when comparing numbers near zero.
    double diff = fabs(a - b);
    if (diff <= absEpsilon)
        return true;
 
    // Otherwise fall back to Knuth's algorithm
    return diff <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * relEpsilon);
}

int main(){
	double a,b;
	cout<< "Enter the the value of float numbers to compare "<< endl;
	cin>> a;
	cin>> b;
	cout<< "isAlmostEqual function is executing---- "<<isAlmostEqual(a,b,0.00001)<< endl;
	cout<< "approximatelyEqual function is executing---- "<< approximatelyEqual(a,b,0.00001)<< endl;
	
	// a is really close to 1.0, but has rounding errors, so it's slightly smaller than 1.0
    a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
 
    std::cout << approximatelyEqual(a, 1.0, 1e-8) << "\n";     // compare "almost 1.0" to 1.0
    
    //This second call didn’t perform as expected. The math simply breaks down close to zero.
    std::cout << approximatelyEqual(a-1.0, 0.0, 1e-8) << "\n"; // compare "almost 0.0" to 0.0
    
    std::cout << approximatelyEqualAbsRel(a-1.0, 0.0, 1e-12, 1e-8) << "\n"; // compare "almost 0.0" to 0.0
}
