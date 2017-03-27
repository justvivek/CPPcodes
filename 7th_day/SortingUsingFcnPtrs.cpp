//Flexible Sorting using function pointers
//Passing functions as arguments to other functions

#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
#include <math.h>
#include <functional>// for std::function in C++11
using namespace std;
//bool validate(int x, int y, std::function<bool(int, int)> fcn); 
// std::function method that returns a bool and takes two int parameters

typedef bool (*comparisonFcn)(int, int);//This defines a typedef called “comparisonFcn” that is a pointer to a function that takes two ints and returns a bool.

bool ascen(int x, int y);
bool descen(int x, int y);
bool evenfirst(int, int);
void printarray(int*, int);
void selectionsort(int *array, int size, comparisonFcn cfcn = ascen);// Default the sort to ascending sort

bool ascen(int x, int y){
	return x>y;
}

bool descen(int x, int y){
	return x<y;
}

bool evenfirst(int x, int y){
	if(x%2==0 && !(y%2==0))
		return false;
	if(!(x%2==0) && (y%2==0))
		return true;
	
	return ascen(x,y);
}

void selectionsort(int *arr, int size, comparisonFcn cfcn){
	for(int i=0; i<size; ++i){
		int index=i;
		for(int j=i+1;j<size;++j){
			if(cfcn(arr[index], arr[j]))
				index=j;
		}
		swap(arr[i], arr[index]);
	}
}

void printarray(int *arr, int size){
	for(int i=0; i< size; ++i)
		cout<<arr[i]<<' ';
	cout<<'\n';
}

int main(){
	int arr[10] {3, 7, 9, 5, 6, 100, 1, 8, 2, 4};
	
	selectionsort(arr, 10, descen);
	printarray(arr,10);
	selectionsort(arr,10, ascen);
	printarray(arr, 10);
	selectionsort(arr,10, evenfirst);
	printarray(arr,10);
	return 0;
}
