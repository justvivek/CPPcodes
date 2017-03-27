#include <iostream>
#include <vector>
using namespace std;

void printStack(const vector<int> &arr){
	for(auto &elem: arr)
		cout<< elem<< ' ';
	cout<<"( cap "<< arr.capacity()<< " size "<< arr.size()<< " )\n";
}

int main(){
	
	std::vector<int> array;
	array = { 0, 1, 2, 3, 4 }; // okay, array length = 5
	std::cout << "size: " << array.size() << "  capacity: " << array.capacity() << '\n';
	 
	array = { 9, 8, 7 }; // okay, array length is now 3!
	std::cout << "size: " << array.size() << "  capacity: " << array.capacity() << '\n';

	cout<<"\n*****************************************************************************\n";
	vector<int> s;
	s.reserve(5);
	printStack(s);
	
	s.push_back(20);
	printStack(s);
	
	s.push_back(30);
	printStack(s);
	
	s.push_back(40);
	printStack(s);
	
	s.push_back(50);
	printStack(s);
	
	s.push_back(60);
	printStack(s);
	
	cout<< "element at top "<<s.back()<<'\n';
	

	s.push_back(60);
	printStack(s);
			
	s.pop_back();
	printStack(s);

	s.pop_back();
	printStack(s);

	s.pop_back();
	printStack(s);

	return 0;
}
