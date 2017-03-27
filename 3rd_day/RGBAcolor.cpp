#include<iostream>
using namespace std;

int main(){
	const int redBits= 0xFF000000;
	const int greenBits= 0x00FF0000;
	const int blueBits= 0x0000FF00;
	const int alphaBits= 0x000000FF;
	unsigned int pixel;
	cout<<"Enter the 32-bit value of RGBA in Hexadecimal(FFABC894):  ";
	cin>> hex >> pixel;
	
	unsigned char red= (pixel & redBits)>> 24;
	unsigned char green= (pixel & greenBits)>> 16;
	unsigned char blue= (pixel & blueBits)>> 8;
	unsigned char alpha= (pixel & alphaBits);
	
	cout<<"your color contains:\n";
	cout<< static_cast<int>(red) <<" of 255 red\n";
	cout<< static_cast<int>(blue) <<" of 255 blue\n";
	cout<< static_cast<int>(green) <<" of 255 green\n";
	cout<< static_cast<int>(alpha) <<" of 255 alpha\n";
	return 0;
}
