/*day 1st of C++ programming
Rule: Avoid "using" statement outside of a function body.
Using g++, you can use the -I option to specify an alternate include directory.
g++ -o main -I /source/includes main.cpp
*/

#include<iostream>
#include "add.h"

/*using namespace std;  
using namespace std; // this using directive tells the compiler that we're using everything in the std namespace!
int add(int, int);
*/

void returnnone(){}

int return5(){
	return 5;
}

int getvalue(){
	int temp;
	std::cout <<"enter the integer"<<std::endl;
	std::cin >> temp;
	return temp;
}

void print(int x){
	std::cout<< "Value of interger is: "<< x << std::endl;
}

int doublenum(int x){	
	 return 2*x;
}

int main(){
	#define PRINT_JOE

	#ifdef PRINT_JOE
	std::cout << "\nJoe\n" << std::endl;
	#endif
	 
	#ifdef PRINT_BOB
	std::cout << "Bob" << std::endl;
	#endif
//	using std::cout; // this using declaration tells the compiler that cout should resolve to std::cout
//	int x=getvalue();
//	std::cout<<"enter the variable"<<std::endl;
//	std::cin>> x;
//	std::cout<<"Value of the variable is: "<< x <<std::endl;
	print(doublenum(getvalue()));
//	return5();
//	returnnone();
//	std::cout<< returnnone();  it will not compile with this line of code as function return type is void and std::cout expects char
//	std::cout<<"Function return5() is returning its value and add 1000 and then to print it in console:" <<return5() +1000 << std::endl;
//	int y=getvalue();
	print(doublenum(getvalue()));
	std::cout<< "sum of two numbers 20 and 57 is equal to "<< add(20,57)<< std::endl;
		
	return 0;
}
