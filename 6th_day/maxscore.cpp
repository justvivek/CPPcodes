#include <iostream>
using namespace std; 
int main()
{
    int scores[] = { 84, 92, 76, 81, 56 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);
    int maxscore=0;
    int maxIndex=0;
    for(int i=0; i<numStudents; ++i){
		cout<< scores[i]<< " ";
		if(scores[i]>maxscore){
			maxscore = scores[i];
			maxIndex = i+1;
		}
	}
	cout << "\nMax score is: " << maxscore<<" and Index is: " << maxIndex<<'\n';
	return 0;
}
