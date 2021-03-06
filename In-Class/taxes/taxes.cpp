// taxes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int column = 2;
const float TAX_RATE1 = 0.1;
const float TAX_RATE2 = 0.25;
const float TAX_LIMIT1 = 32000;
const float TAX_LIMIT2 = 64000;
const float TAX_LIMIT1a = 3200;
const float TAX_LIMIT2b = 6400;
string status1;
string retry;
int income1;
float total1;
bool case1 = false;
bool quit = false;


int main()
{
	while (!quit)
	{
		cout << "Please enter your Marital Status [s/m]: ";
		cin >> status1;
		cout << "Please enter your Total Income: ";
		cin >> income1;

		if (status1 == "s")
		{
			if (income1 <= TAX_LIMIT1)
			{
				total1 = income1 * TAX_RATE1;
				case1 = true;
			}
			else if (income1 > TAX_LIMIT1)
			{
				total1 = TAX_LIMIT1a + TAX_RATE2 * (income1 - TAX_LIMIT1);
				case1 = true;
			}
		}
		else if (status1 == "m")
		{
			if (income1 > 0 && income1 <= TAX_LIMIT2)
			{
				total1 = income1 * TAX_RATE1;
				case1 = true;
			}

			else if (income1 > TAX_LIMIT2)
			{
				total1 = TAX_LIMIT2b + TAX_RATE2 * (income1 - TAX_LIMIT2);
				case1 = true;
			}
		}

		cout << "Your Tax Estimate is $" << total1 << endl;
		cout << "Would you like to continue? [y/n] ";
		cin >> retry;

		cout << endl << endl;

		if (retry == "y")
		{
			quit = false;
		}
		else
		{
			cout << "Goodbye!" << endl;
			quit = true;
		}
		
	}


	system("pause");
    return 0;
}

