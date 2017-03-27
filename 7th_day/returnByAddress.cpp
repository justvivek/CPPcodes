#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
#include <math.h>
using namespace std;

//returning by address has one additional downside that pass by reference doesn’t --
//you can not return local variables to the function by address. Consider the following example:

int* allocatearr(int size){
	return new int[size];
}

//Returning by address has one additional downside that pass by reference doesn’t --
//you can not return local variables to the function by address. Consider the following example:
int* doubleval(int size){
	int val=size*10;
	return &val;
}

int main(){
	int *arr= allocatearr(5);	
	delete[] arr;
	return 0;
}
