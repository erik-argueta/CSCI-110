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

void removeNumber(int array1[], int index, int &size)
{
	for(int i = 0; i < size; i++)
	{
		array1[i] = array1[i + 1];
	}
	size--;
}
void removeDuplicates(int array1[], int& size)
{
	int i, j;
	int number;
	for (i = 0; i < size; i++)
	{
		number = array1[i];
		for (j = i + 1; j < size; j++)
		{
			if (number == array1[j])
			{
				removeNumber(array1, j, size);
				j--;
			}
		}
	}
}

int main()
{
	int capacity = 9;
	int array_a[] = {1, 4, 9, 16, 9, 7, 4, 9, 11};
	
	cout << "Set 1 (with Duplicates) ";
	for (int i = 0; i < capacity; i++)
	{
		cout << array_a[i] << " ";
	}
	
	removeDuplicates(array_a, capacity);
	
	cout << endl << endl;
	
	cout << "Set 1 (without Duplicates) ";
	for (int i = 0; i < capacity; i++)
	{
		cout << array_a[i] << " ";
	}
	
	cout << endl << endl;
	
	
	

	// system("pause");
	return 0;
}
