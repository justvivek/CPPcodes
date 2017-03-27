//Constructors

#include<iostream>
#include<string>
using namespace std;

int main(){
	char *ch= "Short line for testing";
	
	//with no arguments
	string s1;
	s1= "Zingalala";
	cout<<"s1 is: "<< s1<< endl;
	
	//copy constructor
	string s2(s1);
	cout<<"s2 is: "<< s2<< endl;
	
	//with one argument
	string s3(ch);
	cout<<"s3 is: "<< s3<< endl;
	
	//first argument C string
	//second argument no of characters
	string s4(ch, 10);
	cout<<"s4 is: "<< s4<< endl;
	
	// 1 - C++ string
    // 2 - start position
    // 3 - number of characters
    string s5(s3,6,10);
    cout<<"s5 is: "<< s5<< endl;
    
    // 1 - number characters
    // 2 - character itself
    string s6(20,'$');
    cout<<"s6 is: "<< s6<< endl;
    
    // 1 - start iterator
    // 2 - end iterator
    string s7 (s3.begin(),s3.end()-5);
    cout << "s7  is: " << s7 << endl;

    // We can instantiate string with assignment
    string s8 = "Anatoliy";
    cout << "s8  is: " << s8 << endl;
	return 0;
}
