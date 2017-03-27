#include<iostream>
#include<cstring>
#include<typeinfo>
#include <cstddef> // for std::nullptr_t
using namespace std;

int main(){
	int size;
	cout<<"Enter the size: ";
	cin>> size;
	
	int *array= new int[size] {6,2,3,4,1,6,7,8,9,10};// initialize a dynamic array in C++11
	array[0]=5;
	for(int i=0; i<size;++i){
		cout<<array[i]<<'\n';
	}
	cout<<"The size of the array is: "<<size<<'\n';	
	delete[] array;
	array=0;
	
//	char *array = new char[14] { "Hello, world!" }; // doesn't work in C++11, works in C++14
	return 0;
}
