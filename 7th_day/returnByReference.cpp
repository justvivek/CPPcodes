#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
#include <math.h>
using namespace std;

// Returns a reference to the index element of array
int& getElement(std::array<int, 25> &array, int index)
{
    // we know that array[index] will not be destroyed when the function ends
    // so it's okay to return it by reference
    return array[index];
}
//function named minmax() that takes two integers as input and returns the smaller and larger number as separate parameters.
void minmax(int x, int y, int &maxout, int &minout){
	if(x>y)
		{maxout=x;	minout=y;}
	else if(x<y)
		{maxout=y; minout=x;}
	else
		cout<<"both are equal\n";
}

//A function named getElement() that takes an integer array (as a pointer) and an index and
//returns the array element at that index (not a copy). Assume the index is valid, and the return value is const.

const int& getElement(const int *arr, int index ){
	return arr[index];
}

int main()
{
    std::array<int, 25> array;
 
    // Set the element of array with index 10 to the value 5
    getElement(array, 10) = 5;
	
    std::cout << array[10] << '\n';
    return 0;
}
