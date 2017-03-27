#include<iostream>
#include<cstring>
#include<typeinfo>
#include <cstddef> // for std::nullptr_t
using namespace std;

void foo(int *p)
{	
//	int *p(0); // note: ptr is still an integer pointer, just set to a null value (0)
/*	It will give segmentation fault, as a get destroyed when foo() ends
 * 	int a=100;
	*p=a;
*/
}

void doSomething(std::nullptr_t ptr)
{
    std::cout << "in doSomething()\n";
}

int main(){
	int value=4;
	char ch='a';
		char *cptr(NULL);
	cptr = &ch;
	int *ptr= nullptr;//int *ptr(0) 
	ptr= &value;
	cout<< "address of ptr: "<< &ptr;
	cout<<"\naddress ptr holding is "<<ptr;
	cout<<"\nThe value ptr holding is "<< *ptr;
	cout<<"\nSize of ptr: "<< sizeof(ptr);
	cout<<"\nSize of value ptr holding is: "<< sizeof(*ptr);
	cout<<"\nSize of value cptr holding is: "<< sizeof(*cptr)<<endl;
	cout<<"\n*******************************************************\n";
	cout<<"\n"<<typeid(ptr).name();
	cout<<"\n"<<typeid(&ptr).name();
	cout<<"\n"<<typeid(*ptr).name();
	cout<<"\n"<<typeid(cptr).name();
	cout<<"\n"<<typeid(&cptr).name();
	cout<<"\n"<<typeid(*cptr).name();
	cout<<"\n"<<typeid(&value).name();
	cout<<"\n"<<typeid(&ch).name();
	
	int *p; // Create an uninitialized pointer (that points to garbage)
    foo(p); // Trick compiler into thinking we're going to assign this a valid value
	std::cout << '\n'<<*p; // Dereference the garbage pointer
	
    doSomething(nullptr); // call doSomething with an argument of type std::nullptr_t
    
	return 0;
} 
