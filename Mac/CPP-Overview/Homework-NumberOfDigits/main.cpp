/*********************************************************************************************************
       
        main.cpp
        Homework-NumberOfDigits

        Created by Marc Aubanel on 9/1/20.
        Copyright © 2020 Marc Aubanel. All rights reserved.

        Write a program called NumberOfDigits that creates 10 random integers between
        0 and RAND_MAX, prints the result and states how many digits the integer contains.


*************************************************************************************************************/


#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;

int main() {
    
    srand (time(NULL));
    
    for (int I{0}; I < 1000; I++)
    {
        int RanNumber = rand();
        int NumOfDigits = 0;
        
        int NewRand = RanNumber;
        
        if (NewRand < 1 && NewRand >= 0)
        {
            NumOfDigits = 1;
        }
        else
        {
            while (NewRand >= 1)
            {
                NewRand /= 10;
                NumOfDigits++;
                
            }
        }
        cout << I + 1 << ". Random number is: " << RanNumber << " with " << NumOfDigits << " digits.\n";
    }
    
    return 0;
}
