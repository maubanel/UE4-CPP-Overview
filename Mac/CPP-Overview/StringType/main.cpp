/***********************************************************************

        Demonstrate String Type

************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    // Stores entire string for middle name
    string MiddleName = "Alix Andreus";

    // Output of my miiddle name
    cout << "My middle name is: " << MiddleName << '\n';

    // Size of this specific string
    cout << "Size of char: " << MiddleName.size() << " byte(s)\n";

    // Stores both first, middle and last name in a single string
    string FirstName = "Marc";
    string LastName = "Aubanel";
    string FullName = FirstName + " " + MiddleName + " " + LastName;

    // Output full name
    cout << "\nMy full name is: " << FullName << '\n';
    
    // Size of full name string
    cout << "Size of full name is: " << FullName.size() << " byte(s)\n\n";

    return 0;
}
