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
	double* pointer1 = array;	// array[0]
	
	// pointer2 pointing at the end of the array
	double* pointer2 = array + array_size - 1;	// array[10]
	
	while (pointer1 < pointer2)
	{
		swap(pointer1, pointer2);
		pointer1++;
		pointer2--;
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}


// Function to print the array
void print(double* array, int size)
{
	// Points to the last value of array
	double* length = array + size; 	// double length = array[10] // [10]
	
	// Position points to beginning of array
	double* position = array; 		// double position = array[0] // [0]
	
	//cout << "Array = ";
	for (position = array; position < length; position++)
//	for ([0] = 0; [0] < [10]; [0]++)
//	for (double position = 0; position < 10; position++)
	{
		cout << *position << " ";
	}
}

int main()
{
	const int CAPACITY = 10;
	double array1[CAPACITY];
	int current_size = 0;
	double input;
	
	cout << "Please insert an array of values: ";
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
	
	cout << "Array A" << endl;
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
