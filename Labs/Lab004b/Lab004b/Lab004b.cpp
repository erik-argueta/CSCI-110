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

const int CAPACITY = 9;
int current_size = 9;

void array_copy(int array1[], int array2[])
{
	for (int i = 0; i < current_size; i++)
	{
		array2[i] = array1[i];
	}
}

void duplicate_rem(int array1[], int array2[])
{
	for (int i = 0; i < current_size; i++)
	{
		if (array1[i] == array2[i])
		{
			array2[i - 1] = array2[i];
			current_size--;
		}
	}
}


int main()
{
	const int CAPACITY = 9;
	int array_a[] = {1, 4, 9, 16, 9, 7, 4, 9, 11};
	int array_b[CAPACITY];
	
	
	for (int i = 0; i < CAPACITY; i++)
	{
		cout << array_a[i] << " ";
	}
	cout << endl << endl;
	
	// Array Copy Function
	{
		array_copy(array_a, array_b);
		
		for (int i = 0; i < CAPACITY; i++)
		{
			cout << array_a[i] << " ";
		}
		cout << endl << endl;
		
		for (int i = 0; i < CAPACITY; i++)
		{
			cout << array_b[i] << " ";
		}
	}
	
	cout << endl << endl;
	
	// Duplicate Removal Function
	{
		duplicate_rem(array_a, array_b);
		
		for (int i = 0; i < current_size; i++)
		{
			cout << array_b[i] << " ";
		}
	}
	
	cout << endl << endl;
	
	
	

	// system("pause");
	return 0;
}
