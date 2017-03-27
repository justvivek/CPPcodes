#include<iostream>

int main(){
	char ch(110);
	//here it intrinsically typecasted the ch to integer; 
	std::cout<< "ASCII value of ch-10 : " << ch-10<< std::endl;
	std::cout<< "Character which ch-10 is holding is: " << static_cast<char>(ch-10)<< std::endl;
	std::cout<< "Character which ch is holding is: " << ch<< std::endl;	
	//Character which ch is holding is explicitily typecasted to integer:
	std::cout<< " ASCII value of ch : " << static_cast<int>(ch)<< std::endl;
	
	std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)
 
    char ch1;
    std::cin >> ch1; // ch = 'a', "bcd" is left queued.
    std::cout << ch1 << " has ASCII code " << static_cast<int>(ch1) << std::endl;
 
    // Note: The following cin doesn't ask the user for input, it grabs queued input!
    std::cin >> ch1; // ch = 'b', "cd" is left queued.
    std::cout << ch1 << " has ASCII code " << static_cast<int>(ch1) << std::endl;
	
	std::cout << "\"This is quoted text\"\n";
    std::cout << "This string contains a single backslash \\" << std::endl;
    std::cout << "6F in hex is char \'\x6F\'" << std::endl;
	return 0;
}
