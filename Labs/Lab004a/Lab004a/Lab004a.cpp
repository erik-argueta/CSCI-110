// Lab004a.cpp : Defines the entry point for the console application.
//


/*
Write a function
bool equals(int a[], int a_size, int b[], int b_size)
that checks whether two arrays have the same elements in the same order
*/

/*
Need to set a route:
1. User must input Set A, Set B.
 
refer to page 261
*/

//include "stdafx.h"
#include <iostream>

using namespace std;



/* bool equal(int input_a[CAPACITY_A], int curent_size_a, int b[CAPACITY_B], int current_size_b)
{
int pos = 0;
int counter = 0;
bool check1 = false;

while (pos != CAPACITY_A && pos != CAPACITY_B && check1)
{
if (array_a[pos] == array_b[pos])
{
counter++;
pos++;
}
else
{
pos++;
}
}


return true;
}
*/



int main()
{
	const int CAPACITY_A = 5;
	const int CAPACITY_B = 5;
	int input_a;
	int input_b;
	int current_size_a = 0;
	int current_size_b = 0;
	int array_a[CAPACITY_A];
	int array_b[CAPACITY_B];
	bool set_a = false;
	bool set_b = false;

	int array_z[5] = { 1, 2, 3, 4, 5 };

	// This is an example of an Array
	{
		for (int z = 0; z < 5; z++)
		{
			cout << array_z[z] << endl;
		}
	}

	cout << endl << endl;
	// Array A
	{
		cout << "Please enter five values for Set A (i.e. 1 2 3 4 5)" << endl;
		cout << "Set A: ";

		while (current_size_a != CAPACITY_A)
		{
			cin >> input_a;
			if (current_size_a != CAPACITY_A)
			{
				array_a[current_size_a] = input_a;
				current_size_a++;
			}
		}
		
		for (int n = 0; n != current_size_a; n++)
		{
			cout << array_a[n] << endl;
		}
	}
		
	// Array B
	{
		cout << endl;
		cout << "Please enter five numbers for Set B" << endl;
		cout << "Set B: ";

		while (current_size_b != CAPACITY_B)
		{
			cin >> input_b;
			if (current_size_b != CAPACITY_B)
			{
				array_b[current_size_b] = input_b;
				current_size_b++;
			}
		}
		
		for (int n = 0; n != current_size_b; n++)
		{
			cout << array_b[n] << endl;
		}
	}


	

	//system("pause");
	return 0;
}

