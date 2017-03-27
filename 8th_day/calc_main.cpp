#include <iostream>
#include "calcclass.h"

int main(){
/*	calc1 c1;
	c1.add(10);
	c1.sub(5);
	c1.mult(500);
	std::cout<< c1.getvalue()<<std::endl;
*/
	calc2 c;
	c.add(10).sub(5).mult(500);//We have effectively condensed three lines into one expression! 
	std::cout<< c.getval()<<std::endl;

	return 0;
}
