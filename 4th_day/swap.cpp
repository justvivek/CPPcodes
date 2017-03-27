#include<iostream>

int main(){
	using namespace std;
	int a, b;
	cout<< "Enter the integer: ";
	cin>> a;
	cout<< "Enter a larger integer: ";
	cin>> b;
	if(a>b){
		int temp;
		temp=a;
		a=b;
		b=temp;
	}
	cout<< "The smaller value is : "<< a<< '\n';
	cout<< "The larger value is : "<< b<< '\n';
	return 0;
}
