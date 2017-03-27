#include <iostream>

class Something
{
private:
    static int s_idGenerator;
    int m_id;
 
public:
	static int s_temp;
    Something() { m_id = s_idGenerator++;} // grab the next value from the id generator
 
    int getID() const { return m_id; }
};

//Static members are not associated with class objects 

// Note that we're defining and initializing s_idGenerator even though it is declared as private above.
// This is okay since the definition isn't subject to access controls.
int Something::s_idGenerator = 1; // start our ID generator with value 1
int Something::s_temp=1;//we have to declare it to use 
int main()
{
	Something::s_temp=4;
    Something first;
    Something second;
    Something third;
 
	std::cout<<Something::s_temp<<'\n';
    std::cout << first.getID() <<'\n';
    std::cout << second.getID() <<'\n';
    std::cout << third.getID() <<'\n';
    return 0;
}
