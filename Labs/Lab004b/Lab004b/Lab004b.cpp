#include <iostream>

using namespace std;

void removeNumber(int numbers[], int index, int& size)
{
	for(int i = index; i < size - 1; i++)
	{
		numbers[i] = numbers[i + 1];
	}
	size--;
}

void removeDuplicate(int numbers[], int& size)
{
	int number;
	for(int i = 0; i < size; i++)
	{
		number = numbers[i];
		for(int j = i + 1; j < size; j++)
		{
			if(number == numbers[j])
			{
				removeNumber(numbers, j, size);
				j--;
			}
		}
	}
}

int main()
{
	int i;
	int array_1[] = { 1,4,9,16,9,7,4,9,4,11 };
	int size = 10;
	
	cout << "Set (with Duplicates) ";
	for (int i = 0; i < size; i++)
	{
		cout << array_1[i] << " ";
	}
	
	cout << endl << endl;
	
	removeDuplicate(array_1, size);
	
	cout << "Set (without Duplicates) ";

	for(i = 0; i < size; i++)
	{
		cout << array_1[i] << " ";
	}
	
	cout << endl << endl;
	
    return 0;
}
