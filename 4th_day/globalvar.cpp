/*
 * static int g_x; // g_x is static, and can only be used within this file
 * extern double g_y(9.8); // g_y is external, and can be used by other files
 * By default, non-const variables declared outside of a block are assumed to be external.
 * However, const variabl	es declared outside of a block are assumed to be internal.
 * If the forward declaration is declared outside of a block, it applies for the whole file. 
 * If the forward declaration is declared inside a block, it applies within that block only.
*/
/*
 * constants.cpp:
 * static const double g_gravity(9.8);
 * main.cpp:
 * #include <iostream>
 * extern const double g_gravity; // will not find g_gravity in constants.cpp because g_gravity has internal linkage.
 * int main()
 * {
 * std:: cout << g_gravity; // will cause compile error because g_gravity has not been defined as far as main.cpp knows
 * return 0;
 * }
*/
/*
 * This function is declared as static, and can now be used only within this file
 * Attempts to access it via a function prototype will fail
 * static int add(int x, int y)
 * {
 * return x + y;
 * }
*/

//Avoid use of non-const global variables if at all possible! If you do have to use them, use them sensibly and cautiously.
//Const global variables (symbolic constants) are fine to use, so long as you use proper naming conventions.

//int gvalue(50);
//extern int g_x;// forward declaration for g_x -- g_x can be used beyond this point in this file

#include<iostream>
#include"constants.h"
int main(){
	using namespace std;
//	extern int g_y;// forward declaration for g_y -- g_y can be used beyond this point in main()
	cout<< "value of g_y: "<< constants::g_y<< '\n';
//	g_x=10;
	cout<< "value of g_x: "<< constants::g_x<< '\n';
	int gvalue(5);
	gvalue++;//increment local variable
//	constants::g_value--;//decrement global variable
	cout<<"Global value: "<< constants::g_value << '\n';
	cout<< "Local value: "<< gvalue<< '\n';
	cout<< "Value of pi: "<< constants::pi<< '\n';
	cout<< "Avogadro no: "<< constants::avogadro<< '\n';
	cout<< "Value of my_gravity: "<< constants::my_gravity<< '\n';
	return 0;
}
