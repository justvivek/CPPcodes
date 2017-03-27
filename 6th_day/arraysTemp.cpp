#include<iostream>

namespace Animals{
	enum Animals{
		CHICKEN,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE,
		TOTAL
	};
}

/*
void intialize(int noOfLegs[]){
	noOfLegs[] {2,4,4,4,2,0};
}	
*/

int main(){
	int noOfLegs[Animals::TOTAL] {2,4,4,4,2,0};
	std::cout << "No fo Legs of Elephant is: "<<noOfLegs[Animals::ELEPHANT]<<'\n';
	return 0;
}
