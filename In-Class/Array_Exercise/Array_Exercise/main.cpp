// Array001.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <algorithm> // allows use of sort()

using namespace std;


int main()
{
	float total = 0;
	float avg = 0;
	float values[] = { 32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65 };
	float min = values[0];
	float max = values[0];
	const int CAPACITY = 10;
	int position = 0;
	int current_size = 10;
	float a_value;
	float b_value;

	for (int i = 0; i < CAPACITY; i++)
	{
		cout << "values [" << i << "] = " << values[i] << endl;
		/*

		total = total + values[i];
		avg = total / SIZE;

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

	/*
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
	*/

	cout << endl;

	// Removing an Element in Ordered Array
	{
		cout << "Please enter a position: ";
		cin >> a_value;

		position = a_value;
		position = position - 1;
		for (int i = position + 1; i < current_size; i++)
		{
			values[i - 1] = values[i];
		}
		current_size--;

		for (int i = 0; i < current_size; i++)
		{
			cout << "values [" << i << "] = " << values[i] << endl;
		}
	}

	cout << endl;

	// Inserting Value in Ordered Array
	{
		cout << "Please enter a Number: ";
		cin >> b_value;

		if (current_size < CAPACITY)
		{
			current_size++;
			for (int i = current_size - 1; i > position; i--)
			{
				values[i] = values[i - 1];
			}
			values[position] = b_value;
		}

		for (int i = 0; i < current_size; i++)
		{
			cout << "values [" << i << "] = " << values[i] << endl;
		}
	}

	cout << endl << endl;

	// Sorting and sorting reversed
	{
		sort(values, values + current_size);

		for (int i = 0; i < current_size; i++)
		{
			cout << "values [" << i << "] = " << values[i] << endl;
		}

		cout << endl << endl;

		reverse(values, values + current_size);
		for (int i = 0; i < current_size; i++)
		{
			cout << "values [" << i << "] = " << values[i] << endl;
		}
	}

	system("pause");
	return 0;
}

