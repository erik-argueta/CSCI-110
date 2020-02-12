/*
 Write a function that returns a pointer to the maximum value of an array of floating- point data:
	double* maximum(double* a, int size)
 If size is 0, return NULL.
 */

#include <iostream>

using namespace std;

float* maximum(float* a, int size)
{
	if (size == 0)
	{
		return NULL;
	}
	
	int max_num = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (*(a + i) > *(a + max_num))
		{
			max_num = i;
		}
	}
	
	return a + max_num;
}

int main()
{
	int capacity = 5;
	int size = 0;
	float array1[capacity];
	float input;
	
	cout << "Please enter five numbers: ";
	while (size < capacity)
	{
		cin >> input;
		if (size < capacity)
		{
			array1[size] = input;
			size++;
		}
	}
	
	float* max = maximum(array1, size);
	
	cout << "The maximum is: " << *max << endl;
	
	return 0;
}
