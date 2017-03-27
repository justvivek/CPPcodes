/*Why ellipsis are dangerous: ellipsis don’t know how many parameters were passed
Not only do the ellipsis throw away the type of the parameters,
it also throws away the number of parameters in the ellipsis.
This means we have to devise our own solution for keeping track of the number of
parameters passed into the ellipsis. Typically, this is done in one of three ways.

Method 1: Pass a length parameter

Method 2: Use a sentinel value

Method 3: Use a decoder string

*/

#include <iostream>
#include <string>
#include <cstdarg> //needed to use ellipisis
using namespace std;

//Method 1
double findAverage(int count, ...){
	va_list list;
	va_start(list, count);
	double sum=0;
	for(int i=0; i< count; ++i)
		sum += va_arg(list, int);
	 va_end(list);
	 return sum/count;
}

//Method 2
double findarg(int first, ...){
	
	double sum=first;
	va_list list;
	va_start(list, first);
	int count=1;
	
	while(1){
		int arg= va_arg(list, int);
		if(arg== -1)
			break;
		
		sum += arg;
		count++;
	}
	va_end(list);
	return sum/count;
}

//Method 3
double findavg(string decoder, ...){
	double sum=0;
	va_list list;
	va_start(list, decoder);	
	int count=0;
	while(1){
		char ch= decoder[count];
		switch(ch){
			case '\0':
				va_end(list);
				return sum/count;
			case 'i':
				sum += va_arg(list, int);
				count++;
				break;
			case 'd':
				sum += va_arg(list, double);
				count++;
		}
	}
}

int main(){
	cout<<findAverage(10,1,2,3,4,5,6,7,8,9,10)<<'\n';
	cout<<findarg(1,2,3,4,5,6,7,8,9,10,-1)<<'\n';
	cout<< findavg("iiididiiii",1,2,3,4.0,5,6.0,7,8,9,10)<<'\n';
}
