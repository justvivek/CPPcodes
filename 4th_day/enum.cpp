enum Color
{
    COLOR_BLACK, // assigned 0
    COLOR_RED, // assigned 1
    COLOR_BLUE, // assigned 2
    COLOR_GREEN, // assigned 3
    COLOR_WHITE, // assigned 4
    COLOR_CYAN, // assigned 5
    COLOR_YELLOW, // assigned 6
    COLOR_MAGENTA // assigned 7
};
 
Color paint(COLOR_WHITE);
std::cout << paint;

Color color;
std::cin >> color; // will cause compiler error
// One workaround is to read in an integer, and use a static_cast 
// to force the compiler to put an integer value into an enumerated type:
int inputColor;
std::cin >> inputColor;
 
Color color = static_cast<Color>(inputColor);
/*
 * Note in this case, ANIMAL_HORSE and ANIMAL_GIRAFFE have been given the same value.
 * When this happens, the enumerations become non-distinct -- essentially, ANIMAL_HORSE and ANIMAL_GIRAFFE are interchangeable.
 * Although C++ allows it, assigning the same value to two enumerators in the same enumeration should generally be avoided.
 * Best practice: Don’t assign specific values to your enumerators.
 * Rule: Don’t assign the same value to two enumerators in the same enumeration unless there’s a very good reason.
*/
// define a new enum named Animal
enum Animal
{
    ANIMAL_CAT = -3,
    ANIMAL_DOG, // assigned -2
    ANIMAL_PIG, // assigned -1
    ANIMAL_HORSE = 5,
    ANIMAL_GIRAFFE = 5, // shares same value as ANIMAL_HORSE
    ANIMAL_CHICKEN // assigned 6
};
Animal animal = 5; // will cause compiler error

//However, we can force it to do so via a static_cast:

Color color = static_cast<Color>(5); // ugly
