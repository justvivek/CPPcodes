#include<iostream>

int main(){
	int x(012);  // 0 before the number means this is octal
	std::cout<< x << std::endl;
	x=0xFF; // 0x before the number means this is hexadecimal
	std::cout<< x << std::endl;
	
	int bin(0);
    bin = 0xFB	; // assign binary 0000 0001 to the variable
    std::cout<< bin << std::endl;
    bin = 0b1000;  // assign binary 0000 0001 to the variable
    std::cout<< bin << std::endl;
    
    bin = 0b10110010;  // assign binary 1011 0010 to the variable
    std::cout<< bin << std::endl;
    long value = 2532673462; // much easier to read than 2532673462
    std::cout<< value << std::endl;
	return 0;
}
