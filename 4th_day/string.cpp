/*
 * It turns out that when using operator>> to extract a string from cin,
 * operator>> only returns characters up to the first whitespace it encounters. 
 * Any other characters are left inside cin, waiting for the next extraction.
 * 
 * Use std::getline() to input text
 * 
 * It turns out, when you enter a numeric value using cin, cin not only captures the numeric value,
 * it also captures the newline. So when we enter 2, cin actually gets the string “2\n”.
 * It then extracts the 2 to variable choice, leaving the newline stuck in the input stream.
 * Then, when std::getline goes to read the name, it sees “\n” is already in the stream,
 * and figures we must have entered an empty string! Definitely not what was intended.
 * std::cin.ignore(32767, '\n'); // ignore up to 32767 characters until a \n is removed
 * 
 * Rule: If reading numeric values with std::cin, it’s a good idea to remove the extraneous newline using std::cin.ignore().
 * 
 * We can use operator+ to concatenate two strings together, or operator+= to append one string to another.
*/
#include<iostream>
#include<string>

int main(){
	using namespace std;
	std::string name;
	cout<<"pick choice 1 or 2\n";
	int choice;
	cin>>choice;
	std::cin.ignore(32767,'\n');
	cout<< "enter your full name: ";
	std::getline(std::cin, name);
	cout<< "enter your age: ";
	std::string age;
	std::getline(std::cin, age);
	cout<< "My name is "<< name <<" and age is "<< age << endl;
	cout<< "String concatenation using + operator\n";
	std::string a("45");
    std::string b("11");
    std::cout << a + b << "\n"; // a and b will be appended, not added
    a += " volts";
    std::cout << a<< '\n';
	return 0;
}
