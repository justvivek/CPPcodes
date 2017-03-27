#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
#include <math.h>
using namespace std;

/*
 * When to use pass by address:
When passing pointer values.
When passing built-in arrays (if you’re okay with the fact that they’ll decay into a pointer).

When not to use pass by address:

When passing structs or classes (use pass by reference).
When passing fundamental types (use pass by value).
*/
//printarray() doesn’t modify any of its arguments, it’s good form to make the array parameter const:
void printarray(const int *arr, int len){
	if(!arr)
		return;
	for(int i=0; i<len; ++i){
		cout<< arr[i]<<' ';
	}
	cout<<endl;
}

void trysetTonull(int *temptr){
	temptr=0;// we're making tempPtr point at something else, not changing the value that tempPtr points to.
}	

void set(int *temptr){
	*temptr=10;
	temptr=0;
}
//Because dereferencing a pointer is slower than accessing a value directly,
//accessing arguments passed by address is slower than accessing arguments passed by value.
void setTonull(int *&temptr){
	temptr=0;
}

int main(){
	int arr[5] {5,8,3,2,9};
	int len= sizeof(arr)/sizeof(arr[0]);
	printarray(arr,len);
	int value=5;
	int *ptr= &value;//Address is passed by value
	trysetTonull(ptr);
	set(ptr);
	if(ptr)
		cout<<"after trysetTonull call Value the ptr pointing to is: " <<*ptr<< endl; 
	else
		cout<<"ptr is null"<< endl;
	setTonull(ptr);
	if(ptr)
		cout<<"after setTonull call Value of ptr pointing to is: " <<*ptr<< endl; 
	else
		cout<<"after setTonull call ptr is pointing to null"<< endl;	
	return 0;
}
