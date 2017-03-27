//This code is not for compilation it's only for conceptual purpose.

typedef double distance_t;

double howfar;
distance_t howfar;

typedef long miles_t;
typedef long speed_t;
 
miles_t distance = 5;
speed_t mhz = 3200;
 
// The following is valid, because distance and mhz are both actually type long
distance = mhz;

//	Using typedefs for legibility
int GradeTest();
typedef int testScore_t;
testScore_t GradeTest();

/*
 * Using typedefs for easier code maintenance

Typedefs also allow you to change the underlying type of an object without having to change lots of code.
* For example, if you were using a short to hold a student’s ID number,
* but then later decided you needed a long instead, 
* you’d have to comb through lots of code and replace short with long.
* It would probably be difficult to figure out which shorts were being used 
* to hold ID numbers and which were being used for other purposes.
*/

/*
 * Platform independent coding
 * One big advantage of typedefs is that they can be used to hide platform specific details.
 * On some platforms, an integer is 2 bytes, and on others, it is 4.
 * Thus, using int to store more than 2 bytes of information can be potentially dangerous when writing platform independent code.
 * #ifdef INT_2_BYTES
	typedef char int8_t;
	typedef int int16_t;
	typedef long int32_t;
	#else
	typedef char int8_t;
	typedef short int16_t;
	typedef int int32_t;
	#endif
	* On machines where integers are only 2 bytes, INT_2_BYTES can be #defined, 
	* and the program will be compiled with the top set of typedefs.
	* On machines where integers are 4 bytes, leaving INT_2_BYTES undefined will cause 
	* the bottom set of typedefs to be used. 
	* In this way, int8_t will resolve to a 1 byte integer, int16_t will resolve 
	* to a 2 bytes integer, and int32_t will resolve 
	* to a 4 byte integer using the combination of char, short, int, and long that is appropriate 
	* for the machine the program is being compiled on.
*/

/*
 * In C++11, this is actually how the fixed width integers (like int8_t) were defined!
 * As a side-effect of the fact that int8_t is actually a typedef of char, the following code acts somewhat unexpectedly:
 * #include <cstdint> // for fixed-width integers
#include <iostream>
 
int main()
{
    int8_t i(97); // int8_t is actually a typedef for char
    std::cout << i;
 
    return 0;
}
* This program prints: a	
* not 97, because std::cout prints char as an ASCII character, not a number.
*/

/*
 * typedef std::vector<std::pair<std::string, int> > pairlist_t;
 
pairlist_t pairlist;
 
boolean hasDuplicates(pairlist_t pairlist)
{
    // some code here
}
*/

/*
 * Typedefs via the using keyword in C++11
 * typedef double distance_t; // define distance_t as an alias for type double
 * using distance_t = double; // define distance_t as an alias for type double
 * The two are functionally equivalent.
*/
