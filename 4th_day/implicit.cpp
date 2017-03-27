/* We can see the usual arithmetic conversion take place via use of 
 * the typeid() operator (included in the typeinfo header), which can be used to show the resulting type of an expression.
*/

#include<iostream>
#include<typeinfo> // for typeid()

int main(){
	using namespace std;
	double x(2.50);
	short y(3);
	cout<< typeid(x+y).name() << " "<< x+y<< endl;
}
