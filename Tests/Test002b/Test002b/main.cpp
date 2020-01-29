/*
Write a program that reads a set of floating-point values.
Ask the user to enter the values, then print
• the average of the values.
• the smallest of the values.
• the largest of the values.
• the range, that is the difference between the smallest and largest.

(6, 7, 8, 9, 10, 11)
*/

// #include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{    float input;
    int i = 0;
    float avg = 0;
    float high = 0;
    float low = 100;
    float range = 0;
    float total = 0;

    cout << "Please enter six values, spaced out (i.e. 1 2 3 4 5 6)" << endl;
    
    while (i < 6)
    {
        cin >> input;
        total = total + input;

        if (input > high)
        {
            high = input;
        }

        if (input < low)
        {
            low = input;
        }

        i++;
    }

    avg = total / 6;
    range = high - low;


    cout << "The average is: " << avg << endl;
    cout << "The highest integer is: " << high << endl;
    cout << "The lowest integer is: " << low << endl;
    cout << "The range is: " << range << endl;
    

    //system("pause");
    return 0;
}

