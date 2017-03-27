#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

struct student{
	string name;
	int grade;
};

void getdata(student *stud, int num){
	for(int i=0;i < num;++i){
		cout<<"Enter the name: ";
		getline(cin, stud[i].name);
		do{cout<< "Enter the grades: ";
		cin >> stud[i].grade; 	cin.ignore(32767, '\n');} while(stud[i].grade<0 || stud[i].grade>100);
	}
}

void printdata(student *stud, int num){
	cout<<'\n';
	for(int i=0;i < num;++i){
		cout<< stud[i].name<<" got a grade of "<< stud[i].grade<< endl;
	}
}

void ssort(student *stud, int num){
		for(int i=0; i<num; ++i){
		int index=i;
		for(int j=i+1; j<num; ++j){
			if(stud[index].grade < stud[j].grade)
				index= j;
		}
		std::swap(stud[i], stud[index]);
	}
}

int main(){
	int num;
	cout<<"how many students you want to enter?? ";
	cin >> num;	
	cin.ignore(32767, '\n');
	student *stud = new student[num];
//	vector<student> stud;
	getdata(stud,num);
//	printdata(stud,num);
	ssort(stud,num);
	printdata(stud,num);
	delete[] stud; 
	return 0;
}
