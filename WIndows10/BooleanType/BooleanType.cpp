/***********************************************************************

		Demonstrate Boolean Type

************************************************************************/

#include <iostream>

using std::cout;

int main()
{
	// bIsGood determines if milk is spoiled or not
	bool bIsGood = -10;

	// Outputs if milk is spoiled
	cout << "The milk is spoiled: " << bIsGood << '\n';

	// Size of this specific string
	cout << "Size of bool: " << sizeof(bool) << " byte(s)\n";

	return 0;
}