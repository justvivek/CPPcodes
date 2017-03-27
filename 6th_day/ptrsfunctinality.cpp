#include<iostream>
#include<cstring>
#include<typeinfo>
#include <cstddef> // for std::nullptr_t
using namespace std;

int main(){
	int *p1= new int(10);
	int *p2=new int{100};
	int *p3=p1;
	if(!p3) p3= new int;// If p3 isn't already allocated, allocate it
	delete p1;//return the memory pointed to by p1 to the operating system
	p1=0;
//	p3=0; if we donot make p3 null then it will become Dangling pointer
	p3=0;
	
	cout<<"\n***********************to check whether memory has been allocated or not***************************\n";
		  
	//best practice is to check all memory requests to ensure they actually succeeded before using the allocated memory.
	
	int *value = new (std::nothrow) int; // ask for an integer's worth of memory
	if (!value) // handle case where new returned null
	{
		std::cout << "Could not allocate memory";
		exit(1);
	}
	
	cout<<"\n**********************Mem Leak****************************\n";  
		
	int value = 5;
	int *ptr = new int; // allocate memory
	ptr = &value; // old address lost, memory leak results
	
	//memory leak via double-allocation:
	int *ptr1 = new int;
	ptr1 = new int; // old address lost, memory leak results
	
	return 0;
}
