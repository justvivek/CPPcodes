#include<iostream>
#include<cmath>
using namespace std;
/*
int power(int x, int y){
	int product(1);
	while(y>0){
		product *=x;
		--y;
	}
}
*/

long long power(int base, int exp)
{
    long long result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }
    return result;
}

int add(int x, int y){
	return x+y;
}

void isEven(int x){
	(x%2==0)?cout<< x << " is an even number"<< endl : cout<< x << " is an odd number"<< endl;
}
int main(){
	int x,y;
	cin >> x;
	cin >> y;
	cout<< add(x, ++x)<< endl;//expression evaluates from right to left, so first value of get updated then addition took place 
	isEven(x);
	isEven(y);
	cout << x << " raise to power " << y << " is equal to: "<< power(x,y)<< endl;
	cout << x << " raise to power " << y << " using math functon is equal to: "<< pow(x,y)<< endl;
	cout<<"-----------------------New functionality--comma(,) operator-------------------"<< endl;
	int a=10,b=2,z;
	z = (++a, ++b); // evaluate (a, b) first to get result of b, then assign that value to variable z.
	cout<< z<< endl;
	z = ++a, b; // evaluates as "(z = a), b", so z gets assigned the value of a, and b is discarded.
	cout<< z<< endl;	
	
	cout<<"-----------------------New functionality--static_cast<double(x)>-------------------"<< endl;
    std::cout << "int / int = " << x / y << "\n";
    std::cout << "double / int = " << static_cast<double>(x) / y << "\n";
    std::cout << "int / double = " << x / static_cast<double>(y) << "\n";
    std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << "\n";
}
