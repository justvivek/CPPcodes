//Array and Enum classes 

//Enum classes don’t have an implicit conversion to integer

enum class StudentNames
{
    KENNY, // 0
    KYLE, // 1
    STAN, // 2
    BUTTERS, // 3
    CARTMAN, // 4
    WENDY, // 5
    MAX_STUDENTS // 6
};

/*
 * We’ll get a compiler error. This can be addressed by using a static_cast to convert the enumerator to an integer:
int main()
{
    int testScores[StudentNames::MAX_STUDENTS]; // allocate 6 integers
    testScores[StudentNames::STAN] = 76;
}
*/

int main()
{
    int testScores[static_cast<integer>(StudentNames::MAX_STUDENTS)]; // allocate 6 integers
    testScores[static_cast<integer>(StudentNames::STAN)] = 76;
}

/*
 * doing what we have done above is somewhat of a pain in A&&, so it might be better to use a standard enum inside of a namespace:
 * namespace StudentNames
{
    enum StudentNames
    {
        KENNY, // 0
        KYLE, // 1
        STAN, // 2
        BUTTERS, // 3
        CARTMAN, // 4
        WENDY, // 5
        MAX_STUDENTS // 6
    };
}
 
int main()
{
    int testScores[StudentNames::MAX_STUDENTS]; // allocate 6 integers
    testScores[StudentNames::STAN] = 76;
}
*/
