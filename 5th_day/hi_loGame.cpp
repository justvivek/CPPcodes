#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;


int getRandomNumber(int max, int min){
//	srand(static_cast<unsigned int>(time(0)));
	static const double fraction= 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max-min+1) + min);
}
	
int main(){
	srand(static_cast<unsigned int>(time(0)));
	rand();
	char ch;
	do{
		int randnum= getRandomNumber(100,1);
		cout<<"Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is.\n";
		int guess;
		int count=1;
		while(count<8){
			cout<<"Guess #"<<count<<": ";
			cin>>guess;
			if(randnum== guess) {cout<<"Correct! You win!\n"; break;}
			else if(randnum > guess){cout<<"Your guess is too low.\n";}
			else {cout<<"Your guess is too high.\n";}
			++count;
		}
		if(count==8){
			cout<<"Sorry, you lose.  The correct number was "<<randnum<< endl;
		}
		while(1){
		cout<<"Would you like to play again (y/n)?";
		cin>>ch;
		std::cin.ignore(32767,'\n');
		if(ch == 'y' || ch == 'n' ) break;
		}
	}while(ch != 'n');
}
