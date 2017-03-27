#include <iostream>
#include <string>

class example{		
	public:
		std::string m_value;
		const std::string& getvalue() const {return m_value;}
		std::string& getvalue() { return m_value;}
};

int main(){
	example e1;
	e1.getvalue() = "hello";
	std::cout<< e1.getvalue()<<'\n';
	const example e2;
	e2.getvalue();
	return 0;
}
