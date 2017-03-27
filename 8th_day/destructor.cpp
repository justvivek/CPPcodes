#include <iostream>
#include <string>
using namespace std;

class Mysimple{
	private:
		int m_id;
		
	public:
		Mysimple(int n){
			cout<<"Constructing Mysimple "<<n<<'\n';
			m_id=n;
		}
		
		~Mysimple(){
			cout<<"Destructing Mysimple "<<m_id<<'\n';
		}
		
		int getid() {return m_id;}
};

class Mystring{
	private:
		char *m_string=0;
		int m_length =0;
		
	public:
		Mystring(const char *string){
			if(string ==0)
				string="";
			m_length=0;
			while(string[m_length] !='\0')
				++m_length;
			++m_length;
			m_string= new char[m_length];
			for(int i=0; i< m_length; ++i)
				m_string[i]= string[i];
		}
		
		~Mystring(){
			delete[] m_string;
		}
		
		char *getstring(){ return m_string;}
		int getlength() { return m_length;}
};

int main(){
	Mysimple simple1(1);
	cout<<simple1.getid()<<'\n';
	Mysimple *psimple= new Mysimple(2);
	cout << psimple->getid()<<'\n';
	delete psimple;
	
	Mystring myname("My name is vivek mehta");
	cout<< myname.getstring()<< endl;
	cout<< myname.getlength()<<endl;
	
	return 0;
}
