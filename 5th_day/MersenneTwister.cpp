#include<iostream>
#include<random> //for std::random_device and std::mt19937

int main(){
	std::random_device rd; // Use a hardware entropy source if available, otherwise use PRNG
	std::mt19937 mersenne(rd());// initialize our mersenne twister with a random seed
	
	
    for (int count = 0; count < 48; ++count)
    {
        std::cout << mersenne() << "\t";
        // If we've printed 4 numbers, start a new row
        if ((count + 1) % 4 == 0)
            std::cout << "\n";
    }
}
