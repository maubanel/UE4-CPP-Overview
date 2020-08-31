/********************************************************************

        Demonstrate Advanced Operators

*********************************************************************/

#include <iostream>

using std::cout;

int main()
{
    // NumberOfEnemies stores the total number of all enemy types in a lvel
    int NumberOfEnemies = 11;

    // Output the number of current enemies in level
    cout << "There are " << NumberOfEnemies << " enemies in thee current level.\n";

    // Add enemy
    NumberOfEnemies = NumberOfEnemies + 1;

    // Output the number of current enemies in level
    cout << "There are now " << NumberOfEnemies << " enemies in the current level.\n";

    // Add enemy
    NumberOfEnemies += 1;

    // Output the number of current enemies in level
    cout << "There are now " << NumberOfEnemies << " enemies in the current level.\n";

    // Add enemy
    //++NumberOfEnemies;

    // Output the number of current enemies in level
    cout << "There are now " << ++NumberOfEnemies << " enemies in the current level.\n\n";

    // Output the remainder of 128/8
    cout << "The remainder of 128/8 is: " << 128 % 8 << "\n";

    // Output the remainder of 132/8
    cout << "The remainder of 132/8 is: " << 132 % 8 << "\n\n";

    return 0;
}
