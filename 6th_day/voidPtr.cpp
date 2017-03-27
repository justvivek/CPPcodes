/*The void pointer, also known as the generic pointer, is a special type of 
* pointer that can be pointed at objects of any data type! 
* A void pointer is declared like a normal pointer, using the void keyword as the pointer’s type
* However, because the void pointer does not know what type of object it is pointing to, 
* it cannot be dereferenced directly! Rather, the void pointer must first be 
* explicitly cast to another pointer type before it is dereferenced.
*/

/* difference between a void pointer and a null pointer?
 * A void pointer is a pointer that can point to any type of object,
 * but does not know what type of object it points to.
 * A void pointer must be explicitly cast into another type of pointer to be dereferenced.
 * A null pointer is a pointer that does not point to an address. A void pointer can be a null pointer.
*/

#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
using namespace std;

int main(){
	int val=100;
	void *ptr=&val;
	
//	cout<<*ptr<<endl; cannot be dereferenced directly.
	cout<<ptr<<endl;
	int *iptr= static_cast<int*>(ptr);// however, if we cast our void pointer to an int pointer...
	cout<<iptr<<endl;
	cout<<*iptr<<endl;// then we can dereference it like normal
	return 0;
}
	
	

