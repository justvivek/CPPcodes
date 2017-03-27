#include<iostream>
#include<cstring>
#include<typeinfo>
#include <cstddef> // for std::nullptr_t
using namespace std;

struct Person
{
   int age;
   double weight;
};

int main(){
	Person person, p2,p3;
	Person *ptr= &p3;
	Person &ref= p2;
	person.age=30;
	person.weight=100;
	ref.age=25;
	ref.weight=80;
	ptr->age=26;
	ptr->weight=82.5;
	cout<<typeid(p3).name()<<endl;
	cout<< "Age of the person is: "<<person.age<< " and weight is: "<< person.weight<< endl;
	cout<< "Age of the p2 is: "<<ref.age<< " and weight is: "<< ref.weight<< endl;
	cout<< "Age of the p3 is: "<< ptr->age << " and weight is: "<< ptr->weight<< endl;
}
