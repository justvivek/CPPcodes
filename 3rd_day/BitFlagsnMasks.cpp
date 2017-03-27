/*
 * // Define 8 separate flags (these can represent whatever you want)
// Note: in C++11, better to use "uint8_t" instead of "unsigned char"
const unsigned char option1 = 0x01; // hex for 0000 0001
const unsigned char option2 = 0x02; // hex for 0000 0010
const unsigned char option3 = 0x04; // hex for 0000 0100
const unsigned char option4 = 0x08; // hex for 0000 1000
const unsigned char option5 = 0x10; // hex for 0001 0000
const unsigned char option6 = 0x20; // hex for 0010 0000
const unsigned char option7 = 0x40; // hex for 0100 0000
const unsigned char option8 = 0x80; // hex for 1000 0000
 
// byte-size value to hold some combination of the above 8 options
unsigned char myflags = 0; // all flags/options turned off to start
To query a bit state, we use bitwise AND:

if (myflags & option4) ... // if option4 is set, do something
To turn a bit on, we use bitwise OR:

myflags |= option4; // turn option 4 on.
myflags |= option4 | option5; // turn options 4 and 5 on.
To turn a bit off, we use bitwise AND with an inverse bit pattern:

myflags &= ~option4; // turn option 4 off
myflags &= ~option4 & ~option5; // turn option4 and 5 off.
To toggle a bit state, we use bitwise XOR:

myflags ^= option4; // flip option4 from on to off, or vice versa
myflags ^= option4 | option5; // flip options 4 and 5
As a real-life example, in OpenGL (a 3d graphics library), some functions take one or more bit flags as a parameter:

glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // clear the color and the depth buffer
GL_COLOR_BUFFER_BIT and GL_DEPTH_BUFFER_BIT are defined as follows (in gl2.h):

#define GL_DEPTH_BUFFER_BIT               0x00000100
#define GL_STENCIL_BUFFER_BIT             0x00000400
#define GL_COLOR_BUFFER_BIT               0x00004000


std::bitset provides 4 key functions:

test() allows us to query whether a bit is a 0 or 1
set() allows us to turn a bit on (this will do nothing if the bit is already on)
reset() allows us to turn a bit off (this will do nothing if the bit is already off)
flip() allows us to flip a bit from a 0 to a 1 or vice versa

*/

#include<iostream>
#include<bitset>

const unsigned char option1 = 0x01; // hex for 0000 0001
const unsigned char option2 = 0x02; // hex for 0000 0010
const unsigned char option3 = 0x04; // hex for 0000 0100
const unsigned char option4 = 0x08; // hex for 0000 1000
const unsigned char option5 = 0x10; // hex for 0001 0000
const unsigned char option6 = 0x20; // hex for 0010 0000
const unsigned char option7 = 0x40; // hex for 0100 0000
const unsigned char option8 = 0x80; // hex for 1000 0000

// Note that with std::bitset, our options correspond to bit numbers, not bit patterns
const int option_1= 0;
const int option_2= 1;
const int option_3= 2;
const int option_4= 3;
const int option_5= 4;
const int option_6= 5;
const int option_7= 6;
const int option_8= 7;


int main(){
	using namespace std;
	unsigned char myflags = 0;
	if(myflags & option4){//do something
	}
	myflags |= option6 | option1;//turn option 1 and 6 on;
	myflags &= ~option3 & ~option5;//turn option 3 and 5 off
	myflags ^= option2 ^option8;//toggle the option2 and option8
//	std::bitset<8> bits(option1 | option5);//start with option 1 and 5 turned on 00010001
//	std::bitset<8> morebits(0x3);//start with bit pattern 00000011
	std::bitset<8> bits(0x2);
	bits.set(option_5);
	bits.reset(option_8);
	bits.flip(option_6);
	bits.reset(option_6);
	cout<<"Bit 4 has value: "<<bits.test(option_5) << '\n';
	cout<<"Bit 5 has value: "<<bits.test(option_6) << '\n';
	cout<<"al the bits: "<< bits << '\n';
	return 0;
}
