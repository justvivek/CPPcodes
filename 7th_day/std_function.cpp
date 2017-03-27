#include<iostream>
#include<functional>
using namespace std;

// bool validate(int x, int y, function<bool (int, int)> fcn);//std::function method that returns a bool and takes two int parameters.

int foo(){
	return 100;
}

int goo(){
	return 200;
}

int main(){
	std::function<int()> fcn; // declare function pointer that returns an int and takes no parameters
	fcn = goo;// fcn now points to function goo
	cout<< fcn();// call the function just like normal
	return 0;
}
