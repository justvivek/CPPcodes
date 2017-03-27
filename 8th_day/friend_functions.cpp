#include<iostream>

class Value{
	private:
		int m_val;
	public:
		Value(int value){m_val=value;}
		friend bool isequal(const Value &value1, const Value &value2);
};

bool isequal(const Value &value1, const Value &value2){
	return (value1.m_val == value2.m_val);
}

int main(){
	Value val1(100);
	Value val2(100);
	if(isequal(val1, val2))
		std::cout<< "val1 and val2 are equal";
	else
		std::cout<< "val1 and val2 are not equal";
	return 0;
}
