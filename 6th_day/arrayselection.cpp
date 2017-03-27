#include <iostream>
using namespace std; 

int main(){
	const int arrayLength(9);
	int num;
	int array[arrayLength] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	do{
		cout<<"Enter the number between 1 and 9: ";
		cin>> num;
		if(cin.fail()){
			cin.clear();
			cin.ignore(32767,'\n');
		}
//		if(num>9 || num<1) {cout<<"oops!! you have entered the wrong data, please eter again"<< '\n';continue; }
//		else break;
	}while(num<1 || num>9);
	
	int index; 
//	int n= sizeof(array)/sizeof(array[0]);
	for(int i=0; i<arrayLength; ++i){
		cout<<array[i]<< " ";
		if(num == array[i]){index = i;}
	}
	cout<<"\nThe index of the element is: "<<index<<'\n';
}
