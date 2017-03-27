#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int linearSearch(int array[], int arrsize, int elem){
	int i=0;
	while(i < arrsize){
		if(array[i] == elem) return i;
		++i;
	}
	cout<<"\nElement not found!!\n";
	return -1;
}

void printarray(int array[], int arrayLength){
		for(int i=0; i<arrayLength; ++i){
		cout<<array[i]<< " ";
		if((i+1)%20 ==0) cout<<"\n";
	}
}
	
int getRandomNumber(int max, int min){
	static const double fraction= 1.0/ (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction* (max-min+1) + min);
}	

void intializeArray(int array[], int n){
	for(int i=0; i<n; ++i){
		array[i]=getRandomNumber(999,1);
	}
}

int main(){
	srand(static_cast<unsigned int>(time(0)));
	const int arrayLength(60);
	int array[arrayLength];
	intializeArray(array, arrayLength);
	printarray(array, arrayLength);
	int element;
	cout<<"Enter the element want to search: ";
	cin>> element;
	int index= linearSearch(array,arrayLength,element);
	if(index >=0){
	cout<<"Found the element "<<element <<" at index "<<index<<" in the array\n";
	}
}

