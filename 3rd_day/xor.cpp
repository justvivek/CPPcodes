#include<iostream>

/*	Logical XOR is a logical operator provided in some languages 
 * 	that is used to test whether an odd number of conditions is true.
 * 	C++ doesn’t provide a logical XOR operator
 * 	we can easily mimic logical XOR using the not equals operator (!=):
 * Note that the above XOR patterns only work if the operands are booleans (not integers).
 *  If you want this to work with integers, you can static_cast them to bools.
*/
int main(){
	using namespace std;
	int w,x, y, z;
	cout<< "Enter the value of w,x,y,z,";
	cin>> x;
	cin>> y;
	cin>> z;
	cin>> w;
	if(static_cast<bool>(x) != static_cast<bool>(y) != static_cast<bool>(z) != static_cast<bool>(w))
		cout<< "True"<< endl;
	else
		cout<< "False"<< endl;
}
