/***********************************************************************

        Type Safety

************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    //Stores a temperature and adds a value to it
    double Temperature{ 0 }; // Didn't initialize the variable
    double TotalTeamp{ Temperature + 20.5 }; // Assigning a new value to variable Total Teamp

    // Outputs the temperature
    cout << "The termperature is now: " << TotalTeamp << '\n';

    // Safe Conversions

    // Determines if milk is spoiled or not
    bool bIsGood{ true };

    // Stores middle initial
    char MiddleInit{ 'A' };

    // Typesafe, yet sort of strange
    int WeirdAdd{ bIsGood + MiddleInit };

    // Outputs weird addition
    cout << "Weird addition: " << WeirdAdd << '\n';

     // Store an integer of no import
    int AValue{ 900 }; // Still falls in single byte range

    // Store a char of no import
    char A = AValue; // Narrowing conversion of 4 bytes to 1 byte

    // Output the value of A
    cout << "\nThe value of A is: " << A << '\n';

    return 0;
}
