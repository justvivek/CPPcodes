//Binary to decimal

#include<iostream>

int main(){
	using namespace std;
	int x,i=0;
	cout<<"Enter the Decimal number: ";
	cin>> x;
	int arr[20];
	while(x>0){
		arr[i++]=x%2;
		x /=2;
	}
	--i;
	while(i>=0){
		cout<<" "<<arr[i--];
	}
	cout<< endl;	
}
