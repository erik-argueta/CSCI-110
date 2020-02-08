/*
 Write a function int* read_data(int& size) that reads data from cin until the user terminates input by entering Q. The function should set the size reference parameter to the number of numeric inputs.
 
 Return a pointer to an array on the heap. That array should have exactly size elements. Of course, you won’t know at the outset how many elements the user will enter. Start with an array of 10 elements, and double the size whenever the array fills up. At the end, allocate an array of the correct size and copy all inputs into it. Be sure to delete any intermediate arrays.
 
 Test Cases:
 1. Your program should prompt the user for the following sequence of numbers  1.3  4  5.2  16.3  9.99  7.21  4.5  7.43  11.21  12.5 to fill out an array (10).
 Note: Please print the input stream
 
 2. Then, prompt the user for another 5 numbers as following 1.5 4.5 9.5 16.5 7.5 11.5
  Note: Please print all 15 members of your final array.
 
 3. You should use the Dynamic Memory Allocation (DMA) technique to implement this exercise (See section 7.4 for more information)
 */

#include <iostream>

using namespace std;

float* read_data(int& size)
{
	int max_size = 15;
	float* array1 = new float[max_size];
	size = 0;
	float input;
	
	cout << "Enter some integers. Press Q when finished." << endl;
	
	while (cin >> input)
	{
		size++;
		if (size <= max_size)
		{
			array1[size - 1] = input;
		}
		else
		{
			float* temp = new float[max_size + 1];
			for (int i = 0; i < max_size; i++)
			{
				temp[i] = array1[i];
			}
			
			temp[max_size] = input;
			
			delete[] array1;
			
			array1 = new float[max_size];
			
			for (int i = 0; i < max_size; i++)
			{
				array1[i] = temp[i];
			}
			
			delete[] temp;
			
			max_size = max_size;
		}
	}
	
	float* return_array = new float[size];
	for (int i = 0; i < size; i++)
	{
		return_array[i] = array1[i];
	}
	
	delete[] array1;
	
	cin.clear(input);
	cin.ignore();
	
	return return_array;
}

/*
float* read_data2(int& size)
{
	cout << "Please enter five more values. Enter Q when finished." << endl;
	
	int max_size = 15, input;
	float* array2 = new float[max_size];
	
	while(cin >> input)
	{
		size++;
		if (size <= max_size)
		{
			array2[size - 1] = input;
		}
		
		else
		{
			float* temp2 = new float[max_size + 1];
			for (int i = 0; i < max_size; i++)
			{
				temp2[i] = array2[i];
			}
			
			temp2[max_size] = input;
			
			delete[] temp2;
			
			max_size = max_size * 2;
		}
	}
	
	float* return_array2 = new float[size];
	for (int i = 0; i < size; i++)
	{
		return_array2[i] = array2[i];
	}
	
	delete[] array2;
	return return_array2;
} */

int main()
{
	int size = 0;
	float* array1;
	
	array1 = read_data(size);
	//array1 = read_data2(size);
	
	for (int i = 0; i < size; i++)
	{
		cout << array1[i] << " ";
	}
	
	cout << endl;
	
	delete[] array1;
	return 0;
}
