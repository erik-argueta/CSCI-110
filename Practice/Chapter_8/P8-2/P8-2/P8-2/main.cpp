/*
 Write a program that reads a file containing floating-point numbers.
 Print the average of the numbers in the file. Prompt the user for the file name.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void sum(ifstream& in_file, float number, int& counter, float& total)
{
	total = total + number;
	counter++;
}

float average(float& total, int SIZE)
{
	float avg;
	avg = total/SIZE;
	return avg;
}

int main()
{
	string user_input;
	ifstream in_file;
	
	// /Users/erik-argueta/Desktop/Chapter_8/P8-2/numbers.txt
	
	cout << "Please enter the name of your file: " << endl;
	cin >> user_input;
	in_file.open(user_input);

	const int SIZE = 10;
	int counter1 = 0;
	int current_size = 0;
	float array1[SIZE];
	float total1 = 0;
	float result1;
	
	while (counter1 < SIZE)
	{
		float num1;
		in_file >> num1;
		
		if (current_size < SIZE)
		{
			array1[current_size] = num1;
			current_size++;
		}
		
		cout << num1 << endl;
		
		sum(in_file, num1, counter1, total1);
	}
	
	result1 = average(total1, SIZE);
	
	ofstream out_file;
	out_file.open("/Users/erik-argueta/Desktop/Chapter_8/P8-2/numbers.txt");
	if (out_file.fail()) { cout << "ERROR: out_file not found" << endl; return 2;}
	
	for (int i = 0; i < current_size; i++)
	{
		out_file << array1[i] << endl;
	}
	
	cout << endl << "Average of Column: " << result1 << endl;
	out_file << endl << "Average of Column: " << result1 << endl;
	
	
	
	in_file.close();
	out_file.close();
	
	return 0;
}
