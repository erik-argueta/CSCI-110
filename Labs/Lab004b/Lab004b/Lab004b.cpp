/*

Write a function that removes duplicates from an array. For example, if remove_
duplicates is called with an array containing
1 4 9 16 9 7 4 9 11
then the array is changed to
1 4 9 16 7 11
Your function should have a reference parameter for the array size that is updated when removing the duplicates.

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

