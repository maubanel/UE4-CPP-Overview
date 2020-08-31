/***********************************************************************

        While Loops

************************************************************************/

#include <iostream>

using std::cout;

int main()
{
    // Countdown timer
    int Countdown = 10;

    while (Countdown >= 0)
    {
        // Print coutdown
        cout << Countdown << '\n';
        Countdown--;
    }

    // Add another space at end of loop
    cout << '\n';

    return 0;
}
