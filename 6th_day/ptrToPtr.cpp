#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
using namespace std;

/*
 * int (*array)[5] = new int[10][5];//valid
 * auto array = new int[10][5]; // so much simpler!  solution doesn’t work if the right-most array dimension isn’t a compile-time constant.
 * int value = 5;
 * int **ptrptr = &&value; // not valid
*/

int getIndex(int row, int col, int noOfcols){
	return (row*noOfcols +col);
}

int main(){
	int value = 5;
	 
	int *ptr = &value;
	std::cout << *ptr; // dereference pointer to int to get int value
	 
	int **ptrptr = &ptr;
	std::cout << **ptrptr; // first dereference to get pointer to int, second dereference to get int value
	
	int **array = new int*[10]; // allocate an array of 10 int pointers — these are our rows
	for (int count = 0; count < 10; ++count)
		array[count] = new int[5]; // these are our columns

	for (int count = 0; count < 10; ++count)
		delete[] array[count];
	delete[] array; // this needs to be done last
	
	//instead of this
	int **array = new int*[10];
	for(int i=0;i<10;++i){
		array[i]=new int[5];
	//do this
	int *array= new int[50]; // a 10x5 array flattened into a single array
	// set array[9,4] to 3 using our flattened array
	array[getIndex(9,4,5)]=3;
}
