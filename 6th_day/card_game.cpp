#include <iostream>
#include <cstring>
#include <typeinfo>
#include <cstddef> // for std::nullptr_t
#include <vector>
#include <array>
#include <algorithm>
#include <ctime>
using namespace std;
#define MAX_SUITS 4
#define MAX_RANK 13

enum Card_Ranks{
	RANK_2,
	RANK_3,
	RANK_4,
	RANK_5,
	RANK_6,
	RANK_7,
	RANK_8,
	RANK_9,
	RANK_10,
	RANK_JACK,
	RANK_QUEEN,
	RANK_KING,
	RANK_ACE
};

enum Suits{
	CLUBS,
	DIAMOND,
	HEART,
	SPADES
};

struct Card{
	Card_Ranks rank;
	Suits suit;
};

int randomNoGen(int min, int max){
	static const double fraction = 1.0/ (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max-min+1) + min);
}

void printCard(const Card &card){	
	switch(card.rank){
		case RANK_2:
			cout<<'2';
			break;
		case RANK_3:
			cout<<'3';
			break;
		case RANK_4:
			cout<<'4';
			break;
		case RANK_5:
			cout<<'5';
			break;
		case RANK_6:
			cout<<'6';
			break;
		case RANK_7:
			cout<<'7';	
			break;
		case RANK_8:
			cout<<'8';
			break;
		case RANK_9:
			cout<<'9';
			break;
		case RANK_10:
			cout<<'T';
			break;
		case RANK_JACK:
			cout<<'J';
			break;
		case RANK_QUEEN:
			cout<<'Q';
			break;
		case RANK_KING:
			cout<<'K';
			break;
		case RANK_ACE:
			cout<<'A';
	}
	switch(card.suit){
		case CLUBS:
			cout<<'C';
			break;
		case DIAMOND:
			cout<<'D';
			break;
		case HEART:
			cout<<'H';
			break;
		case SPADES:
			cout<<'S';
	}
}

void printDeck(const array<Card, 52> &deck){
	for(const auto &elem: deck){
		printCard(elem);
		cout<< ' ';
	}
	cout<<'\n';
}

void swapCard(Card &card1, Card &card2){
	swap(card1, card2);
}

void shuffleDeck(array<Card, 52> &deck){
	for(int n=0; n< MAX_RANK; ++n){
		int rno= randomNoGen(0,52);
		swapCard(deck[n], deck[rno]);
	}
}

int getCardValue(Card &card){
	switch (card.rank){
		case RANK_2:
			return 2;
		case RANK_3:
			return 3;
		case RANK_4:
			return 4;
		case RANK_5:
			return 5;
		case RANK_6:
			return 6;
		case RANK_7:
			return 7;
		case RANK_8:
			return 8;
		case RANK_9:
			return 9;
		case RANK_10:
		case RANK_JACK:
		case RANK_QUEEN:
		case RANK_KING:
			return 10;
		case RANK_ACE:
			return 11;
	}
}

bool playBlackJack(array<Card, 52>  &card){
	Card *cardptr= &card[0];
	int pl=0, dl=0;
	bool pstand=false, phit=true, dstand=false, dhit=true;
	dl += getCardValue(*cardptr++);
	pl += getCardValue(*cardptr++);
   do{
	while(pstand != true && phit != false){
		pl += getCardValue(*cardptr++);
		cout<<"Value of pl: "<<pl<<endl;
		if(pl<21);
		else if(pl==21) pstand=true;
		else { return false;}  
	}
	while(dstand != true && dhit != false){
		dl += getCardValue(*cardptr++);
		cout<<"Value of dl: "<<dl<<endl;
		if(dl >= 17){
			dstand=true;
			if(dl>21) 
				return true;
		}
	}
   }while(pstand != true || dstand !=true);
	if(pl > dl) return true;
	else return false;
}

/*
int getCardValue(Card *cardptr){
	return cardptr->rank;
}
*/

int main(){
	srand(static_cast<unsigned int>(time(0)));
	array<Card, 52> deck;
	int card=0;
	for(int s=0;s < MAX_SUITS; ++s){
		for(int r=0; r< MAX_RANK; ++r){
			deck[card].suit= static_cast<Suits>(s);
			deck[card].rank	= static_cast<Card_Ranks>(r);
			++card;
		}
	}
/*
	cout<<"***********Before Shuffle**********8\n";
	printDeck(deck);	
//	swapCard(deck[1],deck[51]);
	shuffleDeck(deck);
	cout<<"***********After Shuffle**********8\n";
	printDeck(deck);	
*/
	shuffleDeck(deck);
	if(playBlackJack(deck)) cout<<"Player wins the game!!";
	else cout<<"Player lost the game!!";
	return 0;
}	
