#include <iostream>
#include <string>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
#include <math.h>
#include <cassert>//for assert()
using namespace std;

//cerr is an output stream (just like cout) that is defined in <iostream>.
//Typically, cerr writes the error messages on the screen (just like cout), but it can also be individually redirected to a file.

void printString(const char *cstring){
	if(cstring)
		cout<< cstring;
	else
		cerr<<"function printString() received a null parameter";
}

/*Using a conditional statement to detect a violated assumption, along with printing an error message
 * and terminating the program, is such a common response to problems that C++ provides a
 * shortcut method for doing this. This shortcut is called an assert.
 * An assert statement is a preprocessor macro that evaluates a conditional expression.
 * If the conditional expression is true, the assert statement does nothing.
 * If the conditional expression evaluates to false, an error message is displayed and the program is terminated.
 * This error message contains the conditional expression that failed,
 * along with the name of the code file and the line number of the assert. 
 * 
 * The assert() function comes with a small performance cost that is incurred each time the assert condition is checked. 
 * 
 * C++ comes with a way to turn off asserts in production code: #define NDEBUG.
 * 
*/

#define NDEBUG
// all assert() calls will now be ignored to the end of the file


int getArrayValue(const array<int, 10> &array, int index){
	// we're asserting that index is between 0 and 9
	assert(index >=0 && index < 10);
	
	return array[index];
}

int main(){
	string hello="Kuch bhi!!";
	int index;
	
	do{
		cout<<"Enter an index: ";
		cin>> index;
		
		if(cin.fail()){
			cin.clear();
			cin.ignore(32767,'\n');
			index=-1;
			continue;
		}
	}while(index < 0 || index >= hello.size());

	cout<< "letter #"<< index <<" is "<<hello[index]<< endl;
	return 0;
} 
