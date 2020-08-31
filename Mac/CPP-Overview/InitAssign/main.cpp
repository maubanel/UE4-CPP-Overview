/***********************************************************************

        c++ initializing and assignment

************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    // Stores first name of developer
    string FirstName = "Marc"; // Initializing variable FirstName
    FirstName = "Phil"; // Assigning a new value to variable FirstName

    // Output first name
    cout << "My first name is: " << FirstName << '\n';

    // Initialize the name with modern syntax
    string LastName{ "Aubanel" };

    // Output last name
    cout << "My last name is: " << LastName << '\n';

    return 0;
}
