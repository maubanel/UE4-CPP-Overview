/***********************************************************************

		Demonstrate Order of Operatoins

************************************************************************/

#include <iostream>

using std::cout;

int main()
{
	// variable to hold any integer
	int I{ 12 };
	int W{ 13 };

	// Output two formulas
	cout << "I + W * 2 = " << I + W * 2 << '\n';

	cout << "(I + W) * 2 = " << (I + W) * 2 << '\n';

	return 0;

}