#include<iostream>
#include<cstring>
using namespace std;

/*
 * strcat() -- Appends one string to another (dangerous)
strncat() -- Appends one string to another (with buffer length check)
strcmp() -- Compare two strings (returns 0 if equal)
strncmp() -- Compare two strings up to a specific number of characters (returns 0 if equal)
strcpy()
* strncpy()
*/
int main(){
	char string[]= "palindrome";
//	string[]="Vivek"; it will get a compile time error.
	cout<<"size of string is: "<<sizeof(string)<< endl;//sizeof() function, which returns the length of the C-style string (with the null terminator).
	cout<<string<<'\n';
	for (int i=0; i<sizeof(string);++i){
		cout<< static_cast<int>(string[i])<<' ';
	}
	char str[255];
	cout<<"Enter the string\n";
	cin.getline(str,255);//cin.getline() will read up to 254 characters into name (leaving room for the null terminator!)
	int space=0;
	for(int i=0; i< strlen(str);++i){//strlen() function, which returns the length of the C-style string (without the null terminator).
		if(str[i] == ' ') ++space;
	}
	cout<<"you typed "<< space<< " spaces!\n";
	return 0;
}
