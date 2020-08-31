/***********************************************************************

		Demonstrate Double Type

************************************************************************/

#include <iostream>
#include <limits>

using std::cout;

int main()
{
	// Set precision of cout for doubles
	cout.precision(17);

	// Chance of rain on a given day with a double precision float ranging from 0 to 100
	double PercentChanceOfRain = 12.345678911234567;

	// Output chance of rain today
	cout << "There is a " << PercentChanceOfRain << "% chance of rain today.\n\n";

	cout << "A double has a precision of " << std::numeric_limits<double>::max_digits10 << " digits\n";

	cout << "Size of double: " << sizeof(double) << " bytes.\n";

	return 0;
}