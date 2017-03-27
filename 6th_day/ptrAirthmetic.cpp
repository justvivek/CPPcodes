#include<iostream>
#include<cstring>
#include<typeinfo>
using namespace std;

int main(){
	     int array [5] = { 9, 7, 5, 3, 1 };
 
     std::cout << &array[1] << '\n'; // print memory address of array element 1
     std::cout << array+1 << '\n'; // print memory address of array pointer + 1 
 
     std::cout << array[1] << '\n'; // prints 7
     std::cout << *(array+1) << '\n'; // prints 7 (note the parenthesis required here)
	
	cout<<"\n**************************************************\n";  
    //Rule: Feel free to use C-style string symbolic constants if you need read-only strings in your program, 
    //but always make them const!


    const char *myName = "Alex";
    std::cout << myName;

 	cout<<"\n**************************************************\n";  
 	//In this case, the programmer is intending to print the address of variable c.
 	//However, &c has type char*, so std::cout tries to print this as a string!
    char c = 'Q';
    std::cout << &c;
     
 	cout<<"\n**************************************************\n";  
/*		std::cout makes some assumptions about your intent.
     * If you pass it a non-char pointer, it will simply print the contents of
     * that pointer (the address that the pointer is holding).
     * However, if you pass it an object of type char* or const char*,
     * it will assume you’re intending to print a string.
     * Consequently, instead of printing the pointer’s value,
     * it will print the string being pointed to instead!
*/

     int nArray[5] = { 9, 7, 5, 3, 1 };
    char cArray[] = "Hello!";
    const char *name = "Alex";
 
    std::cout << nArray << '\n'; // nArray will decay to type int*
    std::cout << cArray << '\n'; // cArray will decay to type char*
    std::cout << name << '\n'; // name is already type char*
    
	cout<<"\n**************************************************\n";  
	
	const int size=7;
	char arr[size]="Mollie";
	int numVowels(0);
	for(char *ptr=arr; ptr < arr + size; ++ptr){
		switch (*ptr)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            numVowels++;
    }
	}
	cout << arr << " has " << numVowels << " vowels.\n";
    return 0;
}
