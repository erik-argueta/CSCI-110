/*
Program Author: Erik Argueta
*/


//#include "stdafx.h"
#include <iostream>

using namespace std;

bool equals(int a[], int a_size, int b[], int b_size)
{
	int counter = 0;

	if (a_size != b_size) { return false; }

	for (int i = 0; i < a_size; i++)
	{
		if (a[i] == b[i])
		{
			counter++;
		}
	}

	if (counter < 10)
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
	const int CAPACITY = 10;
	int current_size1 = 0;
	int current_size2 = 0;
	int current_size3 = 0;
	int current_size4 = 0;
	int array1[CAPACITY];
	int array2[CAPACITY];
	int array3[CAPACITY];
	int array4[CAPACITY];
	int input1;
	int input2;
	int input3;
	int input4;

	// Sets A & B
	{
		cout << "Please enter two arrays of numbers in the SAME sequence." << endl;
		cout << "There must be TEN values for each set." << endl << endl;

		cout << "Array A: ";
		while (current_size1 < CAPACITY)
		{
			cin >> input1;
			if (current_size1 < CAPACITY)
			{
				array1[current_size1] = input1;
				current_size1++;
			}
		}

		cout << "Array B: ";
		while (current_size2 < CAPACITY)
		{
			cin >> input2;
			if (current_size2 < CAPACITY)
			{
				array2[current_size2] = input2;
				current_size2++;
			}
		}
		cout << endl;

		bool result = equals(array1, current_size1, array2, current_size2);

		if (result)
		{
			cout << "The two arrays are identical." << endl;
		}
		else
		{
			cout << "The two arrays are NOT identical." << endl;
		}
	}

	cout << endl << "-------------------------------------------------------------" << endl << endl;

	// Array C & D
	{
		cout << "Please enter two arrays of numbers in the SAME sequence." << endl;
		cout << "There must be TEN values for each set." << endl << endl;

		cout << "Array C: ";
		while (current_size3 < CAPACITY)
		{
			cin >> input3;
			if (current_size3 < CAPACITY)
			{
				array3[current_size3] = input3;
				current_size3++;
			}
		}

		cout << "Array D: ";
		while (current_size4 < CAPACITY)
		{
			cin >> input4;
			if (current_size4 < CAPACITY)
			{
				array4[current_size4] = input4;
				current_size4++;
			}
		}
		cout << endl;

		bool result = equals(array3, current_size3, array4, current_size4);

		if (result)
		{
			cout << "The two arrays are identical." << endl;
		}
		else
		{
			cout << "The two arrays are NOT identical." << endl;
		}
	}
	
	cout << endl;

	//system("pause");
	return 0;
}
