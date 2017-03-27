#include <iostream>
#include <functional>
using namespace std;

int main(int argc, char *argv[]){
	
	cout<<"there are "<< argc << " arguments:\n";
	for(int i=0; i<argc; ++i)
		cout<<i<<" "<<argv[i]<<'\n';
	return 0;
}
	
