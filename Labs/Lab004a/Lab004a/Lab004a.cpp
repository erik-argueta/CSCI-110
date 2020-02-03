// Lab004a.cpp : Defines the entry point for the console application.
//


/*
Write a function
bool equals(int a[], int a_size, int b[], int b_size)
that checks whether two arrays have the same elements in the same order
*/


//#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const int CAPACITY_A = 10;
const int CAPACITY_B = 10;
const int CAPACITY_C = 10;
const int CAPACITY_D = 10;
int input_a;
int input_b;
int input_c;
int input_d;
int counter = 0;
int counter2 = 0;
int current_size_a = 0;
int current_size_b = 0;
int current_size_c = 0;
int current_size_d = 0;
int array_a[CAPACITY_A];
int array_b[CAPACITY_B];
int array_c[CAPACITY_C];
int array_d[CAPACITY_D];

int a(int input_a)
{
	while (current_size_a < CAPACITY_A)
	{
		cin >> input_a;
		if (current_size_a < CAPACITY_A)
		{
			array_a[current_size_a] = input_a;
			current_size_a++;
		}
	}
	return array_a[current_size_a];
}

int b(int input_b)
{
	while (current_size_b < CAPACITY_B)
	{
		cin >> input_b;
		if (current_size_b < CAPACITY_B)
		{
			array_b[current_size_b] = input_b;
			current_size_b++;
		}
	}
	return array_b[current_size_b];
}

int c(int input_c)
{
	while (current_size_c < CAPACITY_C)
	{
		cin >> input_c;
		if (current_size_c < CAPACITY_C)
		{
			array_c[current_size_c] = input_c;
			current_size_c++;
		}
	}
	return array_c[current_size_c];
}

int d(int input_d)
{
	while (current_size_d < CAPACITY_D)
	{
		cin >> input_d;
		if (current_size_d < CAPACITY_D)
		{
			array_d[current_size_d] = input_d;
			current_size_d++;
		}
	}
	return array_d[current_size_d];
}

bool equals(int a, int b)
{
	if (counter >= 10)
	{
		return false;
	}

	else
	{
		return true;
	}
}

bool equals2(int c, int d)
{
	if (counter2 >= 10)
	{
		return false;
	}

	else
	{
		return true;
	}
}

int main()
{
	// Sets A & B
	{
		cout << "Please enter two sets of numbers in the SAME sequence." << endl;
		cout << "There must be TEN values for each set." << endl << endl;

		cout << "Set A: ";
		a(input_a);

		//cout << endl;

		cout << "Set B: ";
		b(input_b);

		cout << endl;

		for (int pos = 0; pos != 10; pos++)
		{
			if (array_a[pos] == array_b[pos])
			{
				counter++;
			}
		}

		equals(a(input_a), b(input_b));
		
		cout << "Set A: ";

		for (int z = 0; z != 10; z++)
		{
			cout << " " << array_a[z];
		}
		
		cout << endl;
		
		cout << "Set B: ";

		for (int z = 0; z != 10; z++)
		{
			cout << " " << array_b[z];
		}
		
		cout << endl;

		if ((equals(a(input_a), b(input_b))))
		{
			cout << "The sets are different." << endl;
		}

		if (!equals(a(input_a), b(input_b)))
		{
			cout << "The sets are exactly the same." << endl;
		}

	}
	
	cout << endl << "-------------------------------------------------------------" << endl << endl;

	// Sets C & D
	{
		cout << "Please enter two sets of numbers in a DIFFERENT sequence." << endl;
		cout << "There must be TEN values for each set." << endl << endl;

		cout << "Set C: ";
		c(input_c);

		cout << "Set D: ";
		d(input_d);

		cout << endl;

		for (int pos = 0; pos != 10; pos++)
		{
			if (array_c[pos] == array_d[pos])
			{
				counter2++;
			}
		}

		equals2(c(input_c), d(input_d));
		
		cout << "Set C: ";

		for (int z = 0; z != 10; z++)
		{
			cout << " " << array_c[z];
		}
		
		cout << endl;
		
		cout << "Set D: ";

		for (int z = 0; z != 10; z++)
		{
			cout << " " << array_d[z];
		}
		
		cout << endl;
		
		if ((equals2(c(input_c), d(input_d))))
		{
			cout << "The sets are different." << endl;
		}

		if (!equals2(c(input_c), d(input_d)))
		{
			cout << "The sets are exactly the same." << endl;
		}

		cout << endl << endl;
	}
	
	//system("pause");
	return 0;
}
