#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main(){
	vector<int> arr{9,8,7,6,5,4,3,2,1};
	cout<<"Size of array before resize() operation: "<< arr.size()<< endl;
	//vectors can be resized to bigger array.
	cout<<"\nvectors values after resizing to big\n";
	arr.resize(20);
	cout<<"Size of array after resize() operation: "<< arr.size()<< endl;
	for(auto const &element: arr )
		cout<< element<<' ';
	//Vectors may be resized to be smaller:	
	arr.resize(5);
	cout<<"\nvectors values after resizing to small\n";
	for(auto const &element: arr )
		cout<< element<<' ';		
		
// There is a special implementation for std::vector of type bool that will compact 8 booleans into a byte
	cout<<"Boolean vector array\n";
	vector<bool> boolarr{true,false,true,false,true,false};
	cout<<"Size of bool array is: "<<boolarr.size()<<endl;
	for(auto const &element: boolarr){
		cout<<element<<' ';
	}
	return 0;
}

