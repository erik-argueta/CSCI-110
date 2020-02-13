/*
Program Description: Runs through text file and prints a table with the average Author: Erik Argueta
Input Variables: input,
Process Flow: scans through input file and calculates the average in the two
columns
Output Variables: Output file and terminal with the table and column average
 */

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

void add(ifstream& in_file, int& counter, float& total, float number)
{
	total = total + number;
	counter--;
}

float avg(float& total, int size)
{
	float average = total / size;
	return average;
}

int main() {
// D:\\CSCI110\\Labs\\Lab006b\\numbers.txt

	string input;
	cout << "Please enter the pathway to your file: ";
	cin >> input;
	ifstream in_file;
	in_file.open(input);
	if (in_file.fail())
	{
		cout << "ERROR: File not found." << endl;
		system("pause");
		return 1;
	}
	ofstream out_file;
	out_file.open("D:\\CSCI110\\Labs\\Lab006b\\OUTPUT.txt");
	if (out_file.fail())
	{
		cout << "ERROR: File not found." << endl;
		system("pause");
		return 2;
	}
	
	float num1;
	float num2;
	float total1 = 0;
	float total2 = 0;
	float average1;
	float average2;
	int counter1 = 0;
	int counter2 = 0;
	int counter3 = 10;
	int counter4 = 10;
	int size = 10;
	
	cout << endl;
	
	cout << setw(35) << "============================" << endl;
	cout << setw(9) << "||" << setw(21) << "LAB6B DATA TABLE" << setw(5) << "||" << endl;
	cout << setw(35) << "============================" << endl;
	
	out_file << setw(35) << "============================" << endl;
	out_file << setw(9) << "||" << setw(17) << "LAB6B DATA TABLE" << setw(9) << "||" << endl;
	out_file << setw(35) << "============================" << endl;
	
	cout << setw(19) << "----------" << setw(13) << "----------" << endl;
	cout << setw(19) << "|Column 1|" << setw(13) << "|Column 2|" << endl;
	cout << setw(19) << "----------" << setw(13) << "----------" << endl;
	
	out_file << setw(19) << "----------" << setw(13) << "----------" << endl;
	out_file << setw(19) << "|Column 1|" << setw(13) << "|Column 2|" << endl;
	out_file << setw(19) << "----------" << setw(13) << "----------" << endl;
	
	// Function
	{
		while (counter1 < 10 || counter2 < 10)
		{
			in_file >> num1 >> num2;
			cout << setw(15) << num1 << setw(15) << num2 << endl;
			out_file << setw(15) << num1 << setw(15) << num2 << endl;
			counter1++;
			counter2++;
			
		}
		in_file.close(); in_file.open(input);
		if (in_file.fail())
		{
			cout << "ERROR: File not found." << endl; system("pause");
			return 3;
		}
		while (counter3 > 0 || counter4 > 0)
		{
			float num1;
			float num2;
			
			in_file >> num1 >> num2;
			
			add(in_file, counter3, total1, num1);
			add(in_file, counter4, total2, num2);
			
		}
			average1 = avg(total1, size);
			average2 = avg(total2, size);
	}
	
	cout << "-----------------------------------" << endl;
	out_file << "-----------------------------------" << endl;
	cout << "Average: " << setw(7) << average1 << setw(15) << average2 << endl << endl;
	out_file << "Average: " << setw(7) << average1 << setw(15) << average2 << endl << endl;
	
	in_file.close();
	out_file.close();
	system("pause");
	return 0;
}
