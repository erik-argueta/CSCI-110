/*
*/
//#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int u = 2;
int v = 3;
int w = 4;
int x = 1;
int place_holder1;
int place_holder2;
string input_a;
string input_b;
string ans;
bool repeat = false;

int digit1(string input_a)
{
	if (input_a == "u") return 2;
	if (input_a == "v") return 3;
	if (input_a == "w") return 4;
	if (input_a == "x") return 1;
	return 0;
}

int digit2(string input_b)
{
	if (input_b == "u") return 2;
	if (input_b == "v") return 3;
	if (input_b == "w") return 4;
	if (input_b == "x") return 1;
	return 0;
}


/** The Void function sorts the values */
void sort2(int digit1, int digit2)
{
	if (digit1 > digit2)
	{
		swap(digit1, digit2);

		if (input_a == "u" && input_b == "x")
		{
			cout << input_a << " = " << digit1 << endl << "v = " << v << endl;
			cout << "w = " << w << endl << input_b << " = " << digit2 << endl << endl;
			cout << "u and x swapped values because u was greater than x." << endl << endl;
		}
		if (input_a == "v" && input_b == "u")
		{
			cout << input_b << " = " << digit2 << endl << input_a << " = " << digit1 << endl;
			cout << "w = " << w << endl << "x = " << x << endl << endl;
			cout << "v and u swapped values because v was greater than u." << endl << endl;
		}
		if (input_a == "v" && input_b == "x")
		{
			cout << "u = " << u << endl << input_a << " = " << digit1 << endl;
			cout << "w = " << w << endl << input_b << " = " << digit2 << endl << endl;
			cout << "v and x swapped values because v was greater than x." << endl << endl;
		}
		if (input_a == "w" && input_b == "v")
		{
			cout << "u = " << u << endl << input_b << " = " << digit2<< endl;
			cout << input_a << " = " << digit1<< endl << "x = " << x << endl << endl;
			cout << "w and v swapped values because w was greater than v." << endl << endl;
		}
		if (input_a == "w" && input_b == "u")
		{
			cout << input_b << " = " << digit2 << endl << "v = " << v << endl;
			cout << input_a << " = " << digit1 << endl << "x = " << x << endl << endl;
			cout << "w and u swapped values because w was greater than u." << endl << endl;
		}
		if (input_a == "w" && input_b == "x")
		{
			cout << "u = " << u << endl << "v = " << v << endl;
			cout << input_a << " = " << digit1 << endl << input_b << " = " << digit2 << endl << endl;
			cout << "w and x swapped values because w was greater than x." << endl << endl;
		}

	}
	else
	{
		cout << "u = " << u << endl << "v = " << v << endl;
		cout << "w = " << w << endl << "x = " << x << endl << endl;
		cout << "Nothing has changed because " << input_a << " was less than " << input_b << "." << endl << endl;
	}
}

int main()
{
	while (!repeat)
	{
		cout << "Table" << endl << "-----" << endl;
		cout << "u = " << u << endl << "v = " << v << endl;
		cout << "w = " << w << endl << "x = " << x << endl << endl;

		//cout << "Please enter two variables: " << endl;

		cout << "Please enter the first variable: ";
		cin >> input_a;
		digit1(input_a);

		cout << "Please enter the second variable: ";
		cin >> input_b;
		digit2(input_b);

		cout << endl;

		sort2(digit1(input_a), digit2(input_b));

		cout << "Would you like to retry? [y/n] ";
		cin >> ans;
		if (ans == "y")
		{
			repeat = false;
			cout << "_____________________________________________________" << endl << endl;
		}
		else
		{
			repeat = true;
			cout << "Goodbye!";
		}
		cout << endl;
		
	}

	//system("pause");
	return 0;
}
