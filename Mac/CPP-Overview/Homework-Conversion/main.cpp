/*********************************************************************************************************
       
        main.cpp
        Homework-Conversion

        Created by Marc Aubanel on 9/1/20.
        Copyright © 2020 Marc Aubanel. All rights reserved.

        Write a program project/target called Conversion that converts from Celcius to Farenheit
        30C, -300C, 1000C and from Farenheit to Celcius -100F, -500F, 50F. It should print for
        example "0 degrees celcius is 32 degrees farenheit". Make sure there are no bugs and
        your values are accurate. Check my question to make sure that what I am asking for is
        correct. Check the bounds of the question.


*************************************************************************************************************/


#include <iostream>

using std::cout;

int main() {
    
    // (°C × 9/5) + 32 = °F
    // Zero kelvins (−273.15 °C) is defined as absolute zero.)
    // 1,420,000,000,000,000,000,000,000,000,000,000 degrees Celsius hottest possible temp according to physics
    float HottestC = 1.42E+33;
    float ColdestC = -273.15;
    float HottestF = (1.42E+33 * 9/5) + 32;
    float ColdestF = (-273.15 * 9/5) + 32;
    
    cout << ColdestF << '\n';
    
    // Convert 30°C to °F
    float C1 = 30;
    float F1 = (C1 * 9/5) + 32;
    
    if (C1 > ColdestC && C1 < HottestC)
    {
        cout << C1 << " degrees celcius is " << F1 << " farenheit\n";
    }
    else cout << C1 << " temparature is out of range of all known temperatures in physics";
    
    // Convert -300°C to °F
    float C2 = -300;
    float F2 = (C2 * 9/5) + 32;
    if (C2 > ColdestC && C2 < HottestC)
    {
        cout << C2 << " degrees celcius is " << F2 << " farenheit\n";
    }
    else cout << C2 << " temparature is out of range of all known temperatures in physics\n";
    
   // Convert 1000°C to °F
   float C3 = 1000;
   float F3 = (C3 * 9/5) + 32;
   if (C3 > ColdestC && C3 < HottestC)
   {
       cout << C3 << " degrees celcius is " << F3 << " farenheit\n";
   }
   else cout << C2 << " temparature is out of range of all known temperatures in physics\n";
    
    // (°F − 32) × 5/9 = °C
    
    // Convert -100°F to °C
      float F4 = -100;
      float C4 = (F4 - 32) * 5/9;
      if (C4 > ColdestC && C4 < HottestC)
      {
          cout << F4 << " degrees farenheit is " << C4 << " celcius\n";
      }
      else cout << F4 << " temparature is out of range of all known temperatures in physics\n";
    

    // Convert -500F°F to °C
    float F5 = -500;
    float C5 = (F5 - 32) * 5/9;
    if (C5 > ColdestC && C5 < HottestC)
    {
        cout << F5 << " degrees farenheit is " << C5 << " celcius\n";
    }
    else cout << F5 << " temparature is out of range of all known temperatures in physics\n";
    
    // Convert 50F°F to °C
    float F6 = 50;
    float C6 = (F6 - 32) * 5/9;
    if (C6 > ColdestC && C6 < HottestC)
    {
        cout << F6 << " degrees farenheit is " << C6 << " celcius\n";
    }
    else cout << F6 << " temparature is out of range of all known temperatures in physics\n";
    
    
    
    return 0;
}
