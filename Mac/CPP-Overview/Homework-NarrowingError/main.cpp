/*********************************************************************************************************
       
        main.cpp
        Homework-NarrowingError

        Created by Marc Aubanel on 9/1/20.
        Copyright © 2020 Marc Aubanel. All rights reserved.

        Look up what an unsigned integer type is online. Add a project/target called
        `NarrowingError` and write a program that assigns a `uint Positive` a value
        of `-100` using the `=` to assign the value.  Print it out.  Then do a narrowing
        conversion of integer  to -1000 to an uint data type and print it out.  You want the
        program to throw an error and not compile and run. Then change it to a positive
        number so that the program compiles and prints both values.

*************************************************************************************************************/


#include <iostream>
using std::cout;

int main() {
    uint Positive = -100;
    std::cout << Positive << '\n';
    
    uint Positive2 {100};
    std::cout << Positive2 << '\n';
    return 0;
}
