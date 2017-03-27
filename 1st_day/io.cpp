 #include<iostream>
 
 int getinput(){
	int value;
	std::cout<< "Enter the number: ";
	std::cin>> value;
	return value;
}

int getoperator(){
	int op;
	std::cout<<"Enter the operation (1= +, 2= *, 3= /, 4= -) ";
	std::cin>>op;
	return op;
}

int calculateResult(int inp1, int op, int inp2){
		switch(op){
		case 1:
				return inp1 + inp2;
		case 2:
				return inp1 * inp2;
		case 3:
				return inp1 / inp2;
		case 4:
				return inp1 - inp2;
		default:
				std::cout<<"Invalid operation... Exiting";
	}
	return -1;
}

void printresult(int result){
		std::cout<< "Your result is: "<< result << std::endl; 
}
