// Lab004a.cpp : Defines the entry point for the console application.
//


/*
Write a function
bool equals(int a[], int a_size, int b[], int b_size)
that checks whether two arrays have the same elements in the same order
*/



//#include "stdafx.h"
#include <iostream>

using namespace std;

const int CAPACITY_A = 4;
const int CAPACITY_B = 4;
int values_a = 0;
int values_b = 0;

bool equal(int input_a[CAPACITY_A], int curent_size_a, int b[CAPACITY_B], int current_size_b)
{
	
	return true;
}




int main()
{
	const int CAPACITY_A = 4;
	const int CAPACITY_B = 4;
	int values_a[CAPACITY_A];
	int values_b[CAPACITY_B];
	int current_size_a = 0;
	int current_size_b = 0;
	int input_a;
	int input_b;

	// Arrays
	{
		// Set1
		{
			cout << "Please enter a series of 5 numbers with spaces inbetween for Set A" << endl << "(i.e. 1 2 3 4 5 ...)" << endl;
			while (cin >> input_a && current_size_a < CAPACITY_A)
			{
				if (current_size_a < CAPACITY_A)
				{
					values_a[current_size_a] = input_a;
					current_size_a++;
				}
			}
			cout << "Set A received" << endl << endl;
		}

		//Set 2
		{
			cout << "Please enter a series of 5 numbers with spaces inbetween for Set B" << endl << "(i.e. 1 2 3 4 5 ...)" << endl;
			while (cin >> input_b && current_size_b < CAPACITY_B)
			{
				if (current_size_b < CAPACITY_B)
				{
					values_b[current_size_b] = input_b;
					current_size_b++;
				}
			}
			cout << "Set B received" << endl << endl;
		}
		cout << endl;
	}
	
	//equal(input_a[CAPACITY_A], input_b[CAPACITY_B]);
	
	

	/* if ()
	{
		cout << "The two sets are exactly the same." << endl;
	}
	else
	{
		cout << "The two sets are different." << endl;
	} */

	//system("pause");
    return 0;
}

