#include <iostream>

class idgen{
	private:
		static int s_nextid;
		
	public:
		static int getnextid();
};

int idgen::s_nextid=1;

int idgen::getnextid(){
	return s_nextid++;
}

int main(){
	for(int i=0; i<5;++i)
		std::cout<<"The next id is: "<< idgen::getnextid()<<'\n';
	return 0;
}


