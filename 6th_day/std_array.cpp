#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
/*std::array doesn’t decay to a pointer when passed to a function, 
the size() function will work even if you call it from within a function:
*/
void printsize(const array<int,5> &arr){//Rule: Always pass std::array by (const) reference
	cout<<"Size of array is: "<< arr.size()<< endl;
}

void printarray(const array<int,5> &arr){
	for(auto &num: arr)
		cout<<num<<' ';
}

int main(){
	array<int,5> arr{25,20,15,10,5};
	printsize(arr);
	arr.at(3)=13;
	arr.at(0)=39;//at() function (which does bounds checking):[] operator (which does no bounds checking)
	cout<<"\nBefore sorting\n";
	printarray(arr);
	sort(arr.begin(), arr.end());//sort the array forwards.
	//sort(arr.rbegin(), arr.rend());//sort the array backwards.
	cout<<"\nAfter sorting\n";
	printarray(arr);
	cout<<endl;
	return 0;
}
