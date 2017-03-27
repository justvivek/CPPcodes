//Overlapping and Delegating Constructors
#include <iostream>
#include <string>
using namespace std;

class Employee{
	private:
		int m_id;
		std::string m_name;
	
	public:
		Employee(int id, string name): m_id(id), m_name(name) {}
		
		Employee(): Employee(0,"Default"){}
		Employee(int id):Employee(id,"Default"){}
		Employee(string name): Employee(0,name){}
		
		void printclass(){
			cout<<"Name of employee is "<< m_name<<" and ID is "<<m_id<< endl;
		}
};

int main(){
	Employee e1(7, "vivek");
	Employee e2(9);
	Employee e3("Mehta");
	e1.printclass();
	e2.printclass();
	e3.printclass();
	return 0;
}
