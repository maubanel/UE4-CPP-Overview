/*********************************************************************************************************
       
        main.cpp
        Homework-Random

        Created by Marc Aubanel on 9/1/20.
        Copyright © 2020 Marc Aubanel. All rights reserved.

        Write a program project/target called Random where you randonly assign an integer
        between 0 and 10. You can use rand(), srand() and modulo operator to solve the problem.
        Try to do this without using google. Also output the random number from smallest to largest.


*************************************************************************************************************/


#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;

int main() {

    srand (time(NULL));
    
    int RanNumber = rand() % 10;
    cout << "Random number is: " << RanNumber << '\n';
    return 0;
}
