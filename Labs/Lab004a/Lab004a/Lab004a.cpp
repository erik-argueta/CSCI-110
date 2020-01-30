// Lab004a.cpp : Defines the entry point for the console application.
//


/*
Write a function
bool equals(int a[], int a_size, int b[], int b_size)
that checks whether two arrays have the same elements in the same order
*/


//include "stdafx.h"
#include <iostream>

using namespace std;

const int CAPACITY_A = 5;
const int CAPACITY_B = 5;
int input_a;
int input_b;
int counter = 0;
int current_size_a = 0;
int current_size_b = 0;
int array_a[CAPACITY_A];
int array_b[CAPACITY_B];

int a(int input_a)
{
	while (current_size_a != CAPACITY_A)
	{
		cin >> input_a;
		if (current_size_a != CAPACITY_A)
		{
			array_a[current_size_a] = input_a;
			current_size_a++;
		}
	}
	return array_a[current_size_a];
}

int b(int input_b)
{
	while (current_size_b != CAPACITY_B)
	{
		cin >> input_b;
		if (current_size_b != CAPACITY_B)
		{
			array_b[current_size_b] = input_b;
			current_size_b++;
		}
	}
	return array_b[current_size_b];
}

bool equals(int array_a[current_size_a], int array_b[current_size_b])
{
	for (int pos = 0; pos != 5; pos++)
	{
		if (array_a[pos] == array_b[pos])
		{
			counter++;
		}
	}
	
	if (counter < 5)
	{
		return false;
	}
	
	if (counter > 5)
	{
		return true;
	}
}


int main()
{
	int input_a;
	int input_b;

	/* This is an example of an Array
	{
		for (int z = 0; z < 5; z++)
		{
			cout << array_z[z] << " || ";
		}
	} */

	cout << endl << endl;
	

	cout << "Please enter five values for Set A (i.e. 1 2 3 4 5)" << endl;
	cout << "Set A: ";
	a(input_a);
	
	cout << endl << endl;
	
	cout << "Please enter five values for Set B (i.e. 1 2 3 4 5)" << endl;
	cout << "Set B: ";
	b(input_b);
	
	cout << endl;
	
	


	//system("pause");
	return 0;
}
