#include <iostream>
#include <string>
#include <cstdint>
using namespace std;

class RGBA{
	uint8_t m_red;
	uint8_t m_green;
	uint8_t m_blue;
	uint8_t m_alpha;
	
	public:
//	RGBA(): m_red(0),m_green(0), m_blue(0),m_alpha(255){}
	RGBA(uint8_t red=0, uint8_t green=0, uint8_t blue=0, uint8_t alpha=255): m_red(red),m_green(green), m_blue(blue),m_alpha(alpha){}
	
	void print(){
		cout<< "r=" << static_cast<int>(m_red)<< " g="<<static_cast<int>(m_green)<<" b=" <<static_cast<int>(m_blue)<<" a="<<static_cast<int>(m_alpha)<<'\n';
	}
};

int main()
{
	RGBA teal(0, 127, 127);
	teal.print();
 
	return 0;
}	
	
