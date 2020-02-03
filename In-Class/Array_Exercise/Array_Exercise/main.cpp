// Array001.cpp : Defines the entry point for the console application.
//

// #include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	float total = 0;
	float avg = 0;
	const int SIZE = 10;
	float values[] = { 32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65 };
	float min = values[0];
	float max = values[0];
	int position = 0;
	float a_value;
	float b_value;

	for (int i = 0; i < 10; i++)
	{
		/*
		total = total + values[i];
		avg = total / SIZE;
		*/
		cout << "values [" << i << "] = " <<  values[i] << endl;
		/*
		if (values[i] > max)
		{
			max = values[i];
		}
		
		if (values[i] < min)
		{
			min = values[i];
		}
		*/
	}

	/*
	cout << "total is " << total << endl;
	cout << "average is " << avg << endl;
	cout << "Max is " << max << endl;
	cout << "Min is " << min << endl;
	*/

	cout << "Please enter a number to search for: ";
	cin >> a_value;

	for (int i = 0; i < 10; i++)
	{
		if (a_value == values[i])
		{
			position = i + 1;
			cout << a_value << " is located under position " << position << endl;
			break;
		}
	}

	cout << "Please enter another number: ";
	cin >> a_value;
	values[position - 1] = a_value;

	for (int i = 0; i < 10; i++)
	{
		cout << "values [" << i << "] = " << values[i] << endl;
	}


	//system("pause");
    return 0;
}

