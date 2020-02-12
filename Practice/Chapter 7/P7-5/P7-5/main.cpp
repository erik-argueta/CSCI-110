/*
 Write a function that reverses the values of an array of floating-point data:
	void reverse(double* a, int size)
 In the function, use two pointer variables, not integer indexes, to traverse the array elements.
 */

#include <iostream>

using namespace std;

void swapper(float* a, float* b)
{
	float temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(float* a, int size)
{
	float* p1 = a;
	float* p2 = (a + size - 1);
	
	while (p1 < p2)
	{
		swapper(p1, p2);
		p1++;
		p2--;
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	int capacity = 5;
	int size = 0;
	float array1[capacity];
	float input;
	
	cout << "Please enter five float-point values: ";
	while (size < capacity)
	{
		cin >> input;
		if (size < capacity)
		{
			array1[size] = input;
			size++;
		}
	}
	
	reverse(array1, size);
	
	return 0;
}
