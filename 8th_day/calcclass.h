#ifndef CALCCLASS_H
#define CALCCLASS_H

/*
class calc1{
	private:
		int m_val;
	
	public:
		calc1();
		
		void add(int val);
		void sub(int val);
		void mult(int val);
		int getval();
};
*/

class calc2{
	private:
		int m_val;
	
	public:
		calc2();
//if we make each function return *this, we can chain the calls together. Here is the new version of Calc with “chainable” functions:
		calc2& add(int val);
		calc2& sub(int val);
		calc2& mult(int val);
		int getval();
};

#endif
