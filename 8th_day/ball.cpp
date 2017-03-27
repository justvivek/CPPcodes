#include <iostream>
#include <string>
using namespace std;

class Ball{
	string m_color;
	double m_radius;
	
public:
	Ball(double radi): m_color("black"), m_radius(radi){
/*		m_color = "black";
		m_radius = radi;
*/	}
	
	Ball(const string &color ="Black", double radi = 10.0): m_color(color), m_radius(radi){// directly initialize our member variables
/*		m_color = color;no need to intialize here
		m_radius = radi;
*/	}
	
	void print(){
		cout<<"color: "<< m_color <<", radius: "<< m_radius<<'\n';
	}
};

int main()
{
    Ball def;
    def.print();
 
	Ball blue("blue");
	blue.print();
	
	Ball twenty(20.0);
	twenty.print();
	
	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();
 
    return 0;
}
