#include<iostream>
#include<cstring>
#include<typeinfo>
#include <cstddef> // for std::nullptr_t
using namespace std;

void getinput(string *name, int size){
	int i=0;
	while(i<size){
		cout<<"Enter name #"<< i+1 <<": ";
		cin>> name[i++];
	}
}

void printname(string *name, int size){
	int i=0;
	while(i<size){
		cout<<"Name #"<< i+1 <<": ";
		cout<< name[i++]<<'\n';
	}
}

void sortstring(string *name, int size){
	for(int i=0; i<size; ++i){
		int index=i;
		for(int j=i+1; j<size; ++j){
			if(name[index].compare(name[j])>0)
				index=j;
		}
		swap(name[index], name[i]);
	}
}

int main(){
	int size;
	cout<<"How many names would you like to enter? ";
	cin>> size;
	string *name= new string[size];
	int i=0;
	getinput(name,size);
	sortstring(name,size);
	printname(name,size);
/*	
	while(i<size){
		cout<<"Enter name #"<< i+1 <<": ";
		cin>> name[i];
		cout<<endl;
		++i;
	}
*/	
	return 0;
}
	
