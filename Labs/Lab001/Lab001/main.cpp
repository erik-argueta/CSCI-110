// Lab001.cpp : Defines the entry point for the console application.
//
/*
Program Description: Calculates time difference when given two military times
Program Author: Erik Argueta
Variable Inputs: time01, time02, time03, time04
Process Flow: Time difference is determined by subtracting the two inputed times;
 the difference is then divided in order to determine the amount of hours;
 the remainder is then determined as the amount of minutes.
Variable Outputs: The time in hours and minutes.
*/

//#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string quit;
    string name;
    int diff1;
    int diff2;
    float hrs;
    int mins;
    float hrs2;
    int mins2;
    int time01;
    int time02;
    int time03;
    int time04;
    bool resume = false;
    
    cout << "Please enter your name: ";
    cin >> name;
    cout << endl;
    cout << "Hello, " << name << "!" << endl;

    while (resume == false)
    {
        cout << "Please insert the first time in military format: ";
        cin >> time01;
        cout << "Please insert the second time in military format: ";
        cin >> time02;

        if (time01 < time02) {
            diff1 = time02 - time01;
        }
        else {
            diff1 = (2360 - time01) + time02;
        }

        hrs = diff1 / 100;
        mins = diff1 % 100;

        cout << "Time difference is " << hrs << " hours and " << mins << " minutes." << endl;
        cout << endl;
        
        cout << "Please insert the first time in military format: ";
        cin >> time03;
        cout << "Please insert the second time in military format: ";
        cin >> time04;
        
        if (time03 < time04) {
            diff2 = time04 - time03;
        }
        else {
            diff2 = (2360 - time03) + time04;
        }
        
        hrs2 = diff2 / 100;
        mins2 = diff2 % 100;

        cout << "Time difference is " << hrs2 << " hours and " << mins2 << " minutes." << endl;
        cout << endl;
        
        cout << "Would you like to continue? [y/n] ";
        cin >> quit;
        
        cout << endl;
        
        if (quit == "y")
        {
            resume = false;
        }
        else if (quit == "n")
        {
            resume = true;
            cout << "Goodbye!" << endl;
        }
            
    }

  //  system("pause");

    return 0;
}


