#include "calcclass.h"
/*
calc1::calc1(){
	m_val=0;
}

void calc1::add(int val){
				m_val *= val;
			}

void calc1::sub(int val){
				m_val *= val;
			}

void calc1::mult(int val){
				m_val *= val;
			}

int calc1::getvalue(){
	return m_val;
}
*/

calc2::calc2(){
	m_val=0;
}

calc2& calc2::add(int val){
	m_val += val;
	return *this;
}

calc2& calc2::sub(int val){
	m_val -= val;
	return *this;
}

calc2& calc2::mult(int val){
	m_val *= val;
	return *this;
}

int calc2::getval(){
	return m_val;
}
