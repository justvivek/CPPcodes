#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int binarySearch(int array[], int lo, int hi, int elem){
	while(lo <= hi){
		int mid= lo+(hi-lo)/2;
		if(array[mid]== elem) return mid;
		else if (array[mid] > elem ) hi= mid-1;
		else if(array[mid] < elem ) lo= mid+1;
	}
	cout<<"\nElement not found!!\n";
	return -1;
}

void selectionsort(int array[], int arrayLength){
		for(int i=0; i<arrayLength; ++i){
		int index=i;
		for(int j=i+1; j<arrayLength; ++j){
			if(array[index] > array[j])
				index= j;
		}
		std::swap(array[i], array[index]);
	}
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
//	int array[arrayLength] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	int array[arrayLength];
	intializeArray(array, arrayLength);
	cout<<"*************Before Sorting**************\n";
	printarray(array, arrayLength);
	selectionsort(array, arrayLength);
	cout<<"*************After Sorting***************\n";
	printarray(array,arrayLength);
	int element;
	cout<<"Enter the element want to search: ";
	cin>> element;
	int index= binarySearch(array,0,59,element);
	if(index >=0){
	cout<<"Found the element 111 at index "<<index<<" in the array\n";
	}
}
