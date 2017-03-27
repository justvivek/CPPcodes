#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
using namespace std;

//In order to iterate through the array, for-each needs to know how big the array is,
//which means knowing the array size. Because arrays that have decayed into a pointer do not know their size,
//for-each loops will not work with them!
//C++11 introduces a new type of loop called a for-each loop

int main(){
    int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    for(int num: fibonacci)// iterate over array fibonacci
		cout<< num<< ' ';// we access the array element for this iteration through variable number
		cout<<'\n';	
	for(auto num: fibonacci)// type is auto, so number has its type deduced from the fibonacci array
		cout<<num << ' ';
		cout<<'\n';	
	cout<<'\n';	
	for(auto &num: fibonacci)// The ampersand makes element a reference to the actual array element, preventing a copy from being made
		cout<<num << ' ';
		cout<<'\n';	
	for(const auto &num: fibonacci)// element is a const reference to the currently iterated array element if you’re intending to use it in a read-only fashion:
		cout<<num << ' ';
	const int index=5;
	int s[index]={80,45,99,45,69};
	int maxscore=0;
	for(int score: s)
		if(score > maxscore) maxscore=score;
	cout<< "\n	Maxscore is: "<< maxscore<< endl;
	
	std::vector<int> fib = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 }; // note use of std::vector here rather than a fixed array
    for (const auto &number : fib)
        std::cout << number << ' ';
    string names[8]{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};
    cout<<"Enter a name: ";
    string name;
    cin>> name;
    for(const auto &str : names)
			if(str.compare(name) ==0){
				cout<< name<<" was found.\n";
				return 0;
			}
    cout<<name<<" was not found.\n";
	return 0;
}	
