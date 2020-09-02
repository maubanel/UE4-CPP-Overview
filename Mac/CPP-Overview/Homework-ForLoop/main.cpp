/*********************************************************************************************************
       
        main.cpp
        Homework-ForLoop

        Created by Marc Aubanel on 9/1/20.
        Copyright © 2020 Marc Aubanel. All rights reserved.

        Write a program called WhileLoop that counts from -50 to 50 in increments of .5f
        and 1.0f on alternating loops (first time through add .5, second time through
        add 1, third time through add .5, fourth time through add 1 etc...). Print the output
        to a cout << output stream.


*************************************************************************************************************/


#include <iostream>

using std::cout;

int main() {
    bool bCycle = false;
    int Count = 0;
    
    for  (float I {50}; I >= -50 ; bCycle ? I -= 1.0f : I -= 0.25f)
    {
        cout << I << '\n';
        bCycle = !bCycle;
        Count++;
    }
    
    cout << "\n It took: " << Count << " times to get from -50 to 50";
}
