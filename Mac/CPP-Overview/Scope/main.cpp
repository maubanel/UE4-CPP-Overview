/***********************************************************************

        Scope

************************************************************************/

#include <iostream>

using std::cout;

int main()
{
    // Number holding int
    int I{ 20 };
    cout << "int I inside main() is: " << I << '\n';

    for (int I{ 0 }; I < 5; ++I)
    {
        cout << "Int I inside loop is: " << I << '\n';
    }

    {
        cout << "int I inside main() after for loop is: " << I << '\n';
    }

    // Number holding int
    {
        int J{ 20 };
    }

    //cout << "int J in main() after {} is: " << J << '\n';

    return 0;
}
