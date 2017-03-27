#include<iostream>
#include<cstdlib> //for srand() and rand()
#include<ctime> // for time()
using namespace std;

unsigned int PRNG(){
	static unsigned int seed=static_cast<unsigned int>(time(0));
	
	// Take the current seed and generate a new value from it
    // Due to our use of large constants and overflow, it would be
    // very hard for someone to predict what the next number is
    // going to be from the previous one.
    seed = (8253729 * seed + 2396403);
 
    // Take the seed and return a value between 0 and 32767
    return seed  % 32768;
}
/*Generating random numbers between a given range
 * Generally, we do not want random numbers between 0 and RAND_MAX -- 
 * we want numbers between two other values, which we’ll call min and max.
 * For example, if we’re trying to simulate the user rolling a die, we want random numbers between 1 and 6.
 * Here’s a short function that converts the result of rand() into the range we want:

// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
*/
double getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    //return static_cast<double>(rand() * fraction * (max - min ) + min);
    return (rand() * fraction * (max - min ) + min);
}

int main(){
	srand(static_cast<unsigned int>(time(0)));
/*	
	for(int count=0; count<100;++count){
		cout<< rand()<< "\t";
		
		if((count+1)%5==0)
			cout<< '\n';
	}
	cout<<"*****************************************************\n";
		for(int count=0; count<100;++count){
		cout<< PRNG()<< '\t';
		
		if((count+1)%5==0)
			cout<< '\n';
	}
*/
	cout<<"\n*******Generate a random number between min and max (inclusive)***************\n";
		for(int count=0; count<50;++count){
		cout<< getRandomNumber(0,1)<< '\t';
		
		if((count+1)%5==0)
			cout<< '\n';
	}
	return 0;
}

