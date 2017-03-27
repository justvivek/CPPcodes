#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
#include <math.h>
using namespace std;

/*
 * To make a const function pointer, the const goes after the asterisk:
 * int (*const fcnPtr)();
 * 
 * One common mistake is to do this:
 * fcnPtr = goo();


// function prototypes
int foo();
double goo();
int hoo(int x);
 
// function pointer assignments
int (*fcnPtr1)() = foo; // okay
int (*fcnPtr2)() = goo; // wrong -- return types don't match!
double (*fcnPtr4)() = goo; // okay
fcnPtr1 = hoo; // wrong -- fcnPtr1 has no parameters, but hoo() does
int (*fcnPtr3)(int) = hoo; // okay

*/

int goo(int x){	
	return x+100;
}

int foo(int x){
	return x;
}

/*
 * One interesting note: Default parameters won’t work with function pointers.
 * Default arguments are resolved at compile-time (that is, if you don’t supply an argument for a defaulted parameter,
 * the compiler substitutes one in for you when the code is compiled).
 * However, function pointers are resolved at run-time. Consequently,
 * default parameters can not be resolved when making a function call with a function pointer.
 * You’ll explicitly have to pass in values for any defaulted parameters in this case.
*/

int main(){
//	cout<< 	reinterpret_cast<void*>(foo)<< endl;
	int (*fcnptr)(int)=foo; // fcnPtr points to function foo
	int y= (*fcnptr)(100);
	cout<<y<< endl;
	fcnptr= goo;		  // fcnPtr points to function goo	
	int z= fcnptr(100);	//call function is via implicit dereference: goo(100) through fcnPtr.
	cout<<z<< endl;	
	return 0;
}
