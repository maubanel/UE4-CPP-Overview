/***********************************************************************

		Demonstrate Char Type

************************************************************************/

#include <iostream>

using std::cout;

int main()
{
	// Stores single character (char) for middle initial
	char MiddleInitial ='A';

	// Output my miiddle initial
	cout << "My middle initial is: " << MiddleInitial <<  '\n';

	// Size of char
	cout << "Size of char: " << sizeof(char) << " byte(s)\n";

	return 0;
}