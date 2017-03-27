#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

void selectionsort(int array[], int arrayLength){
		for(int i=0; i<arrayLength; ++i){
		int index=i;
		for(int j=i+1; j<arrayLength; ++j){
			if(array[index] > array[j])
				index= j;
		}
		swap(array[i], array[index]);
	}
}

void printarray(int array[], int arrayLength){
		for(int i=0; i<arrayLength; ++i){
		cout<<array[i]<< " ";
		if((i+1)%10 ==0) cout<<"\n";
	}
}
	
int getRandomNumber(int max, int min){
	static const double fraction= 1.0/ (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction* (max-min+1) + min);
}	

void intializeArray(int array[], int n){
	for(int i=0; i<n; ++i){
		array[i]=getRandomNumber(1000,100);
	}
}

int main(){
	srand(static_cast<unsigned int>(time(0)));
	const int arrayLength(100);
//	int array[arrayLength] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	int array[arrayLength];
	intializeArray(array, arrayLength);
	cout<<"*************Before Sorting**************\n";
	printarray(array, arrayLength);
	selectionsort(array, arrayLength);
	cout<<"*************After Sorting***************\n";
	printarray(array,arrayLength);
}
