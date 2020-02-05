/*
 Program Description: Removes duplicate integers in an array.
 Program Author: Erik Argueta
 Variable Inputs: input, arra_1[CAPACITY]
 Process Flow: Scans through the given array and removes any duplicate integers.
 Variable Outputs: An array with the duplicates removed.
*/

//#include "stdafx.h"
#include <iostream>

using namespace std;

void removeNumber(int numbers[], int index, int& size)
{
	for (int i = index; i < size - 1; i++)
	{
		numbers[i] = numbers[i + 1];
	}
	size--;
}

void removeDuplicate(int numbers[], int& size)
{
	int number;
	for (int i = 0; i < size; i++)
	{
		number = numbers[i];
		for (int j = i + 1; j < size; j++)
		{
			if (number == numbers[j])
			{
				removeNumber(numbers, j, size);
				j--;
			}
		}
	}
}

int main()
{
	const int CAPACITY = 9;
	int current_size = 0;
	int array_1[CAPACITY];
	int input;


	cout << "Please insert a sequence of values with duplicate values: ";
	while (current_size < CAPACITY)
	{
		cin >> input;
		if (current_size < CAPACITY)
		{
			array_1[current_size] = input;
			current_size++;
		}
	}

	cout << endl;

	cout << "Array (with Duplicates) ";
	for (int i = 0; i < current_size; i++)
	{
		cout << array_1[i] << " ";
	}

	cout << endl << endl;

	removeDuplicate(array_1, current_size);

	cout << "Array (without Duplicates) ";

	for (int i = 0; i < current_size; i++)
	{
		cout << array_1[i] << " ";
	}

	cout << endl << endl;

	//system("pause");
	return 0;
}

