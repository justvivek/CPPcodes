 #include<iostream>
 
int getinput(){
	int value;
   while(1){
	std::cout<< "Enter the number: ";
	std::cin>> value;
        // Check for failed extraction or overflowed?
        if (std::cin.fail()) // has a previous extraction failed or overflowed??
        {
            // yep, so let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            std::cin.ignore(32767,'\n'); // and remove the bad input
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
	else // nope, so return our good x
		std::cin.ignore(32767,'\n'); // remove any extraneous input
		return value;
   }
}

char getoperator(){
	char op;
	while(1){
		std::cout<<"Enter the operation (+, *, /, -) ";
		std::cin>>op;
		// Chars can accept any single input character, so no need to check for an invalid extraction here
		std::cin.ignore(32767, '\n');// remove any extraneous input
		if(op == '+' || op == '/' || op == '*' || op == '-')
			return op;
		else
			std::cout<<"oops!! you have entered the wrong operation, please enter again\n";
	}
}

int calculateResult(int inp1, char op, int inp2){
		switch(op){
		case '+':
				return inp1 + inp2;
		case '*':
				return inp1 * inp2;
		case '/':
				return inp1 / inp2;
		case '-':
				return inp1 - inp2;
		default:
				std::cout<<"Invalid operation... Exiting";
	}
	return -1;
}

void printresult(int result){
		std::cout<< "Your result is: "<< result << std::endl; 
}

int main(){
	int x= getinput();
	char op= getoperator();
	int y= getinput();
	int result= calculateResult(x,op,y);
	printresult(result);
}
