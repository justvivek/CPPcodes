/* Starting with C++11, the auto keyword can be used in place of a variable’s type 
 * when doing an initialization in order to perform automatic type deduction.
 * Starting with C++11, the auto keyword does just that.
 * When initializing a variable, the auto keyword can be used in place of
 * the variable type to tell the compiler to infer the variable’s type from the assignment’s type.
 * This is called automatic type deduction.
 * 
 * auto d = 5.0; // 5.0 is a double literal, so d will be type double
 * auto i = 1 + 2; // 1 + 2 evaluates to an integer, so i will be type int
*/

/*
 * In C++14, the auto keyword was extended to be able to auto-deduce a function’s return type. Consider:
auto add(int x, int y)
{
    return x + y;
}

auto add(int x, int y) -> int;
auto divide(double x, double y) -> double;
void printSomething();
auto calculateThis(int x, double d) -> std::string;
*/
#include<iostream>
int add(int x, int y); 

auto add(int x, int y) -> int;//auto does not perform automatic type deduction 
						      //-- it is just part of the syntax to use a trailing return type.
int add(int x, int y)
{
    return x + y;
}
 
int main()
{
    auto sum = add(5, 6); // add() returns an int, so sum will be type int
    return 0;
}
