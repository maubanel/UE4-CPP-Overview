/***********************************************************************

		For Loops

************************************************************************/

#include <iostream>

using std::cout;

int main()
{
	// Countdown timer
	int Countdown = 10;

	for (int Countdown = 10; Countdown >= 0; --Countdown)
	{
		// Print countdown
		cout << Countdown << '\n';
	}

	// Add another space at end of loop
	cout << '\n';

	return 0;
}
