/*
 * Use of non-const global variables should generally be avoided altogether!
 * symbolic constants will get instantiated only once (in constants.cpp),
 * instead of once every time constants.h is #included, 
 * and the other uses will simply refer to the version in constants.cpp.
*/
namespace constants{
	//actual global variables
	extern const double pi(3.14159);
	extern const double avogadro(6.0221413e23);
	extern const double my_gravity(9.2); 
	extern const int g_x(100);
	extern const int g_y(2);
	extern const int g_value(50);
}

