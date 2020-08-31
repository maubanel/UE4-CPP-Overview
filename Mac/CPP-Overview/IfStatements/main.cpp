/***********************************************************************

        if, else if, else  Statements

************************************************************************/

#include <iostream>

using std::cout;

int main()
{
    // Conditional If Statements

    // Integer variables with any valid whole number
    int I{ 400 };
    int W{ 13 };

    // Outputs vmessage if value I is less than W
    if (I < W)
    {
        cout << I << " is less than " << W << '\n';
    }

    else if (I == W * 2)
    {
        cout << I << " is twice as large as " << W << '\n';
    }

    else if (I == W)
    {
        cout << I << " is the same as " << W << '\n';
    }

    else
    {
        cout << I << " is greater than " << W << '\n';
    }

    return 0;
}
