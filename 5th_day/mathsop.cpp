#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int calculate(int x, int y, char op){
	switch(op){
		case '+':
			return x+y;
		case '-':
			return x-y;
		case '*':
			return x*y;
		case '/':
			return x/y;
		case '%':
			return x%y;			
		default:
			cout<<"Operator is not valid"<<'\n';
			exit(0);
	}
}

int main(){
	int x,y;
	char op;
	cout<<"Enter the first digit: ";
	cin>>x;
	cout<< "Enter the second digit: ";
	cin>> y;
	cout<<"Enter the operation on the numbers: ";
	cin>> op;
	cout<< "Result is: "<< calculate(x,y,op)<< '\n';
} 
