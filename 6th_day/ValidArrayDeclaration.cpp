#include<iostream>

// using a literal constant
int array[5]; // Ok
 
// using a macro symbolic constant
#define ARRAY_SIZE 5
int array[ARRAY_SIZE]; // Syntactically okay, but don't do this
 
// using a symbolic constant
const int arraySize = 5;
int array[arraySize]; // Ok
 
// using an enumerator
enum ArrayElements
{
    MAX_ARRAY_SIZE = 5
};
int array[MAX_ARRAY_SIZE]; // Ok

//Note that Code::Blocks is not a compiler, but an IDE. The compiler is the MinGW port of g++.
// using a non-const variable
int size;
std::cin >> size;
int array[size]; // Not ok -- size is not a compile-time constant!
//user can input the size of array, at runtime, it works fine
/*Most compilers don’t conform precisely to the C++ spec. 
 * Many will let you “get away” with things that you technically shouldn’t be able to do.
 * A good example is that most compilers will let you declare main() as returning void instead of int.
 * Technically not part of the C++ spec, but compilers let you do it anyway.
 * It may be that Code::Blocks is more permissive in how it lets you allocate arrays than is defined in the C++ spec.
*/

/*Note that Code::Blocks is not a compiler, but an IDE. The compiler is the MinGW port of g++.
 * int size;
 * cin >> size;
 * int *myArray = new int[size];
*/
 
// using a runtime const variable
int temp = 5;
const int size = temp;
int array[size]; // Not ok -- size is a runtime constant, not a compile-time constant!
