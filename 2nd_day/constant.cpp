#include<iostream>
#include "constants.h"

//C++11 introduced new keyword constexpr, which ensures that the constant must be a compile-time constant:

int main(){	
	using namespace std;
//	const double gravity (9.8); // ok, the value of 9.8 can be resolved at compile-time
//	const int sum = 4 + 5; // ok, the value of 4 + 5 can be resolved at compile-time
 
	std::cout << "Enter your weight: ";
	int weight;
	std::cin >> weight;
	std::cout << weight << std::endl;
	int force= weight * constants::gravity;
	std::cout << "Force experience by it is: " << force << "Newton"<< std::endl;
	
	std::cout<< "enter the initial height of the tower in meters: ";
	float height;
	cin>> height;
	float tempheight= height;
	int time=0;
	while(tempheight > 0){
		float falldistance= (constants::gravity * time*time)/2;
		tempheight=height-falldistance;
		if(tempheight > 0)
			cout<< "At " << time << " seconds, " << "the ball is at height: "<< tempheight <<" meters"<< endl;
	    else
			cout<< "At " << time << " seconds, " << "the ball is on the ground" << endl; 
		++time;
	} 
//	constexpr int myAge = age; // not okay, age can not be resolved at compile-time
}
