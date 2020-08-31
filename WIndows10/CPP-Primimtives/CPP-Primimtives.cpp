/***********************************************************************

Primitive Data Types

************************************************************************/

/***********************************************************************

Integer

************************************************************************/

#include <iostream>

using std::cout;

int main()
{
    // Primitive Integer Data Type
    int Year = 2019 + 1;
    cout << "Next year is: ";
    cout << Year;

    // Output 10 years ago
    Year = 2020 - 10;
    cout << "\n\n10 years ago the year was: " << Year << "\n";

    // Output half last Year
    Year = 2019 / 2;
    cout << "Half of last year is: " << Year << "\n";

    // Output twice this Year
    Year = 2020 * 2;
    cout << "Twice this year is: " << Year << "\n";

    return 0;
}