#include<iostream>
#define SIZE 10
#define NEG -1
using namespace std;

class Stack{
	int arr[SIZE];
	int len=NEG;
	
public:
	Stack(): arr {} {//zero the member array
		}
		
	void reset(){
		for(int i=0; i<len; ++i)
			arr[i]=0;
		len=-1;
	}

	bool push(int val){
		if(len < SIZE){
			arr[++len]=val;
			return true;
		}
		else 
			cout<<"stack is full\n";
			return false;
	}
	
	int pop(){
		if(len<0){
			cout<<"Stack is empty\n";
			return -1;
		}
		else{
			int temp= arr[len];
			--len;
			return temp;
		}
	}
	
	int print(){
		cout<<"( ";
		for(int i=0; i<=len; ++i)
			cout<<arr[i]<<' ';
		cout<<')';
	}
};


int main()
{
	Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
	stack.pop();
 
	stack.print();
 
	return 0;
}
