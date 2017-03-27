#include<iostream>

/*Starting with C++11, it’s possible to give non-static struct members a default value:
in C++11, the non-static member initialization syntax is incompatible with the initializer list and uniform initialization syntax.
struct Employee
{
    short id=0;
    int age=99;
    double wage=1000000.00;
};
*/

struct Employee
{
    short id;
    int age;
    double wage;
};

void printInformation(Employee emp){
	std::cout<<"ID: "<< emp.id<<'\n';
	std::cout<<"Age: "<< emp.age<<'\n';
	std::cout<<"Wage: "<<emp.wage<<'\n';
}

Employee getdata(){
	Employee emp{001, 59, 9999999999.00};
	return emp;
}
//Initializing structs by assigning values member by member is a little cumbersome, 
//so C++ supports a faster way to initialize structs using an initializer list. 
//This allows you to initialize some or all the members of a struct at declaration time.
//In C++11, we can also use uniform initialization:
int main(){
	Employee viv = {777,25,50000000000.00};//intializer list
	Employee meh {666,26,1234256.99};//In C++11, we can also use uniform initialization:
	Employee vivmeh {123,20};//vivmeh wage will take default intialization i.e 0
	Employee ceo= getdata();
	std::cout<< "the size of Employee structureis: "<< sizeof(Employee)<< '\n';
	std::cout<< "Details of employee viv as follows:"<<'\n';
	printInformation(viv);
	std::cout<< "Details of employee meh as follows:"<<'\n';
	printInformation(meh);
	std::cout<< "Details of employee vivmeh as follows:"<<'\n';
	printInformation(vivmeh);
	std::cout<< "Details of employee CEO as follows:"<<'\n';
	printInformation(ceo);
	return 0;
}
