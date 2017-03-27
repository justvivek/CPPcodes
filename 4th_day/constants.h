/*
 *constants.h:
 * #ifndef CONSTANTS_H
 * #define CONSTANTS_H
 * // define your own namespace to hold constants
 * namespace Constants
 * {
 * const double pi(3.14159);
 * const double avogadro(6.0221413e23);
 * const double my_gravity(9.2); 
 * }
 * #endif
 * 
 * While this is simple (and fine for smaller programs), every time constants.h gets 
 * #included into a different code file, each of these variables is copied into the including code file. 
 * Therefore, if constants.h gets included into 20 different code files, each of these variables is duplicated 20 times.
 * Header guards won’t stop this from happening, as they only prevent a header from being included more than once
 * into a single including file, not from being included one time into multiple different code files.
 * This duplication of variables isn’t much of a problem here,
 * but if this list of constants were large, and/or included memory-intensive variables, it could lead to code bloat. 
*/

#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace constants{
	//forward declaration only
	extern const double pi;
	extern const double avogadro;
	extern const double my_gravity; 
	extern const int g_x;
	extern const int g_y;
	extern const int g_value;
}
#endif
