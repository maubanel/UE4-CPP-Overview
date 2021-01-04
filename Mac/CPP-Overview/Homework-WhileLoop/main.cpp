/*********************************************************************************************************
       
        main.cpp
        Homework-WhileLoop

        Created by Marc Aubanel on 9/1/20.
        Copyright © 2020 Marc Aubanel. All rights reserved.

        Write a program called WhileLoop that counts from -50 to 50 in increments of .25f
        and 1.0f on alternating loops (first time through add .25, second time through
        add 1, third time through add .5, fourth time through add 1 etc...). Print the output
        to a cout << output stream.


*************************************************************************************************************/


#include <iostream>

using std::cout;

int main() {
    float I {-50.0f};
    bool bCycle = false;
    int Count = 0;
    
    while (I <= 50.0f)
    {
        cout << I << '\n';
        float N = bCycle ? 1.0f : 0.25f;
        I += N;
        bCycle = !bCycle;
        Count++;
    }
    
    cout << "\n It took: " << Count << " times to get from -50 to 50";
}
