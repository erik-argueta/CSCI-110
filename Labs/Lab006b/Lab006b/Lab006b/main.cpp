//
//  main.cpp
//  Read-Text
//
//  Created by Erik Argueta on 2/11/20.
//  Copyright © 2020 Erik Argueta. All rights reserved.
//

#include <iostream>
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
	
	// /Users/erik-argueta/Desktop/Read-Text/test-text.txt
	
	string input;
	
	cout << "Please enter the pathway to your file: ";
	cin >> input;
	
	ifstream in_file;
	in_file.open(input);
	if (in_file.fail())
	{
		cout << "ERROR: File not found." << endl;
		return 1;
	}
	
	ofstream out_file;
	out_file.open("/Users/erik-argueta/Desktop/Read-Text/output.txt");
	if (out_file.fail())
	{
		cout << "ERROR: File not found." << endl;
		return 1;
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
	cout << setw(18) << "Column 1" << setw(14) << "Column 2" << endl;
	out_file << setw(18) << "Column 1" << setw(14) << "Column 2" << endl;
	
	while (counter1 < 10 || counter2 < 10)
	{
		in_file >> num1 >> num2;
		cout << setw(15) << num1 << setw(15) << num2 << endl;
		out_file << setw(15) << num1 << setw(15) << num2 << endl;
		
		
		
		counter1++;
		counter2++;
	}

	in_file.close();
	
	in_file.open(input);
	if (in_file.fail())
	{
		cout << "ERROR: File not found." << endl;
		return 1;
	}
	
	while (counter3 > 0 || counter4 > 0)
	{
		float num1;
		float num2;
		in_file >> num1 >> num2;
		
		add(in_file, counter3, total1, num1);
		add(in_file, counter4, total2, num2);
	}

	// /Users/erik-argueta/Desktop/Read-Text/test-text.txt
	average1 = avg(total1, size);
	average2 = avg(total2, size);
	
	cout << "-----------------------------------" << endl;
	out_file << "-----------------------------------" << endl;
	
	cout << "Average: " << setw(7) << average1 << setw(15) << average2 << endl;
	out_file << "Average: " << setw(7) << average1 << setw(15) << average2 << endl;
	
	in_file.close();
	out_file.close();
	
	return 0;
}
