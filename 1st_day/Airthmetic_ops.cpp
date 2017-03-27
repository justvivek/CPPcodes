#include<iostream>
#include "io.h"
int main(){
	int input1= getinput();
	int op    = getoperator();
	int input2= getinput();
	printresult(calculateResult(input1, op, input2));
}
