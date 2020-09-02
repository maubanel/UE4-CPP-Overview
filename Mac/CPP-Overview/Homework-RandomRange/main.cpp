/*********************************************************************************************************
       
        main.cpp
        Homework-RandomRange

        Created by Marc Aubanel on 9/1/20.
        Copyright © 2020 Marc Aubanel. All rights reserved.

        Write a program called RandomRange that generates a random number of type double
        between -1000.0 and 1000.0. In a loop, print 100 times a new random number and indicate if it is a
        positive or negative number. Think of all edge cases.


*************************************************************************************************************/


#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;

int main() {

    srand (time(NULL));
    for (int I {0}; I < 100; I++)
    {
        double RanNumber = static_cast <double> ((rand() / static_cast<double>(RAND_MAX)) * 2000) - 1000;
        cout << I + 1. <<  ". Random number is: " << RanNumber;
        if (RanNumber < 0) cout << " and number is negative";
        else if (RanNumber == 0) cout << " and number is neither negative or positive";
        else cout << " and the number is positive";
        cout << '\n';
    }
    
    return 0;
}
