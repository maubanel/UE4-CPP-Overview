/***********************************************************************

		Demonstrate Float Type

************************************************************************/

#include <iostream>
#include <limits>

using std::cout;

int main()
{
	// Set precision of cout for doubles
	cout.precision(9);

	// Chance of rain on a given day with a float ranging from 0 to 100
	double PercentChanceOfRain = 12.3456789f;

	// Output chance of rain today
	cout << "There is a " << PercentChanceOfRain << "% chance of rain today.\n\n";

	cout << "A float has a precision of " << std::numeric_limits<float>::max_digits10 << " digits\n\n";

	cout << "Size of float: " << sizeof(float) << " bytes.\n\n";

	// Float errors
	float F = 9.0f / 2;
	cout << "9/2 is: " << F << "\n\n";

	return 0;
}