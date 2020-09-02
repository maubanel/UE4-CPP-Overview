/*********************************************************************************************************
        
        main.cpp
        Homework-Number
 
        Created by Marc Aubanel on 9/1/20.
        Copyright © 2020 Marc Aubanel. All rights reserved.

        Add a project/target called Number and write a program that uses a variable to store
        252.67678 precisely (not a string or char[]). Use cout to output (no rounding errors or
        extra digits). Use the most memory efficient type of variable for this task.
 
 *************************************************************************************************************/

#include <iostream>

using std::cout;

int main() {
    cout.precision(10);
    // Stores a floating point number with 5 fractional numbers
    double Num = 252.67678;
    std::cout << "Num is: " << Num << '\n';
    return 0;
}
