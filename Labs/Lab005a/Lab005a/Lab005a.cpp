/*
 Program Description:
 Program Author: Erik Argueta
 Variable Inputs:
 Process Flow:
 Variable Outputs:
 */

// #include "stdafx.h"
#include <iostream>

using namespace std;

// Function to swap two memory contents
void swap(double* a, double* b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}

// Function to reverse the array through pointers
void reverse(double* array, int array_size)
{
	// pointer1 pointing at the beginning of the array
	double* pointer1 = array;
	
	// pointer2 pointing at the end of the array
	double* pointer2 = array + array_size - 1;
	
	while (pointer1 < pointer2)
	{
		swap(poin ter1, pointer2);
		pointer1++;
		pointer2--;
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	const int CAPACITY = 10;
	double array1[CAPACITY];
	int current_size = 0;
	double input;
	
	cout << "Please insert an array of ten values: ";
	while (current_size < CAPACITY)
	{
		cin >> input;
		if (current_size < CAPACITY)
		{
			array1[current_size] = input;
			current_size++;
		}
	}
	
	cout << endl;
	
	cout << "Array A: " << endl;
	for (int i = 0; i < CAPACITY; i++)
	{
		cout << array1[i] << " ";
	}
	
	cout << endl << endl;;
	
	cout << "Array A (reversed): " << endl;
	reverse(array1, CAPACITY);
	
	cout << endl;
	
	//system("pause");
	return 0;
}
