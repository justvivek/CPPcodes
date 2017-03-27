#include<iostream>

class calc1{
	private:
		int m_val;
	
	public:
		calc1(){m_val=0;}
		
		void add(int val) {m_val += val;}
		void sub(int val) {m_val -= val;}
		void mult(int val);
		int getvalue(){ return m_val;}
};

void calc1::mult(int val){
				m_val *= val;
			}

class calc{
	private:
		int m_val;
	
	public:
		calc(){m_val=0;}
//if we make each function return *this, we can chain the calls together. Here is the new version of Calc with “chainable” functions:
		calc& add(int val) {m_val += val; return *this;}
		calc& sub(int val) {m_val -= val; return *this;}
		calc& mult(int val);
		int getvalue(){ return m_val;}
};

calc& calc::mult(int val){
	m_val *= val;
	return *this;
}

int main(){
	calc1 c1;
	c1.add(10);
	c1.sub(5);
	c1.mult(500);
	std::cout<< c1.getvalue()<<std::endl;
	calc c;
	c.add(10).sub(5).mult(500);//We have effectively condensed three lines into one expression! 
	std::cout<< c.getvalue()<<std::endl;

	return 0;
}
