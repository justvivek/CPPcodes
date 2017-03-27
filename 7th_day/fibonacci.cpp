#include <iostream>
#include <cstddef>
using namespace std;

int factorial(int x){
	if(x==0 || x==1)
		return 1;
	if(x>1)
		return x*factorial(x-1);
}


long long fibonacci(int x){
	if(x==0)
		return 0;
	if(x==1)
		return 1;
	if(x>1)
		return fibonacci(x-1) + fibonacci(x-2);
}

// And a main program to display the first 13 Fibonacci numbers
int main(){
	for(int i=0; i< 13; ++i){
		cout<<fibonacci(i)<<' ';
	}
	cout<<endl;
	int num;
	cout<<"Enter the number: ";
	cin>> num;
	cout<<"\nFactorial of "<< num<< " is "<< factorial(num)<< '\n';
	return 0;
}
