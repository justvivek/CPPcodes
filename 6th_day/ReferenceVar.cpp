#include<iostream>
#include<cstring>
#include<typeinfo>
#include <cstddef> // for std::nullptr_t
using namespace std;

/*More often this is useful when using const references as function parameters,
 * because a const reference parameter allows you to pass in a non-const argument, a const argument, or a literal:
*/
void printit(const int &ref){
	cout<<ref<<endl;
}


//Rule: Pass non-pointer, non-fundamental data type variables by (const) reference.
void nochange(const int &ref){
	cout<< ref<< endl;
//	++ref; we can't change it as ref is being constant
//  References as function parameters can also be const.
//	This allows us to access the argument without making a copy of it, 
//	while guaranteeing that the function will not change the value being referenced.
}


void change(int &ref){// ref is a reference to the argument passed in, not a copy
	++ref;
}

//References as shortcuts
struct s{
	int a;
	float b;
};

struct oth{
	s something;
	float b;
}other;



//References are treated as const meaning that they must be initialized and once initialized can not be reassigned.
int main(){
	int value=10;
	int &ref= value;
/*	int &ref;// invalid, needs to reference something
	ref=value;
*/	++ref;
	const int &constref= 100;// we can assign const references to literal values
	
	cout<<ref<<endl;
	cout<<&ref<<endl;
	cout<<&value<<endl;
	cout<<"\n**************************************************\n";  
	change(ref);
	change(value);// note that this is a non-reference argument
	cout<<ref<< endl;
	nochange(ref);
	cout<<"\n**************************************************\n";  
	const int a=55;
	printit(a);
	int b=66;
	printit(b);
	printit(99);
	cout<<"\n**************************************************\n"; 
	int &ref = other.something.value1;
// ref can now be used in place of other.something.value1
	//both statements are identical.
	other.something.value1 = 59;
	ref = 59;
	cout<<"\n**************************************************\n"; 
/*
 * If a given task can be solved with either a reference or a pointer, 
 * the reference should generally be preferred.
 * Pointers should only be used in situations where references are not sufficient (such as dynamically allocating memory).
 * a reference acts like a const pointer that is implicitly dereferenced when accessed
*/
	int value1 = 5;
	int *const ptr = &value1;
	int &ref = value1;
	//both are same
	*ptr=10;
	ref=10;
	return 0;
}
