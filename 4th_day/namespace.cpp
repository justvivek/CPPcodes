/*
 * Multiple namespace blocks with the same name allowed
 * Rule: Don’t use the “using” keyword in the global scope. This includes header files!
 * Cancelling or replacing a using statement
 * Once a using statement has been declared, 
 * there’s no way to cancel or replace it with a different using statement
 *  within the scope in which it was declared.
 * Because typing the fully qualified name of a variable or function inside a nested namespace can be painful,
 * C++ allows you to create namespace aliases.
 * The standard library makes extensive use of this feature, 
 * as all of the different header files included with the standard library have their functionality inside namespace std::
 * It’s worth noting that namespaces in C++ were not designed as a way to implement an information hierarchy 
 * -- they were designed primarily as a mechanism for preventing naming collisions
*/


#include<iostream>
#include"sum.h"
#include"subtract.h"
namespace diff= basicmath::difference;

int main(){
	using namespace std;
	cout<<"sum of 10 and 6 is: "<< basicmath::sum(10,6)<< '\n';
	cout<< "Difference of 10 and 6 is: "<< diff::subtract(10,6)<<'\n';
	return 0;
}
