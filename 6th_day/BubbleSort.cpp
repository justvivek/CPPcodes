#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

void bubbleSort(int array[], int arrayLength){
		bool value = true;
		int i=0;
		for(i; i<arrayLength && value==true; ++i){
//		int index=0;
			value=false;
			for(int j=0; j<arrayLength-i-1; ++j){
				if(array[j] > array[j+1]){
					std::swap(array[j], array[j+1]);
					value=true;
				}
			}
		}
		if(!value) cout<<"\n\nEarly termination on iteration: " << i+1 << "\n\n";
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
		array[i]=getRandomNumber(100,1);
	}
}

/*real	1m5.817s
user	1m5.146s
sys	0m0.044s
*/

int main(){
	srand(static_cast<unsigned int>(time(0)));
	const int arrayLength(9);
	int array[arrayLength] {25,4,5,6,7,8,9,21,20 };
//	int array[arrayLength];
//	intializeArray(array, arrayLength);
	cout<<"*************Before Sorting**************\n";
	printarray(array, arrayLength);
	bubbleSort(array, arrayLength);
	cout<<"*************After Sorting***************\n";
	printarray(array,arrayLength);
}
