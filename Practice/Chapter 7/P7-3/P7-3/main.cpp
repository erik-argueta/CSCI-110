/*
 Write a function that computes the average value of an array of floating-point data:
 
 double average(double* a, int size)
 
 In the function, use a pointer variable, not an integer index, to traverse the array elements
 */

#include <iostream>

using namespace std;

float average(float* a, int size)
{
	int total = 0;
	
	for (int i = 0; i < size; i++)
	{
		total += *(a + i);
	}
	
	float avg = total / size;
	
	return avg;
}

int main()
{
	int capacity = 5;
	int size = 0;
	float array1[capacity];
	float input;
	
	cout << "Please enter five values to find the average of them: ";
	while (size < capacity)
	{
		cin >> input;
		if (size < capacity)
		{
			array1[size] = input;
			size++;
		}
	}
	
	float result = average(array1, size);
	
	cout << "Average is " << result << endl;
	
	return 0;
}
