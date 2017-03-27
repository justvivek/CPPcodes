#include <iostream>
 
void passValue(int value) // value is a copy of the argument
{
    value = 99; // so changing it here won't change the value of the argument
}
 
void passArray(int prime[5]) // prime is the actual array
{
    prime[0] = 11; // so changing it here will change the original argument!
    prime[1] = 7;
    prime[2] = 5;
    prime[3] = 3;
    prime[4] = 2;
}

int getsize(int prime[]){
	return sizeof(prime);//return the size of a pointer, not the size of the array!
}

int getNoOfElements(int prime[]){
	return (sizeof(prime)/sizeof(prime[0]));//
}
 
int main()
{
    int value = 1;
    std::cout << "before passValue: " << value << "\n";
    passValue(value);
    std::cout << "after passValue: " << value << "\n";
 
    int prime[5] = { 2, 3, 5, 7, 11 };
    //this will give the right result we are passing the pointer to the function not the arrays.
    std::cout<<"No of the elements in the array is: "<< getNoOfElements(prime)<< " and size of the array is: "<< getsize(prime)<<'\n';
    //this will correctly print the no of elements in the array and size of the array.
    std::cout<<"No of the elements in the array is: "<< sizeof(prime)/sizeof(prime[0])<< " and size of the array is: "<< sizeof(prime)<<'\n';
    std::cout << "before passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << "\n";
    passArray(prime);
    std::cout << "after passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << "\n";
 
    return 0;
}
