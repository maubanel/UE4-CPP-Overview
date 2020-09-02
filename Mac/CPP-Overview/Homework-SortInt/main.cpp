/*********************************************************************************************************
       
        main.cpp
        Homework-SortInt

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
    
int RanNumber = rand();
        
int FirstDigit = RanNumber %    10;
int SecondDigit = RanNumber /   10 %  10;
int ThirdDigit = RanNumber /    100 %  10;
int FourthDigit = RanNumber /   1000 % 10;
int FifthDigit = RanNumber /    10000 % 10;
int SixthDigit = RanNumber /    100000 % 10;
int SeventhDigit = RanNumber /  1000000 % 10;
int EighthDigit = RanNumber /   10000000 % 10;
int NinethDigit = RanNumber /   100000000 % 10;
int TenthDigit = RanNumber /    1000000000 % 10;
    
int Smallest1 = FirstDigit;
int Smallest2 = SecondDigit;
int Smallest3 = ThirdDigit;
int Smallest4 = FourthDigit;
int Smallest5 = FifthDigit;
int Smallest6 = SixthDigit;
int Smallest7 = SeventhDigit;
int Smallest8 = EighthDigit;
int Smallest9 = NinethDigit;
int Smallest10 = TenthDigit;

for (int I { 0 }; I < 10; I++)
{
    if (Smallest1 > Smallest2)
    {
        int temp = Smallest2;
        Smallest2 = Smallest1;
        Smallest1 = temp;
    }
    if (Smallest2 > Smallest3)
    {
        int temp = Smallest3;
        Smallest3 = Smallest2;
        Smallest2 = temp;
    }
    if (Smallest3 > Smallest4)
    {
        int temp = Smallest4;
        Smallest4 = Smallest3;
        Smallest3 = temp;
    }
    if (Smallest4 > Smallest5)
    {
        int temp = Smallest5;
        Smallest5 = Smallest4;
        Smallest4 = temp;
    }
    if (Smallest5 > Smallest6)
    {
        int temp = Smallest6;
        Smallest6 = Smallest5;
        Smallest5 = temp;
    }
    if (Smallest6 > Smallest7)
    {
        int temp = Smallest7;
        Smallest7 = Smallest6;
        Smallest6 = temp;
    }
    if (Smallest7 > Smallest8)
    {
        int temp = Smallest8;
        Smallest8 = Smallest7;
        Smallest7 = temp;
    }
    if (Smallest8 > Smallest9)
    {
        int temp = Smallest9;
        Smallest9 = Smallest8;
        Smallest8 = temp;
    }
    if (Smallest9 > Smallest10)
    {
        int temp = Smallest10;
        Smallest10 = Smallest9;
        Smallest9 = temp;
    }
}


cout << "Number is: " << RanNumber << " - sorted in order is: " << Smallest1 << Smallest2 << Smallest3 << Smallest4 << Smallest5 << Smallest6 << Smallest7 << Smallest8 << Smallest9 << Smallest10 << '\n';
return 0;
}
