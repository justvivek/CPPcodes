#include <iostream>
#include <vector>

class Myclass{
	private:
		static std::vector<char> s_mychars;
		
	public:
		class _init{// we're defining a nested class named _init
			public:
				_init(){// the _init constructor will initialize our static variable
					s_mychars.push_back('a');
					s_mychars.push_back('e');
					s_mychars.push_back('i');
					s_mychars.push_back('o');
					s_mychars.push_back('u');
				}
			};
	private:
		static _init s_intializer;// we'll use this static object to ensure the _init constructor is called
};

std::vector<char> Myclass::s_mychars;// define our static member variable
Myclass::_init Myclass::s_intializer;// define our static initializer, which will call the _init constructor, which will initialize s_mychars

/*When static member s_initializer is defined, the _init() default constructor will be called 
 * (because s_initializer is of type _init). We can use this constructor to initialize any static member variables.
 * The nice thing about this solution is that all of the initialization code is kept hidden inside the
 * original class with the static member.
*/
