/*
 
 
 
 */

#include <iostream>

using namespace std;

void removeNum(int array1[], int index, int& size)
{
	for (int i = index; i < size - 1; i++)
	{
		array1[i] = array1[i + 1];
	}
	size--;
}



void removeDupl(int array1[], int& size)
{
	for (int i = 0; i < size; i++)
	{
		int number = array1[i];
		for (int j = i + 1; j < size; j++)
		{
			if (number == array1[j])
			{
				removeNum(array1, j, size);
				j--;
			}
		}
	}
}

int main()
{
	int CAPACITY = 9;
	int current_size = 0;
	int array_a [CAPACITY];
	int input;
	
	cout << "Please enter a series of numbers with duplicate values: ";
	while (current_size < CAPACITY)
	{
		cin >> input;
		if (current_size < CAPACITY)
		{
			array_a[current_size] = input;
			current_size++;
		}
	}
	
	cout << endl;
	
	cout << "This is the Array you have entered: ";
	for (int i = 0; i < current_size; i++)
	{
		cout << array_a[i] << " ";
	}
	
	cout << endl << endl;
	
	
	removeDupl(array_a, current_size);
	
	cout << "This is the Array you have entered with the Duplicates removed: ";
	for (int i = 0; i < current_size; i++)
	{
		cout << array_a[i] << " ";
	}
	
	cout << endl << endl;
	
	
	return 0;
}
