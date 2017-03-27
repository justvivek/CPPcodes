#include<iostream>
//Note that this “trick” only works if you do not change the enumerator values manually!
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
 
int main()
{
    int testScores[MAX_STUDENTS]; // allocate 6 integers
    testScores[STAN] = 76; 
 
    return 0;
}
