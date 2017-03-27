#include<iostream>
#include<string>
using namespace std;

enum Animal{
	PIG,
	DOG,
	GOAT,
	CAT,
	CHICKEN,
	OSTRICH
};

std::string getAnimalName(Animal animal){
	switch(animal){
		case PIG:
			return "Pig";
		case DOG:
			return "Dog";
		case CAT:
			return "Cat";
		case GOAT:
			return "Goat";
		case OSTRICH:
			return "Ostrich";
		case CHICKEN:
			return "Chicken";
		default:
			return "you have selected none of given Animals";
		}
}

std::string printNoOfLegs(Animal animal){
//	std::cout << "A " << getAnimalName(animal) << " has ";
	switch(animal){
		case PIG:
		case DOG:
		case CAT:
		case GOAT:
			return "4 legs";
			break;
		case OSTRICH:
		case CHICKEN:
			return "2 legs";
			break;
		default:
			return "Error in input";
		}
}

int main(){
	Animal a1(CAT);
	Animal a2(CHICKEN);
	//we can't use the function with void return type in std::cout****** 
	cout << "A " << getAnimalName(a1) << " has " << printNoOfLegs(a1) << endl;
	cout << "A " << getAnimalName(a2) << " has " << printNoOfLegs(a2) << endl;
//	printNoOfLegs(CAT);
//	printNoOfLegs(CHICKEN);
	return 0;
}
